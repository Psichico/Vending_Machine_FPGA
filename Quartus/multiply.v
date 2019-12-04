
module multiply(out, x, y);

	output [15:0] out;
	input  [7:0] x;
	input  [7:0] y;
	
	reg [15:0] out;

	always @ (*)
	begin
		out = x * y;
		
	end
	
endmodule

