module vending_machine(clk , reset, row, D0, D1, D2, shift_col);

	input clk,reset; 
	input [3:0] row;

	output [6:0] D0,D1,D2;
	
	output [3:0] shift_col;
	
	wire [3:0] shift_col;
	wire [3:0] key_value;
	
	wire [3:0] key_value_new;
	
	wire [3:0] debounced;
	wire [3:0] debounced2;
	
	wire [7:0] count;
	
	wire [11:0] BCD;
	
	wire [11:0] BCD2;
	
	wire clk;
	wire reset;
	
	//keypad (clk, reset, row, shift_col, key_value);
	keypad key(.clk(clk), .reset(reset), .row(row),.shift_col(shift_col) ,  .key_value(key_value), .key_value_new(key_value_new));

	debounce4bits bits(.button(key_value_new), .clk(clk), .reset(reset), .debounced(debounced));
	debounce4bits bits2(.button(key_value), .clk(clk), .reset(reset), .debounced(debounced2));
	counter sum(.button(debounced), .clk(clk), .reset(reset), .count(count));
	binary2bcd   B2D(.binary(count), .h(BCD[11:8]), .t(BCD[7:4]), .o(BCD[3:0]));
	
	binary2bcd   B2D2(.binary({4'b0000, debounced}), .h(BCD2[11:8]), .t(BCD2[7:4]), .o(BCD2[3:0]));

	//binary2bcd   B2D({4'b0000, key_value}, BCD[11:8], BCD[7:4], BCD[3:0]);

	seven_segment segment0(BCD[3:0],D0);
	seven_segment segment1(BCD[7:4],D1);
	seven_segment segment2(BCD2[3:0],D2);
	

endmodule
