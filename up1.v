`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:53:05 12/13/2017 
// Design Name: 
// Module Name:    up1 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module up1(clk, reset
    );
	input clk, reset;     
	reg [3:0]state, next_state;
	reg mem_readwrite;           //read-active hight, write-active low
//states
	parameter reset_pc=0,
				 fetch=1,
				 decode=2,
				 execute_add=3,
				 execute_store=4,
				 execute_load=5,
				 execute_jump=6,
				 fetch2=7,
				 execute_add2=8,
				 execute_store2=9,
				 execute_load2=10;
				 
//internal registers
	reg [15:0]A;
	reg [7:0]PC, IR; 
	reg [15:0]MDR;
   reg [7:0]MAR;
	
	always@(posedge clk)
	begin: bit2
	if(reset)
	next_state = reset_pc;
	else
	case(next_state)
	reset_pc: begin
				  PC <= 8'd0;
				  MAR <= PC;
				  A = 16'd0;
				  next_state = fetch;
				 end
	fetch: begin
			  MAR = PC;
			  mem_readwrite = 1'b1;
			  end
   fetch2: begin
			  IR <= MDR[15:8];              //The MSB [15:8] will be instruction
			  MAR <= MDR[7:0];              //the LSB [7:0] will be the address from where the 16-bit data is taken
			  PC <= PC+ 8'd1;
			  next_state <= decode;
			  mem_readwrite = 1'bx;
			 end
	decode: begin
			  case(IR)
				  8'd3: next_state = execute_add;
				  8'd4: next_state = execute_store;
				  8'd5: next_state = execute_load;
				  8'd6: next_state = execute_jump;
			   endcase
				end
	execute_add: begin
						mem_readwrite = 1'b1;
					  end
	execute_add2: begin
					   A <= A + MDR;
						PC <= PC+1;
						mem_readwrite = 1'bx;      //unknown state so that it neither reads nor writes 
						next_state = fetch;
						end
   execute_store: begin
						 MDR = A;
						 mem_readwrite = 1'b0;              //now write operation, 0 as write->active low
						 next_state = execute_store2;
						end
	execute_store2: begin
						  next_state = fetch;
						  mem_readwrite = 1'bx;
						 end
	execute_load: begin
                  mem_readwrite = 1'b1;       //will load the memory data
						next_state = execute_load2;
						end
	execute_load2: begin
                  MDR = A;                   //store it in accumulator
						next_state = fetch;
						end
	execute_jump: begin
						PC = MAR;
						next_state = fetch;
					  end
	endcase
  end						
endmodule


