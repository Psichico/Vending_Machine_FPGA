module vending_machine(clk , reset, row, D0, D1, D2, shift_col);

	input clk,reset; 
	input [3:0] row;

	output [6:0] D0,D1,D2;
	output shift_col;
	

	reg [3:0] shift_col;
	
	wire [11:0] BCD;
	
	wire [3:0] debounced;
	wire [3:0] key_value;
	wire clk;
	wire reset;
	wire [7:0] count;
	
	//always @ (*)
//	begin
	
		keypad key(.clk(clk), .reset(reset), .row(row),  .key_value(key_value));

		//debounce4bits bits(.button(key_value), .clk(clk), .reset(reset), .debounced(debounced));
		//counter sum(.button(debounced), .clk(clk), .reset(reset), .count(count));
		binary2bcd   B2D({4'b0000, key_value}, BCD[11:8], BCD[7:4], BCD[3:0]);

		seven_segment segment0(BCD[3:0],D0);
		seven_segment segment1(BCD[7:4],D1);
		seven_segment segment2(BCD[11:8],D2);
	
//	end


endmodule
