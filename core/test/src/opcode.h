#pragma once

#include <cstdint>

// Tests and opcodes should be written without looking at the cpu
// implementation. Look at a data sheet and don't cheat!
enum Opcode : uint8_t {
    BRK = 0x00,
    ORA_INXIND = 0x01,
    NOP_ZERO04 = 0x04,
    ORA_ZERO = 0x05,
    ASL_ZERO = 0x06,
    PHP = 0x08,
    ORA_IMM = 0x09,
    ORA_INDINX = 0x11,
    ASL_ACC = 0x0A,
    NOP_ABS0C = 0x0C,
    ORA_ABS = 0x0D,
    ASL_ABS = 0x0E,
    BPL = 0x10,
    NOP_ZEROX14 = 0x14,
    ORA_ZEROX = 0x15,
    ASL_ZEROX = 0x16,
    CLC = 0x18,
    ORA_ABSY = 0x19,
    NOP_IMP1A = 0x1A,
    ORA_ABSX = 0x1D,
    NOP_ABSX1C = 0x1C,
    ASL_ABSX = 0x1E,
    JSR = 0x20,
    AND_INXIND = 0x21,
    BIT_ZERO = 0x24,
    AND_ZERO = 0x25,
    ROL_ZERO = 0x26,
    PLP = 0x28,
    AND_IMM = 0x29,
    ROL_ACC = 0x2A,
    BIT_ABS = 0x2C,
    AND_ABS = 0x2D,
    ROL_ABS = 0x2E,
    BMI = 0x30,
    AND_INDINX = 0x31,
    NOP_ZEROX34 = 0x34,
    AND_ZEROX = 0x35,
    ROL_ZEROX = 0x36,
    SEC = 0x38,
    AND_ABSY = 0x39,
    NOP_IMP3A = 0x3A,
    NOP_ABSX3C = 0x3C,
    AND_ABSX = 0x3D,
    ROL_ABSX = 0x3E,
    RTI = 0x40,
    EOR_INXIND = 0x41,
    NOP_ZERO44 = 0x44,
    EOR_ZERO = 0x45,
    LSR_ZERO = 0x46,
    PHA = 0x48,
    EOR_IMM = 0x49,
    LSR_ACC = 0x4A,
    JMP = 0x4C,
    EOR_ABS = 0x4D,
    LSR_ABS = 0x4E,
    BVC = 0x50,
    EOR_INDINX = 0x51,
    NOP_ZEROX54 = 0x54,
    EOR_ZEROX = 0x55,
    LSR_ZEROX = 0x56,
    CLI = 0x58,
    EOR_ABSY = 0x59,
    NOP_IMP5A = 0x5A,
    NOP_ABSX5C = 0x5C,
    EOR_ABSX = 0x5D,
    LSR_ABSX = 0x5E,
    RTS = 0x60,
    ADC_INDX = 0x61,
    NOP_ZERO64 = 0x64,
    ADC_ZERO = 0x65,
    ROR_ZERO = 0x66,
    PLA = 0x68,
    ADC_IMM = 0x69,
    ROR_ACC = 0x6A,
    JMP_IND = 0x6C,
    ADC_ABS = 0x6D,
    ROR_ABS = 0x6E,
    BVS = 0x70,
    ADC_INDY = 0x71,
    NOP_ZEROX74 = 0x74,
    ADC_ZEROX = 0x75,
    ROR_ZEROX = 0x76,
    SEI = 0x78,
    ADC_ABSY = 0x79,
    NOP_IMP7A = 0x7A,
    NOP_ABSX7C = 0x7C,
    ADC_ABSX = 0x7D,
    ROR_ABSX = 0x7E,
    NOP_IMM80 = 0x80,
    STA_INXIND = 0x81,
    SAX_INXIND = 0x83,
    STY_ZERO = 0x84,
    STA_ZERO = 0x85,
    STX_ZERO = 0x86,
    SAX_ZERO = 0x87,
    DEY = 0x88,
    TXA = 0x8A,
    STY_ABS = 0x8C,
    STA_ABS = 0x8D,
    STX_ABS = 0x8E,
    SAX_ABS = 0x8F,
    BCC = 0x90,
    STA_INDINX = 0x91,
    STY_ZEROX = 0x94,
    STA_ZEROX = 0x95,
    STX_ZEROY = 0x96,
    SAX_ZEROY = 0x97,
    TYA = 0x98,
    STA_ABSY = 0x99,
    TXS = 0x9A,
    STA_ABSX = 0x9D,
    LDY_IMM = 0xA0,
    LDA_INXIND = 0xA1,
    LDX_IMM = 0xA2,
    LAX_INXIND = 0xA3,
    LDY_ZERO = 0xA4,
    LDA_ZERO = 0xA5,
    LDX_ZERO = 0xA6,
    LAX_ZERO = 0xA7,
    TAY = 0xA8,
    LDA_IMM = 0xA9,
    TAX = 0xAA,
    LDY_ABS = 0xAC,
    LDA_ABS = 0xAD,
    LDX_ABS = 0xAE,
    LAX_ABS = 0xAF,
    BCS = 0xB0,
    LDA_INDINX = 0xB1,
    LAX_INDINX = 0xB3,
    LDY_ZEROX = 0xB4,
    LDA_ZEROX = 0xB5,
    LDX_ZEROY = 0xB6,
    LAX_ZEROY = 0xB7,
    CLV = 0xB8,
    LDA_ABSY = 0xB9,
    TSX = 0xBA,
    LDY_ABSX = 0xBC,
    LDA_ABSX = 0xBD,
    LDX_ABSY = 0xBE,
    LAX_ABSY = 0xBF,
    CPY_IMM = 0xC0,
    CMP_INXIND = 0xC1,
    DCP_INXIND = 0xC3,
    CPY_ZERO = 0xC4,
    CMP_ZERO = 0xC5,
    DEC_ZERO = 0xC6,
    DCP_ZERO = 0xC7,
    INY = 0xC8,
    CMP_IMM = 0xC9,
    DEX = 0xCA,
    CPY_ABS = 0xCC,
    CMP_ABS = 0xCD,
    DEC_ABS = 0xCE,
    DCP_ABS = 0xCF,
    BNE = 0xD0,
    CMP_INDINX = 0xD1,
    DCP_INDINX = 0xD3,
    NOP_ZEROXD4 = 0xD4,
    CMP_ZEROX = 0xD5,
    DEC_ZEROX = 0xD6,
    DCP_ZEROX = 0xD7,
    CLD = 0xD8,
    CMP_ABSY = 0xD9,
    NOP_IMPDA = 0xDA,
    DCP_ABSY = 0xDB,
    NOP_ABSXDC = 0xDC,
    CMP_ABSX = 0xDD,
    DEC_ABSX = 0xDE,
    DCP_ABSX = 0xDF,
    CPX_IMM = 0xE0,
    SBC_INXIND = 0xE1,
    CPX_ZERO = 0xE4,
    SBC_ZERO = 0xE5,
    INC_ZERO = 0xE6,
    INX = 0xE8,
    SBC_IMM = 0xE9,
    NOP = 0xEA,
    SBC_IMMEB = 0xEB,
    CPX_ABS = 0xEC,
    SBC_ABS = 0xED,
    INC_ABS = 0xEE,
    BEQ = 0xF0,
    SBC_INDINX = 0xF1,
    NOP_ZEROXF4 = 0xF4,
    SBC_ZEROX = 0xF5,
    INC_ZEROX = 0xF6,
    SED = 0xF8,
    SBC_ABSY = 0xF9,
    NOP_IMPFA = 0xFA,
    NOP_ABSXFC = 0xFC,
    SBC_ABSX = 0xFD,
    INC_ABSX = 0xFE,
};
