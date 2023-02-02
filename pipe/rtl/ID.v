module ID(
    input                     clk,
    input                     rst,
    input                     id_flush_i,
    // from if
    input  [`PC_WIDTH-1:0]    IF_pc_i,
    input  [`INSTR_WIDTH-1:0] ifu_instr_i,
    input                     ifu_prdt_taken_i,
    input                     ifu_pc_misalign_i,
    input                     ifu_bus_err_i,
    // from id
    input                     id_load_use_i,
    // to id
    output [`PC_WIDTH-1:0]    ID_pc_o,
    output [`INSTR_WIDTH-1:0] ID_instr_o,
    output                    ID_prdt_taken_o,
    output                    ID_pc_misalign_o,
    output                    ID_if_bus_err_o,
    // handshack
    input                     IF_valid_i,
    input                     EX_ready_i,
    output                    ID_valid_o,
    output                    ID_ready_o
);

    wire run;
    assign run = (!id_load_use_i);
    assign ID_valid_o = (ID_data_valid && run && !id_flush_i);
    assign ID_ready_o = (EX_ready_i && run);

    reg                    ID_data_valid;
    reg [`PC_WIDTH-1:0]    ID_pc_r;
    reg [`INSTR_WIDTH-1:0] ID_instr_r;
    reg                    ID_prdt_taken_r;
    reg                    ID_pc_misalign_r;
    reg                    ID_if_bus_err_r;
    
    assign ID_pc_o          = ID_pc_r          & {`PC_WIDTH{ID_data_valid}};
    assign ID_instr_o       = ID_instr_r       & {`INSTR_WIDTH{ID_data_valid}};
    assign ID_prdt_taken_o  = ID_prdt_taken_r  & ID_data_valid;
    assign ID_pc_misalign_o = ID_pc_misalign_r & ID_data_valid;
    assign ID_if_bus_err_o  = ID_if_bus_err_r  & ID_data_valid;


    always @(posedge clk) begin
        if(rst) begin
            ID_data_valid <= 1'b0;
        end else if(ID_ready_o) begin
            ID_data_valid <= IF_valid_i;
        end
    end

    always @(posedge clk) begin
        if(ID_ready_o && IF_valid_i) begin
            ID_pc_r          <= IF_pc_i;
            ID_instr_r       <= ifu_instr_i;
            ID_prdt_taken_r  <= ifu_prdt_taken_i;
            ID_pc_misalign_r <= ifu_pc_misalign_i;
            ID_if_bus_err_r  <= ifu_bus_err_i;
        end
    end

endmodule
