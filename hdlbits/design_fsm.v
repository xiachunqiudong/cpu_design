module top_module (
    input clk,
    input reset,
    input [3:1] s,
    output fr3,
    output fr2,
    output fr1,
    output dfr
); 

    parameter s0 = 0;

    parameter s0_to_s1 = 1;
    parameter s2_to_s1 = 2;

    parameter s1_to_s2 = 3;
    parameter s3_to_s2 = 4;
    
    parameter s3 = 5;

    reg [2:0] state, next_state;

    // next_state
    always @(*) begin
        case(state)
            s0: begin
                next_state = s[1] ? s0_to_s1 : s0;
            end
            s0_to_s1: begin
                next_state = s[2] ? s1_to_s2 
                           : s[1] ? s0_to_s1
                           : s0;
            end
            s2_to_s1: begin
                next_state = s[2] ? s1_to_s2 
                           : s[1] ? s2_to_s1
                           : s0;
            end 
            s1_to_s2: begin
                next_state = s[3] ? s3 
                           : s[2] ? s1_to_s2
                           : s2_to_s1;
            end             
            s3_to_s2: begin
                next_state = s[3] ? s3 
                           : s[2] ? s3_to_s2
                           : s2_to_s1;
            end
            s3: begin
                next_state = s[3] ? s3 : s3_to_s2;
            end
        endcase
    end

    always @(posedge clk) begin
        if(reset)
            state <= s0;   
        else
            state <= next_state;
    end

    assign fr1 = ~(state == s3);
    assign fr2 = (state == s0_to_s1) | (state == s2_to_s1) | (state == s0);
    assign fr3 = (state == s0);

    assign dfr = (state == s0) | (state == s2_to_s1) | (state == s3_to_s2);

endmodule