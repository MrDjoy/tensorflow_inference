/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Global Combiner                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef AMDGPUPOSTLEGALIZERCOMBINERHELPER_GENCOMBINERHELPER_DEPS
#include "llvm/ADT/SparseBitVector.h"
namespace llvm {
extern cl::OptionCategory GICombinerOptionCategory;
} // end namespace llvm
#endif // ifdef AMDGPUPOSTLEGALIZERCOMBINERHELPER_GENCOMBINERHELPER_DEPS

#ifdef AMDGPUPOSTLEGALIZERCOMBINERHELPER_GENCOMBINERHELPER_H
class AMDGPUGenPostLegalizerCombinerHelper {
  SparseBitVector<> DisabledRules;

public:
  bool parseCommandLineOption();
  bool isRuleDisabled(unsigned ID) const;
  bool setRuleDisabled(StringRef RuleIdentifier);

  bool tryCombineAll(
    GISelChangeObserver &Observer,
    MachineInstr &MI,
    MachineIRBuilder &B,
    CombinerHelper &Helper) const;
};

static Optional<uint64_t> getRuleIdxForIdentifier(StringRef RuleIdentifier) {
  uint64_t I;
  // getAtInteger(...) returns false on success
  bool Parsed = !RuleIdentifier.getAsInteger(0, I);
  if (Parsed)
    return I;

#ifndef NDEBUG
  switch (RuleIdentifier.size()) {
  default: break;
  case 9:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "copy_prop", 9) != 0)
      break;
    return 0;	 // "copy_prop"
  case 10:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "mul_to_shl", 10) != 0)
      break;
    return 1;	 // "mul_to_shl"
  case 15:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "extending_loads", 15) != 0)
      break;
    return 3;	 // "extending_loads"
  case 19:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "ptr_add_immed_chain", 19) != 0)
      break;
    return 2;	 // "ptr_add_immed_chain"
  case 26:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "combine_indexed_load_store", 26) != 0)
      break;
    return 4;	 // "combine_indexed_load_store"
  case 31:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "fcmp_select_to_fmin_fmax_legacy", 31) != 0)
      break;
    return 5;	 // "fcmp_select_to_fmin_fmax_legacy"
  }
#endif // ifndef NDEBUG

  return None;
}
bool AMDGPUGenPostLegalizerCombinerHelper::setRuleDisabled(StringRef RuleIdentifier) {
  std::pair<StringRef, StringRef> RangePair = RuleIdentifier.split('-');
  if (!RangePair.second.empty()) {
    const auto First = getRuleIdxForIdentifier(RangePair.first);
    const auto Last = getRuleIdxForIdentifier(RangePair.second);
    if (!First.hasValue() || !Last.hasValue())
      return false;
    if (First >= Last)
      report_fatal_error("Beginning of range should be before end of range");
    for (auto I = First.getValue(); I < Last.getValue(); ++I)
      DisabledRules.set(I);
    return true;
  } else {
    const auto I = getRuleIdxForIdentifier(RangePair.first);
    if (!I.hasValue())
      return false;
    DisabledRules.set(I.getValue());
    return true;
  }
  return false;
}
bool AMDGPUGenPostLegalizerCombinerHelper::isRuleDisabled(unsigned RuleID) const {
  return DisabledRules.test(RuleID);
}
#endif // ifdef AMDGPUPOSTLEGALIZERCOMBINERHELPER_GENCOMBINERHELPER_H

#ifdef AMDGPUPOSTLEGALIZERCOMBINERHELPER_GENCOMBINERHELPER_CPP

cl::list<std::string> AMDGPUPostLegalizerCombinerHelperOption(
    "amdgpupostlegalizercombinerhelper-disable-rule",
    cl::desc("Disable one or more combiner rules temporarily in the AMDGPUPostLegalizerCombinerHelper pass"),
    cl::CommaSeparated,
    cl::Hidden,
    cl::cat(GICombinerOptionCategory));

bool AMDGPUGenPostLegalizerCombinerHelper::parseCommandLineOption() {
  for (const auto &Identifier : AMDGPUPostLegalizerCombinerHelperOption)
    if (!setRuleDisabled(Identifier))
      return false;
  return true;
}

