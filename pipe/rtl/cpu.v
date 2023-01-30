`include "defines.v"

module cpu(
    input clk,
    input rst,
    input load_use
);

// wires for if
    wire [63:0] IF_pc;
    wire IF_valid;
    
    wire [63:0] ID_pc;
    wire ID_valid;
    wire ID_ready;

    wire [63:0] EX_pc;
    wire EX_valid;
    wire EX_ready;

    wire WB_ready;

    IF u_IF(
        .clk         ( clk      ),
        .rst         ( rst      ),
        .IF_pc_o     ( IF_pc    ),
        
        .ID_ready_i  ( ID_ready ),
        .IF_valid_o  ( IF_valid )
    );

    ifu u_ifu(
        .IF_pc_i           ( IF_pc           ),
        .ifu_pc_next_o     ( ifu_pc_next     ),
        .ifu_instr_o       ( ifu_instr       ),
        .prdt_taken_o      ( prdt_taken      ),
        .ifu_pc_misalign_o ( ifu_pc_misalign ),
        .ifu_bus_err_o     ( ifu_bus_err     )
    );



    ID u_ID(
        .clk         ( clk      ),
        .rst         ( rst      ),
        .IF_pc_i     ( IF_pc    ),
        .ID_pc_o     ( ID_pc    ),
        .load_use_i  ( load_use ),

        .IF_valid_i  ( IF_valid ),
        .EX_ready_i  ( EX_ready ),
        .ID_valid_o  ( ID_valid ),
        .ID_ready_o  ( ID_ready )
    );

    EX u_EX(
        .clk        ( clk       ),
        .rst        ( rst       ),
        .ID_pc_i    ( ID_pc     ),
        .EX_pc_o    ( EX_pc     ),
        
        .ID_valid_i ( ID_valid  ),
        .WB_ready_i ( WB_ready  ),
        .EX_valid_o ( EX_valid  ),
        .EX_ready_o ( EX_ready  )
    );


    WB u_WB(
        .clk        ( clk       ),
        .rst        ( rst       ),
        .EX_pc_i    ( EX_pc     ),
        .WB_pc_o    (           ),
        .EX_valid_i ( EX_valid  ),
        .WB_ready_o ( WB_ready  )
    );





endmodule