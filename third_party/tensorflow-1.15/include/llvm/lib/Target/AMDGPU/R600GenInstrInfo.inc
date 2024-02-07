/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Target Instruction Enum Values and Descriptors                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_INSTRINFO_ENUM
#undef GET_INSTRINFO_ENUM
namespace llvm {

namespace R600 {
  enum {
    PHI	= 0,
    INLINEASM	= 1,
    INLINEASM_BR	= 2,
    CFI_INSTRUCTION	= 3,
    EH_LABEL	= 4,
    GC_LABEL	= 5,
    ANNOTATION_LABEL	= 6,
    KILL	= 7,
    EXTRACT_SUBREG	= 8,
    INSERT_SUBREG	= 9,
    IMPLICIT_DEF	= 10,
    SUBREG_TO_REG	= 11,
    COPY_TO_REGCLASS	= 12,
    DBG_VALUE	= 13,
    DBG_LABEL	= 14,
    REG_SEQUENCE	= 15,
    COPY	= 16,
    BUNDLE	= 17,
    LIFETIME_START	= 18,
    LIFETIME_END	= 19,
    STACKMAP	= 20,
    FENTRY_CALL	= 21,
    PATCHPOINT	= 22,
    LOAD_STACK_GUARD	= 23,
    STATEPOINT	= 24,
    LOCAL_ESCAPE	= 25,
    FAULTING_OP	= 26,
    PATCHABLE_OP	= 27,
    PATCHABLE_FUNCTION_ENTER	= 28,
    PATCHABLE_RET	= 29,
    PATCHABLE_FUNCTION_EXIT	= 30,
    PATCHABLE_TAIL_CALL	= 31,
    PATCHABLE_EVENT_CALL	= 32,
    PATCHABLE_TYPED_EVENT_CALL	= 33,
    ICALL_BRANCH_FUNNEL	= 34,
    G_ADD	= 35,
    G_SUB	= 36,
    G_MUL	= 37,
    G_SDIV	= 38,
    G_UDIV	= 39,
    G_SREM	= 40,
    G_UREM	= 41,
    G_AND	= 42,
    G_OR	= 43,
    G_XOR	= 44,
    G_IMPLICIT_DEF	= 45,
    G_PHI	= 46,
    G_FRAME_INDEX	= 47,
    G_GLOBAL_VALUE	= 48,
    G_EXTRACT	= 49,
    G_UNMERGE_VALUES	= 50,
    G_INSERT	= 51,
    G_MERGE_VALUES	= 52,
    G_BUILD_VECTOR	= 53,
    G_BUILD_VECTOR_TRUNC	= 54,
    G_CONCAT_VECTORS	= 55,
    G_PTRTOINT	= 56,
    G_INTTOPTR	= 57,
    G_BITCAST	= 58,
    G_INTRINSIC_TRUNC	= 59,
    G_INTRINSIC_ROUND	= 60,
    G_READCYCLECOUNTER	= 61,
    G_LOAD	= 62,
    G_SEXTLOAD	= 63,
    G_ZEXTLOAD	= 64,
    G_INDEXED_LOAD	= 65,
    G_INDEXED_SEXTLOAD	= 66,
    G_INDEXED_ZEXTLOAD	= 67,
    G_STORE	= 68,
    G_INDEXED_STORE	= 69,
    G_ATOMIC_CMPXCHG_WITH_SUCCESS	= 70,
    G_ATOMIC_CMPXCHG	= 71,
    G_ATOMICRMW_XCHG	= 72,
    G_ATOMICRMW_ADD	= 73,
    G_ATOMICRMW_SUB	= 74,
    G_ATOMICRMW_AND	= 75,
    G_ATOMICRMW_NAND	= 76,
    G_ATOMICRMW_OR	= 77,
    G_ATOMICRMW_XOR	= 78,
    G_ATOMICRMW_MAX	= 79,
    G_ATOMICRMW_MIN	= 80,
    G_ATOMICRMW_UMAX	= 81,
    G_ATOMICRMW_UMIN	= 82,
    G_ATOMICRMW_FADD	= 83,
    G_ATOMICRMW_FSUB	= 84,
    G_FENCE	= 85,
    G_BRCOND	= 86,
    G_BRINDIRECT	= 87,
    G_INTRINSIC	= 88,
    G_INTRINSIC_W_SIDE_EFFECTS	= 89,
    G_ANYEXT	= 90,
    G_TRUNC	= 91,
    G_CONSTANT	= 92,
    G_FCONSTANT	= 93,
    G_VASTART	= 94,
    G_VAARG	= 95,
    G_SEXT	= 96,
    G_SEXT_INREG	= 97,
    G_ZEXT	= 98,
    G_SHL	= 99,
    G_LSHR	= 100,
    G_ASHR	= 101,
    G_ICMP	= 102,
    G_FCMP	= 103,
    G_SELECT	= 104,
    G_UADDO	= 105,
    G_UADDE	= 106,
    G_USUBO	= 107,
    G_USUBE	= 108,
    G_SADDO	= 109,
    G_SADDE	= 110,
    G_SSUBO	= 111,
    G_SSUBE	= 112,
    G_UMULO	= 113,
    G_SMULO	= 114,
    G_UMULH	= 115,
    G_SMULH	= 116,
    G_FADD	= 117,
    G_FSUB	= 118,
    G_FMUL	= 119,
    G_FMA	= 120,
    G_FMAD	= 121,
    G_FDIV	= 122,
    G_FREM	= 123,
    G_FPOW	= 124,
    G_FEXP	= 125,
    G_FEXP2	= 126,
    G_FLOG	= 127,
    G_FLOG2	= 128,
    G_FLOG10	= 129,
    G_FNEG	= 130,
    G_FPEXT	= 131,
    G_FPTRUNC	= 132,
    G_FPTOSI	= 133,
    G_FPTOUI	= 134,
    G_SITOFP	= 135,
    G_UITOFP	= 136,
    G_FABS	= 137,
    G_FCOPYSIGN	= 138,
    G_FCANONICALIZE	= 139,
    G_FMINNUM	= 140,
    G_FMAXNUM	= 141,
    G_FMINNUM_IEEE	= 142,
    G_FMAXNUM_IEEE	= 143,
    G_FMINIMUM	= 144,
    G_FMAXIMUM	= 145,
    G_PTR_ADD	= 146,
    G_PTR_MASK	= 147,
    G_SMIN	= 148,
    G_SMAX	= 149,
    G_UMIN	= 150,
    G_UMAX	= 151,
    G_BR	= 152,
    G_BRJT	= 153,
    G_INSERT_VECTOR_ELT	= 154,
    G_EXTRACT_VECTOR_ELT	= 155,
    G_SHUFFLE_VECTOR	= 156,
    G_CTTZ	= 157,
    G_CTTZ_ZERO_UNDEF	= 158,
    G_CTLZ	= 159,
    G_CTLZ_ZERO_UNDEF	= 160,
    G_CTPOP	= 161,
    G_BSWAP	= 162,
    G_BITREVERSE	= 163,
    G_FCEIL	= 164,
    G_FCOS	= 165,
    G_FSIN	= 166,
    G_FSQRT	= 167,
    G_FFLOOR	= 168,
    G_FRINT	= 169,
    G_FNEARBYINT	= 170,
    G_ADDRSPACE_CAST	= 171,
    G_BLOCK_ADDR	= 172,
    G_JUMP_TABLE	= 173,
    G_DYN_STACKALLOC	= 174,
    G_READ_REGISTER	= 175,
    G_WRITE_REGISTER	= 176,
    BRANCH	= 177,
    BRANCH_COND_f32	= 178,
    BRANCH_COND_i32	= 179,
    BREAK	= 180,
    BREAKC_f32	= 181,
    BREAKC_i32	= 182,
    BREAK_LOGICALNZ_f32	= 183,
    BREAK_LOGICALNZ_i32	= 184,
    BREAK_LOGICALZ_f32	= 185,
    BREAK_LOGICALZ_i32	= 186,
    CONST_COPY	= 187,
    CONTINUE	= 188,
    CONTINUEC_f32	= 189,
    CONTINUEC_i32	= 190,
    CONTINUE_LOGICALNZ_f32	= 191,
    CONTINUE_LOGICALNZ_i32	= 192,
    CONTINUE_LOGICALZ_f32	= 193,
    CONTINUE_LOGICALZ_i32	= 194,
    CUBE_eg_pseudo	= 195,
    CUBE_r600_pseudo	= 196,
    DEFAULT	= 197,
    DOT_4	= 198,
    DUMMY_CHAIN	= 199,
    ELSE	= 200,
    END	= 201,
    ENDFUNC	= 202,
    ENDIF	= 203,
    ENDLOOP	= 204,
    ENDMAIN	= 205,
    ENDSWITCH	= 206,
    FABS_R600	= 207,
    FNEG_R600	= 208,
    FUNC	= 209,
    IFC_f32	= 210,
    IFC_i32	= 211,
    IF_LOGICALNZ_f32	= 212,
    IF_LOGICALNZ_i32	= 213,
    IF_LOGICALZ_f32	= 214,
    IF_LOGICALZ_i32	= 215,
    IF_PREDICATE_SET	= 216,
    JUMP	= 217,
    JUMP_COND	= 218,
    MASK_WRITE	= 219,
    MOV_IMM_F32	= 220,
    MOV_IMM_GLOBAL_ADDR	= 221,
    MOV_IMM_I32	= 222,
    PRED_X	= 223,
    R600_EXTRACT_ELT_V2	= 224,
    R600_EXTRACT_ELT_V4	= 225,
    R600_INSERT_ELT_V2	= 226,
    R600_INSERT_ELT_V4	= 227,
    R600_RegisterLoad	= 228,
    R600_RegisterStore	= 229,
    RETDYN	= 230,
    RETURN	= 231,
    TXD	= 232,
    TXD_SHADOW	= 233,
    WHILELOOP	= 234,
    ADD	= 235,
    ADDC_UINT	= 236,
    ADD_INT	= 237,
    ALU_CLAUSE	= 238,
    AND_INT	= 239,
    ASHR_eg	= 240,
    ASHR_r600	= 241,
    BCNT_INT	= 242,
    BFE_INT_eg	= 243,
    BFE_UINT_eg	= 244,
    BFI_INT_eg	= 245,
    BFM_INT_eg	= 246,
    BIT_ALIGN_INT_eg	= 247,
    CEIL	= 248,
    CF_ALU	= 249,
    CF_ALU_BREAK	= 250,
    CF_ALU_CONTINUE	= 251,
    CF_ALU_ELSE_AFTER	= 252,
    CF_ALU_POP_AFTER	= 253,
    CF_ALU_PUSH_BEFORE	= 254,
    CF_CALL_FS_EG	= 255,
    CF_CALL_FS_R600	= 256,
    CF_CONTINUE_EG	= 257,
    CF_CONTINUE_R600	= 258,
    CF_ELSE_EG	= 259,
    CF_ELSE_R600	= 260,
    CF_END_CM	= 261,
    CF_END_EG	= 262,
    CF_END_R600	= 263,
    CF_JUMP_EG	= 264,
    CF_JUMP_R600	= 265,
    CF_PUSH_EG	= 266,
    CF_PUSH_ELSE_R600	= 267,
    CF_TC_EG	= 268,
    CF_TC_R600	= 269,
    CF_VC_EG	= 270,
    CF_VC_R600	= 271,
    CNDE_INT	= 272,
    CNDE_eg	= 273,
    CNDE_r600	= 274,
    CNDGE_INT	= 275,
    CNDGE_eg	= 276,
    CNDGE_r600	= 277,
    CNDGT_INT	= 278,
    CNDGT_eg	= 279,
    CNDGT_r600	= 280,
    COS_cm	= 281,
    COS_eg	= 282,
    COS_r600	= 283,
    COS_r700	= 284,
    CUBE_eg_real	= 285,
    CUBE_r600_real	= 286,
    DOT4_eg	= 287,
    DOT4_r600	= 288,
    EG_ExportBuf	= 289,
    EG_ExportSwz	= 290,
    END_LOOP_EG	= 291,
    END_LOOP_R600	= 292,
    EXP_IEEE_cm	= 293,
    EXP_IEEE_eg	= 294,
    EXP_IEEE_r600	= 295,
    FETCH_CLAUSE	= 296,
    FFBH_UINT	= 297,
    FFBL_INT	= 298,
    FLOOR	= 299,
    FLT16_TO_FLT32	= 300,
    FLT32_TO_FLT16	= 301,
    FLT_TO_INT_eg	= 302,
    FLT_TO_INT_r600	= 303,
    FLT_TO_UINT_eg	= 304,
    FLT_TO_UINT_r600	= 305,
    FMA_eg	= 306,
    FRACT	= 307,
    GROUP_BARRIER	= 308,
    INTERP_LOAD_P0	= 309,
    INTERP_PAIR_XY	= 310,
    INTERP_PAIR_ZW	= 311,
    INTERP_VEC_LOAD	= 312,
    INTERP_XY	= 313,
    INTERP_ZW	= 314,
    INT_TO_FLT_eg	= 315,
    INT_TO_FLT_r600	= 316,
    KILLGT	= 317,
    LDS_ADD	= 318,
    LDS_ADD_RET	= 319,
    LDS_AND	= 320,
    LDS_AND_RET	= 321,
    LDS_BYTE_READ_RET	= 322,
    LDS_BYTE_WRITE	= 323,
    LDS_CMPST	= 324,
    LDS_CMPST_RET	= 325,
    LDS_MAX_INT	= 326,
    LDS_MAX_INT_RET	= 327,
    LDS_MAX_UINT	= 328,
    LDS_MAX_UINT_RET	= 329,
    LDS_MIN_INT	= 330,
    LDS_MIN_INT_RET	= 331,
    LDS_MIN_UINT	= 332,
    LDS_MIN_UINT_RET	= 333,
    LDS_OR	= 334,
    LDS_OR_RET	= 335,
    LDS_READ_RET	= 336,
    LDS_SHORT_READ_RET	= 337,
    LDS_SHORT_WRITE	= 338,
    LDS_SUB	= 339,
    LDS_SUB_RET	= 340,
    LDS_UBYTE_READ_RET	= 341,
    LDS_USHORT_READ_RET	= 342,
    LDS_WRITE	= 343,
    LDS_WRXCHG	= 344,
    LDS_WRXCHG_RET	= 345,
    LDS_XOR	= 346,
    LDS_XOR_RET	= 347,
    LITERALS	= 348,
    LOG_CLAMPED_eg	= 349,
    LOG_CLAMPED_r600	= 350,
    LOG_IEEE_cm	= 351,
    LOG_IEEE_eg	= 352,
    LOG_IEEE_r600	= 353,
    LOOP_BREAK_EG	= 354,
    LOOP_BREAK_R600	= 355,
    LSHL_eg	= 356,
    LSHL_r600	= 357,
    LSHR_eg	= 358,
    LSHR_r600	= 359,
    MAX	= 360,
    MAX_DX10	= 361,
    MAX_INT	= 362,
    MAX_UINT	= 363,
    MIN	= 364,
    MIN_DX10	= 365,
    MIN_INT	= 366,
    MIN_UINT	= 367,
    MOV	= 368,
    MOVA_INT_eg	= 369,
    MUL	= 370,
    MULADD_IEEE_eg	= 371,
    MULADD_IEEE_r600	= 372,
    MULADD_INT24_cm	= 373,
    MULADD_UINT24_eg	= 374,
    MULADD_eg	= 375,
    MULADD_r600	= 376,
    MULHI_INT_cm	= 377,
    MULHI_INT_cm24	= 378,
    MULHI_INT_eg	= 379,
    MULHI_INT_r600	= 380,
    MULHI_UINT24_eg	= 381,
    MULHI_UINT_cm	= 382,
    MULHI_UINT_cm24	= 383,
    MULHI_UINT_eg	= 384,
    MULHI_UINT_r600	= 385,
    MULLO_INT_cm	= 386,
    MULLO_INT_eg	= 387,
    MULLO_INT_r600	= 388,
    MULLO_UINT_cm	= 389,
    MULLO_UINT_eg	= 390,
    MULLO_UINT_r600	= 391,
    MUL_IEEE	= 392,
    MUL_INT24_cm	= 393,
    MUL_LIT_eg	= 394,
    MUL_LIT_r600	= 395,
    MUL_UINT24_eg	= 396,
    NOT_INT	= 397,
    OR_INT	= 398,
    PAD	= 399,
    POP_EG	= 400,
    POP_R600	= 401,
    PRED_SETE	= 402,
    PRED_SETE_INT	= 403,
    PRED_SETGE	= 404,
    PRED_SETGE_INT	= 405,
    PRED_SETGT	= 406,
    PRED_SETGT_INT	= 407,
    PRED_SETNE	= 408,
    PRED_SETNE_INT	= 409,
    R600_ExportBuf	= 410,
    R600_ExportSwz	= 411,
    RAT_ATOMIC_ADD_NORET	= 412,
    RAT_ATOMIC_ADD_RTN	= 413,
    RAT_ATOMIC_AND_NORET	= 414,
    RAT_ATOMIC_AND_RTN	= 415,
    RAT_ATOMIC_CMPXCHG_INT_NORET	= 416,
    RAT_ATOMIC_CMPXCHG_INT_RTN	= 417,
    RAT_ATOMIC_DEC_UINT_NORET	= 418,
    RAT_ATOMIC_DEC_UINT_RTN	= 419,
    RAT_ATOMIC_INC_UINT_NORET	= 420,
    RAT_ATOMIC_INC_UINT_RTN	= 421,
    RAT_ATOMIC_MAX_INT_NORET	= 422,
    RAT_ATOMIC_MAX_INT_RTN	= 423,
    RAT_ATOMIC_MAX_UINT_NORET	= 424,
    RAT_ATOMIC_MAX_UINT_RTN	= 425,
    RAT_ATOMIC_MIN_INT_NORET	= 426,
    RAT_ATOMIC_MIN_INT_RTN	= 427,
    RAT_ATOMIC_MIN_UINT_NORET	= 428,
    RAT_ATOMIC_MIN_UINT_RTN	= 429,
    RAT_ATOMIC_OR_NORET	= 430,
    RAT_ATOMIC_OR_RTN	= 431,
    RAT_ATOMIC_RSUB_NORET	= 432,
    RAT_ATOMIC_RSUB_RTN	= 433,
    RAT_ATOMIC_SUB_NORET	= 434,
    RAT_ATOMIC_SUB_RTN	= 435,
    RAT_ATOMIC_XCHG_INT_NORET	= 436,
    RAT_ATOMIC_XCHG_INT_RTN	= 437,
    RAT_ATOMIC_XOR_NORET	= 438,
    RAT_ATOMIC_XOR_RTN	= 439,
    RAT_MSKOR	= 440,
    RAT_STORE_DWORD128	= 441,
    RAT_STORE_DWORD32	= 442,
    RAT_STORE_DWORD64	= 443,
    RAT_STORE_TYPED_cm	= 444,
    RAT_STORE_TYPED_eg	= 445,
    RAT_WRITE_CACHELESS_128_eg	= 446,
    RAT_WRITE_CACHELESS_32_eg	= 447,
    RAT_WRITE_CACHELESS_64_eg	= 448,
    RECIPSQRT_CLAMPED_cm	= 449,
    RECIPSQRT_CLAMPED_eg	= 450,
    RECIPSQRT_CLAMPED_r600	= 451,
    RECIPSQRT_IEEE_cm	= 452,
    RECIPSQRT_IEEE_eg	= 453,
    RECIPSQRT_IEEE_r600	= 454,
    RECIP_CLAMPED_cm	= 455,
    RECIP_CLAMPED_eg	= 456,
    RECIP_CLAMPED_r600	= 457,
    RECIP_IEEE_cm	= 458,
    RECIP_IEEE_eg	= 459,
    RECIP_IEEE_r600	= 460,
    RECIP_UINT_eg	= 461,
    RECIP_UINT_r600	= 462,
    RNDNE	= 463,
    SETE	= 464,
    SETE_DX10	= 465,
    SETE_INT	= 466,
    SETGE_DX10	= 467,
    SETGE_INT	= 468,
    SETGE_UINT	= 469,
    SETGT_DX10	= 470,
    SETGT_INT	= 471,
    SETGT_UINT	= 472,
    SETNE_DX10	= 473,
    SETNE_INT	= 474,
    SGE	= 475,
    SGT	= 476,
    SIN_cm	= 477,
    SIN_eg	= 478,
    SIN_r600	= 479,
    SIN_r700	= 480,
    SNE	= 481,
    SUBB_UINT	= 482,
    SUB_INT	= 483,
    TEX_GET_GRADIENTS_H	= 484,
    TEX_GET_GRADIENTS_V	= 485,
    TEX_GET_TEXTURE_RESINFO	= 486,
    TEX_LD	= 487,
    TEX_LDPTR	= 488,
    TEX_SAMPLE	= 489,
    TEX_SAMPLE_C	= 490,
    TEX_SAMPLE_C_G	= 491,
    TEX_SAMPLE_C_L	= 492,
    TEX_SAMPLE_C_LB	= 493,
    TEX_SAMPLE_G	= 494,
    TEX_SAMPLE_L	= 495,
    TEX_SAMPLE_LB	= 496,
    TEX_SET_GRADIENTS_H	= 497,
    TEX_SET_GRADIENTS_V	= 498,
    TEX_VTX_CONSTBUF	= 499,
    TEX_VTX_TEXBUF	= 500,
    TRUNC	= 501,
    UINT_TO_FLT_eg	= 502,
    UINT_TO_FLT_r600	= 503,
    VTX_READ_128_cm	= 504,
    VTX_READ_128_eg	= 505,
    VTX_READ_16_cm	= 506,
    VTX_READ_16_eg	= 507,
    VTX_READ_32_cm	= 508,
    VTX_READ_32_eg	= 509,
    VTX_READ_64_cm	= 510,
    VTX_READ_64_eg	= 511,
    VTX_READ_8_cm	= 512,
    VTX_READ_8_eg	= 513,
    WHILE_LOOP_EG	= 514,
    WHILE_LOOP_R600	= 515,
    XOR_INT	= 516,
    INSTRUCTION_LIST_END = 517
  };

} // end namespace R600
} // end namespace llvm
#endif // GET_INSTRINFO_ENUM

