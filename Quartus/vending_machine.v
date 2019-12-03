module vending_machine(clk , reset, row, D0, D1, D2, D3, D4, D5, shift_col);

	input clk,reset; 
	input [3:0] row;

	output [6:0] D0,D1,D2;
	output [6:0] D3,D4,D5;
	
	output [3:0] shift_col;
	
	wire [3:0] shift_col;
	wire [3:0] key_value;
	
	wire [3:0] key_value_new;
	
	wire [3:0] debounced1;
	wire [3:0] debounced2;
	
	wire [7:0] count;
	
	wire [11:0] BCD1;
	
	wire [11:0] BCD2;
	
	wire clk;
	wire reset;
	
	//keypad (clk, reset, row, shift_col, key_value);
	keypad key2(.clk(clk), .reset(reset), .row(row), .shift_col(shift_col) ,  .key_value(key_value), .key_value_new(key_value_new));

	debounce4bits bits1(.button(key_value), .clk(clk), .reset(reset), .debounced(debounced1));
	//debounce4bits bits2(.button(key_value_new), .clk(clk), .reset(reset), .debounced(debounced2));
	
	counter sum(.button(key_value), .clk(clk), .reset(reset), .count(count));
	binary2bcd   B2D1(.binary(debounced1), .h(BCD1[11:8]), .t(BCD1[7:4]), .o(BCD1[3:0]));
	binary2bcd   B2D2(.binary(debounced1), .h(BCD2[11:8]), .t(BCD2[7:4]), .o(BCD2[3:0]));

	seven_segment segment0(BCD1[3:0],D0);
	seven_segment segment1(BCD1[7:4],D1);
	seven_segment segment2(BCD1[11:8],D2);
	
	seven_segment segment3(BCD2[3:0],D3);
	seven_segment segment4(BCD2[7:4],D4);
	seven_segment segment5(BCD2[11:8],D5);
	

endmodule
