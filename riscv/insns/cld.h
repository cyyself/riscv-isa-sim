require((xlen == 64) || p->extension_enabled(EXT_ZILSD));
require_extension(EXT_ZICLDST);

if (xlen == 32) {
  WRITE_RD_PAIR(RS1 == 0 ? 0 : MMU.load<int64_t>(RS1 + insn.i_imm()));
} else {
  WRITE_RD(RS1 == 0 ? 0 : MMU.load<int64_t>(RS1 + insn.i_imm()));
}

