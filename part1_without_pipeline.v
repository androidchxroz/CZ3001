`timescale 1ns / 1ps
`include "define.v"

module part1_without_pipeline(clk, rst, fileid, PCOUT, INST, aluop, rdata1, rdata2, rdata1_ID_EXE,rdata2_ID_EXE, aluop_ID_EXE,waddr_out_ID_EXE,aluout,imm_in);

input clk;
											
input	rst;
input fileid; 


output [`DSIZE-1:0] rdata1;
// output [`DSIZE-1:0] rdata1_ID_EXE;//output from ID_EXE stage
output [`DSIZE-1:0] rdata2;
// output [`DSIZE-1:0] rdata2_ID_EXE;//output from ID_EXE stage
output [`ASIZE-1:0] raddr2;
output [`DSIZE-1:0] alu_in2;
output [`DSIZE-1:0] aluout;
output [`DSIZE-1:0] INST;
output [2:0] aluop;
// output [2:0] aluop_ID_EXE;//output from ID_EXE stage
// output [`ASIZE-1:0] waddr_out_ID_EXE;		
output [`DSIZE-1:0] imm_in, imm_extended;
 	 
output [`ISIZE-1:0] branch_adder_out;

output [`DSIZE-1:0] rdata_mem, wdata_mem;

//Program counter
output branch, zero, PCSrc;
output RegDst;
output ALUSrc;

output [`ISIZE-1:0] PCOUT, nPC;
reg [`ISIZE-1:0] PCIN=16'b0;



// parameter PCSize = 16;
// parameter InstSize = 16;
// parameter DataSize = 16;
// parameter AddrSize = 4;
// parameter OpcodeSize = 4;
// parameter aluOpcodeSize = 3;
// parameter immSize = 4;
// parameter forwardSize = 2;
// parameter flagSize = 3;


// wire control_flush, detection_flush, flush, pc_normal_Src, R2Add_Src, LHB_R1_Src, LLB_R1_Src,
//      R_Extend_Src, FlagEn, NormalWBdataSrc, memread, memwrite, regEn,  Lhb_En, E4_En, E8_En, E12_En, 
// 	 WBaddSrc, WB_RegFileWen, EX_MemReadEn, PC_Inc1, MEM_regEn, WB_regEn, EX_memwrite, EX_memread, 
// 	 EX_NormalWBdataSrc, EX_regEn, EX_pc_normal_Src, MEM_memwrite, MEM_memread, MEM_pc_normal_Src,
// 	 PCInc1,PCInc;
	 
// wire [2:0]PCSrc, control_flag;
// wire [forwardSize-1:0] forwardA, forwardB,forwardC;
// wire [AddrSize-1:0] R2Add, R1Add, WB_RD, EX_RD, WBaddr, EX_RS, EX_RT, MEM_RD;
// wire [OpcodeSize-1:0] MEM_opcode, EX_opcode;
// wire [aluOpcodeSize-1:0] aluop, EX_aluop; 
// wire [immSize-1:0] EX_imm; 
// wire [flagSize-1:0] Flag; 

// wire [PCSize-1:0] PCin_PCAdd, PCin_EXEPC, PCin_B, PCin_JAL, PCin_JR, PCout, PCAdd1, PCAdd, ID_PC, PC_Add, 
//                   EX_PC, MEM_PC,PCAdder;
// wire [InstSize-1:0]inst, ID_Inst,Inst; 
// wire [DataSize-1:0] WB_WBResult, rdata1, rdata2, ExtendResult, r1_After1, r1_After2, r2data, EX_RDdata, 
//                     aluin1, aluin2, EX_aluout, MEM_RDdata, MEM_aluout, MEM_memout, WBdata, Normaldata, 
// 					EX_radata1, EX_radata2,EX_RDdata1 ;    



PC1 pc(.clk(clk),.rst(rst),.nextPC(PCIN),.currPC(PCOUT));

//instruction memory
memory im( .clk(clk), .rst(rst), .wen(1'b0), .addr(PCOUT), .data_in(16'b0), .fileid(4'b0),.data_out(INST));

//here we are not taking the multiplexers for initialization as initialization is done within reg file itself.
wire wen;
// wire [`DSIZE-1:0] imm_ID_EXE;

assign PCSrc = (branch & zero)? 1'b1: 1'b0;
adder PCAdder(.a(PCOUT), .b(16'b1), .out(nPC));
adder BranchAdder(.a(nPC), .b(imm_extended), .out(branch_adder_out));
assign raddr2 = (RegDst)? INST[11:8] : INST[3:0];
assign alu_in2 = (ALUSrc)? imm_extended : rdata2;
assign wdata = (mem_to_reg)? aluout : rdata_mem; 

always @((clk))
begin
	PCIN <= (PCSrc)? branch_adder_out : nPC; //increments PC to PC +1
end


// adder JumpAdder(.a(), .b(), out(JumpAdder_out));

sign_extend SE (.imm(INST[3:0]), .imm_sign_extend(imm_extended));

control C0 (.inst(INST[15:12]),.wen(wen), .aluop(aluop), .branch(branch), .mem_to_reg(mem_to_reg), .mem_write(mem_to_reg), alu_src(ALUSrc), reg_dst(RegDst));

regfile  RF0 ( .clk(clk), .rst(rst), .wen(wen), .raddr1(INST[7:4]), .raddr2(INST[3:0]), .waddr(), .wdata(), .rdata1(rdata1), .rdata2(rdata2));

alu ALU0 ( .a(rdata1), .b(alu_in2), .op(aluop), .result(aluout), .zero(zero));//alu takes its input from the pipeline register
 
// ID_EXE_stage PIPE1(.clk(clk), .rdata1_in(rdata1),.rdata2_in(rdata2),.imm_in(imm_in),.opcode_in(aluop), .waddr_in(INST[11:8]), .waddr_out(waddr_out_ID_EXE), .rdata1_out(rdata1_ID_EXE), .rdata2_out(rdata2_ID_EXE), .imm_out(imm_ID_EXE), .opcode_out(aluop_ID_EXE));//immediate value is given as 0 as we are concentrating only on R-type instuctions

data_meory DM (.clk(clk), .rst(rst), .wen(mem_write), .ren(mem_to_reg), addr(aluout), data_in(wdata_mem), data_out(rdata_mem));

endmodule


