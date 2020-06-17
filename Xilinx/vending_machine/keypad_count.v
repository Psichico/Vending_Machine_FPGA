// 4x4 matrix push button keyboard
//keyboard module for count

module keypad_count (clk, reset, row, key_value_count);

input clk,reset; 
input [3:0] row;

output [3:0] key_value_count;
    
reg [3:0] key_value_count; 

always @(posedge clk)
begin
	
	if(row[3:0]==4'b1110) //12th button for counter
		key_value_count <= 4'h1;

	else
		key_value_count <= 4'h0;
	
end

endmodule
