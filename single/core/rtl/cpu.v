`include "defines.v"

module cpu(
    input clk,
    input rst
);

    // pc_reg
    wire [`PC_WIDTH-1:0] IF_pc;
    wire [`PC_WIDTH-1:0] if_pc_next;

    // if
    wire [`INSTR_WIDTH-1:0] if_instr;
    wire if_pc_misalign;
    wire if_bus_err;

    pc_reg pc_reg_u(
        .clk       ( clk        ),
        .rst       ( rst        ),
        .pc_next_i ( if_pc_next ),
        .IF_pc_o   ( IF_pc      )
    );

    instr_fetch instr_fetch_u(
        .pc_i             ( IF_pc          ),
        .if_pc_next_o     ( if_pc_next     ),
        // to id
        .if_instr_o       ( if_instr       ),
        // excp
        .if_pc_misalign_o ( if_pc_misalign ),
        .if_bus_err_o     ( if_bus_err     )
    );



endmodule