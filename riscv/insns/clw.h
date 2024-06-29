require_extension(EXT_ZICLDST);
WRITE_RD(RS1 == 0 ? 0 : MMU.load<int32_t>(RS1 + insn.i_imm()));
