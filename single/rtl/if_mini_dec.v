`include "defines.v"

module if_mini_dec(
    input [`INSTR_WIDTH-1:0] instr_i,
    output                   mini_dec_jal_o,
    output                   mini_dec_jalr_o,
    output                   mini_dec_branch_o,
    output [4:0]             mini_dec_jalr_rs1_idx_o,
    output [`XLEN-1:0]       mini_dec_imm_o 
);

    wire [`OP_INFO_WIDTH-1:0] opcode_info;
    
    assign mini_dec_jal_o    = opcode_info[`OP_JAL];
    assign mini_dec_jalr_o   = opcode_info[`OP_JALR];
    assign mini_dec_branch_o = opcode_info[`OP_BRANCH];

    id idu(
        .instr_i          (instr_i),
        .id_rs1_en_o      (),
        .id_rs1_idx_o     (mini_dec_jalr_rs1_idx_o),
        .id_rs2_en_o      (),
        .id_rs2_idx_o     (),
        .rf_rs1_rdata_i   (),
        .rf_rs2_rdata_i   (),
        .id_csr_en_o      (),
        .id_csr_idx_o     (),
        .csr_rdata_i      (),
        .id_opcode_info_o (opcode_info),
        .id_alu_info_o    (),
        .id_branch_info_o (),
        .id_ld_st_info_o  (),
        .id_csr_info_o    (),
        .id_rs1_rdata_o   (),
        .id_rs2_rdata_o   (),
        .id_imm_o         (mini_dec_imm_o),
        .id_rd_en_o       (),
        .id_rd_idx_o      (),
        .id_csr_rdata_o   (),
        .id_ilegl_instr_o (),
        .id_ecall_o       (),
        .id_ebreak_o      (),
        .id_mret_o        ()
    );


endmodule