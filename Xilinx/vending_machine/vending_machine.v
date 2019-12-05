module vending_machine(clk , reset, row, D0, D1, D2,D3,D4,D5, shift_col, debounced,key_value);

	input clk,reset; 
	input [3:0] row;

	output [6:0] D0,D1,D2;
	output [6:0] D3,D4,D5;
	
	output [3:0] shift_col;
	
	wire [3:0] shift_col;
	output [3:0] key_value;
	wire [3:0] key_value_count;
	output [3:0] debounced;
	wire [3:0] debounced2;
	wire [3:0] count;
	wire [11:0] BCD1;
	wire [11:0] BCD2;
	wire clk;
	wire reset;
	
	wire [3:0] key_value;
	//output [7:0]view_price;
	//reg [7:0]view_price;
	
	reg [7:0]view_quantity; 
	reg [7:0]view_price_q;
	reg [7:0]entered_amount;//= 8'h00;
	reg [7:0] display_this;
	reg [7:0] display_state;

	parameter s0 = 3'b000;
	parameter s1 = 3'b001;
	parameter s2 = 3'b010;
	parameter s3 = 3'b011;
	parameter s4 = 3'b100;
	parameter s5 = 3'b101;
	parameter s6 = 3'b110;

	reg [2:0]state = s0;
	reg [2:0]nstate;	
	reg product_select;
	reg product_taken;
	reg [7:0]entered_amount_2;
	reg [7:0]entered_amount_5;
	reg [7:0]entered_amount_10;
	//reg [3:0] count;
	
	
	always @(posedge clk or negedge reset)
	begin
			if(reset==0)
				state <= s0;
			
			else 
				state <= nstate;
	end

		
		
	keypad key1(.clk(clk), .reset(reset), .row(row), .shift_col(shift_col) , .key_value(key_value));

	debounce4bit bits1(.button(key_value), .clk(clk), .reset(reset), .debounced(debounced));
	
	


endmodule



