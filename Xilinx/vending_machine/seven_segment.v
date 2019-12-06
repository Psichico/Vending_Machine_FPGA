// Seven segment display on the FPGA board

module seven_segment(in,display);
	
	input [3:0] in;
	output display;
	
	reg [6:0] display;


	always @ (*) 
	begin

		case(in)
			0:	display = 7'b 1000000;
			1:	display = 7'b 1111001;
			2:	display = 7'b 0100100;
			3:	display = 7'b 0110000;
			4:	display = 7'b 0011001;
			5:	display = 7'b 0010010;
			6:	display = 7'b 0000010;
			7:	display = 7'b 1111000;
			8:	display = 7'b 0000000;
			9:	display = 7'b 0010000;
			default : display = 7'b 1111111;
		endcase

	end
endmodule