#ifdef GET_INSTRINFO_SCHED_ENUM
#undef GET_INSTRINFO_SCHED_ENUM
namespace llvm {

namespace R600 {
namespace Sched {
  enum {
    NoInstrModel	= 0,
    NullALU	= 1,
    VecALU	= 2,
    AnyALU	= 3,
    TransALU	= 4,
    XALU	= 5,
    SCHED_LIST_END = 6
  };
} // end namespace Sched
} // end namespace R600
} // end namespace llvm
#endif // GET_INSTRINFO_SCHED_ENUM

#ifdef GET_INSTRINFO_MC_DESC
#undef GET_INSTRINFO_MC_DESC
namespace llvm {


static const MCOperandInfo OperandInfo2[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo3[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo4[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo5[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo6[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo7[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo8[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo9[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo10[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo11[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo12[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo13[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo14[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo15[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo16[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo17[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo18[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo19[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo20[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo21[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo22[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo23[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo24[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo25[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo26[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_IMM_0, 0 }, };
static const MCOperandInfo OperandInfo27[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo28[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo29[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo30[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo31[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo32[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo33[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, };
static const MCOperandInfo OperandInfo34[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, };
static const MCOperandInfo OperandInfo35[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo36[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo37[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo38[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo39[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo40[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo41[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo42[] = { { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo43[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_TReg32_YRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_TReg32_YRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_TReg32_ZRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_TReg32_ZRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_TReg32_WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_TReg32_WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo44[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Predicate_BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo45[] = { { R600::R600_Predicate_BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo46[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg64VerticalRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo47[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg128VerticalRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo48[] = { { R600::R600_Reg64VerticalRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg64VerticalRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo49[] = { { R600::R600_Reg128VerticalRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg128VerticalRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo50[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo51[] = { { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo52[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo53[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo54[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo55[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo56[] = { { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo57[] = { { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo58[] = { { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_YRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { R600::R600_TReg32_YRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo59[] = { { R600::R600_TReg32_ZRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { R600::R600_TReg32_YRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo60[] = { { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo61[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo62[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo63[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo64[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo65[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo66[] = { { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo67[] = { { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo68[] = { { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo69[] = { { R600::R600_Reg64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo70[] = { { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo71[] = { { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo72[] = { { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo73[] = { { R600::R600_Reg64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo74[] = { { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo75[] = { { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo76[] = { { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo77[] = { { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo78[] = { { R600::R600_Reg64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };

extern const MCInstrDesc R600Insts[] = {
  { 0,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #0 = PHI
  { 1,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1 = INLINEASM
  { 2,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #2 = INLINEASM_BR
  { 3,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #3 = CFI_INSTRUCTION
  { 4,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #4 = EH_LABEL
  { 5,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #5 = GC_LABEL
  { 6,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #6 = ANNOTATION_LABEL
  { 7,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #7 = KILL
  { 8,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo4, -1 ,nullptr },  // Inst #8 = EXTRACT_SUBREG
  { 9,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #9 = INSERT_SUBREG
  { 10,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #10 = IMPLICIT_DEF
  { 11,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo6, -1 ,nullptr },  // Inst #11 = SUBREG_TO_REG
  { 12,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo4, -1 ,nullptr },  // Inst #12 = COPY_TO_REGCLASS
  { 13,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #13 = DBG_VALUE
  { 14,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #14 = DBG_LABEL
  { 15,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #15 = REG_SEQUENCE
  { 16,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #16 = COPY
  { 17,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #17 = BUNDLE
  { 18,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #18 = LIFETIME_START
  { 19,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #19 = LIFETIME_END
  { 20,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo8, -1 ,nullptr },  // Inst #20 = STACKMAP
  { 21,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #21 = FENTRY_CALL
  { 22,	6,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo9, -1 ,nullptr },  // Inst #22 = PATCHPOINT
  { 23,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo10, -1 ,nullptr },  // Inst #23 = LOAD_STACK_GUARD
  { 24,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #24 = STATEPOINT
  { 25,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo11, -1 ,nullptr },  // Inst #25 = LOCAL_ESCAPE
  { 26,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #26 = FAULTING_OP
  { 27,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #27 = PATCHABLE_OP
  { 28,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #28 = PATCHABLE_FUNCTION_ENTER
  { 29,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #29 = PATCHABLE_RET
  { 30,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #30 = PATCHABLE_FUNCTION_EXIT
  { 31,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #31 = PATCHABLE_TAIL_CALL
  { 32,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #32 = PATCHABLE_EVENT_CALL
  { 33,	3,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #33 = PATCHABLE_TYPED_EVENT_CALL
  { 34,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #34 = ICALL_BRANCH_FUNNEL
  { 35,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #35 = G_ADD
  { 36,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #36 = G_SUB
  { 37,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #37 = G_MUL
  { 38,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #38 = G_SDIV
  { 39,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #39 = G_UDIV
  { 40,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #40 = G_SREM
  { 41,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #41 = G_UREM
  { 42,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #42 = G_AND
  { 43,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #43 = G_OR
  { 44,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #44 = G_XOR
  { 45,	1,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #45 = G_IMPLICIT_DEF
  { 46,	1,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #46 = G_PHI
  { 47,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #47 = G_FRAME_INDEX
  { 48,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #48 = G_GLOBAL_VALUE
  { 49,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #49 = G_EXTRACT
  { 50,	2,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #50 = G_UNMERGE_VALUES
  { 51,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #51 = G_INSERT
  { 52,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #52 = G_MERGE_VALUES
  { 53,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #53 = G_BUILD_VECTOR
  { 54,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #54 = G_BUILD_VECTOR_TRUNC
  { 55,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #55 = G_CONCAT_VECTORS
  { 56,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #56 = G_PTRTOINT
  { 57,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #57 = G_INTTOPTR
  { 58,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #58 = G_BITCAST
  { 59,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #59 = G_INTRINSIC_TRUNC
  { 60,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #60 = G_INTRINSIC_ROUND
  { 61,	1,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #61 = G_READCYCLECOUNTER
  { 62,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #62 = G_LOAD
  { 63,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #63 = G_SEXTLOAD
  { 64,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #64 = G_ZEXTLOAD
  { 65,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #65 = G_INDEXED_LOAD
  { 66,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #66 = G_INDEXED_SEXTLOAD
  { 67,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #67 = G_INDEXED_ZEXTLOAD
  { 68,	2,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #68 = G_STORE
  { 69,	5,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #69 = G_INDEXED_STORE
  { 70,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #70 = G_ATOMIC_CMPXCHG_WITH_SUCCESS
  { 71,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #71 = G_ATOMIC_CMPXCHG
  { 72,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #72 = G_ATOMICRMW_XCHG
  { 73,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #73 = G_ATOMICRMW_ADD
  { 74,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #74 = G_ATOMICRMW_SUB
  { 75,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #75 = G_ATOMICRMW_AND
  { 76,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #76 = G_ATOMICRMW_NAND
  { 77,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #77 = G_ATOMICRMW_OR
  { 78,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #78 = G_ATOMICRMW_XOR
  { 79,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #79 = G_ATOMICRMW_MAX
  { 80,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #80 = G_ATOMICRMW_MIN
  { 81,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #81 = G_ATOMICRMW_UMAX
  { 82,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #82 = G_ATOMICRMW_UMIN
  { 83,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #83 = G_ATOMICRMW_FADD
  { 84,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #84 = G_ATOMICRMW_FSUB
  { 85,	2,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo8, -1 ,nullptr },  // Inst #85 = G_FENCE
  { 86,	2,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #86 = G_BRCOND
  { 87,	1,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #87 = G_BRINDIRECT
  { 88,	1,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::Convergent), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #88 = G_INTRINSIC
  { 89,	1,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::Convergent), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #89 = G_INTRINSIC_W_SIDE_EFFECTS
  { 90,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #90 = G_ANYEXT
  { 91,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #91 = G_TRUNC
  { 92,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #92 = G_CONSTANT
  { 93,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #93 = G_FCONSTANT
  { 94,	1,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #94 = G_VASTART
  { 95,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #95 = G_VAARG
  { 96,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #96 = G_SEXT
  { 97,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #97 = G_SEXT_INREG
  { 98,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #98 = G_ZEXT
  { 99,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #99 = G_SHL
  { 100,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #100 = G_LSHR
  { 101,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #101 = G_ASHR
  { 102,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #102 = G_ICMP
  { 103,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #103 = G_FCMP
  { 104,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #104 = G_SELECT
  { 105,	4,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #105 = G_UADDO
  { 106,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #106 = G_UADDE
  { 107,	4,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #107 = G_USUBO
  { 108,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #108 = G_USUBE
  { 109,	4,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #109 = G_SADDO
  { 110,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #110 = G_SADDE
  { 111,	4,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #111 = G_SSUBO
  { 112,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #112 = G_SSUBE
  { 113,	4,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #113 = G_UMULO
  { 114,	4,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #114 = G_SMULO
  { 115,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #115 = G_UMULH
  { 116,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #116 = G_SMULH
  { 117,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #117 = G_FADD
  { 118,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #118 = G_FSUB
  { 119,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #119 = G_FMUL
  { 120,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #120 = G_FMA
  { 121,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #121 = G_FMAD
  { 122,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #122 = G_FDIV
  { 123,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #123 = G_FREM
  { 124,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #124 = G_FPOW
  { 125,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #125 = G_FEXP
  { 126,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #126 = G_FEXP2
  { 127,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #127 = G_FLOG
  { 128,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #128 = G_FLOG2
  { 129,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #129 = G_FLOG10
  { 130,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #130 = G_FNEG
  { 131,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #131 = G_FPEXT
  { 132,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #132 = G_FPTRUNC
  { 133,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #133 = G_FPTOSI
  { 134,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #134 = G_FPTOUI
  { 135,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #135 = G_SITOFP
  { 136,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #136 = G_UITOFP
  { 137,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #137 = G_FABS
  { 138,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #138 = G_FCOPYSIGN
  { 139,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #139 = G_FCANONICALIZE
  { 140,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #140 = G_FMINNUM
  { 141,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #141 = G_FMAXNUM
  { 142,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #142 = G_FMINNUM_IEEE
  { 143,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #143 = G_FMAXNUM_IEEE
  { 144,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #144 = G_FMINIMUM
  { 145,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #145 = G_FMAXIMUM
  { 146,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #146 = G_PTR_ADD
  { 147,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #147 = G_PTR_MASK
  { 148,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #148 = G_SMIN
  { 149,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #149 = G_SMAX
  { 150,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #150 = G_UMIN
  { 151,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #151 = G_UMAX
  { 152,	1,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #152 = G_BR
  { 153,	3,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #153 = G_BRJT
  { 154,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #154 = G_INSERT_VECTOR_ELT
  { 155,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #155 = G_EXTRACT_VECTOR_ELT
  { 156,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #156 = G_SHUFFLE_VECTOR
  { 157,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #157 = G_CTTZ
  { 158,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #158 = G_CTTZ_ZERO_UNDEF
  { 159,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #159 = G_CTLZ
  { 160,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #160 = G_CTLZ_ZERO_UNDEF
  { 161,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #161 = G_CTPOP
  { 162,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #162 = G_BSWAP
  { 163,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #163 = G_BITREVERSE
  { 164,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #164 = G_FCEIL
  { 165,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #165 = G_FCOS
  { 166,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #166 = G_FSIN
  { 167,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #167 = G_FSQRT
  { 168,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #168 = G_FFLOOR
  { 169,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #169 = G_FRINT
  { 170,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #170 = G_FNEARBYINT
  { 171,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #171 = G_ADDRSPACE_CAST
  { 172,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #172 = G_BLOCK_ADDR
  { 173,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #173 = G_JUMP_TABLE
  { 174,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #174 = G_DYN_STACKALLOC
  { 175,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::Convergent), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #175 = G_READ_REGISTER
  { 176,	2,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::Convergent), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #176 = G_WRITE_REGISTER
  { 177,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #177 = BRANCH
  { 178,	2,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #178 = BRANCH_COND_f32
  { 179,	2,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #179 = BRANCH_COND_i32
  { 180,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #180 = BREAK
  { 181,	2,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #181 = BREAKC_f32
  { 182,	2,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #182 = BREAKC_i32
  { 183,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #183 = BREAK_LOGICALNZ_f32
  { 184,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #184 = BREAK_LOGICALNZ_i32
  { 185,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #185 = BREAK_LOGICALZ_f32
  { 186,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #186 = BREAK_LOGICALZ_i32
  { 187,	2,	1,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo41, -1 ,nullptr },  // Inst #187 = CONST_COPY
  { 188,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #188 = CONTINUE
  { 189,	2,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #189 = CONTINUEC_f32
  { 190,	2,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #190 = CONTINUEC_i32
  { 191,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #191 = CONTINUE_LOGICALNZ_f32
  { 192,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #192 = CONTINUE_LOGICALNZ_i32
  { 193,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #193 = CONTINUE_LOGICALZ_f32
  { 194,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #194 = CONTINUE_LOGICALZ_i32
  { 195,	2,	1,	0,	2,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #195 = CUBE_eg_pseudo
  { 196,	2,	1,	0,	2,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #196 = CUBE_r600_pseudo
  { 197,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #197 = DEFAULT
  { 198,	71,	1,	0,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Predicable), 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #198 = DOT_4
  { 199,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #199 = DUMMY_CHAIN
  { 200,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #200 = ELSE
  { 201,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #201 = END
  { 202,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #202 = ENDFUNC
  { 203,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #203 = ENDIF
  { 204,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #204 = ENDLOOP
  { 205,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #205 = ENDMAIN
  { 206,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #206 = ENDSWITCH
  { 207,	2,	1,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #207 = FABS_R600
  { 208,	2,	1,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #208 = FNEG_R600
  { 209,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #209 = FUNC
  { 210,	2,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #210 = IFC_f32
  { 211,	2,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #211 = IFC_i32
  { 212,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #212 = IF_LOGICALNZ_f32
  { 213,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #213 = IF_LOGICALNZ_i32
  { 214,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #214 = IF_LOGICALZ_f32
  { 215,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #215 = IF_LOGICALZ_i32
  { 216,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #216 = IF_PREDICATE_SET
  { 217,	1,	0,	0,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #217 = JUMP
  { 218,	2,	0,	0,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #218 = JUMP_COND
  { 219,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #219 = MASK_WRITE
  { 220,	2,	1,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo41, -1 ,nullptr },  // Inst #220 = MOV_IMM_F32
  { 221,	2,	1,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo41, -1 ,nullptr },  // Inst #221 = MOV_IMM_GLOBAL_ADDR
  { 222,	2,	1,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo41, -1 ,nullptr },  // Inst #222 = MOV_IMM_I32
  { 223,	4,	1,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x180ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #223 = PRED_X
  { 224,	3,	1,	0,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #224 = R600_EXTRACT_ELT_V2
  { 225,	3,	1,	0,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #225 = R600_EXTRACT_ELT_V4
  { 226,	4,	1,	0,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #226 = R600_INSERT_ELT_V2
  { 227,	4,	1,	0,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #227 = R600_INSERT_ELT_V4
  { 228,	4,	1,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x8000000000000000ULL, nullptr, nullptr, OperandInfo50, -1 ,nullptr },  // Inst #228 = R600_RegisterLoad
  { 229,	4,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x4000000000000000ULL, nullptr, nullptr, OperandInfo50, -1 ,nullptr },  // Inst #229 = R600_RegisterStore
  { 230,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #230 = RETDYN
  { 231,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #231 = RETURN
  { 232,	7,	1,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x2000ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #232 = TXD
  { 233,	7,	1,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x2000ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #233 = TXD_SHADOW
  { 234,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #234 = WHILELOOP
  { 235,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #235 = ADD
  { 236,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #236 = ADDC_UINT
  { 237,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #237 = ADD_INT
  { 238,	1,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #238 = ALU_CLAUSE
  { 239,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #239 = AND_INT
  { 240,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #240 = ASHR_eg
  { 241,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #241 = ASHR_r600
  { 242,	14,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #242 = BCNT_INT
  { 243,	19,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo54, -1 ,nullptr },  // Inst #243 = BFE_INT_eg
  { 244,	19,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo54, -1 ,nullptr },  // Inst #244 = BFE_UINT_eg
  { 245,	19,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo54, -1 ,nullptr },  // Inst #245 = BFI_INT_eg
  { 246,	21,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #246 = BFM_INT_eg
  { 247,	19,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo54, -1 ,nullptr },  // Inst #247 = BIT_ALIGN_INT_eg
  { 248,	14,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #248 = CEIL
  { 249,	9,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #249 = CF_ALU
  { 250,	9,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #250 = CF_ALU_BREAK
  { 251,	9,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #251 = CF_ALU_CONTINUE
  { 252,	9,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #252 = CF_ALU_ELSE_AFTER
  { 253,	9,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #253 = CF_ALU_POP_AFTER
  { 254,	9,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #254 = CF_ALU_PUSH_BEFORE
  { 255,	0,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #255 = CF_CALL_FS_EG
  { 256,	0,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #256 = CF_CALL_FS_R600
  { 257,	1,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #257 = CF_CONTINUE_EG
  { 258,	1,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #258 = CF_CONTINUE_R600
  { 259,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo8, -1 ,nullptr },  // Inst #259 = CF_ELSE_EG
  { 260,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo8, -1 ,nullptr },  // Inst #260 = CF_ELSE_R600
  { 261,	0,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #261 = CF_END_CM
  { 262,	0,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #262 = CF_END_EG
  { 263,	0,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #263 = CF_END_R600
  { 264,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo8, -1 ,nullptr },  // Inst #264 = CF_JUMP_EG
  { 265,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo8, -1 ,nullptr },  // Inst #265 = CF_JUMP_R600
  { 266,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo8, -1 ,nullptr },  // Inst #266 = CF_PUSH_EG
  { 267,	1,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #267 = CF_PUSH_ELSE_R600
  { 268,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo8, -1 ,nullptr },  // Inst #268 = CF_TC_EG
  { 269,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo8, -1 ,nullptr },  // Inst #269 = CF_TC_R600
  { 270,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo8, -1 ,nullptr },  // Inst #270 = CF_VC_EG
  { 271,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo8, -1 ,nullptr },  // Inst #271 = CF_VC_R600
  { 272,	19,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo54, -1 ,nullptr },  // Inst #272 = CNDE_INT
  { 273,	19,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo54, -1 ,nullptr },  // Inst #273 = CNDE_eg
  { 274,	19,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo54, -1 ,nullptr },  // Inst #274 = CNDE_r600
  { 275,	19,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo54, -1 ,nullptr },  // Inst #275 = CNDGE_INT
  { 276,	19,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo54, -1 ,nullptr },  // Inst #276 = CNDGE_eg
  { 277,	19,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo54, -1 ,nullptr },  // Inst #277 = CNDGE_r600
  { 278,	19,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo54, -1 ,nullptr },  // Inst #278 = CNDGT_INT
  { 279,	19,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo54, -1 ,nullptr },  // Inst #279 = CNDGT_eg
  { 280,	19,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo54, -1 ,nullptr },  // Inst #280 = CNDGT_r600
  { 281,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4650ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #281 = COS_cm
  { 282,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4610ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #282 = COS_eg
  { 283,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4610ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #283 = COS_r600
  { 284,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4610ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #284 = COS_r700
  { 285,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #285 = CUBE_eg_real
  { 286,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #286 = CUBE_r600_real
  { 287,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #287 = DOT4_eg
  { 288,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #288 = DOT4_r600
  { 289,	7,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #289 = EG_ExportBuf
  { 290,	9,	0,	0,	1,	0|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #290 = EG_ExportSwz
  { 291,	1,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #291 = END_LOOP_EG
  { 292,	1,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #292 = END_LOOP_R600
  { 293,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4640ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #293 = EXP_IEEE_cm
  { 294,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #294 = EXP_IEEE_eg
  { 295,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #295 = EXP_IEEE_r600
  { 296,	1,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #296 = FETCH_CLAUSE
  { 297,	14,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #297 = FFBH_UINT
  { 298,	14,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #298 = FFBL_INT
  { 299,	14,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #299 = FLOOR
  { 300,	14,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #300 = FLT16_TO_FLT32
  { 301,	14,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #301 = FLT32_TO_FLT16
  { 302,	14,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #302 = FLT_TO_INT_eg
  { 303,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #303 = FLT_TO_INT_r600
  { 304,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #304 = FLT_TO_UINT_eg
  { 305,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #305 = FLT_TO_UINT_r600
  { 306,	19,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo54, -1 ,nullptr },  // Inst #306 = FMA_eg
  { 307,	14,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #307 = FRACT
  { 308,	0,	0,	0,	3,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x4000ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #308 = GROUP_BARRIER
  { 309,	14,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #309 = INTERP_LOAD_P0
  { 310,	5,	2,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #310 = INTERP_PAIR_XY
  { 311,	5,	2,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo59, -1 ,nullptr },  // Inst #311 = INTERP_PAIR_ZW
  { 312,	2,	1,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #312 = INTERP_VEC_LOAD
  { 313,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #313 = INTERP_XY
  { 314,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #314 = INTERP_ZW
  { 315,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #315 = INT_TO_FLT_eg
  { 316,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #316 = INT_TO_FLT_r600
  { 317,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x4a00ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #317 = KILLGT
  { 318,	9,	0,	0,	5,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x14200ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #318 = LDS_ADD
  { 319,	10,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0x14200ULL, nullptr, nullptr, OperandInfo62, -1 ,nullptr },  // Inst #319 = LDS_ADD_RET
  { 320,	9,	0,	0,	5,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x14200ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #320 = LDS_AND
  { 321,	10,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0x14200ULL, nullptr, nullptr, OperandInfo62, -1 ,nullptr },  // Inst #321 = LDS_AND_RET
  { 322,	7,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0xc200ULL, nullptr, nullptr, OperandInfo63, -1 ,nullptr },  // Inst #322 = LDS_BYTE_READ_RET
  { 323,	9,	0,	0,	5,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable), 0x14200ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #323 = LDS_BYTE_WRITE
  { 324,	12,	0,	0,	5,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x44200ULL, nullptr, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #324 = LDS_CMPST
  { 325,	13,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0x44200ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #325 = LDS_CMPST_RET
  { 326,	9,	0,	0,	5,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x14200ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #326 = LDS_MAX_INT
  { 327,	10,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0x14200ULL, nullptr, nullptr, OperandInfo62, -1 ,nullptr },  // Inst #327 = LDS_MAX_INT_RET
  { 328,	9,	0,	0,	5,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x14200ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #328 = LDS_MAX_UINT
  { 329,	10,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0x14200ULL, nullptr, nullptr, OperandInfo62, -1 ,nullptr },  // Inst #329 = LDS_MAX_UINT_RET
  { 330,	9,	0,	0,	5,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x14200ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #330 = LDS_MIN_INT
  { 331,	10,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0x14200ULL, nullptr, nullptr, OperandInfo62, -1 ,nullptr },  // Inst #331 = LDS_MIN_INT_RET
  { 332,	9,	0,	0,	5,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x14200ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #332 = LDS_MIN_UINT
  { 333,	10,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0x14200ULL, nullptr, nullptr, OperandInfo62, -1 ,nullptr },  // Inst #333 = LDS_MIN_UINT_RET
  { 334,	9,	0,	0,	5,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x14200ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #334 = LDS_OR
  { 335,	10,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0x14200ULL, nullptr, nullptr, OperandInfo62, -1 ,nullptr },  // Inst #335 = LDS_OR_RET
  { 336,	7,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0xc200ULL, nullptr, nullptr, OperandInfo63, -1 ,nullptr },  // Inst #336 = LDS_READ_RET
  { 337,	7,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0xc200ULL, nullptr, nullptr, OperandInfo63, -1 ,nullptr },  // Inst #337 = LDS_SHORT_READ_RET
  { 338,	9,	0,	0,	5,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable), 0x14200ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #338 = LDS_SHORT_WRITE
  { 339,	9,	0,	0,	5,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x14200ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #339 = LDS_SUB
  { 340,	10,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0x14200ULL, nullptr, nullptr, OperandInfo62, -1 ,nullptr },  // Inst #340 = LDS_SUB_RET
  { 341,	7,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0xc200ULL, nullptr, nullptr, OperandInfo63, -1 ,nullptr },  // Inst #341 = LDS_UBYTE_READ_RET
  { 342,	7,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0xc200ULL, nullptr, nullptr, OperandInfo63, -1 ,nullptr },  // Inst #342 = LDS_USHORT_READ_RET
  { 343,	9,	0,	0,	5,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable), 0x14200ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #343 = LDS_WRITE
  { 344,	9,	0,	0,	5,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x14200ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #344 = LDS_WRXCHG
  { 345,	10,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0x14200ULL, nullptr, nullptr, OperandInfo62, -1 ,nullptr },  // Inst #345 = LDS_WRXCHG_RET
  { 346,	9,	0,	0,	5,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x14200ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #346 = LDS_XOR
  { 347,	10,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0x14200ULL, nullptr, nullptr, OperandInfo62, -1 ,nullptr },  // Inst #347 = LDS_XOR_RET
  { 348,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #348 = LITERALS
  { 349,	14,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #349 = LOG_CLAMPED_eg
  { 350,	14,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #350 = LOG_CLAMPED_r600
  { 351,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4640ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #351 = LOG_IEEE_cm
  { 352,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #352 = LOG_IEEE_eg
  { 353,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #353 = LOG_IEEE_r600
  { 354,	1,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #354 = LOOP_BREAK_EG
  { 355,	1,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #355 = LOOP_BREAK_R600
  { 356,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #356 = LSHL_eg
  { 357,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #357 = LSHL_r600
  { 358,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #358 = LSHR_eg
  { 359,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #359 = LSHR_r600
  { 360,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #360 = MAX
  { 361,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #361 = MAX_DX10
  { 362,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #362 = MAX_INT
  { 363,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #363 = MAX_UINT
  { 364,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #364 = MIN
  { 365,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #365 = MIN_DX10
  { 366,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #366 = MIN_INT
  { 367,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #367 = MIN_UINT
  { 368,	14,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #368 = MOV
  { 369,	14,	1,	0,	2,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x4600ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #369 = MOVA_INT_eg
  { 370,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #370 = MUL
  { 371,	19,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo54, -1 ,nullptr },  // Inst #371 = MULADD_IEEE_eg
  { 372,	19,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo54, -1 ,nullptr },  // Inst #372 = MULADD_IEEE_r600
  { 373,	19,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo54, -1 ,nullptr },  // Inst #373 = MULADD_INT24_cm
  { 374,	19,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo54, -1 ,nullptr },  // Inst #374 = MULADD_UINT24_eg
  { 375,	19,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo54, -1 ,nullptr },  // Inst #375 = MULADD_eg
  { 376,	19,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo54, -1 ,nullptr },  // Inst #376 = MULADD_r600
  { 377,	21,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4a40ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #377 = MULHI_INT_cm
  { 378,	21,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4a40ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #378 = MULHI_INT_cm24
  { 379,	21,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #379 = MULHI_INT_eg
  { 380,	21,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #380 = MULHI_INT_r600
  { 381,	21,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #381 = MULHI_UINT24_eg
  { 382,	21,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4a40ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #382 = MULHI_UINT_cm
  { 383,	21,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4a40ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #383 = MULHI_UINT_cm24
  { 384,	21,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #384 = MULHI_UINT_eg
  { 385,	21,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #385 = MULHI_UINT_r600
  { 386,	21,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4a40ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #386 = MULLO_INT_cm
  { 387,	21,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #387 = MULLO_INT_eg
  { 388,	21,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #388 = MULLO_INT_r600
  { 389,	21,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4a40ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #389 = MULLO_UINT_cm
  { 390,	21,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #390 = MULLO_UINT_eg
  { 391,	21,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #391 = MULLO_UINT_r600
  { 392,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #392 = MUL_IEEE
  { 393,	21,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #393 = MUL_INT24_cm
  { 394,	19,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo54, -1 ,nullptr },  // Inst #394 = MUL_LIT_eg
  { 395,	19,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo54, -1 ,nullptr },  // Inst #395 = MUL_LIT_r600
  { 396,	21,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #396 = MUL_UINT24_eg
  { 397,	14,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #397 = NOT_INT
  { 398,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #398 = OR_INT
  { 399,	0,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #399 = PAD
  { 400,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo8, -1 ,nullptr },  // Inst #400 = POP_EG
  { 401,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo8, -1 ,nullptr },  // Inst #401 = POP_R600
  { 402,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #402 = PRED_SETE
  { 403,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #403 = PRED_SETE_INT
  { 404,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #404 = PRED_SETGE
  { 405,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #405 = PRED_SETGE_INT
  { 406,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #406 = PRED_SETGT
  { 407,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #407 = PRED_SETGT_INT
  { 408,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #408 = PRED_SETNE
  { 409,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #409 = PRED_SETNE_INT
  { 410,	7,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #410 = R600_ExportBuf
  { 411,	9,	0,	0,	1,	0|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #411 = R600_ExportSwz
  { 412,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #412 = RAT_ATOMIC_ADD_NORET
  { 413,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #413 = RAT_ATOMIC_ADD_RTN
  { 414,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #414 = RAT_ATOMIC_AND_NORET
  { 415,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #415 = RAT_ATOMIC_AND_RTN
  { 416,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #416 = RAT_ATOMIC_CMPXCHG_INT_NORET
  { 417,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #417 = RAT_ATOMIC_CMPXCHG_INT_RTN
  { 418,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #418 = RAT_ATOMIC_DEC_UINT_NORET
  { 419,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #419 = RAT_ATOMIC_DEC_UINT_RTN
  { 420,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #420 = RAT_ATOMIC_INC_UINT_NORET
  { 421,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #421 = RAT_ATOMIC_INC_UINT_RTN
  { 422,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #422 = RAT_ATOMIC_MAX_INT_NORET
  { 423,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #423 = RAT_ATOMIC_MAX_INT_RTN
  { 424,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #424 = RAT_ATOMIC_MAX_UINT_NORET
  { 425,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #425 = RAT_ATOMIC_MAX_UINT_RTN
  { 426,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #426 = RAT_ATOMIC_MIN_INT_NORET
  { 427,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #427 = RAT_ATOMIC_MIN_INT_RTN
  { 428,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #428 = RAT_ATOMIC_MIN_UINT_NORET
  { 429,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #429 = RAT_ATOMIC_MIN_UINT_RTN
  { 430,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #430 = RAT_ATOMIC_OR_NORET
  { 431,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #431 = RAT_ATOMIC_OR_RTN
  { 432,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #432 = RAT_ATOMIC_RSUB_NORET
  { 433,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #433 = RAT_ATOMIC_RSUB_RTN
  { 434,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #434 = RAT_ATOMIC_SUB_NORET
  { 435,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #435 = RAT_ATOMIC_SUB_RTN
  { 436,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #436 = RAT_ATOMIC_XCHG_INT_NORET
  { 437,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #437 = RAT_ATOMIC_XCHG_INT_RTN
  { 438,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #438 = RAT_ATOMIC_XOR_NORET
  { 439,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #439 = RAT_ATOMIC_XOR_RTN
  { 440,	2,	0,	0,	1,	0|(1ULL<<MCID::MayStore), 0x20000ULL, nullptr, nullptr, OperandInfo67, -1 ,nullptr },  // Inst #440 = RAT_MSKOR
  { 441,	2,	0,	0,	1,	0|(1ULL<<MCID::MayStore), 0x20000ULL, nullptr, nullptr, OperandInfo67, -1 ,nullptr },  // Inst #441 = RAT_STORE_DWORD128
  { 442,	2,	0,	0,	1,	0|(1ULL<<MCID::MayStore), 0x20000ULL, nullptr, nullptr, OperandInfo68, -1 ,nullptr },  // Inst #442 = RAT_STORE_DWORD32
  { 443,	2,	0,	0,	1,	0|(1ULL<<MCID::MayStore), 0x20000ULL, nullptr, nullptr, OperandInfo69, -1 ,nullptr },  // Inst #443 = RAT_STORE_DWORD64
  { 444,	4,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #444 = RAT_STORE_TYPED_cm
  { 445,	4,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #445 = RAT_STORE_TYPED_eg
  { 446,	3,	0,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x20000ULL, nullptr, nullptr, OperandInfo71, -1 ,nullptr },  // Inst #446 = RAT_WRITE_CACHELESS_128_eg
  { 447,	3,	0,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x20000ULL, nullptr, nullptr, OperandInfo72, -1 ,nullptr },  // Inst #447 = RAT_WRITE_CACHELESS_32_eg
  { 448,	3,	0,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x20000ULL, nullptr, nullptr, OperandInfo73, -1 ,nullptr },  // Inst #448 = RAT_WRITE_CACHELESS_64_eg
  { 449,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4640ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #449 = RECIPSQRT_CLAMPED_cm
  { 450,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #450 = RECIPSQRT_CLAMPED_eg
  { 451,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #451 = RECIPSQRT_CLAMPED_r600
  { 452,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4640ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #452 = RECIPSQRT_IEEE_cm
  { 453,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #453 = RECIPSQRT_IEEE_eg
  { 454,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #454 = RECIPSQRT_IEEE_r600
  { 455,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4640ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #455 = RECIP_CLAMPED_cm
  { 456,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #456 = RECIP_CLAMPED_eg
  { 457,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #457 = RECIP_CLAMPED_r600
  { 458,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4640ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #458 = RECIP_IEEE_cm
  { 459,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #459 = RECIP_IEEE_eg
  { 460,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #460 = RECIP_IEEE_r600
  { 461,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #461 = RECIP_UINT_eg
  { 462,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #462 = RECIP_UINT_r600
  { 463,	14,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #463 = RNDNE
  { 464,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #464 = SETE
  { 465,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #465 = SETE_DX10
  { 466,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #466 = SETE_INT
  { 467,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #467 = SETGE_DX10
  { 468,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #468 = SETGE_INT
  { 469,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #469 = SETGE_UINT
  { 470,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #470 = SETGT_DX10
  { 471,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #471 = SETGT_INT
  { 472,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #472 = SETGT_UINT
  { 473,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #473 = SETNE_DX10
  { 474,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #474 = SETNE_INT
  { 475,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #475 = SGE
  { 476,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #476 = SGT
  { 477,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4650ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #477 = SIN_cm
  { 478,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4610ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #478 = SIN_eg
  { 479,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4610ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #479 = SIN_r600
  { 480,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4610ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #480 = SIN_r700
  { 481,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #481 = SNE
  { 482,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #482 = SUBB_UINT
  { 483,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #483 = SUB_INT
  { 484,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo74, -1 ,nullptr },  // Inst #484 = TEX_GET_GRADIENTS_H
  { 485,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo74, -1 ,nullptr },  // Inst #485 = TEX_GET_GRADIENTS_V
  { 486,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo74, -1 ,nullptr },  // Inst #486 = TEX_GET_TEXTURE_RESINFO
  { 487,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo74, -1 ,nullptr },  // Inst #487 = TEX_LD
  { 488,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo74, -1 ,nullptr },  // Inst #488 = TEX_LDPTR
  { 489,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo74, -1 ,nullptr },  // Inst #489 = TEX_SAMPLE
  { 490,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo74, -1 ,nullptr },  // Inst #490 = TEX_SAMPLE_C
  { 491,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo74, -1 ,nullptr },  // Inst #491 = TEX_SAMPLE_C_G
  { 492,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo74, -1 ,nullptr },  // Inst #492 = TEX_SAMPLE_C_L
  { 493,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo74, -1 ,nullptr },  // Inst #493 = TEX_SAMPLE_C_LB
  { 494,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo74, -1 ,nullptr },  // Inst #494 = TEX_SAMPLE_G
  { 495,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo74, -1 ,nullptr },  // Inst #495 = TEX_SAMPLE_L
  { 496,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo74, -1 ,nullptr },  // Inst #496 = TEX_SAMPLE_LB
  { 497,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo74, -1 ,nullptr },  // Inst #497 = TEX_SET_GRADIENTS_H
  { 498,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo74, -1 ,nullptr },  // Inst #498 = TEX_SET_GRADIENTS_V
  { 499,	4,	1,	0,	1,	0, 0x1000ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #499 = TEX_VTX_CONSTBUF
  { 500,	4,	1,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1000ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #500 = TEX_VTX_TEXBUF
  { 501,	14,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #501 = TRUNC
  { 502,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #502 = UINT_TO_FLT_eg
  { 503,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #503 = UINT_TO_FLT_r600
  { 504,	4,	1,	0,	1,	0|(1ULL<<MCID::MayLoad), 0x1000ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #504 = VTX_READ_128_cm
  { 505,	4,	1,	0,	1,	0|(1ULL<<MCID::MayLoad), 0x1000ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #505 = VTX_READ_128_eg
  { 506,	4,	1,	0,	1,	0|(1ULL<<MCID::MayLoad), 0x1000ULL, nullptr, nullptr, OperandInfo76, -1 ,nullptr },  // Inst #506 = VTX_READ_16_cm
  { 507,	4,	1,	0,	1,	0|(1ULL<<MCID::MayLoad), 0x1000ULL, nullptr, nullptr, OperandInfo76, -1 ,nullptr },  // Inst #507 = VTX_READ_16_eg
  { 508,	4,	1,	0,	1,	0|(1ULL<<MCID::MayLoad), 0x1000ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #508 = VTX_READ_32_cm
  { 509,	4,	1,	0,	1,	0|(1ULL<<MCID::MayLoad), 0x1000ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #509 = VTX_READ_32_eg
  { 510,	4,	1,	0,	1,	0|(1ULL<<MCID::MayLoad), 0x1000ULL, nullptr, nullptr, OperandInfo78, -1 ,nullptr },  // Inst #510 = VTX_READ_64_cm
  { 511,	4,	1,	0,	1,	0|(1ULL<<MCID::MayLoad), 0x1000ULL, nullptr, nullptr, OperandInfo78, -1 ,nullptr },  // Inst #511 = VTX_READ_64_eg
  { 512,	4,	1,	0,	1,	0|(1ULL<<MCID::MayLoad), 0x1000ULL, nullptr, nullptr, OperandInfo76, -1 ,nullptr },  // Inst #512 = VTX_READ_8_cm
  { 513,	4,	1,	0,	1,	0|(1ULL<<MCID::MayLoad), 0x1000ULL, nullptr, nullptr, OperandInfo76, -1 ,nullptr },  // Inst #513 = VTX_READ_8_eg
  { 514,	1,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #514 = WHILE_LOOP_EG
  { 515,	1,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #515 = WHILE_LOOP_R600
  { 516,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #516 = XOR_INT
};

extern const char R600InstrNameData[] = {
  /* 0 */ 'C', 'F', '_', 'T', 'C', '_', 'R', '6', '0', '0', 0,
  /* 11 */ 'C', 'F', '_', 'V', 'C', '_', 'R', '6', '0', '0', 0,
  /* 22 */ 'C', 'F', '_', 'E', 'N', 'D', '_', 'R', '6', '0', '0', 0,
  /* 34 */ 'C', 'F', '_', 'E', 'L', 'S', 'E', '_', 'R', '6', '0', '0', 0,
  /* 47 */ 'C', 'F', '_', 'P', 'U', 'S', 'H', '_', 'E', 'L', 'S', 'E', '_', 'R', '6', '0', '0', 0,
  /* 65 */ 'C', 'F', '_', 'C', 'O', 'N', 'T', 'I', 'N', 'U', 'E', '_', 'R', '6', '0', '0', 0,
  /* 82 */ 'F', 'N', 'E', 'G', '_', 'R', '6', '0', '0', 0,
  /* 92 */ 'L', 'O', 'O', 'P', '_', 'B', 'R', 'E', 'A', 'K', '_', 'R', '6', '0', '0', 0,
  /* 108 */ 'C', 'F', '_', 'J', 'U', 'M', 'P', '_', 'R', '6', '0', '0', 0,
  /* 121 */ 'E', 'N', 'D', '_', 'L', 'O', 'O', 'P', '_', 'R', '6', '0', '0', 0,
  /* 135 */ 'W', 'H', 'I', 'L', 'E', '_', 'L', 'O', 'O', 'P', '_', 'R', '6', '0', '0', 0,
  /* 151 */ 'P', 'O', 'P', '_', 'R', '6', '0', '0', 0,
  /* 160 */ 'F', 'A', 'B', 'S', '_', 'R', '6', '0', '0', 0,
  /* 170 */ 'C', 'F', '_', 'C', 'A', 'L', 'L', '_', 'F', 'S', '_', 'R', '6', '0', '0', 0,
  /* 186 */ 'D', 'O', 'T', '4', '_', 'r', '6', '0', '0', 0,
  /* 196 */ 'M', 'U', 'L', 'A', 'D', 'D', '_', 'r', '6', '0', '0', 0,
  /* 208 */ 'L', 'O', 'G', '_', 'C', 'L', 'A', 'M', 'P', 'E', 'D', '_', 'r', '6', '0', '0', 0,
  /* 225 */ 'R', 'E', 'C', 'I', 'P', '_', 'C', 'L', 'A', 'M', 'P', 'E', 'D', '_', 'r', '6', '0', '0', 0,
  /* 244 */ 'R', 'E', 'C', 'I', 'P', 'S', 'Q', 'R', 'T', '_', 'C', 'L', 'A', 'M', 'P', 'E', 'D', '_', 'r', '6', '0', '0', 0,
  /* 267 */ 'C', 'N', 'D', 'E', '_', 'r', '6', '0', '0', 0,
  /* 277 */ 'M', 'U', 'L', 'A', 'D', 'D', '_', 'I', 'E', 'E', 'E', '_', 'r', '6', '0', '0', 0,
  /* 294 */ 'L', 'O', 'G', '_', 'I', 'E', 'E', 'E', '_', 'r', '6', '0', '0', 0,
  /* 308 */ 'R', 'E', 'C', 'I', 'P', '_', 'I', 'E', 'E', 'E', '_', 'r', '6', '0', '0', 0,
  /* 324 */ 'E', 'X', 'P', '_', 'I', 'E', 'E', 'E', '_', 'r', '6', '0', '0', 0,
  /* 338 */ 'R', 'E', 'C', 'I', 'P', 'S', 'Q', 'R', 'T', '_', 'I', 'E', 'E', 'E', '_', 'r', '6', '0', '0', 0,
  /* 358 */ 'C', 'N', 'D', 'G', 'E', '_', 'r', '6', '0', '0', 0,
  /* 369 */ 'L', 'S', 'H', 'L', '_', 'r', '6', '0', '0', 0,
  /* 379 */ 'S', 'I', 'N', '_', 'r', '6', '0', '0', 0,
  /* 388 */ 'A', 'S', 'H', 'R', '_', 'r', '6', '0', '0', 0,
  /* 398 */ 'L', 'S', 'H', 'R', '_', 'r', '6', '0', '0', 0,
  /* 408 */ 'C', 'O', 'S', '_', 'r', '6', '0', '0', 0,
  /* 417 */ 'C', 'N', 'D', 'G', 'T', '_', 'r', '6', '0', '0', 0,
  /* 428 */ 'M', 'U', 'L', '_', 'L', 'I', 'T', '_', 'r', '6', '0', '0', 0,
  /* 441 */ 'U', 'I', 'N', 'T', '_', 'T', 'O', '_', 'F', 'L', 'T', '_', 'r', '6', '0', '0', 0,
  /* 458 */ 'M', 'U', 'L', 'H', 'I', '_', 'U', 'I', 'N', 'T', '_', 'r', '6', '0', '0', 0,
  /* 474 */ 'M', 'U', 'L', 'L', 'O', '_', 'U', 'I', 'N', 'T', '_', 'r', '6', '0', '0', 0,
  /* 490 */ 'F', 'L', 'T', '_', 'T', 'O', '_', 'U', 'I', 'N', 'T', '_', 'r', '6', '0', '0', 0,
  /* 507 */ 'R', 'E', 'C', 'I', 'P', '_', 'U', 'I', 'N', 'T', '_', 'r', '6', '0', '0', 0,
  /* 523 */ 'M', 'U', 'L', 'H', 'I', '_', 'I', 'N', 'T', '_', 'r', '6', '0', '0', 0,
  /* 538 */ 'M', 'U', 'L', 'L', 'O', '_', 'I', 'N', 'T', '_', 'r', '6', '0', '0', 0,
  /* 553 */ 'F', 'L', 'T', '_', 'T', 'O', '_', 'I', 'N', 'T', '_', 'r', '6', '0', '0', 0,
  /* 569 */ 'S', 'I', 'N', '_', 'r', '7', '0', '0', 0,
  /* 578 */ 'C', 'O', 'S', '_', 'r', '7', '0', '0', 0,
  /* 587 */ 'G', '_', 'F', 'L', 'O', 'G', '1', '0', 0,
  /* 596 */ 'S', 'E', 'T', 'G', 'E', '_', 'D', 'X', '1', '0', 0,
  /* 607 */ 'S', 'E', 'T', 'N', 'E', '_', 'D', 'X', '1', '0', 0,
  /* 618 */ 'S', 'E', 'T', 'E', '_', 'D', 'X', '1', '0', 0,
  /* 628 */ 'M', 'I', 'N', '_', 'D', 'X', '1', '0', 0,
  /* 637 */ 'S', 'E', 'T', 'G', 'T', '_', 'D', 'X', '1', '0', 0,
  /* 648 */ 'M', 'A', 'X', '_', 'D', 'X', '1', '0', 0,
  /* 657 */ 'I', 'N', 'T', 'E', 'R', 'P', '_', 'L', 'O', 'A', 'D', '_', 'P', '0', 0,
  /* 672 */ 'R', 'A', 'T', '_', 'S', 'T', 'O', 'R', 'E', '_', 'D', 'W', 'O', 'R', 'D', '3', '2', 0,
  /* 690 */ 'M', 'O', 'V', '_', 'I', 'M', 'M', '_', 'F', '3', '2', 0,
  /* 702 */ 'M', 'O', 'V', '_', 'I', 'M', 'M', '_', 'I', '3', '2', 0,
  /* 714 */ 'F', 'L', 'T', '1', '6', '_', 'T', 'O', '_', 'F', 'L', 'T', '3', '2', 0,
  /* 729 */ 'C', 'O', 'N', 'T', 'I', 'N', 'U', 'E', 'C', '_', 'f', '3', '2', 0,
  /* 743 */ 'I', 'F', 'C', '_', 'f', '3', '2', 0,
  /* 751 */ 'B', 'R', 'E', 'A', 'K', 'C', '_', 'f', '3', '2', 0,
  /* 762 */ 'B', 'R', 'A', 'N', 'C', 'H', '_', 'C', 'O', 'N', 'D', '_', 'f', '3', '2', 0,
  /* 778 */ 'C', 'O', 'N', 'T', 'I', 'N', 'U', 'E', '_', 'L', 'O', 'G', 'I', 'C', 'A', 'L', 'Z', '_', 'f', '3', '2', 0,
  /* 800 */ 'I', 'F', '_', 'L', 'O', 'G', 'I', 'C', 'A', 'L', 'Z', '_', 'f', '3', '2', 0,
  /* 816 */ 'B', 'R', 'E', 'A', 'K', '_', 'L', 'O', 'G', 'I', 'C', 'A', 'L', 'Z', '_', 'f', '3', '2', 0,
  /* 835 */ 'C', 'O', 'N', 'T', 'I', 'N', 'U', 'E', '_', 'L', 'O', 'G', 'I', 'C', 'A', 'L', 'N', 'Z', '_', 'f', '3', '2', 0,
  /* 858 */ 'I', 'F', '_', 'L', 'O', 'G', 'I', 'C', 'A', 'L', 'N', 'Z', '_', 'f', '3', '2', 0,
  /* 875 */ 'B', 'R', 'E', 'A', 'K', '_', 'L', 'O', 'G', 'I', 'C', 'A', 'L', 'N', 'Z', '_', 'f', '3', '2', 0,
  /* 895 */ 'C', 'O', 'N', 'T', 'I', 'N', 'U', 'E', 'C', '_', 'i', '3', '2', 0,
  /* 909 */ 'I', 'F', 'C', '_', 'i', '3', '2', 0,
  /* 917 */ 'B', 'R', 'E', 'A', 'K', 'C', '_', 'i', '3', '2', 0,
  /* 928 */ 'B', 'R', 'A', 'N', 'C', 'H', '_', 'C', 'O', 'N', 'D', '_', 'i', '3', '2', 0,
  /* 944 */ 'C', 'O', 'N', 'T', 'I', 'N', 'U', 'E', '_', 'L', 'O', 'G', 'I', 'C', 'A', 'L', 'Z', '_', 'i', '3', '2', 0,
  /* 966 */ 'I', 'F', '_', 'L', 'O', 'G', 'I', 'C', 'A', 'L', 'Z', '_', 'i', '3', '2', 0,
  /* 982 */ 'B', 'R', 'E', 'A', 'K', '_', 'L', 'O', 'G', 'I', 'C', 'A', 'L', 'Z', '_', 'i', '3', '2', 0,
  /* 1001 */ 'C', 'O', 'N', 'T', 'I', 'N', 'U', 'E', '_', 'L', 'O', 'G', 'I', 'C', 'A', 'L', 'N', 'Z', '_', 'i', '3', '2', 0,
  /* 1024 */ 'I', 'F', '_', 'L', 'O', 'G', 'I', 'C', 'A', 'L', 'N', 'Z', '_', 'i', '3', '2', 0,
  /* 1041 */ 'B', 'R', 'E', 'A', 'K', '_', 'L', 'O', 'G', 'I', 'C', 'A', 'L', 'N', 'Z', '_', 'i', '3', '2', 0,
  /* 1061 */ 'G', '_', 'F', 'L', 'O', 'G', '2', 0,
  /* 1069 */ 'G', '_', 'F', 'E', 'X', 'P', '2', 0,
  /* 1077 */ 'R', '6', '0', '0', '_', 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'E', 'L', 'T', '_', 'V', '2', 0,
  /* 1097 */ 'R', '6', '0', '0', '_', 'I', 'N', 'S', 'E', 'R', 'T', '_', 'E', 'L', 'T', '_', 'V', '2', 0,
  /* 1116 */ 'M', 'U', 'L', 'H', 'I', '_', 'U', 'I', 'N', 'T', '_', 'c', 'm', '2', '4', 0,
  /* 1132 */ 'M', 'U', 'L', 'H', 'I', '_', 'I', 'N', 'T', '_', 'c', 'm', '2', '4', 0,
  /* 1147 */ 'R', 'A', 'T', '_', 'S', 'T', 'O', 'R', 'E', '_', 'D', 'W', 'O', 'R', 'D', '6', '4', 0,
  /* 1165 */ 'R', '6', '0', '0', '_', 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'E', 'L', 'T', '_', 'V', '4', 0,
  /* 1185 */ 'R', '6', '0', '0', '_', 'I', 'N', 'S', 'E', 'R', 'T', '_', 'E', 'L', 'T', '_', 'V', '4', 0,
  /* 1204 */ 'D', 'O', 'T', '_', '4', 0,
  /* 1210 */ 'F', 'L', 'T', '3', '2', '_', 'T', 'O', '_', 'F', 'L', 'T', '1', '6', 0,
  /* 1225 */ 'R', 'A', 'T', '_', 'S', 'T', 'O', 'R', 'E', '_', 'D', 'W', 'O', 'R', 'D', '1', '2', '8', 0,
  /* 1244 */ 'G', '_', 'F', 'M', 'A', 0,
  /* 1250 */ 'T', 'E', 'X', '_', 'S', 'A', 'M', 'P', 'L', 'E', '_', 'C', '_', 'L', 'B', 0,
  /* 1266 */ 'T', 'E', 'X', '_', 'S', 'A', 'M', 'P', 'L', 'E', '_', 'L', 'B', 0,
  /* 1280 */ 'G', '_', 'F', 'S', 'U', 'B', 0,
  /* 1287 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'F', 'S', 'U', 'B', 0,
  /* 1304 */ 'G', '_', 'S', 'U', 'B', 0,
  /* 1310 */ 'L', 'D', 'S', '_', 'S', 'U', 'B', 0,
  /* 1318 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'S', 'U', 'B', 0,
  /* 1334 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', 0,
  /* 1346 */ 'E', 'N', 'D', 'F', 'U', 'N', 'C', 0,
  /* 1354 */ 'G', '_', 'F', 'P', 'T', 'R', 'U', 'N', 'C', 0,
  /* 1364 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'T', 'R', 'U', 'N', 'C', 0,
  /* 1382 */ 'G', '_', 'T', 'R', 'U', 'N', 'C', 0,
  /* 1390 */ 'G', '_', 'B', 'U', 'I', 'L', 'D', '_', 'V', 'E', 'C', 'T', 'O', 'R', '_', 'T', 'R', 'U', 'N', 'C', 0,
  /* 1411 */ 'G', '_', 'D', 'Y', 'N', '_', 'S', 'T', 'A', 'C', 'K', 'A', 'L', 'L', 'O', 'C', 0,
  /* 1428 */ 'T', 'E', 'X', '_', 'S', 'A', 'M', 'P', 'L', 'E', '_', 'C', 0,
  /* 1441 */ 'G', '_', 'F', 'M', 'A', 'D', 0,
  /* 1448 */ 'G', '_', 'I', 'N', 'D', 'E', 'X', 'E', 'D', '_', 'S', 'E', 'X', 'T', 'L', 'O', 'A', 'D', 0,
  /* 1467 */ 'G', '_', 'S', 'E', 'X', 'T', 'L', 'O', 'A', 'D', 0,
  /* 1478 */ 'G', '_', 'I', 'N', 'D', 'E', 'X', 'E', 'D', '_', 'Z', 'E', 'X', 'T', 'L', 'O', 'A', 'D', 0,
  /* 1497 */ 'G', '_', 'Z', 'E', 'X', 'T', 'L', 'O', 'A', 'D', 0,
  /* 1508 */ 'I', 'N', 'T', 'E', 'R', 'P', '_', 'V', 'E', 'C', '_', 'L', 'O', 'A', 'D', 0,
  /* 1524 */ 'G', '_', 'I', 'N', 'D', 'E', 'X', 'E', 'D', '_', 'L', 'O', 'A', 'D', 0,
  /* 1539 */ 'G', '_', 'L', 'O', 'A', 'D', 0,
  /* 1546 */ 'P', 'A', 'D', 0,
  /* 1550 */ 'G', '_', 'F', 'A', 'D', 'D', 0,
  /* 1557 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'F', 'A', 'D', 'D', 0,
  /* 1574 */ 'G', '_', 'A', 'D', 'D', 0,
  /* 1580 */ 'G', '_', 'P', 'T', 'R', '_', 'A', 'D', 'D', 0,
  /* 1590 */ 'L', 'D', 'S', '_', 'A', 'D', 'D', 0,
  /* 1598 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'A', 'D', 'D', 0,
  /* 1614 */ 'T', 'E', 'X', '_', 'L', 'D', 0,
  /* 1621 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'N', 'A', 'N', 'D', 0,
  /* 1638 */ 'G', '_', 'A', 'N', 'D', 0,
  /* 1644 */ 'L', 'D', 'S', '_', 'A', 'N', 'D', 0,
  /* 1652 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'A', 'N', 'D', 0,
  /* 1668 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'E', 'N', 'D', 0,
  /* 1681 */ 'G', '_', 'B', 'R', 'C', 'O', 'N', 'D', 0,
  /* 1690 */ 'J', 'U', 'M', 'P', '_', 'C', 'O', 'N', 'D', 0,
  /* 1700 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'R', 'O', 'U', 'N', 'D', 0,
  /* 1718 */ 'L', 'O', 'A', 'D', '_', 'S', 'T', 'A', 'C', 'K', '_', 'G', 'U', 'A', 'R', 'D', 0,
  /* 1735 */ 'T', 'X', 'D', 0,
  /* 1739 */ 'G', '_', 'S', 'S', 'U', 'B', 'E', 0,
  /* 1747 */ 'G', '_', 'U', 'S', 'U', 'B', 'E', 0,
  /* 1755 */ 'G', '_', 'F', 'E', 'N', 'C', 'E', 0,
  /* 1763 */ 'R', 'E', 'G', '_', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 0,
  /* 1776 */ 'G', '_', 'S', 'A', 'D', 'D', 'E', 0,
  /* 1784 */ 'G', '_', 'U', 'A', 'D', 'D', 'E', 0,
  /* 1792 */ 'M', 'U', 'L', '_', 'I', 'E', 'E', 'E', 0,
  /* 1801 */ 'G', '_', 'F', 'M', 'I', 'N', 'N', 'U', 'M', '_', 'I', 'E', 'E', 'E', 0,
  /* 1816 */ 'G', '_', 'F', 'M', 'A', 'X', 'N', 'U', 'M', '_', 'I', 'E', 'E', 'E', 0,
  /* 1831 */ 'S', 'G', 'E', 0,
  /* 1835 */ 'P', 'R', 'E', 'D', '_', 'S', 'E', 'T', 'G', 'E', 0,
  /* 1846 */ 'G', '_', 'J', 'U', 'M', 'P', '_', 'T', 'A', 'B', 'L', 'E', 0,
  /* 1859 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 1866 */ 'T', 'E', 'X', '_', 'S', 'A', 'M', 'P', 'L', 'E', 0,
  /* 1877 */ 'R', 'N', 'D', 'N', 'E', 0,
  /* 1883 */ 'S', 'N', 'E', 0,
  /* 1887 */ 'P', 'R', 'E', 'D', '_', 'S', 'E', 'T', 'N', 'E', 0,
  /* 1898 */ 'L', 'O', 'C', 'A', 'L', '_', 'E', 'S', 'C', 'A', 'P', 'E', 0,
  /* 1911 */ 'C', 'F', '_', 'A', 'L', 'U', '_', 'P', 'U', 'S', 'H', '_', 'B', 'E', 'F', 'O', 'R', 'E', 0,
  /* 1930 */ 'G', '_', 'I', 'N', 'D', 'E', 'X', 'E', 'D', '_', 'S', 'T', 'O', 'R', 'E', 0,
  /* 1946 */ 'G', '_', 'S', 'T', 'O', 'R', 'E', 0,
  /* 1954 */ 'E', 'L', 'S', 'E', 0,
  /* 1959 */ 'G', '_', 'B', 'I', 'T', 'R', 'E', 'V', 'E', 'R', 'S', 'E', 0,
  /* 1972 */ 'F', 'E', 'T', 'C', 'H', '_', 'C', 'L', 'A', 'U', 'S', 'E', 0,
  /* 1985 */ 'A', 'L', 'U', '_', 'C', 'L', 'A', 'U', 'S', 'E', 0,
  /* 1996 */ 'P', 'R', 'E', 'D', '_', 'S', 'E', 'T', 'E', 0,
  /* 2006 */ 'L', 'D', 'S', '_', 'B', 'Y', 'T', 'E', '_', 'W', 'R', 'I', 'T', 'E', 0,
  /* 2021 */ 'M', 'A', 'S', 'K', '_', 'W', 'R', 'I', 'T', 'E', 0,
  /* 2032 */ 'L', 'D', 'S', '_', 'W', 'R', 'I', 'T', 'E', 0,
  /* 2042 */ 'L', 'D', 'S', '_', 'S', 'H', 'O', 'R', 'T', '_', 'W', 'R', 'I', 'T', 'E', 0,
  /* 2058 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 2068 */ 'G', '_', 'G', 'L', 'O', 'B', 'A', 'L', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 2083 */ 'C', 'F', '_', 'A', 'L', 'U', '_', 'C', 'O', 'N', 'T', 'I', 'N', 'U', 'E', 0,
  /* 2099 */ 'G', '_', 'F', 'C', 'A', 'N', 'O', 'N', 'I', 'C', 'A', 'L', 'I', 'Z', 'E', 0,
  /* 2115 */ 'G', '_', 'C', 'T', 'L', 'Z', '_', 'Z', 'E', 'R', 'O', '_', 'U', 'N', 'D', 'E', 'F', 0,
  /* 2133 */ 'G', '_', 'C', 'T', 'T', 'Z', '_', 'Z', 'E', 'R', 'O', '_', 'U', 'N', 'D', 'E', 'F', 0,
  /* 2151 */ 'G', '_', 'I', 'M', 'P', 'L', 'I', 'C', 'I', 'T', '_', 'D', 'E', 'F', 0,
  /* 2166 */ 'E', 'N', 'D', 'I', 'F', 0,
  /* 2172 */ 'T', 'E', 'X', '_', 'V', 'T', 'X', '_', 'C', 'O', 'N', 'S', 'T', 'B', 'U', 'F', 0,
  /* 2189 */ 'T', 'E', 'X', '_', 'V', 'T', 'X', '_', 'T', 'E', 'X', 'B', 'U', 'F', 0,
  /* 2204 */ 'G', '_', 'F', 'N', 'E', 'G', 0,
  /* 2211 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 2226 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 2240 */ 'G', '_', 'S', 'E', 'X', 'T', '_', 'I', 'N', 'R', 'E', 'G', 0,
  /* 2253 */ 'S', 'U', 'B', 'R', 'E', 'G', '_', 'T', 'O', '_', 'R', 'E', 'G', 0,
  /* 2267 */ 'C', 'F', '_', 'T', 'C', '_', 'E', 'G', 0,
  /* 2276 */ 'C', 'F', '_', 'V', 'C', '_', 'E', 'G', 0,
  /* 2285 */ 'C', 'F', '_', 'E', 'N', 'D', '_', 'E', 'G', 0,
  /* 2295 */ 'C', 'F', '_', 'E', 'L', 'S', 'E', '_', 'E', 'G', 0,
  /* 2306 */ 'C', 'F', '_', 'C', 'O', 'N', 'T', 'I', 'N', 'U', 'E', '_', 'E', 'G', 0,
  /* 2321 */ 'C', 'F', '_', 'P', 'U', 'S', 'H', '_', 'E', 'G', 0,
  /* 2332 */ 'L', 'O', 'O', 'P', '_', 'B', 'R', 'E', 'A', 'K', '_', 'E', 'G', 0,
  /* 2346 */ 'C', 'F', '_', 'J', 'U', 'M', 'P', '_', 'E', 'G', 0,
  /* 2357 */ 'E', 'N', 'D', '_', 'L', 'O', 'O', 'P', '_', 'E', 'G', 0,
  /* 2369 */ 'W', 'H', 'I', 'L', 'E', '_', 'L', 'O', 'O', 'P', '_', 'E', 'G', 0,
  /* 2383 */ 'P', 'O', 'P', '_', 'E', 'G', 0,
  /* 2390 */ 'C', 'F', '_', 'C', 'A', 'L', 'L', '_', 'F', 'S', '_', 'E', 'G', 0,
  /* 2404 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', 'X', 'C', 'H', 'G', 0,
  /* 2421 */ 'L', 'D', 'S', '_', 'W', 'R', 'X', 'C', 'H', 'G', 0,
  /* 2432 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'X', 'C', 'H', 'G', 0,
  /* 2449 */ 'G', '_', 'F', 'L', 'O', 'G', 0,
  /* 2456 */ 'G', '_', 'V', 'A', 'A', 'R', 'G', 0,
  /* 2464 */ 'T', 'E', 'X', '_', 'S', 'A', 'M', 'P', 'L', 'E', '_', 'C', '_', 'G', 0,
  /* 2479 */ 'T', 'E', 'X', '_', 'S', 'A', 'M', 'P', 'L', 'E', '_', 'G', 0,
  /* 2492 */ 'B', 'R', 'A', 'N', 'C', 'H', 0,
  /* 2499 */ 'E', 'N', 'D', 'S', 'W', 'I', 'T', 'C', 'H', 0,
  /* 2509 */ 'G', '_', 'S', 'M', 'U', 'L', 'H', 0,
  /* 2517 */ 'G', '_', 'U', 'M', 'U', 'L', 'H', 0,
  /* 2525 */ 'T', 'E', 'X', '_', 'G', 'E', 'T', '_', 'G', 'R', 'A', 'D', 'I', 'E', 'N', 'T', 'S', '_', 'H', 0,
  /* 2545 */ 'T', 'E', 'X', '_', 'S', 'E', 'T', '_', 'G', 'R', 'A', 'D', 'I', 'E', 'N', 'T', 'S', '_', 'H', 0,
  /* 2565 */ 'G', '_', 'P', 'H', 'I', 0,
  /* 2571 */ 'G', '_', 'F', 'P', 'T', 'O', 'S', 'I', 0,
  /* 2580 */ 'G', '_', 'F', 'P', 'T', 'O', 'U', 'I', 0,
  /* 2589 */ 'C', 'F', '_', 'A', 'L', 'U', '_', 'B', 'R', 'E', 'A', 'K', 0,
  /* 2602 */ 'G', '_', 'P', 'T', 'R', '_', 'M', 'A', 'S', 'K', 0,
  /* 2613 */ 'G', 'C', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 2622 */ 'D', 'B', 'G', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 2632 */ 'E', 'H', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 2641 */ 'A', 'N', 'N', 'O', 'T', 'A', 'T', 'I', 'O', 'N', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 2658 */ 'I', 'C', 'A', 'L', 'L', '_', 'B', 'R', 'A', 'N', 'C', 'H', '_', 'F', 'U', 'N', 'N', 'E', 'L', 0,
  /* 2678 */ 'G', '_', 'S', 'H', 'L', 0,
  /* 2684 */ 'G', '_', 'F', 'C', 'E', 'I', 'L', 0,
  /* 2692 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'T', 'A', 'I', 'L', '_', 'C', 'A', 'L', 'L', 0,
  /* 2712 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'T', 'Y', 'P', 'E', 'D', '_', 'E', 'V', 'E', 'N', 'T', '_', 'C', 'A', 'L', 'L', 0,
  /* 2739 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'E', 'V', 'E', 'N', 'T', '_', 'C', 'A', 'L', 'L', 0,
  /* 2760 */ 'F', 'E', 'N', 'T', 'R', 'Y', '_', 'C', 'A', 'L', 'L', 0,
  /* 2772 */ 'K', 'I', 'L', 'L', 0,
  /* 2777 */ 'G', '_', 'F', 'M', 'U', 'L', 0,
  /* 2784 */ 'G', '_', 'M', 'U', 'L', 0,
  /* 2790 */ 'T', 'E', 'X', '_', 'S', 'A', 'M', 'P', 'L', 'E', '_', 'C', '_', 'L', 0,
  /* 2805 */ 'T', 'E', 'X', '_', 'S', 'A', 'M', 'P', 'L', 'E', '_', 'L', 0,
  /* 2818 */ 'C', 'F', '_', 'E', 'N', 'D', '_', 'C', 'M', 0,
  /* 2828 */ 'G', '_', 'F', 'R', 'E', 'M', 0,
  /* 2835 */ 'G', '_', 'S', 'R', 'E', 'M', 0,
  /* 2842 */ 'G', '_', 'U', 'R', 'E', 'M', 0,
  /* 2849 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', 0,
  /* 2859 */ 'G', '_', 'F', 'M', 'I', 'N', 'I', 'M', 'U', 'M', 0,
  /* 2870 */ 'G', '_', 'F', 'M', 'A', 'X', 'I', 'M', 'U', 'M', 0,
  /* 2881 */ 'G', '_', 'F', 'M', 'I', 'N', 'N', 'U', 'M', 0,
  /* 2891 */ 'G', '_', 'F', 'M', 'A', 'X', 'N', 'U', 'M', 0,
  /* 2901 */ 'G', '_', 'F', 'C', 'O', 'P', 'Y', 'S', 'I', 'G', 'N', 0,
  /* 2913 */ 'D', 'U', 'M', 'M', 'Y', '_', 'C', 'H', 'A', 'I', 'N', 0,
  /* 2925 */ 'E', 'N', 'D', 'M', 'A', 'I', 'N', 0,
  /* 2933 */ 'G', '_', 'S', 'M', 'I', 'N', 0,
  /* 2940 */ 'G', '_', 'U', 'M', 'I', 'N', 0,
  /* 2947 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'U', 'M', 'I', 'N', 0,
  /* 2964 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'M', 'I', 'N', 0,
  /* 2980 */ 'G', '_', 'F', 'S', 'I', 'N', 0,
  /* 2987 */ 'C', 'F', 'I', '_', 'I', 'N', 'S', 'T', 'R', 'U', 'C', 'T', 'I', 'O', 'N', 0,
  /* 3003 */ 'R', 'E', 'T', 'U', 'R', 'N', 0,
  /* 3010 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'S', 'U', 'B', '_', 'R', 'T', 'N', 0,
  /* 3030 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'U', 'B', '_', 'R', 'T', 'N', 0,
  /* 3049 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'A', 'D', 'D', '_', 'R', 'T', 'N', 0,
  /* 3068 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'A', 'N', 'D', '_', 'R', 'T', 'N', 0,
  /* 3087 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'X', 'O', 'R', '_', 'R', 'T', 'N', 0,
  /* 3106 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'O', 'R', '_', 'R', 'T', 'N', 0,
  /* 3124 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'D', 'E', 'C', '_', 'U', 'I', 'N', 'T', '_', 'R', 'T', 'N', 0,
  /* 3148 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'I', 'N', 'C', '_', 'U', 'I', 'N', 'T', '_', 'R', 'T', 'N', 0,
  /* 3172 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'M', 'I', 'N', '_', 'U', 'I', 'N', 'T', '_', 'R', 'T', 'N', 0,
  /* 3196 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'M', 'A', 'X', '_', 'U', 'I', 'N', 'T', '_', 'R', 'T', 'N', 0,
  /* 3220 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', 'X', 'C', 'H', 'G', '_', 'I', 'N', 'T', '_', 'R', 'T', 'N', 0,
  /* 3247 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'X', 'C', 'H', 'G', '_', 'I', 'N', 'T', '_', 'R', 'T', 'N', 0,
  /* 3271 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'M', 'I', 'N', '_', 'I', 'N', 'T', '_', 'R', 'T', 'N', 0,
  /* 3294 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'M', 'A', 'X', '_', 'I', 'N', 'T', '_', 'R', 'T', 'N', 0,
  /* 3317 */ 'R', 'E', 'T', 'D', 'Y', 'N', 0,
  /* 3324 */ 'G', '_', 'S', 'S', 'U', 'B', 'O', 0,
  /* 3332 */ 'G', '_', 'U', 'S', 'U', 'B', 'O', 0,
  /* 3340 */ 'G', '_', 'S', 'A', 'D', 'D', 'O', 0,
  /* 3348 */ 'G', '_', 'U', 'A', 'D', 'D', 'O', 0,
  /* 3356 */ 'T', 'E', 'X', '_', 'G', 'E', 'T', '_', 'T', 'E', 'X', 'T', 'U', 'R', 'E', '_', 'R', 'E', 'S', 'I', 'N', 'F', 'O', 0,
  /* 3380 */ 'G', '_', 'S', 'M', 'U', 'L', 'O', 0,
  /* 3388 */ 'G', '_', 'U', 'M', 'U', 'L', 'O', 0,
  /* 3396 */ 'S', 'T', 'A', 'C', 'K', 'M', 'A', 'P', 0,
  /* 3405 */ 'G', '_', 'B', 'S', 'W', 'A', 'P', 0,
  /* 3413 */ 'G', '_', 'S', 'I', 'T', 'O', 'F', 'P', 0,
  /* 3422 */ 'G', '_', 'U', 'I', 'T', 'O', 'F', 'P', 0,
  /* 3431 */ 'G', '_', 'F', 'C', 'M', 'P', 0,
  /* 3438 */ 'G', '_', 'I', 'C', 'M', 'P', 0,
  /* 3445 */ 'J', 'U', 'M', 'P', 0,
  /* 3450 */ 'E', 'N', 'D', 'L', 'O', 'O', 'P', 0,
  /* 3458 */ 'W', 'H', 'I', 'L', 'E', 'L', 'O', 'O', 'P', 0,
  /* 3468 */ 'G', '_', 'C', 'T', 'P', 'O', 'P', 0,
  /* 3476 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'O', 'P', 0,
  /* 3489 */ 'F', 'A', 'U', 'L', 'T', 'I', 'N', 'G', '_', 'O', 'P', 0,
  /* 3501 */ 'G', '_', 'F', 'E', 'X', 'P', 0,
  /* 3508 */ 'G', '_', 'B', 'R', 0,
  /* 3513 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', '_', 'B', 'R', 0,
  /* 3526 */ 'G', '_', 'B', 'L', 'O', 'C', 'K', '_', 'A', 'D', 'D', 'R', 0,
  /* 3539 */ 'M', 'O', 'V', '_', 'I', 'M', 'M', '_', 'G', 'L', 'O', 'B', 'A', 'L', '_', 'A', 'D', 'D', 'R', 0,
  /* 3559 */ 'G', 'R', 'O', 'U', 'P', '_', 'B', 'A', 'R', 'R', 'I', 'E', 'R', 0,
  /* 3573 */ 'C', 'F', '_', 'A', 'L', 'U', '_', 'E', 'L', 'S', 'E', '_', 'A', 'F', 'T', 'E', 'R', 0,
  /* 3591 */ 'C', 'F', '_', 'A', 'L', 'U', '_', 'P', 'O', 'P', '_', 'A', 'F', 'T', 'E', 'R', 0,
  /* 3608 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'F', 'U', 'N', 'C', 'T', 'I', 'O', 'N', '_', 'E', 'N', 'T', 'E', 'R', 0,
  /* 3633 */ 'G', '_', 'R', 'E', 'A', 'D', 'C', 'Y', 'C', 'L', 'E', 'C', 'O', 'U', 'N', 'T', 'E', 'R', 0,
  /* 3652 */ 'G', '_', 'R', 'E', 'A', 'D', '_', 'R', 'E', 'G', 'I', 'S', 'T', 'E', 'R', 0,
  /* 3668 */ 'G', '_', 'W', 'R', 'I', 'T', 'E', '_', 'R', 'E', 'G', 'I', 'S', 'T', 'E', 'R', 0,
  /* 3685 */ 'G', '_', 'A', 'S', 'H', 'R', 0,
  /* 3692 */ 'G', '_', 'L', 'S', 'H', 'R', 0,
  /* 3699 */ 'R', 'A', 'T', '_', 'M', 'S', 'K', 'O', 'R', 0,
  /* 3709 */ 'G', '_', 'F', 'F', 'L', 'O', 'O', 'R', 0,
  /* 3718 */ 'G', '_', 'B', 'U', 'I', 'L', 'D', '_', 'V', 'E', 'C', 'T', 'O', 'R', 0,
  /* 3733 */ 'G', '_', 'S', 'H', 'U', 'F', 'F', 'L', 'E', '_', 'V', 'E', 'C', 'T', 'O', 'R', 0,
  /* 3750 */ 'G', '_', 'X', 'O', 'R', 0,
  /* 3756 */ 'L', 'D', 'S', '_', 'X', 'O', 'R', 0,
  /* 3764 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'X', 'O', 'R', 0,
  /* 3780 */ 'G', '_', 'O', 'R', 0,
  /* 3785 */ 'L', 'D', 'S', '_', 'O', 'R', 0,
  /* 3792 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'O', 'R', 0,
  /* 3807 */ 'T', 'E', 'X', '_', 'L', 'D', 'P', 'T', 'R', 0,
  /* 3817 */ 'G', '_', 'I', 'N', 'T', 'T', 'O', 'P', 'T', 'R', 0,
  /* 3828 */ 'G', '_', 'F', 'A', 'B', 'S', 0,
  /* 3835 */ 'G', '_', 'U', 'N', 'M', 'E', 'R', 'G', 'E', '_', 'V', 'A', 'L', 'U', 'E', 'S', 0,
  /* 3852 */ 'G', '_', 'M', 'E', 'R', 'G', 'E', '_', 'V', 'A', 'L', 'U', 'E', 'S', 0,
  /* 3867 */ 'L', 'I', 'T', 'E', 'R', 'A', 'L', 'S', 0,
  /* 3876 */ 'G', '_', 'F', 'C', 'O', 'S', 0,
  /* 3883 */ 'G', '_', 'C', 'O', 'N', 'C', 'A', 'T', '_', 'V', 'E', 'C', 'T', 'O', 'R', 'S', 0,
  /* 3900 */ 'C', 'O', 'P', 'Y', '_', 'T', 'O', '_', 'R', 'E', 'G', 'C', 'L', 'A', 'S', 'S', 0,
  /* 3917 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', 'X', 'C', 'H', 'G', '_', 'W', 'I', 'T', 'H', '_', 'S', 'U', 'C', 'C', 'E', 'S', 'S', 0,
  /* 3947 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'W', '_', 'S', 'I', 'D', 'E', '_', 'E', 'F', 'F', 'E', 'C', 'T', 'S', 0,
  /* 3974 */ 'F', 'R', 'A', 'C', 'T', 0,
  /* 3980 */ 'G', '_', 'E', 'X', 'T', 'R', 'A', 'C', 'T', 0,
  /* 3990 */ 'G', '_', 'S', 'E', 'L', 'E', 'C', 'T', 0,
  /* 3999 */ 'G', '_', 'B', 'R', 'I', 'N', 'D', 'I', 'R', 'E', 'C', 'T', 0,
  /* 4012 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'S', 'U', 'B', '_', 'N', 'O', 'R', 'E', 'T', 0,
  /* 4034 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'U', 'B', '_', 'N', 'O', 'R', 'E', 'T', 0,
  /* 4055 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'A', 'D', 'D', '_', 'N', 'O', 'R', 'E', 'T', 0,
  /* 4076 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'A', 'N', 'D', '_', 'N', 'O', 'R', 'E', 'T', 0,
  /* 4097 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'X', 'O', 'R', '_', 'N', 'O', 'R', 'E', 'T', 0,
  /* 4118 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'O', 'R', '_', 'N', 'O', 'R', 'E', 'T', 0,
  /* 4138 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'D', 'E', 'C', '_', 'U', 'I', 'N', 'T', '_', 'N', 'O', 'R', 'E', 'T', 0,
  /* 4164 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'I', 'N', 'C', '_', 'U', 'I', 'N', 'T', '_', 'N', 'O', 'R', 'E', 'T', 0,
  /* 4190 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'M', 'I', 'N', '_', 'U', 'I', 'N', 'T', '_', 'N', 'O', 'R', 'E', 'T', 0,
  /* 4216 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'M', 'A', 'X', '_', 'U', 'I', 'N', 'T', '_', 'N', 'O', 'R', 'E', 'T', 0,
  /* 4242 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', 'X', 'C', 'H', 'G', '_', 'I', 'N', 'T', '_', 'N', 'O', 'R', 'E', 'T', 0,
  /* 4271 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'X', 'C', 'H', 'G', '_', 'I', 'N', 'T', '_', 'N', 'O', 'R', 'E', 'T', 0,
  /* 4297 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'M', 'I', 'N', '_', 'I', 'N', 'T', '_', 'N', 'O', 'R', 'E', 'T', 0,
  /* 4322 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'M', 'A', 'X', '_', 'I', 'N', 'T', '_', 'N', 'O', 'R', 'E', 'T', 0,
  /* 4347 */ 'L', 'D', 'S', '_', 'S', 'U', 'B', '_', 'R', 'E', 'T', 0,
  /* 4359 */ 'L', 'D', 'S', '_', 'U', 'B', 'Y', 'T', 'E', '_', 'R', 'E', 'A', 'D', '_', 'R', 'E', 'T', 0,
  /* 4378 */ 'L', 'D', 'S', '_', 'B', 'Y', 'T', 'E', '_', 'R', 'E', 'A', 'D', '_', 'R', 'E', 'T', 0,
  /* 4396 */ 'L', 'D', 'S', '_', 'R', 'E', 'A', 'D', '_', 'R', 'E', 'T', 0,
  /* 4409 */ 'L', 'D', 'S', '_', 'U', 'S', 'H', 'O', 'R', 'T', '_', 'R', 'E', 'A', 'D', '_', 'R', 'E', 'T', 0,
  /* 4429 */ 'L', 'D', 'S', '_', 'S', 'H', 'O', 'R', 'T', '_', 'R', 'E', 'A', 'D', '_', 'R', 'E', 'T', 0,
  /* 4448 */ 'L', 'D', 'S', '_', 'A', 'D', 'D', '_', 'R', 'E', 'T', 0,
  /* 4460 */ 'L', 'D', 'S', '_', 'A', 'N', 'D', '_', 'R', 'E', 'T', 0,
  /* 4472 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'R', 'E', 'T', 0,
  /* 4486 */ 'L', 'D', 'S', '_', 'W', 'R', 'X', 'C', 'H', 'G', '_', 'R', 'E', 'T', 0,
  /* 4501 */ 'L', 'D', 'S', '_', 'X', 'O', 'R', '_', 'R', 'E', 'T', 0,
  /* 4513 */ 'L', 'D', 'S', '_', 'O', 'R', '_', 'R', 'E', 'T', 0,
  /* 4524 */ 'L', 'D', 'S', '_', 'M', 'I', 'N', '_', 'U', 'I', 'N', 'T', '_', 'R', 'E', 'T', 0,
  /* 4541 */ 'L', 'D', 'S', '_', 'M', 'A', 'X', '_', 'U', 'I', 'N', 'T', '_', 'R', 'E', 'T', 0,
  /* 4558 */ 'L', 'D', 'S', '_', 'M', 'I', 'N', '_', 'I', 'N', 'T', '_', 'R', 'E', 'T', 0,
  /* 4574 */ 'L', 'D', 'S', '_', 'M', 'A', 'X', '_', 'I', 'N', 'T', '_', 'R', 'E', 'T', 0,
  /* 4590 */ 'L', 'D', 'S', '_', 'C', 'M', 'P', 'S', 'T', '_', 'R', 'E', 'T', 0,
  /* 4604 */ 'I', 'F', '_', 'P', 'R', 'E', 'D', 'I', 'C', 'A', 'T', 'E', '_', 'S', 'E', 'T', 0,
  /* 4621 */ 'K', 'I', 'L', 'L', 'G', 'T', 0,
  /* 4628 */ 'S', 'G', 'T', 0,
  /* 4632 */ 'P', 'R', 'E', 'D', '_', 'S', 'E', 'T', 'G', 'T', 0,
  /* 4643 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'F', 'U', 'N', 'C', 'T', 'I', 'O', 'N', '_', 'E', 'X', 'I', 'T', 0,
  /* 4667 */ 'G', '_', 'B', 'R', 'J', 'T', 0,
  /* 4674 */ 'G', '_', 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'V', 'E', 'C', 'T', 'O', 'R', '_', 'E', 'L', 'T', 0,
  /* 4695 */ 'G', '_', 'I', 'N', 'S', 'E', 'R', 'T', '_', 'V', 'E', 'C', 'T', 'O', 'R', '_', 'E', 'L', 'T', 0,
  /* 4715 */ 'D', 'E', 'F', 'A', 'U', 'L', 'T', 0,
  /* 4723 */ 'G', '_', 'F', 'C', 'O', 'N', 'S', 'T', 'A', 'N', 'T', 0,
  /* 4735 */ 'G', '_', 'C', 'O', 'N', 'S', 'T', 'A', 'N', 'T', 0,
  /* 4746 */ 'S', 'T', 'A', 'T', 'E', 'P', 'O', 'I', 'N', 'T', 0,
  /* 4757 */ 'P', 'A', 'T', 'C', 'H', 'P', 'O', 'I', 'N', 'T', 0,
  /* 4768 */ 'G', '_', 'P', 'T', 'R', 'T', 'O', 'I', 'N', 'T', 0,
  /* 4779 */ 'G', '_', 'F', 'R', 'I', 'N', 'T', 0,
  /* 4787 */ 'S', 'U', 'B', 'B', '_', 'U', 'I', 'N', 'T', 0,
  /* 4797 */ 'A', 'D', 'D', 'C', '_', 'U', 'I', 'N', 'T', 0,
  /* 4807 */ 'S', 'E', 'T', 'G', 'E', '_', 'U', 'I', 'N', 'T', 0,
  /* 4818 */ 'F', 'F', 'B', 'H', '_', 'U', 'I', 'N', 'T', 0,
  /* 4828 */ 'L', 'D', 'S', '_', 'M', 'I', 'N', '_', 'U', 'I', 'N', 'T', 0,
  /* 4841 */ 'S', 'E', 'T', 'G', 'T', '_', 'U', 'I', 'N', 'T', 0,
  /* 4852 */ 'L', 'D', 'S', '_', 'M', 'A', 'X', '_', 'U', 'I', 'N', 'T', 0,
  /* 4865 */ 'G', '_', 'F', 'N', 'E', 'A', 'R', 'B', 'Y', 'I', 'N', 'T', 0,
  /* 4878 */ 'S', 'U', 'B', '_', 'I', 'N', 'T', 0,
  /* 4886 */ 'A', 'D', 'D', '_', 'I', 'N', 'T', 0,
  /* 4894 */ 'A', 'N', 'D', '_', 'I', 'N', 'T', 0,
  /* 4902 */ 'C', 'N', 'D', 'E', '_', 'I', 'N', 'T', 0,
  /* 4911 */ 'C', 'N', 'D', 'G', 'E', '_', 'I', 'N', 'T', 0,
  /* 4921 */ 'P', 'R', 'E', 'D', '_', 'S', 'E', 'T', 'G', 'E', '_', 'I', 'N', 'T', 0,
  /* 4936 */ 'P', 'R', 'E', 'D', '_', 'S', 'E', 'T', 'N', 'E', '_', 'I', 'N', 'T', 0,
  /* 4951 */ 'P', 'R', 'E', 'D', '_', 'S', 'E', 'T', 'E', '_', 'I', 'N', 'T', 0,
  /* 4965 */ 'F', 'F', 'B', 'L', '_', 'I', 'N', 'T', 0,
  /* 4974 */ 'L', 'D', 'S', '_', 'M', 'I', 'N', '_', 'I', 'N', 'T', 0,
  /* 4986 */ 'X', 'O', 'R', '_', 'I', 'N', 'T', 0,
  /* 4994 */ 'C', 'N', 'D', 'G', 'T', '_', 'I', 'N', 'T', 0,
  /* 5004 */ 'P', 'R', 'E', 'D', '_', 'S', 'E', 'T', 'G', 'T', '_', 'I', 'N', 'T', 0,
  /* 5019 */ 'B', 'C', 'N', 'T', '_', 'I', 'N', 'T', 0,
  /* 5028 */ 'N', 'O', 'T', '_', 'I', 'N', 'T', 0,
  /* 5036 */ 'L', 'D', 'S', '_', 'M', 'A', 'X', '_', 'I', 'N', 'T', 0,
  /* 5048 */ 'G', '_', 'V', 'A', 'S', 'T', 'A', 'R', 'T', 0,
  /* 5058 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'S', 'T', 'A', 'R', 'T', 0,
  /* 5073 */ 'G', '_', 'I', 'N', 'S', 'E', 'R', 'T', 0,
  /* 5082 */ 'G', '_', 'F', 'S', 'Q', 'R', 'T', 0,
  /* 5090 */ 'G', '_', 'B', 'I', 'T', 'C', 'A', 'S', 'T', 0,
  /* 5100 */ 'G', '_', 'A', 'D', 'D', 'R', 'S', 'P', 'A', 'C', 'E', '_', 'C', 'A', 'S', 'T', 0,
  /* 5117 */ 'L', 'D', 'S', '_', 'C', 'M', 'P', 'S', 'T', 0,
  /* 5127 */ 'G', '_', 'F', 'P', 'E', 'X', 'T', 0,
  /* 5135 */ 'G', '_', 'S', 'E', 'X', 'T', 0,
  /* 5142 */ 'G', '_', 'A', 'N', 'Y', 'E', 'X', 'T', 0,
  /* 5151 */ 'G', '_', 'Z', 'E', 'X', 'T', 0,
  /* 5158 */ 'C', 'F', '_', 'A', 'L', 'U', 0,
  /* 5165 */ 'G', '_', 'F', 'D', 'I', 'V', 0,
  /* 5172 */ 'G', '_', 'S', 'D', 'I', 'V', 0,
  /* 5179 */ 'G', '_', 'U', 'D', 'I', 'V', 0,
  /* 5186 */ 'M', 'O', 'V', 0,
  /* 5190 */ 'T', 'E', 'X', '_', 'G', 'E', 'T', '_', 'G', 'R', 'A', 'D', 'I', 'E', 'N', 'T', 'S', '_', 'V', 0,
  /* 5210 */ 'T', 'E', 'X', '_', 'S', 'E', 'T', '_', 'G', 'R', 'A', 'D', 'I', 'E', 'N', 'T', 'S', '_', 'V', 0,
  /* 5230 */ 'T', 'X', 'D', '_', 'S', 'H', 'A', 'D', 'O', 'W', 0,
  /* 5241 */ 'G', '_', 'F', 'P', 'O', 'W', 0,
  /* 5248 */ 'I', 'N', 'T', 'E', 'R', 'P', '_', 'Z', 'W', 0,
  /* 5258 */ 'I', 'N', 'T', 'E', 'R', 'P', '_', 'P', 'A', 'I', 'R', '_', 'Z', 'W', 0,
  /* 5273 */ 'G', '_', 'S', 'M', 'A', 'X', 0,
  /* 5280 */ 'G', '_', 'U', 'M', 'A', 'X', 0,
  /* 5287 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'U', 'M', 'A', 'X', 0,
  /* 5304 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'M', 'A', 'X', 0,
  /* 5320 */ 'G', '_', 'F', 'R', 'A', 'M', 'E', '_', 'I', 'N', 'D', 'E', 'X', 0,
  /* 5334 */ 'P', 'R', 'E', 'D', '_', 'X', 0,
  /* 5341 */ 'C', 'O', 'N', 'S', 'T', '_', 'C', 'O', 'P', 'Y', 0,
  /* 5352 */ 'I', 'N', 'T', 'E', 'R', 'P', '_', 'X', 'Y', 0,
  /* 5362 */ 'I', 'N', 'T', 'E', 'R', 'P', '_', 'P', 'A', 'I', 'R', '_', 'X', 'Y', 0,
  /* 5377 */ 'G', '_', 'C', 'T', 'L', 'Z', 0,
  /* 5384 */ 'G', '_', 'C', 'T', 'T', 'Z', 0,
  /* 5391 */ 'R', '6', '0', '0', '_', 'R', 'e', 'g', 'i', 's', 't', 'e', 'r', 'L', 'o', 'a', 'd', 0,
  /* 5409 */ 'R', '6', '0', '0', '_', 'R', 'e', 'g', 'i', 's', 't', 'e', 'r', 'S', 't', 'o', 'r', 'e', 0,
  /* 5428 */ 'R', '6', '0', '0', '_', 'E', 'x', 'p', 'o', 'r', 't', 'B', 'u', 'f', 0,
  /* 5443 */ 'E', 'G', '_', 'E', 'x', 'p', 'o', 'r', 't', 'B', 'u', 'f', 0,
  /* 5456 */ 'V', 'T', 'X', '_', 'R', 'E', 'A', 'D', '_', '3', '2', '_', 'e', 'g', 0,
  /* 5471 */ 'R', 'A', 'T', '_', 'W', 'R', 'I', 'T', 'E', '_', 'C', 'A', 'C', 'H', 'E', 'L', 'E', 'S', 'S', '_', '3', '2', '_', 'e', 'g', 0,
  /* 5497 */ 'M', 'U', 'L', 'A', 'D', 'D', '_', 'U', 'I', 'N', 'T', '2', '4', '_', 'e', 'g', 0,
  /* 5514 */ 'M', 'U', 'L', 'H', 'I', '_', 'U', 'I', 'N', 'T', '2', '4', '_', 'e', 'g', 0,
  /* 5530 */ 'M', 'U', 'L', '_', 'U', 'I', 'N', 'T', '2', '4', '_', 'e', 'g', 0,
  /* 5544 */ 'V', 'T', 'X', '_', 'R', 'E', 'A', 'D', '_', '6', '4', '_', 'e', 'g', 0,
  /* 5559 */ 'R', 'A', 'T', '_', 'W', 'R', 'I', 'T', 'E', '_', 'C', 'A', 'C', 'H', 'E', 'L', 'E', 'S', 'S', '_', '6', '4', '_', 'e', 'g', 0,
  /* 5585 */ 'D', 'O', 'T', '4', '_', 'e', 'g', 0,
  /* 5593 */ 'V', 'T', 'X', '_', 'R', 'E', 'A', 'D', '_', '1', '6', '_', 'e', 'g', 0,
  /* 5608 */ 'V', 'T', 'X', '_', 'R', 'E', 'A', 'D', '_', '1', '2', '8', '_', 'e', 'g', 0,
  /* 5624 */ 'R', 'A', 'T', '_', 'W', 'R', 'I', 'T', 'E', '_', 'C', 'A', 'C', 'H', 'E', 'L', 'E', 'S', 'S', '_', '1', '2', '8', '_', 'e', 'g', 0,
  /* 5651 */ 'V', 'T', 'X', '_', 'R', 'E', 'A', 'D', '_', '8', '_', 'e', 'g', 0,
  /* 5665 */ 'F', 'M', 'A', '_', 'e', 'g', 0,
  /* 5672 */ 'M', 'U', 'L', 'A', 'D', 'D', '_', 'e', 'g', 0,
  /* 5682 */ 'L', 'O', 'G', '_', 'C', 'L', 'A', 'M', 'P', 'E', 'D', '_', 'e', 'g', 0,
  /* 5697 */ 'R', 'E', 'C', 'I', 'P', '_', 'C', 'L', 'A', 'M', 'P', 'E', 'D', '_', 'e', 'g', 0,
  /* 5714 */ 'R', 'E', 'C', 'I', 'P', 'S', 'Q', 'R', 'T', '_', 'C', 'L', 'A', 'M', 'P', 'E', 'D', '_', 'e', 'g', 0,
  /* 5735 */ 'R', 'A', 'T', '_', 'S', 'T', 'O', 'R', 'E', '_', 'T', 'Y', 'P', 'E', 'D', '_', 'e', 'g', 0,
  /* 5754 */ 'C', 'N', 'D', 'E', '_', 'e', 'g', 0,
  /* 5762 */ 'M', 'U', 'L', 'A', 'D', 'D', '_', 'I', 'E', 'E', 'E', '_', 'e', 'g', 0,
  /* 5777 */ 'L', 'O', 'G', '_', 'I', 'E', 'E', 'E', '_', 'e', 'g', 0,
  /* 5789 */ 'R', 'E', 'C', 'I', 'P', '_', 'I', 'E', 'E', 'E', '_', 'e', 'g', 0,
  /* 5803 */ 'E', 'X', 'P', '_', 'I', 'E', 'E', 'E', '_', 'e', 'g', 0,
  /* 5815 */ 'R', 'E', 'C', 'I', 'P', 'S', 'Q', 'R', 'T', '_', 'I', 'E', 'E', 'E', '_', 'e', 'g', 0,
  /* 5833 */ 'C', 'N', 'D', 'G', 'E', '_', 'e', 'g', 0,
  /* 5842 */ 'L', 'S', 'H', 'L', '_', 'e', 'g', 0,
  /* 5850 */ 'S', 'I', 'N', '_', 'e', 'g', 0,
  /* 5857 */ 'A', 'S', 'H', 'R', '_', 'e', 'g', 0,
  /* 5865 */ 'L', 'S', 'H', 'R', '_', 'e', 'g', 0,
  /* 5873 */ 'C', 'O', 'S', '_', 'e', 'g', 0,
  /* 5880 */ 'C', 'N', 'D', 'G', 'T', '_', 'e', 'g', 0,
  /* 5889 */ 'M', 'U', 'L', '_', 'L', 'I', 'T', '_', 'e', 'g', 0,
  /* 5900 */ 'U', 'I', 'N', 'T', '_', 'T', 'O', '_', 'F', 'L', 'T', '_', 'e', 'g', 0,
  /* 5915 */ 'B', 'F', 'E', '_', 'U', 'I', 'N', 'T', '_', 'e', 'g', 0,
  /* 5927 */ 'M', 'U', 'L', 'H', 'I', '_', 'U', 'I', 'N', 'T', '_', 'e', 'g', 0,
  /* 5941 */ 'M', 'U', 'L', 'L', 'O', '_', 'U', 'I', 'N', 'T', '_', 'e', 'g', 0,
  /* 5955 */ 'F', 'L', 'T', '_', 'T', 'O', '_', 'U', 'I', 'N', 'T', '_', 'e', 'g', 0,
  /* 5970 */ 'R', 'E', 'C', 'I', 'P', '_', 'U', 'I', 'N', 'T', '_', 'e', 'g', 0,
  /* 5984 */ 'M', 'O', 'V', 'A', '_', 'I', 'N', 'T', '_', 'e', 'g', 0,
  /* 5996 */ 'B', 'F', 'E', '_', 'I', 'N', 'T', '_', 'e', 'g', 0,
  /* 6007 */ 'B', 'F', 'I', '_', 'I', 'N', 'T', '_', 'e', 'g', 0,
  /* 6018 */ 'M', 'U', 'L', 'H', 'I', '_', 'I', 'N', 'T', '_', 'e', 'g', 0,
  /* 6031 */ 'B', 'F', 'M', '_', 'I', 'N', 'T', '_', 'e', 'g', 0,
  /* 6042 */ 'B', 'I', 'T', '_', 'A', 'L', 'I', 'G', 'N', '_', 'I', 'N', 'T', '_', 'e', 'g', 0,
  /* 6059 */ 'M', 'U', 'L', 'L', 'O', '_', 'I', 'N', 'T', '_', 'e', 'g', 0,
  /* 6072 */ 'F', 'L', 'T', '_', 'T', 'O', '_', 'I', 'N', 'T', '_', 'e', 'g', 0,
  /* 6086 */ 'C', 'U', 'B', 'E', '_', 'r', '6', '0', '0', '_', 'r', 'e', 'a', 'l', 0,
  /* 6101 */ 'C', 'U', 'B', 'E', '_', 'e', 'g', '_', 'r', 'e', 'a', 'l', 0,
  /* 6114 */ 'V', 'T', 'X', '_', 'R', 'E', 'A', 'D', '_', '3', '2', '_', 'c', 'm', 0,
  /* 6129 */ 'M', 'U', 'L', 'A', 'D', 'D', '_', 'I', 'N', 'T', '2', '4', '_', 'c', 'm', 0,
  /* 6145 */ 'M', 'U', 'L', '_', 'I', 'N', 'T', '2', '4', '_', 'c', 'm', 0,
  /* 6158 */ 'V', 'T', 'X', '_', 'R', 'E', 'A', 'D', '_', '6', '4', '_', 'c', 'm', 0,
  /* 6173 */ 'V', 'T', 'X', '_', 'R', 'E', 'A', 'D', '_', '1', '6', '_', 'c', 'm', 0,
  /* 6188 */ 'V', 'T', 'X', '_', 'R', 'E', 'A', 'D', '_', '1', '2', '8', '_', 'c', 'm', 0,
  /* 6204 */ 'V', 'T', 'X', '_', 'R', 'E', 'A', 'D', '_', '8', '_', 'c', 'm', 0,
  /* 6218 */ 'R', 'E', 'C', 'I', 'P', '_', 'C', 'L', 'A', 'M', 'P', 'E', 'D', '_', 'c', 'm', 0,
  /* 6235 */ 'R', 'E', 'C', 'I', 'P', 'S', 'Q', 'R', 'T', '_', 'C', 'L', 'A', 'M', 'P', 'E', 'D', '_', 'c', 'm', 0,
  /* 6256 */ 'R', 'A', 'T', '_', 'S', 'T', 'O', 'R', 'E', '_', 'T', 'Y', 'P', 'E', 'D', '_', 'c', 'm', 0,
  /* 6275 */ 'L', 'O', 'G', '_', 'I', 'E', 'E', 'E', '_', 'c', 'm', 0,
  /* 6287 */ 'R', 'E', 'C', 'I', 'P', '_', 'I', 'E', 'E', 'E', '_', 'c', 'm', 0,
  /* 6301 */ 'E', 'X', 'P', '_', 'I', 'E', 'E', 'E', '_', 'c', 'm', 0,
  /* 6313 */ 'R', 'E', 'C', 'I', 'P', 'S', 'Q', 'R', 'T', '_', 'I', 'E', 'E', 'E', '_', 'c', 'm', 0,
  /* 6331 */ 'S', 'I', 'N', '_', 'c', 'm', 0,
  /* 6338 */ 'C', 'O', 'S', '_', 'c', 'm', 0,
  /* 6345 */ 'M', 'U', 'L', 'H', 'I', '_', 'U', 'I', 'N', 'T', '_', 'c', 'm', 0,
  /* 6359 */ 'M', 'U', 'L', 'L', 'O', '_', 'U', 'I', 'N', 'T', '_', 'c', 'm', 0,
  /* 6373 */ 'M', 'U', 'L', 'H', 'I', '_', 'I', 'N', 'T', '_', 'c', 'm', 0,
  /* 6386 */ 'M', 'U', 'L', 'L', 'O', '_', 'I', 'N', 'T', '_', 'c', 'm', 0,
  /* 6399 */ 'C', 'U', 'B', 'E', '_', 'r', '6', '0', '0', '_', 'p', 's', 'e', 'u', 'd', 'o', 0,
  /* 6416 */ 'C', 'U', 'B', 'E', '_', 'e', 'g', '_', 'p', 's', 'e', 'u', 'd', 'o', 0,
  /* 6431 */ 'R', '6', '0', '0', '_', 'E', 'x', 'p', 'o', 'r', 't', 'S', 'w', 'z', 0,
  /* 6446 */ 'E', 'G', '_', 'E', 'x', 'p', 'o', 'r', 't', 'S', 'w', 'z', 0,

};

extern const unsigned R600InstrNameIndices[] = {
    2567U, 2849U, 3513U, 2987U, 2632U, 2613U, 2641U, 2772U, 
    2211U, 2226U, 2153U, 2253U, 3900U, 2058U, 2622U, 1763U, 
    5347U, 1859U, 5058U, 1668U, 3396U, 2760U, 4757U, 1718U, 
    4746U, 1898U, 3489U, 3476U, 3608U, 4472U, 4643U, 2692U, 
    2739U, 2712U, 2658U, 1574U, 1304U, 2784U, 5172U, 5179U, 
    2835U, 2842U, 1638U, 3780U, 3750U, 2151U, 2565U, 5320U, 
    2068U, 3980U, 3835U, 5073U, 3852U, 3718U, 1390U, 3883U, 
    4768U, 3817U, 5090U, 1364U, 1700U, 3633U, 1539U, 1467U, 
    1497U, 1524U, 1448U, 1478U, 1946U, 1930U, 3917U, 2404U, 
    2432U, 1598U, 1318U, 1652U, 1621U, 3792U, 3764U, 5304U, 
    2964U, 5287U, 2947U, 1557U, 1287U, 1755U, 1681U, 3999U, 
    1334U, 3947U, 5142U, 1382U, 4735U, 4723U, 5048U, 2456U, 
    5135U, 2240U, 5151U, 2678U, 3692U, 3685U, 3438U, 3431U, 
    3990U, 3348U, 1784U, 3332U, 1747U, 3340U, 1776U, 3324U, 
    1739U, 3388U, 3380U, 2517U, 2509U, 1550U, 1280U, 2777U, 
    1244U, 1441U, 5165U, 2828U, 5241U, 3501U, 1069U, 2449U, 
    1061U, 587U, 2204U, 5127U, 1354U, 2571U, 2580U, 3413U, 
    3422U, 3828U, 2901U, 2099U, 2881U, 2891U, 1801U, 1816U, 
    2859U, 2870U, 1580U, 2602U, 2933U, 5273U, 2940U, 5280U, 
    3508U, 4667U, 4695U, 4674U, 3733U, 5384U, 2133U, 5377U, 
    2115U, 3468U, 3405U, 1959U, 2684U, 3876U, 2980U, 5082U, 
    3709U, 4779U, 4865U, 5100U, 3526U, 1846U, 1411U, 3652U, 
    3668U, 2492U, 762U, 928U, 2596U, 751U, 917U, 875U, 
    1041U, 816U, 982U, 5341U, 2090U, 729U, 895U, 835U, 
    1001U, 778U, 944U, 6416U, 6399U, 4715U, 1204U, 2913U, 
    1954U, 1677U, 1346U, 2166U, 3450U, 2925U, 2499U, 160U, 
    82U, 1349U, 743U, 909U, 858U, 1024U, 800U, 966U, 
    4604U, 3445U, 1690U, 2021U, 690U, 3539U, 702U, 5334U, 
    1077U, 1165U, 1097U, 1185U, 5391U, 5409U, 3317U, 3003U, 
    1735U, 5230U, 3458U, 1553U, 4797U, 4886U, 1985U, 4894U, 
    5857U, 388U, 5019U, 5996U, 5915U, 6007U, 6031U, 6042U, 
    2687U, 5158U, 2589U, 2083U, 3573U, 3591U, 1911U, 2390U, 
    170U, 2306U, 65U, 2295U, 34U, 2818U, 2285U, 22U, 
    2346U, 108U, 2321U, 47U, 2267U, 0U, 2276U, 11U, 
    4902U, 5754U, 267U, 4911U, 5833U, 358U, 4994U, 5880U, 
    417U, 6338U, 5873U, 408U, 578U, 6101U, 6086U, 5585U, 
    186U, 5443U, 6446U, 2357U, 121U, 6301U, 5803U, 324U, 
    1972U, 4818U, 4965U, 3712U, 714U, 1210U, 6072U, 553U, 
    5955U, 490U, 5665U, 3974U, 3559U, 657U, 5362U, 5258U, 
    1508U, 5352U, 5248U, 5901U, 442U, 4621U, 1590U, 4448U, 
    1644U, 4460U, 4378U, 2006U, 5117U, 4590U, 5036U, 4574U, 
    4852U, 4541U, 4974U, 4558U, 4828U, 4524U, 3785U, 4513U, 
    4396U, 4429U, 2042U, 1310U, 4347U, 4359U, 4409U, 2032U, 
    2421U, 4486U, 3756U, 4501U, 3867U, 5682U, 208U, 6275U, 
    5777U, 294U, 2332U, 92U, 5842U, 369U, 5865U, 398U, 
    5276U, 648U, 5040U, 4856U, 2936U, 628U, 4978U, 4832U, 
    5186U, 5984U, 2780U, 5762U, 277U, 6129U, 5497U, 5672U, 
    196U, 6373U, 1132U, 6018U, 523U, 5514U, 6345U, 1116U, 
    5927U, 458U, 6386U, 6059U, 538U, 6359U, 5941U, 474U, 
    1792U, 6145U, 5889U, 428U, 5530U, 5028U, 4987U, 1546U, 
    2383U, 151U, 1996U, 4951U, 1835U, 4921U, 4632U, 5004U, 
    1887U, 4936U, 5428U, 6431U, 4055U, 3049U, 4076U, 3068U, 
    4242U, 3220U, 4138U, 3124U, 4164U, 3148U, 4322U, 3294U, 
    4216U, 3196U, 4297U, 3271U, 4190U, 3172U, 4118U, 3106U, 
    4012U, 3010U, 4034U, 3030U, 4271U, 3247U, 4097U, 3087U, 
    3699U, 1225U, 672U, 1147U, 6256U, 5735U, 5624U, 5471U, 
    5559U, 6235U, 5714U, 244U, 6313U, 5815U, 338U, 6218U, 
    5697U, 225U, 6287U, 5789U, 308U, 5970U, 507U, 1877U, 
    2001U, 618U, 4956U, 596U, 4926U, 4807U, 637U, 5009U, 
    4841U, 607U, 4941U, 1831U, 4628U, 6331U, 5850U, 379U, 
    569U, 1883U, 4787U, 4878U, 2525U, 5190U, 3356U, 1614U, 
    3807U, 1866U, 1428U, 2464U, 2790U, 1250U, 2479U, 2805U, 
    1266U, 2545U, 5210U, 2172U, 2189U, 1358U, 5900U, 441U, 
    6188U, 5608U, 6173U, 5593U, 6114U, 5456U, 6158U, 5544U, 
    6204U, 5651U, 2369U, 135U, 4986U, 
};

static inline void InitR600MCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(R600Insts, R600InstrNameIndices, R600InstrNameData, 517);
}

} // end namespace llvm
#endif // GET_INSTRINFO_MC_DESC

#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct R600GenInstrInfo : public TargetInstrInfo {
  explicit R600GenInstrInfo(int CFSetupOpcode = -1, int CFDestroyOpcode = -1, int CatchRetOpcode = -1, int ReturnOpcode = -1);
  ~R600GenInstrInfo() override = default;

};
} // end namespace llvm
#endif // GET_INSTRINFO_HEADER

#ifdef GET_INSTRINFO_HELPER_DECLS
#undef GET_INSTRINFO_HELPER_DECLS


#endif // GET_INSTRINFO_HELPER_DECLS

#ifdef GET_INSTRINFO_HELPERS
#undef GET_INSTRINFO_HELPERS

#endif // GET_INSTRINFO_HELPERS

#ifdef GET_INSTRINFO_CTOR_DTOR
#undef GET_INSTRINFO_CTOR_DTOR
namespace llvm {
extern const MCInstrDesc R600Insts[];
extern const unsigned R600InstrNameIndices[];
extern const char R600InstrNameData[];
R600GenInstrInfo::R600GenInstrInfo(int CFSetupOpcode, int CFDestroyOpcode, int CatchRetOpcode, int ReturnOpcode)
  : TargetInstrInfo(CFSetupOpcode, CFDestroyOpcode, CatchRetOpcode, ReturnOpcode) {
  InitMCInstrInfo(R600Insts, R600InstrNameIndices, R600InstrNameData, 517);
}
} // end namespace llvm
#endif // GET_INSTRINFO_CTOR_DTOR

#ifdef GET_INSTRINFO_OPERAND_ENUM
#undef GET_INSTRINFO_OPERAND_ENUM
namespace llvm {
namespace R600 {
namespace OpName {
enum {
  ADDR = 98,
  COUNT = 105,
  Enabled = 106,
  KCACHE_ADDR0 = 103,
  KCACHE_ADDR1 = 104,
  KCACHE_BANK0 = 99,
  KCACHE_BANK1 = 100,
  KCACHE_MODE0 = 101,
  KCACHE_MODE1 = 102,
  addr = 72,
  bank_swizzle = 93,
  chan = 73,
  clamp = 80,
  clamp_W = 58,
  clamp_X = 7,
  clamp_Y = 24,
  clamp_Z = 41,
  dst = 0,
  dst_rel = 79,
  dst_rel_W = 57,
  dst_rel_X = 6,
  dst_rel_Y = 23,
  dst_rel_Z = 40,
  last = 90,
  literal = 92,
  literal0 = 70,
  literal1 = 71,
  omod = 78,
  omod_W = 56,
  omod_X = 5,
  omod_Y = 22,
  omod_Z = 39,
  pred_sel = 91,
  pred_sel_W = 69,
  pred_sel_X = 18,
  pred_sel_Y = 35,
  pred_sel_Z = 52,
  src0 = 1,
  src0_W = 59,
  src0_X = 8,
  src0_Y = 25,
  src0_Z = 42,
  src0_abs = 83,
  src0_abs_W = 62,
  src0_abs_X = 11,
  src0_abs_Y = 28,
  src0_abs_Z = 45,
  src0_neg = 81,
  src0_neg_W = 60,
  src0_neg_X = 9,
  src0_neg_Y = 26,
  src0_neg_Z = 43,
  src0_rel = 82,
  src0_rel_W = 61,
  src0_rel_X = 10,
  src0_rel_Y = 27,
  src0_rel_Z = 44,
  src0_sel = 84,
  src0_sel_W = 63,
  src0_sel_X = 12,
  src0_sel_Y = 29,
  src0_sel_Z = 46,
  src1 = 85,
  src1_W = 64,
  src1_X = 13,
  src1_Y = 30,
  src1_Z = 47,
  src1_abs = 88,
  src1_abs_W = 67,
  src1_abs_X = 16,
  src1_abs_Y = 33,
  src1_abs_Z = 50,
  src1_neg = 86,
  src1_neg_W = 65,
  src1_neg_X = 14,
  src1_neg_Y = 31,
  src1_neg_Z = 48,
  src1_rel = 87,
  src1_rel_W = 66,
  src1_rel_X = 15,
  src1_rel_Y = 32,
  src1_rel_Z = 49,
  src1_sel = 89,
  src1_sel_W = 68,
  src1_sel_X = 17,
  src1_sel_Y = 34,
  src1_sel_Z = 51,
  src2 = 94,
  src2_neg = 95,
  src2_rel = 96,
  src2_sel = 97,
  update_exec_mask = 75,
  update_exec_mask_W = 53,
  update_exec_mask_X = 2,
  update_exec_mask_Y = 19,
  update_exec_mask_Z = 36,
  update_pred = 76,
  update_pred_W = 54,
  update_pred_X = 3,
  update_pred_Y = 20,
  update_pred_Z = 37,
  val = 74,
  write = 77,
  write_W = 55,
  write_X = 4,
  write_Y = 21,
  write_Z = 38,
OPERAND_LAST
};
} // end namespace OpName
} // end namespace R600
} // end namespace llvm
#endif //GET_INSTRINFO_OPERAND_ENUM

#ifdef GET_INSTRINFO_NAMED_OPS
#undef GET_INSTRINFO_NAMED_OPS
namespace llvm {
namespace R600 {
LLVM_READONLY
int16_t getNamedOperandIdx(uint16_t Opcode, uint16_t NamedIdx) {
  static const int16_t OperandMap [][107] = {
{0, 1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{0, 1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 2, -1, 3, 4, -1, 5, -1, 6, 7, 8, -1, 9, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{0, 1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 2, -1, 3, 4, -1, 5, -1, 6, 10, 11, -1, 12, 7, -1, 8, 9, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{0, 1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 2, -1, 3, -1, -1, -1, -1, -1, 4, 5, -1, 6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{0, 3, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1, 2, 4, 5, -1, 6, 7, 8, 9, -1, 10, 15, 16, 17, 18, 11, 12, 13, 14, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{0, 5, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1, 2, 3, 4, 6, 7, 8, 9, -1, -1, -1, -1, -1, 10, 11, 12, 13, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{0, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1, 2, 3, 4, 5, 6, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{0, -1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1, 3, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{-1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1, -1, 2, 3, -1, 4, -1, 5, 6, 7, -1, 8, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{-1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1, -1, 2, 3, -1, 4, -1, 5, 9, 10, -1, 11, 6, -1, 7, 8, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1, 3, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, },
};
  switch(Opcode) {
  case R600::CUBE_eg_pseudo:
  case R600::CUBE_r600_pseudo:
    return OperandMap[0][NamedIdx];
  case R600::LDS_ADD_RET:
  case R600::LDS_AND_RET:
  case R600::LDS_MAX_INT_RET:
  case R600::LDS_MAX_UINT_RET:
  case R600::LDS_MIN_INT_RET:
  case R600::LDS_MIN_UINT_RET:
  case R600::LDS_OR_RET:
  case R600::LDS_SUB_RET:
  case R600::LDS_WRXCHG_RET:
  case R600::LDS_XOR_RET:
    return OperandMap[1][NamedIdx];
  case R600::LDS_CMPST_RET:
    return OperandMap[2][NamedIdx];
  case R600::LDS_BYTE_READ_RET:
  case R600::LDS_READ_RET:
  case R600::LDS_SHORT_READ_RET:
  case R600::LDS_UBYTE_READ_RET:
  case R600::LDS_USHORT_READ_RET:
    return OperandMap[3][NamedIdx];
  case R600::BFE_INT_eg:
  case R600::BFE_UINT_eg:
  case R600::BFI_INT_eg:
  case R600::BIT_ALIGN_INT_eg:
  case R600::CNDE_INT:
  case R600::CNDE_eg:
  case R600::CNDE_r600:
  case R600::CNDGE_INT:
  case R600::CNDGE_eg:
  case R600::CNDGE_r600:
  case R600::CNDGT_INT:
  case R600::CNDGT_eg:
  case R600::CNDGT_r600:
  case R600::FMA_eg:
  case R600::MULADD_IEEE_eg:
  case R600::MULADD_IEEE_r600:
  case R600::MULADD_INT24_cm:
  case R600::MULADD_UINT24_eg:
  case R600::MULADD_eg:
  case R600::MULADD_r600:
  case R600::MUL_LIT_eg:
  case R600::MUL_LIT_r600:
    return OperandMap[4][NamedIdx];
  case R600::BCNT_INT:
  case R600::CEIL:
  case R600::COS_cm:
  case R600::COS_eg:
  case R600::COS_r600:
  case R600::COS_r700:
  case R600::EXP_IEEE_cm:
  case R600::EXP_IEEE_eg:
  case R600::EXP_IEEE_r600:
  case R600::FFBH_UINT:
  case R600::FFBL_INT:
  case R600::FLOOR:
  case R600::FLT16_TO_FLT32:
  case R600::FLT32_TO_FLT16:
  case R600::FLT_TO_INT_eg:
  case R600::FLT_TO_INT_r600:
  case R600::FLT_TO_UINT_eg:
  case R600::FLT_TO_UINT_r600:
  case R600::FRACT:
  case R600::INTERP_LOAD_P0:
  case R600::INT_TO_FLT_eg:
  case R600::INT_TO_FLT_r600:
  case R600::LOG_CLAMPED_eg:
  case R600::LOG_CLAMPED_r600:
  case R600::LOG_IEEE_cm:
  case R600::LOG_IEEE_eg:
  case R600::LOG_IEEE_r600:
  case R600::MOV:
  case R600::MOVA_INT_eg:
  case R600::NOT_INT:
  case R600::RECIPSQRT_CLAMPED_cm:
  case R600::RECIPSQRT_CLAMPED_eg:
  case R600::RECIPSQRT_CLAMPED_r600:
  case R600::RECIPSQRT_IEEE_cm:
  case R600::RECIPSQRT_IEEE_eg:
  case R600::RECIPSQRT_IEEE_r600:
  case R600::RECIP_CLAMPED_cm:
  case R600::RECIP_CLAMPED_eg:
  case R600::RECIP_CLAMPED_r600:
  case R600::RECIP_IEEE_cm:
  case R600::RECIP_IEEE_eg:
  case R600::RECIP_IEEE_r600:
  case R600::RECIP_UINT_eg:
  case R600::RECIP_UINT_r600:
  case R600::RNDNE:
  case R600::SIN_cm:
  case R600::SIN_eg:
  case R600::SIN_r600:
  case R600::SIN_r700:
  case R600::TRUNC:
  case R600::UINT_TO_FLT_eg:
  case R600::UINT_TO_FLT_r600:
    return OperandMap[5][NamedIdx];
  case R600::ADD:
  case R600::ADDC_UINT:
  case R600::ADD_INT:
  case R600::AND_INT:
  case R600::ASHR_eg:
  case R600::ASHR_r600:
  case R600::BFM_INT_eg:
  case R600::CUBE_eg_real:
  case R600::CUBE_r600_real:
  case R600::DOT4_eg:
  case R600::DOT4_r600:
  case R600::INTERP_XY:
  case R600::INTERP_ZW:
  case R600::KILLGT:
  case R600::LSHL_eg:
  case R600::LSHL_r600:
  case R600::LSHR_eg:
  case R600::LSHR_r600:
  case R600::MAX:
  case R600::MAX_DX10:
  case R600::MAX_INT:
  case R600::MAX_UINT:
  case R600::MIN:
  case R600::MIN_DX10:
  case R600::MIN_INT:
  case R600::MIN_UINT:
  case R600::MUL:
  case R600::MULHI_INT_cm:
  case R600::MULHI_INT_cm24:
  case R600::MULHI_INT_eg:
  case R600::MULHI_INT_r600:
  case R600::MULHI_UINT24_eg:
  case R600::MULHI_UINT_cm:
  case R600::MULHI_UINT_cm24:
  case R600::MULHI_UINT_eg:
  case R600::MULHI_UINT_r600:
  case R600::MULLO_INT_cm:
  case R600::MULLO_INT_eg:
  case R600::MULLO_INT_r600:
  case R600::MULLO_UINT_cm:
  case R600::MULLO_UINT_eg:
  case R600::MULLO_UINT_r600:
  case R600::MUL_IEEE:
  case R600::MUL_INT24_cm:
  case R600::MUL_UINT24_eg:
  case R600::OR_INT:
  case R600::PRED_SETE:
  case R600::PRED_SETE_INT:
  case R600::PRED_SETGE:
  case R600::PRED_SETGE_INT:
  case R600::PRED_SETGT:
  case R600::PRED_SETGT_INT:
  case R600::PRED_SETNE:
  case R600::PRED_SETNE_INT:
  case R600::SETE:
  case R600::SETE_DX10:
  case R600::SETE_INT:
  case R600::SETGE_DX10:
  case R600::SETGE_INT:
  case R600::SETGE_UINT:
  case R600::SETGT_DX10:
  case R600::SETGT_INT:
  case R600::SETGT_UINT:
  case R600::SETNE_DX10:
  case R600::SETNE_INT:
  case R600::SGE:
  case R600::SGT:
  case R600::SNE:
  case R600::SUBB_UINT:
  case R600::SUB_INT:
  case R600::XOR_INT:
    return OperandMap[6][NamedIdx];
  case R600::DOT_4:
    return OperandMap[7][NamedIdx];
  case R600::R600_RegisterLoad:
    return OperandMap[8][NamedIdx];
  case R600::LDS_ADD:
  case R600::LDS_AND:
  case R600::LDS_BYTE_WRITE:
  case R600::LDS_MAX_INT:
  case R600::LDS_MAX_UINT:
  case R600::LDS_MIN_INT:
  case R600::LDS_MIN_UINT:
  case R600::LDS_OR:
  case R600::LDS_SHORT_WRITE:
  case R600::LDS_SUB:
  case R600::LDS_WRITE:
  case R600::LDS_WRXCHG:
  case R600::LDS_XOR:
    return OperandMap[9][NamedIdx];
  case R600::LDS_CMPST:
    return OperandMap[10][NamedIdx];
  case R600::R600_RegisterStore:
    return OperandMap[11][NamedIdx];
  case R600::CF_ALU:
  case R600::CF_ALU_BREAK:
  case R600::CF_ALU_CONTINUE:
  case R600::CF_ALU_ELSE_AFTER:
  case R600::CF_ALU_POP_AFTER:
  case R600::CF_ALU_PUSH_BEFORE:
    return OperandMap[12][NamedIdx];
    default: return -1;
  }
}
} // end namespace R600
} // end namespace llvm
#endif //GET_INSTRINFO_NAMED_OPS

#ifdef GET_INSTRINFO_OPERAND_TYPES_ENUM
#undef GET_INSTRINFO_OPERAND_TYPES_ENUM
namespace llvm {
namespace R600 {
namespace OpTypes {
enum OperandType {
  ABS = 0,
  BANK_SWIZZLE = 1,
  CLAMP = 2,
  CT = 3,
  FRAMEri = 4,
  InstFlag = 5,
  KCACHE = 6,
  LAST = 7,
  LITERAL = 8,
  MEMrr = 9,
  MEMxi = 10,
  NEG = 11,
  OMOD = 12,
  R600_Pred = 13,
  REL = 14,
  RSel = 15,
  SEL = 16,
  UEM = 17,
  UP = 18,
  WRITE = 19,
  brtarget = 20,
  f32imm = 21,
  f64imm = 22,
  i16imm = 23,
  i1imm = 24,
  i32imm = 25,
  i64imm = 26,
  i8imm = 27,
  ptype0 = 28,
  ptype1 = 29,
  ptype2 = 30,
  ptype3 = 31,
  ptype4 = 32,
  ptype5 = 33,
  s16imm = 34,
  type0 = 35,
  type1 = 36,
  type2 = 37,
  type3 = 38,
  type4 = 39,
  type5 = 40,
  u16imm = 41,
  u32imm = 42,
  u8imm = 43,
  untyped_imm_0 = 44,
  R600_Addr = 45,
  R600_Addr_W = 46,
  R600_Addr_Y = 47,
  R600_Addr_Z = 48,
  R600_ArrayBase = 49,
  R600_KC0 = 50,
  R600_KC0_W = 51,
  R600_KC0_X = 52,
  R600_KC0_Y = 53,
  R600_KC0_Z = 54,
  R600_KC1 = 55,
  R600_KC1_W = 56,
  R600_KC1_X = 57,
  R600_KC1_Y = 58,
  R600_KC1_Z = 59,
  R600_LDS_SRC_REG = 60,
  R600_Predicate = 61,
  R600_Predicate_Bit = 62,
  R600_Reg128 = 63,
  R600_Reg128Vertical = 64,
  R600_Reg32 = 65,
  R600_Reg64 = 66,
  R600_Reg64Vertical = 67,
  R600_TReg32 = 68,
  R600_TReg32_W = 69,
  R600_TReg32_X = 70,
  R600_TReg32_Y = 71,
  R600_TReg32_Z = 72,
  OPERAND_TYPE_LIST_END
};
} // end namespace OpTypes
} // end namespace R600
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPES_ENUM

#ifdef GET_INSTRINFO_OPERAND_TYPE
#undef GET_INSTRINFO_OPERAND_TYPE
namespace llvm {
namespace R600 {
LLVM_READONLY
static int getOperandType(uint16_t Opcode, uint16_t OpIdx) {
  const int Offsets[] = {
    0,
    1,
    1,
    1,
    2,
    3,
    4,
    5,
    5,
    8,
    12,
    13,
    17,
    20,
    20,
    21,
    23,
    25,
    25,
    26,
    27,
    29,
    29,
    35,
    36,
    36,
    38,
    39,
    39,
    39,
    39,
    39,
    39,
    41,
    44,
    44,
    47,
    50,
    53,
    56,
    59,
    62,
    65,
    68,
    71,
    74,
    75,
    76,
    78,
    80,
    83,
    85,
    89,
    91,
    93,
    95,
    97,
    99,
    101,
    103,
    105,
    107,
    108,
    110,
    112,
    114,
    119,
    124,
    129,
    131,
    136,
    141,
    145,
    148,
    151,
    154,
    157,
    160,
    163,
    166,
    169,
    172,
    175,
    178,
    181,
    184,
    186,
    188,
    189,
    190,
    191,
    193,
    195,
    197,
    199,
    200,
    203,
    205,
    208,
    210,
    213,
    216,
    219,
    223,
    227,
    231,
    235,
    240,
    244,
    249,
    253,
    258,
    262,
    267,
    271,
    275,
    278,
    281,
    284,
    287,
    290,
    294,
    298,
    301,
    304,
    307,
    309,
    311,
    313,
    315,
    317,
    319,
    321,
    323,
    325,
    327,
    329,
    331,
    333,
    336,
    338,
    341,
    344,
    347,
    350,
    353,
    356,
    359,
    362,
    365,
    368,
    371,
    374,
    375,
    378,
    382,
    385,
    389,
    391,
    393,
    395,
    397,
    399,
    401,
    403,
    405,
    407,
    409,
    411,
    413,
    415,
    417,
    419,
    421,
    423,
    426,
    428,
    430,
    431,
    433,
    435,
    435,
    437,
    439,
    440,
    441,
    442,
    443,
    445,
    445,
    447,
    449,
    450,
    451,
    452,
    453,
    455,
    457,
    457,
    528,
    528,
    528,
    528,
    528,
    528,
    528,
    528,
    528,
    530,
    532,
    532,
    534,
    536,
    537,
    538,
    539,
    540,
    541,
    542,
    544,
    545,
    547,
    549,
    551,
    555,
    558,
    561,
    565,
    569,
    573,
    577,
    577,
    577,
    584,
    591,
    591,
    612,
    633,
    654,
    655,
    676,
    697,
    718,
    732,
    751,
    770,
    789,
    810,
    829,
    843,
    852,
    861,
    870,
    879,
    888,
    897,
    897,
    897,
    898,
    899,
    901,
    903,
    903,
    903,
    903,
    905,
    907,
    909,
    910,
    912,
    914,
    916,
    918,
    937,
    956,
    975,
    994,
    1013,
    1032,
    1051,
    1070,
    1089,
    1103,
    1117,
    1131,
    1145,
    1166,
    1187,
    1208,
    1229,
    1236,
    1245,
    1246,
    1247,
    1261,
    1275,
    1289,
    1290,
    1304,
    1318,
    1332,
    1346,
    1360,
    1374,
    1388,
    1402,
    1416,
    1435,
    1449,
    1449,
    1463,
    1468,
    1473,
    1475,
    1496,
    1517,
    1531,
    1545,
    1566,
    1575,
    1585,
    1594,
    1604,
    1611,
    1620,
    1632,
    1645,
    1654,
    1664,
    1673,
    1683,
    1692,
    1702,
    1711,
    1721,
    1730,
    1740,
    1747,
    1754,
    1763,
    1772,
    1782,
    1789,
    1796,
    1805,
    1814,
    1824,
    1833,
    1843,
    1845,
    1859,
    1873,
    1887,
    1901,
    1915,
    1916,
    1917,
    1938,
    1959,
    1980,
    2001,
    2022,
    2043,
    2064,
    2085,
    2106,
    2127,
    2148,
    2169,
    2183,
    2197,
    2218,
    2237,
    2256,
    2275,
    2294,
    2313,
    2332,
    2353,
    2374,
    2395,
    2416,
    2437,
    2458,
    2479,
    2500,
    2521,
    2542,
    2563,
    2584,
    2605,
    2626,
    2647,
    2668,
    2689,
    2708,
    2727,
    2748,
    2762,
    2783,
    2783,
    2785,
    2787,
    2808,
    2829,
    2850,
    2871,
    2892,
    2913,
    2934,
    2955,
    2962,
    2971,
    2974,
    2977,
    2980,
    2983,
    2986,
    2989,
    2992,
    2995,
    2998,
    3001,
    3004,
    3007,
    3010,
    3013,
    3016,
    3019,
    3022,
    3025,
    3028,
    3031,
    3034,
    3037,
    3040,
    3043,
    3046,
    3049,
    3052,
    3055,
    3057,
    3059,
    3061,
    3063,
    3067,
    3071,
    3074,
    3077,
    3080,
    3094,
    3108,
    3122,
    3136,
    3150,
    3164,
    3178,
    3192,
    3206,
    3220,
    3234,
    3248,
    3262,
    3276,
    3290,
    3311,
    3332,
    3353,
    3374,
    3395,
    3416,
    3437,
    3458,
    3479,
    3500,
    3521,
    3542,
    3563,
    3577,
    3591,
    3605,
    3619,
    3640,
    3661,
    3682,
    3701,
    3720,
    3739,
    3758,
    3777,
    3796,
    3815,
    3834,
    3853,
    3872,
    3891,
    3910,
    3929,
    3948,
    3967,
    3971,
    3975,
    3989,
    4003,
    4017,
    4021,
    4025,
    4029,
    4033,
    4037,
    4041,
    4045,
    4049,
    4053,
    4057,
    4058,
    4059,
  };
  const int OpcodeOperandTypes[] = {
    -1, 
    /**/
    /**/
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    /**/
    -1, -1, OpTypes::i32imm, 
    -1, -1, -1, OpTypes::i32imm, 
    -1, 
    -1, -1, -1, OpTypes::i32imm, 
    -1, -1, OpTypes::i32imm, 
    /**/
    -1, 
    -1, -1, 
    -1, -1, 
    /**/
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::i64imm, OpTypes::i32imm, 
    /**/
    -1, OpTypes::i64imm, OpTypes::i32imm, -1, OpTypes::i32imm, OpTypes::i32imm, 
    -1, 
    /**/
    -1, OpTypes::i32imm, 
    -1, 
    /**/
    /**/
    /**/
    /**/
    /**/
    -1, -1, 
    -1, -1, -1, 
    /**/
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, 
    OpTypes::type0, 
    OpTypes::type0, -1, 
    OpTypes::type0, -1, 
    OpTypes::type0, OpTypes::type1, -1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, OpTypes::type1, -1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, 
    OpTypes::type0, OpTypes::ptype1, 
    OpTypes::type0, OpTypes::ptype1, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::ptype1, OpTypes::type2, -1, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::ptype1, OpTypes::type2, -1, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::ptype1, OpTypes::type2, -1, 
    OpTypes::type0, OpTypes::ptype1, 
    OpTypes::ptype0, OpTypes::type1, OpTypes::ptype0, OpTypes::ptype2, -1, 
    OpTypes::type0, OpTypes::type1, OpTypes::type2, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::type0, -1, 
    OpTypes::type0, 
    -1, 
    -1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, -1, 
    OpTypes::type0, -1, 
    OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, -1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, OpTypes::untyped_imm_0, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, -1, OpTypes::type1, OpTypes::type1, 
    OpTypes::type0, -1, OpTypes::type1, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, -1, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    -1, 
    OpTypes::ptype0, -1, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, OpTypes::type1, OpTypes::type2, 
    OpTypes::type0, OpTypes::type1, OpTypes::type2, 
    OpTypes::type0, OpTypes::type1, OpTypes::type1, -1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, -1, 
    OpTypes::type0, -1, 
    OpTypes::ptype0, OpTypes::type1, OpTypes::i32imm, 
    OpTypes::type0, -1, 
    -1, OpTypes::type0, 
    OpTypes::brtarget, 
    OpTypes::brtarget, OpTypes::R600_Reg32, 
    OpTypes::brtarget, OpTypes::R600_Reg32, 
    /**/
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, 
    OpTypes::R600_Reg32, 
    OpTypes::R600_Reg32, 
    OpTypes::R600_Reg32, 
    OpTypes::R600_Reg32, 
    OpTypes::R600_Reg32, OpTypes::i32imm, 
    /**/
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, 
    OpTypes::R600_Reg32, 
    OpTypes::R600_Reg32, 
    OpTypes::R600_Reg32, 
    OpTypes::R600_Reg32, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, 
    /**/
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_TReg32_X, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_TReg32_X, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Predicate, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_TReg32_Y, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_TReg32_Y, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Predicate, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_TReg32_Z, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_TReg32_Z, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Predicate, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_TReg32_W, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_TReg32_W, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::LITERAL, 
    /**/
    /**/
    /**/
    /**/
    /**/
    /**/
    /**/
    /**/
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, 
    /**/
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, 
    OpTypes::R600_Reg32, 
    OpTypes::R600_Reg32, 
    OpTypes::R600_Reg32, 
    OpTypes::R600_Reg32, 
    OpTypes::R600_Reg32, 
    OpTypes::brtarget, 
    OpTypes::brtarget, OpTypes::R600_Predicate_Bit, 
    OpTypes::R600_Reg32, 
    OpTypes::R600_Reg32, OpTypes::f32imm, 
    OpTypes::R600_Reg32, OpTypes::i32imm, 
    OpTypes::R600_Reg32, OpTypes::i32imm, 
    OpTypes::R600_Predicate_Bit, OpTypes::R600_Reg32, OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg64Vertical, OpTypes::R600_Reg32, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg128Vertical, OpTypes::R600_Reg32, 
    OpTypes::R600_Reg64Vertical, OpTypes::R600_Reg64Vertical, OpTypes::R600_Reg32, OpTypes::R600_Reg32, 
    OpTypes::R600_Reg128Vertical, OpTypes::R600_Reg128Vertical, OpTypes::R600_Reg32, OpTypes::R600_Reg32, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, OpTypes::i32imm, OpTypes::i32imm, 
    /**/
    /**/
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, 
    /**/
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::i32imm, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::KCACHE, OpTypes::KCACHE, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::KCACHE, OpTypes::KCACHE, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::KCACHE, OpTypes::KCACHE, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::KCACHE, OpTypes::KCACHE, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::KCACHE, OpTypes::KCACHE, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::KCACHE, OpTypes::KCACHE, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, 
    /**/
    /**/
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::i32imm, OpTypes::i32imm, 
    /**/
    /**/
    /**/
    OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg128, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::R600_Reg128, OpTypes::i32imm, OpTypes::i32imm, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::i32imm, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    /**/
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_TReg32_X, OpTypes::R600_TReg32_Y, OpTypes::i32imm, OpTypes::R600_TReg32_Y, OpTypes::R600_TReg32_X, 
    OpTypes::R600_TReg32_Z, OpTypes::R600_TReg32_W, OpTypes::i32imm, OpTypes::R600_TReg32_Y, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::i32imm, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::LITERAL, OpTypes::LITERAL, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    /**/
    OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg128, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::R600_Reg128, OpTypes::i32imm, OpTypes::i32imm, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_TReg32_X, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg64, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::i32imm, OpTypes::InstFlag, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::i32imm, OpTypes::InstFlag, 
    OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, OpTypes::InstFlag, 
    OpTypes::R600_TReg32_X, OpTypes::R600_TReg32_X, OpTypes::InstFlag, 
    OpTypes::R600_Reg64, OpTypes::R600_TReg32_X, OpTypes::InstFlag, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::CT, OpTypes::CT, OpTypes::CT, OpTypes::CT, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::CT, OpTypes::CT, OpTypes::CT, OpTypes::CT, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::CT, OpTypes::CT, OpTypes::CT, OpTypes::CT, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::CT, OpTypes::CT, OpTypes::CT, OpTypes::CT, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::CT, OpTypes::CT, OpTypes::CT, OpTypes::CT, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::CT, OpTypes::CT, OpTypes::CT, OpTypes::CT, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::CT, OpTypes::CT, OpTypes::CT, OpTypes::CT, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::CT, OpTypes::CT, OpTypes::CT, OpTypes::CT, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::CT, OpTypes::CT, OpTypes::CT, OpTypes::CT, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::CT, OpTypes::CT, OpTypes::CT, OpTypes::CT, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::CT, OpTypes::CT, OpTypes::CT, OpTypes::CT, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::CT, OpTypes::CT, OpTypes::CT, OpTypes::CT, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::CT, OpTypes::CT, OpTypes::CT, OpTypes::CT, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::CT, OpTypes::CT, OpTypes::CT, OpTypes::CT, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::CT, OpTypes::CT, OpTypes::CT, OpTypes::CT, 
    OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, OpTypes::i32imm, OpTypes::i8imm, 
    OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, OpTypes::i32imm, OpTypes::i8imm, 
    OpTypes::R600_TReg32_X, OpTypes::R600_TReg32_X, OpTypes::i32imm, OpTypes::i8imm, 
    OpTypes::R600_TReg32_X, OpTypes::R600_TReg32_X, OpTypes::i32imm, OpTypes::i8imm, 
    OpTypes::R600_TReg32_X, OpTypes::R600_TReg32_X, OpTypes::i32imm, OpTypes::i8imm, 
    OpTypes::R600_TReg32_X, OpTypes::R600_TReg32_X, OpTypes::i32imm, OpTypes::i8imm, 
    OpTypes::R600_Reg64, OpTypes::R600_TReg32_X, OpTypes::i32imm, OpTypes::i8imm, 
    OpTypes::R600_Reg64, OpTypes::R600_TReg32_X, OpTypes::i32imm, OpTypes::i8imm, 
    OpTypes::R600_TReg32_X, OpTypes::R600_TReg32_X, OpTypes::i32imm, OpTypes::i8imm, 
    OpTypes::R600_TReg32_X, OpTypes::R600_TReg32_X, OpTypes::i32imm, OpTypes::i8imm, 
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
  };
  return OpcodeOperandTypes[Offsets[Opcode] + OpIdx];
}
} // end namespace R600
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPE

#ifdef GET_INSTRMAP_INFO
#undef GET_INSTRMAP_INFO
namespace llvm {

namespace R600 {

enum DisableEncoding {
	DisableEncoding_
};

// getLDSNoRetOp
LLVM_READONLY
int getLDSNoRetOp(uint16_t Opcode) {
static const uint16_t getLDSNoRetOpTable[][2] = {
  { R600::LDS_ADD_RET, R600::LDS_ADD },
  { R600::LDS_AND_RET, R600::LDS_AND },
  { R600::LDS_MAX_INT_RET, R600::LDS_MAX_INT },
  { R600::LDS_MAX_UINT_RET, R600::LDS_MAX_UINT },
  { R600::LDS_MIN_INT_RET, R600::LDS_MIN_INT },
  { R600::LDS_MIN_UINT_RET, R600::LDS_MIN_UINT },
  { R600::LDS_OR_RET, R600::LDS_OR },
  { R600::LDS_SUB_RET, R600::LDS_SUB },
  { R600::LDS_WRXCHG_RET, R600::LDS_WRXCHG },
  { R600::LDS_XOR_RET, R600::LDS_XOR },
}; // End of getLDSNoRetOpTable

  unsigned mid;
  unsigned start = 0;
  unsigned end = 10;
  while (start < end) {
    mid = start + (end - start)/2;
    if (Opcode == getLDSNoRetOpTable[mid][0]) {
      break;
    }
    if (Opcode < getLDSNoRetOpTable[mid][0])
      end = mid;
    else
      start = mid + 1;
  }
  if (start == end)
    return -1; // Instruction doesn't exist in this table.

  return getLDSNoRetOpTable[mid][1];
}

} // end namespace R600
} // end namespace llvm
#endif // GET_INSTRMAP_INFO

