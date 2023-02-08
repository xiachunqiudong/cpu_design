module ex(
    // from id
    // OP INFO
    input  [`OP_INFO_WIDTH-1:0]     optype_info_i,
    input  [`ALU_INFO_WIDTH-1:0]    alu_info_i,
    input  [`BRANCH_INFO_WIDTH-1:0] branch_info_i,
    input  [`LD_ST_INFO_WIDTH-1:0]  ld_st_info_i,
    input  [`CSR_INFO_WIDTH-1:0]    csr_info_i,
    input  [4:0]                    EX_rs1_idx_i,
    input  [4:0]                    EX_rs2_idx_i,
    input                           EX_prdt_taken_i,
    // OP NUMBER
    input  [`PC_WIDTH-1:0]          pc_i,
    input  [`XLEN-1:0]              rs1_rdata_i,
    input  [`XLEN-1:0]              rs2_rdata_i,
    input  [`XLEN-1:0]              imm_i,
    // from csr
    input  [`XLEN-1:0]              csr_rdata_i,
    // to MEM
    output [`XLEN-1:0]              ex_alu_res_o,
    output [`XLEN-1:0]              ex_csr_rdata_o,
    output [`XLEN-1:0]              ex_csr_wdata_o,
    // JUMP
    output                          ex_jump_o,
    output [`PC_WIDTH-1:0]          ex_jump_pc_o
);


//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// ALU单元
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
    wire branch_jump;

    alu alu_u(
        .optype_info_i      ( optype_info_i     ),
        .alu_info_i         ( alu_info_i        ),
        .branch_info_i      ( branch_info_i     ),
        
        .pc_i               ( pc_i              ),
        .rs1_rdata_i        ( rs1_rdata_i       ),
        .rs2_rdata_i        ( rs2_rdata_i       ),
        .imm_i              ( imm_i             ),

        .alu_res_o          ( ex_alu_res_o      ),      
        .alu_branch_jump_o  ( branch_jump       )
    );


//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// branch jal jalr 指令跳转地址计算
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
    wire op_jalr   = optype_info_i[`OP_JALR];

    wire mis_prdt = branch_jump ^ EX_prdt_taken_i;
    
    wire [`XLEN-1:0] jump_pc_src1;
    wire [`XLEN-1:0] jump_pc_src2;

    assign jump_pc_src1 = op_jalr ? rs1_rdata_i : pc_i;
    assign jump_pc_src2 = (op_jalr || branch_jump) ? imm_i : 64'd4;
    assign ex_jump_pc_o = jump_pc_src1 + jump_pc_src2;

    assign ex_jump_o = mis_prdt || op_jalr;

    assign ex_csr_rdata_o = csr_rdata_i;

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// CGU单元
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//

    wire csr_csrrw = csr_info_i[`CSR_CSRRW];
    wire csr_csrrs = csr_info_i[`CSR_CSRRS];
    wire csr_csrrc = csr_info_i[`CSR_CSRRC];

    wire csr_csrrwi = csr_info_i[`CSR_CSRRWI];
    wire csr_csrrsi = csr_info_i[`CSR_CSRRSI];
    wire csr_csrrci = csr_info_i[`CSR_CSRRCI];

    wire [`XLEN-1:0] csr_src2;
    assign csr_src2 = (csr_csrrw | csr_csrrs | csr_csrrc) ? rs1_rdata_i : {59'b0, EX_rs1_idx_i};

    wire [`XLEN-1:0] csrrw_res = csr_src2;
    wire [`XLEN-1:0] csrrs_res = csr_rdata_i |   csr_src2;
    wire [`XLEN-1:0] csrrc_res = csr_rdata_i & (~csr_src2);


    assign ex_csr_wdata_o = {`XLEN{(csr_csrrw | csr_csrrwi)}} & csrrw_res
                          | {`XLEN{(csr_csrrs | csr_csrrsi)}} & csrrs_res
                          | {`XLEN{(csr_csrrc | csr_csrrci)}} & csrrc_res;
endmodule