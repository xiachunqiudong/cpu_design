`include "defines.v"

module if_mini_dec(
    input [`INSTR_WIDTH-1:0] instr_i,
    output                   mini_dec_jal_o,
    output                   mini_dec_jalr_o,
    output                   mini_dec_branch_o,
    output [4:0]             mini_dec_rs1_idx_o,
    output [`XLEN-1:0]       mini_dec_imm_o 
);

    wire [`OP_INFO_WIDTH-1:0] optype_info;
    
    assign mini_dec_jal_o    = optype_info[`OP_JAL];
    assign mini_dec_jalr_o   = optype_info[`OP_JALR];
    assign mini_dec_branch_o = optype_info[`OP_BRANCH];

    id idu(
        .id_flush_i       (),
        .instr_i          ( instr_i ),
        .id_rs1_idx_o     ( mini_dec_rs1_idx_o ),
        .id_rs2_idx_o     (),
        .rf_rs1_rdata_i   (),
        .rf_rs2_rdata_i   (),
        .EX_op_load_i     (),
        .EX_rd_idx_i      (),
        .id_csr_ren_o     (),
        .id_csr_wen_o     (),
        .id_csr_idx_o     (),
        .id_optype_info_o ( optype_info ),
        .id_alu_info_o    (),
        .id_branch_info_o (),
        .id_ld_st_info_o  (),
        .id_csr_info_o    (),
        .id_rs1_rdata_o   (),
        .id_rs2_rdata_o   (),
        .id_imm_o         (mini_dec_imm_o),
        .id_rd_wen_o      (),
        .id_rd_idx_o      (),
        .id_load_use_o    (),
        .id_ilegl_instr_o (),
        .id_ecall_o       (),
        .id_ebreak_o      (),
        .id_mret_o        ()
    );


endmodule