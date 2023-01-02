module conwaylife(
    input clk,
    input load,
    input [255:0] data,
    output [255:0] q ); 
    
    reg [255:0] q_ne;
    reg [255:0] q_r;
    
    reg[3:0] cnt;
    
    integer i; 
    always @(posedge clk) begin
        if(load) begin
            q_r <= data;
        end else begin
            cnt = 0;
            for(i = 0; i < 256; i = i + 1) begin
                cnt 
                = q_r[(((i / 16)+15)%16)*16 + (((i % 16)+15)%16)] 
                + q_r[(((i / 16)+15)%16)*16 + (i % 16)]
                + q_r[(((i / 16)+15)%16)*16 + (((i % 16)+17)%16)]

                + q_r[(i / 16)*16 + (((i % 16)+15)%16)]
                + q_r[(i / 16)*16 + (((i % 16)+17)%16)]

                + q_r[(((i / 16)+17)%16)*16 + (((i % 16)+15)%16)] 
                + q_r[(((i / 16)+17)%16)*16 + (i % 16)]
                + q_r[(((i / 16)+17)%16)*16 + (((i % 16)+17)%16)];

                if(cnt == 2) begin
                    q_r[i] <= q_r[i];
                end else if(cnt == 3) begin
                    q_r[i] <= 1;
                end else begin
                    q_r[i] <= 0;
                end
       
            end
        end
    end
    
        
    assign q = q_r;

endmodule