bool AMDGPUGenPostLegalizerCombinerHelper::tryCombineAll(
    GISelChangeObserver &Observer,
    MachineInstr &MI,
    MachineIRBuilder &B,
    CombinerHelper &Helper) const {
  MachineBasicBlock *MBB = MI.getParent();
  MachineFunction *MF = MBB->getParent();
  MachineRegisterInfo &MRI = MF->getRegInfo();
  SmallVector<MachineInstr *, 8> MIs = { &MI };

  (void)MBB; (void)MF; (void)MRI;

  // Match data
  unsigned MatchData1;
  PtrAddChain MatchData2;
  PreferredTuple MatchData3;
  IndexedLoadStoreMatchInfo MatchData4;
  FMinFMaxLegacyInfo MatchData5;

  int Partition = -1;
  Partition = -1;
  switch (MIs[0]->getOpcode()) {
  case TargetOpcode::COPY: Partition = 0; break;
  case TargetOpcode::G_MUL: Partition = 1; break;
  case TargetOpcode::G_PTR_ADD: Partition = 2; break;
  case TargetOpcode::G_LOAD: Partition = 3; break;
  case TargetOpcode::G_SEXTLOAD: Partition = 4; break;
  case TargetOpcode::G_ZEXTLOAD: Partition = 5; break;
  case TargetOpcode::G_STORE: Partition = 6; break;
  case TargetOpcode::G_SELECT: Partition = 7; break;
  }
  // Default case but without conflicting with potential default case in selection.
  if (Partition == -1) return false;
  if (Partition == 0 /* TargetOpcode::COPY */) {
    // Leaf name: copy_prop
    // Rule: copy_prop
    if (!isRuleDisabled(0)) {
      if (1
          && [&]() {
           return Helper.matchCombineCopy(*MIs[0]); 
          return true;
      }()) {
        Helper.applyCombineCopy(*MIs[0]); 
        return true;
      }
    }
    return false;
  }
  if (Partition == 1 /* TargetOpcode::G_MUL */) {
    // Leaf name: mul_to_shl
    // Rule: mul_to_shl
    if (!isRuleDisabled(1)) {
      if (1
          && [&]() {
           return Helper.matchCombineMulToShl(*MIs[0], MatchData1); 
          return true;
      }()) {
        Helper.applyCombineMulToShl(*MIs[0], MatchData1); 
        return true;
      }
    }
    return false;
  }
  if (Partition == 2 /* TargetOpcode::G_PTR_ADD */) {
    // Leaf name: ptr_add_immed_chain
    // Rule: ptr_add_immed_chain
    if (!isRuleDisabled(2)) {
      if (1
          && [&]() {
           return Helper.matchPtrAddImmedChain(*MIs[0], MatchData2); 
          return true;
      }()) {
        Helper.applyPtrAddImmedChain(*MIs[0], MatchData2); 
        return true;
      }
    }
    return false;
  }
  if (Partition == 3 /* TargetOpcode::G_LOAD */) {
    // Leaf name: extending_loads
    // Rule: extending_loads
    if (!isRuleDisabled(3)) {
      if (1
          && [&]() {
           return Helper.matchCombineExtendingLoads(*MIs[0], MatchData3); 
          return true;
      }()) {
        Helper.applyCombineExtendingLoads(*MIs[0], MatchData3); 
        return true;
      }
    }
    // Leaf name: combine_indexed_load_store
    // Rule: combine_indexed_load_store
    if (!isRuleDisabled(4)) {
      if (1
          && [&]() {
           return Helper.matchCombineIndexedLoadStore(*MIs[0], MatchData4); 
          return true;
      }()) {
        Helper.applyCombineIndexedLoadStore(*MIs[0], MatchData4); 
        return true;
      }
    }
    return false;
  }
  if (Partition == 4 /* TargetOpcode::G_SEXTLOAD */) {
    // Leaf name: extending_loads
    // Rule: extending_loads
    if (!isRuleDisabled(3)) {
      if (1
          && [&]() {
           return Helper.matchCombineExtendingLoads(*MIs[0], MatchData3); 
          return true;
      }()) {
        Helper.applyCombineExtendingLoads(*MIs[0], MatchData3); 
        return true;
      }
    }
    // Leaf name: combine_indexed_load_store
    // Rule: combine_indexed_load_store
    if (!isRuleDisabled(4)) {
      if (1
          && [&]() {
           return Helper.matchCombineIndexedLoadStore(*MIs[0], MatchData4); 
          return true;
      }()) {
        Helper.applyCombineIndexedLoadStore(*MIs[0], MatchData4); 
        return true;
      }
    }
    return false;
  }
  if (Partition == 5 /* TargetOpcode::G_ZEXTLOAD */) {
    // Leaf name: extending_loads
    // Rule: extending_loads
    if (!isRuleDisabled(3)) {
      if (1
          && [&]() {
           return Helper.matchCombineExtendingLoads(*MIs[0], MatchData3); 
          return true;
      }()) {
        Helper.applyCombineExtendingLoads(*MIs[0], MatchData3); 
        return true;
      }
    }
    // Leaf name: combine_indexed_load_store
    // Rule: combine_indexed_load_store
    if (!isRuleDisabled(4)) {
      if (1
          && [&]() {
           return Helper.matchCombineIndexedLoadStore(*MIs[0], MatchData4); 
          return true;
      }()) {
        Helper.applyCombineIndexedLoadStore(*MIs[0], MatchData4); 
        return true;
      }
    }
    return false;
  }
  if (Partition == 6 /* TargetOpcode::G_STORE */) {
    // Leaf name: combine_indexed_load_store
    // Rule: combine_indexed_load_store
    if (!isRuleDisabled(4)) {
      if (1
          && [&]() {
           return Helper.matchCombineIndexedLoadStore(*MIs[0], MatchData4); 
          return true;
      }()) {
        Helper.applyCombineIndexedLoadStore(*MIs[0], MatchData4); 
        return true;
      }
    }
    return false;
  }
  if (Partition == 7 /* TargetOpcode::G_SELECT */) {
    // Leaf name: fcmp_select_to_fmin_fmax_legacy
    // Rule: fcmp_select_to_fmin_fmax_legacy
    if (!isRuleDisabled(5)) {
      if (1
          && [&]() {
           return matchFMinFMaxLegacy(*MIs[0], MRI, *MF, MatchData5); 
          return true;
      }()) {
        applySelectFCmpToFMinToFMaxLegacy(*MIs[0], MatchData5); 
        return true;
      }
    }
    return false;
  }

  return false;
}
#endif // ifdef AMDGPUPOSTLEGALIZERCOMBINERHELPER_GENCOMBINERHELPER_CPP
