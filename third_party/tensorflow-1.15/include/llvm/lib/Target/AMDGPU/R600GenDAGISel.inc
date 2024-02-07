/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* DAG Instruction Selector for the R600 target                               *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

// *** NOTE: This file is #included into the middle of the target
// *** instruction selector class.  These functions are really methods.

// If GET_DAGISEL_DECL is #defined with any value, only function
// declarations will be included when this file is included.
// If GET_DAGISEL_BODY is #defined, its value should be the name of
// the instruction selector class. Function bodies will be emitted
// and each function's name will be qualified with the name of the
// class.
//
// When neither of the GET_DAGISEL* macros is defined, the functions
// are emitted inline.

#if defined(GET_DAGISEL_DECL) && defined(GET_DAGISEL_BODY)
#error GET_DAGISEL_DECL and GET_DAGISEL_BODY cannot be both defined, undef both for inline definitions
#endif

#ifdef GET_DAGISEL_BODY
#define LOCAL_DAGISEL_STRINGIZE(X) LOCAL_DAGISEL_STRINGIZE_(X)
#define LOCAL_DAGISEL_STRINGIZE_(X) #X
static_assert(sizeof(LOCAL_DAGISEL_STRINGIZE(GET_DAGISEL_BODY)) > 1,
   "GET_DAGISEL_BODY is empty: it should be defined with the class name");
#undef LOCAL_DAGISEL_STRINGIZE_
#undef LOCAL_DAGISEL_STRINGIZE
#endif

#if !defined(GET_DAGISEL_DECL) && !defined(GET_DAGISEL_BODY)
#define DAGISEL_INLINE 1
#else
#define DAGISEL_INLINE 0
#endif

#if !DAGISEL_INLINE
#define DAGISEL_CLASS_COLONCOLON GET_DAGISEL_BODY ::
#else
#define DAGISEL_CLASS_COLONCOLON
#endif

#ifdef GET_DAGISEL_DECL
void SelectCode(SDNode *N);
#endif
#if defined(GET_DAGISEL_BODY) || DAGISEL_INLINE
void DAGISEL_CLASS_COLONCOLON SelectCode(SDNode *N)
{
  // Some target values are emitted as 2 bytes, TARGET_VAL handles
  // this.
  #define TARGET_VAL(X) X & 255, unsigned(X) >> 8
  static const unsigned char MatcherTable[] = {
/*     0*/  OPC_SwitchOpcode /*101 cases */, 99|128,2/*355*/, TARGET_VAL(ISD::SRL),// ->360
/*     5*/    OPC_Scope, 11|128,1/*139*/, /*->147*/ // 2 children in Scope
/*     8*/      OPC_MoveChild0,
/*     9*/      OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*    12*/      OPC_RecordChild0, // #0 = $src
/*    13*/      OPC_MoveChild1,
/*    14*/      OPC_CheckOpcode, TARGET_VAL(ISD::SUB),
/*    17*/      OPC_CheckChild0Integer, 32, 
/*    19*/      OPC_RecordChild1, // #1 = $width
/*    20*/      OPC_CheckType, MVT::i32,
/*    22*/      OPC_MoveParent,
/*    23*/      OPC_CheckPredicate, 0, // Predicate_shl_oneuse
/*    25*/      OPC_MoveParent,
/*    26*/      OPC_MoveChild1,
/*    27*/      OPC_CheckOpcode, TARGET_VAL(ISD::SUB),
/*    30*/      OPC_CheckChild0Integer, 32, 
/*    32*/      OPC_CheckChild1Same, 1,
/*    34*/      OPC_CheckType, MVT::i32,
/*    36*/      OPC_MoveParent,
/*    37*/      OPC_CheckType, MVT::i32,
/*    39*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*    41*/      OPC_EmitInteger, MVT::i32, 0, 
/*    44*/      OPC_EmitInteger, MVT::i32, 0, 
/*    47*/      OPC_EmitInteger, MVT::i32, 0, 
/*    50*/      OPC_EmitInteger, MVT::i32, 0, 
/*    53*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*    65*/      OPC_EmitInteger, MVT::i32, 0, 
/*    68*/      OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                    MVT::i32, 1/*#Ops*/, 7,  // Results = #8
/*    75*/      OPC_EmitInteger, MVT::i32, 0, 
/*    78*/      OPC_EmitInteger, MVT::i32, 0, 
/*    81*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*    93*/      OPC_EmitInteger, MVT::i32, 0, 
/*    96*/      OPC_EmitInteger, MVT::i32, 0, 
/*    99*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   111*/      OPC_EmitInteger, MVT::i32, 1, 
/*   114*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*   117*/      OPC_EmitInteger, MVT::i32, 0, 
/*   120*/      OPC_EmitInteger, MVT::i32, 0, 
/*   123*/      OPC_MorphNodeTo1, TARGET_VAL(R600::BFE_UINT_eg), 0,
                    MVT::i32, 18/*#Ops*/, 2, 3, 0, 4, 5, 6, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 
                // Src: (srl:{ *:[i32] } (shl:{ *:[i32] } i32:{ *:[i32] }:$src, (sub:{ *:[i32] } 32:{ *:[i32] }, i32:{ *:[i32] }:$width))<<P:Predicate_shl_oneuse>>, (sub:{ *:[i32] } 32:{ *:[i32] }, i32:{ *:[i32] }:$width)) - Complexity = 23
                // Dst: (BFE_UINT_eg:{ *:[i32] } ?:{ *:[i32] }:$src, (MOV_IMM_I32:{ *:[i32] } 0:{ *:[i32] }), ?:{ *:[i32] }:$width)
/*   147*/    /*Scope*/ 82|128,1/*210*/, /*->359*/
/*   149*/      OPC_RecordChild0, // #0 = $src0
/*   150*/      OPC_RecordChild1, // #1 = $src1
/*   151*/      OPC_CheckChild1Type, MVT::i32,
/*   153*/      OPC_CheckType, MVT::i32,
/*   155*/      OPC_Scope, 100, /*->257*/ // 2 children in Scope
/*   157*/        OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/*   159*/        OPC_EmitInteger, MVT::i32, 0, 
/*   162*/        OPC_EmitInteger, MVT::i32, 0, 
/*   165*/        OPC_EmitInteger, MVT::i32, 1, 
/*   168*/        OPC_EmitInteger, MVT::i32, 0, 
/*   171*/        OPC_EmitInteger, MVT::i32, 0, 
/*   174*/        OPC_EmitInteger, MVT::i32, 0, 
/*   177*/        OPC_EmitInteger, MVT::i32, 0, 
/*   180*/        OPC_EmitInteger, MVT::i32, 0, 
/*   183*/        OPC_EmitInteger, MVT::i32, 0, 
/*   186*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   198*/        OPC_EmitInteger, MVT::i32, 0, 
/*   201*/        OPC_EmitInteger, MVT::i32, 0, 
/*   204*/        OPC_EmitInteger, MVT::i32, 0, 
/*   207*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   219*/        OPC_EmitInteger, MVT::i32, 1, 
/*   222*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*   225*/        OPC_EmitInteger, MVT::i32, 0, 
/*   228*/        OPC_EmitInteger, MVT::i32, 0, 
/*   231*/        OPC_MorphNodeTo1, TARGET_VAL(R600::LSHR_r600), 0,
                      MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (srl:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                  // Dst: (LSHR_r600:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/*   257*/      /*Scope*/ 100, /*->358*/
/*   258*/        OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*   260*/        OPC_EmitInteger, MVT::i32, 0, 
/*   263*/        OPC_EmitInteger, MVT::i32, 0, 
/*   266*/        OPC_EmitInteger, MVT::i32, 1, 
/*   269*/        OPC_EmitInteger, MVT::i32, 0, 
/*   272*/        OPC_EmitInteger, MVT::i32, 0, 
/*   275*/        OPC_EmitInteger, MVT::i32, 0, 
/*   278*/        OPC_EmitInteger, MVT::i32, 0, 
/*   281*/        OPC_EmitInteger, MVT::i32, 0, 
/*   284*/        OPC_EmitInteger, MVT::i32, 0, 
/*   287*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   299*/        OPC_EmitInteger, MVT::i32, 0, 
/*   302*/        OPC_EmitInteger, MVT::i32, 0, 
/*   305*/        OPC_EmitInteger, MVT::i32, 0, 
/*   308*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   320*/        OPC_EmitInteger, MVT::i32, 1, 
/*   323*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*   326*/        OPC_EmitInteger, MVT::i32, 0, 
/*   329*/        OPC_EmitInteger, MVT::i32, 0, 
/*   332*/        OPC_MorphNodeTo1, TARGET_VAL(R600::LSHR_eg), 0,
                      MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (srl:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                  // Dst: (LSHR_eg:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/*   358*/      0, /*End of Scope*/
/*   359*/    0, /*End of Scope*/
/*   360*/  /*SwitchOpcode*/ 99|128,2/*355*/, TARGET_VAL(ISD::SRA),// ->719
/*   364*/    OPC_Scope, 11|128,1/*139*/, /*->506*/ // 2 children in Scope
/*   367*/      OPC_MoveChild0,
/*   368*/      OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*   371*/      OPC_RecordChild0, // #0 = $src
/*   372*/      OPC_MoveChild1,
/*   373*/      OPC_CheckOpcode, TARGET_VAL(ISD::SUB),
/*   376*/      OPC_CheckChild0Integer, 32, 
/*   378*/      OPC_RecordChild1, // #1 = $width
/*   379*/      OPC_CheckType, MVT::i32,
/*   381*/      OPC_MoveParent,
/*   382*/      OPC_CheckPredicate, 0, // Predicate_shl_oneuse
/*   384*/      OPC_MoveParent,
/*   385*/      OPC_MoveChild1,
/*   386*/      OPC_CheckOpcode, TARGET_VAL(ISD::SUB),
/*   389*/      OPC_CheckChild0Integer, 32, 
/*   391*/      OPC_CheckChild1Same, 1,
/*   393*/      OPC_CheckType, MVT::i32,
/*   395*/      OPC_MoveParent,
/*   396*/      OPC_CheckType, MVT::i32,
/*   398*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*   400*/      OPC_EmitInteger, MVT::i32, 0, 
/*   403*/      OPC_EmitInteger, MVT::i32, 0, 
/*   406*/      OPC_EmitInteger, MVT::i32, 0, 
/*   409*/      OPC_EmitInteger, MVT::i32, 0, 
/*   412*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   424*/      OPC_EmitInteger, MVT::i32, 0, 
/*   427*/      OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                    MVT::i32, 1/*#Ops*/, 7,  // Results = #8
/*   434*/      OPC_EmitInteger, MVT::i32, 0, 
/*   437*/      OPC_EmitInteger, MVT::i32, 0, 
/*   440*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   452*/      OPC_EmitInteger, MVT::i32, 0, 
/*   455*/      OPC_EmitInteger, MVT::i32, 0, 
/*   458*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   470*/      OPC_EmitInteger, MVT::i32, 1, 
/*   473*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*   476*/      OPC_EmitInteger, MVT::i32, 0, 
/*   479*/      OPC_EmitInteger, MVT::i32, 0, 
/*   482*/      OPC_MorphNodeTo1, TARGET_VAL(R600::BFE_INT_eg), 0,
                    MVT::i32, 18/*#Ops*/, 2, 3, 0, 4, 5, 6, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 
                // Src: (sra:{ *:[i32] } (shl:{ *:[i32] } i32:{ *:[i32] }:$src, (sub:{ *:[i32] } 32:{ *:[i32] }, i32:{ *:[i32] }:$width))<<P:Predicate_shl_oneuse>>, (sub:{ *:[i32] } 32:{ *:[i32] }, i32:{ *:[i32] }:$width)) - Complexity = 23
                // Dst: (BFE_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$src, (MOV_IMM_I32:{ *:[i32] } 0:{ *:[i32] }), ?:{ *:[i32] }:$width)
/*   506*/    /*Scope*/ 82|128,1/*210*/, /*->718*/
/*   508*/      OPC_RecordChild0, // #0 = $src0
/*   509*/      OPC_RecordChild1, // #1 = $src1
/*   510*/      OPC_CheckChild1Type, MVT::i32,
/*   512*/      OPC_CheckType, MVT::i32,
/*   514*/      OPC_Scope, 100, /*->616*/ // 2 children in Scope
/*   516*/        OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/*   518*/        OPC_EmitInteger, MVT::i32, 0, 
/*   521*/        OPC_EmitInteger, MVT::i32, 0, 
/*   524*/        OPC_EmitInteger, MVT::i32, 1, 
/*   527*/        OPC_EmitInteger, MVT::i32, 0, 
/*   530*/        OPC_EmitInteger, MVT::i32, 0, 
/*   533*/        OPC_EmitInteger, MVT::i32, 0, 
/*   536*/        OPC_EmitInteger, MVT::i32, 0, 
/*   539*/        OPC_EmitInteger, MVT::i32, 0, 
/*   542*/        OPC_EmitInteger, MVT::i32, 0, 
/*   545*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   557*/        OPC_EmitInteger, MVT::i32, 0, 
/*   560*/        OPC_EmitInteger, MVT::i32, 0, 
/*   563*/        OPC_EmitInteger, MVT::i32, 0, 
/*   566*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   578*/        OPC_EmitInteger, MVT::i32, 1, 
/*   581*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*   584*/        OPC_EmitInteger, MVT::i32, 0, 
/*   587*/        OPC_EmitInteger, MVT::i32, 0, 
/*   590*/        OPC_MorphNodeTo1, TARGET_VAL(R600::ASHR_r600), 0,
                      MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (sra:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                  // Dst: (ASHR_r600:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/*   616*/      /*Scope*/ 100, /*->717*/
/*   617*/        OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*   619*/        OPC_EmitInteger, MVT::i32, 0, 
/*   622*/        OPC_EmitInteger, MVT::i32, 0, 
/*   625*/        OPC_EmitInteger, MVT::i32, 1, 
/*   628*/        OPC_EmitInteger, MVT::i32, 0, 
/*   631*/        OPC_EmitInteger, MVT::i32, 0, 
/*   634*/        OPC_EmitInteger, MVT::i32, 0, 
/*   637*/        OPC_EmitInteger, MVT::i32, 0, 
/*   640*/        OPC_EmitInteger, MVT::i32, 0, 
/*   643*/        OPC_EmitInteger, MVT::i32, 0, 
/*   646*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   658*/        OPC_EmitInteger, MVT::i32, 0, 
/*   661*/        OPC_EmitInteger, MVT::i32, 0, 
/*   664*/        OPC_EmitInteger, MVT::i32, 0, 
/*   667*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   679*/        OPC_EmitInteger, MVT::i32, 1, 
/*   682*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*   685*/        OPC_EmitInteger, MVT::i32, 0, 
/*   688*/        OPC_EmitInteger, MVT::i32, 0, 
/*   691*/        OPC_MorphNodeTo1, TARGET_VAL(R600::ASHR_eg), 0,
                      MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (sra:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                  // Dst: (ASHR_eg:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/*   717*/      0, /*End of Scope*/
/*   718*/    0, /*End of Scope*/
/*   719*/  /*SwitchOpcode*/ 126, TARGET_VAL(AMDGPUISD::R600_EXPORT),// ->848
/*   722*/    OPC_RecordNode, // #0 = 'R600_EXPORT' chained node
/*   723*/    OPC_RecordChild1, // #1 = $src
/*   724*/    OPC_CheckChild1Type, MVT::v4f32,
/*   726*/    OPC_RecordChild2, // #2 = $base
/*   727*/    OPC_MoveChild2,
/*   728*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*   731*/    OPC_CheckType, MVT::i32,
/*   733*/    OPC_MoveParent,
/*   734*/    OPC_RecordChild3, // #3 = $type
/*   735*/    OPC_MoveChild3,
/*   736*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*   739*/    OPC_CheckType, MVT::i32,
/*   741*/    OPC_MoveParent,
/*   742*/    OPC_RecordChild4, // #4 = $swz_x
/*   743*/    OPC_MoveChild4,
/*   744*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*   747*/    OPC_CheckType, MVT::i32,
/*   749*/    OPC_MoveParent,
/*   750*/    OPC_RecordChild5, // #5 = $swz_y
/*   751*/    OPC_MoveChild5,
/*   752*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*   755*/    OPC_CheckType, MVT::i32,
/*   757*/    OPC_MoveParent,
/*   758*/    OPC_RecordChild6, // #6 = $swz_z
/*   759*/    OPC_MoveChild6,
/*   760*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*   763*/    OPC_CheckType, MVT::i32,
/*   765*/    OPC_MoveParent,
/*   766*/    OPC_RecordChild7, // #7 = $swz_w
/*   767*/    OPC_MoveChild7,
/*   768*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*   771*/    OPC_CheckType, MVT::i32,
/*   773*/    OPC_MoveParent,
/*   774*/    OPC_Scope, 35, /*->811*/ // 2 children in Scope
/*   776*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/*   778*/      OPC_EmitMergeInputChains1_0,
/*   779*/      OPC_EmitConvertToTarget, 3,
/*   781*/      OPC_EmitConvertToTarget, 2,
/*   783*/      OPC_EmitConvertToTarget, 4,
/*   785*/      OPC_EmitConvertToTarget, 5,
/*   787*/      OPC_EmitConvertToTarget, 6,
/*   789*/      OPC_EmitConvertToTarget, 7,
/*   791*/      OPC_EmitInteger, MVT::i32, 39, 
/*   794*/      OPC_EmitInteger, MVT::i32, 0, 
/*   797*/      OPC_MorphNodeTo0, TARGET_VAL(R600::R600_ExportSwz), 0|OPFL_Chain,
                    9/*#Ops*/, 1, 8, 9, 10, 11, 12, 13, 14, 15, 
                // Src: (R600_EXPORT R600_Reg128:{ *:[v4f32] }:$src, (imm:{ *:[i32] }):$base, (imm:{ *:[i32] }):$type, (imm:{ *:[i32] }):$swz_x, (imm:{ *:[i32] }):$swz_y, (imm:{ *:[i32] }):$swz_z, (imm:{ *:[i32] }):$swz_w) - Complexity = 21
                // Dst: (R600_ExportSwz R600_Reg128:{ *:[v4f32] }:$src, (imm:{ *:[i32] }):$type, (imm:{ *:[i32] }):$base, (imm:{ *:[i32] }):$swz_x, (imm:{ *:[i32] }):$swz_y, (imm:{ *:[i32] }):$swz_z, (imm:{ *:[i32] }):$swz_w, 39:{ *:[i32] }, 0:{ *:[i32] })
/*   811*/    /*Scope*/ 35, /*->847*/
/*   812*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*   814*/      OPC_EmitMergeInputChains1_0,
/*   815*/      OPC_EmitConvertToTarget, 3,
/*   817*/      OPC_EmitConvertToTarget, 2,
/*   819*/      OPC_EmitConvertToTarget, 4,
/*   821*/      OPC_EmitConvertToTarget, 5,
/*   823*/      OPC_EmitConvertToTarget, 6,
/*   825*/      OPC_EmitConvertToTarget, 7,
/*   827*/      OPC_EmitInteger, MVT::i32, 83, 
/*   830*/      OPC_EmitInteger, MVT::i32, 0, 
/*   833*/      OPC_MorphNodeTo0, TARGET_VAL(R600::EG_ExportSwz), 0|OPFL_Chain,
                    9/*#Ops*/, 1, 8, 9, 10, 11, 12, 13, 14, 15, 
                // Src: (R600_EXPORT R600_Reg128:{ *:[v4f32] }:$src, (imm:{ *:[i32] }):$base, (imm:{ *:[i32] }):$type, (imm:{ *:[i32] }):$swz_x, (imm:{ *:[i32] }):$swz_y, (imm:{ *:[i32] }):$swz_z, (imm:{ *:[i32] }):$swz_w) - Complexity = 21
                // Dst: (EG_ExportSwz R600_Reg128:{ *:[v4f32] }:$src, (imm:{ *:[i32] }):$type, (imm:{ *:[i32] }):$base, (imm:{ *:[i32] }):$swz_x, (imm:{ *:[i32] }):$swz_y, (imm:{ *:[i32] }):$swz_z, (imm:{ *:[i32] }):$swz_w, 83:{ *:[i32] }, 0:{ *:[i32] })
/*   847*/    0, /*End of Scope*/
/*   848*/  /*SwitchOpcode*/ 84|128,8/*1108*/, TARGET_VAL(ISD::AND),// ->1960
/*   852*/    OPC_Scope, 37|128,2/*293*/, /*->1148*/ // 5 children in Scope
/*   855*/      OPC_RecordChild0, // #0 = $src
/*   856*/      OPC_MoveChild1,
/*   857*/      OPC_SwitchOpcode /*2 cases */, 8|128,1/*136*/, TARGET_VAL(ISD::ADD),// ->998
/*   862*/        OPC_MoveChild0,
/*   863*/        OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*   866*/        OPC_CheckChild0Integer, 1, 
/*   868*/        OPC_RecordChild1, // #1 = $width
/*   869*/        OPC_CheckChild1Type, MVT::i32,
/*   871*/        OPC_CheckPredicate, 0, // Predicate_shl_oneuse
/*   873*/        OPC_MoveParent,
/*   874*/        OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   885*/        OPC_CheckPredicate, 0, // Predicate_add_oneuse
/*   887*/        OPC_MoveParent,
/*   888*/        OPC_CheckType, MVT::i32,
/*   890*/        OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*   892*/        OPC_EmitInteger, MVT::i32, 0, 
/*   895*/        OPC_EmitInteger, MVT::i32, 0, 
/*   898*/        OPC_EmitInteger, MVT::i32, 0, 
/*   901*/        OPC_EmitInteger, MVT::i32, 0, 
/*   904*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   916*/        OPC_EmitInteger, MVT::i32, 0, 
/*   919*/        OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                      MVT::i32, 1/*#Ops*/, 7,  // Results = #8
/*   926*/        OPC_EmitInteger, MVT::i32, 0, 
/*   929*/        OPC_EmitInteger, MVT::i32, 0, 
/*   932*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   944*/        OPC_EmitInteger, MVT::i32, 0, 
/*   947*/        OPC_EmitInteger, MVT::i32, 0, 
/*   950*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   962*/        OPC_EmitInteger, MVT::i32, 1, 
/*   965*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*   968*/        OPC_EmitInteger, MVT::i32, 0, 
/*   971*/        OPC_EmitInteger, MVT::i32, 0, 
/*   974*/        OPC_MorphNodeTo1, TARGET_VAL(R600::BFE_UINT_eg), 0,
                      MVT::i32, 18/*#Ops*/, 2, 3, 0, 4, 5, 6, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 
                  // Src: (and:{ *:[i32] } i32:{ *:[i32] }:$src, (add:{ *:[i32] } (shl:{ *:[i32] } 1:{ *:[i32] }, i32:{ *:[i32] }:$width)<<P:Predicate_shl_oneuse>>, -1:{ *:[i32] })<<P:Predicate_add_oneuse>>) - Complexity = 21
                  // Dst: (BFE_UINT_eg:{ *:[i32] } ?:{ *:[i32] }:$src, (MOV_IMM_I32:{ *:[i32] } 0:{ *:[i32] }), ?:{ *:[i32] }:$width)
/*   998*/      /*SwitchOpcode*/ 17|128,1/*145*/, TARGET_VAL(ISD::XOR),// ->1147
/*  1002*/        OPC_MoveChild0,
/*  1003*/        OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*  1006*/        OPC_CheckChild0Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1017*/        OPC_RecordChild1, // #1 = $width
/*  1018*/        OPC_CheckChild1Type, MVT::i32,
/*  1020*/        OPC_CheckPredicate, 0, // Predicate_shl_oneuse
/*  1022*/        OPC_MoveParent,
/*  1023*/        OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1034*/        OPC_CheckPredicate, 0, // Predicate_xor_oneuse
/*  1036*/        OPC_MoveParent,
/*  1037*/        OPC_CheckType, MVT::i32,
/*  1039*/        OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  1041*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1044*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1047*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1050*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1053*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1065*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1068*/        OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                      MVT::i32, 1/*#Ops*/, 7,  // Results = #8
/*  1075*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1078*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1081*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1093*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1096*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1099*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1111*/        OPC_EmitInteger, MVT::i32, 1, 
/*  1114*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  1117*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1120*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1123*/        OPC_MorphNodeTo1, TARGET_VAL(R600::BFE_UINT_eg), 0,
                      MVT::i32, 18/*#Ops*/, 2, 3, 0, 4, 5, 6, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 
                  // Src: (and:{ *:[i32] } i32:{ *:[i32] }:$src, (xor:{ *:[i32] } (shl:{ *:[i32] } -1:{ *:[i32] }, i32:{ *:[i32] }:$width)<<P:Predicate_shl_oneuse>>, -1:{ *:[i32] })<<P:Predicate_xor_oneuse>>) - Complexity = 21
                  // Dst: (BFE_UINT_eg:{ *:[i32] } ?:{ *:[i32] }:$src, (MOV_IMM_I32:{ *:[i32] } 0:{ *:[i32] }), ?:{ *:[i32] }:$width)
/*  1147*/      0, // EndSwitchOpcode
/*  1148*/    /*Scope*/ 38|128,2/*294*/, /*->1444*/
/*  1150*/      OPC_MoveChild0,
/*  1151*/      OPC_SwitchOpcode /*2 cases */, 9|128,1/*137*/, TARGET_VAL(ISD::ADD),// ->1293
/*  1156*/        OPC_MoveChild0,
/*  1157*/        OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*  1160*/        OPC_CheckChild0Integer, 1, 
/*  1162*/        OPC_RecordChild1, // #0 = $width
/*  1163*/        OPC_CheckChild1Type, MVT::i32,
/*  1165*/        OPC_CheckPredicate, 0, // Predicate_shl_oneuse
/*  1167*/        OPC_MoveParent,
/*  1168*/        OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1179*/        OPC_CheckPredicate, 0, // Predicate_add_oneuse
/*  1181*/        OPC_MoveParent,
/*  1182*/        OPC_RecordChild1, // #1 = $src
/*  1183*/        OPC_CheckType, MVT::i32,
/*  1185*/        OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  1187*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1190*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1193*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1196*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1199*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1211*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1214*/        OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                      MVT::i32, 1/*#Ops*/, 7,  // Results = #8
/*  1221*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1224*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1227*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1239*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1242*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1245*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1257*/        OPC_EmitInteger, MVT::i32, 1, 
/*  1260*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  1263*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1266*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1269*/        OPC_MorphNodeTo1, TARGET_VAL(R600::BFE_UINT_eg), 0,
                      MVT::i32, 18/*#Ops*/, 2, 3, 1, 4, 5, 6, 8, 9, 10, 11, 0, 12, 13, 14, 15, 16, 17, 18, 
                  // Src: (and:{ *:[i32] } (add:{ *:[i32] } (shl:{ *:[i32] } 1:{ *:[i32] }, i32:{ *:[i32] }:$width)<<P:Predicate_shl_oneuse>>, -1:{ *:[i32] })<<P:Predicate_add_oneuse>>, i32:{ *:[i32] }:$src) - Complexity = 21
                  // Dst: (BFE_UINT_eg:{ *:[i32] } ?:{ *:[i32] }:$src, (MOV_IMM_I32:{ *:[i32] } 0:{ *:[i32] }), ?:{ *:[i32] }:$width)
/*  1293*/      /*SwitchOpcode*/ 18|128,1/*146*/, TARGET_VAL(ISD::XOR),// ->1443
/*  1297*/        OPC_MoveChild0,
/*  1298*/        OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*  1301*/        OPC_CheckChild0Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1312*/        OPC_RecordChild1, // #0 = $width
/*  1313*/        OPC_CheckChild1Type, MVT::i32,
/*  1315*/        OPC_CheckPredicate, 0, // Predicate_shl_oneuse
/*  1317*/        OPC_MoveParent,
/*  1318*/        OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1329*/        OPC_CheckPredicate, 0, // Predicate_xor_oneuse
/*  1331*/        OPC_MoveParent,
/*  1332*/        OPC_RecordChild1, // #1 = $src
/*  1333*/        OPC_CheckType, MVT::i32,
/*  1335*/        OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  1337*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1340*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1343*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1346*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1349*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1361*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1364*/        OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                      MVT::i32, 1/*#Ops*/, 7,  // Results = #8
/*  1371*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1374*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1377*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1389*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1392*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1395*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1407*/        OPC_EmitInteger, MVT::i32, 1, 
/*  1410*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  1413*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1416*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1419*/        OPC_MorphNodeTo1, TARGET_VAL(R600::BFE_UINT_eg), 0,
                      MVT::i32, 18/*#Ops*/, 2, 3, 1, 4, 5, 6, 8, 9, 10, 11, 0, 12, 13, 14, 15, 16, 17, 18, 
                  // Src: (and:{ *:[i32] } (xor:{ *:[i32] } (shl:{ *:[i32] } -1:{ *:[i32] }, i32:{ *:[i32] }:$width)<<P:Predicate_shl_oneuse>>, -1:{ *:[i32] })<<P:Predicate_xor_oneuse>>, i32:{ *:[i32] }:$src) - Complexity = 21
                  // Dst: (BFE_UINT_eg:{ *:[i32] } ?:{ *:[i32] }:$src, (MOV_IMM_I32:{ *:[i32] } 0:{ *:[i32] }), ?:{ *:[i32] }:$width)
/*  1443*/      0, // EndSwitchOpcode
/*  1444*/    /*Scope*/ 11|128,1/*139*/, /*->1585*/
/*  1446*/      OPC_RecordChild0, // #0 = $src
/*  1447*/      OPC_MoveChild1,
/*  1448*/      OPC_CheckOpcode, TARGET_VAL(ISD::SRL),
/*  1451*/      OPC_CheckChild0Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1462*/      OPC_MoveChild1,
/*  1463*/      OPC_CheckOpcode, TARGET_VAL(ISD::SUB),
/*  1466*/      OPC_CheckChild0Integer, 32, 
/*  1468*/      OPC_RecordChild1, // #1 = $width
/*  1469*/      OPC_CheckType, MVT::i32,
/*  1471*/      OPC_MoveParent,
/*  1472*/      OPC_CheckPredicate, 0, // Predicate_srl_oneuse
/*  1474*/      OPC_MoveParent,
/*  1475*/      OPC_CheckType, MVT::i32,
/*  1477*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  1479*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1482*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1485*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1488*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1491*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1503*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1506*/      OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                    MVT::i32, 1/*#Ops*/, 7,  // Results = #8
/*  1513*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1516*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1519*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1531*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1534*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1537*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1549*/      OPC_EmitInteger, MVT::i32, 1, 
/*  1552*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  1555*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1558*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1561*/      OPC_MorphNodeTo1, TARGET_VAL(R600::BFE_UINT_eg), 0,
                    MVT::i32, 18/*#Ops*/, 2, 3, 0, 4, 5, 6, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 
                // Src: (and:{ *:[i32] } i32:{ *:[i32] }:$src, (srl:{ *:[i32] } -1:{ *:[i32] }, (sub:{ *:[i32] } 32:{ *:[i32] }, i32:{ *:[i32] }:$width))<<P:Predicate_srl_oneuse>>) - Complexity = 20
                // Dst: (BFE_UINT_eg:{ *:[i32] } ?:{ *:[i32] }:$src, (MOV_IMM_I32:{ *:[i32] } 0:{ *:[i32] }), ?:{ *:[i32] }:$width)
/*  1585*/    /*Scope*/ 11|128,2/*267*/, /*->1854*/
/*  1587*/      OPC_MoveChild0,
/*  1588*/      OPC_CheckOpcode, TARGET_VAL(ISD::SRL),
/*  1591*/      OPC_Scope, 7|128,1/*135*/, /*->1729*/ // 2 children in Scope
/*  1594*/        OPC_CheckChild0Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1605*/        OPC_MoveChild1,
/*  1606*/        OPC_CheckOpcode, TARGET_VAL(ISD::SUB),
/*  1609*/        OPC_CheckChild0Integer, 32, 
/*  1611*/        OPC_RecordChild1, // #0 = $width
/*  1612*/        OPC_CheckType, MVT::i32,
/*  1614*/        OPC_MoveParent,
/*  1615*/        OPC_CheckPredicate, 0, // Predicate_srl_oneuse
/*  1617*/        OPC_MoveParent,
/*  1618*/        OPC_RecordChild1, // #1 = $src
/*  1619*/        OPC_CheckType, MVT::i32,
/*  1621*/        OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  1623*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1626*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1629*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1632*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1635*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1647*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1650*/        OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                      MVT::i32, 1/*#Ops*/, 7,  // Results = #8
/*  1657*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1660*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1663*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1675*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1678*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1681*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1693*/        OPC_EmitInteger, MVT::i32, 1, 
/*  1696*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  1699*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1702*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1705*/        OPC_MorphNodeTo1, TARGET_VAL(R600::BFE_UINT_eg), 0,
                      MVT::i32, 18/*#Ops*/, 2, 3, 1, 4, 5, 6, 8, 9, 10, 11, 0, 12, 13, 14, 15, 16, 17, 18, 
                  // Src: (and:{ *:[i32] } (srl:{ *:[i32] } -1:{ *:[i32] }, (sub:{ *:[i32] } 32:{ *:[i32] }, i32:{ *:[i32] }:$width))<<P:Predicate_srl_oneuse>>, i32:{ *:[i32] }:$src) - Complexity = 20
                  // Dst: (BFE_UINT_eg:{ *:[i32] } ?:{ *:[i32] }:$src, (MOV_IMM_I32:{ *:[i32] } 0:{ *:[i32] }), ?:{ *:[i32] }:$width)
/*  1729*/      /*Scope*/ 123, /*->1853*/
/*  1730*/        OPC_RecordChild0, // #0 = $src
/*  1731*/        OPC_RecordChild1, // #1 = $rshift
/*  1732*/        OPC_CheckChild1Type, MVT::i32,
/*  1734*/        OPC_MoveParent,
/*  1735*/        OPC_RecordChild1, // #2 = $mask
/*  1736*/        OPC_MoveChild1,
/*  1737*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1740*/        OPC_CheckPredicate, 1, // Predicate_IMMZeroBasedBitfieldMask
/*  1742*/        OPC_MoveParent,
/*  1743*/        OPC_CheckType, MVT::i32,
/*  1745*/        OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  1747*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1750*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1753*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1756*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1759*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1771*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1774*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1777*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1789*/        OPC_EmitNodeXForm, 0, 2, // IMMPopCount
/*  1792*/        OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                      MVT::i32, 1/*#Ops*/, 11,  // Results = #12
/*  1799*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1802*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1805*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1817*/        OPC_EmitInteger, MVT::i32, 1, 
/*  1820*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  1823*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1826*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1829*/        OPC_MorphNodeTo1, TARGET_VAL(R600::BFE_UINT_eg), 0,
                      MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (and:{ *:[i32] } (srl:{ *:[i32] } i32:{ *:[i32] }:$src, i32:{ *:[i32] }:$rshift), (imm:{ *:[i32] })<<P:Predicate_IMMZeroBasedBitfieldMask>>:$mask) - Complexity = 10
                  // Dst: (BFE_UINT_eg:{ *:[i32] } ?:{ *:[i32] }:$src, ?:{ *:[i32] }:$rshift, (MOV_IMM_I32:{ *:[i32] } (IMMPopCount:{ *:[i32] } ?:{ *:[i32] }:$mask)))
/*  1853*/      0, /*End of Scope*/
/*  1854*/    /*Scope*/ 104, /*->1959*/
/*  1855*/      OPC_RecordChild0, // #0 = $src0
/*  1856*/      OPC_RecordChild1, // #1 = $src1
/*  1857*/      OPC_CheckType, MVT::i32,
/*  1859*/      OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  1861*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1864*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1867*/      OPC_EmitInteger, MVT::i32, 1, 
/*  1870*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1873*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1876*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1879*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1882*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1885*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1888*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1900*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1903*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1906*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1909*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1921*/      OPC_EmitInteger, MVT::i32, 1, 
/*  1924*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  1927*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1930*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1933*/      OPC_MorphNodeTo1, TARGET_VAL(R600::AND_INT), 0,
                    MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (and:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                // Dst: (AND_INT:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/*  1959*/    0, /*End of Scope*/
/*  1960*/  /*SwitchOpcode*/ 118|128,3/*502*/, TARGET_VAL(ISD::INTRINSIC_VOID),// ->2466
/*  1964*/    OPC_RecordNode, // #0 = 'intrinsic_void' chained node
/*  1965*/    OPC_Scope, 64|128,2/*320*/, /*->2288*/ // 4 children in Scope
/*  1968*/      OPC_CheckChild1Integer, 105|128,48/*6249*/, 
/*  1971*/      OPC_RecordChild2, // #1 = $src
/*  1972*/      OPC_RecordChild3, // #2 = $arraybase
/*  1973*/      OPC_MoveChild3,
/*  1974*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1977*/      OPC_MoveParent,
/*  1978*/      OPC_Scope, 76, /*->2056*/ // 4 children in Scope
/*  1980*/        OPC_CheckChild4Integer, 0, 
/*  1982*/        OPC_RecordChild5, // #3 = $mask
/*  1983*/        OPC_MoveChild5,
/*  1984*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1987*/        OPC_MoveParent,
/*  1988*/        OPC_Scope, 32, /*->2022*/ // 2 children in Scope
/*  1990*/          OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/*  1992*/          OPC_EmitMergeInputChains1_0,
/*  1993*/          OPC_EmitInteger, MVT::i32, 0, 
/*  1996*/          OPC_EmitConvertToTarget, 2,
/*  1998*/          OPC_EmitInteger, MVT::i32, 127|128,31/*4095*/, 
/*  2002*/          OPC_EmitConvertToTarget, 3,
/*  2004*/          OPC_EmitInteger, MVT::i32, 32, 
/*  2007*/          OPC_EmitInteger, MVT::i32, 0, 
/*  2010*/          OPC_MorphNodeTo0, TARGET_VAL(R600::R600_ExportBuf), 0|OPFL_Chain,
                        7/*#Ops*/, 1, 4, 5, 6, 7, 8, 9, 
                    // Src: (intrinsic_void 6249:{ *:[iPTR] }, R600_Reg128:{ *:[v4f32] }:$src, (imm:{ *:[i32] }):$arraybase, 0:{ *:[i32] }, (imm:{ *:[i32] }):$mask) - Complexity = 19
                    // Dst: (R600_ExportBuf R600_Reg128:{ *:[v4f32] }:$src, 0:{ *:[i32] }, (imm:{ *:[i32] }):$arraybase, 4095:{ *:[i32] }, (imm:{ *:[i32] }):$mask, 32:{ *:[i32] }, 0:{ *:[i32] })
/*  2022*/        /*Scope*/ 32, /*->2055*/
/*  2023*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  2025*/          OPC_EmitMergeInputChains1_0,
/*  2026*/          OPC_EmitInteger, MVT::i32, 0, 
/*  2029*/          OPC_EmitConvertToTarget, 2,
/*  2031*/          OPC_EmitInteger, MVT::i32, 127|128,31/*4095*/, 
/*  2035*/          OPC_EmitConvertToTarget, 3,
/*  2037*/          OPC_EmitInteger, MVT::i32, 64, 
/*  2040*/          OPC_EmitInteger, MVT::i32, 0, 
/*  2043*/          OPC_MorphNodeTo0, TARGET_VAL(R600::EG_ExportBuf), 0|OPFL_Chain,
                        7/*#Ops*/, 1, 4, 5, 6, 7, 8, 9, 
                    // Src: (intrinsic_void 6249:{ *:[iPTR] }, R600_Reg128:{ *:[v4f32] }:$src, (imm:{ *:[i32] }):$arraybase, 0:{ *:[i32] }, (imm:{ *:[i32] }):$mask) - Complexity = 19
                    // Dst: (EG_ExportBuf R600_Reg128:{ *:[v4f32] }:$src, 0:{ *:[i32] }, (imm:{ *:[i32] }):$arraybase, 4095:{ *:[i32] }, (imm:{ *:[i32] }):$mask, 64:{ *:[i32] }, 0:{ *:[i32] })
/*  2055*/        0, /*End of Scope*/
/*  2056*/      /*Scope*/ 76, /*->2133*/
/*  2057*/        OPC_CheckChild4Integer, 1, 
/*  2059*/        OPC_RecordChild5, // #3 = $mask
/*  2060*/        OPC_MoveChild5,
/*  2061*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  2064*/        OPC_MoveParent,
/*  2065*/        OPC_Scope, 32, /*->2099*/ // 2 children in Scope
/*  2067*/          OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/*  2069*/          OPC_EmitMergeInputChains1_0,
/*  2070*/          OPC_EmitInteger, MVT::i32, 0, 
/*  2073*/          OPC_EmitConvertToTarget, 2,
/*  2075*/          OPC_EmitInteger, MVT::i32, 127|128,31/*4095*/, 
/*  2079*/          OPC_EmitConvertToTarget, 3,
/*  2081*/          OPC_EmitInteger, MVT::i32, 33, 
/*  2084*/          OPC_EmitInteger, MVT::i32, 0, 
/*  2087*/          OPC_MorphNodeTo0, TARGET_VAL(R600::R600_ExportBuf), 0|OPFL_Chain,
                        7/*#Ops*/, 1, 4, 5, 6, 7, 8, 9, 
                    // Src: (intrinsic_void 6249:{ *:[iPTR] }, R600_Reg128:{ *:[v4f32] }:$src, (imm:{ *:[i32] }):$arraybase, 1:{ *:[i32] }, (imm:{ *:[i32] }):$mask) - Complexity = 19
                    // Dst: (R600_ExportBuf ?:{ *:[v4f32] }:$src, 0:{ *:[i32] }, (imm:{ *:[i32] }):$arraybase, 4095:{ *:[i32] }, (imm:{ *:[i32] }):$mask, 33:{ *:[i32] }, 0:{ *:[i32] })
/*  2099*/        /*Scope*/ 32, /*->2132*/
/*  2100*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  2102*/          OPC_EmitMergeInputChains1_0,
/*  2103*/          OPC_EmitInteger, MVT::i32, 0, 
/*  2106*/          OPC_EmitConvertToTarget, 2,
/*  2108*/          OPC_EmitInteger, MVT::i32, 127|128,31/*4095*/, 
/*  2112*/          OPC_EmitConvertToTarget, 3,
/*  2114*/          OPC_EmitInteger, MVT::i32, 65, 
/*  2117*/          OPC_EmitInteger, MVT::i32, 0, 
/*  2120*/          OPC_MorphNodeTo0, TARGET_VAL(R600::EG_ExportBuf), 0|OPFL_Chain,
                        7/*#Ops*/, 1, 4, 5, 6, 7, 8, 9, 
                    // Src: (intrinsic_void 6249:{ *:[iPTR] }, R600_Reg128:{ *:[v4f32] }:$src, (imm:{ *:[i32] }):$arraybase, 1:{ *:[i32] }, (imm:{ *:[i32] }):$mask) - Complexity = 19
                    // Dst: (EG_ExportBuf ?:{ *:[v4f32] }:$src, 0:{ *:[i32] }, (imm:{ *:[i32] }):$arraybase, 4095:{ *:[i32] }, (imm:{ *:[i32] }):$mask, 65:{ *:[i32] }, 0:{ *:[i32] })
/*  2132*/        0, /*End of Scope*/
/*  2133*/      /*Scope*/ 76, /*->2210*/
/*  2134*/        OPC_CheckChild4Integer, 2, 
/*  2136*/        OPC_RecordChild5, // #3 = $mask
/*  2137*/        OPC_MoveChild5,
/*  2138*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  2141*/        OPC_MoveParent,
/*  2142*/        OPC_Scope, 32, /*->2176*/ // 2 children in Scope
/*  2144*/          OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/*  2146*/          OPC_EmitMergeInputChains1_0,
/*  2147*/          OPC_EmitInteger, MVT::i32, 0, 
/*  2150*/          OPC_EmitConvertToTarget, 2,
/*  2152*/          OPC_EmitInteger, MVT::i32, 127|128,31/*4095*/, 
/*  2156*/          OPC_EmitConvertToTarget, 3,
/*  2158*/          OPC_EmitInteger, MVT::i32, 34, 
/*  2161*/          OPC_EmitInteger, MVT::i32, 0, 
/*  2164*/          OPC_MorphNodeTo0, TARGET_VAL(R600::R600_ExportBuf), 0|OPFL_Chain,
                        7/*#Ops*/, 1, 4, 5, 6, 7, 8, 9, 
                    // Src: (intrinsic_void 6249:{ *:[iPTR] }, R600_Reg128:{ *:[v4f32] }:$src, (imm:{ *:[i32] }):$arraybase, 2:{ *:[i32] }, (imm:{ *:[i32] }):$mask) - Complexity = 19
                    // Dst: (R600_ExportBuf ?:{ *:[v4f32] }:$src, 0:{ *:[i32] }, (imm:{ *:[i32] }):$arraybase, 4095:{ *:[i32] }, (imm:{ *:[i32] }):$mask, 34:{ *:[i32] }, 0:{ *:[i32] })
/*  2176*/        /*Scope*/ 32, /*->2209*/
/*  2177*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  2179*/          OPC_EmitMergeInputChains1_0,
/*  2180*/          OPC_EmitInteger, MVT::i32, 0, 
/*  2183*/          OPC_EmitConvertToTarget, 2,
/*  2185*/          OPC_EmitInteger, MVT::i32, 127|128,31/*4095*/, 
/*  2189*/          OPC_EmitConvertToTarget, 3,
/*  2191*/          OPC_EmitInteger, MVT::i32, 66, 
/*  2194*/          OPC_EmitInteger, MVT::i32, 0, 
/*  2197*/          OPC_MorphNodeTo0, TARGET_VAL(R600::EG_ExportBuf), 0|OPFL_Chain,
                        7/*#Ops*/, 1, 4, 5, 6, 7, 8, 9, 
                    // Src: (intrinsic_void 6249:{ *:[iPTR] }, R600_Reg128:{ *:[v4f32] }:$src, (imm:{ *:[i32] }):$arraybase, 2:{ *:[i32] }, (imm:{ *:[i32] }):$mask) - Complexity = 19
                    // Dst: (EG_ExportBuf ?:{ *:[v4f32] }:$src, 0:{ *:[i32] }, (imm:{ *:[i32] }):$arraybase, 4095:{ *:[i32] }, (imm:{ *:[i32] }):$mask, 66:{ *:[i32] }, 0:{ *:[i32] })
/*  2209*/        0, /*End of Scope*/
/*  2210*/      /*Scope*/ 76, /*->2287*/
/*  2211*/        OPC_CheckChild4Integer, 3, 
/*  2213*/        OPC_RecordChild5, // #3 = $mask
/*  2214*/        OPC_MoveChild5,
/*  2215*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  2218*/        OPC_MoveParent,
/*  2219*/        OPC_Scope, 32, /*->2253*/ // 2 children in Scope
/*  2221*/          OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/*  2223*/          OPC_EmitMergeInputChains1_0,
/*  2224*/          OPC_EmitInteger, MVT::i32, 0, 
/*  2227*/          OPC_EmitConvertToTarget, 2,
/*  2229*/          OPC_EmitInteger, MVT::i32, 127|128,31/*4095*/, 
/*  2233*/          OPC_EmitConvertToTarget, 3,
/*  2235*/          OPC_EmitInteger, MVT::i32, 35, 
/*  2238*/          OPC_EmitInteger, MVT::i32, 0, 
/*  2241*/          OPC_MorphNodeTo0, TARGET_VAL(R600::R600_ExportBuf), 0|OPFL_Chain,
                        7/*#Ops*/, 1, 4, 5, 6, 7, 8, 9, 
                    // Src: (intrinsic_void 6249:{ *:[iPTR] }, R600_Reg128:{ *:[v4f32] }:$src, (imm:{ *:[i32] }):$arraybase, 3:{ *:[i32] }, (imm:{ *:[i32] }):$mask) - Complexity = 19
                    // Dst: (R600_ExportBuf ?:{ *:[v4f32] }:$src, 0:{ *:[i32] }, (imm:{ *:[i32] }):$arraybase, 4095:{ *:[i32] }, (imm:{ *:[i32] }):$mask, 35:{ *:[i32] }, 0:{ *:[i32] })
/*  2253*/        /*Scope*/ 32, /*->2286*/
/*  2254*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  2256*/          OPC_EmitMergeInputChains1_0,
/*  2257*/          OPC_EmitInteger, MVT::i32, 0, 
/*  2260*/          OPC_EmitConvertToTarget, 2,
/*  2262*/          OPC_EmitInteger, MVT::i32, 127|128,31/*4095*/, 
/*  2266*/          OPC_EmitConvertToTarget, 3,
/*  2268*/          OPC_EmitInteger, MVT::i32, 67, 
/*  2271*/          OPC_EmitInteger, MVT::i32, 0, 
/*  2274*/          OPC_MorphNodeTo0, TARGET_VAL(R600::EG_ExportBuf), 0|OPFL_Chain,
                        7/*#Ops*/, 1, 4, 5, 6, 7, 8, 9, 
                    // Src: (intrinsic_void 6249:{ *:[iPTR] }, R600_Reg128:{ *:[v4f32] }:$src, (imm:{ *:[i32] }):$arraybase, 3:{ *:[i32] }, (imm:{ *:[i32] }):$mask) - Complexity = 19
                    // Dst: (EG_ExportBuf ?:{ *:[v4f32] }:$src, 0:{ *:[i32] }, (imm:{ *:[i32] }):$arraybase, 4095:{ *:[i32] }, (imm:{ *:[i32] }):$mask, 67:{ *:[i32] }, 0:{ *:[i32] })
/*  2286*/        0, /*End of Scope*/
/*  2287*/      0, /*End of Scope*/
/*  2288*/    /*Scope*/ 49, /*->2338*/
/*  2289*/      OPC_CheckChild1Integer, 87|128,48/*6231*/, 
/*  2292*/      OPC_RecordChild2, // #1 = $rw_gpr
/*  2293*/      OPC_RecordChild3, // #2 = $index_gpr
/*  2294*/      OPC_RecordChild4, // #3 = $rat_id
/*  2295*/      OPC_MoveChild4,
/*  2296*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  2299*/      OPC_MoveParent,
/*  2300*/      OPC_Scope, 17, /*->2319*/ // 2 children in Scope
/*  2302*/        OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/*  2304*/        OPC_EmitMergeInputChains1_0,
/*  2305*/        OPC_EmitConvertToTarget, 3,
/*  2307*/        OPC_EmitInteger, MVT::i32, 0, 
/*  2310*/        OPC_MorphNodeTo0, TARGET_VAL(R600::RAT_STORE_TYPED_cm), 0|OPFL_Chain,
                      4/*#Ops*/, 1, 2, 4, 5, 
                  // Src: (intrinsic_void 6231:{ *:[iPTR] }, R600_Reg128:{ *:[v4i32] }:$rw_gpr, R600_Reg128:{ *:[v4i32] }:$index_gpr, (imm:{ *:[i32] }):$rat_id) - Complexity = 11
                  // Dst: (RAT_STORE_TYPED_cm R600_Reg128:{ *:[v4i32] }:$rw_gpr, R600_Reg128:{ *:[v4i32] }:$index_gpr, (imm:{ *:[i32] }):$rat_id)
/*  2319*/      /*Scope*/ 17, /*->2337*/
/*  2320*/        OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  2322*/        OPC_EmitMergeInputChains1_0,
/*  2323*/        OPC_EmitConvertToTarget, 3,
/*  2325*/        OPC_EmitInteger, MVT::i32, 0, 
/*  2328*/        OPC_MorphNodeTo0, TARGET_VAL(R600::RAT_STORE_TYPED_eg), 0|OPFL_Chain,
                      4/*#Ops*/, 1, 2, 4, 5, 
                  // Src: (intrinsic_void 6231:{ *:[iPTR] }, R600_Reg128:{ *:[v4i32] }:$rw_gpr, R600_Reg128:{ *:[v4i32] }:$index_gpr, (imm:{ *:[i32] }):$rat_id) - Complexity = 11
                  // Dst: (RAT_STORE_TYPED_eg R600_Reg128:{ *:[v4i32] }:$rw_gpr, R600_Reg128:{ *:[v4i32] }:$index_gpr, (imm:{ *:[i32] }):$rat_id)
/*  2337*/      0, /*End of Scope*/
/*  2338*/    /*Scope*/ 11, /*->2350*/
/*  2339*/      OPC_CheckChild1Integer, 84|128,48/*6228*/, 
/*  2342*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  2344*/      OPC_EmitMergeInputChains1_0,
/*  2345*/      OPC_MorphNodeTo0, TARGET_VAL(R600::GROUP_BARRIER), 0|OPFL_Chain,
                    0/*#Ops*/, 
                // Src: (intrinsic_void 6228:{ *:[iPTR] }) - Complexity = 8
                // Dst: (GROUP_BARRIER)
/*  2350*/    /*Scope*/ 114, /*->2465*/
/*  2351*/      OPC_CheckChild1Integer, 86|128,48/*6230*/, 
/*  2354*/      OPC_RecordChild2, // #1 = $src0
/*  2355*/      OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  2357*/      OPC_EmitMergeInputChains1_0,
/*  2358*/      OPC_EmitInteger, MVT::i32, 0, 
/*  2361*/      OPC_EmitInteger, MVT::i32, 0, 
/*  2364*/      OPC_EmitInteger, MVT::i32, 1, 
/*  2367*/      OPC_EmitInteger, MVT::i32, 0, 
/*  2370*/      OPC_EmitInteger, MVT::i32, 0, 
/*  2373*/      OPC_EmitInteger, MVT::i32, 0, 
/*  2376*/      OPC_EmitRegister, MVT::f32, R600::ZERO,
/*  2379*/      OPC_EmitInteger, MVT::i32, 0, 
/*  2382*/      OPC_EmitInteger, MVT::i32, 0, 
/*  2385*/      OPC_EmitInteger, MVT::i32, 0, 
/*  2388*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2400*/      OPC_EmitInteger, MVT::i32, 0, 
/*  2403*/      OPC_EmitInteger, MVT::i32, 0, 
/*  2406*/      OPC_EmitInteger, MVT::i32, 0, 
/*  2409*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2421*/      OPC_EmitInteger, MVT::i32, 1, 
/*  2424*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  2427*/      OPC_EmitInteger, MVT::i32, 0, 
/*  2430*/      OPC_EmitInteger, MVT::i32, 0, 
/*  2433*/      OPC_EmitNode1, TARGET_VAL(R600::KILLGT), 0|OPFL_Chain,
                    MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 1, 13, 14, 15, 16, 17, 18, 19, 20,  // Results = #21
/*  2459*/      OPC_MorphNodeTo0, TARGET_VAL(R600::MASK_WRITE), 0|OPFL_Chain,
                    1/*#Ops*/, 21, 
                // Src: (intrinsic_void 6230:{ *:[iPTR] }, f32:{ *:[f32] }:$src0) - Complexity = 8
                // Dst: (MASK_WRITE (KILLGT:{ *:[i32] } ZERO:{ *:[f32] }, ?:{ *:[f32] }:$src0))
/*  2465*/    0, /*End of Scope*/
/*  2466*/  /*SwitchOpcode*/ 15|128,116/*14863*/, TARGET_VAL(ISD::OR),// ->17333
/*  2470*/    OPC_Scope, 34|128,115/*14754*/, /*->17227*/ // 2 children in Scope
/*  2473*/      OPC_MoveChild0,
/*  2474*/      OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*  2477*/      OPC_Scope, 93|128,5/*733*/, /*->3213*/ // 8 children in Scope
/*  2480*/        OPC_RecordChild0, // #0 = $y
/*  2481*/        OPC_Scope, 108|128,3/*492*/, /*->2976*/ // 2 children in Scope
/*  2484*/          OPC_RecordChild1, // #1 = $x
/*  2485*/          OPC_MoveParent,
/*  2486*/          OPC_MoveChild1,
/*  2487*/          OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*  2490*/          OPC_Scope, 120, /*->2612*/ // 4 children in Scope
/*  2492*/            OPC_RecordChild0, // #2 = $z
/*  2493*/            OPC_MoveChild1,
/*  2494*/            OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*  2497*/            OPC_CheckChild0Same, 1,
/*  2499*/            OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2510*/            OPC_MoveParent,
/*  2511*/            OPC_MoveParent,
/*  2512*/            OPC_CheckType, MVT::i32,
/*  2514*/            OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  2516*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2519*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2522*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2525*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2528*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2540*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2543*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2546*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2558*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2561*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2564*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2576*/            OPC_EmitInteger, MVT::i32, 1, 
/*  2579*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  2582*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2585*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2588*/            OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 3, 4, 1, 5, 6, 7, 0, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                      // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$y, i32:{ *:[i32] }:$x), (and:{ *:[i32] } i32:{ *:[i32] }:$z, (xor:{ *:[i32] } i32:{ *:[i32] }:$x, -1:{ *:[i32] }))) - Complexity = 17
                      // Dst: (BFI_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$x, ?:{ *:[i32] }:$y, ?:{ *:[i32] }:$z)
/*  2612*/          /*Scope*/ 120, /*->2733*/
/*  2613*/            OPC_MoveChild0,
/*  2614*/            OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*  2617*/            OPC_CheckChild0Same, 1,
/*  2619*/            OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2630*/            OPC_MoveParent,
/*  2631*/            OPC_RecordChild1, // #2 = $z
/*  2632*/            OPC_MoveParent,
/*  2633*/            OPC_CheckType, MVT::i32,
/*  2635*/            OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  2637*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2640*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2643*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2646*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2649*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2661*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2664*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2667*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2679*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2682*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2685*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2697*/            OPC_EmitInteger, MVT::i32, 1, 
/*  2700*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  2703*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2706*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2709*/            OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 3, 4, 1, 5, 6, 7, 0, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                      // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$y, i32:{ *:[i32] }:$x), (and:{ *:[i32] } (xor:{ *:[i32] } i32:{ *:[i32] }:$x, -1:{ *:[i32] }), i32:{ *:[i32] }:$z)) - Complexity = 17
                      // Dst: (BFI_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$x, ?:{ *:[i32] }:$y, ?:{ *:[i32] }:$z)
/*  2733*/          /*Scope*/ 120, /*->2854*/
/*  2734*/            OPC_RecordChild0, // #2 = $z
/*  2735*/            OPC_MoveChild1,
/*  2736*/            OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*  2739*/            OPC_CheckChild0Same, 0,
/*  2741*/            OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2752*/            OPC_MoveParent,
/*  2753*/            OPC_MoveParent,
/*  2754*/            OPC_CheckType, MVT::i32,
/*  2756*/            OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  2758*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2761*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2764*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2767*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2770*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2782*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2785*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2788*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2800*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2803*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2806*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2818*/            OPC_EmitInteger, MVT::i32, 1, 
/*  2821*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  2824*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2827*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2830*/            OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                      // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), (and:{ *:[i32] } i32:{ *:[i32] }:$z, (xor:{ *:[i32] } i32:{ *:[i32] }:$x, -1:{ *:[i32] }))) - Complexity = 17
                      // Dst: (BFI_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$x, ?:{ *:[i32] }:$y, ?:{ *:[i32] }:$z)
/*  2854*/          /*Scope*/ 120, /*->2975*/
/*  2855*/            OPC_MoveChild0,
/*  2856*/            OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*  2859*/            OPC_CheckChild0Same, 0,
/*  2861*/            OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2872*/            OPC_MoveParent,
/*  2873*/            OPC_RecordChild1, // #2 = $z
/*  2874*/            OPC_MoveParent,
/*  2875*/            OPC_CheckType, MVT::i32,
/*  2877*/            OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  2879*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2882*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2885*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2888*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2891*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2903*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2906*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2909*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2921*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2924*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2927*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2939*/            OPC_EmitInteger, MVT::i32, 1, 
/*  2942*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  2945*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2948*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2951*/            OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                      // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), (and:{ *:[i32] } (xor:{ *:[i32] } i32:{ *:[i32] }:$x, -1:{ *:[i32] }), i32:{ *:[i32] }:$z)) - Complexity = 17
                      // Dst: (BFI_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$x, ?:{ *:[i32] }:$y, ?:{ *:[i32] }:$z)
/*  2975*/          0, /*End of Scope*/
/*  2976*/        /*Scope*/ 106|128,1/*234*/, /*->3212*/
/*  2978*/          OPC_MoveChild1,
/*  2979*/          OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*  2982*/          OPC_RecordChild0, // #1 = $x
/*  2983*/          OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2994*/          OPC_MoveParent,
/*  2995*/          OPC_MoveParent,
/*  2996*/          OPC_MoveChild1,
/*  2997*/          OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*  3000*/          OPC_Scope, 104, /*->3106*/ // 2 children in Scope
/*  3002*/            OPC_RecordChild0, // #2 = $y
/*  3003*/            OPC_CheckChild1Same, 1,
/*  3005*/            OPC_MoveParent,
/*  3006*/            OPC_CheckType, MVT::i32,
/*  3008*/            OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  3010*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3013*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3016*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3019*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3022*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3034*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3037*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3040*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3052*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3055*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3058*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3070*/            OPC_EmitInteger, MVT::i32, 1, 
/*  3073*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  3076*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3079*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3082*/            OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 3, 4, 1, 5, 6, 7, 2, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                      // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$z, (xor:{ *:[i32] } i32:{ *:[i32] }:$x, -1:{ *:[i32] })), (and:{ *:[i32] } i32:{ *:[i32] }:$y, i32:{ *:[i32] }:$x)) - Complexity = 17
                      // Dst: (BFI_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$x, ?:{ *:[i32] }:$y, ?:{ *:[i32] }:$z)
/*  3106*/          /*Scope*/ 104, /*->3211*/
/*  3107*/            OPC_CheckChild0Same, 1,
/*  3109*/            OPC_RecordChild1, // #2 = $y
/*  3110*/            OPC_MoveParent,
/*  3111*/            OPC_CheckType, MVT::i32,
/*  3113*/            OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  3115*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3118*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3121*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3124*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3127*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3139*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3142*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3145*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3157*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3160*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3163*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3175*/            OPC_EmitInteger, MVT::i32, 1, 
/*  3178*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  3181*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3184*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3187*/            OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 3, 4, 1, 5, 6, 7, 2, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                      // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$z, (xor:{ *:[i32] } i32:{ *:[i32] }:$x, -1:{ *:[i32] })), (and:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y)) - Complexity = 17
                      // Dst: (BFI_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$x, ?:{ *:[i32] }:$y, ?:{ *:[i32] }:$z)
/*  3211*/          0, /*End of Scope*/
/*  3212*/        0, /*End of Scope*/
/*  3213*/      /*Scope*/ 107|128,1/*235*/, /*->3450*/
/*  3215*/        OPC_MoveChild0,
/*  3216*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*  3219*/        OPC_RecordChild0, // #0 = $x
/*  3220*/        OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3231*/        OPC_MoveParent,
/*  3232*/        OPC_RecordChild1, // #1 = $z
/*  3233*/        OPC_MoveParent,
/*  3234*/        OPC_MoveChild1,
/*  3235*/        OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*  3238*/        OPC_Scope, 104, /*->3344*/ // 2 children in Scope
/*  3240*/          OPC_RecordChild0, // #2 = $y
/*  3241*/          OPC_CheckChild1Same, 0,
/*  3243*/          OPC_MoveParent,
/*  3244*/          OPC_CheckType, MVT::i32,
/*  3246*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  3248*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3251*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3254*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3257*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3260*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3272*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3275*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3278*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3290*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3293*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3296*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3308*/          OPC_EmitInteger, MVT::i32, 1, 
/*  3311*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  3314*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3317*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3320*/          OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 2, 8, 9, 10, 1, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (or:{ *:[i32] } (and:{ *:[i32] } (xor:{ *:[i32] } i32:{ *:[i32] }:$x, -1:{ *:[i32] }), i32:{ *:[i32] }:$z), (and:{ *:[i32] } i32:{ *:[i32] }:$y, i32:{ *:[i32] }:$x)) - Complexity = 17
                    // Dst: (BFI_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$x, ?:{ *:[i32] }:$y, ?:{ *:[i32] }:$z)
/*  3344*/        /*Scope*/ 104, /*->3449*/
/*  3345*/          OPC_CheckChild0Same, 0,
/*  3347*/          OPC_RecordChild1, // #2 = $y
/*  3348*/          OPC_MoveParent,
/*  3349*/          OPC_CheckType, MVT::i32,
/*  3351*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  3353*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3356*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3359*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3362*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3365*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3377*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3380*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3383*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3395*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3398*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3401*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3413*/          OPC_EmitInteger, MVT::i32, 1, 
/*  3416*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  3419*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3422*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3425*/          OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 2, 8, 9, 10, 1, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (or:{ *:[i32] } (and:{ *:[i32] } (xor:{ *:[i32] } i32:{ *:[i32] }:$x, -1:{ *:[i32] }), i32:{ *:[i32] }:$z), (and:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y)) - Complexity = 17
                    // Dst: (BFI_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$x, ?:{ *:[i32] }:$y, ?:{ *:[i32] }:$z)
/*  3449*/        0, /*End of Scope*/
/*  3450*/      /*Scope*/ 39|128,14/*1831*/, /*->5283*/
/*  3452*/        OPC_RecordChild0, // #0 = $y
/*  3453*/        OPC_Scope, 72|128,9/*1224*/, /*->4680*/ // 2 children in Scope
/*  3456*/          OPC_RecordChild1, // #1 = $x
/*  3457*/          OPC_MoveParent,
/*  3458*/          OPC_MoveChild1,
/*  3459*/          OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*  3462*/          OPC_Scope, 46|128,2/*302*/, /*->3767*/ // 4 children in Scope
/*  3465*/            OPC_RecordChild0, // #2 = $z
/*  3466*/            OPC_MoveChild1,
/*  3467*/            OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*  3470*/            OPC_CheckChild0Same, 1,
/*  3472*/            OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3483*/            OPC_MoveParent,
/*  3484*/            OPC_MoveParent,
/*  3485*/            OPC_CheckType, MVT::i64,
/*  3487*/            OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  3489*/            OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/*  3492*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3495*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3498*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  3501*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 6,  // Results = #7
/*  3509*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3512*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3515*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3527*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  3530*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 11,  // Results = #12
/*  3538*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3541*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3544*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3556*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  3559*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 16,  // Results = #17
/*  3567*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3570*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3573*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3585*/            OPC_EmitInteger, MVT::i32, 1, 
/*  3588*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  3591*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3594*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3597*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 4, 5, 7, 8, 9, 10, 12, 13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/*  3621*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  3624*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3627*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3630*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  3633*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 29,  // Results = #30
/*  3641*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3644*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3647*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3659*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  3662*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 34,  // Results = #35
/*  3670*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3673*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3676*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3688*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  3691*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 39,  // Results = #40
/*  3699*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3702*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3705*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3717*/            OPC_EmitInteger, MVT::i32, 1, 
/*  3720*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  3723*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3726*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3729*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 27, 28, 30, 31, 32, 33, 35, 36, 37, 38, 40, 41, 42, 43, 44, 45, 46, 47,  // Results = #48
/*  3753*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  3756*/            OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                          MVT::i64, 5/*#Ops*/, 3, 25, 26, 48, 49, 
                      // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$y, i64:{ *:[i64] }:$x), (and:{ *:[i64] } i64:{ *:[i64] }:$z, (xor:{ *:[i64] } i64:{ *:[i64] }:$x, -1:{ *:[i64] }))) - Complexity = 17
                      // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/*  3767*/          /*Scope*/ 46|128,2/*302*/, /*->4071*/
/*  3769*/            OPC_MoveChild0,
/*  3770*/            OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*  3773*/            OPC_CheckChild0Same, 1,
/*  3775*/            OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3786*/            OPC_MoveParent,
/*  3787*/            OPC_RecordChild1, // #2 = $z
/*  3788*/            OPC_MoveParent,
/*  3789*/            OPC_CheckType, MVT::i64,
/*  3791*/            OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  3793*/            OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/*  3796*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3799*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3802*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  3805*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 6,  // Results = #7
/*  3813*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3816*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3819*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3831*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  3834*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 11,  // Results = #12
/*  3842*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3845*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3848*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3860*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  3863*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 16,  // Results = #17
/*  3871*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3874*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3877*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3889*/            OPC_EmitInteger, MVT::i32, 1, 
/*  3892*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  3895*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3898*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3901*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 4, 5, 7, 8, 9, 10, 12, 13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/*  3925*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  3928*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3931*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3934*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  3937*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 29,  // Results = #30
/*  3945*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3948*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3951*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3963*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  3966*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 34,  // Results = #35
/*  3974*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3977*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3980*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3992*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  3995*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 39,  // Results = #40
/*  4003*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4006*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4009*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4021*/            OPC_EmitInteger, MVT::i32, 1, 
/*  4024*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  4027*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4030*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4033*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 27, 28, 30, 31, 32, 33, 35, 36, 37, 38, 40, 41, 42, 43, 44, 45, 46, 47,  // Results = #48
/*  4057*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  4060*/            OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                          MVT::i64, 5/*#Ops*/, 3, 25, 26, 48, 49, 
                      // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$y, i64:{ *:[i64] }:$x), (and:{ *:[i64] } (xor:{ *:[i64] } i64:{ *:[i64] }:$x, -1:{ *:[i64] }), i64:{ *:[i64] }:$z)) - Complexity = 17
                      // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/*  4071*/          /*Scope*/ 46|128,2/*302*/, /*->4375*/
/*  4073*/            OPC_RecordChild0, // #2 = $z
/*  4074*/            OPC_MoveChild1,
/*  4075*/            OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*  4078*/            OPC_CheckChild0Same, 0,
/*  4080*/            OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4091*/            OPC_MoveParent,
/*  4092*/            OPC_MoveParent,
/*  4093*/            OPC_CheckType, MVT::i64,
/*  4095*/            OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  4097*/            OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/*  4100*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4103*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4106*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  4109*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 6,  // Results = #7
/*  4117*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4120*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4123*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4135*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  4138*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 11,  // Results = #12
/*  4146*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4149*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4152*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4164*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  4167*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 16,  // Results = #17
/*  4175*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4178*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4181*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4193*/            OPC_EmitInteger, MVT::i32, 1, 
/*  4196*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  4199*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4202*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4205*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 4, 5, 7, 8, 9, 10, 12, 13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/*  4229*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  4232*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4235*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4238*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  4241*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 29,  // Results = #30
/*  4249*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4252*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4255*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4267*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  4270*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 34,  // Results = #35
/*  4278*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4281*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4284*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4296*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  4299*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 39,  // Results = #40
/*  4307*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4310*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4313*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4325*/            OPC_EmitInteger, MVT::i32, 1, 
/*  4328*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  4331*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4334*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4337*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 27, 28, 30, 31, 32, 33, 35, 36, 37, 38, 40, 41, 42, 43, 44, 45, 46, 47,  // Results = #48
/*  4361*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  4364*/            OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                          MVT::i64, 5/*#Ops*/, 3, 25, 26, 48, 49, 
                      // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$y), (and:{ *:[i64] } i64:{ *:[i64] }:$z, (xor:{ *:[i64] } i64:{ *:[i64] }:$x, -1:{ *:[i64] }))) - Complexity = 17
                      // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/*  4375*/          /*Scope*/ 46|128,2/*302*/, /*->4679*/
/*  4377*/            OPC_MoveChild0,
/*  4378*/            OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*  4381*/            OPC_CheckChild0Same, 0,
/*  4383*/            OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4394*/            OPC_MoveParent,
/*  4395*/            OPC_RecordChild1, // #2 = $z
/*  4396*/            OPC_MoveParent,
/*  4397*/            OPC_CheckType, MVT::i64,
/*  4399*/            OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  4401*/            OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/*  4404*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4407*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4410*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  4413*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 6,  // Results = #7
/*  4421*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4424*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4427*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4439*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  4442*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 11,  // Results = #12
/*  4450*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4453*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4456*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4468*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  4471*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 16,  // Results = #17
/*  4479*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4482*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4485*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4497*/            OPC_EmitInteger, MVT::i32, 1, 
/*  4500*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  4503*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4506*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4509*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 4, 5, 7, 8, 9, 10, 12, 13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/*  4533*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  4536*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4539*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4542*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  4545*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 29,  // Results = #30
/*  4553*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4556*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4559*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4571*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  4574*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 34,  // Results = #35
/*  4582*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4585*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4588*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4600*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  4603*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 39,  // Results = #40
/*  4611*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4614*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4617*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4629*/            OPC_EmitInteger, MVT::i32, 1, 
/*  4632*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  4635*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4638*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4641*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 27, 28, 30, 31, 32, 33, 35, 36, 37, 38, 40, 41, 42, 43, 44, 45, 46, 47,  // Results = #48
/*  4665*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  4668*/            OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                          MVT::i64, 5/*#Ops*/, 3, 25, 26, 48, 49, 
                      // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$y), (and:{ *:[i64] } (xor:{ *:[i64] } i64:{ *:[i64] }:$x, -1:{ *:[i64] }), i64:{ *:[i64] }:$z)) - Complexity = 17
                      // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/*  4679*/          0, /*End of Scope*/
/*  4680*/        /*Scope*/ 88|128,4/*600*/, /*->5282*/
/*  4682*/          OPC_MoveChild1,
/*  4683*/          OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*  4686*/          OPC_RecordChild0, // #1 = $x
/*  4687*/          OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4698*/          OPC_MoveParent,
/*  4699*/          OPC_MoveParent,
/*  4700*/          OPC_MoveChild1,
/*  4701*/          OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*  4704*/          OPC_Scope, 30|128,2/*286*/, /*->4993*/ // 2 children in Scope
/*  4707*/            OPC_RecordChild0, // #2 = $y
/*  4708*/            OPC_CheckChild1Same, 1,
/*  4710*/            OPC_MoveParent,
/*  4711*/            OPC_CheckType, MVT::i64,
/*  4713*/            OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  4715*/            OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/*  4718*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4721*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4724*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  4727*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 6,  // Results = #7
/*  4735*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4738*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4741*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4753*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  4756*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 11,  // Results = #12
/*  4764*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4767*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4770*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4782*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  4785*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 16,  // Results = #17
/*  4793*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4796*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4799*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4811*/            OPC_EmitInteger, MVT::i32, 1, 
/*  4814*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  4817*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4820*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4823*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 4, 5, 7, 8, 9, 10, 12, 13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/*  4847*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  4850*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4853*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4856*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  4859*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 29,  // Results = #30
/*  4867*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4870*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4873*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4885*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  4888*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 34,  // Results = #35
/*  4896*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4899*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4902*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4914*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  4917*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 39,  // Results = #40
/*  4925*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4928*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4931*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4943*/            OPC_EmitInteger, MVT::i32, 1, 
/*  4946*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  4949*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4952*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4955*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 27, 28, 30, 31, 32, 33, 35, 36, 37, 38, 40, 41, 42, 43, 44, 45, 46, 47,  // Results = #48
/*  4979*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  4982*/            OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                          MVT::i64, 5/*#Ops*/, 3, 25, 26, 48, 49, 
                      // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$z, (xor:{ *:[i64] } i64:{ *:[i64] }:$x, -1:{ *:[i64] })), (and:{ *:[i64] } i64:{ *:[i64] }:$y, i64:{ *:[i64] }:$x)) - Complexity = 17
                      // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/*  4993*/          /*Scope*/ 30|128,2/*286*/, /*->5281*/
/*  4995*/            OPC_CheckChild0Same, 1,
/*  4997*/            OPC_RecordChild1, // #2 = $y
/*  4998*/            OPC_MoveParent,
/*  4999*/            OPC_CheckType, MVT::i64,
/*  5001*/            OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  5003*/            OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/*  5006*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5009*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5012*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  5015*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 6,  // Results = #7
/*  5023*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5026*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5029*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5041*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  5044*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 11,  // Results = #12
/*  5052*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5055*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5058*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5070*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  5073*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 16,  // Results = #17
/*  5081*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5084*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5087*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5099*/            OPC_EmitInteger, MVT::i32, 1, 
/*  5102*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  5105*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5108*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5111*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 4, 5, 7, 8, 9, 10, 12, 13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/*  5135*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  5138*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5141*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5144*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  5147*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 29,  // Results = #30
/*  5155*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5158*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5161*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5173*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  5176*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 34,  // Results = #35
/*  5184*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5187*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5190*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5202*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  5205*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 39,  // Results = #40
/*  5213*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5216*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5219*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5231*/            OPC_EmitInteger, MVT::i32, 1, 
/*  5234*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  5237*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5240*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5243*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 27, 28, 30, 31, 32, 33, 35, 36, 37, 38, 40, 41, 42, 43, 44, 45, 46, 47,  // Results = #48
/*  5267*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  5270*/            OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                          MVT::i64, 5/*#Ops*/, 3, 25, 26, 48, 49, 
                      // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$z, (xor:{ *:[i64] } i64:{ *:[i64] }:$x, -1:{ *:[i64] })), (and:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$y)) - Complexity = 17
                      // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/*  5281*/          0, /*End of Scope*/
/*  5282*/        0, /*End of Scope*/
/*  5283*/      /*Scope*/ 89|128,4/*601*/, /*->5886*/
/*  5285*/        OPC_MoveChild0,
/*  5286*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*  5289*/        OPC_RecordChild0, // #0 = $x
/*  5290*/        OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5301*/        OPC_MoveParent,
/*  5302*/        OPC_RecordChild1, // #1 = $z
/*  5303*/        OPC_MoveParent,
/*  5304*/        OPC_MoveChild1,
/*  5305*/        OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*  5308*/        OPC_Scope, 30|128,2/*286*/, /*->5597*/ // 2 children in Scope
/*  5311*/          OPC_RecordChild0, // #2 = $y
/*  5312*/          OPC_CheckChild1Same, 0,
/*  5314*/          OPC_MoveParent,
/*  5315*/          OPC_CheckType, MVT::i64,
/*  5317*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  5319*/          OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/*  5322*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5325*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5328*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/*  5331*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 6,  // Results = #7
/*  5339*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5342*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5345*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5357*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/*  5360*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 11,  // Results = #12
/*  5368*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5371*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5374*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5386*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/*  5389*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 16,  // Results = #17
/*  5397*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5400*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5403*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5415*/          OPC_EmitInteger, MVT::i32, 1, 
/*  5418*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  5421*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5424*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5427*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 4, 5, 7, 8, 9, 10, 12, 13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/*  5451*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/*  5454*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5457*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5460*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/*  5463*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 29,  // Results = #30
/*  5471*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5474*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5477*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5489*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/*  5492*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 34,  // Results = #35
/*  5500*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5503*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5506*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5518*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/*  5521*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 39,  // Results = #40
/*  5529*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5532*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5535*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5547*/          OPC_EmitInteger, MVT::i32, 1, 
/*  5550*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  5553*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5556*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5559*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 27, 28, 30, 31, 32, 33, 35, 36, 37, 38, 40, 41, 42, 43, 44, 45, 46, 47,  // Results = #48
/*  5583*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/*  5586*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                        MVT::i64, 5/*#Ops*/, 3, 25, 26, 48, 49, 
                    // Src: (or:{ *:[i64] } (and:{ *:[i64] } (xor:{ *:[i64] } i64:{ *:[i64] }:$x, -1:{ *:[i64] }), i64:{ *:[i64] }:$z), (and:{ *:[i64] } i64:{ *:[i64] }:$y, i64:{ *:[i64] }:$x)) - Complexity = 17
                    // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/*  5597*/        /*Scope*/ 30|128,2/*286*/, /*->5885*/
/*  5599*/          OPC_CheckChild0Same, 0,
/*  5601*/          OPC_RecordChild1, // #2 = $y
/*  5602*/          OPC_MoveParent,
/*  5603*/          OPC_CheckType, MVT::i64,
/*  5605*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  5607*/          OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/*  5610*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5613*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5616*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/*  5619*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 6,  // Results = #7
/*  5627*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5630*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5633*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5645*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/*  5648*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 11,  // Results = #12
/*  5656*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5659*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5662*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5674*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/*  5677*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 16,  // Results = #17
/*  5685*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5688*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5691*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5703*/          OPC_EmitInteger, MVT::i32, 1, 
/*  5706*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  5709*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5712*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5715*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 4, 5, 7, 8, 9, 10, 12, 13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/*  5739*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/*  5742*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5745*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5748*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/*  5751*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 29,  // Results = #30
/*  5759*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5762*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5765*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5777*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/*  5780*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 34,  // Results = #35
/*  5788*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5791*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5794*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5806*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/*  5809*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 39,  // Results = #40
/*  5817*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5820*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5823*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5835*/          OPC_EmitInteger, MVT::i32, 1, 
/*  5838*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  5841*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5844*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5847*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 27, 28, 30, 31, 32, 33, 35, 36, 37, 38, 40, 41, 42, 43, 44, 45, 46, 47,  // Results = #48
/*  5871*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/*  5874*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                        MVT::i64, 5/*#Ops*/, 3, 25, 26, 48, 49, 
                    // Src: (or:{ *:[i64] } (and:{ *:[i64] } (xor:{ *:[i64] } i64:{ *:[i64] }:$x, -1:{ *:[i64] }), i64:{ *:[i64] }:$z), (and:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$y)) - Complexity = 17
                    // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/*  5885*/        0, /*End of Scope*/
/*  5886*/      /*Scope*/ 18|128,19/*2450*/, /*->8338*/
/*  5888*/        OPC_RecordChild0, // #0 = $x
/*  5889*/        OPC_Scope, 30|128,13/*1694*/, /*->7586*/ // 2 children in Scope
/*  5892*/          OPC_RecordChild1, // #1 = $z
/*  5893*/          OPC_MoveParent,
/*  5894*/          OPC_MoveChild1,
/*  5895*/          OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*  5898*/          OPC_Scope, 35|128,3/*419*/, /*->6320*/ // 4 children in Scope
/*  5901*/            OPC_RecordChild0, // #2 = $y
/*  5902*/            OPC_MoveChild1,
/*  5903*/            OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*  5906*/            OPC_Scope, 76|128,1/*204*/, /*->6113*/ // 2 children in Scope
/*  5909*/              OPC_CheckChild0Same, 0,
/*  5911*/              OPC_CheckChild1Same, 1,
/*  5913*/              OPC_MoveParent,
/*  5914*/              OPC_MoveParent,
/*  5915*/              OPC_CheckType, MVT::i32,
/*  5917*/              OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  5919*/              OPC_EmitInteger, MVT::i32, 0, 
/*  5922*/              OPC_EmitInteger, MVT::i32, 0, 
/*  5925*/              OPC_EmitInteger, MVT::i32, 0, 
/*  5928*/              OPC_EmitInteger, MVT::i32, 0, 
/*  5931*/              OPC_EmitInteger, MVT::i32, 1, 
/*  5934*/              OPC_EmitInteger, MVT::i32, 0, 
/*  5937*/              OPC_EmitInteger, MVT::i32, 0, 
/*  5940*/              OPC_EmitInteger, MVT::i32, 0, 
/*  5943*/              OPC_EmitInteger, MVT::i32, 0, 
/*  5946*/              OPC_EmitInteger, MVT::i32, 0, 
/*  5949*/              OPC_EmitInteger, MVT::i32, 0, 
/*  5952*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5964*/              OPC_EmitInteger, MVT::i32, 0, 
/*  5967*/              OPC_EmitInteger, MVT::i32, 0, 
/*  5970*/              OPC_EmitInteger, MVT::i32, 0, 
/*  5973*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5985*/              OPC_EmitInteger, MVT::i32, 1, 
/*  5988*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  5991*/              OPC_EmitInteger, MVT::i32, 0, 
/*  5994*/              OPC_EmitInteger, MVT::i32, 0, 
/*  5997*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 0, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*  6023*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6026*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6029*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6041*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6044*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6047*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6059*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6062*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6065*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6077*/              OPC_EmitInteger, MVT::i32, 1, 
/*  6080*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  6083*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6086*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6089*/              OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 1, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                        // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z), (and:{ *:[i32] } i32:{ *:[i32] }:$y, (or:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z))) - Complexity = 12
                        // Dst: (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
/*  6113*/            /*Scope*/ 76|128,1/*204*/, /*->6319*/
/*  6115*/              OPC_CheckChild0Same, 1,
/*  6117*/              OPC_CheckChild1Same, 0,
/*  6119*/              OPC_MoveParent,
/*  6120*/              OPC_MoveParent,
/*  6121*/              OPC_CheckType, MVT::i32,
/*  6123*/              OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  6125*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6128*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6131*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6134*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6137*/              OPC_EmitInteger, MVT::i32, 1, 
/*  6140*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6143*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6146*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6149*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6152*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6155*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6158*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6170*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6173*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6176*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6179*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6191*/              OPC_EmitInteger, MVT::i32, 1, 
/*  6194*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  6197*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6200*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6203*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 0, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*  6229*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6232*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6235*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6247*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6250*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6253*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6265*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6268*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6271*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6283*/              OPC_EmitInteger, MVT::i32, 1, 
/*  6286*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  6289*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6292*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6295*/              OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 1, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                        // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z), (and:{ *:[i32] } i32:{ *:[i32] }:$y, (or:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x))) - Complexity = 12
                        // Dst: (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
/*  6319*/            0, /*End of Scope*/
/*  6320*/          /*Scope*/ 36|128,3/*420*/, /*->6742*/
/*  6322*/            OPC_MoveChild0,
/*  6323*/            OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*  6326*/            OPC_Scope, 77|128,1/*205*/, /*->6534*/ // 2 children in Scope
/*  6329*/              OPC_CheckChild0Same, 0,
/*  6331*/              OPC_CheckChild1Same, 1,
/*  6333*/              OPC_MoveParent,
/*  6334*/              OPC_RecordChild1, // #2 = $y
/*  6335*/              OPC_MoveParent,
/*  6336*/              OPC_CheckType, MVT::i32,
/*  6338*/              OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  6340*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6343*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6346*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6349*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6352*/              OPC_EmitInteger, MVT::i32, 1, 
/*  6355*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6358*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6361*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6364*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6367*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6370*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6373*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6385*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6388*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6391*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6394*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6406*/              OPC_EmitInteger, MVT::i32, 1, 
/*  6409*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  6412*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6415*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6418*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 0, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*  6444*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6447*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6450*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6462*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6465*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6468*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6480*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6483*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6486*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6498*/              OPC_EmitInteger, MVT::i32, 1, 
/*  6501*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  6504*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6507*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6510*/              OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 1, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                        // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z), (and:{ *:[i32] } (or:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z), i32:{ *:[i32] }:$y)) - Complexity = 12
                        // Dst: (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
/*  6534*/            /*Scope*/ 77|128,1/*205*/, /*->6741*/
/*  6536*/              OPC_CheckChild0Same, 1,
/*  6538*/              OPC_CheckChild1Same, 0,
/*  6540*/              OPC_MoveParent,
/*  6541*/              OPC_RecordChild1, // #2 = $y
/*  6542*/              OPC_MoveParent,
/*  6543*/              OPC_CheckType, MVT::i32,
/*  6545*/              OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  6547*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6550*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6553*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6556*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6559*/              OPC_EmitInteger, MVT::i32, 1, 
/*  6562*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6565*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6568*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6571*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6574*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6577*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6580*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6592*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6595*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6598*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6601*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6613*/              OPC_EmitInteger, MVT::i32, 1, 
/*  6616*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  6619*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6622*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6625*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 0, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*  6651*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6654*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6657*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6669*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6672*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6675*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6687*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6690*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6693*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6705*/              OPC_EmitInteger, MVT::i32, 1, 
/*  6708*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  6711*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6714*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6717*/              OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 1, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                        // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z), (and:{ *:[i32] } (or:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x), i32:{ *:[i32] }:$y)) - Complexity = 12
                        // Dst: (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
/*  6741*/            0, /*End of Scope*/
/*  6742*/          /*Scope*/ 35|128,3/*419*/, /*->7163*/
/*  6744*/            OPC_RecordChild0, // #2 = $y
/*  6745*/            OPC_MoveChild1,
/*  6746*/            OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*  6749*/            OPC_Scope, 76|128,1/*204*/, /*->6956*/ // 2 children in Scope
/*  6752*/              OPC_CheckChild0Same, 1,
/*  6754*/              OPC_CheckChild1Same, 0,
/*  6756*/              OPC_MoveParent,
/*  6757*/              OPC_MoveParent,
/*  6758*/              OPC_CheckType, MVT::i32,
/*  6760*/              OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  6762*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6765*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6768*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6771*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6774*/              OPC_EmitInteger, MVT::i32, 1, 
/*  6777*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6780*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6783*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6786*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6789*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6792*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6795*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6807*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6810*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6813*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6816*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6828*/              OPC_EmitInteger, MVT::i32, 1, 
/*  6831*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  6834*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6837*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6840*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 1, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*  6866*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6869*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6872*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6884*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6887*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6890*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6902*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6905*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6908*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6920*/              OPC_EmitInteger, MVT::i32, 1, 
/*  6923*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  6926*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6929*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6932*/              OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 0, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                        // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x), (and:{ *:[i32] } i32:{ *:[i32] }:$y, (or:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z))) - Complexity = 12
                        // Dst: (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
/*  6956*/            /*Scope*/ 76|128,1/*204*/, /*->7162*/
/*  6958*/              OPC_CheckChild0Same, 0,
/*  6960*/              OPC_CheckChild1Same, 1,
/*  6962*/              OPC_MoveParent,
/*  6963*/              OPC_MoveParent,
/*  6964*/              OPC_CheckType, MVT::i32,
/*  6966*/              OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  6968*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6971*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6974*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6977*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6980*/              OPC_EmitInteger, MVT::i32, 1, 
/*  6983*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6986*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6989*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6992*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6995*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6998*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7001*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7013*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7016*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7019*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7022*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7034*/              OPC_EmitInteger, MVT::i32, 1, 
/*  7037*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  7040*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7043*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7046*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 1, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*  7072*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7075*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7078*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7090*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7093*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7096*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7108*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7111*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7114*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7126*/              OPC_EmitInteger, MVT::i32, 1, 
/*  7129*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  7132*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7135*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7138*/              OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 0, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                        // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x), (and:{ *:[i32] } i32:{ *:[i32] }:$y, (or:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x))) - Complexity = 12
                        // Dst: (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
/*  7162*/            0, /*End of Scope*/
/*  7163*/          /*Scope*/ 36|128,3/*420*/, /*->7585*/
/*  7165*/            OPC_MoveChild0,
/*  7166*/            OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*  7169*/            OPC_Scope, 77|128,1/*205*/, /*->7377*/ // 2 children in Scope
/*  7172*/              OPC_CheckChild0Same, 1,
/*  7174*/              OPC_CheckChild1Same, 0,
/*  7176*/              OPC_MoveParent,
/*  7177*/              OPC_RecordChild1, // #2 = $y
/*  7178*/              OPC_MoveParent,
/*  7179*/              OPC_CheckType, MVT::i32,
/*  7181*/              OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  7183*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7186*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7189*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7192*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7195*/              OPC_EmitInteger, MVT::i32, 1, 
/*  7198*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7201*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7204*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7207*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7210*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7213*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7216*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7228*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7231*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7234*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7237*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7249*/              OPC_EmitInteger, MVT::i32, 1, 
/*  7252*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  7255*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7258*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7261*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 1, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*  7287*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7290*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7293*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7305*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7308*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7311*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7323*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7326*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7329*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7341*/              OPC_EmitInteger, MVT::i32, 1, 
/*  7344*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  7347*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7350*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7353*/              OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 0, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                        // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x), (and:{ *:[i32] } (or:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z), i32:{ *:[i32] }:$y)) - Complexity = 12
                        // Dst: (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
/*  7377*/            /*Scope*/ 77|128,1/*205*/, /*->7584*/
/*  7379*/              OPC_CheckChild0Same, 0,
/*  7381*/              OPC_CheckChild1Same, 1,
/*  7383*/              OPC_MoveParent,
/*  7384*/              OPC_RecordChild1, // #2 = $y
/*  7385*/              OPC_MoveParent,
/*  7386*/              OPC_CheckType, MVT::i32,
/*  7388*/              OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  7390*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7393*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7396*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7399*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7402*/              OPC_EmitInteger, MVT::i32, 1, 
/*  7405*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7408*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7411*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7414*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7417*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7420*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7423*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7435*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7438*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7441*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7444*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7456*/              OPC_EmitInteger, MVT::i32, 1, 
/*  7459*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  7462*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7465*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7468*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 1, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*  7494*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7497*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7500*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7512*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7515*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7518*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7530*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7533*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7536*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7548*/              OPC_EmitInteger, MVT::i32, 1, 
/*  7551*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  7554*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7557*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7560*/              OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 0, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                        // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x), (and:{ *:[i32] } (or:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x), i32:{ *:[i32] }:$y)) - Complexity = 12
                        // Dst: (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
/*  7584*/            0, /*End of Scope*/
/*  7585*/          0, /*End of Scope*/
/*  7586*/        /*Scope*/ 109|128,5/*749*/, /*->8337*/
/*  7588*/          OPC_MoveChild1,
/*  7589*/          OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*  7592*/          OPC_RecordChild0, // #1 = $x
/*  7593*/          OPC_RecordChild1, // #2 = $z
/*  7594*/          OPC_MoveParent,
/*  7595*/          OPC_MoveParent,
/*  7596*/          OPC_MoveChild1,
/*  7597*/          OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*  7600*/          OPC_Scope, 75|128,1/*203*/, /*->7806*/ // 3 children in Scope
/*  7603*/            OPC_CheckChild0Same, 1,
/*  7605*/            OPC_CheckChild1Same, 2,
/*  7607*/            OPC_MoveParent,
/*  7608*/            OPC_CheckType, MVT::i32,
/*  7610*/            OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  7612*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7615*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7618*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7621*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7624*/            OPC_EmitInteger, MVT::i32, 1, 
/*  7627*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7630*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7633*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7636*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7639*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7642*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7645*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7657*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7660*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7663*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7666*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7678*/            OPC_EmitInteger, MVT::i32, 1, 
/*  7681*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  7684*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7687*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7690*/            OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                          MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 1, 11, 12, 13, 14, 0, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*  7716*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7719*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7722*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7734*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7737*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7740*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7752*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7755*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7758*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7770*/            OPC_EmitInteger, MVT::i32, 1, 
/*  7773*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  7776*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7779*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7782*/            OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 2, 27, 28, 29, 0, 30, 31, 32, 33, 34, 35, 36, 
                      // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$y, (or:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z)), (and:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z)) - Complexity = 12
                      // Dst: (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
/*  7806*/          /*Scope*/ 67|128,2/*323*/, /*->8131*/
/*  7808*/            OPC_CheckChild0Same, 2,
/*  7810*/            OPC_CheckChild1Same, 1,
/*  7812*/            OPC_MoveParent,
/*  7813*/            OPC_CheckType, MVT::i32,
/*  7815*/            OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  7817*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7820*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7823*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7826*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7829*/            OPC_EmitInteger, MVT::i32, 1, 
/*  7832*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7835*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7838*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7841*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7844*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7847*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7850*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7862*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7865*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7868*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7871*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7883*/            OPC_EmitInteger, MVT::i32, 1, 
/*  7886*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  7889*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7892*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7895*/            OPC_Scope, 116, /*->8013*/ // 2 children in Scope
/*  7897*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 1, 11, 12, 13, 14, 0, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*  7923*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7926*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7929*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7941*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7944*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7947*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7959*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7962*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7965*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7977*/              OPC_EmitInteger, MVT::i32, 1, 
/*  7980*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  7983*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7986*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7989*/              OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 2, 27, 28, 29, 0, 30, 31, 32, 33, 34, 35, 36, 
                        // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$y, (or:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z)), (and:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x)) - Complexity = 12
                        // Dst: (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
/*  8013*/            /*Scope*/ 116, /*->8130*/
/*  8014*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 2, 11, 12, 13, 14, 0, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*  8040*/              OPC_EmitInteger, MVT::i32, 0, 
/*  8043*/              OPC_EmitInteger, MVT::i32, 0, 
/*  8046*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8058*/              OPC_EmitInteger, MVT::i32, 0, 
/*  8061*/              OPC_EmitInteger, MVT::i32, 0, 
/*  8064*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8076*/              OPC_EmitInteger, MVT::i32, 0, 
/*  8079*/              OPC_EmitInteger, MVT::i32, 0, 
/*  8082*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8094*/              OPC_EmitInteger, MVT::i32, 1, 
/*  8097*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  8100*/              OPC_EmitInteger, MVT::i32, 0, 
/*  8103*/              OPC_EmitInteger, MVT::i32, 0, 
/*  8106*/              OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 1, 27, 28, 29, 0, 30, 31, 32, 33, 34, 35, 36, 
                        // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$y, (or:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x)), (and:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z)) - Complexity = 12
                        // Dst: (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
/*  8130*/            0, /*End of Scope*/
/*  8131*/          /*Scope*/ 75|128,1/*203*/, /*->8336*/
/*  8133*/            OPC_CheckChild0Same, 1,
/*  8135*/            OPC_CheckChild1Same, 2,
/*  8137*/            OPC_MoveParent,
/*  8138*/            OPC_CheckType, MVT::i32,
/*  8140*/            OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  8142*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8145*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8148*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8151*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8154*/            OPC_EmitInteger, MVT::i32, 1, 
/*  8157*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8160*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8163*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8166*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8169*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8172*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8175*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8187*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8190*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8193*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8196*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8208*/            OPC_EmitInteger, MVT::i32, 1, 
/*  8211*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  8214*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8217*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8220*/            OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                          MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 2, 11, 12, 13, 14, 0, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*  8246*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8249*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8252*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8264*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8267*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8270*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8282*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8285*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8288*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8300*/            OPC_EmitInteger, MVT::i32, 1, 
/*  8303*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  8306*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8309*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8312*/            OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 1, 27, 28, 29, 0, 30, 31, 32, 33, 34, 35, 36, 
                      // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$y, (or:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x)), (and:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x)) - Complexity = 12
                      // Dst: (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
/*  8336*/          0, /*End of Scope*/
/*  8337*/        0, /*End of Scope*/
/*  8338*/      /*Scope*/ 110|128,5/*750*/, /*->9090*/
/*  8340*/        OPC_MoveChild0,
/*  8341*/        OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*  8344*/        OPC_RecordChild0, // #0 = $x
/*  8345*/        OPC_RecordChild1, // #1 = $z
/*  8346*/        OPC_MoveParent,
/*  8347*/        OPC_RecordChild1, // #2 = $y
/*  8348*/        OPC_MoveParent,
/*  8349*/        OPC_MoveChild1,
/*  8350*/        OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*  8353*/        OPC_Scope, 75|128,1/*203*/, /*->8559*/ // 3 children in Scope
/*  8356*/          OPC_CheckChild0Same, 0,
/*  8358*/          OPC_CheckChild1Same, 1,
/*  8360*/          OPC_MoveParent,
/*  8361*/          OPC_CheckType, MVT::i32,
/*  8363*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  8365*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8368*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8371*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8374*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8377*/          OPC_EmitInteger, MVT::i32, 1, 
/*  8380*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8383*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8386*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8389*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8392*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8395*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8398*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8410*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8413*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8416*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8419*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8431*/          OPC_EmitInteger, MVT::i32, 1, 
/*  8434*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  8437*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8440*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8443*/          OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                        MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 0, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*  8469*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8472*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8475*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8487*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8490*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8493*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8505*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8508*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8511*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8523*/          OPC_EmitInteger, MVT::i32, 1, 
/*  8526*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  8529*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8532*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8535*/          OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 1, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                    // Src: (or:{ *:[i32] } (and:{ *:[i32] } (or:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z), i32:{ *:[i32] }:$y), (and:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z)) - Complexity = 12
                    // Dst: (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
/*  8559*/        /*Scope*/ 67|128,2/*323*/, /*->8884*/
/*  8561*/          OPC_CheckChild0Same, 1,
/*  8563*/          OPC_CheckChild1Same, 0,
/*  8565*/          OPC_MoveParent,
/*  8566*/          OPC_CheckType, MVT::i32,
/*  8568*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  8570*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8573*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8576*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8579*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8582*/          OPC_EmitInteger, MVT::i32, 1, 
/*  8585*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8588*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8591*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8594*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8597*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8600*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8603*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8615*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8618*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8621*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8624*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8636*/          OPC_EmitInteger, MVT::i32, 1, 
/*  8639*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  8642*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8645*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8648*/          OPC_Scope, 116, /*->8766*/ // 2 children in Scope
/*  8650*/            OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                          MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 0, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*  8676*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8679*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8682*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8694*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8697*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8700*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8712*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8715*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8718*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8730*/            OPC_EmitInteger, MVT::i32, 1, 
/*  8733*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  8736*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8739*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8742*/            OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 1, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                      // Src: (or:{ *:[i32] } (and:{ *:[i32] } (or:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z), i32:{ *:[i32] }:$y), (and:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x)) - Complexity = 12
                      // Dst: (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
/*  8766*/          /*Scope*/ 116, /*->8883*/
/*  8767*/            OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                          MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 1, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*  8793*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8796*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8799*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8811*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8814*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8817*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8829*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8832*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8835*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8847*/            OPC_EmitInteger, MVT::i32, 1, 
/*  8850*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  8853*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8856*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8859*/            OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 0, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                      // Src: (or:{ *:[i32] } (and:{ *:[i32] } (or:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x), i32:{ *:[i32] }:$y), (and:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z)) - Complexity = 12
                      // Dst: (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
/*  8883*/          0, /*End of Scope*/
/*  8884*/        /*Scope*/ 75|128,1/*203*/, /*->9089*/
/*  8886*/          OPC_CheckChild0Same, 0,
/*  8888*/          OPC_CheckChild1Same, 1,
/*  8890*/          OPC_MoveParent,
/*  8891*/          OPC_CheckType, MVT::i32,
/*  8893*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  8895*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8898*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8901*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8904*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8907*/          OPC_EmitInteger, MVT::i32, 1, 
/*  8910*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8913*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8916*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8919*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8922*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8925*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8928*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8940*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8943*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8946*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8949*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8961*/          OPC_EmitInteger, MVT::i32, 1, 
/*  8964*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  8967*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8970*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8973*/          OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                        MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 1, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*  8999*/          OPC_EmitInteger, MVT::i32, 0, 
/*  9002*/          OPC_EmitInteger, MVT::i32, 0, 
/*  9005*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9017*/          OPC_EmitInteger, MVT::i32, 0, 
/*  9020*/          OPC_EmitInteger, MVT::i32, 0, 
/*  9023*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9035*/          OPC_EmitInteger, MVT::i32, 0, 
/*  9038*/          OPC_EmitInteger, MVT::i32, 0, 
/*  9041*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9053*/          OPC_EmitInteger, MVT::i32, 1, 
/*  9056*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  9059*/          OPC_EmitInteger, MVT::i32, 0, 
/*  9062*/          OPC_EmitInteger, MVT::i32, 0, 
/*  9065*/          OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 0, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                    // Src: (or:{ *:[i32] } (and:{ *:[i32] } (or:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x), i32:{ *:[i32] }:$y), (and:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x)) - Complexity = 12
                    // Dst: (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
/*  9089*/        0, /*End of Scope*/
/*  9090*/      /*Scope*/ 108|128,47/*6124*/, /*->15216*/
/*  9092*/        OPC_RecordChild0, // #0 = $x
/*  9093*/        OPC_Scope, 14|128,32/*4110*/, /*->13206*/ // 2 children in Scope
/*  9096*/          OPC_RecordChild1, // #1 = $z
/*  9097*/          OPC_MoveParent,
/*  9098*/          OPC_MoveChild1,
/*  9099*/          OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*  9102*/          OPC_Scope, 127|128,7/*1023*/, /*->10128*/ // 4 children in Scope
/*  9105*/            OPC_RecordChild0, // #2 = $y
/*  9106*/            OPC_MoveChild1,
/*  9107*/            OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*  9110*/            OPC_Scope, 122|128,3/*506*/, /*->9619*/ // 2 children in Scope
/*  9113*/              OPC_CheckChild0Same, 0,
/*  9115*/              OPC_CheckChild1Same, 1,
/*  9117*/              OPC_MoveParent,
/*  9118*/              OPC_MoveParent,
/*  9119*/              OPC_CheckType, MVT::i64,
/*  9121*/              OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  9123*/              OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/*  9126*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9129*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9132*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9135*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9138*/              OPC_EmitInteger, MVT::i32, 1, 
/*  9141*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9144*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9147*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9150*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/*  9153*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 12,  // Results = #13
/*  9161*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9164*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9167*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9170*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9182*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/*  9185*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 18,  // Results = #19
/*  9193*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9196*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9199*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9202*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9214*/              OPC_EmitInteger, MVT::i32, 1, 
/*  9217*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  9220*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9223*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9226*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/*  9252*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9255*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9258*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9270*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/*  9273*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 32,  // Results = #33
/*  9281*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9284*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9287*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9299*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/*  9302*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 37,  // Results = #38
/*  9310*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9313*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9316*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9328*/              OPC_EmitInteger, MVT::i32, 1, 
/*  9331*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  9334*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9337*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9340*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 4, 5, 28, 29, 30, 31, 33, 34, 35, 36, 38, 39, 40, 41, 42, 43, 44, 45,  // Results = #46
/*  9364*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/*  9367*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9370*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9373*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9376*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9379*/              OPC_EmitInteger, MVT::i32, 1, 
/*  9382*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9385*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9388*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9391*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/*  9394*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 56,  // Results = #57
/*  9402*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9405*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9408*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9411*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9423*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/*  9426*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 62,  // Results = #63
/*  9434*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9437*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9440*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9443*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9455*/              OPC_EmitInteger, MVT::i32, 1, 
/*  9458*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  9461*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9464*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9467*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 50, 51, 52, 53, 54, 55, 57, 58, 59, 60, 61, 63, 64, 65, 66, 67, 68, 69, 70, 71,  // Results = #72
/*  9493*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9496*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9499*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9511*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/*  9514*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 76,  // Results = #77
/*  9522*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9525*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9528*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9540*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/*  9543*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 81,  // Results = #82
/*  9551*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9554*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9557*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9569*/              OPC_EmitInteger, MVT::i32, 1, 
/*  9572*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  9575*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9578*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9581*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 48, 49, 72, 73, 74, 75, 77, 78, 79, 80, 82, 83, 84, 85, 86, 87, 88, 89,  // Results = #90
/*  9605*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/*  9608*/              OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                            MVT::i64, 5/*#Ops*/, 3, 46, 47, 90, 91, 
                        // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$z), (and:{ *:[i64] } i64:{ *:[i64] }:$y, (or:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$z))) - Complexity = 12
                        // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/*  9619*/            /*Scope*/ 122|128,3/*506*/, /*->10127*/
/*  9621*/              OPC_CheckChild0Same, 1,
/*  9623*/              OPC_CheckChild1Same, 0,
/*  9625*/              OPC_MoveParent,
/*  9626*/              OPC_MoveParent,
/*  9627*/              OPC_CheckType, MVT::i64,
/*  9629*/              OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  9631*/              OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/*  9634*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9637*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9640*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9643*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9646*/              OPC_EmitInteger, MVT::i32, 1, 
/*  9649*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9652*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9655*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9658*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/*  9661*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 12,  // Results = #13
/*  9669*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9672*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9675*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9678*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9690*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/*  9693*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 18,  // Results = #19
/*  9701*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9704*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9707*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9710*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9722*/              OPC_EmitInteger, MVT::i32, 1, 
/*  9725*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  9728*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9731*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9734*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/*  9760*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9763*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9766*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9778*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/*  9781*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 32,  // Results = #33
/*  9789*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9792*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9795*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9807*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/*  9810*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 37,  // Results = #38
/*  9818*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9821*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9824*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9836*/              OPC_EmitInteger, MVT::i32, 1, 
/*  9839*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  9842*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9845*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9848*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 4, 5, 28, 29, 30, 31, 33, 34, 35, 36, 38, 39, 40, 41, 42, 43, 44, 45,  // Results = #46
/*  9872*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/*  9875*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9878*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9881*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9884*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9887*/              OPC_EmitInteger, MVT::i32, 1, 
/*  9890*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9893*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9896*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9899*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/*  9902*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 56,  // Results = #57
/*  9910*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9913*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9916*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9919*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9931*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/*  9934*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 62,  // Results = #63
/*  9942*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9945*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9948*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9951*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9963*/              OPC_EmitInteger, MVT::i32, 1, 
/*  9966*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  9969*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9972*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9975*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 50, 51, 52, 53, 54, 55, 57, 58, 59, 60, 61, 63, 64, 65, 66, 67, 68, 69, 70, 71,  // Results = #72
/* 10001*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10004*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10007*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10019*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 10022*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 76,  // Results = #77
/* 10030*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10033*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10036*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10048*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 10051*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 81,  // Results = #82
/* 10059*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10062*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10065*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10077*/              OPC_EmitInteger, MVT::i32, 1, 
/* 10080*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 10083*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10086*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10089*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 48, 49, 72, 73, 74, 75, 77, 78, 79, 80, 82, 83, 84, 85, 86, 87, 88, 89,  // Results = #90
/* 10113*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 10116*/              OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                            MVT::i64, 5/*#Ops*/, 3, 46, 47, 90, 91, 
                        // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$z), (and:{ *:[i64] } i64:{ *:[i64] }:$y, (or:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$x))) - Complexity = 12
                        // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 10127*/            0, /*End of Scope*/
/* 10128*/          /*Scope*/ 0|128,8/*1024*/, /*->11154*/
/* 10130*/            OPC_MoveChild0,
/* 10131*/            OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/* 10134*/            OPC_Scope, 123|128,3/*507*/, /*->10644*/ // 2 children in Scope
/* 10137*/              OPC_CheckChild0Same, 0,
/* 10139*/              OPC_CheckChild1Same, 1,
/* 10141*/              OPC_MoveParent,
/* 10142*/              OPC_RecordChild1, // #2 = $y
/* 10143*/              OPC_MoveParent,
/* 10144*/              OPC_CheckType, MVT::i64,
/* 10146*/              OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 10148*/              OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 10151*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10154*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10157*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10160*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10163*/              OPC_EmitInteger, MVT::i32, 1, 
/* 10166*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10169*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10172*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10175*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 10178*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 12,  // Results = #13
/* 10186*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10189*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10192*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10195*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10207*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 10210*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 18,  // Results = #19
/* 10218*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10221*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10224*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10227*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10239*/              OPC_EmitInteger, MVT::i32, 1, 
/* 10242*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 10245*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10248*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10251*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/* 10277*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10280*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10283*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10295*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 10298*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 32,  // Results = #33
/* 10306*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10309*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10312*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10324*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 10327*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 37,  // Results = #38
/* 10335*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10338*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10341*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10353*/              OPC_EmitInteger, MVT::i32, 1, 
/* 10356*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 10359*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10362*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10365*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 4, 5, 28, 29, 30, 31, 33, 34, 35, 36, 38, 39, 40, 41, 42, 43, 44, 45,  // Results = #46
/* 10389*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 10392*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10395*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10398*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10401*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10404*/              OPC_EmitInteger, MVT::i32, 1, 
/* 10407*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10410*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10413*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10416*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 10419*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 56,  // Results = #57
/* 10427*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10430*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10433*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10436*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10448*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 10451*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 62,  // Results = #63
/* 10459*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10462*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10465*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10468*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10480*/              OPC_EmitInteger, MVT::i32, 1, 
/* 10483*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 10486*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10489*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10492*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 50, 51, 52, 53, 54, 55, 57, 58, 59, 60, 61, 63, 64, 65, 66, 67, 68, 69, 70, 71,  // Results = #72
/* 10518*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10521*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10524*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10536*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 10539*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 76,  // Results = #77
/* 10547*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10550*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10553*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10565*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 10568*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 81,  // Results = #82
/* 10576*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10579*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10582*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10594*/              OPC_EmitInteger, MVT::i32, 1, 
/* 10597*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 10600*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10603*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10606*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 48, 49, 72, 73, 74, 75, 77, 78, 79, 80, 82, 83, 84, 85, 86, 87, 88, 89,  // Results = #90
/* 10630*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 10633*/              OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                            MVT::i64, 5/*#Ops*/, 3, 46, 47, 90, 91, 
                        // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$z), (and:{ *:[i64] } (or:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$z), i64:{ *:[i64] }:$y)) - Complexity = 12
                        // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 10644*/            /*Scope*/ 123|128,3/*507*/, /*->11153*/
/* 10646*/              OPC_CheckChild0Same, 1,
/* 10648*/              OPC_CheckChild1Same, 0,
/* 10650*/              OPC_MoveParent,
/* 10651*/              OPC_RecordChild1, // #2 = $y
/* 10652*/              OPC_MoveParent,
/* 10653*/              OPC_CheckType, MVT::i64,
/* 10655*/              OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 10657*/              OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 10660*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10663*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10666*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10669*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10672*/              OPC_EmitInteger, MVT::i32, 1, 
/* 10675*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10678*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10681*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10684*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 10687*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 12,  // Results = #13
/* 10695*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10698*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10701*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10704*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10716*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 10719*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 18,  // Results = #19
/* 10727*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10730*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10733*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10736*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10748*/              OPC_EmitInteger, MVT::i32, 1, 
/* 10751*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 10754*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10757*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10760*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/* 10786*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10789*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10792*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10804*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 10807*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 32,  // Results = #33
/* 10815*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10818*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10821*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10833*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 10836*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 37,  // Results = #38
/* 10844*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10847*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10850*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10862*/              OPC_EmitInteger, MVT::i32, 1, 
/* 10865*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 10868*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10871*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10874*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 4, 5, 28, 29, 30, 31, 33, 34, 35, 36, 38, 39, 40, 41, 42, 43, 44, 45,  // Results = #46
/* 10898*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 10901*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10904*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10907*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10910*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10913*/              OPC_EmitInteger, MVT::i32, 1, 
/* 10916*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10919*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10922*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10925*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 10928*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 56,  // Results = #57
/* 10936*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10939*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10942*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10945*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10957*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 10960*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 62,  // Results = #63
/* 10968*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10971*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10974*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10977*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10989*/              OPC_EmitInteger, MVT::i32, 1, 
/* 10992*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 10995*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10998*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11001*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 50, 51, 52, 53, 54, 55, 57, 58, 59, 60, 61, 63, 64, 65, 66, 67, 68, 69, 70, 71,  // Results = #72
/* 11027*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11030*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11033*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11045*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 11048*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 76,  // Results = #77
/* 11056*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11059*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11062*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11074*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 11077*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 81,  // Results = #82
/* 11085*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11088*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11091*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11103*/              OPC_EmitInteger, MVT::i32, 1, 
/* 11106*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 11109*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11112*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11115*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 48, 49, 72, 73, 74, 75, 77, 78, 79, 80, 82, 83, 84, 85, 86, 87, 88, 89,  // Results = #90
/* 11139*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 11142*/              OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                            MVT::i64, 5/*#Ops*/, 3, 46, 47, 90, 91, 
                        // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$z), (and:{ *:[i64] } (or:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$x), i64:{ *:[i64] }:$y)) - Complexity = 12
                        // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 11153*/            0, /*End of Scope*/
/* 11154*/          /*Scope*/ 127|128,7/*1023*/, /*->12179*/
/* 11156*/            OPC_RecordChild0, // #2 = $y
/* 11157*/            OPC_MoveChild1,
/* 11158*/            OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/* 11161*/            OPC_Scope, 122|128,3/*506*/, /*->11670*/ // 2 children in Scope
/* 11164*/              OPC_CheckChild0Same, 1,
/* 11166*/              OPC_CheckChild1Same, 0,
/* 11168*/              OPC_MoveParent,
/* 11169*/              OPC_MoveParent,
/* 11170*/              OPC_CheckType, MVT::i64,
/* 11172*/              OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 11174*/              OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 11177*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11180*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11183*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11186*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11189*/              OPC_EmitInteger, MVT::i32, 1, 
/* 11192*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11195*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11198*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11201*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 11204*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 12,  // Results = #13
/* 11212*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11215*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11218*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11221*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11233*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 11236*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 18,  // Results = #19
/* 11244*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11247*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11250*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11253*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11265*/              OPC_EmitInteger, MVT::i32, 1, 
/* 11268*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 11271*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11274*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11277*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/* 11303*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11306*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11309*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11321*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 11324*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 32,  // Results = #33
/* 11332*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11335*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11338*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11350*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 11353*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 37,  // Results = #38
/* 11361*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11364*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11367*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11379*/              OPC_EmitInteger, MVT::i32, 1, 
/* 11382*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 11385*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11388*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11391*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 4, 5, 28, 29, 30, 31, 33, 34, 35, 36, 38, 39, 40, 41, 42, 43, 44, 45,  // Results = #46
/* 11415*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 11418*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11421*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11424*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11427*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11430*/              OPC_EmitInteger, MVT::i32, 1, 
/* 11433*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11436*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11439*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11442*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 11445*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 56,  // Results = #57
/* 11453*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11456*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11459*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11462*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11474*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 11477*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 62,  // Results = #63
/* 11485*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11488*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11491*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11494*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11506*/              OPC_EmitInteger, MVT::i32, 1, 
/* 11509*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 11512*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11515*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11518*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 50, 51, 52, 53, 54, 55, 57, 58, 59, 60, 61, 63, 64, 65, 66, 67, 68, 69, 70, 71,  // Results = #72
/* 11544*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11547*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11550*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11562*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 11565*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 76,  // Results = #77
/* 11573*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11576*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11579*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11591*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 11594*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 81,  // Results = #82
/* 11602*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11605*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11608*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11620*/              OPC_EmitInteger, MVT::i32, 1, 
/* 11623*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 11626*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11629*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11632*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 48, 49, 72, 73, 74, 75, 77, 78, 79, 80, 82, 83, 84, 85, 86, 87, 88, 89,  // Results = #90
/* 11656*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 11659*/              OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                            MVT::i64, 5/*#Ops*/, 3, 46, 47, 90, 91, 
                        // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$x), (and:{ *:[i64] } i64:{ *:[i64] }:$y, (or:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$z))) - Complexity = 12
                        // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 11670*/            /*Scope*/ 122|128,3/*506*/, /*->12178*/
/* 11672*/              OPC_CheckChild0Same, 0,
/* 11674*/              OPC_CheckChild1Same, 1,
/* 11676*/              OPC_MoveParent,
/* 11677*/              OPC_MoveParent,
/* 11678*/              OPC_CheckType, MVT::i64,
/* 11680*/              OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 11682*/              OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 11685*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11688*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11691*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11694*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11697*/              OPC_EmitInteger, MVT::i32, 1, 
/* 11700*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11703*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11706*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11709*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 11712*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 12,  // Results = #13
/* 11720*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11723*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11726*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11729*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11741*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 11744*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 18,  // Results = #19
/* 11752*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11755*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11758*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11761*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11773*/              OPC_EmitInteger, MVT::i32, 1, 
/* 11776*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 11779*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11782*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11785*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/* 11811*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11814*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11817*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11829*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 11832*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 32,  // Results = #33
/* 11840*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11843*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11846*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11858*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 11861*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 37,  // Results = #38
/* 11869*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11872*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11875*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11887*/              OPC_EmitInteger, MVT::i32, 1, 
/* 11890*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 11893*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11896*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11899*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 4, 5, 28, 29, 30, 31, 33, 34, 35, 36, 38, 39, 40, 41, 42, 43, 44, 45,  // Results = #46
/* 11923*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 11926*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11929*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11932*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11935*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11938*/              OPC_EmitInteger, MVT::i32, 1, 
/* 11941*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11944*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11947*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11950*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 11953*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 56,  // Results = #57
/* 11961*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11964*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11967*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11970*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11982*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 11985*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 62,  // Results = #63
/* 11993*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11996*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11999*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12002*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12014*/              OPC_EmitInteger, MVT::i32, 1, 
/* 12017*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 12020*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12023*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12026*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 50, 51, 52, 53, 54, 55, 57, 58, 59, 60, 61, 63, 64, 65, 66, 67, 68, 69, 70, 71,  // Results = #72
/* 12052*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12055*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12058*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12070*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 12073*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 76,  // Results = #77
/* 12081*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12084*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12087*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12099*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 12102*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 81,  // Results = #82
/* 12110*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12113*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12116*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12128*/              OPC_EmitInteger, MVT::i32, 1, 
/* 12131*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 12134*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12137*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12140*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 48, 49, 72, 73, 74, 75, 77, 78, 79, 80, 82, 83, 84, 85, 86, 87, 88, 89,  // Results = #90
/* 12164*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 12167*/              OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                            MVT::i64, 5/*#Ops*/, 3, 46, 47, 90, 91, 
                        // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$x), (and:{ *:[i64] } i64:{ *:[i64] }:$y, (or:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$x))) - Complexity = 12
                        // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 12178*/            0, /*End of Scope*/
/* 12179*/          /*Scope*/ 0|128,8/*1024*/, /*->13205*/
/* 12181*/            OPC_MoveChild0,
/* 12182*/            OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/* 12185*/            OPC_Scope, 123|128,3/*507*/, /*->12695*/ // 2 children in Scope
/* 12188*/              OPC_CheckChild0Same, 1,
/* 12190*/              OPC_CheckChild1Same, 0,
/* 12192*/              OPC_MoveParent,
/* 12193*/              OPC_RecordChild1, // #2 = $y
/* 12194*/              OPC_MoveParent,
/* 12195*/              OPC_CheckType, MVT::i64,
/* 12197*/              OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 12199*/              OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 12202*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12205*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12208*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12211*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12214*/              OPC_EmitInteger, MVT::i32, 1, 
/* 12217*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12220*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12223*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12226*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 12229*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 12,  // Results = #13
/* 12237*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12240*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12243*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12246*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12258*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 12261*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 18,  // Results = #19
/* 12269*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12272*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12275*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12278*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12290*/              OPC_EmitInteger, MVT::i32, 1, 
/* 12293*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 12296*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12299*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12302*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/* 12328*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12331*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12334*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12346*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 12349*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 32,  // Results = #33
/* 12357*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12360*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12363*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12375*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 12378*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 37,  // Results = #38
/* 12386*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12389*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12392*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12404*/              OPC_EmitInteger, MVT::i32, 1, 
/* 12407*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 12410*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12413*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12416*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 4, 5, 28, 29, 30, 31, 33, 34, 35, 36, 38, 39, 40, 41, 42, 43, 44, 45,  // Results = #46
/* 12440*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 12443*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12446*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12449*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12452*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12455*/              OPC_EmitInteger, MVT::i32, 1, 
/* 12458*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12461*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12464*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12467*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 12470*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 56,  // Results = #57
/* 12478*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12481*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12484*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12487*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12499*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 12502*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 62,  // Results = #63
/* 12510*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12513*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12516*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12519*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12531*/              OPC_EmitInteger, MVT::i32, 1, 
/* 12534*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 12537*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12540*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12543*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 50, 51, 52, 53, 54, 55, 57, 58, 59, 60, 61, 63, 64, 65, 66, 67, 68, 69, 70, 71,  // Results = #72
/* 12569*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12572*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12575*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12587*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 12590*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 76,  // Results = #77
/* 12598*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12601*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12604*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12616*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 12619*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 81,  // Results = #82
/* 12627*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12630*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12633*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12645*/              OPC_EmitInteger, MVT::i32, 1, 
/* 12648*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 12651*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12654*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12657*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 48, 49, 72, 73, 74, 75, 77, 78, 79, 80, 82, 83, 84, 85, 86, 87, 88, 89,  // Results = #90
/* 12681*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 12684*/              OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                            MVT::i64, 5/*#Ops*/, 3, 46, 47, 90, 91, 
                        // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$x), (and:{ *:[i64] } (or:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$z), i64:{ *:[i64] }:$y)) - Complexity = 12
                        // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 12695*/            /*Scope*/ 123|128,3/*507*/, /*->13204*/
/* 12697*/              OPC_CheckChild0Same, 0,
/* 12699*/              OPC_CheckChild1Same, 1,
/* 12701*/              OPC_MoveParent,
/* 12702*/              OPC_RecordChild1, // #2 = $y
/* 12703*/              OPC_MoveParent,
/* 12704*/              OPC_CheckType, MVT::i64,
/* 12706*/              OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 12708*/              OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 12711*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12714*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12717*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12720*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12723*/              OPC_EmitInteger, MVT::i32, 1, 
/* 12726*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12729*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12732*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12735*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 12738*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 12,  // Results = #13
/* 12746*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12749*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12752*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12755*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12767*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 12770*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 18,  // Results = #19
/* 12778*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12781*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12784*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12787*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12799*/              OPC_EmitInteger, MVT::i32, 1, 
/* 12802*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 12805*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12808*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12811*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/* 12837*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12840*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12843*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12855*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 12858*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 32,  // Results = #33
/* 12866*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12869*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12872*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12884*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 12887*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 37,  // Results = #38
/* 12895*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12898*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12901*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12913*/              OPC_EmitInteger, MVT::i32, 1, 
/* 12916*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 12919*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12922*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12925*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 4, 5, 28, 29, 30, 31, 33, 34, 35, 36, 38, 39, 40, 41, 42, 43, 44, 45,  // Results = #46
/* 12949*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 12952*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12955*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12958*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12961*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12964*/              OPC_EmitInteger, MVT::i32, 1, 
/* 12967*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12970*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12973*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12976*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 12979*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 56,  // Results = #57
/* 12987*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12990*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12993*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12996*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13008*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 13011*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 62,  // Results = #63
/* 13019*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13022*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13025*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13028*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13040*/              OPC_EmitInteger, MVT::i32, 1, 
/* 13043*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 13046*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13049*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13052*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 50, 51, 52, 53, 54, 55, 57, 58, 59, 60, 61, 63, 64, 65, 66, 67, 68, 69, 70, 71,  // Results = #72
/* 13078*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13081*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13084*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13096*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 13099*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 76,  // Results = #77
/* 13107*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13110*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13113*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13125*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 13128*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 81,  // Results = #82
/* 13136*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13139*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13142*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13154*/              OPC_EmitInteger, MVT::i32, 1, 
/* 13157*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 13160*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13163*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13166*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 48, 49, 72, 73, 74, 75, 77, 78, 79, 80, 82, 83, 84, 85, 86, 87, 88, 89,  // Results = #90
/* 13190*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 13193*/              OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                            MVT::i64, 5/*#Ops*/, 3, 46, 47, 90, 91, 
                        // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$x), (and:{ *:[i64] } (or:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$x), i64:{ *:[i64] }:$y)) - Complexity = 12
                        // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 13204*/            0, /*End of Scope*/
/* 13205*/          0, /*End of Scope*/
/* 13206*/        /*Scope*/ 87|128,15/*2007*/, /*->15215*/
/* 13208*/          OPC_MoveChild1,
/* 13209*/          OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/* 13212*/          OPC_RecordChild0, // #1 = $x
/* 13213*/          OPC_RecordChild1, // #2 = $z
/* 13214*/          OPC_MoveParent,
/* 13215*/          OPC_MoveParent,
/* 13216*/          OPC_MoveChild1,
/* 13217*/          OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/* 13220*/          OPC_Scope, 121|128,3/*505*/, /*->13728*/ // 3 children in Scope
/* 13223*/            OPC_CheckChild0Same, 1,
/* 13225*/            OPC_CheckChild1Same, 2,
/* 13227*/            OPC_MoveParent,
/* 13228*/            OPC_CheckType, MVT::i64,
/* 13230*/            OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 13232*/            OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 13235*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13238*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13241*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13244*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13247*/            OPC_EmitInteger, MVT::i32, 1, 
/* 13250*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13253*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13256*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13259*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 13262*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 12,  // Results = #13
/* 13270*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13273*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13276*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13279*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13291*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 13294*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 18,  // Results = #19
/* 13302*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13305*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13308*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13311*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13323*/            OPC_EmitInteger, MVT::i32, 1, 
/* 13326*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 13329*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13332*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13335*/            OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                          MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/* 13361*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13364*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13367*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13379*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 13382*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 32,  // Results = #33
/* 13390*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13393*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13396*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13408*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 13411*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 37,  // Results = #38
/* 13419*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13422*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13425*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13437*/            OPC_EmitInteger, MVT::i32, 1, 
/* 13440*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 13443*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13446*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13449*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 4, 5, 28, 29, 30, 31, 33, 34, 35, 36, 38, 39, 40, 41, 42, 43, 44, 45,  // Results = #46
/* 13473*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 13476*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13479*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13482*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13485*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13488*/            OPC_EmitInteger, MVT::i32, 1, 
/* 13491*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13494*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13497*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13500*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 13503*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 56,  // Results = #57
/* 13511*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13514*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13517*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13520*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13532*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 13535*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 62,  // Results = #63
/* 13543*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13546*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13549*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13552*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13564*/            OPC_EmitInteger, MVT::i32, 1, 
/* 13567*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 13570*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13573*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13576*/            OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                          MVT::i32, 20/*#Ops*/, 50, 51, 52, 53, 54, 55, 57, 58, 59, 60, 61, 63, 64, 65, 66, 67, 68, 69, 70, 71,  // Results = #72
/* 13602*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13605*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13608*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13620*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 13623*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 76,  // Results = #77
/* 13631*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13634*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13637*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13649*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 13652*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 81,  // Results = #82
/* 13660*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13663*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13666*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13678*/            OPC_EmitInteger, MVT::i32, 1, 
/* 13681*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 13684*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13687*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13690*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 48, 49, 72, 73, 74, 75, 77, 78, 79, 80, 82, 83, 84, 85, 86, 87, 88, 89,  // Results = #90
/* 13714*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 13717*/            OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                          MVT::i64, 5/*#Ops*/, 3, 46, 47, 90, 91, 
                      // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$y, (or:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$z)), (and:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$z)) - Complexity = 12
                      // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 13728*/          /*Scope*/ 81|128,7/*977*/, /*->14707*/
/* 13730*/            OPC_CheckChild0Same, 2,
/* 13732*/            OPC_CheckChild1Same, 1,
/* 13734*/            OPC_MoveParent,
/* 13735*/            OPC_CheckType, MVT::i64,
/* 13737*/            OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 13739*/            OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 13742*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13745*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13748*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13751*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13754*/            OPC_EmitInteger, MVT::i32, 1, 
/* 13757*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13760*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13763*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13766*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 13769*/            OPC_Scope, 82|128,3/*466*/, /*->14238*/ // 2 children in Scope
/* 13772*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 12,  // Results = #13
/* 13780*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13783*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13786*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13789*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13801*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 13804*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 18,  // Results = #19
/* 13812*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13815*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13818*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13821*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13833*/              OPC_EmitInteger, MVT::i32, 1, 
/* 13836*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 13839*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13842*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13845*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/* 13871*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13874*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13877*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13889*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 13892*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 32,  // Results = #33
/* 13900*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13903*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13906*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13918*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 13921*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 37,  // Results = #38
/* 13929*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13932*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13935*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13947*/              OPC_EmitInteger, MVT::i32, 1, 
/* 13950*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 13953*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13956*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13959*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 4, 5, 28, 29, 30, 31, 33, 34, 35, 36, 38, 39, 40, 41, 42, 43, 44, 45,  // Results = #46
/* 13983*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 13986*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13989*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13992*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13995*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13998*/              OPC_EmitInteger, MVT::i32, 1, 
/* 14001*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14004*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14007*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14010*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 14013*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 56,  // Results = #57
/* 14021*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14024*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14027*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14030*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14042*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 14045*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 62,  // Results = #63
/* 14053*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14056*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14059*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14062*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14074*/              OPC_EmitInteger, MVT::i32, 1, 
/* 14077*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 14080*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14083*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14086*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 50, 51, 52, 53, 54, 55, 57, 58, 59, 60, 61, 63, 64, 65, 66, 67, 68, 69, 70, 71,  // Results = #72
/* 14112*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14115*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14118*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14130*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 14133*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 76,  // Results = #77
/* 14141*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14144*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14147*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14159*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 14162*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 81,  // Results = #82
/* 14170*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14173*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14176*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14188*/              OPC_EmitInteger, MVT::i32, 1, 
/* 14191*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 14194*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14197*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14200*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 48, 49, 72, 73, 74, 75, 77, 78, 79, 80, 82, 83, 84, 85, 86, 87, 88, 89,  // Results = #90
/* 14224*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 14227*/              OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                            MVT::i64, 5/*#Ops*/, 3, 46, 47, 90, 91, 
                        // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$y, (or:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$z)), (and:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$x)) - Complexity = 12
                        // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 14238*/            /*Scope*/ 82|128,3/*466*/, /*->14706*/
/* 14240*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 12,  // Results = #13
/* 14248*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14251*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14254*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14257*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14269*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 14272*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 18,  // Results = #19
/* 14280*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14283*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14286*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14289*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14301*/              OPC_EmitInteger, MVT::i32, 1, 
/* 14304*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 14307*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14310*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14313*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/* 14339*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14342*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14345*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14357*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 14360*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 32,  // Results = #33
/* 14368*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14371*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14374*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14386*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 14389*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 37,  // Results = #38
/* 14397*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14400*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14403*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14415*/              OPC_EmitInteger, MVT::i32, 1, 
/* 14418*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 14421*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14424*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14427*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 4, 5, 28, 29, 30, 31, 33, 34, 35, 36, 38, 39, 40, 41, 42, 43, 44, 45,  // Results = #46
/* 14451*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 14454*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14457*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14460*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14463*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14466*/              OPC_EmitInteger, MVT::i32, 1, 
/* 14469*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14472*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14475*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14478*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 14481*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 56,  // Results = #57
/* 14489*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14492*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14495*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14498*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14510*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 14513*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 62,  // Results = #63
/* 14521*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14524*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14527*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14530*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14542*/              OPC_EmitInteger, MVT::i32, 1, 
/* 14545*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 14548*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14551*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14554*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 50, 51, 52, 53, 54, 55, 57, 58, 59, 60, 61, 63, 64, 65, 66, 67, 68, 69, 70, 71,  // Results = #72
/* 14580*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14583*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14586*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14598*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 14601*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 76,  // Results = #77
/* 14609*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14612*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14615*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14627*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 14630*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 81,  // Results = #82
/* 14638*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14641*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14644*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14656*/              OPC_EmitInteger, MVT::i32, 1, 
/* 14659*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 14662*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14665*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14668*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 48, 49, 72, 73, 74, 75, 77, 78, 79, 80, 82, 83, 84, 85, 86, 87, 88, 89,  // Results = #90
/* 14692*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 14695*/              OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                            MVT::i64, 5/*#Ops*/, 3, 46, 47, 90, 91, 
                        // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$y, (or:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$x)), (and:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$z)) - Complexity = 12
                        // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 14706*/            0, /*End of Scope*/
/* 14707*/          /*Scope*/ 121|128,3/*505*/, /*->15214*/
/* 14709*/            OPC_CheckChild0Same, 1,
/* 14711*/            OPC_CheckChild1Same, 2,
/* 14713*/            OPC_MoveParent,
/* 14714*/            OPC_CheckType, MVT::i64,
/* 14716*/            OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 14718*/            OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 14721*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14724*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14727*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14730*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14733*/            OPC_EmitInteger, MVT::i32, 1, 
/* 14736*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14739*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14742*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14745*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 14748*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 12,  // Results = #13
/* 14756*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14759*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14762*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14765*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14777*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 14780*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 18,  // Results = #19
/* 14788*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14791*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14794*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14797*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14809*/            OPC_EmitInteger, MVT::i32, 1, 
/* 14812*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 14815*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14818*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14821*/            OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                          MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/* 14847*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14850*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14853*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14865*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 14868*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 32,  // Results = #33
/* 14876*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14879*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14882*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14894*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 14897*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 37,  // Results = #38
/* 14905*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14908*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14911*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14923*/            OPC_EmitInteger, MVT::i32, 1, 
/* 14926*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 14929*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14932*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14935*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 4, 5, 28, 29, 30, 31, 33, 34, 35, 36, 38, 39, 40, 41, 42, 43, 44, 45,  // Results = #46
/* 14959*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 14962*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14965*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14968*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14971*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14974*/            OPC_EmitInteger, MVT::i32, 1, 
/* 14977*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14980*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14983*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14986*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 14989*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 56,  // Results = #57
/* 14997*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15000*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15003*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15006*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15018*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 15021*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 62,  // Results = #63
/* 15029*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15032*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15035*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15038*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15050*/            OPC_EmitInteger, MVT::i32, 1, 
/* 15053*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 15056*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15059*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15062*/            OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                          MVT::i32, 20/*#Ops*/, 50, 51, 52, 53, 54, 55, 57, 58, 59, 60, 61, 63, 64, 65, 66, 67, 68, 69, 70, 71,  // Results = #72
/* 15088*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15091*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15094*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15106*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 15109*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 76,  // Results = #77
/* 15117*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15120*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15123*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15135*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 15138*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 81,  // Results = #82
/* 15146*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15149*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15152*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15164*/            OPC_EmitInteger, MVT::i32, 1, 
/* 15167*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 15170*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15173*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15176*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 48, 49, 72, 73, 74, 75, 77, 78, 79, 80, 82, 83, 84, 85, 86, 87, 88, 89,  // Results = #90
/* 15200*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 15203*/            OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                          MVT::i64, 5/*#Ops*/, 3, 46, 47, 90, 91, 
                      // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$y, (or:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$x)), (and:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$x)) - Complexity = 12
                      // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 15214*/          0, /*End of Scope*/
/* 15215*/        0, /*End of Scope*/
/* 15216*/      /*Scope*/ 88|128,15/*2008*/, /*->17226*/
/* 15218*/        OPC_MoveChild0,
/* 15219*/        OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/* 15222*/        OPC_RecordChild0, // #0 = $x
/* 15223*/        OPC_RecordChild1, // #1 = $z
/* 15224*/        OPC_MoveParent,
/* 15225*/        OPC_RecordChild1, // #2 = $y
/* 15226*/        OPC_MoveParent,
/* 15227*/        OPC_MoveChild1,
/* 15228*/        OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/* 15231*/        OPC_Scope, 121|128,3/*505*/, /*->15739*/ // 3 children in Scope
/* 15234*/          OPC_CheckChild0Same, 0,
/* 15236*/          OPC_CheckChild1Same, 1,
/* 15238*/          OPC_MoveParent,
/* 15239*/          OPC_CheckType, MVT::i64,
/* 15241*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 15243*/          OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 15246*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15249*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15252*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15255*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15258*/          OPC_EmitInteger, MVT::i32, 1, 
/* 15261*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15264*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15267*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15270*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 15273*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 12,  // Results = #13
/* 15281*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15284*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15287*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15290*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15302*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 15305*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 18,  // Results = #19
/* 15313*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15316*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15319*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15322*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15334*/          OPC_EmitInteger, MVT::i32, 1, 
/* 15337*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 15340*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15343*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15346*/          OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                        MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/* 15372*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15375*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15378*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15390*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 15393*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 32,  // Results = #33
/* 15401*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15404*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15407*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15419*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 15422*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 37,  // Results = #38
/* 15430*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15433*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15436*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15448*/          OPC_EmitInteger, MVT::i32, 1, 
/* 15451*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 15454*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15457*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15460*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 4, 5, 28, 29, 30, 31, 33, 34, 35, 36, 38, 39, 40, 41, 42, 43, 44, 45,  // Results = #46
/* 15484*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 15487*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15490*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15493*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15496*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15499*/          OPC_EmitInteger, MVT::i32, 1, 
/* 15502*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15505*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15508*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15511*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 15514*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 56,  // Results = #57
/* 15522*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15525*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15528*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15531*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15543*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 15546*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 62,  // Results = #63
/* 15554*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15557*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15560*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15563*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15575*/          OPC_EmitInteger, MVT::i32, 1, 
/* 15578*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 15581*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15584*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15587*/          OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                        MVT::i32, 20/*#Ops*/, 50, 51, 52, 53, 54, 55, 57, 58, 59, 60, 61, 63, 64, 65, 66, 67, 68, 69, 70, 71,  // Results = #72
/* 15613*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15616*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15619*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15631*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 15634*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 76,  // Results = #77
/* 15642*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15645*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15648*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15660*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 15663*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 81,  // Results = #82
/* 15671*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15674*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15677*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15689*/          OPC_EmitInteger, MVT::i32, 1, 
/* 15692*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 15695*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15698*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15701*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 48, 49, 72, 73, 74, 75, 77, 78, 79, 80, 82, 83, 84, 85, 86, 87, 88, 89,  // Results = #90
/* 15725*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 15728*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                        MVT::i64, 5/*#Ops*/, 3, 46, 47, 90, 91, 
                    // Src: (or:{ *:[i64] } (and:{ *:[i64] } (or:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$z), i64:{ *:[i64] }:$y), (and:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$z)) - Complexity = 12
                    // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 15739*/        /*Scope*/ 81|128,7/*977*/, /*->16718*/
/* 15741*/          OPC_CheckChild0Same, 1,
/* 15743*/          OPC_CheckChild1Same, 0,
/* 15745*/          OPC_MoveParent,
/* 15746*/          OPC_CheckType, MVT::i64,
/* 15748*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 15750*/          OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 15753*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15756*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15759*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15762*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15765*/          OPC_EmitInteger, MVT::i32, 1, 
/* 15768*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15771*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15774*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15777*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 15780*/          OPC_Scope, 82|128,3/*466*/, /*->16249*/ // 2 children in Scope
/* 15783*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 12,  // Results = #13
/* 15791*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15794*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15797*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15800*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15812*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 15815*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 18,  // Results = #19
/* 15823*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15826*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15829*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15832*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15844*/            OPC_EmitInteger, MVT::i32, 1, 
/* 15847*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 15850*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15853*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15856*/            OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                          MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/* 15882*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15885*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15888*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15900*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 15903*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 32,  // Results = #33
/* 15911*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15914*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15917*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15929*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 15932*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 37,  // Results = #38
/* 15940*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15943*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15946*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15958*/            OPC_EmitInteger, MVT::i32, 1, 
/* 15961*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 15964*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15967*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15970*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 4, 5, 28, 29, 30, 31, 33, 34, 35, 36, 38, 39, 40, 41, 42, 43, 44, 45,  // Results = #46
/* 15994*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 15997*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16000*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16003*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16006*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16009*/            OPC_EmitInteger, MVT::i32, 1, 
/* 16012*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16015*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16018*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16021*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 16024*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 56,  // Results = #57
/* 16032*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16035*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16038*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16041*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16053*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 16056*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 62,  // Results = #63
/* 16064*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16067*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16070*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16073*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16085*/            OPC_EmitInteger, MVT::i32, 1, 
/* 16088*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 16091*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16094*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16097*/            OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                          MVT::i32, 20/*#Ops*/, 50, 51, 52, 53, 54, 55, 57, 58, 59, 60, 61, 63, 64, 65, 66, 67, 68, 69, 70, 71,  // Results = #72
/* 16123*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16126*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16129*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16141*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 16144*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 76,  // Results = #77
/* 16152*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16155*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16158*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16170*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 16173*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 81,  // Results = #82
/* 16181*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16184*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16187*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16199*/            OPC_EmitInteger, MVT::i32, 1, 
/* 16202*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 16205*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16208*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16211*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 48, 49, 72, 73, 74, 75, 77, 78, 79, 80, 82, 83, 84, 85, 86, 87, 88, 89,  // Results = #90
/* 16235*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 16238*/            OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                          MVT::i64, 5/*#Ops*/, 3, 46, 47, 90, 91, 
                      // Src: (or:{ *:[i64] } (and:{ *:[i64] } (or:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$z), i64:{ *:[i64] }:$y), (and:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$x)) - Complexity = 12
                      // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 16249*/          /*Scope*/ 82|128,3/*466*/, /*->16717*/
/* 16251*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 12,  // Results = #13
/* 16259*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16262*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16265*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16268*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16280*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 16283*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 18,  // Results = #19
/* 16291*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16294*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16297*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16300*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16312*/            OPC_EmitInteger, MVT::i32, 1, 
/* 16315*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 16318*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16321*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16324*/            OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                          MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/* 16350*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16353*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16356*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16368*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 16371*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 32,  // Results = #33
/* 16379*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16382*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16385*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16397*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 16400*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 37,  // Results = #38
/* 16408*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16411*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16414*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16426*/            OPC_EmitInteger, MVT::i32, 1, 
/* 16429*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 16432*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16435*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16438*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 4, 5, 28, 29, 30, 31, 33, 34, 35, 36, 38, 39, 40, 41, 42, 43, 44, 45,  // Results = #46
/* 16462*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 16465*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16468*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16471*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16474*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16477*/            OPC_EmitInteger, MVT::i32, 1, 
/* 16480*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16483*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16486*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16489*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 16492*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 56,  // Results = #57
/* 16500*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16503*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16506*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16509*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16521*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 16524*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 62,  // Results = #63
/* 16532*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16535*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16538*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16541*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16553*/            OPC_EmitInteger, MVT::i32, 1, 
/* 16556*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 16559*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16562*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16565*/            OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                          MVT::i32, 20/*#Ops*/, 50, 51, 52, 53, 54, 55, 57, 58, 59, 60, 61, 63, 64, 65, 66, 67, 68, 69, 70, 71,  // Results = #72
/* 16591*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16594*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16597*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16609*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 16612*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 76,  // Results = #77
/* 16620*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16623*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16626*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16638*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 16641*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 81,  // Results = #82
/* 16649*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16652*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16655*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16667*/            OPC_EmitInteger, MVT::i32, 1, 
/* 16670*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 16673*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16676*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16679*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 48, 49, 72, 73, 74, 75, 77, 78, 79, 80, 82, 83, 84, 85, 86, 87, 88, 89,  // Results = #90
/* 16703*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 16706*/            OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                          MVT::i64, 5/*#Ops*/, 3, 46, 47, 90, 91, 
                      // Src: (or:{ *:[i64] } (and:{ *:[i64] } (or:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$x), i64:{ *:[i64] }:$y), (and:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$z)) - Complexity = 12
                      // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 16717*/          0, /*End of Scope*/
/* 16718*/        /*Scope*/ 121|128,3/*505*/, /*->17225*/
/* 16720*/          OPC_CheckChild0Same, 0,
/* 16722*/          OPC_CheckChild1Same, 1,
/* 16724*/          OPC_MoveParent,
/* 16725*/          OPC_CheckType, MVT::i64,
/* 16727*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 16729*/          OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 16732*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16735*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16738*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16741*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16744*/          OPC_EmitInteger, MVT::i32, 1, 
/* 16747*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16750*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16753*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16756*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 16759*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 12,  // Results = #13
/* 16767*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16770*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16773*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16776*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16788*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 16791*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 18,  // Results = #19
/* 16799*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16802*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16805*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16808*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16820*/          OPC_EmitInteger, MVT::i32, 1, 
/* 16823*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 16826*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16829*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16832*/          OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                        MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/* 16858*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16861*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16864*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16876*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 16879*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 32,  // Results = #33
/* 16887*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16890*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16893*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16905*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 16908*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 37,  // Results = #38
/* 16916*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16919*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16922*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16934*/          OPC_EmitInteger, MVT::i32, 1, 
/* 16937*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 16940*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16943*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16946*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 4, 5, 28, 29, 30, 31, 33, 34, 35, 36, 38, 39, 40, 41, 42, 43, 44, 45,  // Results = #46
/* 16970*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 16973*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16976*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16979*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16982*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16985*/          OPC_EmitInteger, MVT::i32, 1, 
/* 16988*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16991*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16994*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16997*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 17000*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 56,  // Results = #57
/* 17008*/          OPC_EmitInteger, MVT::i32, 0, 
/* 17011*/          OPC_EmitInteger, MVT::i32, 0, 
/* 17014*/          OPC_EmitInteger, MVT::i32, 0, 
/* 17017*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17029*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 17032*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 62,  // Results = #63
/* 17040*/          OPC_EmitInteger, MVT::i32, 0, 
/* 17043*/          OPC_EmitInteger, MVT::i32, 0, 
/* 17046*/          OPC_EmitInteger, MVT::i32, 0, 
/* 17049*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17061*/          OPC_EmitInteger, MVT::i32, 1, 
/* 17064*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 17067*/          OPC_EmitInteger, MVT::i32, 0, 
/* 17070*/          OPC_EmitInteger, MVT::i32, 0, 
/* 17073*/          OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                        MVT::i32, 20/*#Ops*/, 50, 51, 52, 53, 54, 55, 57, 58, 59, 60, 61, 63, 64, 65, 66, 67, 68, 69, 70, 71,  // Results = #72
/* 17099*/          OPC_EmitInteger, MVT::i32, 0, 
/* 17102*/          OPC_EmitInteger, MVT::i32, 0, 
/* 17105*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17117*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 17120*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 76,  // Results = #77
/* 17128*/          OPC_EmitInteger, MVT::i32, 0, 
/* 17131*/          OPC_EmitInteger, MVT::i32, 0, 
/* 17134*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17146*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 17149*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 81,  // Results = #82
/* 17157*/          OPC_EmitInteger, MVT::i32, 0, 
/* 17160*/          OPC_EmitInteger, MVT::i32, 0, 
/* 17163*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17175*/          OPC_EmitInteger, MVT::i32, 1, 
/* 17178*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 17181*/          OPC_EmitInteger, MVT::i32, 0, 
/* 17184*/          OPC_EmitInteger, MVT::i32, 0, 
/* 17187*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 48, 49, 72, 73, 74, 75, 77, 78, 79, 80, 82, 83, 84, 85, 86, 87, 88, 89,  // Results = #90
/* 17211*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 17214*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                        MVT::i64, 5/*#Ops*/, 3, 46, 47, 90, 91, 
                    // Src: (or:{ *:[i64] } (and:{ *:[i64] } (or:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$x), i64:{ *:[i64] }:$y), (and:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$x)) - Complexity = 12
                    // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 17225*/        0, /*End of Scope*/
/* 17226*/      0, /*End of Scope*/
/* 17227*/    /*Scope*/ 104, /*->17332*/
/* 17228*/      OPC_RecordChild0, // #0 = $src0
/* 17229*/      OPC_RecordChild1, // #1 = $src1
/* 17230*/      OPC_CheckType, MVT::i32,
/* 17232*/      OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 17234*/      OPC_EmitInteger, MVT::i32, 0, 
/* 17237*/      OPC_EmitInteger, MVT::i32, 0, 
/* 17240*/      OPC_EmitInteger, MVT::i32, 1, 
/* 17243*/      OPC_EmitInteger, MVT::i32, 0, 
/* 17246*/      OPC_EmitInteger, MVT::i32, 0, 
/* 17249*/      OPC_EmitInteger, MVT::i32, 0, 
/* 17252*/      OPC_EmitInteger, MVT::i32, 0, 
/* 17255*/      OPC_EmitInteger, MVT::i32, 0, 
/* 17258*/      OPC_EmitInteger, MVT::i32, 0, 
/* 17261*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17273*/      OPC_EmitInteger, MVT::i32, 0, 
/* 17276*/      OPC_EmitInteger, MVT::i32, 0, 
/* 17279*/      OPC_EmitInteger, MVT::i32, 0, 
/* 17282*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17294*/      OPC_EmitInteger, MVT::i32, 1, 
/* 17297*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 17300*/      OPC_EmitInteger, MVT::i32, 0, 
/* 17303*/      OPC_EmitInteger, MVT::i32, 0, 
/* 17306*/      OPC_MorphNodeTo1, TARGET_VAL(R600::OR_INT), 0,
                    MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (or:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                // Dst: (OR_INT:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 17332*/    0, /*End of Scope*/
/* 17333*/  /*SwitchOpcode*/ 25, TARGET_VAL(AMDGPUISD::REGISTER_LOAD),// ->17361
/* 17336*/    OPC_RecordNode, // #0 = 'AMDGPUregister_load' chained node
/* 17337*/    OPC_RecordChild1, // #1 = $addr
/* 17338*/    OPC_RecordChild2, // #2 = $chan
/* 17339*/    OPC_MoveChild2,
/* 17340*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/* 17343*/    OPC_CheckType, MVT::i32,
/* 17345*/    OPC_MoveParent,
/* 17346*/    OPC_CheckType, MVT::i32,
/* 17348*/    OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRIndirect:$addr #3 #4
/* 17351*/    OPC_EmitMergeInputChains1_0,
/* 17352*/    OPC_MorphNodeTo1, TARGET_VAL(R600::R600_RegisterLoad), 0|OPFL_Chain,
                  MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (AMDGPUregister_load:{ *:[i32] } ADDRIndirect:{ *:[iPTR] }:$addr, (timm:{ *:[i32] }):$chan) - Complexity = 15
              // Dst: (R600_RegisterLoad:{ *:[i32] } ADDRIndirect:{ *:[iPTR] }:$addr, (timm:{ *:[i32] }):$chan)
/* 17361*/  /*SwitchOpcode*/ 26, TARGET_VAL(AMDGPUISD::REGISTER_STORE),// ->17390
/* 17364*/    OPC_RecordNode, // #0 = 'AMDGPUregister_store' chained node
/* 17365*/    OPC_RecordChild1, // #1 = $val
/* 17366*/    OPC_CheckChild1Type, MVT::i32,
/* 17368*/    OPC_RecordChild2, // #2 = $addr
/* 17369*/    OPC_RecordChild3, // #3 = $chan
/* 17370*/    OPC_MoveChild3,
/* 17371*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/* 17374*/    OPC_CheckType, MVT::i32,
/* 17376*/    OPC_MoveParent,
/* 17377*/    OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRIndirect:$addr #4 #5
/* 17380*/    OPC_EmitMergeInputChains1_0,
/* 17381*/    OPC_MorphNodeTo0, TARGET_VAL(R600::R600_RegisterStore), 0|OPFL_Chain,
                  4/*#Ops*/, 1, 4, 5, 3, 
              // Src: (AMDGPUregister_store i32:{ *:[i32] }:$val, ADDRIndirect:{ *:[iPTR] }:$addr, (timm:{ *:[i32] }):$chan) - Complexity = 15
              // Dst: (R600_RegisterStore i32:{ *:[i32] }:$val, ADDRIndirect:{ *:[iPTR] }:$addr, (timm:{ *:[i32] }):$chan)
/* 17390*/  /*SwitchOpcode*/ 45|128,35/*4525*/, TARGET_VAL(ISD::SELECT_CC),// ->21919
/* 17394*/    OPC_RecordChild0, // #0 = $src0
/* 17395*/    OPC_Scope, 60|128,23/*3004*/, /*->20402*/ // 2 children in Scope
/* 17398*/      OPC_CheckChild0Type, MVT::f32,
/* 17400*/      OPC_Scope, 72|128,13/*1736*/, /*->19139*/ // 2 children in Scope
/* 17403*/        OPC_RecordChild1, // #1 = $src1
/* 17404*/        OPC_Scope, 96|128,6/*864*/, /*->18271*/ // 2 children in Scope
/* 17407*/          OPC_CheckChild2Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17418*/          OPC_CheckChild3Integer, 0, 
/* 17420*/          OPC_MoveChild4,
/* 17421*/          OPC_Scope, 105, /*->17528*/ // 8 children in Scope
/* 17423*/            OPC_CheckCondCode, ISD::SETOEQ,
/* 17425*/            OPC_MoveParent,
/* 17426*/            OPC_CheckType, MVT::i32,
/* 17428*/            OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 17430*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17433*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17436*/            OPC_EmitInteger, MVT::i32, 1, 
/* 17439*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17442*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17445*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17448*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17451*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17454*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17457*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17469*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17472*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17475*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17478*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17490*/            OPC_EmitInteger, MVT::i32, 1, 
/* 17493*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 17496*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17499*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17502*/            OPC_MorphNodeTo1, TARGET_VAL(R600::SETE_DX10), 0,
                          MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:{ *:[i32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, -1:{ *:[i32] }, 0:{ *:[i32] }, SETOEQ:{ *:[Other] }) - Complexity = 13
                      // Dst: (SETE_DX10:{ *:[i32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1)
/* 17528*/          /*Scope*/ 105, /*->17634*/
/* 17529*/            OPC_CheckCondCode, ISD::SETEQ,
/* 17531*/            OPC_MoveParent,
/* 17532*/            OPC_CheckType, MVT::i32,
/* 17534*/            OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 17536*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17539*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17542*/            OPC_EmitInteger, MVT::i32, 1, 
/* 17545*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17548*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17551*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17554*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17557*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17560*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17563*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17575*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17578*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17581*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17584*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17596*/            OPC_EmitInteger, MVT::i32, 1, 
/* 17599*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 17602*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17605*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17608*/            OPC_MorphNodeTo1, TARGET_VAL(R600::SETE_DX10), 0,
                          MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:{ *:[i32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, -1:{ *:[i32] }, 0:{ *:[i32] }, SETEQ:{ *:[Other] }) - Complexity = 13
                      // Dst: (SETE_DX10:{ *:[i32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1)
/* 17634*/          /*Scope*/ 105, /*->17740*/
/* 17635*/            OPC_CheckCondCode, ISD::SETOGT,
/* 17637*/            OPC_MoveParent,
/* 17638*/            OPC_CheckType, MVT::i32,
/* 17640*/            OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 17642*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17645*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17648*/            OPC_EmitInteger, MVT::i32, 1, 
/* 17651*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17654*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17657*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17660*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17663*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17666*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17669*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17681*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17684*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17687*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17690*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17702*/            OPC_EmitInteger, MVT::i32, 1, 
/* 17705*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 17708*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17711*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17714*/            OPC_MorphNodeTo1, TARGET_VAL(R600::SETGT_DX10), 0,
                          MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:{ *:[i32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, -1:{ *:[i32] }, 0:{ *:[i32] }, SETOGT:{ *:[Other] }) - Complexity = 13
                      // Dst: (SETGT_DX10:{ *:[i32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1)
/* 17740*/          /*Scope*/ 105, /*->17846*/
/* 17741*/            OPC_CheckCondCode, ISD::SETGT,
/* 17743*/            OPC_MoveParent,
/* 17744*/            OPC_CheckType, MVT::i32,
/* 17746*/            OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 17748*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17751*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17754*/            OPC_EmitInteger, MVT::i32, 1, 
/* 17757*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17760*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17763*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17766*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17769*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17772*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17775*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17787*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17790*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17793*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17796*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17808*/            OPC_EmitInteger, MVT::i32, 1, 
/* 17811*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 17814*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17817*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17820*/            OPC_MorphNodeTo1, TARGET_VAL(R600::SETGT_DX10), 0,
                          MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:{ *:[i32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, -1:{ *:[i32] }, 0:{ *:[i32] }, SETGT:{ *:[Other] }) - Complexity = 13
                      // Dst: (SETGT_DX10:{ *:[i32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1)
/* 17846*/          /*Scope*/ 105, /*->17952*/
/* 17847*/            OPC_CheckCondCode, ISD::SETOGE,
/* 17849*/            OPC_MoveParent,
/* 17850*/            OPC_CheckType, MVT::i32,
/* 17852*/            OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 17854*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17857*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17860*/            OPC_EmitInteger, MVT::i32, 1, 
/* 17863*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17866*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17869*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17872*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17875*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17878*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17881*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17893*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17896*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17899*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17902*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17914*/            OPC_EmitInteger, MVT::i32, 1, 
/* 17917*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 17920*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17923*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17926*/            OPC_MorphNodeTo1, TARGET_VAL(R600::SETGE_DX10), 0,
                          MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:{ *:[i32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, -1:{ *:[i32] }, 0:{ *:[i32] }, SETOGE:{ *:[Other] }) - Complexity = 13
                      // Dst: (SETGE_DX10:{ *:[i32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1)
/* 17952*/          /*Scope*/ 105, /*->18058*/
/* 17953*/            OPC_CheckCondCode, ISD::SETGE,
/* 17955*/            OPC_MoveParent,
/* 17956*/            OPC_CheckType, MVT::i32,
/* 17958*/            OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 17960*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17963*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17966*/            OPC_EmitInteger, MVT::i32, 1, 
/* 17969*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17972*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17975*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17978*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17981*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17984*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17987*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17999*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18002*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18005*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18008*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18020*/            OPC_EmitInteger, MVT::i32, 1, 
/* 18023*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 18026*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18029*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18032*/            OPC_MorphNodeTo1, TARGET_VAL(R600::SETGE_DX10), 0,
                          MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:{ *:[i32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, -1:{ *:[i32] }, 0:{ *:[i32] }, SETGE:{ *:[Other] }) - Complexity = 13
                      // Dst: (SETGE_DX10:{ *:[i32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1)
/* 18058*/          /*Scope*/ 105, /*->18164*/
/* 18059*/            OPC_CheckCondCode, ISD::SETUNE,
/* 18061*/            OPC_MoveParent,
/* 18062*/            OPC_CheckType, MVT::i32,
/* 18064*/            OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 18066*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18069*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18072*/            OPC_EmitInteger, MVT::i32, 1, 
/* 18075*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18078*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18081*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18084*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18087*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18090*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18093*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18105*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18108*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18111*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18114*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18126*/            OPC_EmitInteger, MVT::i32, 1, 
/* 18129*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 18132*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18135*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18138*/            OPC_MorphNodeTo1, TARGET_VAL(R600::SETNE_DX10), 0,
                          MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:{ *:[i32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, -1:{ *:[i32] }, 0:{ *:[i32] }, SETUNE:{ *:[Other] }) - Complexity = 13
                      // Dst: (SETNE_DX10:{ *:[i32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1)
/* 18164*/          /*Scope*/ 105, /*->18270*/
/* 18165*/            OPC_CheckCondCode, ISD::SETNE,
/* 18167*/            OPC_MoveParent,
/* 18168*/            OPC_CheckType, MVT::i32,
/* 18170*/            OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 18172*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18175*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18178*/            OPC_EmitInteger, MVT::i32, 1, 
/* 18181*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18184*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18187*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18190*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18193*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18196*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18199*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18211*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18214*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18217*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18220*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18232*/            OPC_EmitInteger, MVT::i32, 1, 
/* 18235*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 18238*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18241*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18244*/            OPC_MorphNodeTo1, TARGET_VAL(R600::SETNE_DX10), 0,
                          MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:{ *:[i32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, -1:{ *:[i32] }, 0:{ *:[i32] }, SETNE:{ *:[Other] }) - Complexity = 13
                      // Dst: (SETNE_DX10:{ *:[i32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1)
/* 18270*/          0, /*End of Scope*/
/* 18271*/        /*Scope*/ 97|128,6/*865*/, /*->19138*/
/* 18273*/          OPC_MoveChild2,
/* 18274*/          OPC_CheckOpcode, TARGET_VAL(ISD::ConstantFP),
/* 18277*/          OPC_CheckPredicate, 2, // Predicate_FP_ONE
/* 18279*/          OPC_MoveParent,
/* 18280*/          OPC_MoveChild3,
/* 18281*/          OPC_CheckOpcode, TARGET_VAL(ISD::ConstantFP),
/* 18284*/          OPC_CheckPredicate, 3, // Predicate_FP_ZERO
/* 18286*/          OPC_MoveParent,
/* 18287*/          OPC_MoveChild4,
/* 18288*/          OPC_Scope, 105, /*->18395*/ // 8 children in Scope
/* 18290*/            OPC_CheckCondCode, ISD::SETOEQ,
/* 18292*/            OPC_MoveParent,
/* 18293*/            OPC_CheckType, MVT::f32,
/* 18295*/            OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 18297*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18300*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18303*/            OPC_EmitInteger, MVT::i32, 1, 
/* 18306*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18309*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18312*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18315*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18318*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18321*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18324*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18336*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18339*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18342*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18345*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18357*/            OPC_EmitInteger, MVT::i32, 1, 
/* 18360*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 18363*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18366*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18369*/            OPC_MorphNodeTo1, TARGET_VAL(R600::SETE), 0,
                          MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, (fpimm:{ *:[f32] })<<P:Predicate_FP_ONE>>, (fpimm:{ *:[f32] })<<P:Predicate_FP_ZERO>>, SETOEQ:{ *:[Other] }) - Complexity = 11
                      // Dst: (SETE:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1)
/* 18395*/          /*Scope*/ 105, /*->18501*/
/* 18396*/            OPC_CheckCondCode, ISD::SETEQ,
/* 18398*/            OPC_MoveParent,
/* 18399*/            OPC_CheckType, MVT::f32,
/* 18401*/            OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 18403*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18406*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18409*/            OPC_EmitInteger, MVT::i32, 1, 
/* 18412*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18415*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18418*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18421*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18424*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18427*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18430*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18442*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18445*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18448*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18451*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18463*/            OPC_EmitInteger, MVT::i32, 1, 
/* 18466*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 18469*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18472*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18475*/            OPC_MorphNodeTo1, TARGET_VAL(R600::SETE), 0,
                          MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, (fpimm:{ *:[f32] })<<P:Predicate_FP_ONE>>, (fpimm:{ *:[f32] })<<P:Predicate_FP_ZERO>>, SETEQ:{ *:[Other] }) - Complexity = 11
                      // Dst: (SETE:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1)
/* 18501*/          /*Scope*/ 105, /*->18607*/
/* 18502*/            OPC_CheckCondCode, ISD::SETOGT,
/* 18504*/            OPC_MoveParent,
/* 18505*/            OPC_CheckType, MVT::f32,
/* 18507*/            OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 18509*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18512*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18515*/            OPC_EmitInteger, MVT::i32, 1, 
/* 18518*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18521*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18524*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18527*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18530*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18533*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18536*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18548*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18551*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18554*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18557*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18569*/            OPC_EmitInteger, MVT::i32, 1, 
/* 18572*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 18575*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18578*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18581*/            OPC_MorphNodeTo1, TARGET_VAL(R600::SGT), 0,
                          MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, (fpimm:{ *:[f32] })<<P:Predicate_FP_ONE>>, (fpimm:{ *:[f32] })<<P:Predicate_FP_ZERO>>, SETOGT:{ *:[Other] }) - Complexity = 11
                      // Dst: (SGT:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1)
/* 18607*/          /*Scope*/ 105, /*->18713*/
/* 18608*/            OPC_CheckCondCode, ISD::SETGT,
/* 18610*/            OPC_MoveParent,
/* 18611*/            OPC_CheckType, MVT::f32,
/* 18613*/            OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 18615*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18618*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18621*/            OPC_EmitInteger, MVT::i32, 1, 
/* 18624*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18627*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18630*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18633*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18636*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18639*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18642*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18654*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18657*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18660*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18663*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18675*/            OPC_EmitInteger, MVT::i32, 1, 
/* 18678*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 18681*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18684*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18687*/            OPC_MorphNodeTo1, TARGET_VAL(R600::SGT), 0,
                          MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, (fpimm:{ *:[f32] })<<P:Predicate_FP_ONE>>, (fpimm:{ *:[f32] })<<P:Predicate_FP_ZERO>>, SETGT:{ *:[Other] }) - Complexity = 11
                      // Dst: (SGT:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1)
/* 18713*/          /*Scope*/ 105, /*->18819*/
/* 18714*/            OPC_CheckCondCode, ISD::SETOGE,
/* 18716*/            OPC_MoveParent,
/* 18717*/            OPC_CheckType, MVT::f32,
/* 18719*/            OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 18721*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18724*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18727*/            OPC_EmitInteger, MVT::i32, 1, 
/* 18730*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18733*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18736*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18739*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18742*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18745*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18748*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18760*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18763*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18766*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18769*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18781*/            OPC_EmitInteger, MVT::i32, 1, 
/* 18784*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 18787*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18790*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18793*/            OPC_MorphNodeTo1, TARGET_VAL(R600::SGE), 0,
                          MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, (fpimm:{ *:[f32] })<<P:Predicate_FP_ONE>>, (fpimm:{ *:[f32] })<<P:Predicate_FP_ZERO>>, SETOGE:{ *:[Other] }) - Complexity = 11
                      // Dst: (SGE:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1)
/* 18819*/          /*Scope*/ 105, /*->18925*/
/* 18820*/            OPC_CheckCondCode, ISD::SETGE,
/* 18822*/            OPC_MoveParent,
/* 18823*/            OPC_CheckType, MVT::f32,
/* 18825*/            OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 18827*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18830*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18833*/            OPC_EmitInteger, MVT::i32, 1, 
/* 18836*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18839*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18842*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18845*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18848*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18851*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18854*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18866*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18869*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18872*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18875*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18887*/            OPC_EmitInteger, MVT::i32, 1, 
/* 18890*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 18893*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18896*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18899*/            OPC_MorphNodeTo1, TARGET_VAL(R600::SGE), 0,
                          MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, (fpimm:{ *:[f32] })<<P:Predicate_FP_ONE>>, (fpimm:{ *:[f32] })<<P:Predicate_FP_ZERO>>, SETGE:{ *:[Other] }) - Complexity = 11
                      // Dst: (SGE:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1)
/* 18925*/          /*Scope*/ 105, /*->19031*/
/* 18926*/            OPC_CheckCondCode, ISD::SETUNE,
/* 18928*/            OPC_MoveParent,
/* 18929*/            OPC_CheckType, MVT::f32,
/* 18931*/            OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 18933*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18936*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18939*/            OPC_EmitInteger, MVT::i32, 1, 
/* 18942*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18945*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18948*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18951*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18954*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18957*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18960*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18972*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18975*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18978*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18981*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18993*/            OPC_EmitInteger, MVT::i32, 1, 
/* 18996*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 18999*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19002*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19005*/            OPC_MorphNodeTo1, TARGET_VAL(R600::SNE), 0,
                          MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, (fpimm:{ *:[f32] })<<P:Predicate_FP_ONE>>, (fpimm:{ *:[f32] })<<P:Predicate_FP_ZERO>>, SETUNE:{ *:[Other] }) - Complexity = 11
                      // Dst: (SNE:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1)
/* 19031*/          /*Scope*/ 105, /*->19137*/
/* 19032*/            OPC_CheckCondCode, ISD::SETNE,
/* 19034*/            OPC_MoveParent,
/* 19035*/            OPC_CheckType, MVT::f32,
/* 19037*/            OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 19039*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19042*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19045*/            OPC_EmitInteger, MVT::i32, 1, 
/* 19048*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19051*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19054*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19057*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19060*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19063*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19066*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19078*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19081*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19084*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19087*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19099*/            OPC_EmitInteger, MVT::i32, 1, 
/* 19102*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 19105*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19108*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19111*/            OPC_MorphNodeTo1, TARGET_VAL(R600::SNE), 0,
                          MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, (fpimm:{ *:[f32] })<<P:Predicate_FP_ONE>>, (fpimm:{ *:[f32] })<<P:Predicate_FP_ZERO>>, SETNE:{ *:[Other] }) - Complexity = 11
                      // Dst: (SNE:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1)
/* 19137*/          0, /*End of Scope*/
/* 19138*/        0, /*End of Scope*/
/* 19139*/      /*Scope*/ 108|128,9/*1260*/, /*->20401*/
/* 19141*/        OPC_MoveChild1,
/* 19142*/        OPC_CheckOpcode, TARGET_VAL(ISD::ConstantFP),
/* 19145*/        OPC_CheckPredicate, 3, // Predicate_FP_ZERO
/* 19147*/        OPC_MoveParent,
/* 19148*/        OPC_RecordChild2, // #1 = $src1
/* 19149*/        OPC_RecordChild3, // #2 = $src2
/* 19150*/        OPC_MoveChild4,
/* 19151*/        OPC_Scope, 103, /*->19256*/ // 12 children in Scope
/* 19153*/          OPC_CheckCondCode, ISD::SETOEQ,
/* 19155*/          OPC_MoveParent,
/* 19156*/          OPC_CheckType, MVT::f32,
/* 19158*/          OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 19160*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19163*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19166*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19169*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19172*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19184*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19187*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19190*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19202*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19205*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19208*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19220*/          OPC_EmitInteger, MVT::i32, 1, 
/* 19223*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 19226*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19229*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19232*/          OPC_MorphNodeTo1, TARGET_VAL(R600::CNDE_r600), 0,
                        MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (selectcc:{ *:[f32] } f32:{ *:[f32] }:$src0, (fpimm:{ *:[f32] })<<P:Predicate_FP_ZERO>>, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2, SETOEQ:{ *:[Other] }) - Complexity = 7
                    // Dst: (CNDE_r600:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2)
/* 19256*/        /*Scope*/ 103, /*->19360*/
/* 19257*/          OPC_CheckCondCode, ISD::SETEQ,
/* 19259*/          OPC_MoveParent,
/* 19260*/          OPC_CheckType, MVT::f32,
/* 19262*/          OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 19264*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19267*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19270*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19273*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19276*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19288*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19291*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19294*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19306*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19309*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19312*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19324*/          OPC_EmitInteger, MVT::i32, 1, 
/* 19327*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 19330*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19333*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19336*/          OPC_MorphNodeTo1, TARGET_VAL(R600::CNDE_r600), 0,
                        MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (selectcc:{ *:[f32] } f32:{ *:[f32] }:$src0, (fpimm:{ *:[f32] })<<P:Predicate_FP_ZERO>>, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2, SETEQ:{ *:[Other] }) - Complexity = 7
                    // Dst: (CNDE_r600:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2)
/* 19360*/        /*Scope*/ 103, /*->19464*/
/* 19361*/          OPC_CheckCondCode, ISD::SETOGT,
/* 19363*/          OPC_MoveParent,
/* 19364*/          OPC_CheckType, MVT::f32,
/* 19366*/          OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 19368*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19371*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19374*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19377*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19380*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19392*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19395*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19398*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19410*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19413*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19416*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19428*/          OPC_EmitInteger, MVT::i32, 1, 
/* 19431*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 19434*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19437*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19440*/          OPC_MorphNodeTo1, TARGET_VAL(R600::CNDGT_r600), 0,
                        MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (selectcc:{ *:[f32] } f32:{ *:[f32] }:$src0, (fpimm:{ *:[f32] })<<P:Predicate_FP_ZERO>>, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2, SETOGT:{ *:[Other] }) - Complexity = 7
                    // Dst: (CNDGT_r600:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2)
/* 19464*/        /*Scope*/ 103, /*->19568*/
/* 19465*/          OPC_CheckCondCode, ISD::SETGT,
/* 19467*/          OPC_MoveParent,
/* 19468*/          OPC_CheckType, MVT::f32,
/* 19470*/          OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 19472*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19475*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19478*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19481*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19484*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19496*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19499*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19502*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19514*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19517*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19520*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19532*/          OPC_EmitInteger, MVT::i32, 1, 
/* 19535*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 19538*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19541*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19544*/          OPC_MorphNodeTo1, TARGET_VAL(R600::CNDGT_r600), 0,
                        MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (selectcc:{ *:[f32] } f32:{ *:[f32] }:$src0, (fpimm:{ *:[f32] })<<P:Predicate_FP_ZERO>>, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2, SETGT:{ *:[Other] }) - Complexity = 7
                    // Dst: (CNDGT_r600:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2)
/* 19568*/        /*Scope*/ 103, /*->19672*/
/* 19569*/          OPC_CheckCondCode, ISD::SETOGE,
/* 19571*/          OPC_MoveParent,
/* 19572*/          OPC_CheckType, MVT::f32,
/* 19574*/          OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 19576*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19579*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19582*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19585*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19588*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19600*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19603*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19606*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19618*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19621*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19624*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19636*/          OPC_EmitInteger, MVT::i32, 1, 
/* 19639*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 19642*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19645*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19648*/          OPC_MorphNodeTo1, TARGET_VAL(R600::CNDGE_r600), 0,
                        MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (selectcc:{ *:[f32] } f32:{ *:[f32] }:$src0, (fpimm:{ *:[f32] })<<P:Predicate_FP_ZERO>>, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2, SETOGE:{ *:[Other] }) - Complexity = 7
                    // Dst: (CNDGE_r600:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2)
/* 19672*/        /*Scope*/ 103, /*->19776*/
/* 19673*/          OPC_CheckCondCode, ISD::SETGE,
/* 19675*/          OPC_MoveParent,
/* 19676*/          OPC_CheckType, MVT::f32,
/* 19678*/          OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 19680*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19683*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19686*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19689*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19692*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19704*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19707*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19710*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19722*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19725*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19728*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19740*/          OPC_EmitInteger, MVT::i32, 1, 
/* 19743*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 19746*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19749*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19752*/          OPC_MorphNodeTo1, TARGET_VAL(R600::CNDGE_r600), 0,
                        MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (selectcc:{ *:[f32] } f32:{ *:[f32] }:$src0, (fpimm:{ *:[f32] })<<P:Predicate_FP_ZERO>>, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2, SETGE:{ *:[Other] }) - Complexity = 7
                    // Dst: (CNDGE_r600:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2)
/* 19776*/        /*Scope*/ 103, /*->19880*/
/* 19777*/          OPC_CheckCondCode, ISD::SETOEQ,
/* 19779*/          OPC_MoveParent,
/* 19780*/          OPC_CheckType, MVT::f32,
/* 19782*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 19784*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19787*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19790*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19793*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19796*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19808*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19811*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19814*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19826*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19829*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19832*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19844*/          OPC_EmitInteger, MVT::i32, 1, 
/* 19847*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 19850*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19853*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19856*/          OPC_MorphNodeTo1, TARGET_VAL(R600::CNDE_eg), 0,
                        MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (selectcc:{ *:[f32] } f32:{ *:[f32] }:$src0, (fpimm:{ *:[f32] })<<P:Predicate_FP_ZERO>>, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2, SETOEQ:{ *:[Other] }) - Complexity = 7
                    // Dst: (CNDE_eg:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2)
/* 19880*/        /*Scope*/ 103, /*->19984*/
/* 19881*/          OPC_CheckCondCode, ISD::SETEQ,
/* 19883*/          OPC_MoveParent,
/* 19884*/          OPC_CheckType, MVT::f32,
/* 19886*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 19888*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19891*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19894*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19897*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19900*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19912*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19915*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19918*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19930*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19933*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19936*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19948*/          OPC_EmitInteger, MVT::i32, 1, 
/* 19951*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 19954*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19957*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19960*/          OPC_MorphNodeTo1, TARGET_VAL(R600::CNDE_eg), 0,
                        MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (selectcc:{ *:[f32] } f32:{ *:[f32] }:$src0, (fpimm:{ *:[f32] })<<P:Predicate_FP_ZERO>>, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2, SETEQ:{ *:[Other] }) - Complexity = 7
                    // Dst: (CNDE_eg:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2)
/* 19984*/        /*Scope*/ 103, /*->20088*/
/* 19985*/          OPC_CheckCondCode, ISD::SETOGT,
/* 19987*/          OPC_MoveParent,
/* 19988*/          OPC_CheckType, MVT::f32,
/* 19990*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 19992*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19995*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19998*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20001*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20004*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20016*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20019*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20022*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20034*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20037*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20040*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20052*/          OPC_EmitInteger, MVT::i32, 1, 
/* 20055*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 20058*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20061*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20064*/          OPC_MorphNodeTo1, TARGET_VAL(R600::CNDGT_eg), 0,
                        MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (selectcc:{ *:[f32] } f32:{ *:[f32] }:$src0, (fpimm:{ *:[f32] })<<P:Predicate_FP_ZERO>>, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2, SETOGT:{ *:[Other] }) - Complexity = 7
                    // Dst: (CNDGT_eg:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2)
/* 20088*/        /*Scope*/ 103, /*->20192*/
/* 20089*/          OPC_CheckCondCode, ISD::SETGT,
/* 20091*/          OPC_MoveParent,
/* 20092*/          OPC_CheckType, MVT::f32,
/* 20094*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 20096*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20099*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20102*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20105*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20108*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20120*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20123*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20126*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20138*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20141*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20144*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20156*/          OPC_EmitInteger, MVT::i32, 1, 
/* 20159*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 20162*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20165*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20168*/          OPC_MorphNodeTo1, TARGET_VAL(R600::CNDGT_eg), 0,
                        MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (selectcc:{ *:[f32] } f32:{ *:[f32] }:$src0, (fpimm:{ *:[f32] })<<P:Predicate_FP_ZERO>>, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2, SETGT:{ *:[Other] }) - Complexity = 7
                    // Dst: (CNDGT_eg:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2)
/* 20192*/        /*Scope*/ 103, /*->20296*/
/* 20193*/          OPC_CheckCondCode, ISD::SETOGE,
/* 20195*/          OPC_MoveParent,
/* 20196*/          OPC_CheckType, MVT::f32,
/* 20198*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 20200*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20203*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20206*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20209*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20212*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20224*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20227*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20230*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20242*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20245*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20248*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20260*/          OPC_EmitInteger, MVT::i32, 1, 
/* 20263*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 20266*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20269*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20272*/          OPC_MorphNodeTo1, TARGET_VAL(R600::CNDGE_eg), 0,
                        MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (selectcc:{ *:[f32] } f32:{ *:[f32] }:$src0, (fpimm:{ *:[f32] })<<P:Predicate_FP_ZERO>>, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2, SETOGE:{ *:[Other] }) - Complexity = 7
                    // Dst: (CNDGE_eg:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2)
/* 20296*/        /*Scope*/ 103, /*->20400*/
/* 20297*/          OPC_CheckCondCode, ISD::SETGE,
/* 20299*/          OPC_MoveParent,
/* 20300*/          OPC_CheckType, MVT::f32,
/* 20302*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 20304*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20307*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20310*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20313*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20316*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20328*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20331*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20334*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20346*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20349*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20352*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20364*/          OPC_EmitInteger, MVT::i32, 1, 
/* 20367*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 20370*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20373*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20376*/          OPC_MorphNodeTo1, TARGET_VAL(R600::CNDGE_eg), 0,
                        MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (selectcc:{ *:[f32] } f32:{ *:[f32] }:$src0, (fpimm:{ *:[f32] })<<P:Predicate_FP_ZERO>>, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2, SETGE:{ *:[Other] }) - Complexity = 7
                    // Dst: (CNDGE_eg:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2)
/* 20400*/        0, /*End of Scope*/
/* 20401*/      0, /*End of Scope*/
/* 20402*/    /*Scope*/ 106|128,11/*1514*/, /*->21918*/
/* 20404*/      OPC_CheckChild0Type, MVT::i32,
/* 20406*/      OPC_Scope, 13|128,5/*653*/, /*->21062*/ // 3 children in Scope
/* 20409*/        OPC_RecordChild1, // #1 = $src1
/* 20410*/        OPC_CheckChild2Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20421*/        OPC_CheckChild3Integer, 0, 
/* 20423*/        OPC_MoveChild4,
/* 20424*/        OPC_Scope, 105, /*->20531*/ // 6 children in Scope
/* 20426*/          OPC_CheckCondCode, ISD::SETEQ,
/* 20428*/          OPC_MoveParent,
/* 20429*/          OPC_CheckType, MVT::i32,
/* 20431*/          OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 20433*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20436*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20439*/          OPC_EmitInteger, MVT::i32, 1, 
/* 20442*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20445*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20448*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20451*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20454*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20457*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20460*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20472*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20475*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20478*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20481*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20493*/          OPC_EmitInteger, MVT::i32, 1, 
/* 20496*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 20499*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20502*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20505*/          OPC_MorphNodeTo1, TARGET_VAL(R600::SETE_INT), 0,
                        MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                    // Src: (selectcc:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, -1:{ *:[i32] }, 0:{ *:[i32] }, SETEQ:{ *:[Other] }) - Complexity = 13
                    // Dst: (SETE_INT:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 20531*/        /*Scope*/ 105, /*->20637*/
/* 20532*/          OPC_CheckCondCode, ISD::SETGT,
/* 20534*/          OPC_MoveParent,
/* 20535*/          OPC_CheckType, MVT::i32,
/* 20537*/          OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 20539*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20542*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20545*/          OPC_EmitInteger, MVT::i32, 1, 
/* 20548*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20551*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20554*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20557*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20560*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20563*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20566*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20578*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20581*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20584*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20587*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20599*/          OPC_EmitInteger, MVT::i32, 1, 
/* 20602*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 20605*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20608*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20611*/          OPC_MorphNodeTo1, TARGET_VAL(R600::SETGT_INT), 0,
                        MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                    // Src: (selectcc:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, -1:{ *:[i32] }, 0:{ *:[i32] }, SETGT:{ *:[Other] }) - Complexity = 13
                    // Dst: (SETGT_INT:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 20637*/        /*Scope*/ 105, /*->20743*/
/* 20638*/          OPC_CheckCondCode, ISD::SETGE,
/* 20640*/          OPC_MoveParent,
/* 20641*/          OPC_CheckType, MVT::i32,
/* 20643*/          OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 20645*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20648*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20651*/          OPC_EmitInteger, MVT::i32, 1, 
/* 20654*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20657*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20660*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20663*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20666*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20669*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20672*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20684*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20687*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20690*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20693*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20705*/          OPC_EmitInteger, MVT::i32, 1, 
/* 20708*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 20711*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20714*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20717*/          OPC_MorphNodeTo1, TARGET_VAL(R600::SETGE_INT), 0,
                        MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                    // Src: (selectcc:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, -1:{ *:[i32] }, 0:{ *:[i32] }, SETGE:{ *:[Other] }) - Complexity = 13
                    // Dst: (SETGE_INT:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 20743*/        /*Scope*/ 105, /*->20849*/
/* 20744*/          OPC_CheckCondCode, ISD::SETNE,
/* 20746*/          OPC_MoveParent,
/* 20747*/          OPC_CheckType, MVT::i32,
/* 20749*/          OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 20751*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20754*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20757*/          OPC_EmitInteger, MVT::i32, 1, 
/* 20760*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20763*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20766*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20769*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20772*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20775*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20778*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20790*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20793*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20796*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20799*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20811*/          OPC_EmitInteger, MVT::i32, 1, 
/* 20814*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 20817*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20820*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20823*/          OPC_MorphNodeTo1, TARGET_VAL(R600::SETNE_INT), 0,
                        MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                    // Src: (selectcc:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, -1:{ *:[i32] }, 0:{ *:[i32] }, SETNE:{ *:[Other] }) - Complexity = 13
                    // Dst: (SETNE_INT:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 20849*/        /*Scope*/ 105, /*->20955*/
/* 20850*/          OPC_CheckCondCode, ISD::SETUGT,
/* 20852*/          OPC_MoveParent,
/* 20853*/          OPC_CheckType, MVT::i32,
/* 20855*/          OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 20857*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20860*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20863*/          OPC_EmitInteger, MVT::i32, 1, 
/* 20866*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20869*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20872*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20875*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20878*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20881*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20884*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20896*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20899*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20902*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20905*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20917*/          OPC_EmitInteger, MVT::i32, 1, 
/* 20920*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 20923*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20926*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20929*/          OPC_MorphNodeTo1, TARGET_VAL(R600::SETGT_UINT), 0,
                        MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                    // Src: (selectcc:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, -1:{ *:[i32] }, 0:{ *:[i32] }, SETUGT:{ *:[Other] }) - Complexity = 13
                    // Dst: (SETGT_UINT:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 20955*/        /*Scope*/ 105, /*->21061*/
/* 20956*/          OPC_CheckCondCode, ISD::SETUGE,
/* 20958*/          OPC_MoveParent,
/* 20959*/          OPC_CheckType, MVT::i32,
/* 20961*/          OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 20963*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20966*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20969*/          OPC_EmitInteger, MVT::i32, 1, 
/* 20972*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20975*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20978*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20981*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20984*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20987*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20990*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21002*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21005*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21008*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21011*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21023*/          OPC_EmitInteger, MVT::i32, 1, 
/* 21026*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 21029*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21032*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21035*/          OPC_MorphNodeTo1, TARGET_VAL(R600::SETGE_UINT), 0,
                        MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                    // Src: (selectcc:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, -1:{ *:[i32] }, 0:{ *:[i32] }, SETUGE:{ *:[Other] }) - Complexity = 13
                    // Dst: (SETGE_UINT:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 21061*/        0, /*End of Scope*/
/* 21062*/      /*Scope*/ 95|128,5/*735*/, /*->21799*/
/* 21064*/        OPC_CheckChild1Integer, 0, 
/* 21066*/        OPC_RecordChild2, // #1 = $src1
/* 21067*/        OPC_RecordChild3, // #2 = $src2
/* 21068*/        OPC_MoveChild4,
/* 21069*/        OPC_Scope, 103, /*->21174*/ // 7 children in Scope
/* 21071*/          OPC_CheckCondCode, ISD::SETEQ,
/* 21073*/          OPC_MoveParent,
/* 21074*/          OPC_CheckType, MVT::i32,
/* 21076*/          OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 21078*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21081*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21084*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21087*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21090*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21102*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21105*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21108*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21120*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21123*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21126*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21138*/          OPC_EmitInteger, MVT::i32, 1, 
/* 21141*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 21144*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21147*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21150*/          OPC_MorphNodeTo1, TARGET_VAL(R600::CNDE_INT), 0,
                        MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (selectcc:{ *:[i32] } i32:{ *:[i32] }:$src0, 0:{ *:[i32] }, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2, SETEQ:{ *:[Other] }) - Complexity = 8
                    // Dst: (CNDE_INT:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2)
/* 21174*/        /*Scope*/ 103, /*->21278*/
/* 21175*/          OPC_CheckCondCode, ISD::SETUEQ,
/* 21177*/          OPC_MoveParent,
/* 21178*/          OPC_CheckType, MVT::i32,
/* 21180*/          OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 21182*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21185*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21188*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21191*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21194*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21206*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21209*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21212*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21224*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21227*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21230*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21242*/          OPC_EmitInteger, MVT::i32, 1, 
/* 21245*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 21248*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21251*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21254*/          OPC_MorphNodeTo1, TARGET_VAL(R600::CNDE_INT), 0,
                        MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (selectcc:{ *:[i32] } i32:{ *:[i32] }:$src0, 0:{ *:[i32] }, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2, SETUEQ:{ *:[Other] }) - Complexity = 8
                    // Dst: (CNDE_INT:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2)
/* 21278*/        /*Scope*/ 103, /*->21382*/
/* 21279*/          OPC_CheckCondCode, ISD::SETGE,
/* 21281*/          OPC_MoveParent,
/* 21282*/          OPC_CheckType, MVT::i32,
/* 21284*/          OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 21286*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21289*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21292*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21295*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21298*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21310*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21313*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21316*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21328*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21331*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21334*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21346*/          OPC_EmitInteger, MVT::i32, 1, 
/* 21349*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 21352*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21355*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21358*/          OPC_MorphNodeTo1, TARGET_VAL(R600::CNDGE_INT), 0,
                        MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (selectcc:{ *:[i32] } i32:{ *:[i32] }:$src0, 0:{ *:[i32] }, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2, SETGE:{ *:[Other] }) - Complexity = 8
                    // Dst: (CNDGE_INT:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2)
/* 21382*/        /*Scope*/ 103, /*->21486*/
/* 21383*/          OPC_CheckCondCode, ISD::SETGT,
/* 21385*/          OPC_MoveParent,
/* 21386*/          OPC_CheckType, MVT::i32,
/* 21388*/          OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 21390*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21393*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21396*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21399*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21402*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21414*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21417*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21420*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21432*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21435*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21438*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21450*/          OPC_EmitInteger, MVT::i32, 1, 
/* 21453*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 21456*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21459*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21462*/          OPC_MorphNodeTo1, TARGET_VAL(R600::CNDGT_INT), 0,
                        MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (selectcc:{ *:[i32] } i32:{ *:[i32] }:$src0, 0:{ *:[i32] }, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2, SETGT:{ *:[Other] }) - Complexity = 8
                    // Dst: (CNDGT_INT:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2)
/* 21486*/        /*Scope*/ 103, /*->21590*/
/* 21487*/          OPC_CheckCondCode, ISD::SETEQ,
/* 21489*/          OPC_MoveParent,
/* 21490*/          OPC_CheckType, MVT::f32,
/* 21492*/          OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 21494*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21497*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21500*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21503*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21506*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21518*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21521*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21524*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21536*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21539*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21542*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21554*/          OPC_EmitInteger, MVT::i32, 1, 
/* 21557*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 21560*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21563*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21566*/          OPC_MorphNodeTo1, TARGET_VAL(R600::CNDE_INT), 0,
                        MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (selectcc:{ *:[f32] } i32:{ *:[i32] }:$src0, 0:{ *:[i32] }, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2, SETEQ:{ *:[Other] }) - Complexity = 8
                    // Dst: (CNDE_INT:{ *:[f32] } ?:{ *:[i32] }:$src0, ?:{ *:[f32] }:$src1, ?:{ *:[f32] }:$src2)
/* 21590*/        /*Scope*/ 103, /*->21694*/
/* 21591*/          OPC_CheckCondCode, ISD::SETGT,
/* 21593*/          OPC_MoveParent,
/* 21594*/          OPC_CheckType, MVT::f32,
/* 21596*/          OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 21598*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21601*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21604*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21607*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21610*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21622*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21625*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21628*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21640*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21643*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21646*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21658*/          OPC_EmitInteger, MVT::i32, 1, 
/* 21661*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 21664*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21667*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21670*/          OPC_MorphNodeTo1, TARGET_VAL(R600::CNDGT_INT), 0,
                        MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (selectcc:{ *:[f32] } i32:{ *:[i32] }:$src0, 0:{ *:[i32] }, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2, SETGT:{ *:[Other] }) - Complexity = 8
                    // Dst: (CNDGT_INT:{ *:[f32] } ?:{ *:[i32] }:$src0, ?:{ *:[f32] }:$src1, ?:{ *:[f32] }:$src2)
/* 21694*/        /*Scope*/ 103, /*->21798*/
/* 21695*/          OPC_CheckCondCode, ISD::SETGE,
/* 21697*/          OPC_MoveParent,
/* 21698*/          OPC_CheckType, MVT::f32,
/* 21700*/          OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 21702*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21705*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21708*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21711*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21714*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21726*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21729*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21732*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21744*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21747*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21750*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21762*/          OPC_EmitInteger, MVT::i32, 1, 
/* 21765*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 21768*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21771*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21774*/          OPC_MorphNodeTo1, TARGET_VAL(R600::CNDGE_INT), 0,
                        MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (selectcc:{ *:[f32] } i32:{ *:[i32] }:$src0, 0:{ *:[i32] }, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2, SETGE:{ *:[Other] }) - Complexity = 8
                    // Dst: (CNDGE_INT:{ *:[f32] } ?:{ *:[i32] }:$src0, ?:{ *:[f32] }:$src1, ?:{ *:[f32] }:$src2)
/* 21798*/        0, /*End of Scope*/
/* 21799*/      /*Scope*/ 117, /*->21917*/
/* 21800*/        OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21811*/        OPC_RecordChild2, // #1 = $src1
/* 21812*/        OPC_RecordChild3, // #2 = $src2
/* 21813*/        OPC_MoveChild4,
/* 21814*/        OPC_CheckCondCode, ISD::SETGT,
/* 21816*/        OPC_MoveParent,
/* 21817*/        OPC_CheckType, MVT::i32,
/* 21819*/        OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 21821*/        OPC_EmitInteger, MVT::i32, 0, 
/* 21824*/        OPC_EmitInteger, MVT::i32, 0, 
/* 21827*/        OPC_EmitInteger, MVT::i32, 0, 
/* 21830*/        OPC_EmitInteger, MVT::i32, 0, 
/* 21833*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21845*/        OPC_EmitInteger, MVT::i32, 0, 
/* 21848*/        OPC_EmitInteger, MVT::i32, 0, 
/* 21851*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21863*/        OPC_EmitInteger, MVT::i32, 0, 
/* 21866*/        OPC_EmitInteger, MVT::i32, 0, 
/* 21869*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21881*/        OPC_EmitInteger, MVT::i32, 1, 
/* 21884*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 21887*/        OPC_EmitInteger, MVT::i32, 0, 
/* 21890*/        OPC_EmitInteger, MVT::i32, 0, 
/* 21893*/        OPC_MorphNodeTo1, TARGET_VAL(R600::CNDGE_INT), 0,
                      MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (selectcc:{ *:[i32] } i32:{ *:[i32] }:$src0, -1:{ *:[i32] }, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2, SETGT:{ *:[Other] }) - Complexity = 8
                  // Dst: (CNDGE_INT:{ *:[i32] } ?:{ *:[i32] }:$src0, ?:{ *:[i32] }:$src1, ?:{ *:[i32] }:$src2)
/* 21917*/      0, /*End of Scope*/
/* 21918*/    0, /*End of Scope*/
/* 21919*/  /*SwitchOpcode*/ 96|128,7/*992*/, TARGET_VAL(ISD::LOAD),// ->22915
/* 21923*/    OPC_RecordMemRef,
/* 21924*/    OPC_RecordNode, // #0 = 'ld' chained node
/* 21925*/    OPC_RecordChild1, // #1 = $addr
/* 21926*/    OPC_CheckPredicate, 4, // Predicate_unindexedload
/* 21928*/    OPC_Scope, 22, /*->21952*/ // 4 children in Scope
/* 21930*/      OPC_CheckPredicate, 5, // Predicate_load_private
/* 21932*/      OPC_CheckType, MVT::i32,
/* 21934*/      OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 21936*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRIndirect:$addr #2 #3
/* 21939*/      OPC_EmitMergeInputChains1_0,
/* 21940*/      OPC_EmitInteger, MVT::i32, 0, 
/* 21943*/      OPC_MorphNodeTo1, TARGET_VAL(R600::R600_RegisterLoad), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:{ *:[i32] } ADDRIndirect:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load_private>> - Complexity = 13
                // Dst: (R600_RegisterLoad:{ *:[i32] } FRAMEri:{ *:[iPTR] }:$addr, 0:{ *:[i32] })
/* 21952*/    /*Scope*/ 66|128,3/*450*/, /*->22404*/
/* 21954*/      OPC_CheckChild1Type, MVT::i32,
/* 21956*/      OPC_CheckType, MVT::i32,
/* 21958*/      OPC_Scope, 50, /*->22010*/ // 12 children in Scope
/* 21960*/        OPC_CheckPredicate, 6, // Predicate_az_extload
/* 21962*/        OPC_Scope, 22, /*->21986*/ // 2 children in Scope
/* 21964*/          OPC_CheckPredicate, 7, // Predicate_az_extloadi8
/* 21966*/          OPC_CheckPredicate, 8, // Predicate_vtx_id3_az_extloadi8
/* 21968*/          OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 21970*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 21973*/          OPC_EmitMergeInputChains1_0,
/* 21974*/          OPC_EmitInteger, MVT::i8, 3, 
/* 21977*/          OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_8_eg), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi8>><<P:Predicate_vtx_id3_az_extloadi8>> - Complexity = 13
                    // Dst: (VTX_READ_8_eg:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 3:{ *:[i8] })
/* 21986*/        /*Scope*/ 22, /*->22009*/
/* 21987*/          OPC_CheckPredicate, 9, // Predicate_az_extloadi16
/* 21989*/          OPC_CheckPredicate, 8, // Predicate_vtx_id3_az_extloadi16
/* 21991*/          OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 21993*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 21996*/          OPC_EmitMergeInputChains1_0,
/* 21997*/          OPC_EmitInteger, MVT::i8, 3, 
/* 22000*/          OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_16_eg), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi16>><<P:Predicate_vtx_id3_az_extloadi16>> - Complexity = 13
                    // Dst: (VTX_READ_16_eg:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 3:{ *:[i8] })
/* 22009*/        0, /*End of Scope*/
/* 22010*/      /*Scope*/ 22, /*->22033*/
/* 22011*/        OPC_CheckPredicate, 10, // Predicate_load
/* 22013*/        OPC_CheckPredicate, 8, // Predicate_vtx_id3_load
/* 22015*/        OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 22017*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 22020*/        OPC_EmitMergeInputChains1_0,
/* 22021*/        OPC_EmitInteger, MVT::i8, 3, 
/* 22024*/        OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_32_eg), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id3_load>> - Complexity = 13
                  // Dst: (VTX_READ_32_eg:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 3:{ *:[i8] })
/* 22033*/      /*Scope*/ 50, /*->22084*/
/* 22034*/        OPC_CheckPredicate, 6, // Predicate_az_extload
/* 22036*/        OPC_Scope, 22, /*->22060*/ // 2 children in Scope
/* 22038*/          OPC_CheckPredicate, 7, // Predicate_az_extloadi8
/* 22040*/          OPC_CheckPredicate, 11, // Predicate_vtx_id2_az_extloadi8
/* 22042*/          OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 22044*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 22047*/          OPC_EmitMergeInputChains1_0,
/* 22048*/          OPC_EmitInteger, MVT::i8, 2, 
/* 22051*/          OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_8_eg), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi8>><<P:Predicate_vtx_id2_az_extloadi8>> - Complexity = 13
                    // Dst: (VTX_READ_8_eg:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 2:{ *:[i8] })
/* 22060*/        /*Scope*/ 22, /*->22083*/
/* 22061*/          OPC_CheckPredicate, 9, // Predicate_az_extloadi16
/* 22063*/          OPC_CheckPredicate, 11, // Predicate_vtx_id2_az_extloadi16
/* 22065*/          OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 22067*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 22070*/          OPC_EmitMergeInputChains1_0,
/* 22071*/          OPC_EmitInteger, MVT::i8, 2, 
/* 22074*/          OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_16_eg), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi16>><<P:Predicate_vtx_id2_az_extloadi16>> - Complexity = 13
                    // Dst: (VTX_READ_16_eg:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 2:{ *:[i8] })
/* 22083*/        0, /*End of Scope*/
/* 22084*/      /*Scope*/ 22, /*->22107*/
/* 22085*/        OPC_CheckPredicate, 10, // Predicate_load
/* 22087*/        OPC_CheckPredicate, 11, // Predicate_vtx_id2_load
/* 22089*/        OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 22091*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 22094*/        OPC_EmitMergeInputChains1_0,
/* 22095*/        OPC_EmitInteger, MVT::i8, 2, 
/* 22098*/        OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_32_eg), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id2_load>> - Complexity = 13
                  // Dst: (VTX_READ_32_eg:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 2:{ *:[i8] })
/* 22107*/      /*Scope*/ 50, /*->22158*/
/* 22108*/        OPC_CheckPredicate, 6, // Predicate_az_extload
/* 22110*/        OPC_Scope, 22, /*->22134*/ // 2 children in Scope
/* 22112*/          OPC_CheckPredicate, 7, // Predicate_az_extloadi8
/* 22114*/          OPC_CheckPredicate, 12, // Predicate_vtx_id1_az_extloadi8
/* 22116*/          OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 22118*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 22121*/          OPC_EmitMergeInputChains1_0,
/* 22122*/          OPC_EmitInteger, MVT::i8, 1, 
/* 22125*/          OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_8_eg), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi8>><<P:Predicate_vtx_id1_az_extloadi8>> - Complexity = 13
                    // Dst: (VTX_READ_8_eg:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 1:{ *:[i8] })
/* 22134*/        /*Scope*/ 22, /*->22157*/
/* 22135*/          OPC_CheckPredicate, 9, // Predicate_az_extloadi16
/* 22137*/          OPC_CheckPredicate, 12, // Predicate_vtx_id1_az_extloadi16
/* 22139*/          OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 22141*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 22144*/          OPC_EmitMergeInputChains1_0,
/* 22145*/          OPC_EmitInteger, MVT::i8, 1, 
/* 22148*/          OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_16_eg), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi16>><<P:Predicate_vtx_id1_az_extloadi16>> - Complexity = 13
                    // Dst: (VTX_READ_16_eg:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 1:{ *:[i8] })
/* 22157*/        0, /*End of Scope*/
/* 22158*/      /*Scope*/ 22, /*->22181*/
/* 22159*/        OPC_CheckPredicate, 10, // Predicate_load
/* 22161*/        OPC_CheckPredicate, 12, // Predicate_vtx_id1_load
/* 22163*/        OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 22165*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 22168*/        OPC_EmitMergeInputChains1_0,
/* 22169*/        OPC_EmitInteger, MVT::i8, 1, 
/* 22172*/        OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_32_eg), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id1_load>> - Complexity = 13
                  // Dst: (VTX_READ_32_eg:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 1:{ *:[i8] })
/* 22181*/      /*Scope*/ 50, /*->22232*/
/* 22182*/        OPC_CheckPredicate, 6, // Predicate_az_extload
/* 22184*/        OPC_Scope, 22, /*->22208*/ // 2 children in Scope
/* 22186*/          OPC_CheckPredicate, 7, // Predicate_az_extloadi8
/* 22188*/          OPC_CheckPredicate, 8, // Predicate_vtx_id3_az_extloadi8
/* 22190*/          OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 22192*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 22195*/          OPC_EmitMergeInputChains1_0,
/* 22196*/          OPC_EmitInteger, MVT::i8, 3, 
/* 22199*/          OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_8_cm), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi8>><<P:Predicate_vtx_id3_az_extloadi8>> - Complexity = 13
                    // Dst: (VTX_READ_8_cm:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 3:{ *:[i8] })
/* 22208*/        /*Scope*/ 22, /*->22231*/
/* 22209*/          OPC_CheckPredicate, 9, // Predicate_az_extloadi16
/* 22211*/          OPC_CheckPredicate, 8, // Predicate_vtx_id3_az_extloadi16
/* 22213*/          OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 22215*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 22218*/          OPC_EmitMergeInputChains1_0,
/* 22219*/          OPC_EmitInteger, MVT::i8, 3, 
/* 22222*/          OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_16_cm), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi16>><<P:Predicate_vtx_id3_az_extloadi16>> - Complexity = 13
                    // Dst: (VTX_READ_16_cm:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 3:{ *:[i8] })
/* 22231*/        0, /*End of Scope*/
/* 22232*/      /*Scope*/ 22, /*->22255*/
/* 22233*/        OPC_CheckPredicate, 10, // Predicate_load
/* 22235*/        OPC_CheckPredicate, 8, // Predicate_vtx_id3_load
/* 22237*/        OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 22239*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 22242*/        OPC_EmitMergeInputChains1_0,
/* 22243*/        OPC_EmitInteger, MVT::i8, 3, 
/* 22246*/        OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_32_cm), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id3_load>> - Complexity = 13
                  // Dst: (VTX_READ_32_cm:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 3:{ *:[i8] })
/* 22255*/      /*Scope*/ 50, /*->22306*/
/* 22256*/        OPC_CheckPredicate, 6, // Predicate_az_extload
/* 22258*/        OPC_Scope, 22, /*->22282*/ // 2 children in Scope
/* 22260*/          OPC_CheckPredicate, 7, // Predicate_az_extloadi8
/* 22262*/          OPC_CheckPredicate, 11, // Predicate_vtx_id2_az_extloadi8
/* 22264*/          OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 22266*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 22269*/          OPC_EmitMergeInputChains1_0,
/* 22270*/          OPC_EmitInteger, MVT::i8, 2, 
/* 22273*/          OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_8_cm), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi8>><<P:Predicate_vtx_id2_az_extloadi8>> - Complexity = 13
                    // Dst: (VTX_READ_8_cm:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 2:{ *:[i8] })
/* 22282*/        /*Scope*/ 22, /*->22305*/
/* 22283*/          OPC_CheckPredicate, 9, // Predicate_az_extloadi16
/* 22285*/          OPC_CheckPredicate, 11, // Predicate_vtx_id2_az_extloadi16
/* 22287*/          OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 22289*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 22292*/          OPC_EmitMergeInputChains1_0,
/* 22293*/          OPC_EmitInteger, MVT::i8, 2, 
/* 22296*/          OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_16_cm), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi16>><<P:Predicate_vtx_id2_az_extloadi16>> - Complexity = 13
                    // Dst: (VTX_READ_16_cm:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 2:{ *:[i8] })
/* 22305*/        0, /*End of Scope*/
/* 22306*/      /*Scope*/ 22, /*->22329*/
/* 22307*/        OPC_CheckPredicate, 10, // Predicate_load
/* 22309*/        OPC_CheckPredicate, 11, // Predicate_vtx_id2_load
/* 22311*/        OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 22313*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 22316*/        OPC_EmitMergeInputChains1_0,
/* 22317*/        OPC_EmitInteger, MVT::i8, 2, 
/* 22320*/        OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_32_cm), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id2_load>> - Complexity = 13
                  // Dst: (VTX_READ_32_cm:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 2:{ *:[i8] })
/* 22329*/      /*Scope*/ 50, /*->22380*/
/* 22330*/        OPC_CheckPredicate, 6, // Predicate_az_extload
/* 22332*/        OPC_Scope, 22, /*->22356*/ // 2 children in Scope
/* 22334*/          OPC_CheckPredicate, 7, // Predicate_az_extloadi8
/* 22336*/          OPC_CheckPredicate, 12, // Predicate_vtx_id1_az_extloadi8
/* 22338*/          OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 22340*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 22343*/          OPC_EmitMergeInputChains1_0,
/* 22344*/          OPC_EmitInteger, MVT::i8, 1, 
/* 22347*/          OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_8_cm), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi8>><<P:Predicate_vtx_id1_az_extloadi8>> - Complexity = 13
                    // Dst: (VTX_READ_8_cm:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 1:{ *:[i8] })
/* 22356*/        /*Scope*/ 22, /*->22379*/
/* 22357*/          OPC_CheckPredicate, 9, // Predicate_az_extloadi16
/* 22359*/          OPC_CheckPredicate, 12, // Predicate_vtx_id1_az_extloadi16
/* 22361*/          OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 22363*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 22366*/          OPC_EmitMergeInputChains1_0,
/* 22367*/          OPC_EmitInteger, MVT::i8, 1, 
/* 22370*/          OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_16_cm), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi16>><<P:Predicate_vtx_id1_az_extloadi16>> - Complexity = 13
                    // Dst: (VTX_READ_16_cm:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 1:{ *:[i8] })
/* 22379*/        0, /*End of Scope*/
/* 22380*/      /*Scope*/ 22, /*->22403*/
/* 22381*/        OPC_CheckPredicate, 10, // Predicate_load
/* 22383*/        OPC_CheckPredicate, 12, // Predicate_vtx_id1_load
/* 22385*/        OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 22387*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 22390*/        OPC_EmitMergeInputChains1_0,
/* 22391*/        OPC_EmitInteger, MVT::i8, 1, 
/* 22394*/        OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_32_cm), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id1_load>> - Complexity = 13
                  // Dst: (VTX_READ_32_cm:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 1:{ *:[i8] })
/* 22403*/      0, /*End of Scope*/
/* 22404*/    /*Scope*/ 43, /*->22448*/
/* 22405*/      OPC_CheckPredicate, 13, // Predicate_load_local
/* 22407*/      OPC_CheckType, MVT::i32,
/* 22409*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 22411*/      OPC_EmitMergeInputChains1_0,
/* 22412*/      OPC_EmitInteger, MVT::i32, 0, 
/* 22415*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 22427*/      OPC_EmitInteger, MVT::i32, 1, 
/* 22430*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 22433*/      OPC_EmitInteger, MVT::i32, 0, 
/* 22436*/      OPC_MorphNodeTo1, TARGET_VAL(R600::LDS_READ_RET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 6/*#Ops*/, 1, 2, 3, 4, 5, 6, 
                // Src: (ld:{ *:[i32] } R600_Reg32:{ *:[iPTR] }:$src0)<<P:Predicate_unindexedload>><<P:Predicate_load_local>> - Complexity = 4
                // Dst: (LDS_READ_RET:{ *:[i32] } R600_Reg32:{ *:[iPTR] }:$src0)
/* 22448*/    /*Scope*/ 80|128,3/*464*/, /*->22914*/
/* 22450*/      OPC_CheckChild1Type, MVT::i32,
/* 22452*/      OPC_Scope, 45, /*->22499*/ // 5 children in Scope
/* 22454*/        OPC_CheckPredicate, 14, // Predicate_sextload
/* 22456*/        OPC_CheckPredicate, 15, // Predicate_sextloadi8_local
/* 22458*/        OPC_CheckType, MVT::i32,
/* 22460*/        OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 22462*/        OPC_EmitMergeInputChains1_0,
/* 22463*/        OPC_EmitInteger, MVT::i32, 0, 
/* 22466*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 22478*/        OPC_EmitInteger, MVT::i32, 1, 
/* 22481*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 22484*/        OPC_EmitInteger, MVT::i32, 0, 
/* 22487*/        OPC_MorphNodeTo1, TARGET_VAL(R600::LDS_BYTE_READ_RET), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 6/*#Ops*/, 1, 2, 3, 4, 5, 6, 
                  // Src: (ld:{ *:[i32] } i32:{ *:[i32] }:$src0)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8_local>> - Complexity = 4
                  // Dst: (LDS_BYTE_READ_RET:{ *:[i32] } i32:{ *:[i32] }:$src0)
/* 22499*/      /*Scope*/ 45, /*->22545*/
/* 22500*/        OPC_CheckPredicate, 6, // Predicate_az_extload
/* 22502*/        OPC_CheckPredicate, 7, // Predicate_az_extloadi8
/* 22504*/        OPC_CheckType, MVT::i32,
/* 22506*/        OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 22508*/        OPC_EmitMergeInputChains1_0,
/* 22509*/        OPC_EmitInteger, MVT::i32, 0, 
/* 22512*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 22524*/        OPC_EmitInteger, MVT::i32, 1, 
/* 22527*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 22530*/        OPC_EmitInteger, MVT::i32, 0, 
/* 22533*/        OPC_MorphNodeTo1, TARGET_VAL(R600::LDS_UBYTE_READ_RET), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 6/*#Ops*/, 1, 2, 3, 4, 5, 6, 
                  // Src: (ld:{ *:[i32] } i32:{ *:[i32] }:$src0)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi8>> - Complexity = 4
                  // Dst: (LDS_UBYTE_READ_RET:{ *:[i32] } i32:{ *:[i32] }:$src0)
/* 22545*/      /*Scope*/ 45, /*->22591*/
/* 22546*/        OPC_CheckPredicate, 14, // Predicate_sextload
/* 22548*/        OPC_CheckPredicate, 16, // Predicate_sextloadi16_local
/* 22550*/        OPC_CheckType, MVT::i32,
/* 22552*/        OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 22554*/        OPC_EmitMergeInputChains1_0,
/* 22555*/        OPC_EmitInteger, MVT::i32, 0, 
/* 22558*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 22570*/        OPC_EmitInteger, MVT::i32, 1, 
/* 22573*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 22576*/        OPC_EmitInteger, MVT::i32, 0, 
/* 22579*/        OPC_MorphNodeTo1, TARGET_VAL(R600::LDS_SHORT_READ_RET), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 6/*#Ops*/, 1, 2, 3, 4, 5, 6, 
                  // Src: (ld:{ *:[i32] } i32:{ *:[i32] }:$src0)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16_local>> - Complexity = 4
                  // Dst: (LDS_SHORT_READ_RET:{ *:[i32] } i32:{ *:[i32] }:$src0)
/* 22591*/      /*Scope*/ 45, /*->22637*/
/* 22592*/        OPC_CheckPredicate, 6, // Predicate_az_extload
/* 22594*/        OPC_CheckPredicate, 9, // Predicate_az_extloadi16
/* 22596*/        OPC_CheckType, MVT::i32,
/* 22598*/        OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 22600*/        OPC_EmitMergeInputChains1_0,
/* 22601*/        OPC_EmitInteger, MVT::i32, 0, 
/* 22604*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 22616*/        OPC_EmitInteger, MVT::i32, 1, 
/* 22619*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 22622*/        OPC_EmitInteger, MVT::i32, 0, 
/* 22625*/        OPC_MorphNodeTo1, TARGET_VAL(R600::LDS_USHORT_READ_RET), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 6/*#Ops*/, 1, 2, 3, 4, 5, 6, 
                  // Src: (ld:{ *:[i32] } i32:{ *:[i32] }:$src0)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi16>> - Complexity = 4
                  // Dst: (LDS_USHORT_READ_RET:{ *:[i32] } i32:{ *:[i32] }:$src0)
/* 22637*/      /*Scope*/ 18|128,2/*274*/, /*->22913*/
/* 22639*/        OPC_CheckPredicate, 10, // Predicate_load
/* 22641*/        OPC_Scope, 44, /*->22687*/ // 6 children in Scope
/* 22643*/          OPC_CheckPredicate, 8, // Predicate_vtx_id3_load
/* 22645*/          OPC_SwitchType /*2 cases */, 18, MVT::v2i32,// ->22666
/* 22648*/            OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 22650*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 22653*/            OPC_EmitMergeInputChains1_0,
/* 22654*/            OPC_EmitInteger, MVT::i8, 3, 
/* 22657*/            OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_64_eg), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::v2i32, 3/*#Ops*/, 2, 3, 4, 
                      // Src: (ld:{ *:[v2i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id3_load>> - Complexity = 13
                      // Dst: (VTX_READ_64_eg:{ *:[v2i32] } MEMxi:{ *:[i32] }:$src_gpr, 3:{ *:[i8] })
/* 22666*/          /*SwitchType*/ 18, MVT::v4i32,// ->22686
/* 22668*/            OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 22670*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 22673*/            OPC_EmitMergeInputChains1_0,
/* 22674*/            OPC_EmitInteger, MVT::i8, 3, 
/* 22677*/            OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_128_eg), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::v4i32, 3/*#Ops*/, 2, 3, 4, 
                      // Src: (ld:{ *:[v4i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id3_load>> - Complexity = 13
                      // Dst: (VTX_READ_128_eg:{ *:[v4i32] } MEMxi:{ *:[i32] }:$src_gpr, 3:{ *:[i8] })
/* 22686*/          0, // EndSwitchType
/* 22687*/        /*Scope*/ 44, /*->22732*/
/* 22688*/          OPC_CheckPredicate, 11, // Predicate_vtx_id2_load
/* 22690*/          OPC_SwitchType /*2 cases */, 18, MVT::v2i32,// ->22711
/* 22693*/            OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 22695*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 22698*/            OPC_EmitMergeInputChains1_0,
/* 22699*/            OPC_EmitInteger, MVT::i8, 2, 
/* 22702*/            OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_64_eg), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::v2i32, 3/*#Ops*/, 2, 3, 4, 
                      // Src: (ld:{ *:[v2i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id2_load>> - Complexity = 13
                      // Dst: (VTX_READ_64_eg:{ *:[v2i32] } MEMxi:{ *:[i32] }:$src_gpr, 2:{ *:[i8] })
/* 22711*/          /*SwitchType*/ 18, MVT::v4i32,// ->22731
/* 22713*/            OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 22715*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 22718*/            OPC_EmitMergeInputChains1_0,
/* 22719*/            OPC_EmitInteger, MVT::i8, 2, 
/* 22722*/            OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_128_eg), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::v4i32, 3/*#Ops*/, 2, 3, 4, 
                      // Src: (ld:{ *:[v4i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id2_load>> - Complexity = 13
                      // Dst: (VTX_READ_128_eg:{ *:[v4i32] } MEMxi:{ *:[i32] }:$src_gpr, 2:{ *:[i8] })
/* 22731*/          0, // EndSwitchType
/* 22732*/        /*Scope*/ 44, /*->22777*/
/* 22733*/          OPC_CheckPredicate, 12, // Predicate_vtx_id1_load
/* 22735*/          OPC_SwitchType /*2 cases */, 18, MVT::v2i32,// ->22756
/* 22738*/            OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 22740*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 22743*/            OPC_EmitMergeInputChains1_0,
/* 22744*/            OPC_EmitInteger, MVT::i8, 1, 
/* 22747*/            OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_64_eg), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::v2i32, 3/*#Ops*/, 2, 3, 4, 
                      // Src: (ld:{ *:[v2i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id1_load>> - Complexity = 13
                      // Dst: (VTX_READ_64_eg:{ *:[v2i32] } MEMxi:{ *:[i32] }:$src_gpr, 1:{ *:[i8] })
/* 22756*/          /*SwitchType*/ 18, MVT::v4i32,// ->22776
/* 22758*/            OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 22760*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 22763*/            OPC_EmitMergeInputChains1_0,
/* 22764*/            OPC_EmitInteger, MVT::i8, 1, 
/* 22767*/            OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_128_eg), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::v4i32, 3/*#Ops*/, 2, 3, 4, 
                      // Src: (ld:{ *:[v4i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id1_load>> - Complexity = 13
                      // Dst: (VTX_READ_128_eg:{ *:[v4i32] } MEMxi:{ *:[i32] }:$src_gpr, 1:{ *:[i8] })
/* 22776*/          0, // EndSwitchType
/* 22777*/        /*Scope*/ 44, /*->22822*/
/* 22778*/          OPC_CheckPredicate, 8, // Predicate_vtx_id3_load
/* 22780*/          OPC_SwitchType /*2 cases */, 18, MVT::v2i32,// ->22801
/* 22783*/            OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 22785*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 22788*/            OPC_EmitMergeInputChains1_0,
/* 22789*/            OPC_EmitInteger, MVT::i8, 3, 
/* 22792*/            OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_64_cm), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::v2i32, 3/*#Ops*/, 2, 3, 4, 
                      // Src: (ld:{ *:[v2i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id3_load>> - Complexity = 13
                      // Dst: (VTX_READ_64_cm:{ *:[v2i32] } MEMxi:{ *:[i32] }:$src_gpr, 3:{ *:[i8] })
/* 22801*/          /*SwitchType*/ 18, MVT::v4i32,// ->22821
/* 22803*/            OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 22805*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 22808*/            OPC_EmitMergeInputChains1_0,
/* 22809*/            OPC_EmitInteger, MVT::i8, 3, 
/* 22812*/            OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_128_cm), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::v4i32, 3/*#Ops*/, 2, 3, 4, 
                      // Src: (ld:{ *:[v4i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id3_load>> - Complexity = 13
                      // Dst: (VTX_READ_128_cm:{ *:[v4i32] } MEMxi:{ *:[i32] }:$src_gpr, 3:{ *:[i8] })
/* 22821*/          0, // EndSwitchType
/* 22822*/        /*Scope*/ 44, /*->22867*/
/* 22823*/          OPC_CheckPredicate, 11, // Predicate_vtx_id2_load
/* 22825*/          OPC_SwitchType /*2 cases */, 18, MVT::v2i32,// ->22846
/* 22828*/            OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 22830*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 22833*/            OPC_EmitMergeInputChains1_0,
/* 22834*/            OPC_EmitInteger, MVT::i8, 2, 
/* 22837*/            OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_64_cm), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::v2i32, 3/*#Ops*/, 2, 3, 4, 
                      // Src: (ld:{ *:[v2i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id2_load>> - Complexity = 13
                      // Dst: (VTX_READ_64_cm:{ *:[v2i32] } MEMxi:{ *:[i32] }:$src_gpr, 2:{ *:[i8] })
/* 22846*/          /*SwitchType*/ 18, MVT::v4i32,// ->22866
/* 22848*/            OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 22850*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 22853*/            OPC_EmitMergeInputChains1_0,
/* 22854*/            OPC_EmitInteger, MVT::i8, 2, 
/* 22857*/            OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_128_cm), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::v4i32, 3/*#Ops*/, 2, 3, 4, 
                      // Src: (ld:{ *:[v4i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id2_load>> - Complexity = 13
                      // Dst: (VTX_READ_128_cm:{ *:[v4i32] } MEMxi:{ *:[i32] }:$src_gpr, 2:{ *:[i8] })
/* 22866*/          0, // EndSwitchType
/* 22867*/        /*Scope*/ 44, /*->22912*/
/* 22868*/          OPC_CheckPredicate, 12, // Predicate_vtx_id1_load
/* 22870*/          OPC_SwitchType /*2 cases */, 18, MVT::v2i32,// ->22891
/* 22873*/            OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 22875*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 22878*/            OPC_EmitMergeInputChains1_0,
/* 22879*/            OPC_EmitInteger, MVT::i8, 1, 
/* 22882*/            OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_64_cm), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::v2i32, 3/*#Ops*/, 2, 3, 4, 
                      // Src: (ld:{ *:[v2i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id1_load>> - Complexity = 13
                      // Dst: (VTX_READ_64_cm:{ *:[v2i32] } MEMxi:{ *:[i32] }:$src_gpr, 1:{ *:[i8] })
/* 22891*/          /*SwitchType*/ 18, MVT::v4i32,// ->22911
/* 22893*/            OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 22895*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 22898*/            OPC_EmitMergeInputChains1_0,
/* 22899*/            OPC_EmitInteger, MVT::i8, 1, 
/* 22902*/            OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_128_cm), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::v4i32, 3/*#Ops*/, 2, 3, 4, 
                      // Src: (ld:{ *:[v4i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id1_load>> - Complexity = 13
                      // Dst: (VTX_READ_128_cm:{ *:[v4i32] } MEMxi:{ *:[i32] }:$src_gpr, 1:{ *:[i8] })
/* 22911*/          0, // EndSwitchType
/* 22912*/        0, /*End of Scope*/
/* 22913*/      0, /*End of Scope*/
/* 22914*/    0, /*End of Scope*/
/* 22915*/  /*SwitchOpcode*/ 74|128,2/*330*/, TARGET_VAL(ISD::STORE),// ->23249
/* 22919*/    OPC_RecordMemRef,
/* 22920*/    OPC_RecordNode, // #0 = 'st' chained node
/* 22921*/    OPC_RecordChild1, // #1 = $val
/* 22922*/    OPC_Scope, 119|128,1/*247*/, /*->23172*/ // 3 children in Scope
/* 22925*/      OPC_CheckChild1Type, MVT::i32,
/* 22927*/      OPC_RecordChild2, // #2 = $addr
/* 22928*/      OPC_CheckPredicate, 17, // Predicate_unindexedstore
/* 22930*/      OPC_Scope, 20, /*->22952*/ // 3 children in Scope
/* 22932*/        OPC_CheckPredicate, 18, // Predicate_store_private
/* 22934*/        OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 22936*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRIndirect:$addr #3 #4
/* 22939*/        OPC_EmitMergeInputChains1_0,
/* 22940*/        OPC_EmitInteger, MVT::i32, 0, 
/* 22943*/        OPC_MorphNodeTo0, TARGET_VAL(R600::R600_RegisterStore), 0|OPFL_Chain|OPFL_MemRefs,
                      4/*#Ops*/, 1, 3, 4, 5, 
                  // Src: (st i32:{ *:[i32] }:$val, ADDRIndirect:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store_private>> - Complexity = 13
                  // Dst: (R600_RegisterStore i32:{ *:[i32] }:$val, FRAMEri:{ *:[iPTR] }:$addr, 0:{ *:[i32] })
/* 22952*/      /*Scope*/ 58, /*->23011*/
/* 22953*/        OPC_CheckPredicate, 19, // Predicate_store_local
/* 22955*/        OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 22957*/        OPC_EmitMergeInputChains1_0,
/* 22958*/        OPC_EmitInteger, MVT::i32, 0, 
/* 22961*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 22973*/        OPC_EmitInteger, MVT::i32, 0, 
/* 22976*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 22988*/        OPC_EmitInteger, MVT::i32, 1, 
/* 22991*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 22994*/        OPC_EmitInteger, MVT::i32, 0, 
/* 22997*/        OPC_MorphNodeTo0, TARGET_VAL(R600::LDS_WRITE), 0|OPFL_Chain|OPFL_MemRefs,
                      9/*#Ops*/, 2, 3, 4, 1, 5, 6, 7, 8, 9, 
                  // Src: (st R600_Reg32:{ *:[i32] }:$src1, R600_Reg32:{ *:[iPTR] }:$src0)<<P:Predicate_unindexedstore>><<P:Predicate_store_local>> - Complexity = 4
                  // Dst: (LDS_WRITE R600_Reg32:{ *:[iPTR] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 23011*/      /*Scope*/ 30|128,1/*158*/, /*->23171*/
/* 23013*/        OPC_CheckChild2Type, MVT::i32,
/* 23015*/        OPC_Scope, 122, /*->23139*/ // 2 children in Scope
/* 23017*/          OPC_CheckPredicate, 20, // Predicate_truncstore
/* 23019*/          OPC_Scope, 58, /*->23079*/ // 2 children in Scope
/* 23021*/            OPC_CheckPredicate, 15, // Predicate_truncstorei8_local
/* 23023*/            OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 23025*/            OPC_EmitMergeInputChains1_0,
/* 23026*/            OPC_EmitInteger, MVT::i32, 0, 
/* 23029*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23041*/            OPC_EmitInteger, MVT::i32, 0, 
/* 23044*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23056*/            OPC_EmitInteger, MVT::i32, 1, 
/* 23059*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 23062*/            OPC_EmitInteger, MVT::i32, 0, 
/* 23065*/            OPC_MorphNodeTo0, TARGET_VAL(R600::LDS_BYTE_WRITE), 0|OPFL_Chain|OPFL_MemRefs,
                          9/*#Ops*/, 2, 3, 4, 1, 5, 6, 7, 8, 9, 
                      // Src: (st i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src0)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8_local>> - Complexity = 4
                      // Dst: (LDS_BYTE_WRITE i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 23079*/          /*Scope*/ 58, /*->23138*/
/* 23080*/            OPC_CheckPredicate, 16, // Predicate_truncstorei16_local
/* 23082*/            OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 23084*/            OPC_EmitMergeInputChains1_0,
/* 23085*/            OPC_EmitInteger, MVT::i32, 0, 
/* 23088*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23100*/            OPC_EmitInteger, MVT::i32, 0, 
/* 23103*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23115*/            OPC_EmitInteger, MVT::i32, 1, 
/* 23118*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 23121*/            OPC_EmitInteger, MVT::i32, 0, 
/* 23124*/            OPC_MorphNodeTo0, TARGET_VAL(R600::LDS_SHORT_WRITE), 0|OPFL_Chain|OPFL_MemRefs,
                          9/*#Ops*/, 2, 3, 4, 1, 5, 6, 7, 8, 9, 
                      // Src: (st i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src0)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16_local>> - Complexity = 4
                      // Dst: (LDS_SHORT_WRITE i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 23138*/          0, /*End of Scope*/
/* 23139*/        /*Scope*/ 30, /*->23170*/
/* 23140*/          OPC_CheckPredicate, 21, // Predicate_store_global
/* 23142*/          OPC_Scope, 10, /*->23154*/ // 2 children in Scope
/* 23144*/            OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 23146*/            OPC_EmitMergeInputChains1_0,
/* 23147*/            OPC_MorphNodeTo0, TARGET_VAL(R600::RAT_STORE_DWORD32), 0|OPFL_Chain|OPFL_MemRefs,
                          2/*#Ops*/, 1, 2, 
                      // Src: (st i32:{ *:[i32] }:$rw_gpr, i32:{ *:[i32] }:$index_gpr)<<P:Predicate_unindexedstore>><<P:Predicate_store_global>> - Complexity = 4
                      // Dst: (RAT_STORE_DWORD32 i32:{ *:[i32] }:$rw_gpr, i32:{ *:[i32] }:$index_gpr)
/* 23154*/          /*Scope*/ 14, /*->23169*/
/* 23155*/            OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 23157*/            OPC_EmitMergeInputChains1_0,
/* 23158*/            OPC_EmitInteger, MVT::i32, 0, 
/* 23161*/            OPC_MorphNodeTo0, TARGET_VAL(R600::RAT_WRITE_CACHELESS_32_eg), 0|OPFL_Chain|OPFL_MemRefs,
                          3/*#Ops*/, 1, 2, 3, 
                      // Src: (st i32:{ *:[i32] }:$rw_gpr, i32:{ *:[i32] }:$index_gpr)<<P:Predicate_unindexedstore>><<P:Predicate_store_global>> - Complexity = 4
                      // Dst: (RAT_WRITE_CACHELESS_32_eg i32:{ *:[i32] }:$rw_gpr, i32:{ *:[i32] }:$index_gpr)
/* 23169*/          0, /*End of Scope*/
/* 23170*/        0, /*End of Scope*/
/* 23171*/      0, /*End of Scope*/
/* 23172*/    /*Scope*/ 37, /*->23210*/
/* 23173*/      OPC_CheckChild1Type, MVT::v2i32,
/* 23175*/      OPC_RecordChild2, // #2 = $index_gpr
/* 23176*/      OPC_CheckChild2Type, MVT::i32,
/* 23178*/      OPC_CheckPredicate, 17, // Predicate_unindexedstore
/* 23180*/      OPC_CheckPredicate, 21, // Predicate_store_global
/* 23182*/      OPC_Scope, 10, /*->23194*/ // 2 children in Scope
/* 23184*/        OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 23186*/        OPC_EmitMergeInputChains1_0,
/* 23187*/        OPC_MorphNodeTo0, TARGET_VAL(R600::RAT_STORE_DWORD64), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#Ops*/, 1, 2, 
                  // Src: (st v2i32:{ *:[v2i32] }:$rw_gpr, i32:{ *:[i32] }:$index_gpr)<<P:Predicate_unindexedstore>><<P:Predicate_store_global>> - Complexity = 4
                  // Dst: (RAT_STORE_DWORD64 v2i32:{ *:[v2i32] }:$rw_gpr, i32:{ *:[i32] }:$index_gpr)
/* 23194*/      /*Scope*/ 14, /*->23209*/
/* 23195*/        OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 23197*/        OPC_EmitMergeInputChains1_0,
/* 23198*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23201*/        OPC_MorphNodeTo0, TARGET_VAL(R600::RAT_WRITE_CACHELESS_64_eg), 0|OPFL_Chain|OPFL_MemRefs,
                      3/*#Ops*/, 1, 2, 3, 
                  // Src: (st v2i32:{ *:[v2i32] }:$rw_gpr, i32:{ *:[i32] }:$index_gpr)<<P:Predicate_unindexedstore>><<P:Predicate_store_global>> - Complexity = 4
                  // Dst: (RAT_WRITE_CACHELESS_64_eg v2i32:{ *:[v2i32] }:$rw_gpr, i32:{ *:[i32] }:$index_gpr)
/* 23209*/      0, /*End of Scope*/
/* 23210*/    /*Scope*/ 37, /*->23248*/
/* 23211*/      OPC_CheckChild1Type, MVT::v4i32,
/* 23213*/      OPC_RecordChild2, // #2 = $index_gpr
/* 23214*/      OPC_CheckChild2Type, MVT::i32,
/* 23216*/      OPC_CheckPredicate, 17, // Predicate_unindexedstore
/* 23218*/      OPC_CheckPredicate, 21, // Predicate_store_global
/* 23220*/      OPC_Scope, 10, /*->23232*/ // 2 children in Scope
/* 23222*/        OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 23224*/        OPC_EmitMergeInputChains1_0,
/* 23225*/        OPC_MorphNodeTo0, TARGET_VAL(R600::RAT_STORE_DWORD128), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#Ops*/, 1, 2, 
                  // Src: (st v4i32:{ *:[v4i32] }:$rw_gpr, i32:{ *:[i32] }:$index_gpr)<<P:Predicate_unindexedstore>><<P:Predicate_store_global>> - Complexity = 4
                  // Dst: (RAT_STORE_DWORD128 v4i32:{ *:[v4i32] }:$rw_gpr, i32:{ *:[i32] }:$index_gpr)
/* 23232*/      /*Scope*/ 14, /*->23247*/
/* 23233*/        OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 23235*/        OPC_EmitMergeInputChains1_0,
/* 23236*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23239*/        OPC_MorphNodeTo0, TARGET_VAL(R600::RAT_WRITE_CACHELESS_128_eg), 0|OPFL_Chain|OPFL_MemRefs,
                      3/*#Ops*/, 1, 2, 3, 
                  // Src: (st v4i32:{ *:[v4i32] }:$rw_gpr, i32:{ *:[i32] }:$index_gpr)<<P:Predicate_unindexedstore>><<P:Predicate_store_global>> - Complexity = 4
                  // Dst: (RAT_WRITE_CACHELESS_128_eg v4i32:{ *:[v4i32] }:$rw_gpr, i32:{ *:[i32] }:$index_gpr)
/* 23247*/      0, /*End of Scope*/
/* 23248*/    0, /*End of Scope*/
/* 23249*/  /*SwitchOpcode*/ 90|128,7/*986*/, TARGET_VAL(ISD::ADD),// ->24239
/* 23253*/    OPC_Scope, 90|128,1/*218*/, /*->23474*/ // 4 children in Scope
/* 23256*/      OPC_MoveChild0,
/* 23257*/      OPC_CheckOpcode, TARGET_VAL(ISD::INTRINSIC_WO_CHAIN),
/* 23260*/      OPC_Scope, 105, /*->23367*/ // 2 children in Scope
/* 23262*/        OPC_CheckChild0Integer, 53|128,12/*1589*/, 
/* 23265*/        OPC_RecordChild1, // #0 = $src0
/* 23266*/        OPC_RecordChild2, // #1 = $src1
/* 23267*/        OPC_MoveParent,
/* 23268*/        OPC_RecordChild1, // #2 = $src2
/* 23269*/        OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 23271*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23274*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23277*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23280*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23283*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23295*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23298*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23301*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23313*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23316*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23319*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23331*/        OPC_EmitInteger, MVT::i32, 1, 
/* 23334*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 23337*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23340*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23343*/        OPC_MorphNodeTo1, TARGET_VAL(R600::MULADD_UINT24_eg), 0,
                      MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (add:{ *:[i32] } (intrinsic_wo_chain:{ *:[i32] } 1589:{ *:[iPTR] }, i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1), i32:{ *:[i32] }:$src2) - Complexity = 13
                  // Dst: (MULADD_UINT24_eg:{ *:[i32] } ?:{ *:[i32] }:$src0, ?:{ *:[i32] }:$src1, ?:{ *:[i32] }:$src2)
/* 23367*/      /*Scope*/ 105, /*->23473*/
/* 23368*/        OPC_CheckChild0Integer, 52|128,12/*1588*/, 
/* 23371*/        OPC_RecordChild1, // #0 = $src0
/* 23372*/        OPC_RecordChild2, // #1 = $src1
/* 23373*/        OPC_MoveParent,
/* 23374*/        OPC_RecordChild1, // #2 = $src2
/* 23375*/        OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 23377*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23380*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23383*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23386*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23389*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23401*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23404*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23407*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23419*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23422*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23425*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23437*/        OPC_EmitInteger, MVT::i32, 1, 
/* 23440*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 23443*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23446*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23449*/        OPC_MorphNodeTo1, TARGET_VAL(R600::MULADD_INT24_cm), 0,
                      MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (add:{ *:[i32] } (intrinsic_wo_chain:{ *:[i32] } 1588:{ *:[iPTR] }, i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1), i32:{ *:[i32] }:$src2) - Complexity = 13
                  // Dst: (MULADD_INT24_cm:{ *:[i32] } ?:{ *:[i32] }:$src0, ?:{ *:[i32] }:$src1, ?:{ *:[i32] }:$src2)
/* 23473*/      0, /*End of Scope*/
/* 23474*/    /*Scope*/ 89|128,1/*217*/, /*->23693*/
/* 23476*/      OPC_RecordChild0, // #0 = $src2
/* 23477*/      OPC_MoveChild1,
/* 23478*/      OPC_CheckOpcode, TARGET_VAL(ISD::INTRINSIC_WO_CHAIN),
/* 23481*/      OPC_Scope, 104, /*->23587*/ // 2 children in Scope
/* 23483*/        OPC_CheckChild0Integer, 53|128,12/*1589*/, 
/* 23486*/        OPC_RecordChild1, // #1 = $src0
/* 23487*/        OPC_RecordChild2, // #2 = $src1
/* 23488*/        OPC_MoveParent,
/* 23489*/        OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 23491*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23494*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23497*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23500*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23503*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23515*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23518*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23521*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23533*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23536*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23539*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23551*/        OPC_EmitInteger, MVT::i32, 1, 
/* 23554*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 23557*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23560*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23563*/        OPC_MorphNodeTo1, TARGET_VAL(R600::MULADD_UINT24_eg), 0,
                      MVT::i32, 18/*#Ops*/, 3, 4, 1, 5, 6, 7, 2, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (add:{ *:[i32] } i32:{ *:[i32] }:$src2, (intrinsic_wo_chain:{ *:[i32] } 1589:{ *:[iPTR] }, i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)) - Complexity = 13
                  // Dst: (MULADD_UINT24_eg:{ *:[i32] } ?:{ *:[i32] }:$src0, ?:{ *:[i32] }:$src1, ?:{ *:[i32] }:$src2)
/* 23587*/      /*Scope*/ 104, /*->23692*/
/* 23588*/        OPC_CheckChild0Integer, 52|128,12/*1588*/, 
/* 23591*/        OPC_RecordChild1, // #1 = $src0
/* 23592*/        OPC_RecordChild2, // #2 = $src1
/* 23593*/        OPC_MoveParent,
/* 23594*/        OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 23596*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23599*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23602*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23605*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23608*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23620*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23623*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23626*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23638*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23641*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23644*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23656*/        OPC_EmitInteger, MVT::i32, 1, 
/* 23659*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 23662*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23665*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23668*/        OPC_MorphNodeTo1, TARGET_VAL(R600::MULADD_INT24_cm), 0,
                      MVT::i32, 18/*#Ops*/, 3, 4, 1, 5, 6, 7, 2, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (add:{ *:[i32] } i32:{ *:[i32] }:$src2, (intrinsic_wo_chain:{ *:[i32] } 1588:{ *:[iPTR] }, i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)) - Complexity = 13
                  // Dst: (MULADD_INT24_cm:{ *:[i32] } ?:{ *:[i32] }:$src0, ?:{ *:[i32] }:$src1, ?:{ *:[i32] }:$src2)
/* 23692*/      0, /*End of Scope*/
/* 23693*/    /*Scope*/ 89|128,1/*217*/, /*->23912*/
/* 23695*/      OPC_MoveChild0,
/* 23696*/      OPC_SwitchOpcode /*2 cases */, 104, TARGET_VAL(AMDGPUISD::MUL_U24),// ->23804
/* 23700*/        OPC_RecordChild0, // #0 = $src0
/* 23701*/        OPC_RecordChild1, // #1 = $src1
/* 23702*/        OPC_MoveParent,
/* 23703*/        OPC_RecordChild1, // #2 = $src2
/* 23704*/        OPC_CheckType, MVT::i32,
/* 23706*/        OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 23708*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23711*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23714*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23717*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23720*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23732*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23735*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23738*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23750*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23753*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23756*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23768*/        OPC_EmitInteger, MVT::i32, 1, 
/* 23771*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 23774*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23777*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23780*/        OPC_MorphNodeTo1, TARGET_VAL(R600::MULADD_UINT24_eg), 0,
                      MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (add:{ *:[i32] } (AMDGPUmul_u24_impl:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1), i32:{ *:[i32] }:$src2) - Complexity = 8
                  // Dst: (MULADD_UINT24_eg:{ *:[i32] } ?:{ *:[i32] }:$src0, ?:{ *:[i32] }:$src1, ?:{ *:[i32] }:$src2)
/* 23804*/      /*SwitchOpcode*/ 104, TARGET_VAL(AMDGPUISD::MUL_I24),// ->23911
/* 23807*/        OPC_RecordChild0, // #0 = $src0
/* 23808*/        OPC_RecordChild1, // #1 = $src1
/* 23809*/        OPC_MoveParent,
/* 23810*/        OPC_RecordChild1, // #2 = $src2
/* 23811*/        OPC_CheckType, MVT::i32,
/* 23813*/        OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 23815*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23818*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23821*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23824*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23827*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23839*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23842*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23845*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23857*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23860*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23863*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23875*/        OPC_EmitInteger, MVT::i32, 1, 
/* 23878*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 23881*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23884*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23887*/        OPC_MorphNodeTo1, TARGET_VAL(R600::MULADD_INT24_cm), 0,
                      MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (add:{ *:[i32] } (AMDGPUmul_i24_impl:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1), i32:{ *:[i32] }:$src2) - Complexity = 8
                  // Dst: (MULADD_INT24_cm:{ *:[i32] } ?:{ *:[i32] }:$src0, ?:{ *:[i32] }:$src1, ?:{ *:[i32] }:$src2)
/* 23911*/      0, // EndSwitchOpcode
/* 23912*/    /*Scope*/ 68|128,2/*324*/, /*->24238*/
/* 23914*/      OPC_RecordChild0, // #0 = $src2
/* 23915*/      OPC_Scope, 87|128,1/*215*/, /*->24133*/ // 2 children in Scope
/* 23918*/        OPC_MoveChild1,
/* 23919*/        OPC_SwitchOpcode /*2 cases */, 103, TARGET_VAL(AMDGPUISD::MUL_U24),// ->24026
/* 23923*/          OPC_RecordChild0, // #1 = $src0
/* 23924*/          OPC_RecordChild1, // #2 = $src1
/* 23925*/          OPC_MoveParent,
/* 23926*/          OPC_CheckType, MVT::i32,
/* 23928*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 23930*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23933*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23936*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23939*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23942*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23954*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23957*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23960*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23972*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23975*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23978*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23990*/          OPC_EmitInteger, MVT::i32, 1, 
/* 23993*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 23996*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23999*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24002*/          OPC_MorphNodeTo1, TARGET_VAL(R600::MULADD_UINT24_eg), 0,
                        MVT::i32, 18/*#Ops*/, 3, 4, 1, 5, 6, 7, 2, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (add:{ *:[i32] } i32:{ *:[i32] }:$src2, (AMDGPUmul_u24_impl:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)) - Complexity = 8
                    // Dst: (MULADD_UINT24_eg:{ *:[i32] } ?:{ *:[i32] }:$src0, ?:{ *:[i32] }:$src1, ?:{ *:[i32] }:$src2)
/* 24026*/        /*SwitchOpcode*/ 103, TARGET_VAL(AMDGPUISD::MUL_I24),// ->24132
/* 24029*/          OPC_RecordChild0, // #1 = $src0
/* 24030*/          OPC_RecordChild1, // #2 = $src1
/* 24031*/          OPC_MoveParent,
/* 24032*/          OPC_CheckType, MVT::i32,
/* 24034*/          OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 24036*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24039*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24042*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24045*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24048*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24060*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24063*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24066*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24078*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24081*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24084*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24096*/          OPC_EmitInteger, MVT::i32, 1, 
/* 24099*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 24102*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24105*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24108*/          OPC_MorphNodeTo1, TARGET_VAL(R600::MULADD_INT24_cm), 0,
                        MVT::i32, 18/*#Ops*/, 3, 4, 1, 5, 6, 7, 2, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (add:{ *:[i32] } i32:{ *:[i32] }:$src2, (AMDGPUmul_i24_impl:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)) - Complexity = 8
                    // Dst: (MULADD_INT24_cm:{ *:[i32] } ?:{ *:[i32] }:$src0, ?:{ *:[i32] }:$src1, ?:{ *:[i32] }:$src2)
/* 24132*/        0, // EndSwitchOpcode
/* 24133*/      /*Scope*/ 103, /*->24237*/
/* 24134*/        OPC_RecordChild1, // #1 = $src1
/* 24135*/        OPC_CheckType, MVT::i32,
/* 24137*/        OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 24139*/        OPC_EmitInteger, MVT::i32, 0, 
/* 24142*/        OPC_EmitInteger, MVT::i32, 0, 
/* 24145*/        OPC_EmitInteger, MVT::i32, 1, 
/* 24148*/        OPC_EmitInteger, MVT::i32, 0, 
/* 24151*/        OPC_EmitInteger, MVT::i32, 0, 
/* 24154*/        OPC_EmitInteger, MVT::i32, 0, 
/* 24157*/        OPC_EmitInteger, MVT::i32, 0, 
/* 24160*/        OPC_EmitInteger, MVT::i32, 0, 
/* 24163*/        OPC_EmitInteger, MVT::i32, 0, 
/* 24166*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24178*/        OPC_EmitInteger, MVT::i32, 0, 
/* 24181*/        OPC_EmitInteger, MVT::i32, 0, 
/* 24184*/        OPC_EmitInteger, MVT::i32, 0, 
/* 24187*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24199*/        OPC_EmitInteger, MVT::i32, 1, 
/* 24202*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 24205*/        OPC_EmitInteger, MVT::i32, 0, 
/* 24208*/        OPC_EmitInteger, MVT::i32, 0, 
/* 24211*/        OPC_MorphNodeTo1, TARGET_VAL(R600::ADD_INT), 0,
                      MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (add:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                  // Dst: (ADD_INT:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 24237*/      0, /*End of Scope*/
/* 24238*/    0, /*End of Scope*/
/* 24239*/  /*SwitchOpcode*/ 113|128,26/*3441*/, TARGET_VAL(ISD::XOR),// ->27684
/* 24243*/    OPC_Scope, 66|128,3/*450*/, /*->24696*/ // 5 children in Scope
/* 24246*/      OPC_RecordChild0, // #0 = $z
/* 24247*/      OPC_MoveChild1,
/* 24248*/      OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/* 24251*/      OPC_Scope, 91|128,1/*219*/, /*->24473*/ // 2 children in Scope
/* 24254*/        OPC_RecordChild0, // #1 = $x
/* 24255*/        OPC_MoveChild1,
/* 24256*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/* 24259*/        OPC_Scope, 105, /*->24366*/ // 2 children in Scope
/* 24261*/          OPC_RecordChild0, // #2 = $y
/* 24262*/          OPC_CheckChild1Same, 0,
/* 24264*/          OPC_MoveParent,
/* 24265*/          OPC_MoveParent,
/* 24266*/          OPC_CheckType, MVT::i32,
/* 24268*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 24270*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24273*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24276*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24279*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24282*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24294*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24297*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24300*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24312*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24315*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24318*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24330*/          OPC_EmitInteger, MVT::i32, 1, 
/* 24333*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 24336*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24339*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24342*/          OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 3, 4, 1, 5, 6, 7, 2, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (xor:{ *:[i32] } i32:{ *:[i32] }:$z, (and:{ *:[i32] } i32:{ *:[i32] }:$x, (xor:{ *:[i32] } i32:{ *:[i32] }:$y, i32:{ *:[i32] }:$z))) - Complexity = 9
                    // Dst: (BFI_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$x, ?:{ *:[i32] }:$y, ?:{ *:[i32] }:$z)
/* 24366*/        /*Scope*/ 105, /*->24472*/
/* 24367*/          OPC_CheckChild0Same, 0,
/* 24369*/          OPC_RecordChild1, // #2 = $y
/* 24370*/          OPC_MoveParent,
/* 24371*/          OPC_MoveParent,
/* 24372*/          OPC_CheckType, MVT::i32,
/* 24374*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 24376*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24379*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24382*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24385*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24388*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24400*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24403*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24406*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24418*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24421*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24424*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24436*/          OPC_EmitInteger, MVT::i32, 1, 
/* 24439*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 24442*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24445*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24448*/          OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 3, 4, 1, 5, 6, 7, 2, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (xor:{ *:[i32] } i32:{ *:[i32] }:$z, (and:{ *:[i32] } i32:{ *:[i32] }:$x, (xor:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y))) - Complexity = 9
                    // Dst: (BFI_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$x, ?:{ *:[i32] }:$y, ?:{ *:[i32] }:$z)
/* 24472*/        0, /*End of Scope*/
/* 24473*/      /*Scope*/ 92|128,1/*220*/, /*->24695*/
/* 24475*/        OPC_MoveChild0,
/* 24476*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/* 24479*/        OPC_Scope, 106, /*->24587*/ // 2 children in Scope
/* 24481*/          OPC_RecordChild0, // #1 = $y
/* 24482*/          OPC_CheckChild1Same, 0,
/* 24484*/          OPC_MoveParent,
/* 24485*/          OPC_RecordChild1, // #2 = $x
/* 24486*/          OPC_MoveParent,
/* 24487*/          OPC_CheckType, MVT::i32,
/* 24489*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 24491*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24494*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24497*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24500*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24503*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24515*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24518*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24521*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24533*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24536*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24539*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24551*/          OPC_EmitInteger, MVT::i32, 1, 
/* 24554*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 24557*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24560*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24563*/          OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 3, 4, 2, 5, 6, 7, 1, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (xor:{ *:[i32] } i32:{ *:[i32] }:$z, (and:{ *:[i32] } (xor:{ *:[i32] } i32:{ *:[i32] }:$y, i32:{ *:[i32] }:$z), i32:{ *:[i32] }:$x)) - Complexity = 9
                    // Dst: (BFI_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$x, ?:{ *:[i32] }:$y, ?:{ *:[i32] }:$z)
/* 24587*/        /*Scope*/ 106, /*->24694*/
/* 24588*/          OPC_CheckChild0Same, 0,
/* 24590*/          OPC_RecordChild1, // #1 = $y
/* 24591*/          OPC_MoveParent,
/* 24592*/          OPC_RecordChild1, // #2 = $x
/* 24593*/          OPC_MoveParent,
/* 24594*/          OPC_CheckType, MVT::i32,
/* 24596*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 24598*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24601*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24604*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24607*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24610*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24622*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24625*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24628*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24640*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24643*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24646*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24658*/          OPC_EmitInteger, MVT::i32, 1, 
/* 24661*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 24664*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24667*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24670*/          OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 3, 4, 2, 5, 6, 7, 1, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (xor:{ *:[i32] } i32:{ *:[i32] }:$z, (and:{ *:[i32] } (xor:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$x)) - Complexity = 9
                    // Dst: (BFI_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$x, ?:{ *:[i32] }:$y, ?:{ *:[i32] }:$z)
/* 24694*/        0, /*End of Scope*/
/* 24695*/      0, /*End of Scope*/
/* 24696*/    /*Scope*/ 56|128,3/*440*/, /*->25138*/
/* 24698*/      OPC_MoveChild0,
/* 24699*/      OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/* 24702*/      OPC_Scope, 87|128,1/*215*/, /*->24920*/ // 2 children in Scope
/* 24705*/        OPC_RecordChild0, // #0 = $x
/* 24706*/        OPC_MoveChild1,
/* 24707*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/* 24710*/        OPC_RecordChild0, // #1 = $y
/* 24711*/        OPC_RecordChild1, // #2 = $z
/* 24712*/        OPC_MoveParent,
/* 24713*/        OPC_MoveParent,
/* 24714*/        OPC_CheckType, MVT::i32,
/* 24716*/        OPC_Scope, 100, /*->24818*/ // 2 children in Scope
/* 24718*/          OPC_CheckChild1Same, 2,
/* 24720*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 24722*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24725*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24728*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24731*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24734*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24746*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24749*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24752*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24764*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24767*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24770*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24782*/          OPC_EmitInteger, MVT::i32, 1, 
/* 24785*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 24788*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24791*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24794*/          OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (xor:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$x, (xor:{ *:[i32] } i32:{ *:[i32] }:$y, i32:{ *:[i32] }:$z)), i32:{ *:[i32] }:$z) - Complexity = 9
                    // Dst: (BFI_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$x, ?:{ *:[i32] }:$y, ?:{ *:[i32] }:$z)
/* 24818*/        /*Scope*/ 100, /*->24919*/
/* 24819*/          OPC_CheckChild1Same, 1,
/* 24821*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 24823*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24826*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24829*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24832*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24835*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24847*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24850*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24853*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24865*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24868*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24871*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24883*/          OPC_EmitInteger, MVT::i32, 1, 
/* 24886*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 24889*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24892*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24895*/          OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 2, 8, 9, 10, 1, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (xor:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$x, (xor:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)), i32:{ *:[i32] }:$z) - Complexity = 9
                    // Dst: (BFI_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$x, ?:{ *:[i32] }:$y, ?:{ *:[i32] }:$z)
/* 24919*/        0, /*End of Scope*/
/* 24920*/      /*Scope*/ 87|128,1/*215*/, /*->25137*/
/* 24922*/        OPC_MoveChild0,
/* 24923*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/* 24926*/        OPC_RecordChild0, // #0 = $y
/* 24927*/        OPC_RecordChild1, // #1 = $z
/* 24928*/        OPC_MoveParent,
/* 24929*/        OPC_RecordChild1, // #2 = $x
/* 24930*/        OPC_MoveParent,
/* 24931*/        OPC_CheckType, MVT::i32,
/* 24933*/        OPC_Scope, 100, /*->25035*/ // 2 children in Scope
/* 24935*/          OPC_CheckChild1Same, 1,
/* 24937*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 24939*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24942*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24945*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24948*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24951*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24963*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24966*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24969*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24981*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24984*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24987*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24999*/          OPC_EmitInteger, MVT::i32, 1, 
/* 25002*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 25005*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25008*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25011*/          OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 3, 4, 2, 5, 6, 7, 0, 8, 9, 10, 1, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (xor:{ *:[i32] } (and:{ *:[i32] } (xor:{ *:[i32] } i32:{ *:[i32] }:$y, i32:{ *:[i32] }:$z), i32:{ *:[i32] }:$x), i32:{ *:[i32] }:$z) - Complexity = 9
                    // Dst: (BFI_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$x, ?:{ *:[i32] }:$y, ?:{ *:[i32] }:$z)
/* 25035*/        /*Scope*/ 100, /*->25136*/
/* 25036*/          OPC_CheckChild1Same, 0,
/* 25038*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 25040*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25043*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25046*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25049*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25052*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 25064*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25067*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25070*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 25082*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25085*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25088*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 25100*/          OPC_EmitInteger, MVT::i32, 1, 
/* 25103*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 25106*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25109*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25112*/          OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 3, 4, 2, 5, 6, 7, 1, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (xor:{ *:[i32] } (and:{ *:[i32] } (xor:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$x), i32:{ *:[i32] }:$z) - Complexity = 9
                    // Dst: (BFI_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$x, ?:{ *:[i32] }:$y, ?:{ *:[i32] }:$z)
/* 25136*/        0, /*End of Scope*/
/* 25137*/      0, /*End of Scope*/
/* 25138*/    /*Scope*/ 30|128,9/*1182*/, /*->26322*/
/* 25140*/      OPC_RecordChild0, // #0 = $z
/* 25141*/      OPC_MoveChild1,
/* 25142*/      OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/* 25145*/      OPC_Scope, 73|128,4/*585*/, /*->25733*/ // 2 children in Scope
/* 25148*/        OPC_RecordChild0, // #1 = $x
/* 25149*/        OPC_MoveChild1,
/* 25150*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/* 25153*/        OPC_Scope, 31|128,2/*287*/, /*->25443*/ // 2 children in Scope
/* 25156*/          OPC_RecordChild0, // #2 = $y
/* 25157*/          OPC_CheckChild1Same, 0,
/* 25159*/          OPC_MoveParent,
/* 25160*/          OPC_MoveParent,
/* 25161*/          OPC_CheckType, MVT::i64,
/* 25163*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 25165*/          OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 25168*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25171*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25174*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 25177*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 6,  // Results = #7
/* 25185*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25188*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25191*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 25203*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 25206*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 11,  // Results = #12
/* 25214*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25217*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25220*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 25232*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 25235*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 16,  // Results = #17
/* 25243*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25246*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25249*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 25261*/          OPC_EmitInteger, MVT::i32, 1, 
/* 25264*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 25267*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25270*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25273*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 4, 5, 7, 8, 9, 10, 12, 13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/* 25297*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 25300*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25303*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25306*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 25309*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 29,  // Results = #30
/* 25317*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25320*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25323*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 25335*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 25338*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 34,  // Results = #35
/* 25346*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25349*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25352*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 25364*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 25367*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 39,  // Results = #40
/* 25375*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25378*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25381*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 25393*/          OPC_EmitInteger, MVT::i32, 1, 
/* 25396*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 25399*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25402*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25405*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 27, 28, 30, 31, 32, 33, 35, 36, 37, 38, 40, 41, 42, 43, 44, 45, 46, 47,  // Results = #48
/* 25429*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 25432*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                        MVT::i64, 5/*#Ops*/, 3, 25, 26, 48, 49, 
                    // Src: (xor:{ *:[i64] } i64:{ *:[i64] }:$z, (and:{ *:[i64] } i64:{ *:[i64] }:$x, (xor:{ *:[i64] } i64:{ *:[i64] }:$y, i64:{ *:[i64] }:$z))) - Complexity = 9
                    // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 25443*/        /*Scope*/ 31|128,2/*287*/, /*->25732*/
/* 25445*/          OPC_CheckChild0Same, 0,
/* 25447*/          OPC_RecordChild1, // #2 = $y
/* 25448*/          OPC_MoveParent,
/* 25449*/          OPC_MoveParent,
/* 25450*/          OPC_CheckType, MVT::i64,
/* 25452*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 25454*/          OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 25457*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25460*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25463*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 25466*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 6,  // Results = #7
/* 25474*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25477*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25480*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 25492*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 25495*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 11,  // Results = #12
/* 25503*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25506*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25509*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 25521*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 25524*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 16,  // Results = #17
/* 25532*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25535*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25538*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 25550*/          OPC_EmitInteger, MVT::i32, 1, 
/* 25553*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 25556*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25559*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25562*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 4, 5, 7, 8, 9, 10, 12, 13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/* 25586*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 25589*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25592*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25595*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 25598*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 29,  // Results = #30
/* 25606*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25609*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25612*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 25624*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 25627*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 34,  // Results = #35
/* 25635*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25638*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25641*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 25653*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 25656*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 39,  // Results = #40
/* 25664*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25667*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25670*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 25682*/          OPC_EmitInteger, MVT::i32, 1, 
/* 25685*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 25688*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25691*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25694*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 27, 28, 30, 31, 32, 33, 35, 36, 37, 38, 40, 41, 42, 43, 44, 45, 46, 47,  // Results = #48
/* 25718*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 25721*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                        MVT::i64, 5/*#Ops*/, 3, 25, 26, 48, 49, 
                    // Src: (xor:{ *:[i64] } i64:{ *:[i64] }:$z, (and:{ *:[i64] } i64:{ *:[i64] }:$x, (xor:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$y))) - Complexity = 9
                    // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 25732*/        0, /*End of Scope*/
/* 25733*/      /*Scope*/ 74|128,4/*586*/, /*->26321*/
/* 25735*/        OPC_MoveChild0,
/* 25736*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/* 25739*/        OPC_Scope, 32|128,2/*288*/, /*->26030*/ // 2 children in Scope
/* 25742*/          OPC_RecordChild0, // #1 = $y
/* 25743*/          OPC_CheckChild1Same, 0,
/* 25745*/          OPC_MoveParent,
/* 25746*/          OPC_RecordChild1, // #2 = $x
/* 25747*/          OPC_MoveParent,
/* 25748*/          OPC_CheckType, MVT::i64,
/* 25750*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 25752*/          OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 25755*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25758*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25761*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 25764*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 6,  // Results = #7
/* 25772*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25775*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25778*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 25790*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 25793*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 11,  // Results = #12
/* 25801*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25804*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25807*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 25819*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 25822*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 16,  // Results = #17
/* 25830*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25833*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25836*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 25848*/          OPC_EmitInteger, MVT::i32, 1, 
/* 25851*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 25854*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25857*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25860*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 4, 5, 7, 8, 9, 10, 12, 13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/* 25884*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 25887*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25890*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25893*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 25896*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 29,  // Results = #30
/* 25904*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25907*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25910*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 25922*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 25925*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 34,  // Results = #35
/* 25933*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25936*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25939*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 25951*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 25954*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 39,  // Results = #40
/* 25962*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25965*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25968*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 25980*/          OPC_EmitInteger, MVT::i32, 1, 
/* 25983*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 25986*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25989*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25992*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 27, 28, 30, 31, 32, 33, 35, 36, 37, 38, 40, 41, 42, 43, 44, 45, 46, 47,  // Results = #48
/* 26016*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 26019*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                        MVT::i64, 5/*#Ops*/, 3, 25, 26, 48, 49, 
                    // Src: (xor:{ *:[i64] } i64:{ *:[i64] }:$z, (and:{ *:[i64] } (xor:{ *:[i64] } i64:{ *:[i64] }:$y, i64:{ *:[i64] }:$z), i64:{ *:[i64] }:$x)) - Complexity = 9
                    // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 26030*/        /*Scope*/ 32|128,2/*288*/, /*->26320*/
/* 26032*/          OPC_CheckChild0Same, 0,
/* 26034*/          OPC_RecordChild1, // #1 = $y
/* 26035*/          OPC_MoveParent,
/* 26036*/          OPC_RecordChild1, // #2 = $x
/* 26037*/          OPC_MoveParent,
/* 26038*/          OPC_CheckType, MVT::i64,
/* 26040*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 26042*/          OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 26045*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26048*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26051*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 26054*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 6,  // Results = #7
/* 26062*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26065*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26068*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26080*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 26083*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 11,  // Results = #12
/* 26091*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26094*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26097*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26109*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 26112*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 16,  // Results = #17
/* 26120*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26123*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26126*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26138*/          OPC_EmitInteger, MVT::i32, 1, 
/* 26141*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 26144*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26147*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26150*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 4, 5, 7, 8, 9, 10, 12, 13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/* 26174*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 26177*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26180*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26183*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 26186*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 29,  // Results = #30
/* 26194*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26197*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26200*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26212*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 26215*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 34,  // Results = #35
/* 26223*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26226*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26229*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26241*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 26244*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 39,  // Results = #40
/* 26252*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26255*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26258*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26270*/          OPC_EmitInteger, MVT::i32, 1, 
/* 26273*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 26276*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26279*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26282*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 27, 28, 30, 31, 32, 33, 35, 36, 37, 38, 40, 41, 42, 43, 44, 45, 46, 47,  // Results = #48
/* 26306*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 26309*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                        MVT::i64, 5/*#Ops*/, 3, 25, 26, 48, 49, 
                    // Src: (xor:{ *:[i64] } i64:{ *:[i64] }:$z, (and:{ *:[i64] } (xor:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$y), i64:{ *:[i64] }:$x)) - Complexity = 9
                    // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 26320*/        0, /*End of Scope*/
/* 26321*/      0, /*End of Scope*/
/* 26322*/    /*Scope*/ 20|128,9/*1172*/, /*->27496*/
/* 26324*/      OPC_MoveChild0,
/* 26325*/      OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/* 26328*/      OPC_Scope, 69|128,4/*581*/, /*->26912*/ // 2 children in Scope
/* 26331*/        OPC_RecordChild0, // #0 = $x
/* 26332*/        OPC_MoveChild1,
/* 26333*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/* 26336*/        OPC_RecordChild0, // #1 = $y
/* 26337*/        OPC_RecordChild1, // #2 = $z
/* 26338*/        OPC_MoveParent,
/* 26339*/        OPC_MoveParent,
/* 26340*/        OPC_CheckType, MVT::i64,
/* 26342*/        OPC_Scope, 26|128,2/*282*/, /*->26627*/ // 2 children in Scope
/* 26345*/          OPC_CheckChild1Same, 2,
/* 26347*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 26349*/          OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 26352*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26355*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26358*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 26361*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 6,  // Results = #7
/* 26369*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26372*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26375*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26387*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 26390*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 11,  // Results = #12
/* 26398*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26401*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26404*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26416*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 26419*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 16,  // Results = #17
/* 26427*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26430*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26433*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26445*/          OPC_EmitInteger, MVT::i32, 1, 
/* 26448*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 26451*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26454*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26457*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 4, 5, 7, 8, 9, 10, 12, 13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/* 26481*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 26484*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26487*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26490*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 26493*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 29,  // Results = #30
/* 26501*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26504*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26507*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26519*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 26522*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 34,  // Results = #35
/* 26530*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26533*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26536*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26548*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 26551*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 39,  // Results = #40
/* 26559*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26562*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26565*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26577*/          OPC_EmitInteger, MVT::i32, 1, 
/* 26580*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 26583*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26586*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26589*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 27, 28, 30, 31, 32, 33, 35, 36, 37, 38, 40, 41, 42, 43, 44, 45, 46, 47,  // Results = #48
/* 26613*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 26616*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                        MVT::i64, 5/*#Ops*/, 3, 25, 26, 48, 49, 
                    // Src: (xor:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$x, (xor:{ *:[i64] } i64:{ *:[i64] }:$y, i64:{ *:[i64] }:$z)), i64:{ *:[i64] }:$z) - Complexity = 9
                    // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 26627*/        /*Scope*/ 26|128,2/*282*/, /*->26911*/
/* 26629*/          OPC_CheckChild1Same, 1,
/* 26631*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 26633*/          OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 26636*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26639*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26642*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 26645*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 6,  // Results = #7
/* 26653*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26656*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26659*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26671*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 26674*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 11,  // Results = #12
/* 26682*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26685*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26688*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26700*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 26703*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 16,  // Results = #17
/* 26711*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26714*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26717*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26729*/          OPC_EmitInteger, MVT::i32, 1, 
/* 26732*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 26735*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26738*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26741*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 4, 5, 7, 8, 9, 10, 12, 13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/* 26765*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 26768*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26771*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26774*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 26777*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 29,  // Results = #30
/* 26785*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26788*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26791*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26803*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 26806*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 34,  // Results = #35
/* 26814*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26817*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26820*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26832*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 26835*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 39,  // Results = #40
/* 26843*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26846*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26849*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26861*/          OPC_EmitInteger, MVT::i32, 1, 
/* 26864*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 26867*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26870*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26873*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 27, 28, 30, 31, 32, 33, 35, 36, 37, 38, 40, 41, 42, 43, 44, 45, 46, 47,  // Results = #48
/* 26897*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 26900*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                        MVT::i64, 5/*#Ops*/, 3, 25, 26, 48, 49, 
                    // Src: (xor:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$x, (xor:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$y)), i64:{ *:[i64] }:$z) - Complexity = 9
                    // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 26911*/        0, /*End of Scope*/
/* 26912*/      /*Scope*/ 69|128,4/*581*/, /*->27495*/
/* 26914*/        OPC_MoveChild0,
/* 26915*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/* 26918*/        OPC_RecordChild0, // #0 = $y
/* 26919*/        OPC_RecordChild1, // #1 = $z
/* 26920*/        OPC_MoveParent,
/* 26921*/        OPC_RecordChild1, // #2 = $x
/* 26922*/        OPC_MoveParent,
/* 26923*/        OPC_CheckType, MVT::i64,
/* 26925*/        OPC_Scope, 26|128,2/*282*/, /*->27210*/ // 2 children in Scope
/* 26928*/          OPC_CheckChild1Same, 1,
/* 26930*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 26932*/          OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 26935*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26938*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26941*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 26944*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 6,  // Results = #7
/* 26952*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26955*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26958*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26970*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 26973*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 11,  // Results = #12
/* 26981*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26984*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26987*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26999*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 27002*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 16,  // Results = #17
/* 27010*/          OPC_EmitInteger, MVT::i32, 0, 
/* 27013*/          OPC_EmitInteger, MVT::i32, 0, 
/* 27016*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27028*/          OPC_EmitInteger, MVT::i32, 1, 
/* 27031*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 27034*/          OPC_EmitInteger, MVT::i32, 0, 
/* 27037*/          OPC_EmitInteger, MVT::i32, 0, 
/* 27040*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 4, 5, 7, 8, 9, 10, 12, 13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/* 27064*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 27067*/          OPC_EmitInteger, MVT::i32, 0, 
/* 27070*/          OPC_EmitInteger, MVT::i32, 0, 
/* 27073*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 27076*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 29,  // Results = #30
/* 27084*/          OPC_EmitInteger, MVT::i32, 0, 
/* 27087*/          OPC_EmitInteger, MVT::i32, 0, 
/* 27090*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27102*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 27105*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 34,  // Results = #35
/* 27113*/          OPC_EmitInteger, MVT::i32, 0, 
/* 27116*/          OPC_EmitInteger, MVT::i32, 0, 
/* 27119*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27131*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 27134*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 39,  // Results = #40
/* 27142*/          OPC_EmitInteger, MVT::i32, 0, 
/* 27145*/          OPC_EmitInteger, MVT::i32, 0, 
/* 27148*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27160*/          OPC_EmitInteger, MVT::i32, 1, 
/* 27163*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 27166*/          OPC_EmitInteger, MVT::i32, 0, 
/* 27169*/          OPC_EmitInteger, MVT::i32, 0, 
/* 27172*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 27, 28, 30, 31, 32, 33, 35, 36, 37, 38, 40, 41, 42, 43, 44, 45, 46, 47,  // Results = #48
/* 27196*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 27199*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                        MVT::i64, 5/*#Ops*/, 3, 25, 26, 48, 49, 
                    // Src: (xor:{ *:[i64] } (and:{ *:[i64] } (xor:{ *:[i64] } i64:{ *:[i64] }:$y, i64:{ *:[i64] }:$z), i64:{ *:[i64] }:$x), i64:{ *:[i64] }:$z) - Complexity = 9
                    // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 27210*/        /*Scope*/ 26|128,2/*282*/, /*->27494*/
/* 27212*/          OPC_CheckChild1Same, 0,
/* 27214*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 27216*/          OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 27219*/          OPC_EmitInteger, MVT::i32, 0, 
/* 27222*/          OPC_EmitInteger, MVT::i32, 0, 
/* 27225*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 27228*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 6,  // Results = #7
/* 27236*/          OPC_EmitInteger, MVT::i32, 0, 
/* 27239*/          OPC_EmitInteger, MVT::i32, 0, 
/* 27242*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27254*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 27257*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 11,  // Results = #12
/* 27265*/          OPC_EmitInteger, MVT::i32, 0, 
/* 27268*/          OPC_EmitInteger, MVT::i32, 0, 
/* 27271*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27283*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 27286*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 16,  // Results = #17
/* 27294*/          OPC_EmitInteger, MVT::i32, 0, 
/* 27297*/          OPC_EmitInteger, MVT::i32, 0, 
/* 27300*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27312*/          OPC_EmitInteger, MVT::i32, 1, 
/* 27315*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 27318*/          OPC_EmitInteger, MVT::i32, 0, 
/* 27321*/          OPC_EmitInteger, MVT::i32, 0, 
/* 27324*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 4, 5, 7, 8, 9, 10, 12, 13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/* 27348*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 27351*/          OPC_EmitInteger, MVT::i32, 0, 
/* 27354*/          OPC_EmitInteger, MVT::i32, 0, 
/* 27357*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 27360*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 29,  // Results = #30
/* 27368*/          OPC_EmitInteger, MVT::i32, 0, 
/* 27371*/          OPC_EmitInteger, MVT::i32, 0, 
/* 27374*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27386*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 27389*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 34,  // Results = #35
/* 27397*/          OPC_EmitInteger, MVT::i32, 0, 
/* 27400*/          OPC_EmitInteger, MVT::i32, 0, 
/* 27403*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27415*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 27418*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 39,  // Results = #40
/* 27426*/          OPC_EmitInteger, MVT::i32, 0, 
/* 27429*/          OPC_EmitInteger, MVT::i32, 0, 
/* 27432*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27444*/          OPC_EmitInteger, MVT::i32, 1, 
/* 27447*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 27450*/          OPC_EmitInteger, MVT::i32, 0, 
/* 27453*/          OPC_EmitInteger, MVT::i32, 0, 
/* 27456*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 27, 28, 30, 31, 32, 33, 35, 36, 37, 38, 40, 41, 42, 43, 44, 45, 46, 47,  // Results = #48
/* 27480*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 27483*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                        MVT::i64, 5/*#Ops*/, 3, 25, 26, 48, 49, 
                    // Src: (xor:{ *:[i64] } (and:{ *:[i64] } (xor:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$y), i64:{ *:[i64] }:$x), i64:{ *:[i64] }:$z) - Complexity = 9
                    // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 27494*/        0, /*End of Scope*/
/* 27495*/      0, /*End of Scope*/
/* 27496*/    /*Scope*/ 57|128,1/*185*/, /*->27683*/
/* 27498*/      OPC_RecordChild0, // #0 = $src0
/* 27499*/      OPC_CheckType, MVT::i32,
/* 27501*/      OPC_Scope, 77, /*->27580*/ // 2 children in Scope
/* 27503*/        OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27514*/        OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 27516*/        OPC_EmitInteger, MVT::i32, 1, 
/* 27519*/        OPC_EmitInteger, MVT::i32, 0, 
/* 27522*/        OPC_EmitInteger, MVT::i32, 0, 
/* 27525*/        OPC_EmitInteger, MVT::i32, 0, 
/* 27528*/        OPC_EmitInteger, MVT::i32, 0, 
/* 27531*/        OPC_EmitInteger, MVT::i32, 0, 
/* 27534*/        OPC_EmitInteger, MVT::i32, 0, 
/* 27537*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27549*/        OPC_EmitInteger, MVT::i32, 1, 
/* 27552*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 27555*/        OPC_EmitInteger, MVT::i32, 0, 
/* 27558*/        OPC_EmitInteger, MVT::i32, 0, 
/* 27561*/        OPC_MorphNodeTo1, TARGET_VAL(R600::NOT_INT), 0,
                      MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                  // Src: (xor:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, -1:{ *:[i32] }) - Complexity = 8
                  // Dst: (NOT_INT:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0)
/* 27580*/      /*Scope*/ 101, /*->27682*/
/* 27581*/        OPC_RecordChild1, // #1 = $src1
/* 27582*/        OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 27584*/        OPC_EmitInteger, MVT::i32, 0, 
/* 27587*/        OPC_EmitInteger, MVT::i32, 0, 
/* 27590*/        OPC_EmitInteger, MVT::i32, 1, 
/* 27593*/        OPC_EmitInteger, MVT::i32, 0, 
/* 27596*/        OPC_EmitInteger, MVT::i32, 0, 
/* 27599*/        OPC_EmitInteger, MVT::i32, 0, 
/* 27602*/        OPC_EmitInteger, MVT::i32, 0, 
/* 27605*/        OPC_EmitInteger, MVT::i32, 0, 
/* 27608*/        OPC_EmitInteger, MVT::i32, 0, 
/* 27611*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27623*/        OPC_EmitInteger, MVT::i32, 0, 
/* 27626*/        OPC_EmitInteger, MVT::i32, 0, 
/* 27629*/        OPC_EmitInteger, MVT::i32, 0, 
/* 27632*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27644*/        OPC_EmitInteger, MVT::i32, 1, 
/* 27647*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 27650*/        OPC_EmitInteger, MVT::i32, 0, 
/* 27653*/        OPC_EmitInteger, MVT::i32, 0, 
/* 27656*/        OPC_MorphNodeTo1, TARGET_VAL(R600::XOR_INT), 0,
                      MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (xor:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                  // Dst: (XOR_INT:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 27682*/      0, /*End of Scope*/
/* 27683*/    0, /*End of Scope*/
/* 27684*/  /*SwitchOpcode*/ 45, TARGET_VAL(AMDGPUISD::CONST_ADDRESS),// ->27732
/* 27687*/    OPC_RecordChild0, // #0 = $src
/* 27688*/    OPC_CheckChild0Type, MVT::i32,
/* 27690*/    OPC_Scope, 12, /*->27704*/ // 2 children in Scope
/* 27692*/      OPC_CheckType, MVT::i32,
/* 27694*/      OPC_CheckComplexPat, /*CP*/2, /*#*/0, // SelectGlobalValueConstantOffset:$src #1
/* 27697*/      OPC_MorphNodeTo1, TARGET_VAL(R600::CONST_COPY), 0|OPFL_Variadic1,
                    MVT::i32, 1/*#Ops*/, 1, 
                // Src: (CONST_ADDRESS:{ *:[i32] } ADDRGA_CONST_OFFSET:{ *:[i32] }:$src) - Complexity = 9
                // Dst: (CONST_COPY:{ *:[i32] } ADDRGA_CONST_OFFSET:{ *:[i32] }:$src)
/* 27704*/    /*Scope*/ 26, /*->27731*/
/* 27705*/      OPC_RecordChild1, // #1 = $buffer_id
/* 27706*/      OPC_MoveChild1,
/* 27707*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 27710*/      OPC_CheckType, MVT::i32,
/* 27712*/      OPC_MoveParent,
/* 27713*/      OPC_CheckType, MVT::v4i32,
/* 27715*/      OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 27717*/      OPC_CheckComplexPat, /*CP*/3, /*#*/0, // SelectGlobalValueVariableOffset:$ptr #2 #3
/* 27720*/      OPC_EmitConvertToTarget, 1,
/* 27722*/      OPC_MorphNodeTo1, TARGET_VAL(R600::TEX_VTX_CONSTBUF), 0|OPFL_Variadic2,
                    MVT::v4i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (CONST_ADDRESS:{ *:[v4i32] } ADDRGA_VAR_OFFSET:{ *:[i32] }:$ptr, (imm:{ *:[i32] }):$buffer_id) - Complexity = 15
                // Dst: (TEX_VTX_CONSTBUF:{ *:[v4i32] } ADDRGA_VAR_OFFSET:{ *:[i32] }:$ptr, (imm:{ *:[i32] }):$buffer_id)
/* 27731*/    0, /*End of Scope*/
/* 27732*/  /*SwitchOpcode*/ 125|128,1/*253*/, TARGET_VAL(ISD::ATOMIC_LOAD_ADD),// ->27989
/* 27736*/    OPC_RecordMemRef,
/* 27737*/    OPC_RecordNode, // #0 = 'atomic_load_add' chained node
/* 27738*/    OPC_RecordChild1, // #1 = $ptr
/* 27739*/    OPC_CheckChild1Type, MVT::i32,
/* 27741*/    OPC_CheckType, MVT::i32,
/* 27743*/    OPC_Scope, 63, /*->27808*/ // 3 children in Scope
/* 27745*/      OPC_CheckChild2Integer, 1, 
/* 27747*/      OPC_CheckPredicate, 22, // Predicate_atomic_load_add_global_noret_32
/* 27749*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 27751*/      OPC_EmitMergeInputChains1_0,
/* 27752*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    MVT::v4i32, 0/*#Ops*/,  // Results = #2
/* 27758*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27770*/      OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                    MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/* 27777*/      OPC_EmitInteger, MVT::i32, R600::sub0,
/* 27780*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4i32, 3/*#Ops*/, 2, 4, 5,  // Results = #6
/* 27789*/      OPC_EmitNode1, TARGET_VAL(R600::RAT_ATOMIC_INC_UINT_NORET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::v4i32, 2/*#Ops*/, 6, 1,  // Results = #7
/* 27797*/      OPC_EmitInteger, MVT::i32, R600::sub1,
/* 27800*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0|OPFL_Chain,
                    MVT::i32, 2/*#Ops*/, 7, 8, 
                // Src: (atomic_load_add:{ *:[i32] } i32:{ *:[i32] }:$ptr, 1:{ *:[i32] })<<P:Predicate_atomic_load_add_global_noret_32>> - Complexity = 9
                // Dst: (EXTRACT_SUBREG:{ *:[i32] } (RAT_ATOMIC_INC_UINT_NORET:{ *:[v4i32] } (INSERT_SUBREG:{ *:[v4i32] } (IMPLICIT_DEF:{ *:[v4i32] }), (MOV_IMM_I32:{ *:[i32] } -1:{ *:[i32] }), sub0:{ *:[i32] }), ?:{ *:[i32] }:$ptr), sub1:{ *:[i32] })
/* 27808*/    /*Scope*/ 72, /*->27881*/
/* 27809*/      OPC_CheckChild2Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27820*/      OPC_CheckPredicate, 22, // Predicate_atomic_load_add_global_noret_32
/* 27822*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 27824*/      OPC_EmitMergeInputChains1_0,
/* 27825*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    MVT::v4i32, 0/*#Ops*/,  // Results = #2
/* 27831*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27843*/      OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                    MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/* 27850*/      OPC_EmitInteger, MVT::i32, R600::sub0,
/* 27853*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4i32, 3/*#Ops*/, 2, 4, 5,  // Results = #6
/* 27862*/      OPC_EmitNode1, TARGET_VAL(R600::RAT_ATOMIC_DEC_UINT_NORET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::v4i32, 2/*#Ops*/, 6, 1,  // Results = #7
/* 27870*/      OPC_EmitInteger, MVT::i32, R600::sub1,
/* 27873*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0|OPFL_Chain,
                    MVT::i32, 2/*#Ops*/, 7, 8, 
                // Src: (atomic_load_add:{ *:[i32] } i32:{ *:[i32] }:$ptr, -1:{ *:[i32] })<<P:Predicate_atomic_load_add_global_noret_32>> - Complexity = 9
                // Dst: (EXTRACT_SUBREG:{ *:[i32] } (RAT_ATOMIC_DEC_UINT_NORET:{ *:[v4i32] } (INSERT_SUBREG:{ *:[v4i32] } (IMPLICIT_DEF:{ *:[v4i32] }), (MOV_IMM_I32:{ *:[i32] } -1:{ *:[i32] }), sub0:{ *:[i32] }), ?:{ *:[i32] }:$ptr), sub1:{ *:[i32] })
/* 27881*/    /*Scope*/ 106, /*->27988*/
/* 27882*/      OPC_RecordChild2, // #2 = $data
/* 27883*/      OPC_Scope, 42, /*->27927*/ // 2 children in Scope
/* 27885*/        OPC_CheckPredicate, 22, // Predicate_atomic_load_add_global_noret_32
/* 27887*/        OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 27889*/        OPC_EmitMergeInputChains1_0,
/* 27890*/        OPC_EmitNode1, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      MVT::v4i32, 0/*#Ops*/,  // Results = #3
/* 27896*/        OPC_EmitInteger, MVT::i32, R600::sub0,
/* 27899*/        OPC_EmitNode1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      MVT::v4i32, 3/*#Ops*/, 3, 2, 4,  // Results = #5
/* 27908*/        OPC_EmitNode1, TARGET_VAL(R600::RAT_ATOMIC_ADD_NORET), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::v4i32, 2/*#Ops*/, 5, 1,  // Results = #6
/* 27916*/        OPC_EmitInteger, MVT::i32, R600::sub1,
/* 27919*/        OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0|OPFL_Chain,
                      MVT::i32, 2/*#Ops*/, 6, 7, 
                  // Src: (atomic_load_add:{ *:[i32] } i32:{ *:[i32] }:$ptr, i32:{ *:[i32] }:$data)<<P:Predicate_atomic_load_add_global_noret_32>> - Complexity = 4
                  // Dst: (EXTRACT_SUBREG:{ *:[i32] } (RAT_ATOMIC_ADD_NORET:{ *:[v4i32] } (INSERT_SUBREG:{ *:[v4i32] } (IMPLICIT_DEF:{ *:[v4i32] }), ?:{ *:[i32] }:$data, sub0:{ *:[i32] }), ?:{ *:[i32] }:$ptr), sub1:{ *:[i32] })
/* 27927*/      /*Scope*/ 59, /*->27987*/
/* 27928*/        OPC_CheckPredicate, 23, // Predicate_atomic_load_add_local_32
/* 27930*/        OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 27932*/        OPC_EmitMergeInputChains1_0,
/* 27933*/        OPC_EmitInteger, MVT::i32, 0, 
/* 27936*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27948*/        OPC_EmitInteger, MVT::i32, 0, 
/* 27951*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27963*/        OPC_EmitInteger, MVT::i32, 1, 
/* 27966*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 27969*/        OPC_EmitInteger, MVT::i32, 0, 
/* 27972*/        OPC_MorphNodeTo1, TARGET_VAL(R600::LDS_ADD_RET), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 9/*#Ops*/, 1, 3, 4, 2, 5, 6, 7, 8, 9, 
                  // Src: (atomic_load_add:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)<<P:Predicate_atomic_load_add_local_32>> - Complexity = 4
                  // Dst: (LDS_ADD_RET:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 27987*/      0, /*End of Scope*/
/* 27988*/    0, /*End of Scope*/
/* 27989*/  /*SwitchOpcode*/ 125|128,1/*253*/, TARGET_VAL(ISD::ATOMIC_LOAD_SUB),// ->28246
/* 27993*/    OPC_RecordMemRef,
/* 27994*/    OPC_RecordNode, // #0 = 'atomic_load_sub' chained node
/* 27995*/    OPC_RecordChild1, // #1 = $ptr
/* 27996*/    OPC_CheckChild1Type, MVT::i32,
/* 27998*/    OPC_CheckType, MVT::i32,
/* 28000*/    OPC_Scope, 72, /*->28074*/ // 3 children in Scope
/* 28002*/      OPC_CheckChild2Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 28013*/      OPC_CheckPredicate, 22, // Predicate_atomic_load_sub_global_noret_32
/* 28015*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 28017*/      OPC_EmitMergeInputChains1_0,
/* 28018*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    MVT::v4i32, 0/*#Ops*/,  // Results = #2
/* 28024*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 28036*/      OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                    MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/* 28043*/      OPC_EmitInteger, MVT::i32, R600::sub0,
/* 28046*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4i32, 3/*#Ops*/, 2, 4, 5,  // Results = #6
/* 28055*/      OPC_EmitNode1, TARGET_VAL(R600::RAT_ATOMIC_INC_UINT_NORET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::v4i32, 2/*#Ops*/, 6, 1,  // Results = #7
/* 28063*/      OPC_EmitInteger, MVT::i32, R600::sub1,
/* 28066*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0|OPFL_Chain,
                    MVT::i32, 2/*#Ops*/, 7, 8, 
                // Src: (atomic_load_sub:{ *:[i32] } i32:{ *:[i32] }:$ptr, -1:{ *:[i32] })<<P:Predicate_atomic_load_sub_global_noret_32>> - Complexity = 9
                // Dst: (EXTRACT_SUBREG:{ *:[i32] } (RAT_ATOMIC_INC_UINT_NORET:{ *:[v4i32] } (INSERT_SUBREG:{ *:[v4i32] } (IMPLICIT_DEF:{ *:[v4i32] }), (MOV_IMM_I32:{ *:[i32] } -1:{ *:[i32] }), sub0:{ *:[i32] }), ?:{ *:[i32] }:$ptr), sub1:{ *:[i32] })
/* 28074*/    /*Scope*/ 63, /*->28138*/
/* 28075*/      OPC_CheckChild2Integer, 1, 
/* 28077*/      OPC_CheckPredicate, 22, // Predicate_atomic_load_sub_global_noret_32
/* 28079*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 28081*/      OPC_EmitMergeInputChains1_0,
/* 28082*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    MVT::v4i32, 0/*#Ops*/,  // Results = #2
/* 28088*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 28100*/      OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                    MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/* 28107*/      OPC_EmitInteger, MVT::i32, R600::sub0,
/* 28110*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4i32, 3/*#Ops*/, 2, 4, 5,  // Results = #6
/* 28119*/      OPC_EmitNode1, TARGET_VAL(R600::RAT_ATOMIC_DEC_UINT_NORET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::v4i32, 2/*#Ops*/, 6, 1,  // Results = #7
/* 28127*/      OPC_EmitInteger, MVT::i32, R600::sub1,
/* 28130*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0|OPFL_Chain,
                    MVT::i32, 2/*#Ops*/, 7, 8, 
                // Src: (atomic_load_sub:{ *:[i32] } i32:{ *:[i32] }:$ptr, 1:{ *:[i32] })<<P:Predicate_atomic_load_sub_global_noret_32>> - Complexity = 9
                // Dst: (EXTRACT_SUBREG:{ *:[i32] } (RAT_ATOMIC_DEC_UINT_NORET:{ *:[v4i32] } (INSERT_SUBREG:{ *:[v4i32] } (IMPLICIT_DEF:{ *:[v4i32] }), (MOV_IMM_I32:{ *:[i32] } -1:{ *:[i32] }), sub0:{ *:[i32] }), ?:{ *:[i32] }:$ptr), sub1:{ *:[i32] })
/* 28138*/    /*Scope*/ 106, /*->28245*/
/* 28139*/      OPC_RecordChild2, // #2 = $data
/* 28140*/      OPC_Scope, 42, /*->28184*/ // 2 children in Scope
/* 28142*/        OPC_CheckPredicate, 22, // Predicate_atomic_load_sub_global_noret_32
/* 28144*/        OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 28146*/        OPC_EmitMergeInputChains1_0,
/* 28147*/        OPC_EmitNode1, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      MVT::v4i32, 0/*#Ops*/,  // Results = #3
/* 28153*/        OPC_EmitInteger, MVT::i32, R600::sub0,
/* 28156*/        OPC_EmitNode1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      MVT::v4i32, 3/*#Ops*/, 3, 2, 4,  // Results = #5
/* 28165*/        OPC_EmitNode1, TARGET_VAL(R600::RAT_ATOMIC_SUB_NORET), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::v4i32, 2/*#Ops*/, 5, 1,  // Results = #6
/* 28173*/        OPC_EmitInteger, MVT::i32, R600::sub1,
/* 28176*/        OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0|OPFL_Chain,
                      MVT::i32, 2/*#Ops*/, 6, 7, 
                  // Src: (atomic_load_sub:{ *:[i32] } i32:{ *:[i32] }:$ptr, i32:{ *:[i32] }:$data)<<P:Predicate_atomic_load_sub_global_noret_32>> - Complexity = 4
                  // Dst: (EXTRACT_SUBREG:{ *:[i32] } (RAT_ATOMIC_SUB_NORET:{ *:[v4i32] } (INSERT_SUBREG:{ *:[v4i32] } (IMPLICIT_DEF:{ *:[v4i32] }), ?:{ *:[i32] }:$data, sub0:{ *:[i32] }), ?:{ *:[i32] }:$ptr), sub1:{ *:[i32] })
/* 28184*/      /*Scope*/ 59, /*->28244*/
/* 28185*/        OPC_CheckPredicate, 23, // Predicate_atomic_load_sub_local_32
/* 28187*/        OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 28189*/        OPC_EmitMergeInputChains1_0,
/* 28190*/        OPC_EmitInteger, MVT::i32, 0, 
/* 28193*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 28205*/        OPC_EmitInteger, MVT::i32, 0, 
/* 28208*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 28220*/        OPC_EmitInteger, MVT::i32, 1, 
/* 28223*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 28226*/        OPC_EmitInteger, MVT::i32, 0, 
/* 28229*/        OPC_MorphNodeTo1, TARGET_VAL(R600::LDS_SUB_RET), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 9/*#Ops*/, 1, 3, 4, 2, 5, 6, 7, 8, 9, 
                  // Src: (atomic_load_sub:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)<<P:Predicate_atomic_load_sub_local_32>> - Complexity = 4
                  // Dst: (LDS_SUB_RET:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 28244*/      0, /*End of Scope*/
/* 28245*/    0, /*End of Scope*/
/* 28246*/  /*SwitchOpcode*/ 25|128,2/*281*/, TARGET_VAL(ISD::EXTRACT_VECTOR_ELT),// ->28531
/* 28250*/    OPC_RecordChild0, // #0 = $src
/* 28251*/    OPC_SwitchType /*2 cases */, 8|128,1/*136*/, MVT::i32,// ->28391
/* 28255*/      OPC_Scope, 82, /*->28339*/ // 2 children in Scope
/* 28257*/        OPC_CheckChild0Type, MVT::v4i32,
/* 28259*/        OPC_Scope, 15, /*->28276*/ // 5 children in Scope
/* 28261*/          OPC_CheckChild1Integer, 0, 
/* 28263*/          OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 28265*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 28268*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (extractelt:{ *:[i32] } v4i32:{ *:[v4i32] }:$src, 0:{ *:[iPTR] }) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[v4i32] }:$src, sub0:{ *:[i32] })
/* 28276*/        /*Scope*/ 15, /*->28292*/
/* 28277*/          OPC_CheckChild1Integer, 1, 
/* 28279*/          OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 28281*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 28284*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (extractelt:{ *:[i32] } v4i32:{ *:[v4i32] }:$src, 1:{ *:[iPTR] }) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[v4i32] }:$src, sub1:{ *:[i32] })
/* 28292*/        /*Scope*/ 15, /*->28308*/
/* 28293*/          OPC_CheckChild1Integer, 2, 
/* 28295*/          OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 28297*/          OPC_EmitInteger, MVT::i32, R600::sub2,
/* 28300*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (extractelt:{ *:[i32] } v4i32:{ *:[v4i32] }:$src, 2:{ *:[iPTR] }) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[v4i32] }:$src, sub2:{ *:[i32] })
/* 28308*/        /*Scope*/ 15, /*->28324*/
/* 28309*/          OPC_CheckChild1Integer, 3, 
/* 28311*/          OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 28313*/          OPC_EmitInteger, MVT::i32, R600::sub3,
/* 28316*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (extractelt:{ *:[i32] } v4i32:{ *:[v4i32] }:$src, 3:{ *:[iPTR] }) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[v4i32] }:$src, sub3:{ *:[i32] })
/* 28324*/        /*Scope*/ 13, /*->28338*/
/* 28325*/          OPC_RecordChild1, // #1 = $index
/* 28326*/          OPC_CheckChild1Type, MVT::i32,
/* 28328*/          OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 28330*/          OPC_MorphNodeTo1, TARGET_VAL(R600::R600_EXTRACT_ELT_V4), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (extractelt:{ *:[i32] } v4i32:{ *:[v4i32] }:$vec, i32:{ *:[i32] }:$index) - Complexity = 3
                    // Dst: (R600_EXTRACT_ELT_V4:{ *:[i32] } ?:{ *:[v4i32] }:$vec, ?:{ *:[i32] }:$index)
/* 28338*/        0, /*End of Scope*/
/* 28339*/      /*Scope*/ 50, /*->28390*/
/* 28340*/        OPC_CheckChild0Type, MVT::v2i32,
/* 28342*/        OPC_Scope, 15, /*->28359*/ // 3 children in Scope
/* 28344*/          OPC_CheckChild1Integer, 0, 
/* 28346*/          OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 28348*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 28351*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (extractelt:{ *:[i32] } v2i32:{ *:[v2i32] }:$src, 0:{ *:[iPTR] }) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[v2i32] }:$src, sub0:{ *:[i32] })
/* 28359*/        /*Scope*/ 15, /*->28375*/
/* 28360*/          OPC_CheckChild1Integer, 1, 
/* 28362*/          OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 28364*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 28367*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (extractelt:{ *:[i32] } v2i32:{ *:[v2i32] }:$src, 1:{ *:[iPTR] }) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[v2i32] }:$src, sub1:{ *:[i32] })
/* 28375*/        /*Scope*/ 13, /*->28389*/
/* 28376*/          OPC_RecordChild1, // #1 = $index
/* 28377*/          OPC_CheckChild1Type, MVT::i32,
/* 28379*/          OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 28381*/          OPC_MorphNodeTo1, TARGET_VAL(R600::R600_EXTRACT_ELT_V2), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (extractelt:{ *:[i32] } v2i32:{ *:[v2i32] }:$vec, i32:{ *:[i32] }:$index) - Complexity = 3
                    // Dst: (R600_EXTRACT_ELT_V2:{ *:[i32] } ?:{ *:[v2i32] }:$vec, ?:{ *:[i32] }:$index)
/* 28389*/        0, /*End of Scope*/
/* 28390*/      0, /*End of Scope*/
/* 28391*/    /*SwitchType*/ 8|128,1/*136*/, MVT::f32,// ->28530
/* 28394*/      OPC_Scope, 82, /*->28478*/ // 2 children in Scope
/* 28396*/        OPC_CheckChild0Type, MVT::v4f32,
/* 28398*/        OPC_Scope, 15, /*->28415*/ // 5 children in Scope
/* 28400*/          OPC_CheckChild1Integer, 0, 
/* 28402*/          OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 28404*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 28407*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::f32, 2/*#Ops*/, 0, 1, 
                    // Src: (extractelt:{ *:[f32] } v4f32:{ *:[v4f32] }:$src, 0:{ *:[iPTR] }) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:{ *:[f32] } ?:{ *:[v4f32] }:$src, sub0:{ *:[i32] })
/* 28415*/        /*Scope*/ 15, /*->28431*/
/* 28416*/          OPC_CheckChild1Integer, 1, 
/* 28418*/          OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 28420*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 28423*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::f32, 2/*#Ops*/, 0, 1, 
                    // Src: (extractelt:{ *:[f32] } v4f32:{ *:[v4f32] }:$src, 1:{ *:[iPTR] }) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:{ *:[f32] } ?:{ *:[v4f32] }:$src, sub1:{ *:[i32] })
/* 28431*/        /*Scope*/ 15, /*->28447*/
/* 28432*/          OPC_CheckChild1Integer, 2, 
/* 28434*/          OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 28436*/          OPC_EmitInteger, MVT::i32, R600::sub2,
/* 28439*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::f32, 2/*#Ops*/, 0, 1, 
                    // Src: (extractelt:{ *:[f32] } v4f32:{ *:[v4f32] }:$src, 2:{ *:[iPTR] }) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:{ *:[f32] } ?:{ *:[v4f32] }:$src, sub2:{ *:[i32] })
/* 28447*/        /*Scope*/ 15, /*->28463*/
/* 28448*/          OPC_CheckChild1Integer, 3, 
/* 28450*/          OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 28452*/          OPC_EmitInteger, MVT::i32, R600::sub3,
/* 28455*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::f32, 2/*#Ops*/, 0, 1, 
                    // Src: (extractelt:{ *:[f32] } v4f32:{ *:[v4f32] }:$src, 3:{ *:[iPTR] }) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:{ *:[f32] } ?:{ *:[v4f32] }:$src, sub3:{ *:[i32] })
/* 28463*/        /*Scope*/ 13, /*->28477*/
/* 28464*/          OPC_RecordChild1, // #1 = $index
/* 28465*/          OPC_CheckChild1Type, MVT::i32,
/* 28467*/          OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 28469*/          OPC_MorphNodeTo1, TARGET_VAL(R600::R600_EXTRACT_ELT_V4), 0,
                        MVT::f32, 2/*#Ops*/, 0, 1, 
                    // Src: (extractelt:{ *:[f32] } v4f32:{ *:[v4f32] }:$vec, i32:{ *:[i32] }:$index) - Complexity = 3
                    // Dst: (R600_EXTRACT_ELT_V4:{ *:[f32] } ?:{ *:[v4f32] }:$vec, ?:{ *:[i32] }:$index)
/* 28477*/        0, /*End of Scope*/
/* 28478*/      /*Scope*/ 50, /*->28529*/
/* 28479*/        OPC_CheckChild0Type, MVT::v2f32,
/* 28481*/        OPC_Scope, 15, /*->28498*/ // 3 children in Scope
/* 28483*/          OPC_CheckChild1Integer, 0, 
/* 28485*/          OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 28487*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 28490*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::f32, 2/*#Ops*/, 0, 1, 
                    // Src: (extractelt:{ *:[f32] } v2f32:{ *:[v2f32] }:$src, 0:{ *:[iPTR] }) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:{ *:[f32] } ?:{ *:[v2f32] }:$src, sub0:{ *:[i32] })
/* 28498*/        /*Scope*/ 15, /*->28514*/
/* 28499*/          OPC_CheckChild1Integer, 1, 
/* 28501*/          OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 28503*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 28506*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::f32, 2/*#Ops*/, 0, 1, 
                    // Src: (extractelt:{ *:[f32] } v2f32:{ *:[v2f32] }:$src, 1:{ *:[iPTR] }) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:{ *:[f32] } ?:{ *:[v2f32] }:$src, sub1:{ *:[i32] })
/* 28514*/        /*Scope*/ 13, /*->28528*/
/* 28515*/          OPC_RecordChild1, // #1 = $index
/* 28516*/          OPC_CheckChild1Type, MVT::i32,
/* 28518*/          OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 28520*/          OPC_MorphNodeTo1, TARGET_VAL(R600::R600_EXTRACT_ELT_V2), 0,
                        MVT::f32, 2/*#Ops*/, 0, 1, 
                    // Src: (extractelt:{ *:[f32] } v2f32:{ *:[v2f32] }:$vec, i32:{ *:[i32] }:$index) - Complexity = 3
                    // Dst: (R600_EXTRACT_ELT_V2:{ *:[f32] } ?:{ *:[v2f32] }:$vec, ?:{ *:[i32] }:$index)
/* 28528*/        0, /*End of Scope*/
/* 28529*/      0, /*End of Scope*/
/* 28530*/    0, // EndSwitchType
/* 28531*/  /*SwitchOpcode*/ 112|128,10/*1392*/, TARGET_VAL(ISD::INTRINSIC_WO_CHAIN),// ->29927
/* 28535*/    OPC_Scope, 108, /*->28645*/ // 9 children in Scope
/* 28537*/      OPC_CheckChild0Integer, 7|128,13/*1671*/, 
/* 28540*/      OPC_RecordChild1, // #0 = $src0
/* 28541*/      OPC_CheckChild1Type, MVT::i32,
/* 28543*/      OPC_RecordChild2, // #1 = $src1
/* 28544*/      OPC_RecordChild3, // #2 = $src2
/* 28545*/      OPC_CheckType, MVT::i32,
/* 28547*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 28549*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28552*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28555*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28558*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28561*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 28573*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28576*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28579*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 28591*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28594*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28597*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 28609*/      OPC_EmitInteger, MVT::i32, 1, 
/* 28612*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 28615*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28618*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28621*/      OPC_MorphNodeTo1, TARGET_VAL(R600::BFE_UINT_eg), 0,
                    MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                // Src: (intrinsic_wo_chain:{ *:[i32] } 1671:{ *:[iPTR] }, i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2) - Complexity = 8
                // Dst: (BFE_UINT_eg:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2)
/* 28645*/    /*Scope*/ 108, /*->28754*/
/* 28646*/      OPC_CheckChild0Integer, 105|128,12/*1641*/, 
/* 28649*/      OPC_RecordChild1, // #0 = $src0
/* 28650*/      OPC_CheckChild1Type, MVT::i32,
/* 28652*/      OPC_RecordChild2, // #1 = $src1
/* 28653*/      OPC_RecordChild3, // #2 = $src2
/* 28654*/      OPC_CheckType, MVT::i32,
/* 28656*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 28658*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28661*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28664*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28667*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28670*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 28682*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28685*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28688*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 28700*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28703*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28706*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 28718*/      OPC_EmitInteger, MVT::i32, 1, 
/* 28721*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 28724*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28727*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28730*/      OPC_MorphNodeTo1, TARGET_VAL(R600::BFE_INT_eg), 0,
                    MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                // Src: (intrinsic_wo_chain:{ *:[i32] } 1641:{ *:[iPTR] }, i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2) - Complexity = 8
                // Dst: (BFE_INT_eg:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2)
/* 28754*/    /*Scope*/ 105, /*->28860*/
/* 28755*/      OPC_CheckChild0Integer, 53|128,12/*1589*/, 
/* 28758*/      OPC_RecordChild1, // #0 = $src0
/* 28759*/      OPC_RecordChild2, // #1 = $src1
/* 28760*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 28762*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28765*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28768*/      OPC_EmitInteger, MVT::i32, 1, 
/* 28771*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28774*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28777*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28780*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28783*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28786*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28789*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 28801*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28804*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28807*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28810*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 28822*/      OPC_EmitInteger, MVT::i32, 1, 
/* 28825*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 28828*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28831*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28834*/      OPC_MorphNodeTo1, TARGET_VAL(R600::MUL_UINT24_eg), 0,
                    MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (intrinsic_wo_chain:{ *:[i32] } 1589:{ *:[iPTR] }, i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1) - Complexity = 8
                // Dst: (MUL_UINT24_eg:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 28860*/    /*Scope*/ 105, /*->28966*/
/* 28861*/      OPC_CheckChild0Integer, 52|128,12/*1588*/, 
/* 28864*/      OPC_RecordChild1, // #0 = $src0
/* 28865*/      OPC_RecordChild2, // #1 = $src1
/* 28866*/      OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 28868*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28871*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28874*/      OPC_EmitInteger, MVT::i32, 1, 
/* 28877*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28880*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28883*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28886*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28889*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28892*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28895*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 28907*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28910*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28913*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28916*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 28928*/      OPC_EmitInteger, MVT::i32, 1, 
/* 28931*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 28934*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28937*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28940*/      OPC_MorphNodeTo1, TARGET_VAL(R600::MUL_INT24_cm), 0,
                    MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (intrinsic_wo_chain:{ *:[i32] } 1588:{ *:[iPTR] }, i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1) - Complexity = 8
                // Dst: (MUL_INT24_cm:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 28966*/    /*Scope*/ 46|128,3/*430*/, /*->29398*/
/* 28968*/      OPC_CheckChild0Integer, 78|128,12/*1614*/, 
/* 28971*/      OPC_Scope, 85|128,1/*213*/, /*->29187*/ // 2 children in Scope
/* 28974*/        OPC_MoveChild1,
/* 28975*/        OPC_CheckOpcode, TARGET_VAL(ISD::FSQRT),
/* 28978*/        OPC_RecordChild0, // #0 = $src
/* 28979*/        OPC_CheckType, MVT::f32,
/* 28981*/        OPC_MoveParent,
/* 28982*/        OPC_CheckType, MVT::f32,
/* 28984*/        OPC_Scope, 66, /*->29052*/ // 3 children in Scope
/* 28986*/          OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 28988*/          OPC_EmitInteger, MVT::i32, 1, 
/* 28991*/          OPC_EmitInteger, MVT::i32, 0, 
/* 28994*/          OPC_EmitInteger, MVT::i32, 0, 
/* 28997*/          OPC_EmitInteger, MVT::i32, 0, 
/* 29000*/          OPC_EmitInteger, MVT::i32, 0, 
/* 29003*/          OPC_EmitInteger, MVT::i32, 0, 
/* 29006*/          OPC_EmitInteger, MVT::i32, 0, 
/* 29009*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 29021*/          OPC_EmitInteger, MVT::i32, 1, 
/* 29024*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 29027*/          OPC_EmitInteger, MVT::i32, 0, 
/* 29030*/          OPC_EmitInteger, MVT::i32, 0, 
/* 29033*/          OPC_MorphNodeTo1, TARGET_VAL(R600::RECIPSQRT_IEEE_r600), 0,
                        MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                    // Src: (intrinsic_wo_chain:{ *:[f32] } 1614:{ *:[iPTR] }, (fsqrt:{ *:[f32] } f32:{ *:[f32] }:$src)) - Complexity = 11
                    // Dst: (RECIPSQRT_IEEE_r600:{ *:[f32] } ?:{ *:[f32] }:$src)
/* 29052*/        /*Scope*/ 66, /*->29119*/
/* 29053*/          OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 29055*/          OPC_EmitInteger, MVT::i32, 1, 
/* 29058*/          OPC_EmitInteger, MVT::i32, 0, 
/* 29061*/          OPC_EmitInteger, MVT::i32, 0, 
/* 29064*/          OPC_EmitInteger, MVT::i32, 0, 
/* 29067*/          OPC_EmitInteger, MVT::i32, 0, 
/* 29070*/          OPC_EmitInteger, MVT::i32, 0, 
/* 29073*/          OPC_EmitInteger, MVT::i32, 0, 
/* 29076*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 29088*/          OPC_EmitInteger, MVT::i32, 1, 
/* 29091*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 29094*/          OPC_EmitInteger, MVT::i32, 0, 
/* 29097*/          OPC_EmitInteger, MVT::i32, 0, 
/* 29100*/          OPC_MorphNodeTo1, TARGET_VAL(R600::RECIPSQRT_IEEE_eg), 0,
                        MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                    // Src: (intrinsic_wo_chain:{ *:[f32] } 1614:{ *:[iPTR] }, (fsqrt:{ *:[f32] } f32:{ *:[f32] }:$src)) - Complexity = 11
                    // Dst: (RECIPSQRT_IEEE_eg:{ *:[f32] } ?:{ *:[f32] }:$src)
/* 29119*/        /*Scope*/ 66, /*->29186*/
/* 29120*/          OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 29122*/          OPC_EmitInteger, MVT::i32, 1, 
/* 29125*/          OPC_EmitInteger, MVT::i32, 0, 
/* 29128*/          OPC_EmitInteger, MVT::i32, 0, 
/* 29131*/          OPC_EmitInteger, MVT::i32, 0, 
/* 29134*/          OPC_EmitInteger, MVT::i32, 0, 
/* 29137*/          OPC_EmitInteger, MVT::i32, 0, 
/* 29140*/          OPC_EmitInteger, MVT::i32, 0, 
/* 29143*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 29155*/          OPC_EmitInteger, MVT::i32, 1, 
/* 29158*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 29161*/          OPC_EmitInteger, MVT::i32, 0, 
/* 29164*/          OPC_EmitInteger, MVT::i32, 0, 
/* 29167*/          OPC_MorphNodeTo1, TARGET_VAL(R600::RECIPSQRT_IEEE_cm), 0,
                        MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                    // Src: (intrinsic_wo_chain:{ *:[f32] } 1614:{ *:[iPTR] }, (fsqrt:{ *:[f32] } f32:{ *:[f32] }:$src)) - Complexity = 11
                    // Dst: (RECIPSQRT_IEEE_cm:{ *:[f32] } ?:{ *:[f32] }:$src)
/* 29186*/        0, /*End of Scope*/
/* 29187*/      /*Scope*/ 80|128,1/*208*/, /*->29397*/
/* 29189*/        OPC_RecordChild1, // #0 = $src0
/* 29190*/        OPC_CheckChild1Type, MVT::f32,
/* 29192*/        OPC_CheckType, MVT::f32,
/* 29194*/        OPC_Scope, 66, /*->29262*/ // 3 children in Scope
/* 29196*/          OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 29198*/          OPC_EmitInteger, MVT::i32, 1, 
/* 29201*/          OPC_EmitInteger, MVT::i32, 0, 
/* 29204*/          OPC_EmitInteger, MVT::i32, 0, 
/* 29207*/          OPC_EmitInteger, MVT::i32, 0, 
/* 29210*/          OPC_EmitInteger, MVT::i32, 0, 
/* 29213*/          OPC_EmitInteger, MVT::i32, 0, 
/* 29216*/          OPC_EmitInteger, MVT::i32, 0, 
/* 29219*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 29231*/          OPC_EmitInteger, MVT::i32, 1, 
/* 29234*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 29237*/          OPC_EmitInteger, MVT::i32, 0, 
/* 29240*/          OPC_EmitInteger, MVT::i32, 0, 
/* 29243*/          OPC_MorphNodeTo1, TARGET_VAL(R600::RECIP_IEEE_r600), 0,
                        MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                    // Src: (intrinsic_wo_chain:{ *:[f32] } 1614:{ *:[iPTR] }, f32:{ *:[f32] }:$src0) - Complexity = 8
                    // Dst: (RECIP_IEEE_r600:{ *:[f32] } f32:{ *:[f32] }:$src0)
/* 29262*/        /*Scope*/ 66, /*->29329*/
/* 29263*/          OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 29265*/          OPC_EmitInteger, MVT::i32, 1, 
/* 29268*/          OPC_EmitInteger, MVT::i32, 0, 
/* 29271*/          OPC_EmitInteger, MVT::i32, 0, 
/* 29274*/          OPC_EmitInteger, MVT::i32, 0, 
/* 29277*/          OPC_EmitInteger, MVT::i32, 0, 
/* 29280*/          OPC_EmitInteger, MVT::i32, 0, 
/* 29283*/          OPC_EmitInteger, MVT::i32, 0, 
/* 29286*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 29298*/          OPC_EmitInteger, MVT::i32, 1, 
/* 29301*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 29304*/          OPC_EmitInteger, MVT::i32, 0, 
/* 29307*/          OPC_EmitInteger, MVT::i32, 0, 
/* 29310*/          OPC_MorphNodeTo1, TARGET_VAL(R600::RECIP_IEEE_eg), 0,
                        MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                    // Src: (intrinsic_wo_chain:{ *:[f32] } 1614:{ *:[iPTR] }, f32:{ *:[f32] }:$src0) - Complexity = 8
                    // Dst: (RECIP_IEEE_eg:{ *:[f32] } f32:{ *:[f32] }:$src0)
/* 29329*/        /*Scope*/ 66, /*->29396*/
/* 29330*/          OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 29332*/          OPC_EmitInteger, MVT::i32, 1, 
/* 29335*/          OPC_EmitInteger, MVT::i32, 0, 
/* 29338*/          OPC_EmitInteger, MVT::i32, 0, 
/* 29341*/          OPC_EmitInteger, MVT::i32, 0, 
/* 29344*/          OPC_EmitInteger, MVT::i32, 0, 
/* 29347*/          OPC_EmitInteger, MVT::i32, 0, 
/* 29350*/          OPC_EmitInteger, MVT::i32, 0, 
/* 29353*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 29365*/          OPC_EmitInteger, MVT::i32, 1, 
/* 29368*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 29371*/          OPC_EmitInteger, MVT::i32, 0, 
/* 29374*/          OPC_EmitInteger, MVT::i32, 0, 
/* 29377*/          OPC_MorphNodeTo1, TARGET_VAL(R600::RECIP_IEEE_cm), 0,
                        MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                    // Src: (intrinsic_wo_chain:{ *:[f32] } 1614:{ *:[iPTR] }, f32:{ *:[f32] }:$src0) - Complexity = 8
                    // Dst: (RECIP_IEEE_cm:{ *:[f32] } f32:{ *:[f32] }:$src0)
/* 29396*/        0, /*End of Scope*/
/* 29397*/      0, /*End of Scope*/
/* 29398*/    /*Scope*/ 74, /*->29473*/
/* 29399*/      OPC_CheckChild0Integer, 54|128,8/*1078*/, 
/* 29402*/      OPC_RecordChild1, // #0 = $src0
/* 29403*/      OPC_CheckChild1Type, MVT::f32,
/* 29405*/      OPC_CheckType, MVT::f32,
/* 29407*/      OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 29409*/      OPC_EmitInteger, MVT::i32, 1, 
/* 29412*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29415*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29418*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29421*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29424*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29427*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29430*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 29442*/      OPC_EmitInteger, MVT::i32, 1, 
/* 29445*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 29448*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29451*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29454*/      OPC_MorphNodeTo1, TARGET_VAL(R600::FRACT), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (intrinsic_wo_chain:{ *:[f32] } 1078:{ *:[iPTR] }, R600_Reg32:{ *:[f32] }:$src0) - Complexity = 8
                // Dst: (FRACT:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 29473*/    /*Scope*/ 83|128,1/*211*/, /*->29686*/
/* 29475*/      OPC_CheckChild0Integer, 83|128,12/*1619*/, 
/* 29478*/      OPC_RecordChild1, // #0 = $src0
/* 29479*/      OPC_CheckChild1Type, MVT::f32,
/* 29481*/      OPC_CheckType, MVT::f32,
/* 29483*/      OPC_Scope, 66, /*->29551*/ // 3 children in Scope
/* 29485*/        OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 29487*/        OPC_EmitInteger, MVT::i32, 1, 
/* 29490*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29493*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29496*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29499*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29502*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29505*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29508*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 29520*/        OPC_EmitInteger, MVT::i32, 1, 
/* 29523*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 29526*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29529*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29532*/        OPC_MorphNodeTo1, TARGET_VAL(R600::RECIPSQRT_CLAMPED_r600), 0,
                      MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                  // Src: (intrinsic_wo_chain:{ *:[f32] } 1619:{ *:[iPTR] }, R600_Reg32:{ *:[f32] }:$src0) - Complexity = 8
                  // Dst: (RECIPSQRT_CLAMPED_r600:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 29551*/      /*Scope*/ 66, /*->29618*/
/* 29552*/        OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 29554*/        OPC_EmitInteger, MVT::i32, 1, 
/* 29557*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29560*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29563*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29566*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29569*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29572*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29575*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 29587*/        OPC_EmitInteger, MVT::i32, 1, 
/* 29590*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 29593*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29596*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29599*/        OPC_MorphNodeTo1, TARGET_VAL(R600::RECIPSQRT_CLAMPED_eg), 0,
                      MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                  // Src: (intrinsic_wo_chain:{ *:[f32] } 1619:{ *:[iPTR] }, R600_Reg32:{ *:[f32] }:$src0) - Complexity = 8
                  // Dst: (RECIPSQRT_CLAMPED_eg:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 29618*/      /*Scope*/ 66, /*->29685*/
/* 29619*/        OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 29621*/        OPC_EmitInteger, MVT::i32, 1, 
/* 29624*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29627*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29630*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29633*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29636*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29639*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29642*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 29654*/        OPC_EmitInteger, MVT::i32, 1, 
/* 29657*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 29660*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29663*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29666*/        OPC_MorphNodeTo1, TARGET_VAL(R600::RECIPSQRT_CLAMPED_cm), 0,
                      MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                  // Src: (intrinsic_wo_chain:{ *:[f32] } 1619:{ *:[iPTR] }, R600_Reg32:{ *:[f32] }:$src0) - Complexity = 8
                  // Dst: (RECIPSQRT_CLAMPED_cm:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 29685*/      0, /*End of Scope*/
/* 29686*/    /*Scope*/ 83|128,1/*211*/, /*->29899*/
/* 29688*/      OPC_CheckChild0Integer, 82|128,12/*1618*/, 
/* 29691*/      OPC_RecordChild1, // #0 = $src0
/* 29692*/      OPC_CheckChild1Type, MVT::f32,
/* 29694*/      OPC_CheckType, MVT::f32,
/* 29696*/      OPC_Scope, 66, /*->29764*/ // 3 children in Scope
/* 29698*/        OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 29700*/        OPC_EmitInteger, MVT::i32, 1, 
/* 29703*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29706*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29709*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29712*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29715*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29718*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29721*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 29733*/        OPC_EmitInteger, MVT::i32, 1, 
/* 29736*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 29739*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29742*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29745*/        OPC_MorphNodeTo1, TARGET_VAL(R600::RECIPSQRT_IEEE_r600), 0,
                      MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                  // Src: (intrinsic_wo_chain:{ *:[f32] } 1618:{ *:[iPTR] }, R600_Reg32:{ *:[f32] }:$src0) - Complexity = 8
                  // Dst: (RECIPSQRT_IEEE_r600:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 29764*/      /*Scope*/ 66, /*->29831*/
/* 29765*/        OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 29767*/        OPC_EmitInteger, MVT::i32, 1, 
/* 29770*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29773*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29776*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29779*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29782*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29785*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29788*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 29800*/        OPC_EmitInteger, MVT::i32, 1, 
/* 29803*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 29806*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29809*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29812*/        OPC_MorphNodeTo1, TARGET_VAL(R600::RECIPSQRT_IEEE_eg), 0,
                      MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                  // Src: (intrinsic_wo_chain:{ *:[f32] } 1618:{ *:[iPTR] }, R600_Reg32:{ *:[f32] }:$src0) - Complexity = 8
                  // Dst: (RECIPSQRT_IEEE_eg:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 29831*/      /*Scope*/ 66, /*->29898*/
/* 29832*/        OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 29834*/        OPC_EmitInteger, MVT::i32, 1, 
/* 29837*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29840*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29843*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29846*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29849*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29852*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29855*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 29867*/        OPC_EmitInteger, MVT::i32, 1, 
/* 29870*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 29873*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29876*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29879*/        OPC_MorphNodeTo1, TARGET_VAL(R600::RECIPSQRT_IEEE_cm), 0,
                      MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                  // Src: (intrinsic_wo_chain:{ *:[f32] } 1618:{ *:[iPTR] }, R600_Reg32:{ *:[f32] }:$src0) - Complexity = 8
                  // Dst: (RECIPSQRT_IEEE_cm:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 29898*/      0, /*End of Scope*/
/* 29899*/    /*Scope*/ 26, /*->29926*/
/* 29900*/      OPC_CheckChild0Integer, 80|128,48/*6224*/, 
/* 29903*/      OPC_RecordChild1, // #0 = $src0
/* 29904*/      OPC_Scope, 9, /*->29915*/ // 2 children in Scope
/* 29906*/        OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 29908*/        OPC_MorphNodeTo1, TARGET_VAL(R600::CUBE_r600_pseudo), 0,
                      MVT::v4f32, 1/*#Ops*/, 0, 
                  // Src: (intrinsic_wo_chain:{ *:[v4f32] } 6224:{ *:[iPTR] }, v4f32:{ *:[v4f32] }:$src0) - Complexity = 8
                  // Dst: (CUBE_r600_pseudo:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$src0)
/* 29915*/      /*Scope*/ 9, /*->29925*/
/* 29916*/        OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 29918*/        OPC_MorphNodeTo1, TARGET_VAL(R600::CUBE_eg_pseudo), 0,
                      MVT::v4f32, 1/*#Ops*/, 0, 
                  // Src: (intrinsic_wo_chain:{ *:[v4f32] } 6224:{ *:[iPTR] }, v4f32:{ *:[v4f32] }:$src0) - Complexity = 8
                  // Dst: (CUBE_eg_pseudo:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$src0)
/* 29925*/      0, /*End of Scope*/
/* 29926*/    0, /*End of Scope*/
/* 29927*/  /*SwitchOpcode*/ 15, TARGET_VAL(AMDGPUISD::CONST_DATA_PTR),// ->29945
/* 29930*/    OPC_RecordChild0, // #0 = $addr
/* 29931*/    OPC_MoveChild0,
/* 29932*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/* 29935*/    OPC_MoveParent,
/* 29936*/    OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 29938*/    OPC_MorphNodeTo1, TARGET_VAL(R600::MOV_IMM_GLOBAL_ADDR), 0,
                  MVT::iPTR, 1/*#Ops*/, 0, 
              // Src: (AMDGPUconstdata_ptr:{ *:[iPTR] } (tglobaladdr:{ *:[iPTR] }):$addr) - Complexity = 6
              // Dst: (MOV_IMM_GLOBAL_ADDR:{ *:[iPTR] } (tglobaladdr:{ *:[i32] }):$addr)
/* 29945*/  /*SwitchOpcode*/ 20, TARGET_VAL(AMDGPUISD::STORE_MSKOR),// ->29968
/* 29948*/    OPC_RecordMemRef,
/* 29949*/    OPC_RecordNode, // #0 = 'AMDGPUstore_mskor' chained node
/* 29950*/    OPC_RecordChild1, // #1 = $rw_gpr
/* 29951*/    OPC_CheckChild1Type, MVT::v4i32,
/* 29953*/    OPC_RecordChild2, // #2 = $index_gpr
/* 29954*/    OPC_CheckChild2Type, MVT::i32,
/* 29956*/    OPC_CheckPredicate, 24, // Predicate_mskor_global
/* 29958*/    OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 29960*/    OPC_EmitMergeInputChains1_0,
/* 29961*/    OPC_MorphNodeTo0, TARGET_VAL(R600::RAT_MSKOR), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#Ops*/, 1, 2, 
              // Src: (AMDGPUstore_mskor v4i32:{ *:[v4i32] }:$rw_gpr, i32:{ *:[i32] }:$index_gpr)<<P:Predicate_mskor_global>> - Complexity = 4
              // Dst: (RAT_MSKOR v4i32:{ *:[v4i32] }:$rw_gpr, i32:{ *:[i32] }:$index_gpr)
/* 29968*/  /*SwitchOpcode*/ 113, TARGET_VAL(ISD::ATOMIC_SWAP),// ->30084
/* 29971*/    OPC_RecordMemRef,
/* 29972*/    OPC_RecordNode, // #0 = 'atomic_swap' chained node
/* 29973*/    OPC_RecordChild1, // #1 = $ptr
/* 29974*/    OPC_CheckChild1Type, MVT::i32,
/* 29976*/    OPC_RecordChild2, // #2 = $data
/* 29977*/    OPC_CheckType, MVT::i32,
/* 29979*/    OPC_Scope, 42, /*->30023*/ // 2 children in Scope
/* 29981*/      OPC_CheckPredicate, 22, // Predicate_atomic_swap_global_noret_32
/* 29983*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 29985*/      OPC_EmitMergeInputChains1_0,
/* 29986*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    MVT::v4i32, 0/*#Ops*/,  // Results = #3
/* 29992*/      OPC_EmitInteger, MVT::i32, R600::sub0,
/* 29995*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4i32, 3/*#Ops*/, 3, 2, 4,  // Results = #5
/* 30004*/      OPC_EmitNode1, TARGET_VAL(R600::RAT_ATOMIC_XCHG_INT_NORET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::v4i32, 2/*#Ops*/, 5, 1,  // Results = #6
/* 30012*/      OPC_EmitInteger, MVT::i32, R600::sub1,
/* 30015*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0|OPFL_Chain,
                    MVT::i32, 2/*#Ops*/, 6, 7, 
                // Src: (atomic_swap:{ *:[i32] } i32:{ *:[i32] }:$ptr, i32:{ *:[i32] }:$data)<<P:Predicate_atomic_swap_global_noret_32>> - Complexity = 4
                // Dst: (EXTRACT_SUBREG:{ *:[i32] } (RAT_ATOMIC_XCHG_INT_NORET:{ *:[v4i32] } (INSERT_SUBREG:{ *:[v4i32] } (IMPLICIT_DEF:{ *:[v4i32] }), ?:{ *:[i32] }:$data, sub0:{ *:[i32] }), ?:{ *:[i32] }:$ptr), sub1:{ *:[i32] })
/* 30023*/    /*Scope*/ 59, /*->30083*/
/* 30024*/      OPC_CheckPredicate, 23, // Predicate_atomic_swap_local_32
/* 30026*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 30028*/      OPC_EmitMergeInputChains1_0,
/* 30029*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30032*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30044*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30047*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30059*/      OPC_EmitInteger, MVT::i32, 1, 
/* 30062*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 30065*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30068*/      OPC_MorphNodeTo1, TARGET_VAL(R600::LDS_WRXCHG_RET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 9/*#Ops*/, 1, 3, 4, 2, 5, 6, 7, 8, 9, 
                // Src: (atomic_swap:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)<<P:Predicate_atomic_swap_local_32>> - Complexity = 4
                // Dst: (LDS_WRXCHG_RET:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 30083*/    0, /*End of Scope*/
/* 30084*/  /*SwitchOpcode*/ 113, TARGET_VAL(ISD::ATOMIC_LOAD_MIN),// ->30200
/* 30087*/    OPC_RecordMemRef,
/* 30088*/    OPC_RecordNode, // #0 = 'atomic_load_min' chained node
/* 30089*/    OPC_RecordChild1, // #1 = $ptr
/* 30090*/    OPC_CheckChild1Type, MVT::i32,
/* 30092*/    OPC_RecordChild2, // #2 = $data
/* 30093*/    OPC_CheckType, MVT::i32,
/* 30095*/    OPC_Scope, 42, /*->30139*/ // 2 children in Scope
/* 30097*/      OPC_CheckPredicate, 22, // Predicate_atomic_load_min_global_noret_32
/* 30099*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 30101*/      OPC_EmitMergeInputChains1_0,
/* 30102*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    MVT::v4i32, 0/*#Ops*/,  // Results = #3
/* 30108*/      OPC_EmitInteger, MVT::i32, R600::sub0,
/* 30111*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4i32, 3/*#Ops*/, 3, 2, 4,  // Results = #5
/* 30120*/      OPC_EmitNode1, TARGET_VAL(R600::RAT_ATOMIC_MIN_INT_NORET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::v4i32, 2/*#Ops*/, 5, 1,  // Results = #6
/* 30128*/      OPC_EmitInteger, MVT::i32, R600::sub1,
/* 30131*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0|OPFL_Chain,
                    MVT::i32, 2/*#Ops*/, 6, 7, 
                // Src: (atomic_load_min:{ *:[i32] } i32:{ *:[i32] }:$ptr, i32:{ *:[i32] }:$data)<<P:Predicate_atomic_load_min_global_noret_32>> - Complexity = 4
                // Dst: (EXTRACT_SUBREG:{ *:[i32] } (RAT_ATOMIC_MIN_INT_NORET:{ *:[v4i32] } (INSERT_SUBREG:{ *:[v4i32] } (IMPLICIT_DEF:{ *:[v4i32] }), ?:{ *:[i32] }:$data, sub0:{ *:[i32] }), ?:{ *:[i32] }:$ptr), sub1:{ *:[i32] })
/* 30139*/    /*Scope*/ 59, /*->30199*/
/* 30140*/      OPC_CheckPredicate, 23, // Predicate_atomic_load_min_local_32
/* 30142*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 30144*/      OPC_EmitMergeInputChains1_0,
/* 30145*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30148*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30160*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30163*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30175*/      OPC_EmitInteger, MVT::i32, 1, 
/* 30178*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 30181*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30184*/      OPC_MorphNodeTo1, TARGET_VAL(R600::LDS_MIN_INT_RET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 9/*#Ops*/, 1, 3, 4, 2, 5, 6, 7, 8, 9, 
                // Src: (atomic_load_min:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)<<P:Predicate_atomic_load_min_local_32>> - Complexity = 4
                // Dst: (LDS_MIN_INT_RET:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 30199*/    0, /*End of Scope*/
/* 30200*/  /*SwitchOpcode*/ 113, TARGET_VAL(ISD::ATOMIC_LOAD_UMIN),// ->30316
/* 30203*/    OPC_RecordMemRef,
/* 30204*/    OPC_RecordNode, // #0 = 'atomic_load_umin' chained node
/* 30205*/    OPC_RecordChild1, // #1 = $ptr
/* 30206*/    OPC_CheckChild1Type, MVT::i32,
/* 30208*/    OPC_RecordChild2, // #2 = $data
/* 30209*/    OPC_CheckType, MVT::i32,
/* 30211*/    OPC_Scope, 42, /*->30255*/ // 2 children in Scope
/* 30213*/      OPC_CheckPredicate, 22, // Predicate_atomic_load_umin_global_noret_32
/* 30215*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 30217*/      OPC_EmitMergeInputChains1_0,
/* 30218*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    MVT::v4i32, 0/*#Ops*/,  // Results = #3
/* 30224*/      OPC_EmitInteger, MVT::i32, R600::sub0,
/* 30227*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4i32, 3/*#Ops*/, 3, 2, 4,  // Results = #5
/* 30236*/      OPC_EmitNode1, TARGET_VAL(R600::RAT_ATOMIC_MIN_UINT_NORET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::v4i32, 2/*#Ops*/, 5, 1,  // Results = #6
/* 30244*/      OPC_EmitInteger, MVT::i32, R600::sub1,
/* 30247*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0|OPFL_Chain,
                    MVT::i32, 2/*#Ops*/, 6, 7, 
                // Src: (atomic_load_umin:{ *:[i32] } i32:{ *:[i32] }:$ptr, i32:{ *:[i32] }:$data)<<P:Predicate_atomic_load_umin_global_noret_32>> - Complexity = 4
                // Dst: (EXTRACT_SUBREG:{ *:[i32] } (RAT_ATOMIC_MIN_UINT_NORET:{ *:[v4i32] } (INSERT_SUBREG:{ *:[v4i32] } (IMPLICIT_DEF:{ *:[v4i32] }), ?:{ *:[i32] }:$data, sub0:{ *:[i32] }), ?:{ *:[i32] }:$ptr), sub1:{ *:[i32] })
/* 30255*/    /*Scope*/ 59, /*->30315*/
/* 30256*/      OPC_CheckPredicate, 23, // Predicate_atomic_load_umin_local_32
/* 30258*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 30260*/      OPC_EmitMergeInputChains1_0,
/* 30261*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30264*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30276*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30279*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30291*/      OPC_EmitInteger, MVT::i32, 1, 
/* 30294*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 30297*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30300*/      OPC_MorphNodeTo1, TARGET_VAL(R600::LDS_MIN_UINT_RET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 9/*#Ops*/, 1, 3, 4, 2, 5, 6, 7, 8, 9, 
                // Src: (atomic_load_umin:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)<<P:Predicate_atomic_load_umin_local_32>> - Complexity = 4
                // Dst: (LDS_MIN_UINT_RET:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 30315*/    0, /*End of Scope*/
/* 30316*/  /*SwitchOpcode*/ 113, TARGET_VAL(ISD::ATOMIC_LOAD_MAX),// ->30432
/* 30319*/    OPC_RecordMemRef,
/* 30320*/    OPC_RecordNode, // #0 = 'atomic_load_max' chained node
/* 30321*/    OPC_RecordChild1, // #1 = $ptr
/* 30322*/    OPC_CheckChild1Type, MVT::i32,
/* 30324*/    OPC_RecordChild2, // #2 = $data
/* 30325*/    OPC_CheckType, MVT::i32,
/* 30327*/    OPC_Scope, 42, /*->30371*/ // 2 children in Scope
/* 30329*/      OPC_CheckPredicate, 22, // Predicate_atomic_load_max_global_noret_32
/* 30331*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 30333*/      OPC_EmitMergeInputChains1_0,
/* 30334*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    MVT::v4i32, 0/*#Ops*/,  // Results = #3
/* 30340*/      OPC_EmitInteger, MVT::i32, R600::sub0,
/* 30343*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4i32, 3/*#Ops*/, 3, 2, 4,  // Results = #5
/* 30352*/      OPC_EmitNode1, TARGET_VAL(R600::RAT_ATOMIC_MAX_INT_NORET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::v4i32, 2/*#Ops*/, 5, 1,  // Results = #6
/* 30360*/      OPC_EmitInteger, MVT::i32, R600::sub1,
/* 30363*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0|OPFL_Chain,
                    MVT::i32, 2/*#Ops*/, 6, 7, 
                // Src: (atomic_load_max:{ *:[i32] } i32:{ *:[i32] }:$ptr, i32:{ *:[i32] }:$data)<<P:Predicate_atomic_load_max_global_noret_32>> - Complexity = 4
                // Dst: (EXTRACT_SUBREG:{ *:[i32] } (RAT_ATOMIC_MAX_INT_NORET:{ *:[v4i32] } (INSERT_SUBREG:{ *:[v4i32] } (IMPLICIT_DEF:{ *:[v4i32] }), ?:{ *:[i32] }:$data, sub0:{ *:[i32] }), ?:{ *:[i32] }:$ptr), sub1:{ *:[i32] })
/* 30371*/    /*Scope*/ 59, /*->30431*/
/* 30372*/      OPC_CheckPredicate, 23, // Predicate_atomic_load_max_local_32
/* 30374*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 30376*/      OPC_EmitMergeInputChains1_0,
/* 30377*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30380*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30392*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30395*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30407*/      OPC_EmitInteger, MVT::i32, 1, 
/* 30410*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 30413*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30416*/      OPC_MorphNodeTo1, TARGET_VAL(R600::LDS_MAX_INT_RET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 9/*#Ops*/, 1, 3, 4, 2, 5, 6, 7, 8, 9, 
                // Src: (atomic_load_max:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)<<P:Predicate_atomic_load_max_local_32>> - Complexity = 4
                // Dst: (LDS_MAX_INT_RET:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 30431*/    0, /*End of Scope*/
/* 30432*/  /*SwitchOpcode*/ 113, TARGET_VAL(ISD::ATOMIC_LOAD_UMAX),// ->30548
/* 30435*/    OPC_RecordMemRef,
/* 30436*/    OPC_RecordNode, // #0 = 'atomic_load_umax' chained node
/* 30437*/    OPC_RecordChild1, // #1 = $ptr
/* 30438*/    OPC_CheckChild1Type, MVT::i32,
/* 30440*/    OPC_RecordChild2, // #2 = $data
/* 30441*/    OPC_CheckType, MVT::i32,
/* 30443*/    OPC_Scope, 42, /*->30487*/ // 2 children in Scope
/* 30445*/      OPC_CheckPredicate, 22, // Predicate_atomic_load_umax_global_noret_32
/* 30447*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 30449*/      OPC_EmitMergeInputChains1_0,
/* 30450*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    MVT::v4i32, 0/*#Ops*/,  // Results = #3
/* 30456*/      OPC_EmitInteger, MVT::i32, R600::sub0,
/* 30459*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4i32, 3/*#Ops*/, 3, 2, 4,  // Results = #5
/* 30468*/      OPC_EmitNode1, TARGET_VAL(R600::RAT_ATOMIC_MAX_UINT_NORET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::v4i32, 2/*#Ops*/, 5, 1,  // Results = #6
/* 30476*/      OPC_EmitInteger, MVT::i32, R600::sub1,
/* 30479*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0|OPFL_Chain,
                    MVT::i32, 2/*#Ops*/, 6, 7, 
                // Src: (atomic_load_umax:{ *:[i32] } i32:{ *:[i32] }:$ptr, i32:{ *:[i32] }:$data)<<P:Predicate_atomic_load_umax_global_noret_32>> - Complexity = 4
                // Dst: (EXTRACT_SUBREG:{ *:[i32] } (RAT_ATOMIC_MAX_UINT_NORET:{ *:[v4i32] } (INSERT_SUBREG:{ *:[v4i32] } (IMPLICIT_DEF:{ *:[v4i32] }), ?:{ *:[i32] }:$data, sub0:{ *:[i32] }), ?:{ *:[i32] }:$ptr), sub1:{ *:[i32] })
/* 30487*/    /*Scope*/ 59, /*->30547*/
/* 30488*/      OPC_CheckPredicate, 23, // Predicate_atomic_load_umax_local_32
/* 30490*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 30492*/      OPC_EmitMergeInputChains1_0,
/* 30493*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30496*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30508*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30511*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30523*/      OPC_EmitInteger, MVT::i32, 1, 
/* 30526*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 30529*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30532*/      OPC_MorphNodeTo1, TARGET_VAL(R600::LDS_MAX_UINT_RET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 9/*#Ops*/, 1, 3, 4, 2, 5, 6, 7, 8, 9, 
                // Src: (atomic_load_umax:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)<<P:Predicate_atomic_load_umax_local_32>> - Complexity = 4
                // Dst: (LDS_MAX_UINT_RET:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 30547*/    0, /*End of Scope*/
/* 30548*/  /*SwitchOpcode*/ 113, TARGET_VAL(ISD::ATOMIC_LOAD_AND),// ->30664
/* 30551*/    OPC_RecordMemRef,
/* 30552*/    OPC_RecordNode, // #0 = 'atomic_load_and' chained node
/* 30553*/    OPC_RecordChild1, // #1 = $ptr
/* 30554*/    OPC_CheckChild1Type, MVT::i32,
/* 30556*/    OPC_RecordChild2, // #2 = $data
/* 30557*/    OPC_CheckType, MVT::i32,
/* 30559*/    OPC_Scope, 42, /*->30603*/ // 2 children in Scope
/* 30561*/      OPC_CheckPredicate, 22, // Predicate_atomic_load_and_global_noret_32
/* 30563*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 30565*/      OPC_EmitMergeInputChains1_0,
/* 30566*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    MVT::v4i32, 0/*#Ops*/,  // Results = #3
/* 30572*/      OPC_EmitInteger, MVT::i32, R600::sub0,
/* 30575*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4i32, 3/*#Ops*/, 3, 2, 4,  // Results = #5
/* 30584*/      OPC_EmitNode1, TARGET_VAL(R600::RAT_ATOMIC_AND_NORET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::v4i32, 2/*#Ops*/, 5, 1,  // Results = #6
/* 30592*/      OPC_EmitInteger, MVT::i32, R600::sub1,
/* 30595*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0|OPFL_Chain,
                    MVT::i32, 2/*#Ops*/, 6, 7, 
                // Src: (atomic_load_and:{ *:[i32] } i32:{ *:[i32] }:$ptr, i32:{ *:[i32] }:$data)<<P:Predicate_atomic_load_and_global_noret_32>> - Complexity = 4
                // Dst: (EXTRACT_SUBREG:{ *:[i32] } (RAT_ATOMIC_AND_NORET:{ *:[v4i32] } (INSERT_SUBREG:{ *:[v4i32] } (IMPLICIT_DEF:{ *:[v4i32] }), ?:{ *:[i32] }:$data, sub0:{ *:[i32] }), ?:{ *:[i32] }:$ptr), sub1:{ *:[i32] })
/* 30603*/    /*Scope*/ 59, /*->30663*/
/* 30604*/      OPC_CheckPredicate, 23, // Predicate_atomic_load_and_local_32
/* 30606*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 30608*/      OPC_EmitMergeInputChains1_0,
/* 30609*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30612*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30624*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30627*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30639*/      OPC_EmitInteger, MVT::i32, 1, 
/* 30642*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 30645*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30648*/      OPC_MorphNodeTo1, TARGET_VAL(R600::LDS_AND_RET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 9/*#Ops*/, 1, 3, 4, 2, 5, 6, 7, 8, 9, 
                // Src: (atomic_load_and:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)<<P:Predicate_atomic_load_and_local_32>> - Complexity = 4
                // Dst: (LDS_AND_RET:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 30663*/    0, /*End of Scope*/
/* 30664*/  /*SwitchOpcode*/ 113, TARGET_VAL(ISD::ATOMIC_LOAD_OR),// ->30780
/* 30667*/    OPC_RecordMemRef,
/* 30668*/    OPC_RecordNode, // #0 = 'atomic_load_or' chained node
/* 30669*/    OPC_RecordChild1, // #1 = $ptr
/* 30670*/    OPC_CheckChild1Type, MVT::i32,
/* 30672*/    OPC_RecordChild2, // #2 = $data
/* 30673*/    OPC_CheckType, MVT::i32,
/* 30675*/    OPC_Scope, 42, /*->30719*/ // 2 children in Scope
/* 30677*/      OPC_CheckPredicate, 22, // Predicate_atomic_load_or_global_noret_32
/* 30679*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 30681*/      OPC_EmitMergeInputChains1_0,
/* 30682*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    MVT::v4i32, 0/*#Ops*/,  // Results = #3
/* 30688*/      OPC_EmitInteger, MVT::i32, R600::sub0,
/* 30691*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4i32, 3/*#Ops*/, 3, 2, 4,  // Results = #5
/* 30700*/      OPC_EmitNode1, TARGET_VAL(R600::RAT_ATOMIC_OR_NORET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::v4i32, 2/*#Ops*/, 5, 1,  // Results = #6
/* 30708*/      OPC_EmitInteger, MVT::i32, R600::sub1,
/* 30711*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0|OPFL_Chain,
                    MVT::i32, 2/*#Ops*/, 6, 7, 
                // Src: (atomic_load_or:{ *:[i32] } i32:{ *:[i32] }:$ptr, i32:{ *:[i32] }:$data)<<P:Predicate_atomic_load_or_global_noret_32>> - Complexity = 4
                // Dst: (EXTRACT_SUBREG:{ *:[i32] } (RAT_ATOMIC_OR_NORET:{ *:[v4i32] } (INSERT_SUBREG:{ *:[v4i32] } (IMPLICIT_DEF:{ *:[v4i32] }), ?:{ *:[i32] }:$data, sub0:{ *:[i32] }), ?:{ *:[i32] }:$ptr), sub1:{ *:[i32] })
/* 30719*/    /*Scope*/ 59, /*->30779*/
/* 30720*/      OPC_CheckPredicate, 23, // Predicate_atomic_load_or_local_32
/* 30722*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 30724*/      OPC_EmitMergeInputChains1_0,
/* 30725*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30728*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30740*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30743*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30755*/      OPC_EmitInteger, MVT::i32, 1, 
/* 30758*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 30761*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30764*/      OPC_MorphNodeTo1, TARGET_VAL(R600::LDS_OR_RET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 9/*#Ops*/, 1, 3, 4, 2, 5, 6, 7, 8, 9, 
                // Src: (atomic_load_or:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)<<P:Predicate_atomic_load_or_local_32>> - Complexity = 4
                // Dst: (LDS_OR_RET:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 30779*/    0, /*End of Scope*/
/* 30780*/  /*SwitchOpcode*/ 113, TARGET_VAL(ISD::ATOMIC_LOAD_XOR),// ->30896
/* 30783*/    OPC_RecordMemRef,
/* 30784*/    OPC_RecordNode, // #0 = 'atomic_load_xor' chained node
/* 30785*/    OPC_RecordChild1, // #1 = $ptr
/* 30786*/    OPC_CheckChild1Type, MVT::i32,
/* 30788*/    OPC_RecordChild2, // #2 = $data
/* 30789*/    OPC_CheckType, MVT::i32,
/* 30791*/    OPC_Scope, 42, /*->30835*/ // 2 children in Scope
/* 30793*/      OPC_CheckPredicate, 22, // Predicate_atomic_load_xor_global_noret_32
/* 30795*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 30797*/      OPC_EmitMergeInputChains1_0,
/* 30798*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    MVT::v4i32, 0/*#Ops*/,  // Results = #3
/* 30804*/      OPC_EmitInteger, MVT::i32, R600::sub0,
/* 30807*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4i32, 3/*#Ops*/, 3, 2, 4,  // Results = #5
/* 30816*/      OPC_EmitNode1, TARGET_VAL(R600::RAT_ATOMIC_XOR_NORET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::v4i32, 2/*#Ops*/, 5, 1,  // Results = #6
/* 30824*/      OPC_EmitInteger, MVT::i32, R600::sub1,
/* 30827*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0|OPFL_Chain,
                    MVT::i32, 2/*#Ops*/, 6, 7, 
                // Src: (atomic_load_xor:{ *:[i32] } i32:{ *:[i32] }:$ptr, i32:{ *:[i32] }:$data)<<P:Predicate_atomic_load_xor_global_noret_32>> - Complexity = 4
                // Dst: (EXTRACT_SUBREG:{ *:[i32] } (RAT_ATOMIC_XOR_NORET:{ *:[v4i32] } (INSERT_SUBREG:{ *:[v4i32] } (IMPLICIT_DEF:{ *:[v4i32] }), ?:{ *:[i32] }:$data, sub0:{ *:[i32] }), ?:{ *:[i32] }:$ptr), sub1:{ *:[i32] })
/* 30835*/    /*Scope*/ 59, /*->30895*/
/* 30836*/      OPC_CheckPredicate, 23, // Predicate_atomic_load_xor_local_32
/* 30838*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 30840*/      OPC_EmitMergeInputChains1_0,
/* 30841*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30844*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30856*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30859*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30871*/      OPC_EmitInteger, MVT::i32, 1, 
/* 30874*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 30877*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30880*/      OPC_MorphNodeTo1, TARGET_VAL(R600::LDS_XOR_RET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 9/*#Ops*/, 1, 3, 4, 2, 5, 6, 7, 8, 9, 
                // Src: (atomic_load_xor:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)<<P:Predicate_atomic_load_xor_local_32>> - Complexity = 4
                // Dst: (LDS_XOR_RET:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 30895*/    0, /*End of Scope*/
/* 30896*/  /*SwitchOpcode*/ 16|128,1/*144*/, TARGET_VAL(ISD::ATOMIC_CMP_SWAP),// ->31044
/* 30900*/    OPC_RecordMemRef,
/* 30901*/    OPC_RecordNode, // #0 = 'atomic_cmp_swap' chained node
/* 30902*/    OPC_RecordChild1, // #1 = $ptr
/* 30903*/    OPC_CheckChild1Type, MVT::i32,
/* 30905*/    OPC_RecordChild2, // #2 = $cmp
/* 30906*/    OPC_RecordChild3, // #3 = $data
/* 30907*/    OPC_CheckType, MVT::i32,
/* 30909*/    OPC_Scope, 54, /*->30965*/ // 2 children in Scope
/* 30911*/      OPC_CheckPredicate, 25, // Predicate_atomic_cmp_swap_global_noret
/* 30913*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 30915*/      OPC_EmitMergeInputChains1_0,
/* 30916*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    MVT::v4i32, 0/*#Ops*/,  // Results = #4
/* 30922*/      OPC_EmitInteger, MVT::i32, R600::sub3,
/* 30925*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4i32, 3/*#Ops*/, 4, 2, 5,  // Results = #6
/* 30934*/      OPC_EmitInteger, MVT::i32, R600::sub0,
/* 30937*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4i32, 3/*#Ops*/, 6, 3, 7,  // Results = #8
/* 30946*/      OPC_EmitNode1, TARGET_VAL(R600::RAT_ATOMIC_CMPXCHG_INT_NORET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::v4i32, 2/*#Ops*/, 8, 1,  // Results = #9
/* 30954*/      OPC_EmitInteger, MVT::i32, R600::sub1,
/* 30957*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0|OPFL_Chain,
                    MVT::i32, 2/*#Ops*/, 9, 10, 
                // Src: (atomic_cmp_swap:{ *:[i32] } i32:{ *:[i32] }:$ptr, i32:{ *:[i32] }:$cmp, i32:{ *:[i32] }:$data)<<P:Predicate_atomic_cmp_swap_global_noret>> - Complexity = 4
                // Dst: (EXTRACT_SUBREG:{ *:[i32] } (RAT_ATOMIC_CMPXCHG_INT_NORET:{ *:[v4i32] } (INSERT_SUBREG:{ *:[v4i32] } (INSERT_SUBREG:{ *:[v4i32] } (IMPLICIT_DEF:{ *:[v4i32] }), ?:{ *:[i32] }:$cmp, sub3:{ *:[i32] }), ?:{ *:[i32] }:$data, sub0:{ *:[i32] }), ?:{ *:[i32] }:$ptr), sub1:{ *:[i32] })
/* 30965*/    /*Scope*/ 77, /*->31043*/
/* 30966*/      OPC_CheckPredicate, 23, // Predicate_atomic_cmp_swap_local_32
/* 30968*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 30970*/      OPC_EmitMergeInputChains1_0,
/* 30971*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30974*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30986*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30989*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31001*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31004*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31016*/      OPC_EmitInteger, MVT::i32, 1, 
/* 31019*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 31022*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31025*/      OPC_MorphNodeTo1, TARGET_VAL(R600::LDS_CMPST_RET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 12/*#Ops*/, 1, 4, 5, 2, 6, 7, 3, 8, 9, 10, 11, 12, 
                // Src: (atomic_cmp_swap:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2)<<P:Predicate_atomic_cmp_swap_local_32>> - Complexity = 4
                // Dst: (LDS_CMPST_RET:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2)
/* 31043*/    0, /*End of Scope*/
/* 31044*/  /*SwitchOpcode*/ 57, TARGET_VAL(ISD::BITCAST),// ->31104
/* 31047*/    OPC_RecordChild0, // #0 = $src0
/* 31048*/    OPC_SwitchType /*6 cases */, 7, MVT::i32,// ->31058
/* 31051*/      OPC_CheckChild0Type, MVT::f32,
/* 31053*/      OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 31055*/      OPC_CompleteMatch, 1, 0, 
                 // Src: (bitconvert:{ *:[i32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
                 // Dst: R600_Reg32:{ *:[i32] }:$src0
/* 31058*/    /*SwitchType*/ 7, MVT::f32,// ->31067
/* 31060*/      OPC_CheckChild0Type, MVT::i32,
/* 31062*/      OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 31064*/      OPC_CompleteMatch, 1, 0, 
                 // Src: (bitconvert:{ *:[f32] } R600_Reg32:{ *:[i32] }:$src0) - Complexity = 3
                 // Dst: R600_Reg32:{ *:[f32] }:$src0
/* 31067*/    /*SwitchType*/ 7, MVT::v2i32,// ->31076
/* 31069*/      OPC_CheckChild0Type, MVT::v2f32,
/* 31071*/      OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 31073*/      OPC_CompleteMatch, 1, 0, 
                 // Src: (bitconvert:{ *:[v2i32] } R600_Reg64:{ *:[v2f32] }:$src0) - Complexity = 3
                 // Dst: R600_Reg64:{ *:[v2i32] }:$src0
/* 31076*/    /*SwitchType*/ 7, MVT::v4i32,// ->31085
/* 31078*/      OPC_CheckChild0Type, MVT::v4f32,
/* 31080*/      OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 31082*/      OPC_CompleteMatch, 1, 0, 
                 // Src: (bitconvert:{ *:[v4i32] } R600_Reg128:{ *:[v4f32] }:$src0) - Complexity = 3
                 // Dst: R600_Reg128:{ *:[v4i32] }:$src0
/* 31085*/    /*SwitchType*/ 7, MVT::v2f32,// ->31094
/* 31087*/      OPC_CheckChild0Type, MVT::v2i32,
/* 31089*/      OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 31091*/      OPC_CompleteMatch, 1, 0, 
                 // Src: (bitconvert:{ *:[v2f32] } R600_Reg64:{ *:[v2i32] }:$src0) - Complexity = 3
                 // Dst: R600_Reg64:{ *:[v2f32] }:$src0
/* 31094*/    /*SwitchType*/ 7, MVT::v4f32,// ->31103
/* 31096*/      OPC_CheckChild0Type, MVT::v4i32,
/* 31098*/      OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 31100*/      OPC_CompleteMatch, 1, 0, 
                 // Src: (bitconvert:{ *:[v4f32] } R600_Reg128:{ *:[v4i32] }:$src0) - Complexity = 3
                 // Dst: R600_Reg128:{ *:[v4f32] }:$src0
/* 31103*/    0, // EndSwitchType
/* 31104*/  /*SwitchOpcode*/ 8, TARGET_VAL(AMDGPUISD::DWORDADDR),// ->31115
/* 31107*/    OPC_RecordChild0, // #0 = $addr
/* 31108*/    OPC_CheckType, MVT::i32,
/* 31110*/    OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 31112*/    OPC_CompleteMatch, 1, 0, 
               // Src: (AMDGPUdwordaddr:{ *:[i32] } R600_Reg32:{ *:[i32] }:$addr) - Complexity = 3
               // Dst: R600_Reg32:{ *:[i32] }:$addr
/* 31115*/  /*SwitchOpcode*/ 9, TARGET_VAL(AMDGPUISD::DUMMY_CHAIN),// ->31127
/* 31118*/    OPC_RecordNode, // #0 = 'R600dummy_chain' chained node
/* 31119*/    OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 31121*/    OPC_EmitMergeInputChains1_0,
/* 31122*/    OPC_MorphNodeTo0, TARGET_VAL(R600::DUMMY_CHAIN), 0|OPFL_Chain,
                  0/*#Ops*/, 
              // Src: (R600dummy_chain) - Complexity = 3
              // Dst: (DUMMY_CHAIN)
/* 31127*/  /*SwitchOpcode*/ 104, TARGET_VAL(ISD::SUB),// ->31234
/* 31130*/    OPC_RecordChild0, // #0 = $src0
/* 31131*/    OPC_RecordChild1, // #1 = $src1
/* 31132*/    OPC_CheckType, MVT::i32,
/* 31134*/    OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 31136*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31139*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31142*/    OPC_EmitInteger, MVT::i32, 1, 
/* 31145*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31148*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31151*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31154*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31157*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31160*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31163*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31175*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31178*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31181*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31184*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31196*/    OPC_EmitInteger, MVT::i32, 1, 
/* 31199*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 31202*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31205*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31208*/    OPC_MorphNodeTo1, TARGET_VAL(R600::SUB_INT), 0,
                  MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (sub:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
              // Dst: (SUB_INT:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 31234*/  /*SwitchOpcode*/ 104, TARGET_VAL(ISD::SMAX),// ->31341
/* 31237*/    OPC_RecordChild0, // #0 = $src0
/* 31238*/    OPC_RecordChild1, // #1 = $src1
/* 31239*/    OPC_CheckType, MVT::i32,
/* 31241*/    OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 31243*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31246*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31249*/    OPC_EmitInteger, MVT::i32, 1, 
/* 31252*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31255*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31258*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31261*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31264*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31267*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31270*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31282*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31285*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31288*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31291*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31303*/    OPC_EmitInteger, MVT::i32, 1, 
/* 31306*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 31309*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31312*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31315*/    OPC_MorphNodeTo1, TARGET_VAL(R600::MAX_INT), 0,
                  MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (smax:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
              // Dst: (MAX_INT:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 31341*/  /*SwitchOpcode*/ 104, TARGET_VAL(ISD::SMIN),// ->31448
/* 31344*/    OPC_RecordChild0, // #0 = $src0
/* 31345*/    OPC_RecordChild1, // #1 = $src1
/* 31346*/    OPC_CheckType, MVT::i32,
/* 31348*/    OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 31350*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31353*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31356*/    OPC_EmitInteger, MVT::i32, 1, 
/* 31359*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31362*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31365*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31368*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31371*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31374*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31377*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31389*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31392*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31395*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31398*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31410*/    OPC_EmitInteger, MVT::i32, 1, 
/* 31413*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 31416*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31419*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31422*/    OPC_MorphNodeTo1, TARGET_VAL(R600::MIN_INT), 0,
                  MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (smin:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
              // Dst: (MIN_INT:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 31448*/  /*SwitchOpcode*/ 104, TARGET_VAL(ISD::UMAX),// ->31555
/* 31451*/    OPC_RecordChild0, // #0 = $src0
/* 31452*/    OPC_RecordChild1, // #1 = $src1
/* 31453*/    OPC_CheckType, MVT::i32,
/* 31455*/    OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 31457*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31460*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31463*/    OPC_EmitInteger, MVT::i32, 1, 
/* 31466*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31469*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31472*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31475*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31478*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31481*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31484*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31496*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31499*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31502*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31505*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31517*/    OPC_EmitInteger, MVT::i32, 1, 
/* 31520*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 31523*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31526*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31529*/    OPC_MorphNodeTo1, TARGET_VAL(R600::MAX_UINT), 0,
                  MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (umax:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
              // Dst: (MAX_UINT:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 31555*/  /*SwitchOpcode*/ 104, TARGET_VAL(ISD::UMIN),// ->31662
/* 31558*/    OPC_RecordChild0, // #0 = $src0
/* 31559*/    OPC_RecordChild1, // #1 = $src1
/* 31560*/    OPC_CheckType, MVT::i32,
/* 31562*/    OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 31564*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31567*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31570*/    OPC_EmitInteger, MVT::i32, 1, 
/* 31573*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31576*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31579*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31582*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31585*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31588*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31591*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31603*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31606*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31609*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31612*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31624*/    OPC_EmitInteger, MVT::i32, 1, 
/* 31627*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 31630*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31633*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31636*/    OPC_MorphNodeTo1, TARGET_VAL(R600::MIN_UINT), 0,
                  MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (umin:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
              // Dst: (MIN_UINT:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 31662*/  /*SwitchOpcode*/ 78|128,1/*206*/, TARGET_VAL(ISD::FP_TO_SINT),// ->31872
/* 31666*/    OPC_RecordChild0, // #0 = $src0
/* 31667*/    OPC_CheckChild0Type, MVT::f32,
/* 31669*/    OPC_CheckType, MVT::i32,
/* 31671*/    OPC_Scope, 66, /*->31739*/ // 2 children in Scope
/* 31673*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 31675*/      OPC_EmitInteger, MVT::i32, 1, 
/* 31678*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31681*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31684*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31687*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31690*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31693*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31696*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31708*/      OPC_EmitInteger, MVT::i32, 1, 
/* 31711*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 31714*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31717*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31720*/      OPC_MorphNodeTo1, TARGET_VAL(R600::FLT_TO_INT_r600), 0,
                    MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (fp_to_sint:{ *:[i32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (FLT_TO_INT_r600:{ *:[i32] } R600_Reg32:{ *:[f32] }:$src0)
/* 31739*/    /*Scope*/ 2|128,1/*130*/, /*->31871*/
/* 31741*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 31743*/      OPC_EmitInteger, MVT::i32, 1, 
/* 31746*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31749*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31752*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31755*/      OPC_EmitInteger, MVT::i32, 1, 
/* 31758*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31761*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31764*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31767*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31770*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31773*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31776*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31788*/      OPC_EmitInteger, MVT::i32, 1, 
/* 31791*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 31794*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31797*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31800*/      OPC_EmitNode1, TARGET_VAL(R600::TRUNC), 0,
                    MVT::i32, 13/*#Ops*/, 5, 6, 7, 8, 0, 9, 10, 11, 12, 13, 14, 15, 16,  // Results = #17
/* 31819*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31822*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31825*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31828*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31840*/      OPC_EmitInteger, MVT::i32, 1, 
/* 31843*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 31846*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31849*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31852*/      OPC_MorphNodeTo1, TARGET_VAL(R600::FLT_TO_INT_eg), 0,
                    MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 17, 18, 19, 20, 21, 22, 23, 24, 25, 
                // Src: (fp_to_sint:{ *:[i32] } f32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (FLT_TO_INT_eg:{ *:[i32] } (TRUNC:{ *:[i32] } ?:{ *:[f32] }:$src0))
/* 31871*/    0, /*End of Scope*/
/* 31872*/  /*SwitchOpcode*/ 78|128,1/*206*/, TARGET_VAL(ISD::FP_TO_UINT),// ->32082
/* 31876*/    OPC_RecordChild0, // #0 = $src0
/* 31877*/    OPC_CheckChild0Type, MVT::f32,
/* 31879*/    OPC_CheckType, MVT::i32,
/* 31881*/    OPC_Scope, 66, /*->31949*/ // 2 children in Scope
/* 31883*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 31885*/      OPC_EmitInteger, MVT::i32, 1, 
/* 31888*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31891*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31894*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31897*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31900*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31903*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31906*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31918*/      OPC_EmitInteger, MVT::i32, 1, 
/* 31921*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 31924*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31927*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31930*/      OPC_MorphNodeTo1, TARGET_VAL(R600::FLT_TO_UINT_r600), 0,
                    MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (fp_to_uint:{ *:[i32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (FLT_TO_UINT_r600:{ *:[i32] } R600_Reg32:{ *:[f32] }:$src0)
/* 31949*/    /*Scope*/ 2|128,1/*130*/, /*->32081*/
/* 31951*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 31953*/      OPC_EmitInteger, MVT::i32, 1, 
/* 31956*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31959*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31962*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31965*/      OPC_EmitInteger, MVT::i32, 1, 
/* 31968*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31971*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31974*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31977*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31980*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31983*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31986*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31998*/      OPC_EmitInteger, MVT::i32, 1, 
/* 32001*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 32004*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32007*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32010*/      OPC_EmitNode1, TARGET_VAL(R600::TRUNC), 0,
                    MVT::i32, 13/*#Ops*/, 5, 6, 7, 8, 0, 9, 10, 11, 12, 13, 14, 15, 16,  // Results = #17
/* 32029*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32032*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32035*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32038*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32050*/      OPC_EmitInteger, MVT::i32, 1, 
/* 32053*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 32056*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32059*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32062*/      OPC_MorphNodeTo1, TARGET_VAL(R600::FLT_TO_UINT_eg), 0,
                    MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 17, 18, 19, 20, 21, 22, 23, 24, 25, 
                // Src: (fp_to_uint:{ *:[i32] } f32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (FLT_TO_UINT_eg:{ *:[i32] } (TRUNC:{ *:[i32] } ?:{ *:[f32] }:$src0))
/* 32081*/    0, /*End of Scope*/
/* 32082*/  /*SwitchOpcode*/ 82|128,1/*210*/, TARGET_VAL(ISD::SHL),// ->32296
/* 32086*/    OPC_RecordChild0, // #0 = $src0
/* 32087*/    OPC_RecordChild1, // #1 = $src1
/* 32088*/    OPC_CheckChild1Type, MVT::i32,
/* 32090*/    OPC_CheckType, MVT::i32,
/* 32092*/    OPC_Scope, 100, /*->32194*/ // 2 children in Scope
/* 32094*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 32096*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32099*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32102*/      OPC_EmitInteger, MVT::i32, 1, 
/* 32105*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32108*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32111*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32114*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32117*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32120*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32123*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32135*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32138*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32141*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32144*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32156*/      OPC_EmitInteger, MVT::i32, 1, 
/* 32159*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 32162*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32165*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32168*/      OPC_MorphNodeTo1, TARGET_VAL(R600::LSHL_r600), 0,
                    MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (shl:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                // Dst: (LSHL_r600:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 32194*/    /*Scope*/ 100, /*->32295*/
/* 32195*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 32197*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32200*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32203*/      OPC_EmitInteger, MVT::i32, 1, 
/* 32206*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32209*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32212*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32215*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32218*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32221*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32224*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32236*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32239*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32242*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32245*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32257*/      OPC_EmitInteger, MVT::i32, 1, 
/* 32260*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 32263*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32266*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32269*/      OPC_MorphNodeTo1, TARGET_VAL(R600::LSHL_eg), 0,
                    MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (shl:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                // Dst: (LSHL_eg:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 32295*/    0, /*End of Scope*/
/* 32296*/  /*SwitchOpcode*/ 53|128,2/*309*/, TARGET_VAL(ISD::MUL),// ->32609
/* 32300*/    OPC_RecordChild0, // #0 = $src0
/* 32301*/    OPC_RecordChild1, // #1 = $src1
/* 32302*/    OPC_CheckType, MVT::i32,
/* 32304*/    OPC_Scope, 100, /*->32406*/ // 3 children in Scope
/* 32306*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 32308*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32311*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32314*/      OPC_EmitInteger, MVT::i32, 1, 
/* 32317*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32320*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32323*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32326*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32329*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32332*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32335*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32347*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32350*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32353*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32356*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32368*/      OPC_EmitInteger, MVT::i32, 1, 
/* 32371*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 32374*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32377*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32380*/      OPC_MorphNodeTo1, TARGET_VAL(R600::MULLO_INT_r600), 0,
                    MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (mul:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                // Dst: (MULLO_INT_r600:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 32406*/    /*Scope*/ 100, /*->32507*/
/* 32407*/      OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 32409*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32412*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32415*/      OPC_EmitInteger, MVT::i32, 1, 
/* 32418*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32421*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32424*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32427*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32430*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32433*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32436*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32448*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32451*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32454*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32457*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32469*/      OPC_EmitInteger, MVT::i32, 1, 
/* 32472*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 32475*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32478*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32481*/      OPC_MorphNodeTo1, TARGET_VAL(R600::MULLO_INT_eg), 0,
                    MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (mul:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                // Dst: (MULLO_INT_eg:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 32507*/    /*Scope*/ 100, /*->32608*/
/* 32508*/      OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 32510*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32513*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32516*/      OPC_EmitInteger, MVT::i32, 1, 
/* 32519*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32522*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32525*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32528*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32531*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32534*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32537*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32549*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32552*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32555*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32558*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32570*/      OPC_EmitInteger, MVT::i32, 1, 
/* 32573*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 32576*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32579*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32582*/      OPC_MorphNodeTo1, TARGET_VAL(R600::MULLO_INT_cm), 0,
                    MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (mul:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                // Dst: (MULLO_INT_cm:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 32608*/    0, /*End of Scope*/
/* 32609*/  /*SwitchOpcode*/ 53|128,2/*309*/, TARGET_VAL(ISD::MULHS),// ->32922
/* 32613*/    OPC_RecordChild0, // #0 = $src0
/* 32614*/    OPC_RecordChild1, // #1 = $src1
/* 32615*/    OPC_CheckType, MVT::i32,
/* 32617*/    OPC_Scope, 100, /*->32719*/ // 3 children in Scope
/* 32619*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 32621*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32624*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32627*/      OPC_EmitInteger, MVT::i32, 1, 
/* 32630*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32633*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32636*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32639*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32642*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32645*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32648*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32660*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32663*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32666*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32669*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32681*/      OPC_EmitInteger, MVT::i32, 1, 
/* 32684*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 32687*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32690*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32693*/      OPC_MorphNodeTo1, TARGET_VAL(R600::MULHI_INT_r600), 0,
                    MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (mulhs:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                // Dst: (MULHI_INT_r600:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 32719*/    /*Scope*/ 100, /*->32820*/
/* 32720*/      OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 32722*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32725*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32728*/      OPC_EmitInteger, MVT::i32, 1, 
/* 32731*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32734*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32737*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32740*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32743*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32746*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32749*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32761*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32764*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32767*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32770*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32782*/      OPC_EmitInteger, MVT::i32, 1, 
/* 32785*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 32788*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32791*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32794*/      OPC_MorphNodeTo1, TARGET_VAL(R600::MULHI_INT_eg), 0,
                    MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (mulhs:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                // Dst: (MULHI_INT_eg:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 32820*/    /*Scope*/ 100, /*->32921*/
/* 32821*/      OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 32823*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32826*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32829*/      OPC_EmitInteger, MVT::i32, 1, 
/* 32832*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32835*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32838*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32841*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32844*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32847*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32850*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32862*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32865*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32868*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32871*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32883*/      OPC_EmitInteger, MVT::i32, 1, 
/* 32886*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 32889*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32892*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32895*/      OPC_MorphNodeTo1, TARGET_VAL(R600::MULHI_INT_cm), 0,
                    MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (mulhs:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                // Dst: (MULHI_INT_cm:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 32921*/    0, /*End of Scope*/
/* 32922*/  /*SwitchOpcode*/ 53|128,2/*309*/, TARGET_VAL(ISD::MULHU),// ->33235
/* 32926*/    OPC_RecordChild0, // #0 = $src0
/* 32927*/    OPC_RecordChild1, // #1 = $src1
/* 32928*/    OPC_CheckType, MVT::i32,
/* 32930*/    OPC_Scope, 100, /*->33032*/ // 3 children in Scope
/* 32932*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 32934*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32937*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32940*/      OPC_EmitInteger, MVT::i32, 1, 
/* 32943*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32946*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32949*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32952*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32955*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32958*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32961*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32973*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32976*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32979*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32982*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32994*/      OPC_EmitInteger, MVT::i32, 1, 
/* 32997*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 33000*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33003*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33006*/      OPC_MorphNodeTo1, TARGET_VAL(R600::MULHI_UINT_r600), 0,
                    MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (mulhu:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                // Dst: (MULHI_UINT_r600:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 33032*/    /*Scope*/ 100, /*->33133*/
/* 33033*/      OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 33035*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33038*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33041*/      OPC_EmitInteger, MVT::i32, 1, 
/* 33044*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33047*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33050*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33053*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33056*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33059*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33062*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 33074*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33077*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33080*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33083*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 33095*/      OPC_EmitInteger, MVT::i32, 1, 
/* 33098*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 33101*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33104*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33107*/      OPC_MorphNodeTo1, TARGET_VAL(R600::MULHI_UINT_eg), 0,
                    MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (mulhu:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                // Dst: (MULHI_UINT_eg:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 33133*/    /*Scope*/ 100, /*->33234*/
/* 33134*/      OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 33136*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33139*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33142*/      OPC_EmitInteger, MVT::i32, 1, 
/* 33145*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33148*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33151*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33154*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33157*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33160*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33163*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 33175*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33178*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33181*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33184*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 33196*/      OPC_EmitInteger, MVT::i32, 1, 
/* 33199*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 33202*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33205*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33208*/      OPC_MorphNodeTo1, TARGET_VAL(R600::MULHI_UINT_cm), 0,
                    MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (mulhu:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                // Dst: (MULHI_UINT_cm:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 33234*/    0, /*End of Scope*/
/* 33235*/  /*SwitchOpcode*/ 63|128,3/*447*/, TARGET_VAL(AMDGPUISD::URECIP),// ->33686
/* 33239*/    OPC_RecordChild0, // #0 = $src0
/* 33240*/    OPC_CheckType, MVT::i32,
/* 33242*/    OPC_Scope, 66, /*->33310*/ // 3 children in Scope
/* 33244*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 33246*/      OPC_EmitInteger, MVT::i32, 1, 
/* 33249*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33252*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33255*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33258*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33261*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33264*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33267*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 33279*/      OPC_EmitInteger, MVT::i32, 1, 
/* 33282*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 33285*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33288*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33291*/      OPC_MorphNodeTo1, TARGET_VAL(R600::RECIP_UINT_r600), 0,
                    MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (AMDGPUurecip:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0) - Complexity = 3
                // Dst: (RECIP_UINT_r600:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0)
/* 33310*/    /*Scope*/ 66, /*->33377*/
/* 33311*/      OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 33313*/      OPC_EmitInteger, MVT::i32, 1, 
/* 33316*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33319*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33322*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33325*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33328*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33331*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33334*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 33346*/      OPC_EmitInteger, MVT::i32, 1, 
/* 33349*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 33352*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33355*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33358*/      OPC_MorphNodeTo1, TARGET_VAL(R600::RECIP_UINT_eg), 0,
                    MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (AMDGPUurecip:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0) - Complexity = 3
                // Dst: (RECIP_UINT_eg:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0)
/* 33377*/    /*Scope*/ 50|128,2/*306*/, /*->33685*/
/* 33379*/      OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 33381*/      OPC_EmitInteger, MVT::i32, 1, 
/* 33384*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33387*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33390*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33393*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33396*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33399*/      OPC_EmitInteger, MVT::i32, 1, 
/* 33402*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33405*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33408*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33411*/      OPC_EmitInteger, MVT::i32, 1, 
/* 33414*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33417*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33420*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33423*/      OPC_EmitInteger, MVT::i32, 1, 
/* 33426*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33429*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33432*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33435*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33438*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33441*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33444*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 33456*/      OPC_EmitInteger, MVT::i32, 1, 
/* 33459*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 33462*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33465*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33468*/      OPC_EmitNode1, TARGET_VAL(R600::UINT_TO_FLT_eg), 0,
                    MVT::i32, 13/*#Ops*/, 15, 16, 17, 18, 0, 19, 20, 21, 22, 23, 24, 25, 26,  // Results = #27
/* 33487*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33490*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33493*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33496*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 33508*/      OPC_EmitInteger, MVT::i32, 1, 
/* 33511*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 33514*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33517*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33520*/      OPC_EmitNode1, TARGET_VAL(R600::RECIP_IEEE_cm), 0,
                    MVT::i32, 13/*#Ops*/, 11, 12, 13, 14, 27, 28, 29, 30, 31, 32, 33, 34, 35,  // Results = #36
/* 33539*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33542*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33545*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33548*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 33560*/      OPC_EmitInteger, MVT::i32, 0|128,0|128,0|128,124|128,4/*1333788672*/, 
/* 33567*/      OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                    MVT::i32, 1/*#Ops*/, 41,  // Results = #42
/* 33574*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33577*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33580*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33583*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 33595*/      OPC_EmitInteger, MVT::i32, 1, 
/* 33598*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 33601*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33604*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33607*/      OPC_EmitNode1, TARGET_VAL(R600::MUL_IEEE), 0,
                    MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 36, 37, 38, 39, 40, 42, 43, 44, 45, 46, 47, 48, 49, 50,  // Results = #51
/* 33633*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33636*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33639*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33642*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 33654*/      OPC_EmitInteger, MVT::i32, 1, 
/* 33657*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 33660*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33663*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33666*/      OPC_MorphNodeTo1, TARGET_VAL(R600::FLT_TO_UINT_eg), 0,
                    MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 51, 52, 53, 54, 55, 56, 57, 58, 59, 
                // Src: (AMDGPUurecip:{ *:[i32] } i32:{ *:[i32] }:$src0) - Complexity = 3
                // Dst: (FLT_TO_UINT_eg:{ *:[i32] } (MUL_IEEE:{ *:[i32] } (RECIP_IEEE_cm:{ *:[i32] } (UINT_TO_FLT_eg:{ *:[i32] } ?:{ *:[i32] }:$src0)), (MOV_IMM_I32:{ *:[i32] } 1333788672:{ *:[i32] })))
/* 33685*/    0, /*End of Scope*/
/* 33686*/  /*SwitchOpcode*/ 80|128,1/*208*/, TARGET_VAL(AMDGPUISD::MULHI_U24),// ->33898
/* 33690*/    OPC_RecordChild0, // #0 = $src0
/* 33691*/    OPC_RecordChild1, // #1 = $src1
/* 33692*/    OPC_CheckType, MVT::i32,
/* 33694*/    OPC_Scope, 100, /*->33796*/ // 2 children in Scope
/* 33696*/      OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 33698*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33701*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33704*/      OPC_EmitInteger, MVT::i32, 1, 
/* 33707*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33710*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33713*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33716*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33719*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33722*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33725*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 33737*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33740*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33743*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33746*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 33758*/      OPC_EmitInteger, MVT::i32, 1, 
/* 33761*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 33764*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33767*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33770*/      OPC_MorphNodeTo1, TARGET_VAL(R600::MULHI_UINT24_eg), 0,
                    MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (AMDGPUmulhi_u24:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                // Dst: (MULHI_UINT24_eg:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 33796*/    /*Scope*/ 100, /*->33897*/
/* 33797*/      OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 33799*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33802*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33805*/      OPC_EmitInteger, MVT::i32, 1, 
/* 33808*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33811*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33814*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33817*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33820*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33823*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33826*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 33838*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33841*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33844*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33847*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 33859*/      OPC_EmitInteger, MVT::i32, 1, 
/* 33862*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 33865*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33868*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33871*/      OPC_MorphNodeTo1, TARGET_VAL(R600::MULHI_UINT_cm24), 0,
                    MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (AMDGPUmulhi_u24:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                // Dst: (MULHI_UINT_cm24:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 33897*/    0, /*End of Scope*/
/* 33898*/  /*SwitchOpcode*/ 105, TARGET_VAL(AMDGPUISD::BFE_U32),// ->34006
/* 33901*/    OPC_RecordChild0, // #0 = $src0
/* 33902*/    OPC_RecordChild1, // #1 = $src1
/* 33903*/    OPC_RecordChild2, // #2 = $src2
/* 33904*/    OPC_CheckChild2Type, MVT::i32,
/* 33906*/    OPC_CheckType, MVT::i32,
/* 33908*/    OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 33910*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33913*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33916*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33919*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33922*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 33934*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33937*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33940*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 33952*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33955*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33958*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 33970*/    OPC_EmitInteger, MVT::i32, 1, 
/* 33973*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 33976*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33979*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33982*/    OPC_MorphNodeTo1, TARGET_VAL(R600::BFE_UINT_eg), 0,
                  MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
              // Src: (AMDGPUbfe_u32_impl:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2) - Complexity = 3
              // Dst: (BFE_UINT_eg:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2)
/* 34006*/  /*SwitchOpcode*/ 105, TARGET_VAL(AMDGPUISD::BFE_I32),// ->34114
/* 34009*/    OPC_RecordChild0, // #0 = $src0
/* 34010*/    OPC_RecordChild1, // #1 = $src1
/* 34011*/    OPC_RecordChild2, // #2 = $src2
/* 34012*/    OPC_CheckChild2Type, MVT::i32,
/* 34014*/    OPC_CheckType, MVT::i32,
/* 34016*/    OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 34018*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34021*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34024*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34027*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34030*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34042*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34045*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34048*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34060*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34063*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34066*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34078*/    OPC_EmitInteger, MVT::i32, 1, 
/* 34081*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 34084*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34087*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34090*/    OPC_MorphNodeTo1, TARGET_VAL(R600::BFE_INT_eg), 0,
                  MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
              // Src: (AMDGPUbfe_i32_impl:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2) - Complexity = 3
              // Dst: (BFE_INT_eg:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2)
/* 34114*/  /*SwitchOpcode*/ 105, TARGET_VAL(AMDGPUISD::BFI),// ->34222
/* 34117*/    OPC_RecordChild0, // #0 = $src0
/* 34118*/    OPC_RecordChild1, // #1 = $src1
/* 34119*/    OPC_RecordChild2, // #2 = $src2
/* 34120*/    OPC_CheckChild2Type, MVT::i32,
/* 34122*/    OPC_CheckType, MVT::i32,
/* 34124*/    OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 34126*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34129*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34132*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34135*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34138*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34150*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34153*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34156*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34168*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34171*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34174*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34186*/    OPC_EmitInteger, MVT::i32, 1, 
/* 34189*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 34192*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34195*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34198*/    OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                  MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
              // Src: (AMDGPUbfi:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2) - Complexity = 3
              // Dst: (BFI_INT_eg:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2)
/* 34222*/  /*SwitchOpcode*/ 92|128,2/*348*/, TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->34574
/* 34226*/    OPC_RecordChild0, // #0 = $src
/* 34227*/    OPC_MoveChild1,
/* 34228*/    OPC_Scope, 109, /*->34339*/ // 3 children in Scope
/* 34230*/      OPC_CheckValueType, MVT::i1,
/* 34232*/      OPC_MoveParent,
/* 34233*/      OPC_CheckType, MVT::i32,
/* 34235*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 34237*/      OPC_EmitInteger, MVT::i32, 0, 
/* 34240*/      OPC_EmitInteger, MVT::i32, 0, 
/* 34243*/      OPC_EmitInteger, MVT::i32, 0, 
/* 34246*/      OPC_EmitInteger, MVT::i32, 0, 
/* 34249*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34261*/      OPC_EmitRegister, MVT::i32, R600::ZERO,
/* 34264*/      OPC_EmitInteger, MVT::i32, 0, 
/* 34267*/      OPC_EmitInteger, MVT::i32, 0, 
/* 34270*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34282*/      OPC_EmitRegister, MVT::i32, R600::ONE_INT,
/* 34285*/      OPC_EmitInteger, MVT::i32, 0, 
/* 34288*/      OPC_EmitInteger, MVT::i32, 0, 
/* 34291*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34303*/      OPC_EmitInteger, MVT::i32, 1, 
/* 34306*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 34309*/      OPC_EmitInteger, MVT::i32, 0, 
/* 34312*/      OPC_EmitInteger, MVT::i32, 0, 
/* 34315*/      OPC_MorphNodeTo1, TARGET_VAL(R600::BFE_INT_eg), 0,
                    MVT::i32, 18/*#Ops*/, 1, 2, 0, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 
                // Src: (sext_inreg:{ *:[i32] } i32:{ *:[i32] }:$src, i1:{ *:[Other] }) - Complexity = 3
                // Dst: (BFE_INT_eg:{ *:[i32] } i32:{ *:[i32] }:$src, ZERO:{ *:[i32] }, ONE_INT:{ *:[i32] })
/* 34339*/    /*Scope*/ 116, /*->34456*/
/* 34340*/      OPC_CheckValueType, MVT::i8,
/* 34342*/      OPC_MoveParent,
/* 34343*/      OPC_CheckType, MVT::i32,
/* 34345*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 34347*/      OPC_EmitInteger, MVT::i32, 0, 
/* 34350*/      OPC_EmitInteger, MVT::i32, 0, 
/* 34353*/      OPC_EmitInteger, MVT::i32, 0, 
/* 34356*/      OPC_EmitInteger, MVT::i32, 0, 
/* 34359*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34371*/      OPC_EmitRegister, MVT::i32, R600::ZERO,
/* 34374*/      OPC_EmitInteger, MVT::i32, 0, 
/* 34377*/      OPC_EmitInteger, MVT::i32, 0, 
/* 34380*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34392*/      OPC_EmitInteger, MVT::i32, 8, 
/* 34395*/      OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                    MVT::i32, 1/*#Ops*/, 10,  // Results = #11
/* 34402*/      OPC_EmitInteger, MVT::i32, 0, 
/* 34405*/      OPC_EmitInteger, MVT::i32, 0, 
/* 34408*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34420*/      OPC_EmitInteger, MVT::i32, 1, 
/* 34423*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 34426*/      OPC_EmitInteger, MVT::i32, 0, 
/* 34429*/      OPC_EmitInteger, MVT::i32, 0, 
/* 34432*/      OPC_MorphNodeTo1, TARGET_VAL(R600::BFE_INT_eg), 0,
                    MVT::i32, 18/*#Ops*/, 1, 2, 0, 3, 4, 5, 6, 7, 8, 9, 11, 12, 13, 14, 15, 16, 17, 18, 
                // Src: (sext_inreg:{ *:[i32] } i32:{ *:[i32] }:$src, i8:{ *:[Other] }) - Complexity = 3
                // Dst: (BFE_INT_eg:{ *:[i32] } i32:{ *:[i32] }:$src, ZERO:{ *:[i32] }, (MOV_IMM_I32:{ *:[i32] } 8:{ *:[i32] }))
/* 34456*/    /*Scope*/ 116, /*->34573*/
/* 34457*/      OPC_CheckValueType, MVT::i16,
/* 34459*/      OPC_MoveParent,
/* 34460*/      OPC_CheckType, MVT::i32,
/* 34462*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 34464*/      OPC_EmitInteger, MVT::i32, 0, 
/* 34467*/      OPC_EmitInteger, MVT::i32, 0, 
/* 34470*/      OPC_EmitInteger, MVT::i32, 0, 
/* 34473*/      OPC_EmitInteger, MVT::i32, 0, 
/* 34476*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34488*/      OPC_EmitRegister, MVT::i32, R600::ZERO,
/* 34491*/      OPC_EmitInteger, MVT::i32, 0, 
/* 34494*/      OPC_EmitInteger, MVT::i32, 0, 
/* 34497*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34509*/      OPC_EmitInteger, MVT::i32, 16, 
/* 34512*/      OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                    MVT::i32, 1/*#Ops*/, 10,  // Results = #11
/* 34519*/      OPC_EmitInteger, MVT::i32, 0, 
/* 34522*/      OPC_EmitInteger, MVT::i32, 0, 
/* 34525*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34537*/      OPC_EmitInteger, MVT::i32, 1, 
/* 34540*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 34543*/      OPC_EmitInteger, MVT::i32, 0, 
/* 34546*/      OPC_EmitInteger, MVT::i32, 0, 
/* 34549*/      OPC_MorphNodeTo1, TARGET_VAL(R600::BFE_INT_eg), 0,
                    MVT::i32, 18/*#Ops*/, 1, 2, 0, 3, 4, 5, 6, 7, 8, 9, 11, 12, 13, 14, 15, 16, 17, 18, 
                // Src: (sext_inreg:{ *:[i32] } i32:{ *:[i32] }:$src, i16:{ *:[Other] }) - Complexity = 3
                // Dst: (BFE_INT_eg:{ *:[i32] } i32:{ *:[i32] }:$src, ZERO:{ *:[i32] }, (MOV_IMM_I32:{ *:[i32] } 16:{ *:[i32] }))
/* 34573*/    0, /*End of Scope*/
/* 34574*/  /*SwitchOpcode*/ 104, TARGET_VAL(AMDGPUISD::BFM),// ->34681
/* 34577*/    OPC_RecordChild0, // #0 = $src0
/* 34578*/    OPC_RecordChild1, // #1 = $src1
/* 34579*/    OPC_CheckType, MVT::i32,
/* 34581*/    OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 34583*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34586*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34589*/    OPC_EmitInteger, MVT::i32, 1, 
/* 34592*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34595*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34598*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34601*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34604*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34607*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34610*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34622*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34625*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34628*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34631*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34643*/    OPC_EmitInteger, MVT::i32, 1, 
/* 34646*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 34649*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34652*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34655*/    OPC_MorphNodeTo1, TARGET_VAL(R600::BFM_INT_eg), 0,
                  MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (AMDGPUbfm:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1) - Complexity = 3
              // Dst: (BFM_INT_eg:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 34681*/  /*SwitchOpcode*/ 105, TARGET_VAL(AMDGPUISD::MAD_U24),// ->34789
/* 34684*/    OPC_RecordChild0, // #0 = $src0
/* 34685*/    OPC_RecordChild1, // #1 = $src1
/* 34686*/    OPC_RecordChild2, // #2 = $src2
/* 34687*/    OPC_CheckChild2Type, MVT::i32,
/* 34689*/    OPC_CheckType, MVT::i32,
/* 34691*/    OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 34693*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34696*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34699*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34702*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34705*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34717*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34720*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34723*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34735*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34738*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34741*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34753*/    OPC_EmitInteger, MVT::i32, 1, 
/* 34756*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 34759*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34762*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34765*/    OPC_MorphNodeTo1, TARGET_VAL(R600::MULADD_UINT24_eg), 0,
                  MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
              // Src: (AMDGPUmad_u24:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2) - Complexity = 3
              // Dst: (MULADD_UINT24_eg:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2)
/* 34789*/  /*SwitchOpcode*/ 104, TARGET_VAL(ISD::ROTR),// ->34896
/* 34792*/    OPC_RecordChild0, // #0 = $src0
/* 34793*/    OPC_RecordChild1, // #1 = $src1
/* 34794*/    OPC_CheckChild1Type, MVT::i32,
/* 34796*/    OPC_CheckType, MVT::i32,
/* 34798*/    OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 34800*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34803*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34806*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34809*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34812*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34824*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34827*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34830*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34842*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34845*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34848*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34860*/    OPC_EmitInteger, MVT::i32, 1, 
/* 34863*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 34866*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34869*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34872*/    OPC_MorphNodeTo1, TARGET_VAL(R600::BIT_ALIGN_INT_eg), 0,
                  MVT::i32, 18/*#Ops*/, 2, 3, 0, 4, 5, 6, 0, 7, 8, 9, 1, 10, 11, 12, 13, 14, 15, 16, 
              // Src: (rotr:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1) - Complexity = 3
              // Dst: (BIT_ALIGN_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$src0, ?:{ *:[i32] }:$src0, ?:{ *:[i32] }:$src1)
/* 34896*/  /*SwitchOpcode*/ 104, TARGET_VAL(AMDGPUISD::MUL_U24),// ->35003
/* 34899*/    OPC_RecordChild0, // #0 = $src0
/* 34900*/    OPC_RecordChild1, // #1 = $src1
/* 34901*/    OPC_CheckType, MVT::i32,
/* 34903*/    OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 34905*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34908*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34911*/    OPC_EmitInteger, MVT::i32, 1, 
/* 34914*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34917*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34920*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34923*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34926*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34929*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34932*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34944*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34947*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34950*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34953*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34965*/    OPC_EmitInteger, MVT::i32, 1, 
/* 34968*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 34971*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34974*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34977*/    OPC_MorphNodeTo1, TARGET_VAL(R600::MUL_UINT24_eg), 0,
                  MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (AMDGPUmul_u24_impl:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1) - Complexity = 3
              // Dst: (MUL_UINT24_eg:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 35003*/  /*SwitchOpcode*/ 104, TARGET_VAL(AMDGPUISD::CARRY),// ->35110
/* 35006*/    OPC_RecordChild0, // #0 = $src0
/* 35007*/    OPC_RecordChild1, // #1 = $src1
/* 35008*/    OPC_CheckType, MVT::i32,
/* 35010*/    OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 35012*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35015*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35018*/    OPC_EmitInteger, MVT::i32, 1, 
/* 35021*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35024*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35027*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35030*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35033*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35036*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35039*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 35051*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35054*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35057*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35060*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 35072*/    OPC_EmitInteger, MVT::i32, 1, 
/* 35075*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 35078*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35081*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35084*/    OPC_MorphNodeTo1, TARGET_VAL(R600::ADDC_UINT), 0,
                  MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (AMDGPUcarry:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
              // Dst: (ADDC_UINT:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 35110*/  /*SwitchOpcode*/ 104, TARGET_VAL(AMDGPUISD::BORROW),// ->35217
/* 35113*/    OPC_RecordChild0, // #0 = $src0
/* 35114*/    OPC_RecordChild1, // #1 = $src1
/* 35115*/    OPC_CheckType, MVT::i32,
/* 35117*/    OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 35119*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35122*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35125*/    OPC_EmitInteger, MVT::i32, 1, 
/* 35128*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35131*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35134*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35137*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35140*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35143*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35146*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 35158*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35161*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35164*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35167*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 35179*/    OPC_EmitInteger, MVT::i32, 1, 
/* 35182*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 35185*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35188*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35191*/    OPC_MorphNodeTo1, TARGET_VAL(R600::SUBB_UINT), 0,
                  MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (AMDGPUborrow:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
              // Dst: (SUBB_UINT:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 35217*/  /*SwitchOpcode*/ 71, TARGET_VAL(AMDGPUISD::FP_TO_FP16),// ->35291
/* 35220*/    OPC_RecordChild0, // #0 = $src0
/* 35221*/    OPC_CheckChild0Type, MVT::f32,
/* 35223*/    OPC_CheckType, MVT::i32,
/* 35225*/    OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 35227*/    OPC_EmitInteger, MVT::i32, 1, 
/* 35230*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35233*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35236*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35239*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35242*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35245*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35248*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 35260*/    OPC_EmitInteger, MVT::i32, 1, 
/* 35263*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 35266*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35269*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35272*/    OPC_MorphNodeTo1, TARGET_VAL(R600::FLT32_TO_FLT16), 0,
                  MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (AMDGPUfp_to_f16:{ *:[i32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
              // Dst: (FLT32_TO_FLT16:{ *:[i32] } R600_Reg32:{ *:[f32] }:$src0)
/* 35291*/  /*SwitchOpcode*/ 71, TARGET_VAL(ISD::CTPOP),// ->35365
/* 35294*/    OPC_RecordChild0, // #0 = $src0
/* 35295*/    OPC_CheckChild0Type, MVT::i32,
/* 35297*/    OPC_CheckType, MVT::i32,
/* 35299*/    OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 35301*/    OPC_EmitInteger, MVT::i32, 1, 
/* 35304*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35307*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35310*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35313*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35316*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35319*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35322*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 35334*/    OPC_EmitInteger, MVT::i32, 1, 
/* 35337*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 35340*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35343*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35346*/    OPC_MorphNodeTo1, TARGET_VAL(R600::BCNT_INT), 0,
                  MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (ctpop:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0) - Complexity = 3
              // Dst: (BCNT_INT:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0)
/* 35365*/  /*SwitchOpcode*/ 71, TARGET_VAL(ISD::CTLZ_ZERO_UNDEF),// ->35439
/* 35368*/    OPC_RecordChild0, // #0 = $src0
/* 35369*/    OPC_CheckChild0Type, MVT::i32,
/* 35371*/    OPC_CheckType, MVT::i32,
/* 35373*/    OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 35375*/    OPC_EmitInteger, MVT::i32, 1, 
/* 35378*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35381*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35384*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35387*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35390*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35393*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35396*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 35408*/    OPC_EmitInteger, MVT::i32, 1, 
/* 35411*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 35414*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35417*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35420*/    OPC_MorphNodeTo1, TARGET_VAL(R600::FFBH_UINT), 0,
                  MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (ctlz_zero_undef:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0) - Complexity = 3
              // Dst: (FFBH_UINT:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0)
/* 35439*/  /*SwitchOpcode*/ 71, TARGET_VAL(AMDGPUISD::FFBH_U32),// ->35513
/* 35442*/    OPC_RecordChild0, // #0 = $src0
/* 35443*/    OPC_CheckChild0Type, MVT::i32,
/* 35445*/    OPC_CheckType, MVT::i32,
/* 35447*/    OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 35449*/    OPC_EmitInteger, MVT::i32, 1, 
/* 35452*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35455*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35458*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35461*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35464*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35467*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35470*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 35482*/    OPC_EmitInteger, MVT::i32, 1, 
/* 35485*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 35488*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35491*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35494*/    OPC_MorphNodeTo1, TARGET_VAL(R600::FFBH_UINT), 0,
                  MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (AMDGPUffbh_u32_impl:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0) - Complexity = 3
              // Dst: (FFBH_UINT:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0)
/* 35513*/  /*SwitchOpcode*/ 71, TARGET_VAL(ISD::CTTZ_ZERO_UNDEF),// ->35587
/* 35516*/    OPC_RecordChild0, // #0 = $src0
/* 35517*/    OPC_CheckChild0Type, MVT::i32,
/* 35519*/    OPC_CheckType, MVT::i32,
/* 35521*/    OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 35523*/    OPC_EmitInteger, MVT::i32, 1, 
/* 35526*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35529*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35532*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35535*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35538*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35541*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35544*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 35556*/    OPC_EmitInteger, MVT::i32, 1, 
/* 35559*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 35562*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35565*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35568*/    OPC_MorphNodeTo1, TARGET_VAL(R600::FFBL_INT), 0,
                  MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (cttz_zero_undef:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0) - Complexity = 3
              // Dst: (FFBL_INT:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0)
/* 35587*/  /*SwitchOpcode*/ 71, TARGET_VAL(AMDGPUISD::FFBL_B32),// ->35661
/* 35590*/    OPC_RecordChild0, // #0 = $src0
/* 35591*/    OPC_CheckChild0Type, MVT::i32,
/* 35593*/    OPC_CheckType, MVT::i32,
/* 35595*/    OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 35597*/    OPC_EmitInteger, MVT::i32, 1, 
/* 35600*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35603*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35606*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35609*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35612*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35615*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35618*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 35630*/    OPC_EmitInteger, MVT::i32, 1, 
/* 35633*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 35636*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35639*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35642*/    OPC_MorphNodeTo1, TARGET_VAL(R600::FFBL_INT), 0,
                  MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (AMDGPUffbl_b32_impl:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0) - Complexity = 3
              // Dst: (FFBL_INT:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0)
/* 35661*/  /*SwitchOpcode*/ 105, TARGET_VAL(AMDGPUISD::MAD_I24),// ->35769
/* 35664*/    OPC_RecordChild0, // #0 = $src0
/* 35665*/    OPC_RecordChild1, // #1 = $src1
/* 35666*/    OPC_RecordChild2, // #2 = $src2
/* 35667*/    OPC_CheckChild2Type, MVT::i32,
/* 35669*/    OPC_CheckType, MVT::i32,
/* 35671*/    OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 35673*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35676*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35679*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35682*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35685*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 35697*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35700*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35703*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 35715*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35718*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35721*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 35733*/    OPC_EmitInteger, MVT::i32, 1, 
/* 35736*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 35739*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35742*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35745*/    OPC_MorphNodeTo1, TARGET_VAL(R600::MULADD_INT24_cm), 0,
                  MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
              // Src: (AMDGPUmad_i24:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2) - Complexity = 3
              // Dst: (MULADD_INT24_cm:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2)
/* 35769*/  /*SwitchOpcode*/ 104, TARGET_VAL(AMDGPUISD::MUL_I24),// ->35876
/* 35772*/    OPC_RecordChild0, // #0 = $src0
/* 35773*/    OPC_RecordChild1, // #1 = $src1
/* 35774*/    OPC_CheckType, MVT::i32,
/* 35776*/    OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 35778*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35781*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35784*/    OPC_EmitInteger, MVT::i32, 1, 
/* 35787*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35790*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35793*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35796*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35799*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35802*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35805*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 35817*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35820*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35823*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35826*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 35838*/    OPC_EmitInteger, MVT::i32, 1, 
/* 35841*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 35844*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35847*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35850*/    OPC_MorphNodeTo1, TARGET_VAL(R600::MUL_INT24_cm), 0,
                  MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (AMDGPUmul_i24_impl:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1) - Complexity = 3
              // Dst: (MUL_INT24_cm:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 35876*/  /*SwitchOpcode*/ 104, TARGET_VAL(AMDGPUISD::MULHI_I24),// ->35983
/* 35879*/    OPC_RecordChild0, // #0 = $src0
/* 35880*/    OPC_RecordChild1, // #1 = $src1
/* 35881*/    OPC_CheckType, MVT::i32,
/* 35883*/    OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 35885*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35888*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35891*/    OPC_EmitInteger, MVT::i32, 1, 
/* 35894*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35897*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35900*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35903*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35906*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35909*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35912*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 35924*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35927*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35930*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35933*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 35945*/    OPC_EmitInteger, MVT::i32, 1, 
/* 35948*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 35951*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35954*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35957*/    OPC_MorphNodeTo1, TARGET_VAL(R600::MULHI_INT_cm24), 0,
                  MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (AMDGPUmulhi_i24:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
              // Dst: (MULHI_INT_cm24:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 35983*/  /*SwitchOpcode*/ 8, TARGET_VAL(AMDGPUISD::ENDPGM),// ->35994
/* 35986*/    OPC_RecordNode, // #0 = 'AMDGPUendpgm' chained node
/* 35987*/    OPC_CaptureGlueInput,
/* 35988*/    OPC_EmitMergeInputChains1_0,
/* 35989*/    OPC_MorphNodeTo0, TARGET_VAL(R600::RETURN), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#Ops*/, 
              // Src: (AMDGPUendpgm) - Complexity = 3
              // Dst: (RETURN)
/* 35994*/  /*SwitchOpcode*/ 14, TARGET_VAL(ISD::Constant),// ->36011
/* 35997*/    OPC_RecordNode, // #0 = $val
/* 35998*/    OPC_CheckType, MVT::i32,
/* 36000*/    OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 36002*/    OPC_EmitConvertToTarget, 0,
/* 36004*/    OPC_MorphNodeTo1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                  MVT::i32, 1/*#Ops*/, 1, 
              // Src: (imm:{ *:[i32] }):$val - Complexity = 3
              // Dst: (MOV_IMM_I32:{ *:[i32] } (imm:{ *:[i32] }):$val)
/* 36011*/  /*SwitchOpcode*/ 14, TARGET_VAL(ISD::BR),// ->36028
/* 36014*/    OPC_RecordNode, // #0 = 'br' chained node
/* 36015*/    OPC_RecordChild1, // #1 = $target
/* 36016*/    OPC_MoveChild1,
/* 36017*/    OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/* 36020*/    OPC_MoveParent,
/* 36021*/    OPC_EmitMergeInputChains1_0,
/* 36022*/    OPC_MorphNodeTo0, TARGET_VAL(R600::BRANCH), 0|OPFL_Chain,
                  1/*#Ops*/, 1, 
              // Src: (br (bb:{ *:[Other] }):$target) - Complexity = 3
              // Dst: (BRANCH (bb:{ *:[Other] }):$target)
/* 36028*/  /*SwitchOpcode*/ 32, TARGET_VAL(AMDGPUISD::BRANCH_COND),// ->36063
/* 36031*/    OPC_RecordNode, // #0 = 'IL_brcond' chained node
/* 36032*/    OPC_RecordChild1, // #1 = $target
/* 36033*/    OPC_MoveChild1,
/* 36034*/    OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/* 36037*/    OPC_MoveParent,
/* 36038*/    OPC_RecordChild2, // #2 = $src0
/* 36039*/    OPC_Scope, 10, /*->36051*/ // 2 children in Scope
/* 36041*/      OPC_CheckChild2Type, MVT::i32,
/* 36043*/      OPC_EmitMergeInputChains1_0,
/* 36044*/      OPC_MorphNodeTo0, TARGET_VAL(R600::BRANCH_COND_i32), 0|OPFL_Chain,
                    2/*#Ops*/, 1, 2, 
                // Src: (IL_brcond (bb:{ *:[Other] }):$target, R600_Reg32:{ *:[i32] }:$src0) - Complexity = 3
                // Dst: (BRANCH_COND_i32 (bb:{ *:[Other] }):$target, R600_Reg32:{ *:[i32] }:$src0)
/* 36051*/    /*Scope*/ 10, /*->36062*/
/* 36052*/      OPC_CheckChild2Type, MVT::f32,
/* 36054*/      OPC_EmitMergeInputChains1_0,
/* 36055*/      OPC_MorphNodeTo0, TARGET_VAL(R600::BRANCH_COND_f32), 0|OPFL_Chain,
                    2/*#Ops*/, 1, 2, 
                // Src: (IL_brcond (bb:{ *:[Other] }):$target, R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (BRANCH_COND_f32 (bb:{ *:[Other] }):$target, R600_Reg32:{ *:[f32] }:$src0)
/* 36062*/    0, /*End of Scope*/
/* 36063*/  /*SwitchOpcode*/ 83|128,5/*723*/, TARGET_VAL(ISD::FDIV),// ->36790
/* 36067*/    OPC_Scope, 85|128,1/*213*/, /*->36283*/ // 2 children in Scope
/* 36070*/      OPC_MoveChild0,
/* 36071*/      OPC_CheckOpcode, TARGET_VAL(ISD::ConstantFP),
/* 36074*/      OPC_CheckPredicate, 2, // Predicate_FP_ONE
/* 36076*/      OPC_MoveParent,
/* 36077*/      OPC_RecordChild1, // #0 = $src
/* 36078*/      OPC_CheckType, MVT::f32,
/* 36080*/      OPC_Scope, 66, /*->36148*/ // 3 children in Scope
/* 36082*/        OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 36084*/        OPC_EmitInteger, MVT::i32, 1, 
/* 36087*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36090*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36093*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36096*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36099*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36102*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36105*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 36117*/        OPC_EmitInteger, MVT::i32, 1, 
/* 36120*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 36123*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36126*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36129*/        OPC_MorphNodeTo1, TARGET_VAL(R600::RECIP_IEEE_r600), 0,
                      MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                  // Src: (fdiv:{ *:[f32] } (fpimm:{ *:[f32] })<<P:Predicate_FP_ONE>>, f32:{ *:[f32] }:$src) - Complexity = 7
                  // Dst: (RECIP_IEEE_r600:{ *:[f32] } ?:{ *:[f32] }:$src)
/* 36148*/      /*Scope*/ 66, /*->36215*/
/* 36149*/        OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 36151*/        OPC_EmitInteger, MVT::i32, 1, 
/* 36154*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36157*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36160*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36163*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36166*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36169*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36172*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 36184*/        OPC_EmitInteger, MVT::i32, 1, 
/* 36187*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 36190*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36193*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36196*/        OPC_MorphNodeTo1, TARGET_VAL(R600::RECIP_IEEE_eg), 0,
                      MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                  // Src: (fdiv:{ *:[f32] } (fpimm:{ *:[f32] })<<P:Predicate_FP_ONE>>, f32:{ *:[f32] }:$src) - Complexity = 7
                  // Dst: (RECIP_IEEE_eg:{ *:[f32] } ?:{ *:[f32] }:$src)
/* 36215*/      /*Scope*/ 66, /*->36282*/
/* 36216*/        OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 36218*/        OPC_EmitInteger, MVT::i32, 1, 
/* 36221*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36224*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36227*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36230*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36233*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36236*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36239*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 36251*/        OPC_EmitInteger, MVT::i32, 1, 
/* 36254*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 36257*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36260*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36263*/        OPC_MorphNodeTo1, TARGET_VAL(R600::RECIP_IEEE_cm), 0,
                      MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                  // Src: (fdiv:{ *:[f32] } (fpimm:{ *:[f32] })<<P:Predicate_FP_ONE>>, f32:{ *:[f32] }:$src) - Complexity = 7
                  // Dst: (RECIP_IEEE_cm:{ *:[f32] } ?:{ *:[f32] }:$src)
/* 36282*/      0, /*End of Scope*/
/* 36283*/    /*Scope*/ 120|128,3/*504*/, /*->36789*/
/* 36285*/      OPC_RecordChild0, // #0 = $src0
/* 36286*/      OPC_RecordChild1, // #1 = $src1
/* 36287*/      OPC_CheckType, MVT::f32,
/* 36289*/      OPC_Scope, 36|128,1/*164*/, /*->36456*/ // 3 children in Scope
/* 36292*/        OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 36294*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36297*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36300*/        OPC_EmitInteger, MVT::i32, 1, 
/* 36303*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36306*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36309*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36312*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36315*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36318*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36321*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 36333*/        OPC_EmitInteger, MVT::i32, 1, 
/* 36336*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36339*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36342*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36345*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36348*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36351*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36354*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 36366*/        OPC_EmitInteger, MVT::i32, 1, 
/* 36369*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 36372*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36375*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36378*/        OPC_EmitNode1, TARGET_VAL(R600::RECIP_IEEE_r600), 0,
                      MVT::i32, 13/*#Ops*/, 12, 13, 14, 15, 1, 16, 17, 18, 19, 20, 21, 22, 23,  // Results = #24
/* 36397*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36400*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36403*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36406*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 36418*/        OPC_EmitInteger, MVT::i32, 1, 
/* 36421*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 36424*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36427*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36430*/        OPC_MorphNodeTo1, TARGET_VAL(R600::MUL_IEEE), 0,
                      MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 24, 25, 26, 27, 28, 29, 30, 31, 32, 
                  // Src: (fdiv:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1) - Complexity = 3
                  // Dst: (MUL_IEEE:{ *:[f32] } ?:{ *:[f32] }:$src0, (RECIP_IEEE_r600:{ *:[i32] } ?:{ *:[f32] }:$src1))
/* 36456*/      /*Scope*/ 36|128,1/*164*/, /*->36622*/
/* 36458*/        OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 36460*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36463*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36466*/        OPC_EmitInteger, MVT::i32, 1, 
/* 36469*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36472*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36475*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36478*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36481*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36484*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36487*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 36499*/        OPC_EmitInteger, MVT::i32, 1, 
/* 36502*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36505*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36508*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36511*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36514*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36517*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36520*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 36532*/        OPC_EmitInteger, MVT::i32, 1, 
/* 36535*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 36538*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36541*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36544*/        OPC_EmitNode1, TARGET_VAL(R600::RECIP_IEEE_eg), 0,
                      MVT::i32, 13/*#Ops*/, 12, 13, 14, 15, 1, 16, 17, 18, 19, 20, 21, 22, 23,  // Results = #24
/* 36563*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36566*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36569*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36572*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 36584*/        OPC_EmitInteger, MVT::i32, 1, 
/* 36587*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 36590*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36593*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36596*/        OPC_MorphNodeTo1, TARGET_VAL(R600::MUL_IEEE), 0,
                      MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 24, 25, 26, 27, 28, 29, 30, 31, 32, 
                  // Src: (fdiv:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1) - Complexity = 3
                  // Dst: (MUL_IEEE:{ *:[f32] } ?:{ *:[f32] }:$src0, (RECIP_IEEE_eg:{ *:[i32] } ?:{ *:[f32] }:$src1))
/* 36622*/      /*Scope*/ 36|128,1/*164*/, /*->36788*/
/* 36624*/        OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 36626*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36629*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36632*/        OPC_EmitInteger, MVT::i32, 1, 
/* 36635*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36638*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36641*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36644*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36647*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36650*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36653*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 36665*/        OPC_EmitInteger, MVT::i32, 1, 
/* 36668*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36671*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36674*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36677*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36680*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36683*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36686*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 36698*/        OPC_EmitInteger, MVT::i32, 1, 
/* 36701*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 36704*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36707*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36710*/        OPC_EmitNode1, TARGET_VAL(R600::RECIP_IEEE_cm), 0,
                      MVT::i32, 13/*#Ops*/, 12, 13, 14, 15, 1, 16, 17, 18, 19, 20, 21, 22, 23,  // Results = #24
/* 36729*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36732*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36735*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36738*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 36750*/        OPC_EmitInteger, MVT::i32, 1, 
/* 36753*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 36756*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36759*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36762*/        OPC_MorphNodeTo1, TARGET_VAL(R600::MUL_IEEE), 0,
                      MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 24, 25, 26, 27, 28, 29, 30, 31, 32, 
                  // Src: (fdiv:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1) - Complexity = 3
                  // Dst: (MUL_IEEE:{ *:[f32] } ?:{ *:[f32] }:$src0, (RECIP_IEEE_cm:{ *:[i32] } ?:{ *:[f32] }:$src1))
/* 36788*/      0, /*End of Scope*/
/* 36789*/    0, /*End of Scope*/
/* 36790*/  /*SwitchOpcode*/ 39|128,3/*423*/, TARGET_VAL(AMDGPUISD::RCP),// ->37217
/* 36794*/    OPC_Scope, 83|128,1/*211*/, /*->37008*/ // 2 children in Scope
/* 36797*/      OPC_MoveChild0,
/* 36798*/      OPC_CheckOpcode, TARGET_VAL(ISD::FSQRT),
/* 36801*/      OPC_RecordChild0, // #0 = $src
/* 36802*/      OPC_MoveParent,
/* 36803*/      OPC_CheckType, MVT::f32,
/* 36805*/      OPC_Scope, 66, /*->36873*/ // 3 children in Scope
/* 36807*/        OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 36809*/        OPC_EmitInteger, MVT::i32, 1, 
/* 36812*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36815*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36818*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36821*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36824*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36827*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36830*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 36842*/        OPC_EmitInteger, MVT::i32, 1, 
/* 36845*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 36848*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36851*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36854*/        OPC_MorphNodeTo1, TARGET_VAL(R600::RECIPSQRT_IEEE_r600), 0,
                      MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                  // Src: (AMDGPUrcp_impl:{ *:[f32] } (fsqrt:{ *:[f32] } f32:{ *:[f32] }:$src)) - Complexity = 6
                  // Dst: (RECIPSQRT_IEEE_r600:{ *:[f32] } ?:{ *:[f32] }:$src)
/* 36873*/      /*Scope*/ 66, /*->36940*/
/* 36874*/        OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 36876*/        OPC_EmitInteger, MVT::i32, 1, 
/* 36879*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36882*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36885*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36888*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36891*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36894*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36897*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 36909*/        OPC_EmitInteger, MVT::i32, 1, 
/* 36912*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 36915*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36918*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36921*/        OPC_MorphNodeTo1, TARGET_VAL(R600::RECIPSQRT_IEEE_eg), 0,
                      MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                  // Src: (AMDGPUrcp_impl:{ *:[f32] } (fsqrt:{ *:[f32] } f32:{ *:[f32] }:$src)) - Complexity = 6
                  // Dst: (RECIPSQRT_IEEE_eg:{ *:[f32] } ?:{ *:[f32] }:$src)
/* 36940*/      /*Scope*/ 66, /*->37007*/
/* 36941*/        OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 36943*/        OPC_EmitInteger, MVT::i32, 1, 
/* 36946*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36949*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36952*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36955*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36958*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36961*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36964*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 36976*/        OPC_EmitInteger, MVT::i32, 1, 
/* 36979*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 36982*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36985*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36988*/        OPC_MorphNodeTo1, TARGET_VAL(R600::RECIPSQRT_IEEE_cm), 0,
                      MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                  // Src: (AMDGPUrcp_impl:{ *:[f32] } (fsqrt:{ *:[f32] } f32:{ *:[f32] }:$src)) - Complexity = 6
                  // Dst: (RECIPSQRT_IEEE_cm:{ *:[f32] } ?:{ *:[f32] }:$src)
/* 37007*/      0, /*End of Scope*/
/* 37008*/    /*Scope*/ 78|128,1/*206*/, /*->37216*/
/* 37010*/      OPC_RecordChild0, // #0 = $src0
/* 37011*/      OPC_CheckType, MVT::f32,
/* 37013*/      OPC_Scope, 66, /*->37081*/ // 3 children in Scope
/* 37015*/        OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 37017*/        OPC_EmitInteger, MVT::i32, 1, 
/* 37020*/        OPC_EmitInteger, MVT::i32, 0, 
/* 37023*/        OPC_EmitInteger, MVT::i32, 0, 
/* 37026*/        OPC_EmitInteger, MVT::i32, 0, 
/* 37029*/        OPC_EmitInteger, MVT::i32, 0, 
/* 37032*/        OPC_EmitInteger, MVT::i32, 0, 
/* 37035*/        OPC_EmitInteger, MVT::i32, 0, 
/* 37038*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 37050*/        OPC_EmitInteger, MVT::i32, 1, 
/* 37053*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 37056*/        OPC_EmitInteger, MVT::i32, 0, 
/* 37059*/        OPC_EmitInteger, MVT::i32, 0, 
/* 37062*/        OPC_MorphNodeTo1, TARGET_VAL(R600::RECIP_IEEE_r600), 0,
                      MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                  // Src: (AMDGPUrcp_impl:{ *:[f32] } f32:{ *:[f32] }:$src0) - Complexity = 3
                  // Dst: (RECIP_IEEE_r600:{ *:[f32] } f32:{ *:[f32] }:$src0)
/* 37081*/      /*Scope*/ 66, /*->37148*/
/* 37082*/        OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 37084*/        OPC_EmitInteger, MVT::i32, 1, 
/* 37087*/        OPC_EmitInteger, MVT::i32, 0, 
/* 37090*/        OPC_EmitInteger, MVT::i32, 0, 
/* 37093*/        OPC_EmitInteger, MVT::i32, 0, 
/* 37096*/        OPC_EmitInteger, MVT::i32, 0, 
/* 37099*/        OPC_EmitInteger, MVT::i32, 0, 
/* 37102*/        OPC_EmitInteger, MVT::i32, 0, 
/* 37105*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 37117*/        OPC_EmitInteger, MVT::i32, 1, 
/* 37120*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 37123*/        OPC_EmitInteger, MVT::i32, 0, 
/* 37126*/        OPC_EmitInteger, MVT::i32, 0, 
/* 37129*/        OPC_MorphNodeTo1, TARGET_VAL(R600::RECIP_IEEE_eg), 0,
                      MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                  // Src: (AMDGPUrcp_impl:{ *:[f32] } f32:{ *:[f32] }:$src0) - Complexity = 3
                  // Dst: (RECIP_IEEE_eg:{ *:[f32] } f32:{ *:[f32] }:$src0)
/* 37148*/      /*Scope*/ 66, /*->37215*/
/* 37149*/        OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 37151*/        OPC_EmitInteger, MVT::i32, 1, 
/* 37154*/        OPC_EmitInteger, MVT::i32, 0, 
/* 37157*/        OPC_EmitInteger, MVT::i32, 0, 
/* 37160*/        OPC_EmitInteger, MVT::i32, 0, 
/* 37163*/        OPC_EmitInteger, MVT::i32, 0, 
/* 37166*/        OPC_EmitInteger, MVT::i32, 0, 
/* 37169*/        OPC_EmitInteger, MVT::i32, 0, 
/* 37172*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 37184*/        OPC_EmitInteger, MVT::i32, 1, 
/* 37187*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 37190*/        OPC_EmitInteger, MVT::i32, 0, 
/* 37193*/        OPC_EmitInteger, MVT::i32, 0, 
/* 37196*/        OPC_MorphNodeTo1, TARGET_VAL(R600::RECIP_IEEE_cm), 0,
                      MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                  // Src: (AMDGPUrcp_impl:{ *:[f32] } f32:{ *:[f32] }:$src0) - Complexity = 3
                  // Dst: (RECIP_IEEE_cm:{ *:[f32] } f32:{ *:[f32] }:$src0)
/* 37215*/      0, /*End of Scope*/
/* 37216*/    0, /*End of Scope*/
/* 37217*/  /*SwitchOpcode*/ 104, TARGET_VAL(ISD::FADD),// ->37324
/* 37220*/    OPC_RecordChild0, // #0 = $src0
/* 37221*/    OPC_RecordChild1, // #1 = $src1
/* 37222*/    OPC_CheckType, MVT::f32,
/* 37224*/    OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 37226*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37229*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37232*/    OPC_EmitInteger, MVT::i32, 1, 
/* 37235*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37238*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37241*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37244*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37247*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37250*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37253*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 37265*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37268*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37271*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37274*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 37286*/    OPC_EmitInteger, MVT::i32, 1, 
/* 37289*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 37292*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37295*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37298*/    OPC_MorphNodeTo1, TARGET_VAL(R600::ADD), 0,
                  MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (fadd:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0, R600_Reg32:{ *:[f32] }:$src1) - Complexity = 3
              // Dst: (ADD:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0, R600_Reg32:{ *:[f32] }:$src1)
/* 37324*/  /*SwitchOpcode*/ 104, TARGET_VAL(ISD::FMUL),// ->37431
/* 37327*/    OPC_RecordChild0, // #0 = $src0
/* 37328*/    OPC_RecordChild1, // #1 = $src1
/* 37329*/    OPC_CheckType, MVT::f32,
/* 37331*/    OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 37333*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37336*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37339*/    OPC_EmitInteger, MVT::i32, 1, 
/* 37342*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37345*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37348*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37351*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37354*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37357*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37360*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 37372*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37375*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37378*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37381*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 37393*/    OPC_EmitInteger, MVT::i32, 1, 
/* 37396*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 37399*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37402*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37405*/    OPC_MorphNodeTo1, TARGET_VAL(R600::MUL_IEEE), 0,
                  MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (fmul:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0, R600_Reg32:{ *:[f32] }:$src1) - Complexity = 3
              // Dst: (MUL_IEEE:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0, R600_Reg32:{ *:[f32] }:$src1)
/* 37431*/  /*SwitchOpcode*/ 104, TARGET_VAL(AMDGPUISD::FMAX_LEGACY),// ->37538
/* 37434*/    OPC_RecordChild0, // #0 = $src0
/* 37435*/    OPC_RecordChild1, // #1 = $src1
/* 37436*/    OPC_CheckType, MVT::f32,
/* 37438*/    OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 37440*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37443*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37446*/    OPC_EmitInteger, MVT::i32, 1, 
/* 37449*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37452*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37455*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37458*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37461*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37464*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37467*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 37479*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37482*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37485*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37488*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 37500*/    OPC_EmitInteger, MVT::i32, 1, 
/* 37503*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 37506*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37509*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37512*/    OPC_MorphNodeTo1, TARGET_VAL(R600::MAX), 0,
                  MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (AMDGPUfmax_legacy:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0, R600_Reg32:{ *:[f32] }:$src1) - Complexity = 3
              // Dst: (MAX:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0, R600_Reg32:{ *:[f32] }:$src1)
/* 37538*/  /*SwitchOpcode*/ 104, TARGET_VAL(AMDGPUISD::FMIN_LEGACY),// ->37645
/* 37541*/    OPC_RecordChild0, // #0 = $src0
/* 37542*/    OPC_RecordChild1, // #1 = $src1
/* 37543*/    OPC_CheckType, MVT::f32,
/* 37545*/    OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 37547*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37550*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37553*/    OPC_EmitInteger, MVT::i32, 1, 
/* 37556*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37559*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37562*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37565*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37568*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37571*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37574*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 37586*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37589*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37592*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37595*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 37607*/    OPC_EmitInteger, MVT::i32, 1, 
/* 37610*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 37613*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37616*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37619*/    OPC_MorphNodeTo1, TARGET_VAL(R600::MIN), 0,
                  MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (AMDGPUfmin_legacy:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0, R600_Reg32:{ *:[f32] }:$src1) - Complexity = 3
              // Dst: (MIN:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0, R600_Reg32:{ *:[f32] }:$src1)
/* 37645*/  /*SwitchOpcode*/ 104, TARGET_VAL(ISD::FMAXNUM),// ->37752
/* 37648*/    OPC_RecordChild0, // #0 = $src0
/* 37649*/    OPC_RecordChild1, // #1 = $src1
/* 37650*/    OPC_CheckType, MVT::f32,
/* 37652*/    OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 37654*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37657*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37660*/    OPC_EmitInteger, MVT::i32, 1, 
/* 37663*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37666*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37669*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37672*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37675*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37678*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37681*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 37693*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37696*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37699*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37702*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 37714*/    OPC_EmitInteger, MVT::i32, 1, 
/* 37717*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 37720*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37723*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37726*/    OPC_MorphNodeTo1, TARGET_VAL(R600::MAX_DX10), 0,
                  MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (fmaxnum:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0, R600_Reg32:{ *:[f32] }:$src1) - Complexity = 3
              // Dst: (MAX_DX10:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0, R600_Reg32:{ *:[f32] }:$src1)
/* 37752*/  /*SwitchOpcode*/ 104, TARGET_VAL(ISD::FMINNUM),// ->37859
/* 37755*/    OPC_RecordChild0, // #0 = $src0
/* 37756*/    OPC_RecordChild1, // #1 = $src1
/* 37757*/    OPC_CheckType, MVT::f32,
/* 37759*/    OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 37761*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37764*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37767*/    OPC_EmitInteger, MVT::i32, 1, 
/* 37770*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37773*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37776*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37779*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37782*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37785*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37788*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 37800*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37803*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37806*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37809*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 37821*/    OPC_EmitInteger, MVT::i32, 1, 
/* 37824*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 37827*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37830*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37833*/    OPC_MorphNodeTo1, TARGET_VAL(R600::MIN_DX10), 0,
                  MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (fminnum:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0, R600_Reg32:{ *:[f32] }:$src1) - Complexity = 3
              // Dst: (MIN_DX10:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0, R600_Reg32:{ *:[f32] }:$src1)
/* 37859*/  /*SwitchOpcode*/ 69, TARGET_VAL(AMDGPUISD::FRACT),// ->37931
/* 37862*/    OPC_RecordChild0, // #0 = $src0
/* 37863*/    OPC_CheckType, MVT::f32,
/* 37865*/    OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 37867*/    OPC_EmitInteger, MVT::i32, 1, 
/* 37870*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37873*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37876*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37879*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37882*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37885*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37888*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 37900*/    OPC_EmitInteger, MVT::i32, 1, 
/* 37903*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 37906*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37909*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37912*/    OPC_MorphNodeTo1, TARGET_VAL(R600::FRACT), 0,
                  MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (AMDGPUfract_impl:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
              // Dst: (FRACT:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 37931*/  /*SwitchOpcode*/ 69, TARGET_VAL(ISD::FTRUNC),// ->38003
/* 37934*/    OPC_RecordChild0, // #0 = $src0
/* 37935*/    OPC_CheckType, MVT::f32,
/* 37937*/    OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 37939*/    OPC_EmitInteger, MVT::i32, 1, 
/* 37942*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37945*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37948*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37951*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37954*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37957*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37960*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 37972*/    OPC_EmitInteger, MVT::i32, 1, 
/* 37975*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 37978*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37981*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37984*/    OPC_MorphNodeTo1, TARGET_VAL(R600::TRUNC), 0,
                  MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (ftrunc:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
              // Dst: (TRUNC:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 38003*/  /*SwitchOpcode*/ 69, TARGET_VAL(ISD::FCEIL),// ->38075
/* 38006*/    OPC_RecordChild0, // #0 = $src0
/* 38007*/    OPC_CheckType, MVT::f32,
/* 38009*/    OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 38011*/    OPC_EmitInteger, MVT::i32, 1, 
/* 38014*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38017*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38020*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38023*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38026*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38029*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38032*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38044*/    OPC_EmitInteger, MVT::i32, 1, 
/* 38047*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 38050*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38053*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38056*/    OPC_MorphNodeTo1, TARGET_VAL(R600::CEIL), 0,
                  MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (fceil:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
              // Dst: (CEIL:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 38075*/  /*SwitchOpcode*/ 69, TARGET_VAL(ISD::FRINT),// ->38147
/* 38078*/    OPC_RecordChild0, // #0 = $src0
/* 38079*/    OPC_CheckType, MVT::f32,
/* 38081*/    OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 38083*/    OPC_EmitInteger, MVT::i32, 1, 
/* 38086*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38089*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38092*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38095*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38098*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38101*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38104*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38116*/    OPC_EmitInteger, MVT::i32, 1, 
/* 38119*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 38122*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38125*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38128*/    OPC_MorphNodeTo1, TARGET_VAL(R600::RNDNE), 0,
                  MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (frint:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
              // Dst: (RNDNE:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 38147*/  /*SwitchOpcode*/ 69, TARGET_VAL(ISD::FFLOOR),// ->38219
/* 38150*/    OPC_RecordChild0, // #0 = $src0
/* 38151*/    OPC_CheckType, MVT::f32,
/* 38153*/    OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 38155*/    OPC_EmitInteger, MVT::i32, 1, 
/* 38158*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38161*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38164*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38167*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38170*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38173*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38176*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38188*/    OPC_EmitInteger, MVT::i32, 1, 
/* 38191*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 38194*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38197*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38200*/    OPC_MorphNodeTo1, TARGET_VAL(R600::FLOOR), 0,
                  MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (ffloor:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
              // Dst: (FLOOR:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 38219*/  /*SwitchOpcode*/ 90|128,2/*346*/, TARGET_VAL(AMDGPUISD::DOT4),// ->38569
/* 38223*/    OPC_RecordChild0, // #0 = $src0_X
/* 38224*/    OPC_RecordChild1, // #1 = $src1_X
/* 38225*/    OPC_RecordChild2, // #2 = $src0_Y
/* 38226*/    OPC_RecordChild3, // #3 = $src1_Y
/* 38227*/    OPC_RecordChild4, // #4 = $src0_Z
/* 38228*/    OPC_RecordChild5, // #5 = $src1_Z
/* 38229*/    OPC_RecordChild6, // #6 = $src0_W
/* 38230*/    OPC_RecordChild7, // #7 = $src1_W
/* 38231*/    OPC_CheckType, MVT::f32,
/* 38233*/    OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 38235*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38238*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38241*/    OPC_EmitInteger, MVT::i32, 1, 
/* 38244*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38247*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38250*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38253*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38256*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38259*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38262*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38274*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38277*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38280*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38283*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38295*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 38298*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38301*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38304*/    OPC_EmitInteger, MVT::i32, 1, 
/* 38307*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38310*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38313*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38316*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38319*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38322*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38325*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38337*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38340*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38343*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38346*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38358*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 38361*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38364*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38367*/    OPC_EmitInteger, MVT::i32, 1, 
/* 38370*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38373*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38376*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38379*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38382*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38385*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38388*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38400*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38403*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38406*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38409*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38421*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 38424*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38427*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38430*/    OPC_EmitInteger, MVT::i32, 1, 
/* 38433*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38436*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38439*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38442*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38445*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38448*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38451*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38463*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38466*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38469*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38472*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38484*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 38487*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38490*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38493*/    OPC_MorphNodeTo1, TARGET_VAL(R600::DOT_4), 0,
                  MVT::f32, 70/*#Ops*/, 8, 9, 10, 11, 12, 13, 0, 14, 15, 16, 17, 1, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 2, 29, 30, 31, 32, 3, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 4, 44, 45, 46, 47, 5, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 6, 59, 60, 61, 62, 7, 63, 64, 65, 66, 67, 68, 69, 
              // Src: (DOT4:{ *:[f32] } R600_TReg32_X:{ *:[f32] }:$src0_X, R600_TReg32_X:{ *:[f32] }:$src1_X, R600_TReg32_Y:{ *:[f32] }:$src0_Y, R600_TReg32_Y:{ *:[f32] }:$src1_Y, R600_TReg32_Z:{ *:[f32] }:$src0_Z, R600_TReg32_Z:{ *:[f32] }:$src1_Z, R600_TReg32_W:{ *:[f32] }:$src0_W, R600_TReg32_W:{ *:[f32] }:$src1_W) - Complexity = 3
              // Dst: (DOT_4:{ *:[f32] } R600_TReg32_X:{ *:[f32] }:$src0_X, R600_TReg32_X:{ *:[f32] }:$src1_X, R600_TReg32_Y:{ *:[f32] }:$src0_Y, R600_TReg32_Y:{ *:[f32] }:$src1_Y, R600_TReg32_Z:{ *:[f32] }:$src0_Z, R600_TReg32_Z:{ *:[f32] }:$src1_Z, R600_TReg32_W:{ *:[f32] }:$src0_W, R600_TReg32_W:{ *:[f32] }:$src1_W)
/* 38569*/  /*SwitchOpcode*/ 77|128,1/*205*/, TARGET_VAL(ISD::FMAD),// ->38778
/* 38573*/    OPC_RecordChild0, // #0 = $src0
/* 38574*/    OPC_RecordChild1, // #1 = $src1
/* 38575*/    OPC_RecordChild2, // #2 = $src2
/* 38576*/    OPC_CheckType, MVT::f32,
/* 38578*/    OPC_Scope, 98, /*->38678*/ // 2 children in Scope
/* 38580*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 38582*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38585*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38588*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38591*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38594*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38606*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38609*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38612*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38624*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38627*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38630*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38642*/      OPC_EmitInteger, MVT::i32, 1, 
/* 38645*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 38648*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38651*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38654*/      OPC_MorphNodeTo1, TARGET_VAL(R600::MULADD_IEEE_r600), 0,
                    MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                // Src: (fmad:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2) - Complexity = 3
                // Dst: (MULADD_IEEE_r600:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2)
/* 38678*/    /*Scope*/ 98, /*->38777*/
/* 38679*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 38681*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38684*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38687*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38690*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38693*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38705*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38708*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38711*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38723*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38726*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38729*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38741*/      OPC_EmitInteger, MVT::i32, 1, 
/* 38744*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 38747*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38750*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38753*/      OPC_MorphNodeTo1, TARGET_VAL(R600::MULADD_IEEE_eg), 0,
                    MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                // Src: (fmad:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2) - Complexity = 3
                // Dst: (MULADD_IEEE_eg:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2)
/* 38777*/    0, /*End of Scope*/
/* 38778*/  /*SwitchOpcode*/ 78|128,1/*206*/, TARGET_VAL(ISD::FEXP2),// ->38988
/* 38782*/    OPC_RecordChild0, // #0 = $src0
/* 38783*/    OPC_CheckType, MVT::f32,
/* 38785*/    OPC_Scope, 66, /*->38853*/ // 3 children in Scope
/* 38787*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 38789*/      OPC_EmitInteger, MVT::i32, 1, 
/* 38792*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38795*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38798*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38801*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38804*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38807*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38810*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38822*/      OPC_EmitInteger, MVT::i32, 1, 
/* 38825*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 38828*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38831*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38834*/      OPC_MorphNodeTo1, TARGET_VAL(R600::EXP_IEEE_r600), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (fexp2:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (EXP_IEEE_r600:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 38853*/    /*Scope*/ 66, /*->38920*/
/* 38854*/      OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 38856*/      OPC_EmitInteger, MVT::i32, 1, 
/* 38859*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38862*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38865*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38868*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38871*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38874*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38877*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38889*/      OPC_EmitInteger, MVT::i32, 1, 
/* 38892*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 38895*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38898*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38901*/      OPC_MorphNodeTo1, TARGET_VAL(R600::EXP_IEEE_eg), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (fexp2:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (EXP_IEEE_eg:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 38920*/    /*Scope*/ 66, /*->38987*/
/* 38921*/      OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 38923*/      OPC_EmitInteger, MVT::i32, 1, 
/* 38926*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38929*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38932*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38935*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38938*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38941*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38944*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38956*/      OPC_EmitInteger, MVT::i32, 1, 
/* 38959*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 38962*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38965*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38968*/      OPC_MorphNodeTo1, TARGET_VAL(R600::EXP_IEEE_cm), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (fexp2:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (EXP_IEEE_cm:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 38987*/    0, /*End of Scope*/
/* 38988*/  /*SwitchOpcode*/ 78|128,1/*206*/, TARGET_VAL(ISD::FLOG2),// ->39198
/* 38992*/    OPC_RecordChild0, // #0 = $src0
/* 38993*/    OPC_CheckType, MVT::f32,
/* 38995*/    OPC_Scope, 66, /*->39063*/ // 3 children in Scope
/* 38997*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 38999*/      OPC_EmitInteger, MVT::i32, 1, 
/* 39002*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39005*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39008*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39011*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39014*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39017*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39020*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 39032*/      OPC_EmitInteger, MVT::i32, 1, 
/* 39035*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 39038*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39041*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39044*/      OPC_MorphNodeTo1, TARGET_VAL(R600::LOG_IEEE_r600), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (flog2:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (LOG_IEEE_r600:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 39063*/    /*Scope*/ 66, /*->39130*/
/* 39064*/      OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 39066*/      OPC_EmitInteger, MVT::i32, 1, 
/* 39069*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39072*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39075*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39078*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39081*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39084*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39087*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 39099*/      OPC_EmitInteger, MVT::i32, 1, 
/* 39102*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 39105*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39108*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39111*/      OPC_MorphNodeTo1, TARGET_VAL(R600::LOG_IEEE_eg), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (flog2:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (LOG_IEEE_eg:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 39130*/    /*Scope*/ 66, /*->39197*/
/* 39131*/      OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 39133*/      OPC_EmitInteger, MVT::i32, 1, 
/* 39136*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39139*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39142*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39145*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39148*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39151*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39154*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 39166*/      OPC_EmitInteger, MVT::i32, 1, 
/* 39169*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 39172*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39175*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39178*/      OPC_MorphNodeTo1, TARGET_VAL(R600::LOG_IEEE_cm), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (flog2:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (LOG_IEEE_cm:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 39197*/    0, /*End of Scope*/
/* 39198*/  /*SwitchOpcode*/ 78|128,1/*206*/, TARGET_VAL(AMDGPUISD::RSQ_CLAMP),// ->39408
/* 39202*/    OPC_RecordChild0, // #0 = $src0
/* 39203*/    OPC_CheckType, MVT::f32,
/* 39205*/    OPC_Scope, 66, /*->39273*/ // 3 children in Scope
/* 39207*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 39209*/      OPC_EmitInteger, MVT::i32, 1, 
/* 39212*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39215*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39218*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39221*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39224*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39227*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39230*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 39242*/      OPC_EmitInteger, MVT::i32, 1, 
/* 39245*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 39248*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39251*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39254*/      OPC_MorphNodeTo1, TARGET_VAL(R600::RECIPSQRT_CLAMPED_r600), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (AMDGPUrsq_clamp_impl:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (RECIPSQRT_CLAMPED_r600:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 39273*/    /*Scope*/ 66, /*->39340*/
/* 39274*/      OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 39276*/      OPC_EmitInteger, MVT::i32, 1, 
/* 39279*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39282*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39285*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39288*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39291*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39294*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39297*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 39309*/      OPC_EmitInteger, MVT::i32, 1, 
/* 39312*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 39315*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39318*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39321*/      OPC_MorphNodeTo1, TARGET_VAL(R600::RECIPSQRT_CLAMPED_eg), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (AMDGPUrsq_clamp_impl:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (RECIPSQRT_CLAMPED_eg:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 39340*/    /*Scope*/ 66, /*->39407*/
/* 39341*/      OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 39343*/      OPC_EmitInteger, MVT::i32, 1, 
/* 39346*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39349*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39352*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39355*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39358*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39361*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39364*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 39376*/      OPC_EmitInteger, MVT::i32, 1, 
/* 39379*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 39382*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39385*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39388*/      OPC_MorphNodeTo1, TARGET_VAL(R600::RECIPSQRT_CLAMPED_cm), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (AMDGPUrsq_clamp_impl:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (RECIPSQRT_CLAMPED_cm:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 39407*/    0, /*End of Scope*/
/* 39408*/  /*SwitchOpcode*/ 78|128,1/*206*/, TARGET_VAL(AMDGPUISD::RSQ),// ->39618
/* 39412*/    OPC_RecordChild0, // #0 = $src0
/* 39413*/    OPC_CheckType, MVT::f32,
/* 39415*/    OPC_Scope, 66, /*->39483*/ // 3 children in Scope
/* 39417*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 39419*/      OPC_EmitInteger, MVT::i32, 1, 
/* 39422*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39425*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39428*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39431*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39434*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39437*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39440*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 39452*/      OPC_EmitInteger, MVT::i32, 1, 
/* 39455*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 39458*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39461*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39464*/      OPC_MorphNodeTo1, TARGET_VAL(R600::RECIPSQRT_IEEE_r600), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (AMDGPUrsq_impl:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (RECIPSQRT_IEEE_r600:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 39483*/    /*Scope*/ 66, /*->39550*/
/* 39484*/      OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 39486*/      OPC_EmitInteger, MVT::i32, 1, 
/* 39489*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39492*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39495*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39498*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39501*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39504*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39507*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 39519*/      OPC_EmitInteger, MVT::i32, 1, 
/* 39522*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 39525*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39528*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39531*/      OPC_MorphNodeTo1, TARGET_VAL(R600::RECIPSQRT_IEEE_eg), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (AMDGPUrsq_impl:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (RECIPSQRT_IEEE_eg:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 39550*/    /*Scope*/ 66, /*->39617*/
/* 39551*/      OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 39553*/      OPC_EmitInteger, MVT::i32, 1, 
/* 39556*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39559*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39562*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39565*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39568*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39571*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39574*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 39586*/      OPC_EmitInteger, MVT::i32, 1, 
/* 39589*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 39592*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39595*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39598*/      OPC_MorphNodeTo1, TARGET_VAL(R600::RECIPSQRT_IEEE_cm), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (AMDGPUrsq_impl:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (RECIPSQRT_IEEE_cm:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 39617*/    0, /*End of Scope*/
/* 39618*/  /*SwitchOpcode*/ 13|128,1/*141*/, TARGET_VAL(ISD::SINT_TO_FP),// ->39763
/* 39622*/    OPC_RecordChild0, // #0 = $src0
/* 39623*/    OPC_CheckChild0Type, MVT::i32,
/* 39625*/    OPC_CheckType, MVT::f32,
/* 39627*/    OPC_Scope, 66, /*->39695*/ // 2 children in Scope
/* 39629*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 39631*/      OPC_EmitInteger, MVT::i32, 1, 
/* 39634*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39637*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39640*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39643*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39646*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39649*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39652*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 39664*/      OPC_EmitInteger, MVT::i32, 1, 
/* 39667*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 39670*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39673*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39676*/      OPC_MorphNodeTo1, TARGET_VAL(R600::INT_TO_FLT_r600), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (sint_to_fp:{ *:[f32] } R600_Reg32:{ *:[i32] }:$src0) - Complexity = 3
                // Dst: (INT_TO_FLT_r600:{ *:[f32] } R600_Reg32:{ *:[i32] }:$src0)
/* 39695*/    /*Scope*/ 66, /*->39762*/
/* 39696*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 39698*/      OPC_EmitInteger, MVT::i32, 1, 
/* 39701*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39704*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39707*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39710*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39713*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39716*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39719*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 39731*/      OPC_EmitInteger, MVT::i32, 1, 
/* 39734*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 39737*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39740*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39743*/      OPC_MorphNodeTo1, TARGET_VAL(R600::INT_TO_FLT_eg), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (sint_to_fp:{ *:[f32] } R600_Reg32:{ *:[i32] }:$src0) - Complexity = 3
                // Dst: (INT_TO_FLT_eg:{ *:[f32] } R600_Reg32:{ *:[i32] }:$src0)
/* 39762*/    0, /*End of Scope*/
/* 39763*/  /*SwitchOpcode*/ 13|128,1/*141*/, TARGET_VAL(ISD::UINT_TO_FP),// ->39908
/* 39767*/    OPC_RecordChild0, // #0 = $src0
/* 39768*/    OPC_CheckChild0Type, MVT::i32,
/* 39770*/    OPC_CheckType, MVT::f32,
/* 39772*/    OPC_Scope, 66, /*->39840*/ // 2 children in Scope
/* 39774*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 39776*/      OPC_EmitInteger, MVT::i32, 1, 
/* 39779*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39782*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39785*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39788*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39791*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39794*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39797*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 39809*/      OPC_EmitInteger, MVT::i32, 1, 
/* 39812*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 39815*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39818*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39821*/      OPC_MorphNodeTo1, TARGET_VAL(R600::UINT_TO_FLT_r600), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (uint_to_fp:{ *:[f32] } R600_Reg32:{ *:[i32] }:$src0) - Complexity = 3
                // Dst: (UINT_TO_FLT_r600:{ *:[f32] } R600_Reg32:{ *:[i32] }:$src0)
/* 39840*/    /*Scope*/ 66, /*->39907*/
/* 39841*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 39843*/      OPC_EmitInteger, MVT::i32, 1, 
/* 39846*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39849*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39852*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39855*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39858*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39861*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39864*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 39876*/      OPC_EmitInteger, MVT::i32, 1, 
/* 39879*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 39882*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39885*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39888*/      OPC_MorphNodeTo1, TARGET_VAL(R600::UINT_TO_FLT_eg), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (uint_to_fp:{ *:[f32] } R600_Reg32:{ *:[i32] }:$src0) - Complexity = 3
                // Dst: (UINT_TO_FLT_eg:{ *:[f32] } R600_Reg32:{ *:[i32] }:$src0)
/* 39907*/    0, /*End of Scope*/
/* 39908*/  /*SwitchOpcode*/ 19|128,2/*275*/, TARGET_VAL(AMDGPUISD::SIN_HW),// ->40187
/* 39912*/    OPC_RecordChild0, // #0 = $src0
/* 39913*/    OPC_CheckChild0Type, MVT::f32,
/* 39915*/    OPC_CheckType, MVT::f32,
/* 39917*/    OPC_Scope, 66, /*->39985*/ // 4 children in Scope
/* 39919*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 39921*/      OPC_EmitInteger, MVT::i32, 1, 
/* 39924*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39927*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39930*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39933*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39936*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39939*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39942*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 39954*/      OPC_EmitInteger, MVT::i32, 1, 
/* 39957*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 39960*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39963*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39966*/      OPC_MorphNodeTo1, TARGET_VAL(R600::SIN_r600), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (SIN_HW:{ *:[f32] } f32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (SIN_r600:{ *:[f32] } f32:{ *:[f32] }:$src0)
/* 39985*/    /*Scope*/ 66, /*->40052*/
/* 39986*/      OPC_CheckPatternPredicate, 5, // (Subtarget->getGeneration() == AMDGPUSubtarget::R700)
/* 39988*/      OPC_EmitInteger, MVT::i32, 1, 
/* 39991*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39994*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39997*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40000*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40003*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40006*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40009*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 40021*/      OPC_EmitInteger, MVT::i32, 1, 
/* 40024*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 40027*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40030*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40033*/      OPC_MorphNodeTo1, TARGET_VAL(R600::SIN_r700), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (SIN_HW:{ *:[f32] } f32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (SIN_r700:{ *:[f32] } f32:{ *:[f32] }:$src0)
/* 40052*/    /*Scope*/ 66, /*->40119*/
/* 40053*/      OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 40055*/      OPC_EmitInteger, MVT::i32, 1, 
/* 40058*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40061*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40064*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40067*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40070*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40073*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40076*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 40088*/      OPC_EmitInteger, MVT::i32, 1, 
/* 40091*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 40094*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40097*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40100*/      OPC_MorphNodeTo1, TARGET_VAL(R600::SIN_eg), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (SIN_HW:{ *:[f32] } f32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (SIN_eg:{ *:[f32] } f32:{ *:[f32] }:$src0)
/* 40119*/    /*Scope*/ 66, /*->40186*/
/* 40120*/      OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 40122*/      OPC_EmitInteger, MVT::i32, 1, 
/* 40125*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40128*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40131*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40134*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40137*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40140*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40143*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 40155*/      OPC_EmitInteger, MVT::i32, 1, 
/* 40158*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 40161*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40164*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40167*/      OPC_MorphNodeTo1, TARGET_VAL(R600::SIN_cm), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (SIN_HW:{ *:[f32] } f32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (SIN_cm:{ *:[f32] } f32:{ *:[f32] }:$src0)
/* 40186*/    0, /*End of Scope*/
/* 40187*/  /*SwitchOpcode*/ 19|128,2/*275*/, TARGET_VAL(AMDGPUISD::COS_HW),// ->40466
/* 40191*/    OPC_RecordChild0, // #0 = $src0
/* 40192*/    OPC_CheckChild0Type, MVT::f32,
/* 40194*/    OPC_CheckType, MVT::f32,
/* 40196*/    OPC_Scope, 66, /*->40264*/ // 4 children in Scope
/* 40198*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 40200*/      OPC_EmitInteger, MVT::i32, 1, 
/* 40203*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40206*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40209*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40212*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40215*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40218*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40221*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 40233*/      OPC_EmitInteger, MVT::i32, 1, 
/* 40236*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 40239*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40242*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40245*/      OPC_MorphNodeTo1, TARGET_VAL(R600::COS_r600), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (COS_HW:{ *:[f32] } f32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (COS_r600:{ *:[f32] } f32:{ *:[f32] }:$src0)
/* 40264*/    /*Scope*/ 66, /*->40331*/
/* 40265*/      OPC_CheckPatternPredicate, 5, // (Subtarget->getGeneration() == AMDGPUSubtarget::R700)
/* 40267*/      OPC_EmitInteger, MVT::i32, 1, 
/* 40270*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40273*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40276*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40279*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40282*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40285*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40288*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 40300*/      OPC_EmitInteger, MVT::i32, 1, 
/* 40303*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 40306*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40309*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40312*/      OPC_MorphNodeTo1, TARGET_VAL(R600::COS_r700), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (COS_HW:{ *:[f32] } f32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (COS_r700:{ *:[f32] } f32:{ *:[f32] }:$src0)
/* 40331*/    /*Scope*/ 66, /*->40398*/
/* 40332*/      OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 40334*/      OPC_EmitInteger, MVT::i32, 1, 
/* 40337*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40340*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40343*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40346*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40349*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40352*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40355*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 40367*/      OPC_EmitInteger, MVT::i32, 1, 
/* 40370*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 40373*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40376*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40379*/      OPC_MorphNodeTo1, TARGET_VAL(R600::COS_eg), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (COS_HW:{ *:[f32] } f32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (COS_eg:{ *:[f32] } f32:{ *:[f32] }:$src0)
/* 40398*/    /*Scope*/ 66, /*->40465*/
/* 40399*/      OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 40401*/      OPC_EmitInteger, MVT::i32, 1, 
/* 40404*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40407*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40410*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40413*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40416*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40419*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40422*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 40434*/      OPC_EmitInteger, MVT::i32, 1, 
/* 40437*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 40440*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40443*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40446*/      OPC_MorphNodeTo1, TARGET_VAL(R600::COS_cm), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (COS_HW:{ *:[f32] } f32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (COS_cm:{ *:[f32] } f32:{ *:[f32] }:$src0)
/* 40465*/    0, /*End of Scope*/
/* 40466*/  /*SwitchOpcode*/ 103, TARGET_VAL(ISD::FMA),// ->40572
/* 40469*/    OPC_RecordChild0, // #0 = $src0
/* 40470*/    OPC_RecordChild1, // #1 = $src1
/* 40471*/    OPC_RecordChild2, // #2 = $src2
/* 40472*/    OPC_CheckType, MVT::f32,
/* 40474*/    OPC_CheckPatternPredicate, 6, // (Subtarget->hasFMA()) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 40476*/    OPC_EmitInteger, MVT::i32, 0, 
/* 40479*/    OPC_EmitInteger, MVT::i32, 0, 
/* 40482*/    OPC_EmitInteger, MVT::i32, 0, 
/* 40485*/    OPC_EmitInteger, MVT::i32, 0, 
/* 40488*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 40500*/    OPC_EmitInteger, MVT::i32, 0, 
/* 40503*/    OPC_EmitInteger, MVT::i32, 0, 
/* 40506*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 40518*/    OPC_EmitInteger, MVT::i32, 0, 
/* 40521*/    OPC_EmitInteger, MVT::i32, 0, 
/* 40524*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 40536*/    OPC_EmitInteger, MVT::i32, 1, 
/* 40539*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 40542*/    OPC_EmitInteger, MVT::i32, 0, 
/* 40545*/    OPC_EmitInteger, MVT::i32, 0, 
/* 40548*/    OPC_MorphNodeTo1, TARGET_VAL(R600::FMA_eg), 0,
                  MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
              // Src: (fma:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2) - Complexity = 3
              // Dst: (FMA_eg:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2)
/* 40572*/  /*SwitchOpcode*/ 71, TARGET_VAL(ISD::FP16_TO_FP),// ->40646
/* 40575*/    OPC_RecordChild0, // #0 = $src0
/* 40576*/    OPC_CheckChild0Type, MVT::i32,
/* 40578*/    OPC_CheckType, MVT::f32,
/* 40580*/    OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 40582*/    OPC_EmitInteger, MVT::i32, 1, 
/* 40585*/    OPC_EmitInteger, MVT::i32, 0, 
/* 40588*/    OPC_EmitInteger, MVT::i32, 0, 
/* 40591*/    OPC_EmitInteger, MVT::i32, 0, 
/* 40594*/    OPC_EmitInteger, MVT::i32, 0, 
/* 40597*/    OPC_EmitInteger, MVT::i32, 0, 
/* 40600*/    OPC_EmitInteger, MVT::i32, 0, 
/* 40603*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 40615*/    OPC_EmitInteger, MVT::i32, 1, 
/* 40618*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 40621*/    OPC_EmitInteger, MVT::i32, 0, 
/* 40624*/    OPC_EmitInteger, MVT::i32, 0, 
/* 40627*/    OPC_MorphNodeTo1, TARGET_VAL(R600::FLT16_TO_FLT32), 0,
                  MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (f16_to_fp:{ *:[f32] } R600_Reg32:{ *:[i32] }:$src0) - Complexity = 3
              // Dst: (FLT16_TO_FLT32:{ *:[f32] } R600_Reg32:{ *:[i32] }:$src0)
/* 40646*/  /*SwitchOpcode*/ 17|128,3/*401*/, TARGET_VAL(ISD::FSQRT),// ->41051
/* 40650*/    OPC_RecordChild0, // #0 = $src
/* 40651*/    OPC_CheckType, MVT::f32,
/* 40653*/    OPC_Scope, 2|128,1/*130*/, /*->40786*/ // 3 children in Scope
/* 40656*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 40658*/      OPC_EmitInteger, MVT::i32, 1, 
/* 40661*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40664*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40667*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40670*/      OPC_EmitInteger, MVT::i32, 1, 
/* 40673*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40676*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40679*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40682*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40685*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40688*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40691*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 40703*/      OPC_EmitInteger, MVT::i32, 1, 
/* 40706*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 40709*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40712*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40715*/      OPC_EmitNode1, TARGET_VAL(R600::RECIPSQRT_IEEE_r600), 0,
                    MVT::i32, 13/*#Ops*/, 5, 6, 7, 8, 0, 9, 10, 11, 12, 13, 14, 15, 16,  // Results = #17
/* 40734*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40737*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40740*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40743*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 40755*/      OPC_EmitInteger, MVT::i32, 1, 
/* 40758*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 40761*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40764*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40767*/      OPC_MorphNodeTo1, TARGET_VAL(R600::RECIP_IEEE_r600), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 17, 18, 19, 20, 21, 22, 23, 24, 25, 
                // Src: (fsqrt:{ *:[f32] } f32:{ *:[f32] }:$src) - Complexity = 3
                // Dst: (RECIP_IEEE_r600:{ *:[f32] } (RECIPSQRT_IEEE_r600:{ *:[i32] } ?:{ *:[f32] }:$src))
/* 40786*/    /*Scope*/ 2|128,1/*130*/, /*->40918*/
/* 40788*/      OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 40790*/      OPC_EmitInteger, MVT::i32, 1, 
/* 40793*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40796*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40799*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40802*/      OPC_EmitInteger, MVT::i32, 1, 
/* 40805*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40808*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40811*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40814*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40817*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40820*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40823*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 40835*/      OPC_EmitInteger, MVT::i32, 1, 
/* 40838*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 40841*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40844*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40847*/      OPC_EmitNode1, TARGET_VAL(R600::RECIPSQRT_IEEE_eg), 0,
                    MVT::i32, 13/*#Ops*/, 5, 6, 7, 8, 0, 9, 10, 11, 12, 13, 14, 15, 16,  // Results = #17
/* 40866*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40869*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40872*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40875*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 40887*/      OPC_EmitInteger, MVT::i32, 1, 
/* 40890*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 40893*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40896*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40899*/      OPC_MorphNodeTo1, TARGET_VAL(R600::RECIP_IEEE_eg), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 17, 18, 19, 20, 21, 22, 23, 24, 25, 
                // Src: (fsqrt:{ *:[f32] } f32:{ *:[f32] }:$src) - Complexity = 3
                // Dst: (RECIP_IEEE_eg:{ *:[f32] } (RECIPSQRT_IEEE_eg:{ *:[i32] } ?:{ *:[f32] }:$src))
/* 40918*/    /*Scope*/ 2|128,1/*130*/, /*->41050*/
/* 40920*/      OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 40922*/      OPC_EmitInteger, MVT::i32, 1, 
/* 40925*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40928*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40931*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40934*/      OPC_EmitInteger, MVT::i32, 1, 
/* 40937*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40940*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40943*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40946*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40949*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40952*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40955*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 40967*/      OPC_EmitInteger, MVT::i32, 1, 
/* 40970*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 40973*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40976*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40979*/      OPC_EmitNode1, TARGET_VAL(R600::RECIPSQRT_IEEE_cm), 0,
                    MVT::i32, 13/*#Ops*/, 5, 6, 7, 8, 0, 9, 10, 11, 12, 13, 14, 15, 16,  // Results = #17
/* 40998*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41001*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41004*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41007*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 41019*/      OPC_EmitInteger, MVT::i32, 1, 
/* 41022*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 41025*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41028*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41031*/      OPC_MorphNodeTo1, TARGET_VAL(R600::RECIP_IEEE_cm), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 17, 18, 19, 20, 21, 22, 23, 24, 25, 
                // Src: (fsqrt:{ *:[f32] } f32:{ *:[f32] }:$src) - Complexity = 3
                // Dst: (RECIP_IEEE_cm:{ *:[f32] } (RECIPSQRT_IEEE_cm:{ *:[i32] } ?:{ *:[f32] }:$src))
/* 41050*/    0, /*End of Scope*/
/* 41051*/  /*SwitchOpcode*/ 56|128,5/*696*/, TARGET_VAL(ISD::FPOW),// ->41751
/* 41055*/    OPC_RecordChild0, // #0 = $src0
/* 41056*/    OPC_RecordChild1, // #1 = $src1
/* 41057*/    OPC_CheckType, MVT::f32,
/* 41059*/    OPC_Scope, 100|128,1/*228*/, /*->41290*/ // 3 children in Scope
/* 41062*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 41064*/      OPC_EmitInteger, MVT::i32, 1, 
/* 41067*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41070*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41073*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41076*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41079*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41082*/      OPC_EmitInteger, MVT::i32, 1, 
/* 41085*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41088*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41091*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41094*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41097*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41100*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41103*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 41115*/      OPC_EmitInteger, MVT::i32, 1, 
/* 41118*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41121*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41124*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41127*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41130*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41133*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41136*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 41148*/      OPC_EmitInteger, MVT::i32, 1, 
/* 41151*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 41154*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41157*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41160*/      OPC_EmitNode1, TARGET_VAL(R600::LOG_IEEE_r600), 0,
                    MVT::i32, 13/*#Ops*/, 16, 17, 18, 19, 0, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/* 41179*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41182*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41185*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41188*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 41200*/      OPC_EmitInteger, MVT::i32, 1, 
/* 41203*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 41206*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41209*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41212*/      OPC_EmitNode1, TARGET_VAL(R600::MUL), 0,
                    MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 1, 12, 13, 14, 15, 28, 29, 30, 31, 32, 33, 34, 35, 36,  // Results = #37
/* 41238*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41241*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41244*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41247*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 41259*/      OPC_EmitInteger, MVT::i32, 1, 
/* 41262*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 41265*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41268*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41271*/      OPC_MorphNodeTo1, TARGET_VAL(R600::EXP_IEEE_r600), 0,
                    MVT::f32, 13/*#Ops*/, 2, 3, 4, 5, 37, 38, 39, 40, 41, 42, 43, 44, 45, 
                // Src: (fpow:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1) - Complexity = 3
                // Dst: (EXP_IEEE_r600:{ *:[f32] } (MUL:{ *:[i32] } f32:{ *:[f32] }:$src1, (LOG_IEEE_r600:{ *:[i32] } f32:{ *:[f32] }:$src0)))
/* 41290*/    /*Scope*/ 100|128,1/*228*/, /*->41520*/
/* 41292*/      OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 41294*/      OPC_EmitInteger, MVT::i32, 1, 
/* 41297*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41300*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41303*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41306*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41309*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41312*/      OPC_EmitInteger, MVT::i32, 1, 
/* 41315*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41318*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41321*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41324*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41327*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41330*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41333*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 41345*/      OPC_EmitInteger, MVT::i32, 1, 
/* 41348*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41351*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41354*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41357*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41360*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41363*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41366*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 41378*/      OPC_EmitInteger, MVT::i32, 1, 
/* 41381*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 41384*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41387*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41390*/      OPC_EmitNode1, TARGET_VAL(R600::LOG_IEEE_eg), 0,
                    MVT::i32, 13/*#Ops*/, 16, 17, 18, 19, 0, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/* 41409*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41412*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41415*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41418*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 41430*/      OPC_EmitInteger, MVT::i32, 1, 
/* 41433*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 41436*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41439*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41442*/      OPC_EmitNode1, TARGET_VAL(R600::MUL), 0,
                    MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 1, 12, 13, 14, 15, 28, 29, 30, 31, 32, 33, 34, 35, 36,  // Results = #37
/* 41468*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41471*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41474*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41477*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 41489*/      OPC_EmitInteger, MVT::i32, 1, 
/* 41492*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 41495*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41498*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41501*/      OPC_MorphNodeTo1, TARGET_VAL(R600::EXP_IEEE_eg), 0,
                    MVT::f32, 13/*#Ops*/, 2, 3, 4, 5, 37, 38, 39, 40, 41, 42, 43, 44, 45, 
                // Src: (fpow:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1) - Complexity = 3
                // Dst: (EXP_IEEE_eg:{ *:[f32] } (MUL:{ *:[i32] } f32:{ *:[f32] }:$src1, (LOG_IEEE_eg:{ *:[i32] } f32:{ *:[f32] }:$src0)))
/* 41520*/    /*Scope*/ 100|128,1/*228*/, /*->41750*/
/* 41522*/      OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 41524*/      OPC_EmitInteger, MVT::i32, 1, 
/* 41527*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41530*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41533*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41536*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41539*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41542*/      OPC_EmitInteger, MVT::i32, 1, 
/* 41545*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41548*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41551*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41554*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41557*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41560*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41563*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 41575*/      OPC_EmitInteger, MVT::i32, 1, 
/* 41578*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41581*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41584*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41587*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41590*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41593*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41596*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 41608*/      OPC_EmitInteger, MVT::i32, 1, 
/* 41611*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 41614*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41617*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41620*/      OPC_EmitNode1, TARGET_VAL(R600::LOG_IEEE_cm), 0,
                    MVT::i32, 13/*#Ops*/, 16, 17, 18, 19, 0, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/* 41639*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41642*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41645*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41648*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 41660*/      OPC_EmitInteger, MVT::i32, 1, 
/* 41663*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 41666*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41669*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41672*/      OPC_EmitNode1, TARGET_VAL(R600::MUL), 0,
                    MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 1, 12, 13, 14, 15, 28, 29, 30, 31, 32, 33, 34, 35, 36,  // Results = #37
/* 41698*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41701*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41704*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41707*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 41719*/      OPC_EmitInteger, MVT::i32, 1, 
/* 41722*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 41725*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41728*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41731*/      OPC_MorphNodeTo1, TARGET_VAL(R600::EXP_IEEE_cm), 0,
                    MVT::f32, 13/*#Ops*/, 2, 3, 4, 5, 37, 38, 39, 40, 41, 42, 43, 44, 45, 
                // Src: (fpow:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1) - Complexity = 3
                // Dst: (EXP_IEEE_cm:{ *:[f32] } (MUL:{ *:[i32] } f32:{ *:[f32] }:$src1, (LOG_IEEE_cm:{ *:[i32] } f32:{ *:[f32] }:$src0)))
/* 41750*/    0, /*End of Scope*/
/* 41751*/  /*SwitchOpcode*/ 14, TARGET_VAL(ISD::ConstantFP),// ->41768
/* 41754*/    OPC_RecordNode, // #0 = $val
/* 41755*/    OPC_CheckType, MVT::f32,
/* 41757*/    OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 41759*/    OPC_EmitConvertToTarget, 0,
/* 41761*/    OPC_MorphNodeTo1, TARGET_VAL(R600::MOV_IMM_F32), 0,
                  MVT::f32, 1/*#Ops*/, 1, 
              // Src: (fpimm:{ *:[f32] }):$val - Complexity = 3
              // Dst: (MOV_IMM_F32:{ *:[f32] } (fpimm:{ *:[f32] }):$val)
/* 41768*/  /*SwitchOpcode*/ 10, TARGET_VAL(ISD::FABS),// ->41781
/* 41771*/    OPC_RecordChild0, // #0 = $src0
/* 41772*/    OPC_CheckType, MVT::f32,
/* 41774*/    OPC_MorphNodeTo1, TARGET_VAL(R600::FABS_R600), 0,
                  MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fabs:{ *:[f32] } f32:{ *:[f32] }:$src0) - Complexity = 3
              // Dst: (FABS_R600:{ *:[f32] } f32:{ *:[f32] }:$src0)
/* 41781*/  /*SwitchOpcode*/ 10, TARGET_VAL(ISD::FNEG),// ->41794
/* 41784*/    OPC_RecordChild0, // #0 = $src0
/* 41785*/    OPC_CheckType, MVT::f32,
/* 41787*/    OPC_MorphNodeTo1, TARGET_VAL(R600::FNEG_R600), 0,
                  MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fneg:{ *:[f32] } f32:{ *:[f32] }:$src0) - Complexity = 3
              // Dst: (FNEG_R600:{ *:[f32] } f32:{ *:[f32] }:$src0)
/* 41794*/  /*SwitchOpcode*/ 68|128,4/*580*/, TARGET_VAL(ISD::FCOPYSIGN),// ->42378
/* 41798*/    OPC_RecordChild0, // #0 = $src0
/* 41799*/    OPC_RecordChild1, // #1 = $src1
/* 41800*/    OPC_Scope, 19|128,2/*275*/, /*->42078*/ // 2 children in Scope
/* 41803*/      OPC_CheckChild1Type, MVT::f32,
/* 41805*/      OPC_SwitchType /*2 cases */, 112, MVT::f32,// ->41920
/* 41808*/        OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 41810*/        OPC_EmitInteger, MVT::i32, 0, 
/* 41813*/        OPC_EmitInteger, MVT::i32, 0, 
/* 41816*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,7/*2147483647*/, 
/* 41823*/        OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                      MVT::i32, 1/*#Ops*/, 4,  // Results = #5
/* 41830*/        OPC_EmitInteger, MVT::i32, 0, 
/* 41833*/        OPC_EmitInteger, MVT::i32, 0, 
/* 41836*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 41848*/        OPC_EmitInteger, MVT::i32, 0, 
/* 41851*/        OPC_EmitInteger, MVT::i32, 0, 
/* 41854*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 41866*/        OPC_EmitInteger, MVT::i32, 0, 
/* 41869*/        OPC_EmitInteger, MVT::i32, 0, 
/* 41872*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 41884*/        OPC_EmitInteger, MVT::i32, 1, 
/* 41887*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 41890*/        OPC_EmitInteger, MVT::i32, 0, 
/* 41893*/        OPC_EmitInteger, MVT::i32, 0, 
/* 41896*/        OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                      MVT::f32, 18/*#Ops*/, 2, 3, 5, 6, 7, 8, 0, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 
                  // Src: (fcopysign:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1) - Complexity = 3
                  // Dst: (BFI_INT_eg:{ *:[f32] } (MOV_IMM_I32:{ *:[i32] } 2147483647:{ *:[i32] }), ?:{ *:[f32] }:$src0, ?:{ *:[f32] }:$src1)
/* 41920*/      /*SwitchType*/ 26|128,1/*154*/, MVT::f64,// ->42077
/* 41923*/        OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 41925*/        OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 41928*/        OPC_EmitInteger, MVT::i32, R600::sub0,
/* 41931*/        OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      MVT::i32, 2/*#Ops*/, 0, 3,  // Results = #4
/* 41939*/        OPC_EmitInteger, MVT::i32, R600::sub0,
/* 41942*/        OPC_EmitInteger, MVT::i32, 0, 
/* 41945*/        OPC_EmitInteger, MVT::i32, 0, 
/* 41948*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,7/*2147483647*/, 
/* 41955*/        OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                      MVT::i32, 1/*#Ops*/, 8,  // Results = #9
/* 41962*/        OPC_EmitInteger, MVT::i32, 0, 
/* 41965*/        OPC_EmitInteger, MVT::i32, 0, 
/* 41968*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 41980*/        OPC_EmitInteger, MVT::i32, R600::sub1,
/* 41983*/        OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      MVT::i32, 2/*#Ops*/, 0, 13,  // Results = #14
/* 41991*/        OPC_EmitInteger, MVT::i32, 0, 
/* 41994*/        OPC_EmitInteger, MVT::i32, 0, 
/* 41997*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 42009*/        OPC_EmitInteger, MVT::i32, 0, 
/* 42012*/        OPC_EmitInteger, MVT::i32, 0, 
/* 42015*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 42027*/        OPC_EmitInteger, MVT::i32, 1, 
/* 42030*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 42033*/        OPC_EmitInteger, MVT::i32, 0, 
/* 42036*/        OPC_EmitInteger, MVT::i32, 0, 
/* 42039*/        OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                      MVT::i32, 18/*#Ops*/, 6, 7, 9, 10, 11, 12, 14, 15, 16, 17, 1, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/* 42063*/        OPC_EmitInteger, MVT::i32, R600::sub1,
/* 42066*/        OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                      MVT::f64, 5/*#Ops*/, 2, 4, 5, 25, 26, 
                  // Src: (fcopysign:{ *:[f64] } f64:{ *:[f64] }:$src0, f32:{ *:[f32] }:$src1) - Complexity = 3
                  // Dst: (REG_SEQUENCE:{ *:[f64] } R600_Reg64:{ *:[i32] }, (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[f64] }:$src0, sub0:{ *:[i32] }), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (MOV_IMM_I32:{ *:[i32] } 2147483647:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[f64] }:$src0, sub1:{ *:[i32] }), ?:{ *:[f32] }:$src1), sub1:{ *:[i32] })
/* 42077*/      0, // EndSwitchType
/* 42078*/    /*Scope*/ 41|128,2/*297*/, /*->42377*/
/* 42080*/      OPC_CheckChild1Type, MVT::f64,
/* 42082*/      OPC_SwitchType /*2 cases */, 123, MVT::f32,// ->42208
/* 42085*/        OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 42087*/        OPC_EmitInteger, MVT::i32, 0, 
/* 42090*/        OPC_EmitInteger, MVT::i32, 0, 
/* 42093*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,7/*2147483647*/, 
/* 42100*/        OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                      MVT::i32, 1/*#Ops*/, 4,  // Results = #5
/* 42107*/        OPC_EmitInteger, MVT::i32, 0, 
/* 42110*/        OPC_EmitInteger, MVT::i32, 0, 
/* 42113*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 42125*/        OPC_EmitInteger, MVT::i32, 0, 
/* 42128*/        OPC_EmitInteger, MVT::i32, 0, 
/* 42131*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 42143*/        OPC_EmitInteger, MVT::i32, R600::sub1,
/* 42146*/        OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      MVT::i32, 2/*#Ops*/, 1, 12,  // Results = #13
/* 42154*/        OPC_EmitInteger, MVT::i32, 0, 
/* 42157*/        OPC_EmitInteger, MVT::i32, 0, 
/* 42160*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 42172*/        OPC_EmitInteger, MVT::i32, 1, 
/* 42175*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 42178*/        OPC_EmitInteger, MVT::i32, 0, 
/* 42181*/        OPC_EmitInteger, MVT::i32, 0, 
/* 42184*/        OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                      MVT::f32, 18/*#Ops*/, 2, 3, 5, 6, 7, 8, 0, 9, 10, 11, 13, 14, 15, 16, 17, 18, 19, 20, 
                  // Src: (fcopysign:{ *:[f32] } f32:{ *:[f32] }:$src0, f64:{ *:[f64] }:$src1) - Complexity = 3
                  // Dst: (BFI_INT_eg:{ *:[f32] } (MOV_IMM_I32:{ *:[i32] } 2147483647:{ *:[i32] }), ?:{ *:[f32] }:$src0, (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[f64] }:$src1, sub1:{ *:[i32] }))
/* 42208*/      /*SwitchType*/ 37|128,1/*165*/, MVT::f64,// ->42376
/* 42211*/        OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 42213*/        OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 42216*/        OPC_EmitInteger, MVT::i32, R600::sub0,
/* 42219*/        OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      MVT::i32, 2/*#Ops*/, 0, 3,  // Results = #4
/* 42227*/        OPC_EmitInteger, MVT::i32, R600::sub0,
/* 42230*/        OPC_EmitInteger, MVT::i32, 0, 
/* 42233*/        OPC_EmitInteger, MVT::i32, 0, 
/* 42236*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,7/*2147483647*/, 
/* 42243*/        OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                      MVT::i32, 1/*#Ops*/, 8,  // Results = #9
/* 42250*/        OPC_EmitInteger, MVT::i32, 0, 
/* 42253*/        OPC_EmitInteger, MVT::i32, 0, 
/* 42256*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 42268*/        OPC_EmitInteger, MVT::i32, R600::sub1,
/* 42271*/        OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      MVT::i32, 2/*#Ops*/, 0, 13,  // Results = #14
/* 42279*/        OPC_EmitInteger, MVT::i32, 0, 
/* 42282*/        OPC_EmitInteger, MVT::i32, 0, 
/* 42285*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 42297*/        OPC_EmitInteger, MVT::i32, R600::sub1,
/* 42300*/        OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      MVT::i32, 2/*#Ops*/, 1, 18,  // Results = #19
/* 42308*/        OPC_EmitInteger, MVT::i32, 0, 
/* 42311*/        OPC_EmitInteger, MVT::i32, 0, 
/* 42314*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 42326*/        OPC_EmitInteger, MVT::i32, 1, 
/* 42329*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 42332*/        OPC_EmitInteger, MVT::i32, 0, 
/* 42335*/        OPC_EmitInteger, MVT::i32, 0, 
/* 42338*/        OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                      MVT::i32, 18/*#Ops*/, 6, 7, 9, 10, 11, 12, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26,  // Results = #27
/* 42362*/        OPC_EmitInteger, MVT::i32, R600::sub1,
/* 42365*/        OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                      MVT::f64, 5/*#Ops*/, 2, 4, 5, 27, 28, 
                  // Src: (fcopysign:{ *:[f64] } f64:{ *:[f64] }:$src0, f64:{ *:[f64] }:$src1) - Complexity = 3
                  // Dst: (REG_SEQUENCE:{ *:[f64] } R600_Reg64:{ *:[i32] }, (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[f64] }:$src0, sub0:{ *:[i32] }), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (MOV_IMM_I32:{ *:[i32] } 2147483647:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[f64] }:$src0, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[f64] }:$src1, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 42376*/      0, // EndSwitchType
/* 42377*/    0, /*End of Scope*/
/* 42378*/  /*SwitchOpcode*/ 36|128,2/*292*/, TARGET_VAL(ISD::INSERT_VECTOR_ELT),// ->42674
/* 42382*/    OPC_RecordChild0, // #0 = $vec
/* 42383*/    OPC_RecordChild1, // #1 = $elem
/* 42384*/    OPC_Scope, 36, /*->42422*/ // 10 children in Scope
/* 42386*/      OPC_CheckChild2Integer, 0, 
/* 42388*/      OPC_SwitchType /*2 cases */, 14, MVT::v4i32,// ->42405
/* 42391*/        OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 42393*/        OPC_EmitInteger, MVT::i32, R600::sub0,
/* 42396*/        OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (insertelt:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vec, i32:{ *:[i32] }:$elem, 0:{ *:[iPTR] }) - Complexity = 8
                  // Dst: (INSERT_SUBREG:{ *:[v4i32] } ?:{ *:[v4i32] }:$vec, ?:{ *:[i32] }:$elem, sub0:{ *:[i32] })
/* 42405*/      /*SwitchType*/ 14, MVT::v2i32,// ->42421
/* 42407*/        OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 42409*/        OPC_EmitInteger, MVT::i32, R600::sub0,
/* 42412*/        OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      MVT::v2i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (insertelt:{ *:[v2i32] } v2i32:{ *:[v2i32] }:$vec, i32:{ *:[i32] }:$elem, 0:{ *:[iPTR] }) - Complexity = 8
                  // Dst: (INSERT_SUBREG:{ *:[v2i32] } ?:{ *:[v2i32] }:$vec, ?:{ *:[i32] }:$elem, sub0:{ *:[i32] })
/* 42421*/      0, // EndSwitchType
/* 42422*/    /*Scope*/ 36, /*->42459*/
/* 42423*/      OPC_CheckChild2Integer, 1, 
/* 42425*/      OPC_SwitchType /*2 cases */, 14, MVT::v4i32,// ->42442
/* 42428*/        OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 42430*/        OPC_EmitInteger, MVT::i32, R600::sub1,
/* 42433*/        OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (insertelt:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vec, i32:{ *:[i32] }:$elem, 1:{ *:[iPTR] }) - Complexity = 8
                  // Dst: (INSERT_SUBREG:{ *:[v4i32] } ?:{ *:[v4i32] }:$vec, ?:{ *:[i32] }:$elem, sub1:{ *:[i32] })
/* 42442*/      /*SwitchType*/ 14, MVT::v2i32,// ->42458
/* 42444*/        OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 42446*/        OPC_EmitInteger, MVT::i32, R600::sub1,
/* 42449*/        OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      MVT::v2i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (insertelt:{ *:[v2i32] } v2i32:{ *:[v2i32] }:$vec, i32:{ *:[i32] }:$elem, 1:{ *:[iPTR] }) - Complexity = 8
                  // Dst: (INSERT_SUBREG:{ *:[v2i32] } ?:{ *:[v2i32] }:$vec, ?:{ *:[i32] }:$elem, sub1:{ *:[i32] })
/* 42458*/      0, // EndSwitchType
/* 42459*/    /*Scope*/ 18, /*->42478*/
/* 42460*/      OPC_CheckChild2Integer, 2, 
/* 42462*/      OPC_CheckType, MVT::v4i32,
/* 42464*/      OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 42466*/      OPC_EmitInteger, MVT::i32, R600::sub2,
/* 42469*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (insertelt:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vec, i32:{ *:[i32] }:$elem, 2:{ *:[iPTR] }) - Complexity = 8
                // Dst: (INSERT_SUBREG:{ *:[v4i32] } ?:{ *:[v4i32] }:$vec, ?:{ *:[i32] }:$elem, sub2:{ *:[i32] })
/* 42478*/    /*Scope*/ 18, /*->42497*/
/* 42479*/      OPC_CheckChild2Integer, 3, 
/* 42481*/      OPC_CheckType, MVT::v4i32,
/* 42483*/      OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 42485*/      OPC_EmitInteger, MVT::i32, R600::sub3,
/* 42488*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (insertelt:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vec, i32:{ *:[i32] }:$elem, 3:{ *:[iPTR] }) - Complexity = 8
                // Dst: (INSERT_SUBREG:{ *:[v4i32] } ?:{ *:[v4i32] }:$vec, ?:{ *:[i32] }:$elem, sub3:{ *:[i32] })
/* 42497*/    /*Scope*/ 31, /*->42529*/
/* 42498*/      OPC_RecordChild2, // #2 = $index
/* 42499*/      OPC_CheckChild2Type, MVT::i32,
/* 42501*/      OPC_SwitchType /*2 cases */, 11, MVT::v2i32,// ->42515
/* 42504*/        OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 42506*/        OPC_MorphNodeTo1, TARGET_VAL(R600::R600_INSERT_ELT_V2), 0,
                      MVT::v2i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (insertelt:{ *:[v2i32] } v2i32:{ *:[v2i32] }:$vec, i32:{ *:[i32] }:$value, i32:{ *:[i32] }:$index) - Complexity = 3
                  // Dst: (R600_INSERT_ELT_V2:{ *:[v2i32] } ?:{ *:[v2i32] }:$vec, ?:{ *:[i32] }:$value, ?:{ *:[i32] }:$index)
/* 42515*/      /*SwitchType*/ 11, MVT::v4i32,// ->42528
/* 42517*/        OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 42519*/        OPC_MorphNodeTo1, TARGET_VAL(R600::R600_INSERT_ELT_V4), 0,
                      MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (insertelt:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vec, i32:{ *:[i32] }:$value, i32:{ *:[i32] }:$index) - Complexity = 3
                  // Dst: (R600_INSERT_ELT_V4:{ *:[v4i32] } ?:{ *:[v4i32] }:$vec, ?:{ *:[i32] }:$value, ?:{ *:[i32] }:$index)
/* 42528*/      0, // EndSwitchType
/* 42529*/    /*Scope*/ 36, /*->42566*/
/* 42530*/      OPC_CheckChild2Integer, 0, 
/* 42532*/      OPC_SwitchType /*2 cases */, 14, MVT::v4f32,// ->42549
/* 42535*/        OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 42537*/        OPC_EmitInteger, MVT::i32, R600::sub0,
/* 42540*/        OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (insertelt:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$vec, f32:{ *:[f32] }:$elem, 0:{ *:[iPTR] }) - Complexity = 8
                  // Dst: (INSERT_SUBREG:{ *:[v4f32] } ?:{ *:[v4f32] }:$vec, ?:{ *:[f32] }:$elem, sub0:{ *:[i32] })
/* 42549*/      /*SwitchType*/ 14, MVT::v2f32,// ->42565
/* 42551*/        OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 42553*/        OPC_EmitInteger, MVT::i32, R600::sub0,
/* 42556*/        OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      MVT::v2f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (insertelt:{ *:[v2f32] } v2f32:{ *:[v2f32] }:$vec, f32:{ *:[f32] }:$elem, 0:{ *:[iPTR] }) - Complexity = 8
                  // Dst: (INSERT_SUBREG:{ *:[v2f32] } ?:{ *:[v2f32] }:$vec, ?:{ *:[f32] }:$elem, sub0:{ *:[i32] })
/* 42565*/      0, // EndSwitchType
/* 42566*/    /*Scope*/ 36, /*->42603*/
/* 42567*/      OPC_CheckChild2Integer, 1, 
/* 42569*/      OPC_SwitchType /*2 cases */, 14, MVT::v4f32,// ->42586
/* 42572*/        OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 42574*/        OPC_EmitInteger, MVT::i32, R600::sub1,
/* 42577*/        OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (insertelt:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$vec, f32:{ *:[f32] }:$elem, 1:{ *:[iPTR] }) - Complexity = 8
                  // Dst: (INSERT_SUBREG:{ *:[v4f32] } ?:{ *:[v4f32] }:$vec, ?:{ *:[f32] }:$elem, sub1:{ *:[i32] })
/* 42586*/      /*SwitchType*/ 14, MVT::v2f32,// ->42602
/* 42588*/        OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 42590*/        OPC_EmitInteger, MVT::i32, R600::sub1,
/* 42593*/        OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      MVT::v2f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (insertelt:{ *:[v2f32] } v2f32:{ *:[v2f32] }:$vec, f32:{ *:[f32] }:$elem, 1:{ *:[iPTR] }) - Complexity = 8
                  // Dst: (INSERT_SUBREG:{ *:[v2f32] } ?:{ *:[v2f32] }:$vec, ?:{ *:[f32] }:$elem, sub1:{ *:[i32] })
/* 42602*/      0, // EndSwitchType
/* 42603*/    /*Scope*/ 18, /*->42622*/
/* 42604*/      OPC_CheckChild2Integer, 2, 
/* 42606*/      OPC_CheckType, MVT::v4f32,
/* 42608*/      OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 42610*/      OPC_EmitInteger, MVT::i32, R600::sub2,
/* 42613*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (insertelt:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$vec, f32:{ *:[f32] }:$elem, 2:{ *:[iPTR] }) - Complexity = 8
                // Dst: (INSERT_SUBREG:{ *:[v4f32] } ?:{ *:[v4f32] }:$vec, ?:{ *:[f32] }:$elem, sub2:{ *:[i32] })
/* 42622*/    /*Scope*/ 18, /*->42641*/
/* 42623*/      OPC_CheckChild2Integer, 3, 
/* 42625*/      OPC_CheckType, MVT::v4f32,
/* 42627*/      OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 42629*/      OPC_EmitInteger, MVT::i32, R600::sub3,
/* 42632*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (insertelt:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$vec, f32:{ *:[f32] }:$elem, 3:{ *:[iPTR] }) - Complexity = 8
                // Dst: (INSERT_SUBREG:{ *:[v4f32] } ?:{ *:[v4f32] }:$vec, ?:{ *:[f32] }:$elem, sub3:{ *:[i32] })
/* 42641*/    /*Scope*/ 31, /*->42673*/
/* 42642*/      OPC_RecordChild2, // #2 = $index
/* 42643*/      OPC_CheckChild2Type, MVT::i32,
/* 42645*/      OPC_SwitchType /*2 cases */, 11, MVT::v2f32,// ->42659
/* 42648*/        OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 42650*/        OPC_MorphNodeTo1, TARGET_VAL(R600::R600_INSERT_ELT_V2), 0,
                      MVT::v2f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (insertelt:{ *:[v2f32] } v2f32:{ *:[v2f32] }:$vec, f32:{ *:[f32] }:$value, i32:{ *:[i32] }:$index) - Complexity = 3
                  // Dst: (R600_INSERT_ELT_V2:{ *:[v2f32] } ?:{ *:[v2f32] }:$vec, ?:{ *:[f32] }:$value, ?:{ *:[i32] }:$index)
/* 42659*/      /*SwitchType*/ 11, MVT::v4f32,// ->42672
/* 42661*/        OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 42663*/        OPC_MorphNodeTo1, TARGET_VAL(R600::R600_INSERT_ELT_V4), 0,
                      MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (insertelt:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$vec, f32:{ *:[f32] }:$value, i32:{ *:[i32] }:$index) - Complexity = 3
                  // Dst: (R600_INSERT_ELT_V4:{ *:[v4f32] } ?:{ *:[v4f32] }:$vec, ?:{ *:[f32] }:$value, ?:{ *:[i32] }:$index)
/* 42672*/      0, // EndSwitchType
/* 42673*/    0, /*End of Scope*/
/* 42674*/  /*SwitchOpcode*/ 96|128,18/*2400*/, TARGET_VAL(AMDGPUISD::TEXTURE_FETCH),// ->45078
/* 42678*/    OPC_Scope, 88|128,1/*216*/, /*->42897*/ // 11 children in Scope
/* 42681*/      OPC_CheckChild0Integer, 0, 
/* 42683*/      OPC_CheckChild0Type, MVT::i32,
/* 42685*/      OPC_RecordChild1, // #0 = $SRC_GPR
/* 42686*/      OPC_CheckChild1Type, MVT::v4f32,
/* 42688*/      OPC_RecordChild2, // #1 = $srcx
/* 42689*/      OPC_MoveChild2,
/* 42690*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42693*/      OPC_CheckType, MVT::i32,
/* 42695*/      OPC_MoveParent,
/* 42696*/      OPC_RecordChild3, // #2 = $srcy
/* 42697*/      OPC_MoveChild3,
/* 42698*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42701*/      OPC_CheckType, MVT::i32,
/* 42703*/      OPC_MoveParent,
/* 42704*/      OPC_RecordChild4, // #3 = $srcz
/* 42705*/      OPC_MoveChild4,
/* 42706*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42709*/      OPC_CheckType, MVT::i32,
/* 42711*/      OPC_MoveParent,
/* 42712*/      OPC_RecordChild5, // #4 = $srcw
/* 42713*/      OPC_MoveChild5,
/* 42714*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42717*/      OPC_CheckType, MVT::i32,
/* 42719*/      OPC_MoveParent,
/* 42720*/      OPC_RecordChild6, // #5 = $offsetx
/* 42721*/      OPC_MoveChild6,
/* 42722*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42725*/      OPC_CheckType, MVT::i32,
/* 42727*/      OPC_MoveParent,
/* 42728*/      OPC_RecordChild7, // #6 = $offsety
/* 42729*/      OPC_MoveChild7,
/* 42730*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42733*/      OPC_CheckType, MVT::i32,
/* 42735*/      OPC_MoveParent,
/* 42736*/      OPC_MoveChild, 8,
/* 42738*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42741*/      OPC_RecordNode, // #7 = $offsetz
/* 42742*/      OPC_CheckType, MVT::i32,
/* 42744*/      OPC_MoveParent,
/* 42745*/      OPC_MoveChild, 9,
/* 42747*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42750*/      OPC_RecordNode, // #8 = $DST_SEL_X
/* 42751*/      OPC_CheckType, MVT::i32,
/* 42753*/      OPC_MoveParent,
/* 42754*/      OPC_MoveChild, 10,
/* 42756*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42759*/      OPC_RecordNode, // #9 = $DST_SEL_Y
/* 42760*/      OPC_CheckType, MVT::i32,
/* 42762*/      OPC_MoveParent,
/* 42763*/      OPC_MoveChild, 11,
/* 42765*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42768*/      OPC_RecordNode, // #10 = $DST_SEL_Z
/* 42769*/      OPC_CheckType, MVT::i32,
/* 42771*/      OPC_MoveParent,
/* 42772*/      OPC_MoveChild, 12,
/* 42774*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42777*/      OPC_RecordNode, // #11 = $DST_SEL_W
/* 42778*/      OPC_CheckType, MVT::i32,
/* 42780*/      OPC_MoveParent,
/* 42781*/      OPC_MoveChild, 13,
/* 42783*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42786*/      OPC_RecordNode, // #12 = $RESOURCE_ID
/* 42787*/      OPC_CheckType, MVT::i32,
/* 42789*/      OPC_MoveParent,
/* 42790*/      OPC_MoveChild, 14,
/* 42792*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42795*/      OPC_RecordNode, // #13 = $SAMPLER_ID
/* 42796*/      OPC_CheckType, MVT::i32,
/* 42798*/      OPC_MoveParent,
/* 42799*/      OPC_MoveChild, 15,
/* 42801*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42804*/      OPC_RecordNode, // #14 = $COORD_TYPE_X
/* 42805*/      OPC_CheckType, MVT::i32,
/* 42807*/      OPC_MoveParent,
/* 42808*/      OPC_MoveChild, 16,
/* 42810*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42813*/      OPC_RecordNode, // #15 = $COORD_TYPE_Y
/* 42814*/      OPC_CheckType, MVT::i32,
/* 42816*/      OPC_MoveParent,
/* 42817*/      OPC_MoveChild, 17,
/* 42819*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42822*/      OPC_RecordNode, // #16 = $COORD_TYPE_Z
/* 42823*/      OPC_CheckType, MVT::i32,
/* 42825*/      OPC_MoveParent,
/* 42826*/      OPC_MoveChild, 18,
/* 42828*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42831*/      OPC_RecordNode, // #17 = $COORD_TYPE_W
/* 42832*/      OPC_CheckType, MVT::i32,
/* 42834*/      OPC_MoveParent,
/* 42835*/      OPC_CheckType, MVT::v4f32,
/* 42837*/      OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 42839*/      OPC_EmitConvertToTarget, 1,
/* 42841*/      OPC_EmitConvertToTarget, 2,
/* 42843*/      OPC_EmitConvertToTarget, 3,
/* 42845*/      OPC_EmitConvertToTarget, 4,
/* 42847*/      OPC_EmitConvertToTarget, 5,
/* 42849*/      OPC_EmitConvertToTarget, 6,
/* 42851*/      OPC_EmitConvertToTarget, 7,
/* 42853*/      OPC_EmitConvertToTarget, 8,
/* 42855*/      OPC_EmitConvertToTarget, 9,
/* 42857*/      OPC_EmitConvertToTarget, 10,
/* 42859*/      OPC_EmitConvertToTarget, 11,
/* 42861*/      OPC_EmitConvertToTarget, 12,
/* 42863*/      OPC_EmitConvertToTarget, 13,
/* 42865*/      OPC_EmitConvertToTarget, 14,
/* 42867*/      OPC_EmitConvertToTarget, 15,
/* 42869*/      OPC_EmitConvertToTarget, 16,
/* 42871*/      OPC_EmitConvertToTarget, 17,
/* 42873*/      OPC_MorphNodeTo1, TARGET_VAL(R600::TEX_SAMPLE), 0,
                    MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
                // Src: (TEXTURE_FETCH:{ *:[v4f32] } 0:{ *:[i32] }, v4f32:{ *:[v4f32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W) - Complexity = 59
                // Dst: (TEX_SAMPLE:{ *:[v4f32] } R600_Reg128:{ *:[v4f32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W)
/* 42897*/    /*Scope*/ 88|128,1/*216*/, /*->43115*/
/* 42899*/      OPC_CheckChild0Integer, 1, 
/* 42901*/      OPC_CheckChild0Type, MVT::i32,
/* 42903*/      OPC_RecordChild1, // #0 = $SRC_GPR
/* 42904*/      OPC_CheckChild1Type, MVT::v4f32,
/* 42906*/      OPC_RecordChild2, // #1 = $srcx
/* 42907*/      OPC_MoveChild2,
/* 42908*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42911*/      OPC_CheckType, MVT::i32,
/* 42913*/      OPC_MoveParent,
/* 42914*/      OPC_RecordChild3, // #2 = $srcy
/* 42915*/      OPC_MoveChild3,
/* 42916*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42919*/      OPC_CheckType, MVT::i32,
/* 42921*/      OPC_MoveParent,
/* 42922*/      OPC_RecordChild4, // #3 = $srcz
/* 42923*/      OPC_MoveChild4,
/* 42924*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42927*/      OPC_CheckType, MVT::i32,
/* 42929*/      OPC_MoveParent,
/* 42930*/      OPC_RecordChild5, // #4 = $srcw
/* 42931*/      OPC_MoveChild5,
/* 42932*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42935*/      OPC_CheckType, MVT::i32,
/* 42937*/      OPC_MoveParent,
/* 42938*/      OPC_RecordChild6, // #5 = $offsetx
/* 42939*/      OPC_MoveChild6,
/* 42940*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42943*/      OPC_CheckType, MVT::i32,
/* 42945*/      OPC_MoveParent,
/* 42946*/      OPC_RecordChild7, // #6 = $offsety
/* 42947*/      OPC_MoveChild7,
/* 42948*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42951*/      OPC_CheckType, MVT::i32,
/* 42953*/      OPC_MoveParent,
/* 42954*/      OPC_MoveChild, 8,
/* 42956*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42959*/      OPC_RecordNode, // #7 = $offsetz
/* 42960*/      OPC_CheckType, MVT::i32,
/* 42962*/      OPC_MoveParent,
/* 42963*/      OPC_MoveChild, 9,
/* 42965*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42968*/      OPC_RecordNode, // #8 = $DST_SEL_X
/* 42969*/      OPC_CheckType, MVT::i32,
/* 42971*/      OPC_MoveParent,
/* 42972*/      OPC_MoveChild, 10,
/* 42974*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42977*/      OPC_RecordNode, // #9 = $DST_SEL_Y
/* 42978*/      OPC_CheckType, MVT::i32,
/* 42980*/      OPC_MoveParent,
/* 42981*/      OPC_MoveChild, 11,
/* 42983*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42986*/      OPC_RecordNode, // #10 = $DST_SEL_Z
/* 42987*/      OPC_CheckType, MVT::i32,
/* 42989*/      OPC_MoveParent,
/* 42990*/      OPC_MoveChild, 12,
/* 42992*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42995*/      OPC_RecordNode, // #11 = $DST_SEL_W
/* 42996*/      OPC_CheckType, MVT::i32,
/* 42998*/      OPC_MoveParent,
/* 42999*/      OPC_MoveChild, 13,
/* 43001*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43004*/      OPC_RecordNode, // #12 = $RESOURCE_ID
/* 43005*/      OPC_CheckType, MVT::i32,
/* 43007*/      OPC_MoveParent,
/* 43008*/      OPC_MoveChild, 14,
/* 43010*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43013*/      OPC_RecordNode, // #13 = $SAMPLER_ID
/* 43014*/      OPC_CheckType, MVT::i32,
/* 43016*/      OPC_MoveParent,
/* 43017*/      OPC_MoveChild, 15,
/* 43019*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43022*/      OPC_RecordNode, // #14 = $COORD_TYPE_X
/* 43023*/      OPC_CheckType, MVT::i32,
/* 43025*/      OPC_MoveParent,
/* 43026*/      OPC_MoveChild, 16,
/* 43028*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43031*/      OPC_RecordNode, // #15 = $COORD_TYPE_Y
/* 43032*/      OPC_CheckType, MVT::i32,
/* 43034*/      OPC_MoveParent,
/* 43035*/      OPC_MoveChild, 17,
/* 43037*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43040*/      OPC_RecordNode, // #16 = $COORD_TYPE_Z
/* 43041*/      OPC_CheckType, MVT::i32,
/* 43043*/      OPC_MoveParent,
/* 43044*/      OPC_MoveChild, 18,
/* 43046*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43049*/      OPC_RecordNode, // #17 = $COORD_TYPE_W
/* 43050*/      OPC_CheckType, MVT::i32,
/* 43052*/      OPC_MoveParent,
/* 43053*/      OPC_CheckType, MVT::v4f32,
/* 43055*/      OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 43057*/      OPC_EmitConvertToTarget, 1,
/* 43059*/      OPC_EmitConvertToTarget, 2,
/* 43061*/      OPC_EmitConvertToTarget, 3,
/* 43063*/      OPC_EmitConvertToTarget, 4,
/* 43065*/      OPC_EmitConvertToTarget, 5,
/* 43067*/      OPC_EmitConvertToTarget, 6,
/* 43069*/      OPC_EmitConvertToTarget, 7,
/* 43071*/      OPC_EmitConvertToTarget, 8,
/* 43073*/      OPC_EmitConvertToTarget, 9,
/* 43075*/      OPC_EmitConvertToTarget, 10,
/* 43077*/      OPC_EmitConvertToTarget, 11,
/* 43079*/      OPC_EmitConvertToTarget, 12,
/* 43081*/      OPC_EmitConvertToTarget, 13,
/* 43083*/      OPC_EmitConvertToTarget, 14,
/* 43085*/      OPC_EmitConvertToTarget, 15,
/* 43087*/      OPC_EmitConvertToTarget, 16,
/* 43089*/      OPC_EmitConvertToTarget, 17,
/* 43091*/      OPC_MorphNodeTo1, TARGET_VAL(R600::TEX_SAMPLE_C), 0,
                    MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
                // Src: (TEXTURE_FETCH:{ *:[v4f32] } 1:{ *:[i32] }, v4f32:{ *:[v4f32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W) - Complexity = 59
                // Dst: (TEX_SAMPLE_C:{ *:[v4f32] } R600_Reg128:{ *:[v4f32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W)
/* 43115*/    /*Scope*/ 88|128,1/*216*/, /*->43333*/
/* 43117*/      OPC_CheckChild0Integer, 2, 
/* 43119*/      OPC_CheckChild0Type, MVT::i32,
/* 43121*/      OPC_RecordChild1, // #0 = $SRC_GPR
/* 43122*/      OPC_CheckChild1Type, MVT::v4f32,
/* 43124*/      OPC_RecordChild2, // #1 = $srcx
/* 43125*/      OPC_MoveChild2,
/* 43126*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43129*/      OPC_CheckType, MVT::i32,
/* 43131*/      OPC_MoveParent,
/* 43132*/      OPC_RecordChild3, // #2 = $srcy
/* 43133*/      OPC_MoveChild3,
/* 43134*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43137*/      OPC_CheckType, MVT::i32,
/* 43139*/      OPC_MoveParent,
/* 43140*/      OPC_RecordChild4, // #3 = $srcz
/* 43141*/      OPC_MoveChild4,
/* 43142*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43145*/      OPC_CheckType, MVT::i32,
/* 43147*/      OPC_MoveParent,
/* 43148*/      OPC_RecordChild5, // #4 = $srcw
/* 43149*/      OPC_MoveChild5,
/* 43150*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43153*/      OPC_CheckType, MVT::i32,
/* 43155*/      OPC_MoveParent,
/* 43156*/      OPC_RecordChild6, // #5 = $offsetx
/* 43157*/      OPC_MoveChild6,
/* 43158*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43161*/      OPC_CheckType, MVT::i32,
/* 43163*/      OPC_MoveParent,
/* 43164*/      OPC_RecordChild7, // #6 = $offsety
/* 43165*/      OPC_MoveChild7,
/* 43166*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43169*/      OPC_CheckType, MVT::i32,
/* 43171*/      OPC_MoveParent,
/* 43172*/      OPC_MoveChild, 8,
/* 43174*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43177*/      OPC_RecordNode, // #7 = $offsetz
/* 43178*/      OPC_CheckType, MVT::i32,
/* 43180*/      OPC_MoveParent,
/* 43181*/      OPC_MoveChild, 9,
/* 43183*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43186*/      OPC_RecordNode, // #8 = $DST_SEL_X
/* 43187*/      OPC_CheckType, MVT::i32,
/* 43189*/      OPC_MoveParent,
/* 43190*/      OPC_MoveChild, 10,
/* 43192*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43195*/      OPC_RecordNode, // #9 = $DST_SEL_Y
/* 43196*/      OPC_CheckType, MVT::i32,
/* 43198*/      OPC_MoveParent,
/* 43199*/      OPC_MoveChild, 11,
/* 43201*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43204*/      OPC_RecordNode, // #10 = $DST_SEL_Z
/* 43205*/      OPC_CheckType, MVT::i32,
/* 43207*/      OPC_MoveParent,
/* 43208*/      OPC_MoveChild, 12,
/* 43210*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43213*/      OPC_RecordNode, // #11 = $DST_SEL_W
/* 43214*/      OPC_CheckType, MVT::i32,
/* 43216*/      OPC_MoveParent,
/* 43217*/      OPC_MoveChild, 13,
/* 43219*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43222*/      OPC_RecordNode, // #12 = $RESOURCE_ID
/* 43223*/      OPC_CheckType, MVT::i32,
/* 43225*/      OPC_MoveParent,
/* 43226*/      OPC_MoveChild, 14,
/* 43228*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43231*/      OPC_RecordNode, // #13 = $SAMPLER_ID
/* 43232*/      OPC_CheckType, MVT::i32,
/* 43234*/      OPC_MoveParent,
/* 43235*/      OPC_MoveChild, 15,
/* 43237*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43240*/      OPC_RecordNode, // #14 = $COORD_TYPE_X
/* 43241*/      OPC_CheckType, MVT::i32,
/* 43243*/      OPC_MoveParent,
/* 43244*/      OPC_MoveChild, 16,
/* 43246*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43249*/      OPC_RecordNode, // #15 = $COORD_TYPE_Y
/* 43250*/      OPC_CheckType, MVT::i32,
/* 43252*/      OPC_MoveParent,
/* 43253*/      OPC_MoveChild, 17,
/* 43255*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43258*/      OPC_RecordNode, // #16 = $COORD_TYPE_Z
/* 43259*/      OPC_CheckType, MVT::i32,
/* 43261*/      OPC_MoveParent,
/* 43262*/      OPC_MoveChild, 18,
/* 43264*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43267*/      OPC_RecordNode, // #17 = $COORD_TYPE_W
/* 43268*/      OPC_CheckType, MVT::i32,
/* 43270*/      OPC_MoveParent,
/* 43271*/      OPC_CheckType, MVT::v4f32,
/* 43273*/      OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 43275*/      OPC_EmitConvertToTarget, 1,
/* 43277*/      OPC_EmitConvertToTarget, 2,
/* 43279*/      OPC_EmitConvertToTarget, 3,
/* 43281*/      OPC_EmitConvertToTarget, 4,
/* 43283*/      OPC_EmitConvertToTarget, 5,
/* 43285*/      OPC_EmitConvertToTarget, 6,
/* 43287*/      OPC_EmitConvertToTarget, 7,
/* 43289*/      OPC_EmitConvertToTarget, 8,
/* 43291*/      OPC_EmitConvertToTarget, 9,
/* 43293*/      OPC_EmitConvertToTarget, 10,
/* 43295*/      OPC_EmitConvertToTarget, 11,
/* 43297*/      OPC_EmitConvertToTarget, 12,
/* 43299*/      OPC_EmitConvertToTarget, 13,
/* 43301*/      OPC_EmitConvertToTarget, 14,
/* 43303*/      OPC_EmitConvertToTarget, 15,
/* 43305*/      OPC_EmitConvertToTarget, 16,
/* 43307*/      OPC_EmitConvertToTarget, 17,
/* 43309*/      OPC_MorphNodeTo1, TARGET_VAL(R600::TEX_SAMPLE_L), 0,
                    MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
                // Src: (TEXTURE_FETCH:{ *:[v4f32] } 2:{ *:[i32] }, v4f32:{ *:[v4f32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W) - Complexity = 59
                // Dst: (TEX_SAMPLE_L:{ *:[v4f32] } R600_Reg128:{ *:[v4f32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W)
/* 43333*/    /*Scope*/ 88|128,1/*216*/, /*->43551*/
/* 43335*/      OPC_CheckChild0Integer, 3, 
/* 43337*/      OPC_CheckChild0Type, MVT::i32,
/* 43339*/      OPC_RecordChild1, // #0 = $SRC_GPR
/* 43340*/      OPC_CheckChild1Type, MVT::v4f32,
/* 43342*/      OPC_RecordChild2, // #1 = $srcx
/* 43343*/      OPC_MoveChild2,
/* 43344*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43347*/      OPC_CheckType, MVT::i32,
/* 43349*/      OPC_MoveParent,
/* 43350*/      OPC_RecordChild3, // #2 = $srcy
/* 43351*/      OPC_MoveChild3,
/* 43352*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43355*/      OPC_CheckType, MVT::i32,
/* 43357*/      OPC_MoveParent,
/* 43358*/      OPC_RecordChild4, // #3 = $srcz
/* 43359*/      OPC_MoveChild4,
/* 43360*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43363*/      OPC_CheckType, MVT::i32,
/* 43365*/      OPC_MoveParent,
/* 43366*/      OPC_RecordChild5, // #4 = $srcw
/* 43367*/      OPC_MoveChild5,
/* 43368*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43371*/      OPC_CheckType, MVT::i32,
/* 43373*/      OPC_MoveParent,
/* 43374*/      OPC_RecordChild6, // #5 = $offsetx
/* 43375*/      OPC_MoveChild6,
/* 43376*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43379*/      OPC_CheckType, MVT::i32,
/* 43381*/      OPC_MoveParent,
/* 43382*/      OPC_RecordChild7, // #6 = $offsety
/* 43383*/      OPC_MoveChild7,
/* 43384*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43387*/      OPC_CheckType, MVT::i32,
/* 43389*/      OPC_MoveParent,
/* 43390*/      OPC_MoveChild, 8,
/* 43392*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43395*/      OPC_RecordNode, // #7 = $offsetz
/* 43396*/      OPC_CheckType, MVT::i32,
/* 43398*/      OPC_MoveParent,
/* 43399*/      OPC_MoveChild, 9,
/* 43401*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43404*/      OPC_RecordNode, // #8 = $DST_SEL_X
/* 43405*/      OPC_CheckType, MVT::i32,
/* 43407*/      OPC_MoveParent,
/* 43408*/      OPC_MoveChild, 10,
/* 43410*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43413*/      OPC_RecordNode, // #9 = $DST_SEL_Y
/* 43414*/      OPC_CheckType, MVT::i32,
/* 43416*/      OPC_MoveParent,
/* 43417*/      OPC_MoveChild, 11,
/* 43419*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43422*/      OPC_RecordNode, // #10 = $DST_SEL_Z
/* 43423*/      OPC_CheckType, MVT::i32,
/* 43425*/      OPC_MoveParent,
/* 43426*/      OPC_MoveChild, 12,
/* 43428*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43431*/      OPC_RecordNode, // #11 = $DST_SEL_W
/* 43432*/      OPC_CheckType, MVT::i32,
/* 43434*/      OPC_MoveParent,
/* 43435*/      OPC_MoveChild, 13,
/* 43437*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43440*/      OPC_RecordNode, // #12 = $RESOURCE_ID
/* 43441*/      OPC_CheckType, MVT::i32,
/* 43443*/      OPC_MoveParent,
/* 43444*/      OPC_MoveChild, 14,
/* 43446*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43449*/      OPC_RecordNode, // #13 = $SAMPLER_ID
/* 43450*/      OPC_CheckType, MVT::i32,
/* 43452*/      OPC_MoveParent,
/* 43453*/      OPC_MoveChild, 15,
/* 43455*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43458*/      OPC_RecordNode, // #14 = $COORD_TYPE_X
/* 43459*/      OPC_CheckType, MVT::i32,
/* 43461*/      OPC_MoveParent,
/* 43462*/      OPC_MoveChild, 16,
/* 43464*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43467*/      OPC_RecordNode, // #15 = $COORD_TYPE_Y
/* 43468*/      OPC_CheckType, MVT::i32,
/* 43470*/      OPC_MoveParent,
/* 43471*/      OPC_MoveChild, 17,
/* 43473*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43476*/      OPC_RecordNode, // #16 = $COORD_TYPE_Z
/* 43477*/      OPC_CheckType, MVT::i32,
/* 43479*/      OPC_MoveParent,
/* 43480*/      OPC_MoveChild, 18,
/* 43482*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43485*/      OPC_RecordNode, // #17 = $COORD_TYPE_W
/* 43486*/      OPC_CheckType, MVT::i32,
/* 43488*/      OPC_MoveParent,
/* 43489*/      OPC_CheckType, MVT::v4f32,
/* 43491*/      OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 43493*/      OPC_EmitConvertToTarget, 1,
/* 43495*/      OPC_EmitConvertToTarget, 2,
/* 43497*/      OPC_EmitConvertToTarget, 3,
/* 43499*/      OPC_EmitConvertToTarget, 4,
/* 43501*/      OPC_EmitConvertToTarget, 5,
/* 43503*/      OPC_EmitConvertToTarget, 6,
/* 43505*/      OPC_EmitConvertToTarget, 7,
/* 43507*/      OPC_EmitConvertToTarget, 8,
/* 43509*/      OPC_EmitConvertToTarget, 9,
/* 43511*/      OPC_EmitConvertToTarget, 10,
/* 43513*/      OPC_EmitConvertToTarget, 11,
/* 43515*/      OPC_EmitConvertToTarget, 12,
/* 43517*/      OPC_EmitConvertToTarget, 13,
/* 43519*/      OPC_EmitConvertToTarget, 14,
/* 43521*/      OPC_EmitConvertToTarget, 15,
/* 43523*/      OPC_EmitConvertToTarget, 16,
/* 43525*/      OPC_EmitConvertToTarget, 17,
/* 43527*/      OPC_MorphNodeTo1, TARGET_VAL(R600::TEX_SAMPLE_C_L), 0,
                    MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
                // Src: (TEXTURE_FETCH:{ *:[v4f32] } 3:{ *:[i32] }, v4f32:{ *:[v4f32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W) - Complexity = 59
                // Dst: (TEX_SAMPLE_C_L:{ *:[v4f32] } R600_Reg128:{ *:[v4f32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W)
/* 43551*/    /*Scope*/ 88|128,1/*216*/, /*->43769*/
/* 43553*/      OPC_CheckChild0Integer, 4, 
/* 43555*/      OPC_CheckChild0Type, MVT::i32,
/* 43557*/      OPC_RecordChild1, // #0 = $SRC_GPR
/* 43558*/      OPC_CheckChild1Type, MVT::v4f32,
/* 43560*/      OPC_RecordChild2, // #1 = $srcx
/* 43561*/      OPC_MoveChild2,
/* 43562*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43565*/      OPC_CheckType, MVT::i32,
/* 43567*/      OPC_MoveParent,
/* 43568*/      OPC_RecordChild3, // #2 = $srcy
/* 43569*/      OPC_MoveChild3,
/* 43570*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43573*/      OPC_CheckType, MVT::i32,
/* 43575*/      OPC_MoveParent,
/* 43576*/      OPC_RecordChild4, // #3 = $srcz
/* 43577*/      OPC_MoveChild4,
/* 43578*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43581*/      OPC_CheckType, MVT::i32,
/* 43583*/      OPC_MoveParent,
/* 43584*/      OPC_RecordChild5, // #4 = $srcw
/* 43585*/      OPC_MoveChild5,
/* 43586*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43589*/      OPC_CheckType, MVT::i32,
/* 43591*/      OPC_MoveParent,
/* 43592*/      OPC_RecordChild6, // #5 = $offsetx
/* 43593*/      OPC_MoveChild6,
/* 43594*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43597*/      OPC_CheckType, MVT::i32,
/* 43599*/      OPC_MoveParent,
/* 43600*/      OPC_RecordChild7, // #6 = $offsety
/* 43601*/      OPC_MoveChild7,
/* 43602*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43605*/      OPC_CheckType, MVT::i32,
/* 43607*/      OPC_MoveParent,
/* 43608*/      OPC_MoveChild, 8,
/* 43610*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43613*/      OPC_RecordNode, // #7 = $offsetz
/* 43614*/      OPC_CheckType, MVT::i32,
/* 43616*/      OPC_MoveParent,
/* 43617*/      OPC_MoveChild, 9,
/* 43619*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43622*/      OPC_RecordNode, // #8 = $DST_SEL_X
/* 43623*/      OPC_CheckType, MVT::i32,
/* 43625*/      OPC_MoveParent,
/* 43626*/      OPC_MoveChild, 10,
/* 43628*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43631*/      OPC_RecordNode, // #9 = $DST_SEL_Y
/* 43632*/      OPC_CheckType, MVT::i32,
/* 43634*/      OPC_MoveParent,
/* 43635*/      OPC_MoveChild, 11,
/* 43637*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43640*/      OPC_RecordNode, // #10 = $DST_SEL_Z
/* 43641*/      OPC_CheckType, MVT::i32,
/* 43643*/      OPC_MoveParent,
/* 43644*/      OPC_MoveChild, 12,
/* 43646*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43649*/      OPC_RecordNode, // #11 = $DST_SEL_W
/* 43650*/      OPC_CheckType, MVT::i32,
/* 43652*/      OPC_MoveParent,
/* 43653*/      OPC_MoveChild, 13,
/* 43655*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43658*/      OPC_RecordNode, // #12 = $RESOURCE_ID
/* 43659*/      OPC_CheckType, MVT::i32,
/* 43661*/      OPC_MoveParent,
/* 43662*/      OPC_MoveChild, 14,
/* 43664*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43667*/      OPC_RecordNode, // #13 = $SAMPLER_ID
/* 43668*/      OPC_CheckType, MVT::i32,
/* 43670*/      OPC_MoveParent,
/* 43671*/      OPC_MoveChild, 15,
/* 43673*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43676*/      OPC_RecordNode, // #14 = $COORD_TYPE_X
/* 43677*/      OPC_CheckType, MVT::i32,
/* 43679*/      OPC_MoveParent,
/* 43680*/      OPC_MoveChild, 16,
/* 43682*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43685*/      OPC_RecordNode, // #15 = $COORD_TYPE_Y
/* 43686*/      OPC_CheckType, MVT::i32,
/* 43688*/      OPC_MoveParent,
/* 43689*/      OPC_MoveChild, 17,
/* 43691*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43694*/      OPC_RecordNode, // #16 = $COORD_TYPE_Z
/* 43695*/      OPC_CheckType, MVT::i32,
/* 43697*/      OPC_MoveParent,
/* 43698*/      OPC_MoveChild, 18,
/* 43700*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43703*/      OPC_RecordNode, // #17 = $COORD_TYPE_W
/* 43704*/      OPC_CheckType, MVT::i32,
/* 43706*/      OPC_MoveParent,
/* 43707*/      OPC_CheckType, MVT::v4f32,
/* 43709*/      OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 43711*/      OPC_EmitConvertToTarget, 1,
/* 43713*/      OPC_EmitConvertToTarget, 2,
/* 43715*/      OPC_EmitConvertToTarget, 3,
/* 43717*/      OPC_EmitConvertToTarget, 4,
/* 43719*/      OPC_EmitConvertToTarget, 5,
/* 43721*/      OPC_EmitConvertToTarget, 6,
/* 43723*/      OPC_EmitConvertToTarget, 7,
/* 43725*/      OPC_EmitConvertToTarget, 8,
/* 43727*/      OPC_EmitConvertToTarget, 9,
/* 43729*/      OPC_EmitConvertToTarget, 10,
/* 43731*/      OPC_EmitConvertToTarget, 11,
/* 43733*/      OPC_EmitConvertToTarget, 12,
/* 43735*/      OPC_EmitConvertToTarget, 13,
/* 43737*/      OPC_EmitConvertToTarget, 14,
/* 43739*/      OPC_EmitConvertToTarget, 15,
/* 43741*/      OPC_EmitConvertToTarget, 16,
/* 43743*/      OPC_EmitConvertToTarget, 17,
/* 43745*/      OPC_MorphNodeTo1, TARGET_VAL(R600::TEX_SAMPLE_LB), 0,
                    MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
                // Src: (TEXTURE_FETCH:{ *:[v4f32] } 4:{ *:[i32] }, v4f32:{ *:[v4f32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W) - Complexity = 59
                // Dst: (TEX_SAMPLE_LB:{ *:[v4f32] } R600_Reg128:{ *:[v4f32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W)
/* 43769*/    /*Scope*/ 88|128,1/*216*/, /*->43987*/
/* 43771*/      OPC_CheckChild0Integer, 5, 
/* 43773*/      OPC_CheckChild0Type, MVT::i32,
/* 43775*/      OPC_RecordChild1, // #0 = $SRC_GPR
/* 43776*/      OPC_CheckChild1Type, MVT::v4f32,
/* 43778*/      OPC_RecordChild2, // #1 = $srcx
/* 43779*/      OPC_MoveChild2,
/* 43780*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43783*/      OPC_CheckType, MVT::i32,
/* 43785*/      OPC_MoveParent,
/* 43786*/      OPC_RecordChild3, // #2 = $srcy
/* 43787*/      OPC_MoveChild3,
/* 43788*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43791*/      OPC_CheckType, MVT::i32,
/* 43793*/      OPC_MoveParent,
/* 43794*/      OPC_RecordChild4, // #3 = $srcz
/* 43795*/      OPC_MoveChild4,
/* 43796*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43799*/      OPC_CheckType, MVT::i32,
/* 43801*/      OPC_MoveParent,
/* 43802*/      OPC_RecordChild5, // #4 = $srcw
/* 43803*/      OPC_MoveChild5,
/* 43804*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43807*/      OPC_CheckType, MVT::i32,
/* 43809*/      OPC_MoveParent,
/* 43810*/      OPC_RecordChild6, // #5 = $offsetx
/* 43811*/      OPC_MoveChild6,
/* 43812*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43815*/      OPC_CheckType, MVT::i32,
/* 43817*/      OPC_MoveParent,
/* 43818*/      OPC_RecordChild7, // #6 = $offsety
/* 43819*/      OPC_MoveChild7,
/* 43820*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43823*/      OPC_CheckType, MVT::i32,
/* 43825*/      OPC_MoveParent,
/* 43826*/      OPC_MoveChild, 8,
/* 43828*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43831*/      OPC_RecordNode, // #7 = $offsetz
/* 43832*/      OPC_CheckType, MVT::i32,
/* 43834*/      OPC_MoveParent,
/* 43835*/      OPC_MoveChild, 9,
/* 43837*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43840*/      OPC_RecordNode, // #8 = $DST_SEL_X
/* 43841*/      OPC_CheckType, MVT::i32,
/* 43843*/      OPC_MoveParent,
/* 43844*/      OPC_MoveChild, 10,
/* 43846*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43849*/      OPC_RecordNode, // #9 = $DST_SEL_Y
/* 43850*/      OPC_CheckType, MVT::i32,
/* 43852*/      OPC_MoveParent,
/* 43853*/      OPC_MoveChild, 11,
/* 43855*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43858*/      OPC_RecordNode, // #10 = $DST_SEL_Z
/* 43859*/      OPC_CheckType, MVT::i32,
/* 43861*/      OPC_MoveParent,
/* 43862*/      OPC_MoveChild, 12,
/* 43864*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43867*/      OPC_RecordNode, // #11 = $DST_SEL_W
/* 43868*/      OPC_CheckType, MVT::i32,
/* 43870*/      OPC_MoveParent,
/* 43871*/      OPC_MoveChild, 13,
/* 43873*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43876*/      OPC_RecordNode, // #12 = $RESOURCE_ID
/* 43877*/      OPC_CheckType, MVT::i32,
/* 43879*/      OPC_MoveParent,
/* 43880*/      OPC_MoveChild, 14,
/* 43882*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43885*/      OPC_RecordNode, // #13 = $SAMPLER_ID
/* 43886*/      OPC_CheckType, MVT::i32,
/* 43888*/      OPC_MoveParent,
/* 43889*/      OPC_MoveChild, 15,
/* 43891*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43894*/      OPC_RecordNode, // #14 = $COORD_TYPE_X
/* 43895*/      OPC_CheckType, MVT::i32,
/* 43897*/      OPC_MoveParent,
/* 43898*/      OPC_MoveChild, 16,
/* 43900*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43903*/      OPC_RecordNode, // #15 = $COORD_TYPE_Y
/* 43904*/      OPC_CheckType, MVT::i32,
/* 43906*/      OPC_MoveParent,
/* 43907*/      OPC_MoveChild, 17,
/* 43909*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43912*/      OPC_RecordNode, // #16 = $COORD_TYPE_Z
/* 43913*/      OPC_CheckType, MVT::i32,
/* 43915*/      OPC_MoveParent,
/* 43916*/      OPC_MoveChild, 18,
/* 43918*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43921*/      OPC_RecordNode, // #17 = $COORD_TYPE_W
/* 43922*/      OPC_CheckType, MVT::i32,
/* 43924*/      OPC_MoveParent,
/* 43925*/      OPC_CheckType, MVT::v4f32,
/* 43927*/      OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 43929*/      OPC_EmitConvertToTarget, 1,
/* 43931*/      OPC_EmitConvertToTarget, 2,
/* 43933*/      OPC_EmitConvertToTarget, 3,
/* 43935*/      OPC_EmitConvertToTarget, 4,
/* 43937*/      OPC_EmitConvertToTarget, 5,
/* 43939*/      OPC_EmitConvertToTarget, 6,
/* 43941*/      OPC_EmitConvertToTarget, 7,
/* 43943*/      OPC_EmitConvertToTarget, 8,
/* 43945*/      OPC_EmitConvertToTarget, 9,
/* 43947*/      OPC_EmitConvertToTarget, 10,
/* 43949*/      OPC_EmitConvertToTarget, 11,
/* 43951*/      OPC_EmitConvertToTarget, 12,
/* 43953*/      OPC_EmitConvertToTarget, 13,
/* 43955*/      OPC_EmitConvertToTarget, 14,
/* 43957*/      OPC_EmitConvertToTarget, 15,
/* 43959*/      OPC_EmitConvertToTarget, 16,
/* 43961*/      OPC_EmitConvertToTarget, 17,
/* 43963*/      OPC_MorphNodeTo1, TARGET_VAL(R600::TEX_SAMPLE_C_LB), 0,
                    MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
                // Src: (TEXTURE_FETCH:{ *:[v4f32] } 5:{ *:[i32] }, v4f32:{ *:[v4f32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W) - Complexity = 59
                // Dst: (TEX_SAMPLE_C_LB:{ *:[v4f32] } R600_Reg128:{ *:[v4f32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W)
/* 43987*/    /*Scope*/ 88|128,1/*216*/, /*->44205*/
/* 43989*/      OPC_CheckChild0Integer, 6, 
/* 43991*/      OPC_CheckChild0Type, MVT::i32,
/* 43993*/      OPC_RecordChild1, // #0 = $SRC_GPR
/* 43994*/      OPC_CheckChild1Type, MVT::v4i32,
/* 43996*/      OPC_RecordChild2, // #1 = $srcx
/* 43997*/      OPC_MoveChild2,
/* 43998*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44001*/      OPC_CheckType, MVT::i32,
/* 44003*/      OPC_MoveParent,
/* 44004*/      OPC_RecordChild3, // #2 = $srcy
/* 44005*/      OPC_MoveChild3,
/* 44006*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44009*/      OPC_CheckType, MVT::i32,
/* 44011*/      OPC_MoveParent,
/* 44012*/      OPC_RecordChild4, // #3 = $srcz
/* 44013*/      OPC_MoveChild4,
/* 44014*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44017*/      OPC_CheckType, MVT::i32,
/* 44019*/      OPC_MoveParent,
/* 44020*/      OPC_RecordChild5, // #4 = $srcw
/* 44021*/      OPC_MoveChild5,
/* 44022*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44025*/      OPC_CheckType, MVT::i32,
/* 44027*/      OPC_MoveParent,
/* 44028*/      OPC_RecordChild6, // #5 = $offsetx
/* 44029*/      OPC_MoveChild6,
/* 44030*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44033*/      OPC_CheckType, MVT::i32,
/* 44035*/      OPC_MoveParent,
/* 44036*/      OPC_RecordChild7, // #6 = $offsety
/* 44037*/      OPC_MoveChild7,
/* 44038*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44041*/      OPC_CheckType, MVT::i32,
/* 44043*/      OPC_MoveParent,
/* 44044*/      OPC_MoveChild, 8,
/* 44046*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44049*/      OPC_RecordNode, // #7 = $offsetz
/* 44050*/      OPC_CheckType, MVT::i32,
/* 44052*/      OPC_MoveParent,
/* 44053*/      OPC_MoveChild, 9,
/* 44055*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44058*/      OPC_RecordNode, // #8 = $DST_SEL_X
/* 44059*/      OPC_CheckType, MVT::i32,
/* 44061*/      OPC_MoveParent,
/* 44062*/      OPC_MoveChild, 10,
/* 44064*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44067*/      OPC_RecordNode, // #9 = $DST_SEL_Y
/* 44068*/      OPC_CheckType, MVT::i32,
/* 44070*/      OPC_MoveParent,
/* 44071*/      OPC_MoveChild, 11,
/* 44073*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44076*/      OPC_RecordNode, // #10 = $DST_SEL_Z
/* 44077*/      OPC_CheckType, MVT::i32,
/* 44079*/      OPC_MoveParent,
/* 44080*/      OPC_MoveChild, 12,
/* 44082*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44085*/      OPC_RecordNode, // #11 = $DST_SEL_W
/* 44086*/      OPC_CheckType, MVT::i32,
/* 44088*/      OPC_MoveParent,
/* 44089*/      OPC_MoveChild, 13,
/* 44091*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44094*/      OPC_RecordNode, // #12 = $RESOURCE_ID
/* 44095*/      OPC_CheckType, MVT::i32,
/* 44097*/      OPC_MoveParent,
/* 44098*/      OPC_MoveChild, 14,
/* 44100*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44103*/      OPC_RecordNode, // #13 = $SAMPLER_ID
/* 44104*/      OPC_CheckType, MVT::i32,
/* 44106*/      OPC_MoveParent,
/* 44107*/      OPC_MoveChild, 15,
/* 44109*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44112*/      OPC_RecordNode, // #14 = $COORD_TYPE_X
/* 44113*/      OPC_CheckType, MVT::i32,
/* 44115*/      OPC_MoveParent,
/* 44116*/      OPC_MoveChild, 16,
/* 44118*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44121*/      OPC_RecordNode, // #15 = $COORD_TYPE_Y
/* 44122*/      OPC_CheckType, MVT::i32,
/* 44124*/      OPC_MoveParent,
/* 44125*/      OPC_MoveChild, 17,
/* 44127*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44130*/      OPC_RecordNode, // #16 = $COORD_TYPE_Z
/* 44131*/      OPC_CheckType, MVT::i32,
/* 44133*/      OPC_MoveParent,
/* 44134*/      OPC_MoveChild, 18,
/* 44136*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44139*/      OPC_RecordNode, // #17 = $COORD_TYPE_W
/* 44140*/      OPC_CheckType, MVT::i32,
/* 44142*/      OPC_MoveParent,
/* 44143*/      OPC_CheckType, MVT::v4f32,
/* 44145*/      OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 44147*/      OPC_EmitConvertToTarget, 1,
/* 44149*/      OPC_EmitConvertToTarget, 2,
/* 44151*/      OPC_EmitConvertToTarget, 3,
/* 44153*/      OPC_EmitConvertToTarget, 4,
/* 44155*/      OPC_EmitConvertToTarget, 5,
/* 44157*/      OPC_EmitConvertToTarget, 6,
/* 44159*/      OPC_EmitConvertToTarget, 7,
/* 44161*/      OPC_EmitConvertToTarget, 8,
/* 44163*/      OPC_EmitConvertToTarget, 9,
/* 44165*/      OPC_EmitConvertToTarget, 10,
/* 44167*/      OPC_EmitConvertToTarget, 11,
/* 44169*/      OPC_EmitConvertToTarget, 12,
/* 44171*/      OPC_EmitConvertToTarget, 13,
/* 44173*/      OPC_EmitConvertToTarget, 14,
/* 44175*/      OPC_EmitConvertToTarget, 15,
/* 44177*/      OPC_EmitConvertToTarget, 16,
/* 44179*/      OPC_EmitConvertToTarget, 17,
/* 44181*/      OPC_MorphNodeTo1, TARGET_VAL(R600::TEX_LD), 0,
                    MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
                // Src: (TEXTURE_FETCH:{ *:[v4f32] } 6:{ *:[i32] }, v4i32:{ *:[v4i32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W) - Complexity = 59
                // Dst: (TEX_LD:{ *:[v4f32] } R600_Reg128:{ *:[v4i32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W)
/* 44205*/    /*Scope*/ 88|128,1/*216*/, /*->44423*/
/* 44207*/      OPC_CheckChild0Integer, 7, 
/* 44209*/      OPC_CheckChild0Type, MVT::i32,
/* 44211*/      OPC_RecordChild1, // #0 = $SRC_GPR
/* 44212*/      OPC_CheckChild1Type, MVT::v4i32,
/* 44214*/      OPC_RecordChild2, // #1 = $srcx
/* 44215*/      OPC_MoveChild2,
/* 44216*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44219*/      OPC_CheckType, MVT::i32,
/* 44221*/      OPC_MoveParent,
/* 44222*/      OPC_RecordChild3, // #2 = $srcy
/* 44223*/      OPC_MoveChild3,
/* 44224*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44227*/      OPC_CheckType, MVT::i32,
/* 44229*/      OPC_MoveParent,
/* 44230*/      OPC_RecordChild4, // #3 = $srcz
/* 44231*/      OPC_MoveChild4,
/* 44232*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44235*/      OPC_CheckType, MVT::i32,
/* 44237*/      OPC_MoveParent,
/* 44238*/      OPC_RecordChild5, // #4 = $srcw
/* 44239*/      OPC_MoveChild5,
/* 44240*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44243*/      OPC_CheckType, MVT::i32,
/* 44245*/      OPC_MoveParent,
/* 44246*/      OPC_RecordChild6, // #5 = $offsetx
/* 44247*/      OPC_MoveChild6,
/* 44248*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44251*/      OPC_CheckType, MVT::i32,
/* 44253*/      OPC_MoveParent,
/* 44254*/      OPC_RecordChild7, // #6 = $offsety
/* 44255*/      OPC_MoveChild7,
/* 44256*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44259*/      OPC_CheckType, MVT::i32,
/* 44261*/      OPC_MoveParent,
/* 44262*/      OPC_MoveChild, 8,
/* 44264*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44267*/      OPC_RecordNode, // #7 = $offsetz
/* 44268*/      OPC_CheckType, MVT::i32,
/* 44270*/      OPC_MoveParent,
/* 44271*/      OPC_MoveChild, 9,
/* 44273*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44276*/      OPC_RecordNode, // #8 = $DST_SEL_X
/* 44277*/      OPC_CheckType, MVT::i32,
/* 44279*/      OPC_MoveParent,
/* 44280*/      OPC_MoveChild, 10,
/* 44282*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44285*/      OPC_RecordNode, // #9 = $DST_SEL_Y
/* 44286*/      OPC_CheckType, MVT::i32,
/* 44288*/      OPC_MoveParent,
/* 44289*/      OPC_MoveChild, 11,
/* 44291*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44294*/      OPC_RecordNode, // #10 = $DST_SEL_Z
/* 44295*/      OPC_CheckType, MVT::i32,
/* 44297*/      OPC_MoveParent,
/* 44298*/      OPC_MoveChild, 12,
/* 44300*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44303*/      OPC_RecordNode, // #11 = $DST_SEL_W
/* 44304*/      OPC_CheckType, MVT::i32,
/* 44306*/      OPC_MoveParent,
/* 44307*/      OPC_MoveChild, 13,
/* 44309*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44312*/      OPC_RecordNode, // #12 = $RESOURCE_ID
/* 44313*/      OPC_CheckType, MVT::i32,
/* 44315*/      OPC_MoveParent,
/* 44316*/      OPC_MoveChild, 14,
/* 44318*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44321*/      OPC_RecordNode, // #13 = $SAMPLER_ID
/* 44322*/      OPC_CheckType, MVT::i32,
/* 44324*/      OPC_MoveParent,
/* 44325*/      OPC_MoveChild, 15,
/* 44327*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44330*/      OPC_RecordNode, // #14 = $COORD_TYPE_X
/* 44331*/      OPC_CheckType, MVT::i32,
/* 44333*/      OPC_MoveParent,
/* 44334*/      OPC_MoveChild, 16,
/* 44336*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44339*/      OPC_RecordNode, // #15 = $COORD_TYPE_Y
/* 44340*/      OPC_CheckType, MVT::i32,
/* 44342*/      OPC_MoveParent,
/* 44343*/      OPC_MoveChild, 17,
/* 44345*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44348*/      OPC_RecordNode, // #16 = $COORD_TYPE_Z
/* 44349*/      OPC_CheckType, MVT::i32,
/* 44351*/      OPC_MoveParent,
/* 44352*/      OPC_MoveChild, 18,
/* 44354*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44357*/      OPC_RecordNode, // #17 = $COORD_TYPE_W
/* 44358*/      OPC_CheckType, MVT::i32,
/* 44360*/      OPC_MoveParent,
/* 44361*/      OPC_CheckType, MVT::v4f32,
/* 44363*/      OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 44365*/      OPC_EmitConvertToTarget, 1,
/* 44367*/      OPC_EmitConvertToTarget, 2,
/* 44369*/      OPC_EmitConvertToTarget, 3,
/* 44371*/      OPC_EmitConvertToTarget, 4,
/* 44373*/      OPC_EmitConvertToTarget, 5,
/* 44375*/      OPC_EmitConvertToTarget, 6,
/* 44377*/      OPC_EmitConvertToTarget, 7,
/* 44379*/      OPC_EmitConvertToTarget, 8,
/* 44381*/      OPC_EmitConvertToTarget, 9,
/* 44383*/      OPC_EmitConvertToTarget, 10,
/* 44385*/      OPC_EmitConvertToTarget, 11,
/* 44387*/      OPC_EmitConvertToTarget, 12,
/* 44389*/      OPC_EmitConvertToTarget, 13,
/* 44391*/      OPC_EmitConvertToTarget, 14,
/* 44393*/      OPC_EmitConvertToTarget, 15,
/* 44395*/      OPC_EmitConvertToTarget, 16,
/* 44397*/      OPC_EmitConvertToTarget, 17,
/* 44399*/      OPC_MorphNodeTo1, TARGET_VAL(R600::TEX_GET_TEXTURE_RESINFO), 0,
                    MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
                // Src: (TEXTURE_FETCH:{ *:[v4f32] } 7:{ *:[i32] }, v4i32:{ *:[v4i32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W) - Complexity = 59
                // Dst: (TEX_GET_TEXTURE_RESINFO:{ *:[v4f32] } R600_Reg128:{ *:[v4i32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W)
/* 44423*/    /*Scope*/ 88|128,1/*216*/, /*->44641*/
/* 44425*/      OPC_CheckChild0Integer, 8, 
/* 44427*/      OPC_CheckChild0Type, MVT::i32,
/* 44429*/      OPC_RecordChild1, // #0 = $SRC_GPR
/* 44430*/      OPC_CheckChild1Type, MVT::v4f32,
/* 44432*/      OPC_RecordChild2, // #1 = $srcx
/* 44433*/      OPC_MoveChild2,
/* 44434*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44437*/      OPC_CheckType, MVT::i32,
/* 44439*/      OPC_MoveParent,
/* 44440*/      OPC_RecordChild3, // #2 = $srcy
/* 44441*/      OPC_MoveChild3,
/* 44442*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44445*/      OPC_CheckType, MVT::i32,
/* 44447*/      OPC_MoveParent,
/* 44448*/      OPC_RecordChild4, // #3 = $srcz
/* 44449*/      OPC_MoveChild4,
/* 44450*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44453*/      OPC_CheckType, MVT::i32,
/* 44455*/      OPC_MoveParent,
/* 44456*/      OPC_RecordChild5, // #4 = $srcw
/* 44457*/      OPC_MoveChild5,
/* 44458*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44461*/      OPC_CheckType, MVT::i32,
/* 44463*/      OPC_MoveParent,
/* 44464*/      OPC_RecordChild6, // #5 = $offsetx
/* 44465*/      OPC_MoveChild6,
/* 44466*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44469*/      OPC_CheckType, MVT::i32,
/* 44471*/      OPC_MoveParent,
/* 44472*/      OPC_RecordChild7, // #6 = $offsety
/* 44473*/      OPC_MoveChild7,
/* 44474*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44477*/      OPC_CheckType, MVT::i32,
/* 44479*/      OPC_MoveParent,
/* 44480*/      OPC_MoveChild, 8,
/* 44482*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44485*/      OPC_RecordNode, // #7 = $offsetz
/* 44486*/      OPC_CheckType, MVT::i32,
/* 44488*/      OPC_MoveParent,
/* 44489*/      OPC_MoveChild, 9,
/* 44491*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44494*/      OPC_RecordNode, // #8 = $DST_SEL_X
/* 44495*/      OPC_CheckType, MVT::i32,
/* 44497*/      OPC_MoveParent,
/* 44498*/      OPC_MoveChild, 10,
/* 44500*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44503*/      OPC_RecordNode, // #9 = $DST_SEL_Y
/* 44504*/      OPC_CheckType, MVT::i32,
/* 44506*/      OPC_MoveParent,
/* 44507*/      OPC_MoveChild, 11,
/* 44509*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44512*/      OPC_RecordNode, // #10 = $DST_SEL_Z
/* 44513*/      OPC_CheckType, MVT::i32,
/* 44515*/      OPC_MoveParent,
/* 44516*/      OPC_MoveChild, 12,
/* 44518*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44521*/      OPC_RecordNode, // #11 = $DST_SEL_W
/* 44522*/      OPC_CheckType, MVT::i32,
/* 44524*/      OPC_MoveParent,
/* 44525*/      OPC_MoveChild, 13,
/* 44527*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44530*/      OPC_RecordNode, // #12 = $RESOURCE_ID
/* 44531*/      OPC_CheckType, MVT::i32,
/* 44533*/      OPC_MoveParent,
/* 44534*/      OPC_MoveChild, 14,
/* 44536*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44539*/      OPC_RecordNode, // #13 = $SAMPLER_ID
/* 44540*/      OPC_CheckType, MVT::i32,
/* 44542*/      OPC_MoveParent,
/* 44543*/      OPC_MoveChild, 15,
/* 44545*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44548*/      OPC_RecordNode, // #14 = $COORD_TYPE_X
/* 44549*/      OPC_CheckType, MVT::i32,
/* 44551*/      OPC_MoveParent,
/* 44552*/      OPC_MoveChild, 16,
/* 44554*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44557*/      OPC_RecordNode, // #15 = $COORD_TYPE_Y
/* 44558*/      OPC_CheckType, MVT::i32,
/* 44560*/      OPC_MoveParent,
/* 44561*/      OPC_MoveChild, 17,
/* 44563*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44566*/      OPC_RecordNode, // #16 = $COORD_TYPE_Z
/* 44567*/      OPC_CheckType, MVT::i32,
/* 44569*/      OPC_MoveParent,
/* 44570*/      OPC_MoveChild, 18,
/* 44572*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44575*/      OPC_RecordNode, // #17 = $COORD_TYPE_W
/* 44576*/      OPC_CheckType, MVT::i32,
/* 44578*/      OPC_MoveParent,
/* 44579*/      OPC_CheckType, MVT::v4f32,
/* 44581*/      OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 44583*/      OPC_EmitConvertToTarget, 1,
/* 44585*/      OPC_EmitConvertToTarget, 2,
/* 44587*/      OPC_EmitConvertToTarget, 3,
/* 44589*/      OPC_EmitConvertToTarget, 4,
/* 44591*/      OPC_EmitConvertToTarget, 5,
/* 44593*/      OPC_EmitConvertToTarget, 6,
/* 44595*/      OPC_EmitConvertToTarget, 7,
/* 44597*/      OPC_EmitConvertToTarget, 8,
/* 44599*/      OPC_EmitConvertToTarget, 9,
/* 44601*/      OPC_EmitConvertToTarget, 10,
/* 44603*/      OPC_EmitConvertToTarget, 11,
/* 44605*/      OPC_EmitConvertToTarget, 12,
/* 44607*/      OPC_EmitConvertToTarget, 13,
/* 44609*/      OPC_EmitConvertToTarget, 14,
/* 44611*/      OPC_EmitConvertToTarget, 15,
/* 44613*/      OPC_EmitConvertToTarget, 16,
/* 44615*/      OPC_EmitConvertToTarget, 17,
/* 44617*/      OPC_MorphNodeTo1, TARGET_VAL(R600::TEX_GET_GRADIENTS_H), 0,
                    MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
                // Src: (TEXTURE_FETCH:{ *:[v4f32] } 8:{ *:[i32] }, v4f32:{ *:[v4f32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W) - Complexity = 59
                // Dst: (TEX_GET_GRADIENTS_H:{ *:[v4f32] } R600_Reg128:{ *:[v4f32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W)
/* 44641*/    /*Scope*/ 88|128,1/*216*/, /*->44859*/
/* 44643*/      OPC_CheckChild0Integer, 9, 
/* 44645*/      OPC_CheckChild0Type, MVT::i32,
/* 44647*/      OPC_RecordChild1, // #0 = $SRC_GPR
/* 44648*/      OPC_CheckChild1Type, MVT::v4f32,
/* 44650*/      OPC_RecordChild2, // #1 = $srcx
/* 44651*/      OPC_MoveChild2,
/* 44652*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44655*/      OPC_CheckType, MVT::i32,
/* 44657*/      OPC_MoveParent,
/* 44658*/      OPC_RecordChild3, // #2 = $srcy
/* 44659*/      OPC_MoveChild3,
/* 44660*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44663*/      OPC_CheckType, MVT::i32,
/* 44665*/      OPC_MoveParent,
/* 44666*/      OPC_RecordChild4, // #3 = $srcz
/* 44667*/      OPC_MoveChild4,
/* 44668*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44671*/      OPC_CheckType, MVT::i32,
/* 44673*/      OPC_MoveParent,
/* 44674*/      OPC_RecordChild5, // #4 = $srcw
/* 44675*/      OPC_MoveChild5,
/* 44676*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44679*/      OPC_CheckType, MVT::i32,
/* 44681*/      OPC_MoveParent,
/* 44682*/      OPC_RecordChild6, // #5 = $offsetx
/* 44683*/      OPC_MoveChild6,
/* 44684*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44687*/      OPC_CheckType, MVT::i32,
/* 44689*/      OPC_MoveParent,
/* 44690*/      OPC_RecordChild7, // #6 = $offsety
/* 44691*/      OPC_MoveChild7,
/* 44692*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44695*/      OPC_CheckType, MVT::i32,
/* 44697*/      OPC_MoveParent,
/* 44698*/      OPC_MoveChild, 8,
/* 44700*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44703*/      OPC_RecordNode, // #7 = $offsetz
/* 44704*/      OPC_CheckType, MVT::i32,
/* 44706*/      OPC_MoveParent,
/* 44707*/      OPC_MoveChild, 9,
/* 44709*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44712*/      OPC_RecordNode, // #8 = $DST_SEL_X
/* 44713*/      OPC_CheckType, MVT::i32,
/* 44715*/      OPC_MoveParent,
/* 44716*/      OPC_MoveChild, 10,
/* 44718*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44721*/      OPC_RecordNode, // #9 = $DST_SEL_Y
/* 44722*/      OPC_CheckType, MVT::i32,
/* 44724*/      OPC_MoveParent,
/* 44725*/      OPC_MoveChild, 11,
/* 44727*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44730*/      OPC_RecordNode, // #10 = $DST_SEL_Z
/* 44731*/      OPC_CheckType, MVT::i32,
/* 44733*/      OPC_MoveParent,
/* 44734*/      OPC_MoveChild, 12,
/* 44736*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44739*/      OPC_RecordNode, // #11 = $DST_SEL_W
/* 44740*/      OPC_CheckType, MVT::i32,
/* 44742*/      OPC_MoveParent,
/* 44743*/      OPC_MoveChild, 13,
/* 44745*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44748*/      OPC_RecordNode, // #12 = $RESOURCE_ID
/* 44749*/      OPC_CheckType, MVT::i32,
/* 44751*/      OPC_MoveParent,
/* 44752*/      OPC_MoveChild, 14,
/* 44754*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44757*/      OPC_RecordNode, // #13 = $SAMPLER_ID
/* 44758*/      OPC_CheckType, MVT::i32,
/* 44760*/      OPC_MoveParent,
/* 44761*/      OPC_MoveChild, 15,
/* 44763*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44766*/      OPC_RecordNode, // #14 = $COORD_TYPE_X
/* 44767*/      OPC_CheckType, MVT::i32,
/* 44769*/      OPC_MoveParent,
/* 44770*/      OPC_MoveChild, 16,
/* 44772*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44775*/      OPC_RecordNode, // #15 = $COORD_TYPE_Y
/* 44776*/      OPC_CheckType, MVT::i32,
/* 44778*/      OPC_MoveParent,
/* 44779*/      OPC_MoveChild, 17,
/* 44781*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44784*/      OPC_RecordNode, // #16 = $COORD_TYPE_Z
/* 44785*/      OPC_CheckType, MVT::i32,
/* 44787*/      OPC_MoveParent,
/* 44788*/      OPC_MoveChild, 18,
/* 44790*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44793*/      OPC_RecordNode, // #17 = $COORD_TYPE_W
/* 44794*/      OPC_CheckType, MVT::i32,
/* 44796*/      OPC_MoveParent,
/* 44797*/      OPC_CheckType, MVT::v4f32,
/* 44799*/      OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 44801*/      OPC_EmitConvertToTarget, 1,
/* 44803*/      OPC_EmitConvertToTarget, 2,
/* 44805*/      OPC_EmitConvertToTarget, 3,
/* 44807*/      OPC_EmitConvertToTarget, 4,
/* 44809*/      OPC_EmitConvertToTarget, 5,
/* 44811*/      OPC_EmitConvertToTarget, 6,
/* 44813*/      OPC_EmitConvertToTarget, 7,
/* 44815*/      OPC_EmitConvertToTarget, 8,
/* 44817*/      OPC_EmitConvertToTarget, 9,
/* 44819*/      OPC_EmitConvertToTarget, 10,
/* 44821*/      OPC_EmitConvertToTarget, 11,
/* 44823*/      OPC_EmitConvertToTarget, 12,
/* 44825*/      OPC_EmitConvertToTarget, 13,
/* 44827*/      OPC_EmitConvertToTarget, 14,
/* 44829*/      OPC_EmitConvertToTarget, 15,
/* 44831*/      OPC_EmitConvertToTarget, 16,
/* 44833*/      OPC_EmitConvertToTarget, 17,
/* 44835*/      OPC_MorphNodeTo1, TARGET_VAL(R600::TEX_GET_GRADIENTS_V), 0,
                    MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
                // Src: (TEXTURE_FETCH:{ *:[v4f32] } 9:{ *:[i32] }, v4f32:{ *:[v4f32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W) - Complexity = 59
                // Dst: (TEX_GET_GRADIENTS_V:{ *:[v4f32] } R600_Reg128:{ *:[v4f32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W)
/* 44859*/    /*Scope*/ 88|128,1/*216*/, /*->45077*/
/* 44861*/      OPC_CheckChild0Integer, 10, 
/* 44863*/      OPC_CheckChild0Type, MVT::i32,
/* 44865*/      OPC_RecordChild1, // #0 = $SRC_GPR
/* 44866*/      OPC_CheckChild1Type, MVT::v4i32,
/* 44868*/      OPC_RecordChild2, // #1 = $srcx
/* 44869*/      OPC_MoveChild2,
/* 44870*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44873*/      OPC_CheckType, MVT::i32,
/* 44875*/      OPC_MoveParent,
/* 44876*/      OPC_RecordChild3, // #2 = $srcy
/* 44877*/      OPC_MoveChild3,
/* 44878*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44881*/      OPC_CheckType, MVT::i32,
/* 44883*/      OPC_MoveParent,
/* 44884*/      OPC_RecordChild4, // #3 = $srcz
/* 44885*/      OPC_MoveChild4,
/* 44886*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44889*/      OPC_CheckType, MVT::i32,
/* 44891*/      OPC_MoveParent,
/* 44892*/      OPC_RecordChild5, // #4 = $srcw
/* 44893*/      OPC_MoveChild5,
/* 44894*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44897*/      OPC_CheckType, MVT::i32,
/* 44899*/      OPC_MoveParent,
/* 44900*/      OPC_RecordChild6, // #5 = $offsetx
/* 44901*/      OPC_MoveChild6,
/* 44902*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44905*/      OPC_CheckType, MVT::i32,
/* 44907*/      OPC_MoveParent,
/* 44908*/      OPC_RecordChild7, // #6 = $offsety
/* 44909*/      OPC_MoveChild7,
/* 44910*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44913*/      OPC_CheckType, MVT::i32,
/* 44915*/      OPC_MoveParent,
/* 44916*/      OPC_MoveChild, 8,
/* 44918*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44921*/      OPC_RecordNode, // #7 = $offsetz
/* 44922*/      OPC_CheckType, MVT::i32,
/* 44924*/      OPC_MoveParent,
/* 44925*/      OPC_MoveChild, 9,
/* 44927*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44930*/      OPC_RecordNode, // #8 = $DST_SEL_X
/* 44931*/      OPC_CheckType, MVT::i32,
/* 44933*/      OPC_MoveParent,
/* 44934*/      OPC_MoveChild, 10,
/* 44936*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44939*/      OPC_RecordNode, // #9 = $DST_SEL_Y
/* 44940*/      OPC_CheckType, MVT::i32,
/* 44942*/      OPC_MoveParent,
/* 44943*/      OPC_MoveChild, 11,
/* 44945*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44948*/      OPC_RecordNode, // #10 = $DST_SEL_Z
/* 44949*/      OPC_CheckType, MVT::i32,
/* 44951*/      OPC_MoveParent,
/* 44952*/      OPC_MoveChild, 12,
/* 44954*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44957*/      OPC_RecordNode, // #11 = $DST_SEL_W
/* 44958*/      OPC_CheckType, MVT::i32,
/* 44960*/      OPC_MoveParent,
/* 44961*/      OPC_MoveChild, 13,
/* 44963*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44966*/      OPC_RecordNode, // #12 = $RESOURCE_ID
/* 44967*/      OPC_CheckType, MVT::i32,
/* 44969*/      OPC_MoveParent,
/* 44970*/      OPC_MoveChild, 14,
/* 44972*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44975*/      OPC_RecordNode, // #13 = $SAMPLER_ID
/* 44976*/      OPC_CheckType, MVT::i32,
/* 44978*/      OPC_MoveParent,
/* 44979*/      OPC_MoveChild, 15,
/* 44981*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44984*/      OPC_RecordNode, // #14 = $COORD_TYPE_X
/* 44985*/      OPC_CheckType, MVT::i32,
/* 44987*/      OPC_MoveParent,
/* 44988*/      OPC_MoveChild, 16,
/* 44990*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44993*/      OPC_RecordNode, // #15 = $COORD_TYPE_Y
/* 44994*/      OPC_CheckType, MVT::i32,
/* 44996*/      OPC_MoveParent,
/* 44997*/      OPC_MoveChild, 17,
/* 44999*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 45002*/      OPC_RecordNode, // #16 = $COORD_TYPE_Z
/* 45003*/      OPC_CheckType, MVT::i32,
/* 45005*/      OPC_MoveParent,
/* 45006*/      OPC_MoveChild, 18,
/* 45008*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 45011*/      OPC_RecordNode, // #17 = $COORD_TYPE_W
/* 45012*/      OPC_CheckType, MVT::i32,
/* 45014*/      OPC_MoveParent,
/* 45015*/      OPC_CheckType, MVT::v4f32,
/* 45017*/      OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 45019*/      OPC_EmitConvertToTarget, 1,
/* 45021*/      OPC_EmitConvertToTarget, 2,
/* 45023*/      OPC_EmitConvertToTarget, 3,
/* 45025*/      OPC_EmitConvertToTarget, 4,
/* 45027*/      OPC_EmitConvertToTarget, 5,
/* 45029*/      OPC_EmitConvertToTarget, 6,
/* 45031*/      OPC_EmitConvertToTarget, 7,
/* 45033*/      OPC_EmitConvertToTarget, 8,
/* 45035*/      OPC_EmitConvertToTarget, 9,
/* 45037*/      OPC_EmitConvertToTarget, 10,
/* 45039*/      OPC_EmitConvertToTarget, 11,
/* 45041*/      OPC_EmitConvertToTarget, 12,
/* 45043*/      OPC_EmitConvertToTarget, 13,
/* 45045*/      OPC_EmitConvertToTarget, 14,
/* 45047*/      OPC_EmitConvertToTarget, 15,
/* 45049*/      OPC_EmitConvertToTarget, 16,
/* 45051*/      OPC_EmitConvertToTarget, 17,
/* 45053*/      OPC_MorphNodeTo1, TARGET_VAL(R600::TEX_LDPTR), 0,
                    MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
                // Src: (TEXTURE_FETCH:{ *:[v4f32] } 10:{ *:[i32] }, v4i32:{ *:[v4i32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W) - Complexity = 59
                // Dst: (TEX_LDPTR:{ *:[v4f32] } R600_Reg128:{ *:[v4i32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W)
/* 45077*/    0, /*End of Scope*/
/* 45078*/  0, // EndSwitchOpcode
    0
  }; // Total Array size is 45080 bytes

  // Opcode Histogram:
  // #OPC_Scope                                = 145
  // #OPC_RecordNode                           = 145
  // #OPC_RecordChild                          = 413
  // #OPC_RecordMemRef                         = 14
  // #OPC_CaptureGlueInput                     = 1
  // #OPC_MoveChild                            = 288
  // #OPC_MoveParent                           = 396
  // #OPC_CheckSame                            = 0
  // #OPC_CheckChildSame                       = 90
  // #OPC_CheckPatternPredicate                = 397
  // #OPC_CheckPredicate                       = 115
  // #OPC_CheckOpcode                          = 277
  // #OPC_SwitchOpcode                         = 5
  // #OPC_CheckType                            = 431
  // #OPC_SwitchType                           = 16
  // #OPC_CheckChildType                       = 101
  // #OPC_CheckInteger                         = 0
  // #OPC_CheckChildInteger                    = 91
  // #OPC_CheckCondCode                        = 42
  // #OPC_CheckChild2CondCode                  = 0
  // #OPC_CheckValueType                       = 3
  // #OPC_CheckComplexPat                      = 36
  // #OPC_CheckAndImm                          = 0
  // #OPC_CheckOrImm                           = 0
  // #OPC_CheckImmAllOnesV                     = 0
  // #OPC_CheckImmAllZerosV                    = 0
  // #OPC_CheckFoldableChainNode               = 0
  // #OPC_EmitInteger                          = 5257
  // #OPC_EmitStringInteger                    = 383
  // #OPC_EmitRegister                         = 380
  // #OPC_EmitConvertToTarget                  = 220
  // #OPC_EmitMergeInputChains                 = 94
  // #OPC_EmitCopyToReg                        = 0
  // #OPC_EmitNode                             = 428
  // #OPC_EmitNodeXForm                        = 1
  // #OPC_CompleteMatch                        = 7
  // #OPC_MorphNodeTo                          = 403

  #undef TARGET_VAL
  SelectCodeCommon(N, MatcherTable,sizeof(MatcherTable));
}
#endif // GET_DAGISEL_BODY

#ifdef GET_DAGISEL_DECL
bool CheckPatternPredicate(unsigned PredNo) const override;
#endif
#if defined(GET_DAGISEL_BODY) || DAGISEL_INLINE
bool DAGISEL_CLASS_COLONCOLON CheckPatternPredicate(unsigned PredNo) const
#if DAGISEL_INLINE
  override
#endif
{
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: return (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS);
  case 1: return (Subtarget->getGeneration() <= AMDGPUSubtarget::R700);
  case 2: return (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS);
  case 3: return (Subtarget->hasCaymanISA());
  case 4: return (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA());
  case 5: return (Subtarget->getGeneration() == AMDGPUSubtarget::R700);
  case 6: return (Subtarget->hasFMA()) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS);
  }
}
#endif // GET_DAGISEL_BODY

#ifdef GET_DAGISEL_DECL
bool CheckNodePredicate(SDNode *Node, unsigned PredNo) const override;
#endif
#if defined(GET_DAGISEL_BODY) || DAGISEL_INLINE
bool DAGISEL_CLASS_COLONCOLON CheckNodePredicate(SDNode *Node, unsigned PredNo) const
#if DAGISEL_INLINE
  override
#endif
{
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: { 
    // Predicate_shl_oneuse
    // Predicate_add_oneuse
    // Predicate_xor_oneuse
    // Predicate_srl_oneuse
    SDNode *N = Node;
    (void)N;
 return N->hasOneUse(); 
  }
  case 1: { 
    // Predicate_IMMZeroBasedBitfieldMask
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();

  return isMask_32(Imm);

  }
  case 2: { 
    // Predicate_FP_ONE
    auto *N = cast<ConstantFPSDNode>(Node);
    (void)N;
return N->isExactlyValue(1.0);
  }
  case 3: { 
    // Predicate_FP_ZERO
    auto *N = cast<ConstantFPSDNode>(Node);
    (void)N;
return N->getValueAPF().isZero();
  }
  case 4: { 
    // Predicate_unindexedload
    SDNode *N = Node;
    (void)N;
if (cast<LoadSDNode>(N)->getAddressingMode() != ISD::UNINDEXED) return false;
return true;

  }
  case 5: { 
    // Predicate_load_private
    SDNode *N = Node;
    (void)N;
unsigned AddrSpace = cast<MemSDNode>(N)->getAddressSpace();
 if (AddrSpace != 5)
return false;
if (cast<LoadSDNode>(N)->getExtensionType() != ISD::NON_EXTLOAD) return false;
return true;

  }
  case 6: { 
    // Predicate_az_extload
    SDNode *N = Node;
    (void)N;

  LoadSDNode *L = cast<LoadSDNode>(N);
  return L->getExtensionType() == ISD::ZEXTLOAD ||
         L->getExtensionType() == ISD::EXTLOAD;

  }
  case 7: { 
    // Predicate_az_extloadi8
    SDNode *N = Node;
    (void)N;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 8: { 
    // Predicate_vtx_id3_az_extloadi8
    // Predicate_vtx_id3_az_extloadi16
    // Predicate_vtx_id3_load
    SDNode *N = Node;
    (void)N;
 return isConstantLoad(cast<LoadSDNode>(N), 0) ||
            (cast<LoadSDNode>(N)->getAddressSpace() == AMDGPUAS::PARAM_I_ADDRESS); 
  }
  case 9: { 
    // Predicate_az_extloadi16
    SDNode *N = Node;
    (void)N;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 10: { 
    // Predicate_load
    SDNode *N = Node;
    (void)N;
if (cast<LoadSDNode>(N)->getExtensionType() != ISD::NON_EXTLOAD) return false;
return true;

  }
  case 11: { 
    // Predicate_vtx_id2_az_extloadi8
    // Predicate_vtx_id2_az_extloadi16
    // Predicate_vtx_id2_load
    SDNode *N = Node;
    (void)N;

  const MemSDNode *LD = cast<MemSDNode>(N);
  return LD->getAddressSpace() == AMDGPUAS::CONSTANT_ADDRESS &&
         isa<GlobalValue>(GetUnderlyingObject(
         LD->getMemOperand()->getValue(), CurDAG->getDataLayout()));

  }
  case 12: { 
    // Predicate_vtx_id1_az_extloadi8
    // Predicate_vtx_id1_az_extloadi16
    // Predicate_vtx_id1_load
    SDNode *N = Node;
    (void)N;

  const MemSDNode *LD = cast<MemSDNode>(N);
  return LD->getAddressSpace() == AMDGPUAS::GLOBAL_ADDRESS ||
         (LD->getAddressSpace() == AMDGPUAS::CONSTANT_ADDRESS &&
           !isa<GlobalValue>(GetUnderlyingObject(
           LD->getMemOperand()->getValue(), CurDAG->getDataLayout())));

  }
  case 13: { 
    // Predicate_load_local
    SDNode *N = Node;
    (void)N;
unsigned AddrSpace = cast<MemSDNode>(N)->getAddressSpace();
 if (AddrSpace != 3)
return false;
if (cast<LoadSDNode>(N)->getExtensionType() != ISD::NON_EXTLOAD) return false;
return true;

  }
  case 14: { 
    // Predicate_sextload
    SDNode *N = Node;
    (void)N;
if (cast<LoadSDNode>(N)->getExtensionType() != ISD::SEXTLOAD) return false;
return true;

  }
  case 15: { 
    // Predicate_sextloadi8_local
    // Predicate_truncstorei8_local
    SDNode *N = Node;
    (void)N;
unsigned AddrSpace = cast<MemSDNode>(N)->getAddressSpace();
 if (AddrSpace != 3)
return false;
if (cast<MemSDNode>(N)->getMemoryVT() != MVT::i8) return false;
return true;

  }
  case 16: { 
    // Predicate_sextloadi16_local
    // Predicate_truncstorei16_local
    SDNode *N = Node;
    (void)N;
unsigned AddrSpace = cast<MemSDNode>(N)->getAddressSpace();
 if (AddrSpace != 3)
return false;
if (cast<MemSDNode>(N)->getMemoryVT() != MVT::i16) return false;
return true;

  }
  case 17: { 
    // Predicate_unindexedstore
    SDNode *N = Node;
    (void)N;
if (cast<StoreSDNode>(N)->getAddressingMode() != ISD::UNINDEXED) return false;
return true;

  }
  case 18: { 
    // Predicate_store_private
    SDNode *N = Node;
    (void)N;
unsigned AddrSpace = cast<MemSDNode>(N)->getAddressSpace();
 if (AddrSpace != 5)
return false;
 if (cast<StoreSDNode>(N)->isTruncatingStore()) return false;
return true;

  }
  case 19: { 
    // Predicate_store_local
    SDNode *N = Node;
    (void)N;
unsigned AddrSpace = cast<MemSDNode>(N)->getAddressSpace();
 if (AddrSpace != 3)
return false;
 if (cast<StoreSDNode>(N)->isTruncatingStore()) return false;
return true;

  }
  case 20: { 
    // Predicate_truncstore
    SDNode *N = Node;
    (void)N;
 if (!cast<StoreSDNode>(N)->isTruncatingStore()) return false;
return true;

  }
  case 21: { 
    // Predicate_store_global
    SDNode *N = Node;
    (void)N;
unsigned AddrSpace = cast<MemSDNode>(N)->getAddressSpace();
 if (AddrSpace != 1)
return false;
 if (cast<StoreSDNode>(N)->isTruncatingStore()) return false;
return true;

  }
  case 22: { 
    // Predicate_atomic_load_add_global_noret_32
    // Predicate_atomic_load_sub_global_noret_32
    // Predicate_atomic_swap_global_noret_32
    // Predicate_atomic_load_min_global_noret_32
    // Predicate_atomic_load_umin_global_noret_32
    // Predicate_atomic_load_max_global_noret_32
    // Predicate_atomic_load_umax_global_noret_32
    // Predicate_atomic_load_and_global_noret_32
    // Predicate_atomic_load_or_global_noret_32
    // Predicate_atomic_load_xor_global_noret_32
    SDNode *N = Node;
    (void)N;
unsigned AddrSpace = cast<MemSDNode>(N)->getAddressSpace();
 if (AddrSpace != 1 && AddrSpace != 4)
return false;
if (cast<MemSDNode>(N)->getMemoryVT() != MVT::i32) return false;
return (SDValue(N, 0).use_empty());
  }
  case 23: { 
    // Predicate_atomic_load_add_local_32
    // Predicate_atomic_load_sub_local_32
    // Predicate_atomic_swap_local_32
    // Predicate_atomic_load_min_local_32
    // Predicate_atomic_load_umin_local_32
    // Predicate_atomic_load_max_local_32
    // Predicate_atomic_load_umax_local_32
    // Predicate_atomic_load_and_local_32
    // Predicate_atomic_load_or_local_32
    // Predicate_atomic_load_xor_local_32
    // Predicate_atomic_cmp_swap_local_32
    SDNode *N = Node;
    (void)N;
unsigned AddrSpace = cast<MemSDNode>(N)->getAddressSpace();
 if (AddrSpace != 3)
return false;
if (cast<MemSDNode>(N)->getMemoryVT() != MVT::i32) return false;
return true;

  }
  case 24: { 
    // Predicate_mskor_global
    SDNode *N = Node;
    (void)N;

  return cast<MemSDNode>(N)->getAddressSpace() == AMDGPUAS::GLOBAL_ADDRESS;

  }
  case 25: { 
    // Predicate_atomic_cmp_swap_global_noret
    SDNode *N = Node;
    (void)N;
return cast<MemSDNode>(N)->getAddressSpace() == AMDGPUAS::GLOBAL_ADDRESS && (SDValue(N, 0).use_empty());
  }
  }
}
#endif // GET_DAGISEL_BODY

#ifdef GET_DAGISEL_DECL
bool CheckComplexPattern(SDNode *Root, SDNode *Parent,
      SDValue N, unsigned PatternNo,
      SmallVectorImpl<std::pair<SDValue, SDNode*>> &Result) override;
#endif
#if defined(GET_DAGISEL_BODY) || DAGISEL_INLINE
bool DAGISEL_CLASS_COLONCOLON CheckComplexPattern(SDNode *Root, SDNode *Parent,
      SDValue N, unsigned PatternNo,
      SmallVectorImpl<std::pair<SDValue, SDNode*>> &Result)
#if DAGISEL_INLINE
  override
#endif
{
  unsigned NextRes = Result.size();
  switch (PatternNo) {
  default: llvm_unreachable("Invalid pattern # in table?");
  case 0:
    Result.resize(NextRes+2);
  return SelectADDRIndirect(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 1:
    Result.resize(NextRes+2);
  return SelectADDRVTX_READ(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 2:
    Result.resize(NextRes+1);
  return SelectGlobalValueConstantOffset(N, Result[NextRes+0].first);
  case 3:
    Result.resize(NextRes+2);
  return SelectGlobalValueVariableOffset(N, Result[NextRes+0].first, Result[NextRes+1].first);
  }
}
#endif // GET_DAGISEL_BODY

#ifdef GET_DAGISEL_DECL
SDValue RunSDNodeXForm(SDValue V, unsigned XFormNo) override;
#endif
#if defined(GET_DAGISEL_BODY) || DAGISEL_INLINE
SDValue DAGISEL_CLASS_COLONCOLON RunSDNodeXForm(SDValue V, unsigned XFormNo)
#if DAGISEL_INLINE
  override
#endif
{
  switch (XFormNo) {
  default: llvm_unreachable("Invalid xform # in table?");
  case 0: {  // IMMPopCount
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(countPopulation(N->getZExtValue()), SDLoc(N),
                                   MVT::i32);

  }
  }
}
#endif // GET_DAGISEL_BODY


#ifdef DAGISEL_INLINE
#undef DAGISEL_INLINE
#endif
#ifdef DAGISEL_CLASS_COLONCOLON
#undef DAGISEL_CLASS_COLONCOLON
#endif
#ifdef GET_DAGISEL_DECL
#undef GET_DAGISEL_DECL
#endif
#ifdef GET_DAGISEL_BODY
#undef GET_DAGISEL_BODY
#endif
