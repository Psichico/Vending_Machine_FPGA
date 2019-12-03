// 4x4 matrix push button keyboard

module keypad_count (clk, reset, row, shift_col, key_value_count);

input clk,reset; 
input [3:0] row;

output shift_col;
output [3:0] key_value_count;

reg [3:0] shift_col = 4'b0111;

reg key_flag;     
reg [3:0] key_value_count;
reg [3:0] col_reg;  
reg [3:0] row_reg;  


always @(posedge clk or negedge reset)
begin
	
	if(reset==0)
		key_flag<= 1'b0;	
	
	else if(row[3:0]==4'b1110)
		begin
			row_reg<=row;
			key_flag<=1'b1;
		end
	else
			key_flag <= 1'b0;
	
end


always @ (clk, col_reg, row_reg, key_flag)
begin

	if(key_flag==1'b1) 
	begin
		case ({col_reg,row_reg})
			
			8'b0111_1110:	key_value_count <= 4'h1;
			
         default		:	key_value_count <= 4'h0;
		endcase 
   end
	
	else 
		key_value_count <= 4'h0;
end       

endmodule
