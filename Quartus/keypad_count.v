// 4x4 matrix push button keyboard
// keyboard module for count button

module keypad_count (clk, reset, row, key_value_count);

input clk,reset; 
input [3:0] row;

output [3:0] key_value_count;
    
reg [3:0] key_value_count; 

always @(posedge clk or negedge reset)
begin
	
	if(reset==0)
		key_value_count<= 1'b0;	
	
	else if(row[3:0]==4'b1110) //12th button for counter //First row, last column
		key_value_count <= 4'h1;

	else
		key_value_count <= 4'h0;
	
end

endmodule
