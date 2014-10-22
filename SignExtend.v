`include "define.v"

module SignExtend(
	input [3:0] imm,
	output [`DSIZE-1:0] imm_signExt
);

assign imm_signExt = {{12{imm[3]}}, imm[3:0]};

endmodule
