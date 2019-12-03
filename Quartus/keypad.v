// 4x4 matrix push button keyboard

module keypad(clk, reset, row, shift_col, key_value, key_value_new);

input clk,reset; 
input [3:0] row;

output shift_col;
output [3:0] key_value;
output [3:0] key_value_new;

reg [3:0] shift_col = 4'b1110;

reg key_flag;     
reg [3:0] key_value;
reg [3:0] key_value_new;
reg [3:0] col_reg;  
reg [3:0] row_reg;  

// activate only one column at a time
always @ (posedge clk)
begin

	if (row[3:0]!=4'b1111) // if button is pressed
		col_reg <= shift_col;

	else
		shift_col <= {shift_col[2:0],shift_col[3]};
		
end



// intersection of activated column and row
always @(posedge clk or negedge reset)
begin
	
	if(reset==0)
		key_flag<= 1'b0;	
	
	else if(row[3:0]!=4'b1111)
		begin
			row_reg<=row;
			key_flag<=1'b1;
		end
	else
			//row_reg <= 4'b1111;
			key_flag <= 1'b0;
	
end


always @ (clk, col_reg, row_reg, key_flag)
begin

	if(key_flag==1'b1) 
	begin
		case ({col_reg,row_reg})
			8'b1110_1110:	key_value <= 4'h1;
			8'b1110_1101:	key_value <= 4'h1;
			8'b1110_1011:	key_value <= 4'h1;
			8'b1110_0111:	key_value <= 4'h1;
			8'b1101_1110:	key_value <= 4'h1;
			8'b1101_1101:	key_value <= 4'h1;
			8'b1101_1011:	key_value <= 4'h1;
			8'b1101_0111:	key_value <= 4'h1;
			8'b1011_1110:	key_value <= 4'h1;
			8'b1011_1101:	key_value <= 4'h1;
			8'b1011_1011:	key_value <= 4'h1;
			8'b1011_0111:	key_value <= 4'h1;
			8'b0111_1110:	key_value <= 4'h1;
			8'b0111_1101:	key_value <= 4'h1;
			8'b0111_1011:	key_value <= 4'h1;
			8'b0111_0111:	key_value <= 4'h1;
         default		:	key_value <= 4'h8;
		endcase 
		
		case ({col_reg,row_reg})
			8'b1110_1110:	key_value_new <= 4'h2;
			8'b1110_1101:	key_value_new <= 4'h2;
			8'b1110_1011:	key_value_new <= 4'h2;
			8'b1110_0111:	key_value_new <= 4'h2;
			8'b1101_1110:	key_value_new <= 4'h2;
			8'b1101_1101:	key_value_new <= 4'h2;
			8'b1101_1011:	key_value_new <= 4'h2;
			8'b1101_0111:	key_value_new <= 4'h2;
			8'b1011_1110:	key_value_new <= 4'h2;
			8'b1011_1101:	key_value_new <= 4'h2;
			8'b1011_1011:	key_value_new <= 4'h2;
			8'b1011_0111:	key_value_new <= 4'h2;
			8'b0111_1110:	key_value_new <= 4'h2;
			8'b0111_1101:	key_value_new <= 4'h2;
			8'b0111_1011:	key_value_new <= 4'h2;
			8'b0111_0111:	key_value_new <= 4'h2;
         default		:	key_value_new <= 4'h8;
		endcase 


	end
	
	else 
	begin
		key_value <= 4'h0;
		key_value_new <= 4'h0;
	end
end       

endmodule
