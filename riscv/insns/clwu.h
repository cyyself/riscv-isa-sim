require_rv64;
require_extension(EXT_ZICLDST);
WRITE_RD(RS1 == 0 ? 0 : MMU.load<uint32_t>(RS1 + insn.i_imm()));
