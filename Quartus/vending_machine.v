module vending_machine(clk , reset, row, D0, D1, D2, key_value);

	input clk,reset; 
	input [3:0] row;

	output D0,D1,D2;
	output key_value;
	
	wire [6:0] D0,D1,D2;
//	reg [3:0] shift_col = 4'b1011;
	
	wire [11:0] BCD;
	
	wire [3:0] debounced;
	wire [3:0] key_value;
	wire clk;
	wire reset;
	wire [7:0] count;
	
	//always @ (*)
//	begin
	
		keypad key(.clk(clk), .reset(reset), .row(row),  .key_value(key_value));

		debounce4bits bits(.button(key_value), .clk(clk), .reset(reset), .debounced(debounced));
		counter sum(.button(debounced), .clk(clk), .reset(reset), .count(count));
		binary2bcd   B2D(count, BCD[11:8], BCD[7:4], BCD[3:0]);

		seven_segment segment0(BCD[3:0],D0);
		seven_segment segment1(BCD[7:4],D1);
		seven_segment segment2(BCD[11:8],D2);
	
//	end


endmodule
