require_extension(EXT_ZICLDST);
if (RS1) MMU.store<uint8_t>(RS1 + insn.s_imm(), RS2);
