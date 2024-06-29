require((xlen == 64) || p->extension_enabled(EXT_ZILSD));
require_extension(EXT_ZICLDST);

if (RS1) {
  if (xlen == 32) {
    MMU.store<uint64_t>(RS1 + insn.s_imm(), RS2_PAIR);
  } else {
    MMU.store<uint64_t>(RS1 + insn.s_imm(), RS2);
  }
}
