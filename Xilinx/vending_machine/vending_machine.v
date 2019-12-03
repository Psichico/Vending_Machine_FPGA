module vending_machine(clk , reset, row, D0, D1, D2, shift_col);

	input clk,reset; 
	input [3:0] row;

	output [6:0] D0,D1,D2;
	
	output [3:0] shift_col;
	
	wire [3:0] shift_col;
	wire [3:0] key_value;
	
	wire [3:0] debounced;
	
	wire [7:0] count;
	
	wire [11:0] BCD;
	
	wire clk;
	wire reset;
	

	keypad key(.clk(clk), .reset(reset), .row(row),.shift_col(shift_col) , .key_value(key_value));

	debounce4bits bits(.button(key_value), .clk(clk), .reset(reset), .debounced(debounced));
	//counter sum(.button(debounced), .clk(clk), .reset(reset), .count(count));
	binary2bcd   B2D(.binary({4'h0,debounced}), .h(BCD[11:8]), .t(BCD[7:4]), .o(BCD[3:0]));

	seven_segment segment0(BCD[3:0],D0);
	seven_segment segment1(BCD[7:4],D1);
	seven_segment segment2(BCD[11:8],D2);
	

endmodule
