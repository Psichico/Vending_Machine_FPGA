module vending_machine(clk , reset, row, D0, D1, D2, shift_col);

	input clk,reset; 
	input [3:0] row;

	output [6:0] D0,D1,D2;
	
	output [3:0] shift_col;
	
	wire [3:0] shift_col;
	wire [3:0] key_value;
	
	wire [3:0] debounced;
	
	wire [7:0] count;
	
	wire [11:0] BCD1;
	wire [11:0] BCD2;
	
	wire clk;
	wire reset;
	
	wire [3:0] row_reg;
	wire [3:0] col_reg;
	
	wire [7:0] view_price, view_quantity, view_price_q, entered_amount;

	keypad key(.clk(clk), .reset(reset), .row(row),.shift_col(shift_col) , .key_value(key_value), .row_reg(row_reg), .col_reg(col_reg));

	debounce4bit bits(.button(key_value), .clk(clk), .reset(reset), .debounced(debounced));
	counter sum(.button(debounced), .clk(clk), .reset(reset), .count(count));
		
	fsm buy(.clk(clk), .reset(reset), .c(col_reg), .r(row_reg), .view_price(view_price), .view_quantity(view_quantity), .view_price_q(view_price_q), .entered_amount(entered_amount));
	
	binary2bcd   B2D1(.binary(view_price), .h(BCD1[11:8]), .t(BCD1[7:4]), .o(BCD1[3:0]));
	seven_segment segment0(BCD1[3:0],D0);
	seven_segment segment1(BCD1[7:4],D1);
	
	binary2bcd   B2D2(.binary(view_quantity), .h(BCD2[11:8]), .t(BCD2[7:4]), .o(BCD2[3:0]));
	
	
	seven_segment segment2(BCD2[3:0],D2);
	
	
endmodule
