//copyright by aerror 2016 
package fbxsdk;
//26 428 FbxCharacter  --------------------
public class FbxCharacter  {
  public    class   EInputType  {
   public static final int eInputActor = 0;
   public static final int eInputCharacter = 1;
   public static final int eInputMarkerSet = 2;
   public static final int eOutputMarkerSet = 3;
   public static final int eInputStancePose = 4;
}
  public    class   EGroupId  {
   public static final int eGroupBase = 0;
   public static final int eGroupAuxiliary = 1;
   public static final int eGroupSpine = 2;
   public static final int eGroupRoll = 3;
   public static final int eGroupSpecial = 4;
   public static final int eGroupLeftHand = 5;
   public static final int eGroupRightHand = 6;
   public static final int eGroupProps = 7;
   public static final int eGroupGameModeParent = 8;
   public static final int eGroupNeck = 9;
   public static final int eGroupLeftFoot = 10;
   public static final int eGroupRightFoot = 11;
   public static final int eGroupFloorContact = 12;
   public static final int eGroupIdCount = 13;
}
  public    class   ENodeId  {
   public static final int eHips = 0;
   public static final int eLeftHip = 1;
   public static final int eLeftKnee = 2;
   public static final int eLeftAnkle = 3;
   public static final int eLeftFoot = 4;
   public static final int eRightHip = 5;
   public static final int eRightKnee = 6;
   public static final int eRightAnkle = 7;
   public static final int eRightFoot = 8;
   public static final int eWaist = 9;
   public static final int eChest = 10;
   public static final int eLeftCollar = 11;
   public static final int eLeftShoulder = 12;
   public static final int eLeftElbow = 13;
   public static final int eLeftWrist = 14;
   public static final int eRightCollar = 15;
   public static final int eRightShoulder = 16;
   public static final int eRightElbow = 17;
   public static final int eRightWrist = 18;
   public static final int eNeck = 19;
   public static final int eHead = 20;
   public static final int eLeftHipRoll = 21;
   public static final int eLeftKneeRoll = 22;
   public static final int eRightHipRoll = 23;
   public static final int eRightKneeRoll = 24;
   public static final int eLeftShoulderRoll = 25;
   public static final int eLeftElbowRoll = 26;
   public static final int eRightShoulderRoll = 27;
   public static final int eRightElbowRoll = 28;
   public static final int eSpine2 = 29;
   public static final int eSpine3 = 30;
   public static final int eSpine4 = 31;
   public static final int eSpine5 = 32;
   public static final int eSpine6 = 33;
   public static final int eSpine7 = 34;
   public static final int eSpine8 = 35;
   public static final int eSpine9 = 36;
   public static final int eLeftThumbA = 37;
   public static final int eLeftThumbB = 38;
   public static final int eLeftThumbC = 39;
   public static final int eLeftIndexA = 40;
   public static final int eLeftIndexB = 41;
   public static final int eLeftIndexC = 42;
   public static final int eLeftMiddleA = 43;
   public static final int eLeftMiddleB = 44;
   public static final int eLeftMiddleC = 45;
   public static final int eLeftRingA = 46;
   public static final int eLeftRingB = 47;
   public static final int eLeftRingC = 48;
   public static final int eLeftPinkyA = 49;
   public static final int eLeftPinkyB = 50;
   public static final int eLeftPinkyC = 51;
   public static final int eRightThumbA = 52;
   public static final int eRightThumbB = 53;
   public static final int eRightThumbC = 54;
   public static final int eRightIndexA = 55;
   public static final int eRightIndexB = 56;
   public static final int eRightIndexC = 57;
   public static final int eRightMiddleA = 58;
   public static final int eRightMiddleB = 59;
   public static final int eRightMiddleC = 60;
   public static final int eRightRingA = 61;
   public static final int eRightRingB = 62;
   public static final int eRightRingC = 63;
   public static final int eRightPinkyA = 64;
   public static final int eRightPinkyB = 65;
   public static final int eRightPinkyC = 66;
   public static final int eReference = 67;
   public static final int eLeftFloor = 68;
   public static final int eRightFloor = 69;
   public static final int eHipsTranslation = 70;
   public static final int eProps0 = 71;
   public static final int eProps1 = 72;
   public static final int eProps2 = 73;
   public static final int eProps3 = 74;
   public static final int eProps4 = 75;
   public static final int eGameModeParentLeftHipRoll = 76;
   public static final int eGameModeParentLeftKnee = 77;
   public static final int eGameModeParentLeftKneeRoll = 78;
   public static final int eGameModeParentRightHipRoll = 79;
   public static final int eGameModeParentRightKnee = 80;
   public static final int eGameModeParentRightKneeRoll = 81;
   public static final int eGameModeParentLeftShoulderRoll = 82;
   public static final int eGameModeParentLeftElbow = 83;
   public static final int eGameModeParentLeftElbowRoll = 84;
   public static final int eGameModeParentRightShoulderRoll = 85;
   public static final int eGameModeParentRightElbow = 86;
   public static final int eGameModeParentRightElbowRoll = 87;
   public static final int eLeftUpLegRoll = 88;
   public static final int eLeftLegRoll = 89;
   public static final int eRightUpLegRoll = 90;
   public static final int eRightLegRoll = 91;
   public static final int eLeftArmRoll = 92;
   public static final int eLeftForeArmRoll = 93;
   public static final int eRightArmRoll = 94;
   public static final int eRightForeArmRoll = 95;
   public static final int eLeftHandFloor = 96;
   public static final int eRightHandFloor = 97;
   public static final int eLeftHand = 98;
   public static final int eRightHand = 99;
   public static final int eNeck1 = 100;
   public static final int eNeck2 = 101;
   public static final int eNeck3 = 102;
   public static final int eNeck4 = 103;
   public static final int eNeck5 = 104;
   public static final int eNeck6 = 105;
   public static final int eNeck7 = 106;
   public static final int eNeck8 = 107;
   public static final int eNeck9 = 108;
   public static final int eLeftInHandThumb = 109;
   public static final int eLeftThumbD = 110;
   public static final int eLeftInHandIndex = 111;
   public static final int eLeftIndexD = 112;
   public static final int eLeftInHandMiddle = 113;
   public static final int eLeftMiddleD = 114;
   public static final int eLeftInHandRing = 115;
   public static final int eLeftRingD = 116;
   public static final int eLeftInHandPinky = 117;
   public static final int eLeftPinkyD = 118;
   public static final int eLeftInHandExtraFinger = 119;
   public static final int eLeftExtraFingerA = 120;
   public static final int eLeftExtraFingerB = 121;
   public static final int eLeftExtraFingerC = 122;
   public static final int eLeftExtraFingerD = 123;
   public static final int eRightInHandThumb = 124;
   public static final int eRightThumbD = 125;
   public static final int eRightInHandIndex = 126;
   public static final int eRightIndexD = 127;
   public static final int eRightInHandMiddle = 128;
   public static final int eRightMiddleD = 129;
   public static final int eRightInHandRing = 130;
   public static final int eRightRingD = 131;
   public static final int eRightInHandPinky = 132;
   public static final int eRightPinkyD = 133;
   public static final int eRightInHandExtraFinger = 134;
   public static final int eRightExtraFingerA = 135;
   public static final int eRightExtraFingerB = 136;
   public static final int eRightExtraFingerC = 137;
   public static final int eRightExtraFingerD = 138;
   public static final int eLeftInFootThumb = 139;
   public static final int eLeftFootThumbA = 140;
   public static final int eLeftFootThumbB = 141;
   public static final int eLeftFootThumbC = 142;
   public static final int eLeftFootThumbD = 143;
   public static final int eLeftInFootIndex = 144;
   public static final int eLeftFootIndexA = 145;
   public static final int eLeftFootIndexB = 146;
   public static final int eLeftFootIndexC = 147;
   public static final int eLeftFootIndexD = 148;
   public static final int eLeftInFootMiddle = 149;
   public static final int eLeftFootMiddleA = 150;
   public static final int eLeftFootMiddleB = 151;
   public static final int eLeftFootMiddleC = 152;
   public static final int eLeftFootMiddleD = 153;
   public static final int eLeftInFootRing = 154;
   public static final int eLeftFootRingA = 155;
   public static final int eLeftFootRingB = 156;
   public static final int eLeftFootRingC = 157;
   public static final int eLeftFootRingD = 158;
   public static final int eLeftInFootPinky = 159;
   public static final int eLeftFootPinkyA = 160;
   public static final int eLeftFootPinkyB = 161;
   public static final int eLeftFootPinkyC = 162;
   public static final int eLeftFootPinkyD = 163;
   public static final int eLeftInFootExtraFinger = 164;
   public static final int eLeftFootExtraFingerA = 165;
   public static final int eLeftFootExtraFingerB = 166;
   public static final int eLeftFootExtraFingerC = 167;
   public static final int eLeftFootExtraFingerD = 168;
   public static final int eRightInFootThumb = 169;
   public static final int eRightFootThumbA = 170;
   public static final int eRightFootThumbB = 171;
   public static final int eRightFootThumbC = 172;
   public static final int eRightFootThumbD = 173;
   public static final int eRightInFootIndex = 174;
   public static final int eRightFootIndexA = 175;
   public static final int eRightFootIndexB = 176;
   public static final int eRightFootIndexC = 177;
   public static final int eRightFootIndexD = 178;
   public static final int eRightInFootMiddle = 179;
   public static final int eRightFootMiddleA = 180;
   public static final int eRightFootMiddleB = 181;
   public static final int eRightFootMiddleC = 182;
   public static final int eRightFootMiddleD = 183;
   public static final int eRightInFootRing = 184;
   public static final int eRightFootRingA = 185;
   public static final int eRightFootRingB = 186;
   public static final int eRightFootRingC = 187;
   public static final int eRightFootRingD = 188;
   public static final int eRightInFootPinky = 189;
   public static final int eRightFootPinkyA = 190;
   public static final int eRightFootPinkyB = 191;
   public static final int eRightFootPinkyC = 192;
   public static final int eRightFootPinkyD = 193;
   public static final int eRightInFootExtraFinger = 194;
   public static final int eRightFootExtraFingerA = 195;
   public static final int eRightFootExtraFingerB = 196;
   public static final int eRightFootExtraFingerC = 197;
   public static final int eRightFootExtraFingerD = 198;
   public static final int eLeftCollarExtra = 199;
   public static final int eRightCollarExtra = 200;
   public static final int eNodeIdCount = 201;
}
  public    class   EOffAutoUser  {
   public static final int eParamModeOff = 0;
   public static final int eParamModeAuto = 1;
   public static final int eParamModeUser = 2;
}
  public    class   EAutoUser  {
   public static final int eParamModeAuto2 = 0;
   public static final int eParamModeUser2 = 1;
}
  public    class   EPostureMode  {
   public static final int ePostureBiped = 0;
   public static final int ePostureQuadriped = 1;
   public static final int ePostureCount = 2;
}
  public    class   EFloorPivot  {
   public static final int eFloorPivotAuto = 0;
   public static final int eFloorPivotAnkle = 1;
   public static final int eFloorPivotToes = 2;
   public static final int eFloorPivotCount = 3;
}
  public    class   ERollExtractionMode  {
   public static final int eRelativeRollExtraction = 0;
   public static final int eAbsoluteRollExtraction = 1;
   public static final int eRollExtractionTypeCount = 2;
}
  public    class   EHipsTranslationMode  {
   public static final int eHipsTranslationWorldRigid = 0;
   public static final int eHipsTranslationBodyRigid = 1;
   public static final int eHipsTranslationTypeCount = 2;
}
  public    class   EFootContactType  {
   public static final int eFootTypeNormal = 0;
   public static final int eFootTypeAnkle = 1;
   public static final int eFootTypeToeBase = 2;
   public static final int eFootTypeHoof = 3;
   public static final int eFootContactModeCount = 4;
}
  public    class   EHandContactType  {
   public static final int eHandTypeNormal = 0;
   public static final int eHandTypeWrist = 1;
   public static final int eHandTypeFingerBase = 2;
   public static final int eHandTypeHoof = 3;
   public static final int eHandContactModeCount = 4;
}
  public    class   EFingerContactMode  {
   public static final int eFingerContactModeSticky = 0;
   public static final int eFingerContactModeSpread = 1;
   public static final int eFingerContactModeStickySpread = 2;
   public static final int eFingerContactModeCount = 3;
}
  public    class   EContactBehaviour  {
   public static final int eContactNeverSync = 0;
   public static final int eContactSyncOnKey = 1;
   public static final int eContactAlwaysSync = 2;
   public static final int eContactBehaviorCount = 3;
}
  public    class   EPropertyUnit  {
   public static final int ePropertyNoUnit = 0;
   public static final int ePropertyPercent = 1;
   public static final int ePropertySecond = 2;
   public static final int ePropertyCentimeter = 3;
   public static final int ePropertyDegree = 4;
   public static final int ePropertyEnum = 5;
   public static final int ePropertyReal = 6;
}
  public    class   EErrorCode  {
   public static final int eInternalError = 0;
   public static final int eErrorCount = 1;
}
  /// void  Reset ()
  public static native void Reset(long lpjFbxCharacter);
  /// void  SetInput (EInputType pInputType, FbxObject *pInputObject=NULL)
  public static native void SetInput(long lpjFbxCharacter, int pInputType, long pInputObject);
  /// EInputType  GetInputType () const
  public static native int GetInputType(long lpjFbxCharacter);
  /// FbxObject *  GetInputObject () const
  public static native long GetInputObject(long lpjFbxCharacter);
  /// bool  SetCharacterLink (ENodeId pCharacterNodeId, const FbxCharacterLink &pCharacterLink, bool pUpdateObjectList=true)
  public static native boolean SetCharacterLink(long lpjFbxCharacter, int pCharacterNodeId, Long pCharacterLink, boolean pUpdateObjectList);
  /// bool  GetCharacterLink (ENodeId pCharacterNodeId, FbxCharacterLink *pCharacterLink=NULL) const
  public static native boolean GetCharacterLink(long lpjFbxCharacter, int pCharacterNodeId, long pCharacterLink);
  /// FbxControlSet &  GetControlSet () const
  public static native long GetControlSet(long lpjFbxCharacter);
  /// FbxPropertyT< FbxInt >  PullIterationCount
  public static native void mepSetPullIterationCount(long lpjFbxCharacter, int lpFbxInt);
  /// FbxPropertyT< FbxInt >  PullIterationCount
  public static native int mepGetPullIterationCount(long lpjFbxCharacter);
  /// FbxPropertyT< FbxInt >  PullIterationCount
  public static native long mptGetPullIterationCount(long lpjFbxCharacter);
  /// FbxPropertyT< EPostureMode >  Posture
  public static native void mepSetPosture(long lpjFbxCharacter, int lpEPostureMode);
  /// FbxPropertyT< EPostureMode >  Posture
  public static native int mepGetPosture(long lpjFbxCharacter);
  /// FbxPropertyT< EPostureMode >  Posture
  public static native long mptGetPosture(long lpjFbxCharacter);
  /// FbxPropertyT< FbxBool >  ForceActorSpace
  public static native void mepSetForceActorSpace(long lpjFbxCharacter, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  ForceActorSpace
  public static native boolean mepGetForceActorSpace(long lpjFbxCharacter);
  /// FbxPropertyT< FbxBool >  ForceActorSpace
  public static native long mptGetForceActorSpace(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  ScaleCompensation
  public static native void mepSetScaleCompensation(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  ScaleCompensation
  public static native double mepGetScaleCompensation(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  ScaleCompensation
  public static native long mptGetScaleCompensation(long lpjFbxCharacter);
  /// FbxPropertyT< EOffAutoUser >  ScaleCompensationMode
  public static native void mepSetScaleCompensationMode(long lpjFbxCharacter, int lpEOffAutoUser);
  /// FbxPropertyT< EOffAutoUser >  ScaleCompensationMode
  public static native int mepGetScaleCompensationMode(long lpjFbxCharacter);
  /// FbxPropertyT< EOffAutoUser >  ScaleCompensationMode
  public static native long mptGetScaleCompensationMode(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  HipsHeightCompensation
  public static native void mepSetHipsHeightCompensation(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  HipsHeightCompensation
  public static native double mepGetHipsHeightCompensation(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  HipsHeightCompensation
  public static native long mptGetHipsHeightCompensation(long lpjFbxCharacter);
  /// FbxPropertyT< EOffAutoUser >  HipsHeightCompensationMode
  public static native void mepSetHipsHeightCompensationMode(long lpjFbxCharacter, int lpEOffAutoUser);
  /// FbxPropertyT< EOffAutoUser >  HipsHeightCompensationMode
  public static native int mepGetHipsHeightCompensationMode(long lpjFbxCharacter);
  /// FbxPropertyT< EOffAutoUser >  HipsHeightCompensationMode
  public static native long mptGetHipsHeightCompensationMode(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  AnkleHeightCompensation
  public static native void mepSetAnkleHeightCompensation(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  AnkleHeightCompensation
  public static native double mepGetAnkleHeightCompensation(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  AnkleHeightCompensation
  public static native long mptGetAnkleHeightCompensation(long lpjFbxCharacter);
  /// FbxPropertyT< EOffAutoUser >  AnkleHeightCompensationMode
  public static native void mepSetAnkleHeightCompensationMode(long lpjFbxCharacter, int lpEOffAutoUser);
  /// FbxPropertyT< EOffAutoUser >  AnkleHeightCompensationMode
  public static native int mepGetAnkleHeightCompensationMode(long lpjFbxCharacter);
  /// FbxPropertyT< EOffAutoUser >  AnkleHeightCompensationMode
  public static native long mptGetAnkleHeightCompensationMode(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  AnkleProximityCompensation
  public static native void mepSetAnkleProximityCompensation(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  AnkleProximityCompensation
  public static native double mepGetAnkleProximityCompensation(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  AnkleProximityCompensation
  public static native long mptGetAnkleProximityCompensation(long lpjFbxCharacter);
  /// FbxPropertyT< EOffAutoUser >  AnkleProximityCompensationMode
  public static native void mepSetAnkleProximityCompensationMode(long lpjFbxCharacter, int lpEOffAutoUser);
  /// FbxPropertyT< EOffAutoUser >  AnkleProximityCompensationMode
  public static native int mepGetAnkleProximityCompensationMode(long lpjFbxCharacter);
  /// FbxPropertyT< EOffAutoUser >  AnkleProximityCompensationMode
  public static native long mptGetAnkleProximityCompensationMode(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  MassCenterCompensation
  public static native void mepSetMassCenterCompensation(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  MassCenterCompensation
  public static native double mepGetMassCenterCompensation(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  MassCenterCompensation
  public static native long mptGetMassCenterCompensation(long lpjFbxCharacter);
  /// FbxPropertyT< FbxBool >  ApplyLimits
  public static native void mepSetApplyLimits(long lpjFbxCharacter, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  ApplyLimits
  public static native boolean mepGetApplyLimits(long lpjFbxCharacter);
  /// FbxPropertyT< FbxBool >  ApplyLimits
  public static native long mptGetApplyLimits(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  ChestReduction
  public static native void mepSetChestReduction(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  ChestReduction
  public static native double mepGetChestReduction(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  ChestReduction
  public static native long mptGetChestReduction(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CollarReduction
  public static native void mepSetCollarReduction(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  CollarReduction
  public static native double mepGetCollarReduction(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CollarReduction
  public static native long mptGetCollarReduction(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  NeckReduction
  public static native void mepSetNeckReduction(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  NeckReduction
  public static native double mepGetNeckReduction(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  NeckReduction
  public static native long mptGetNeckReduction(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  HeadReduction
  public static native void mepSetHeadReduction(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  HeadReduction
  public static native double mepGetHeadReduction(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  HeadReduction
  public static native long mptGetHeadReduction(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  ReachActorLeftAnkle
  public static native void mepSetReachActorLeftAnkle(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  ReachActorLeftAnkle
  public static native double mepGetReachActorLeftAnkle(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  ReachActorLeftAnkle
  public static native long mptGetReachActorLeftAnkle(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  ReachActorRightAnkle
  public static native void mepSetReachActorRightAnkle(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  ReachActorRightAnkle
  public static native double mepGetReachActorRightAnkle(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  ReachActorRightAnkle
  public static native long mptGetReachActorRightAnkle(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  ReachActorLeftKnee
  public static native void mepSetReachActorLeftKnee(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  ReachActorLeftKnee
  public static native double mepGetReachActorLeftKnee(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  ReachActorLeftKnee
  public static native long mptGetReachActorLeftKnee(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  ReachActorRightKnee
  public static native void mepSetReachActorRightKnee(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  ReachActorRightKnee
  public static native double mepGetReachActorRightKnee(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  ReachActorRightKnee
  public static native long mptGetReachActorRightKnee(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  ReachActorChest
  public static native void mepSetReachActorChest(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  ReachActorChest
  public static native double mepGetReachActorChest(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  ReachActorChest
  public static native long mptGetReachActorChest(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  ReachActorHead
  public static native void mepSetReachActorHead(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  ReachActorHead
  public static native double mepGetReachActorHead(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  ReachActorHead
  public static native long mptGetReachActorHead(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  ReachActorLeftWrist
  public static native void mepSetReachActorLeftWrist(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  ReachActorLeftWrist
  public static native double mepGetReachActorLeftWrist(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  ReachActorLeftWrist
  public static native long mptGetReachActorLeftWrist(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  ReachActorRightWrist
  public static native void mepSetReachActorRightWrist(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  ReachActorRightWrist
  public static native double mepGetReachActorRightWrist(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  ReachActorRightWrist
  public static native long mptGetReachActorRightWrist(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  ReachActorLeftElbow
  public static native void mepSetReachActorLeftElbow(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  ReachActorLeftElbow
  public static native double mepGetReachActorLeftElbow(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  ReachActorLeftElbow
  public static native long mptGetReachActorLeftElbow(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  ReachActorRightElbow
  public static native void mepSetReachActorRightElbow(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  ReachActorRightElbow
  public static native double mepGetReachActorRightElbow(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  ReachActorRightElbow
  public static native long mptGetReachActorRightElbow(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  ReachActorLeftFingerBase
  public static native void mepSetReachActorLeftFingerBase(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  ReachActorLeftFingerBase
  public static native double mepGetReachActorLeftFingerBase(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  ReachActorLeftFingerBase
  public static native long mptGetReachActorLeftFingerBase(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  ReachActorRightFingerBase
  public static native void mepSetReachActorRightFingerBase(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  ReachActorRightFingerBase
  public static native double mepGetReachActorRightFingerBase(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  ReachActorRightFingerBase
  public static native long mptGetReachActorRightFingerBase(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  ReachActorLeftToesBase
  public static native void mepSetReachActorLeftToesBase(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  ReachActorLeftToesBase
  public static native double mepGetReachActorLeftToesBase(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  ReachActorLeftToesBase
  public static native long mptGetReachActorLeftToesBase(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  ReachActorRightToesBase
  public static native void mepSetReachActorRightToesBase(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  ReachActorRightToesBase
  public static native double mepGetReachActorRightToesBase(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  ReachActorRightToesBase
  public static native long mptGetReachActorRightToesBase(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  ReachActorLeftFingerBaseRotation
  public static native void mepSetReachActorLeftFingerBaseRotation(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  ReachActorLeftFingerBaseRotation
  public static native double mepGetReachActorLeftFingerBaseRotation(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  ReachActorLeftFingerBaseRotation
  public static native long mptGetReachActorLeftFingerBaseRotation(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  ReachActorRightFingerBaseRotation
  public static native void mepSetReachActorRightFingerBaseRotation(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  ReachActorRightFingerBaseRotation
  public static native double mepGetReachActorRightFingerBaseRotation(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  ReachActorRightFingerBaseRotation
  public static native long mptGetReachActorRightFingerBaseRotation(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  ReachActorLeftToesBaseRotation
  public static native void mepSetReachActorLeftToesBaseRotation(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  ReachActorLeftToesBaseRotation
  public static native double mepGetReachActorLeftToesBaseRotation(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  ReachActorLeftToesBaseRotation
  public static native long mptGetReachActorLeftToesBaseRotation(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  ReachActorRightToesBaseRotation
  public static native void mepSetReachActorRightToesBaseRotation(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  ReachActorRightToesBaseRotation
  public static native double mepGetReachActorRightToesBaseRotation(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  ReachActorRightToesBaseRotation
  public static native long mptGetReachActorRightToesBaseRotation(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  ReachActorLeftAnkleRotation
  public static native void mepSetReachActorLeftAnkleRotation(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  ReachActorLeftAnkleRotation
  public static native double mepGetReachActorLeftAnkleRotation(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  ReachActorLeftAnkleRotation
  public static native long mptGetReachActorLeftAnkleRotation(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  ReachActorRightAnkleRotation
  public static native void mepSetReachActorRightAnkleRotation(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  ReachActorRightAnkleRotation
  public static native double mepGetReachActorRightAnkleRotation(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  ReachActorRightAnkleRotation
  public static native long mptGetReachActorRightAnkleRotation(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  ReachActorHeadRotation
  public static native void mepSetReachActorHeadRotation(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  ReachActorHeadRotation
  public static native double mepGetReachActorHeadRotation(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  ReachActorHeadRotation
  public static native long mptGetReachActorHeadRotation(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  ReachActorLeftWristRotation
  public static native void mepSetReachActorLeftWristRotation(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  ReachActorLeftWristRotation
  public static native double mepGetReachActorLeftWristRotation(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  ReachActorLeftWristRotation
  public static native long mptGetReachActorLeftWristRotation(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  ReachActorRightWristRotation
  public static native void mepSetReachActorRightWristRotation(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  ReachActorRightWristRotation
  public static native double mepGetReachActorRightWristRotation(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  ReachActorRightWristRotation
  public static native long mptGetReachActorRightWristRotation(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  ReachActorChestRotation
  public static native void mepSetReachActorChestRotation(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  ReachActorChestRotation
  public static native double mepGetReachActorChestRotation(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  ReachActorChestRotation
  public static native long mptGetReachActorChestRotation(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  ReachActorLowerChestRotation
  public static native void mepSetReachActorLowerChestRotation(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  ReachActorLowerChestRotation
  public static native double mepGetReachActorLowerChestRotation(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  ReachActorLowerChestRotation
  public static native long mptGetReachActorLowerChestRotation(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble3 >  HipsTOffset
  public static native void mepSetHipsTOffset(long lpjFbxCharacter, long lpFbxDouble3);
  /// FbxPropertyT< FbxDouble3 >  HipsTOffset
  public static native long mepGetHipsTOffset(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble3 >  HipsTOffset
  public static native long mptGetHipsTOffset(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble3 >  ChestTOffset
  public static native void mepSetChestTOffset(long lpjFbxCharacter, long lpFbxDouble3);
  /// FbxPropertyT< FbxDouble3 >  ChestTOffset
  public static native long mepGetChestTOffset(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble3 >  ChestTOffset
  public static native long mptGetChestTOffset(long lpjFbxCharacter);
  /// FbxPropertyT< ERollExtractionMode >  RollExtractionMode
  public static native void mepSetRollExtractionMode(long lpjFbxCharacter, int lpERollExtractionMode);
  /// FbxPropertyT< ERollExtractionMode >  RollExtractionMode
  public static native int mepGetRollExtractionMode(long lpjFbxCharacter);
  /// FbxPropertyT< ERollExtractionMode >  RollExtractionMode
  public static native long mptGetRollExtractionMode(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  LeftUpLegRoll
  public static native void mepSetLeftUpLegRoll(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  LeftUpLegRoll
  public static native double mepGetLeftUpLegRoll(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  LeftUpLegRoll
  public static native long mptGetLeftUpLegRoll(long lpjFbxCharacter);
  /// FbxPropertyT< FbxBool >  LeftUpLegRollMode
  public static native void mepSetLeftUpLegRollMode(long lpjFbxCharacter, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  LeftUpLegRollMode
  public static native boolean mepGetLeftUpLegRollMode(long lpjFbxCharacter);
  /// FbxPropertyT< FbxBool >  LeftUpLegRollMode
  public static native long mptGetLeftUpLegRollMode(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  LeftLegRoll
  public static native void mepSetLeftLegRoll(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  LeftLegRoll
  public static native double mepGetLeftLegRoll(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  LeftLegRoll
  public static native long mptGetLeftLegRoll(long lpjFbxCharacter);
  /// FbxPropertyT< FbxBool >  LeftLegRollMode
  public static native void mepSetLeftLegRollMode(long lpjFbxCharacter, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  LeftLegRollMode
  public static native boolean mepGetLeftLegRollMode(long lpjFbxCharacter);
  /// FbxPropertyT< FbxBool >  LeftLegRollMode
  public static native long mptGetLeftLegRollMode(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  RightUpLegRoll
  public static native void mepSetRightUpLegRoll(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  RightUpLegRoll
  public static native double mepGetRightUpLegRoll(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  RightUpLegRoll
  public static native long mptGetRightUpLegRoll(long lpjFbxCharacter);
  /// FbxPropertyT< FbxBool >  RightUpLegRollMode
  public static native void mepSetRightUpLegRollMode(long lpjFbxCharacter, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  RightUpLegRollMode
  public static native boolean mepGetRightUpLegRollMode(long lpjFbxCharacter);
  /// FbxPropertyT< FbxBool >  RightUpLegRollMode
  public static native long mptGetRightUpLegRollMode(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  RightLegRoll
  public static native void mepSetRightLegRoll(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  RightLegRoll
  public static native double mepGetRightLegRoll(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  RightLegRoll
  public static native long mptGetRightLegRoll(long lpjFbxCharacter);
  /// FbxPropertyT< FbxBool >  RightLegRollMode
  public static native void mepSetRightLegRollMode(long lpjFbxCharacter, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  RightLegRollMode
  public static native boolean mepGetRightLegRollMode(long lpjFbxCharacter);
  /// FbxPropertyT< FbxBool >  RightLegRollMode
  public static native long mptGetRightLegRollMode(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  LeftArmRoll
  public static native void mepSetLeftArmRoll(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  LeftArmRoll
  public static native double mepGetLeftArmRoll(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  LeftArmRoll
  public static native long mptGetLeftArmRoll(long lpjFbxCharacter);
  /// FbxPropertyT< FbxBool >  LeftArmRollMode
  public static native void mepSetLeftArmRollMode(long lpjFbxCharacter, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  LeftArmRollMode
  public static native boolean mepGetLeftArmRollMode(long lpjFbxCharacter);
  /// FbxPropertyT< FbxBool >  LeftArmRollMode
  public static native long mptGetLeftArmRollMode(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  LeftForeArmRoll
  public static native void mepSetLeftForeArmRoll(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  LeftForeArmRoll
  public static native double mepGetLeftForeArmRoll(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  LeftForeArmRoll
  public static native long mptGetLeftForeArmRoll(long lpjFbxCharacter);
  /// FbxPropertyT< FbxBool >  LeftForeArmRollMode
  public static native void mepSetLeftForeArmRollMode(long lpjFbxCharacter, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  LeftForeArmRollMode
  public static native boolean mepGetLeftForeArmRollMode(long lpjFbxCharacter);
  /// FbxPropertyT< FbxBool >  LeftForeArmRollMode
  public static native long mptGetLeftForeArmRollMode(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  RightArmRoll
  public static native void mepSetRightArmRoll(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  RightArmRoll
  public static native double mepGetRightArmRoll(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  RightArmRoll
  public static native long mptGetRightArmRoll(long lpjFbxCharacter);
  /// FbxPropertyT< FbxBool >  RightArmRollMode
  public static native void mepSetRightArmRollMode(long lpjFbxCharacter, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  RightArmRollMode
  public static native boolean mepGetRightArmRollMode(long lpjFbxCharacter);
  /// FbxPropertyT< FbxBool >  RightArmRollMode
  public static native long mptGetRightArmRollMode(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  RightForeArmRoll
  public static native void mepSetRightForeArmRoll(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  RightForeArmRoll
  public static native double mepGetRightForeArmRoll(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  RightForeArmRoll
  public static native long mptGetRightForeArmRoll(long lpjFbxCharacter);
  /// FbxPropertyT< FbxBool >  RightForeArmRollMode
  public static native void mepSetRightForeArmRollMode(long lpjFbxCharacter, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  RightForeArmRollMode
  public static native boolean mepGetRightForeArmRollMode(long lpjFbxCharacter);
  /// FbxPropertyT< FbxBool >  RightForeArmRollMode
  public static native long mptGetRightForeArmRollMode(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  LeftUpLegRollEx
  public static native void mepSetLeftUpLegRollEx(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  LeftUpLegRollEx
  public static native double mepGetLeftUpLegRollEx(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  LeftUpLegRollEx
  public static native long mptGetLeftUpLegRollEx(long lpjFbxCharacter);
  /// FbxPropertyT< FbxBool >  LeftUpLegRollExMode
  public static native void mepSetLeftUpLegRollExMode(long lpjFbxCharacter, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  LeftUpLegRollExMode
  public static native boolean mepGetLeftUpLegRollExMode(long lpjFbxCharacter);
  /// FbxPropertyT< FbxBool >  LeftUpLegRollExMode
  public static native long mptGetLeftUpLegRollExMode(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  LeftLegRollEx
  public static native void mepSetLeftLegRollEx(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  LeftLegRollEx
  public static native double mepGetLeftLegRollEx(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  LeftLegRollEx
  public static native long mptGetLeftLegRollEx(long lpjFbxCharacter);
  /// FbxPropertyT< FbxBool >  LeftLegRollExMode
  public static native void mepSetLeftLegRollExMode(long lpjFbxCharacter, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  LeftLegRollExMode
  public static native boolean mepGetLeftLegRollExMode(long lpjFbxCharacter);
  /// FbxPropertyT< FbxBool >  LeftLegRollExMode
  public static native long mptGetLeftLegRollExMode(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  RightUpLegRollEx
  public static native void mepSetRightUpLegRollEx(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  RightUpLegRollEx
  public static native double mepGetRightUpLegRollEx(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  RightUpLegRollEx
  public static native long mptGetRightUpLegRollEx(long lpjFbxCharacter);
  /// FbxPropertyT< FbxBool >  RightUpLegRollExMode
  public static native void mepSetRightUpLegRollExMode(long lpjFbxCharacter, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  RightUpLegRollExMode
  public static native boolean mepGetRightUpLegRollExMode(long lpjFbxCharacter);
  /// FbxPropertyT< FbxBool >  RightUpLegRollExMode
  public static native long mptGetRightUpLegRollExMode(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  RightLegRollEx
  public static native void mepSetRightLegRollEx(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  RightLegRollEx
  public static native double mepGetRightLegRollEx(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  RightLegRollEx
  public static native long mptGetRightLegRollEx(long lpjFbxCharacter);
  /// FbxPropertyT< FbxBool >  RightLegRollExMode
  public static native void mepSetRightLegRollExMode(long lpjFbxCharacter, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  RightLegRollExMode
  public static native boolean mepGetRightLegRollExMode(long lpjFbxCharacter);
  /// FbxPropertyT< FbxBool >  RightLegRollExMode
  public static native long mptGetRightLegRollExMode(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  LeftArmRollEx
  public static native void mepSetLeftArmRollEx(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  LeftArmRollEx
  public static native double mepGetLeftArmRollEx(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  LeftArmRollEx
  public static native long mptGetLeftArmRollEx(long lpjFbxCharacter);
  /// FbxPropertyT< FbxBool >  LeftArmRollExMode
  public static native void mepSetLeftArmRollExMode(long lpjFbxCharacter, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  LeftArmRollExMode
  public static native boolean mepGetLeftArmRollExMode(long lpjFbxCharacter);
  /// FbxPropertyT< FbxBool >  LeftArmRollExMode
  public static native long mptGetLeftArmRollExMode(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  LeftForeArmRollEx
  public static native void mepSetLeftForeArmRollEx(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  LeftForeArmRollEx
  public static native double mepGetLeftForeArmRollEx(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  LeftForeArmRollEx
  public static native long mptGetLeftForeArmRollEx(long lpjFbxCharacter);
  /// FbxPropertyT< FbxBool >  LeftForeArmRollExMode
  public static native void mepSetLeftForeArmRollExMode(long lpjFbxCharacter, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  LeftForeArmRollExMode
  public static native boolean mepGetLeftForeArmRollExMode(long lpjFbxCharacter);
  /// FbxPropertyT< FbxBool >  LeftForeArmRollExMode
  public static native long mptGetLeftForeArmRollExMode(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  RightArmRollEx
  public static native void mepSetRightArmRollEx(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  RightArmRollEx
  public static native double mepGetRightArmRollEx(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  RightArmRollEx
  public static native long mptGetRightArmRollEx(long lpjFbxCharacter);
  /// FbxPropertyT< FbxBool >  RightArmRollExMode
  public static native void mepSetRightArmRollExMode(long lpjFbxCharacter, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  RightArmRollExMode
  public static native boolean mepGetRightArmRollExMode(long lpjFbxCharacter);
  /// FbxPropertyT< FbxBool >  RightArmRollExMode
  public static native long mptGetRightArmRollExMode(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  RightForeArmExRoll
  public static native void mepSetRightForeArmExRoll(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  RightForeArmExRoll
  public static native double mepGetRightForeArmExRoll(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  RightForeArmExRoll
  public static native long mptGetRightForeArmExRoll(long lpjFbxCharacter);
  /// FbxPropertyT< FbxBool >  RightForeArmRollExMode
  public static native void mepSetRightForeArmRollExMode(long lpjFbxCharacter, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  RightForeArmRollExMode
  public static native boolean mepGetRightForeArmRollExMode(long lpjFbxCharacter);
  /// FbxPropertyT< FbxBool >  RightForeArmRollExMode
  public static native long mptGetRightForeArmRollExMode(long lpjFbxCharacter);
  /// FbxPropertyT< EContactBehaviour >  ContactBehaviour
  public static native void mepSetContactBehaviour(long lpjFbxCharacter, int lpEContactBehaviour);
  /// FbxPropertyT< EContactBehaviour >  ContactBehaviour
  public static native int mepGetContactBehaviour(long lpjFbxCharacter);
  /// FbxPropertyT< EContactBehaviour >  ContactBehaviour
  public static native long mptGetContactBehaviour(long lpjFbxCharacter);
  /// FbxPropertyT< FbxBool >  FootFloorContact
  public static native void mepSetFootFloorContact(long lpjFbxCharacter, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  FootFloorContact
  public static native boolean mepGetFootFloorContact(long lpjFbxCharacter);
  /// FbxPropertyT< FbxBool >  FootFloorContact
  public static native long mptGetFootFloorContact(long lpjFbxCharacter);
  /// FbxPropertyT< FbxBool >  FootAutomaticToes
  public static native void mepSetFootAutomaticToes(long lpjFbxCharacter, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  FootAutomaticToes
  public static native boolean mepGetFootAutomaticToes(long lpjFbxCharacter);
  /// FbxPropertyT< FbxBool >  FootAutomaticToes
  public static native long mptGetFootAutomaticToes(long lpjFbxCharacter);
  /// FbxPropertyT< EFloorPivot >  FootFloorPivot
  public static native void mepSetFootFloorPivot(long lpjFbxCharacter, int lpEFloorPivot);
  /// FbxPropertyT< EFloorPivot >  FootFloorPivot
  public static native int mepGetFootFloorPivot(long lpjFbxCharacter);
  /// FbxPropertyT< EFloorPivot >  FootFloorPivot
  public static native long mptGetFootFloorPivot(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  FootBottomToAnkle
  public static native void mepSetFootBottomToAnkle(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  FootBottomToAnkle
  public static native double mepGetFootBottomToAnkle(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  FootBottomToAnkle
  public static native long mptGetFootBottomToAnkle(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  FootBackToAnkle
  public static native void mepSetFootBackToAnkle(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  FootBackToAnkle
  public static native double mepGetFootBackToAnkle(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  FootBackToAnkle
  public static native long mptGetFootBackToAnkle(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  FootMiddleToAnkle
  public static native void mepSetFootMiddleToAnkle(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  FootMiddleToAnkle
  public static native double mepGetFootMiddleToAnkle(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  FootMiddleToAnkle
  public static native long mptGetFootMiddleToAnkle(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  FootFrontToMiddle
  public static native void mepSetFootFrontToMiddle(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  FootFrontToMiddle
  public static native double mepGetFootFrontToMiddle(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  FootFrontToMiddle
  public static native long mptGetFootFrontToMiddle(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  FootInToAnkle
  public static native void mepSetFootInToAnkle(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  FootInToAnkle
  public static native double mepGetFootInToAnkle(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  FootInToAnkle
  public static native long mptGetFootInToAnkle(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  FootOutToAnkle
  public static native void mepSetFootOutToAnkle(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  FootOutToAnkle
  public static native double mepGetFootOutToAnkle(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  FootOutToAnkle
  public static native long mptGetFootOutToAnkle(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  FootContactSize
  public static native void mepSetFootContactSize(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  FootContactSize
  public static native double mepGetFootContactSize(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  FootContactSize
  public static native long mptGetFootContactSize(long lpjFbxCharacter);
  /// FbxPropertyT< FbxBool >  FootFingerContact
  public static native void mepSetFootFingerContact(long lpjFbxCharacter, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  FootFingerContact
  public static native boolean mepGetFootFingerContact(long lpjFbxCharacter);
  /// FbxPropertyT< FbxBool >  FootFingerContact
  public static native long mptGetFootFingerContact(long lpjFbxCharacter);
  /// FbxPropertyT< EFootContactType >  FootContactType
  public static native void mepSetFootContactType(long lpjFbxCharacter, int lpEFootContactType);
  /// FbxPropertyT< EFootContactType >  FootContactType
  public static native int mepGetFootContactType(long lpjFbxCharacter);
  /// FbxPropertyT< EFootContactType >  FootContactType
  public static native long mptGetFootContactType(long lpjFbxCharacter);
  /// FbxPropertyT< EFingerContactMode >  FootFingerContactMode
  public static native void mepSetFootFingerContactMode(long lpjFbxCharacter, int lpEFingerContactMode);
  /// FbxPropertyT< EFingerContactMode >  FootFingerContactMode
  public static native int mepGetFootFingerContactMode(long lpjFbxCharacter);
  /// FbxPropertyT< EFingerContactMode >  FootFingerContactMode
  public static native long mptGetFootFingerContactMode(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  FootContactStiffness
  public static native void mepSetFootContactStiffness(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  FootContactStiffness
  public static native double mepGetFootContactStiffness(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  FootContactStiffness
  public static native long mptGetFootContactStiffness(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  FootFingerContactRollStiffness
  public static native void mepSetFootFingerContactRollStiffness(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  FootFingerContactRollStiffness
  public static native double mepGetFootFingerContactRollStiffness(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  FootFingerContactRollStiffness
  public static native long mptGetFootFingerContactRollStiffness(long lpjFbxCharacter);
  /// FbxPropertyT< FbxBool >  HandFloorContact
  public static native void mepSetHandFloorContact(long lpjFbxCharacter, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  HandFloorContact
  public static native boolean mepGetHandFloorContact(long lpjFbxCharacter);
  /// FbxPropertyT< FbxBool >  HandFloorContact
  public static native long mptGetHandFloorContact(long lpjFbxCharacter);
  /// FbxPropertyT< FbxBool >  HandAutomaticFingers
  public static native void mepSetHandAutomaticFingers(long lpjFbxCharacter, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  HandAutomaticFingers
  public static native boolean mepGetHandAutomaticFingers(long lpjFbxCharacter);
  /// FbxPropertyT< FbxBool >  HandAutomaticFingers
  public static native long mptGetHandAutomaticFingers(long lpjFbxCharacter);
  /// FbxPropertyT< EFloorPivot >  HandFloorPivot
  public static native void mepSetHandFloorPivot(long lpjFbxCharacter, int lpEFloorPivot);
  /// FbxPropertyT< EFloorPivot >  HandFloorPivot
  public static native int mepGetHandFloorPivot(long lpjFbxCharacter);
  /// FbxPropertyT< EFloorPivot >  HandFloorPivot
  public static native long mptGetHandFloorPivot(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  HandBottomToWrist
  public static native void mepSetHandBottomToWrist(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  HandBottomToWrist
  public static native double mepGetHandBottomToWrist(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  HandBottomToWrist
  public static native long mptGetHandBottomToWrist(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  HandBackToWrist
  public static native void mepSetHandBackToWrist(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  HandBackToWrist
  public static native double mepGetHandBackToWrist(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  HandBackToWrist
  public static native long mptGetHandBackToWrist(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  HandMiddleToWrist
  public static native void mepSetHandMiddleToWrist(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  HandMiddleToWrist
  public static native double mepGetHandMiddleToWrist(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  HandMiddleToWrist
  public static native long mptGetHandMiddleToWrist(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  HandFrontToMiddle
  public static native void mepSetHandFrontToMiddle(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  HandFrontToMiddle
  public static native double mepGetHandFrontToMiddle(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  HandFrontToMiddle
  public static native long mptGetHandFrontToMiddle(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  HandInToWrist
  public static native void mepSetHandInToWrist(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  HandInToWrist
  public static native double mepGetHandInToWrist(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  HandInToWrist
  public static native long mptGetHandInToWrist(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  HandOutToWrist
  public static native void mepSetHandOutToWrist(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  HandOutToWrist
  public static native double mepGetHandOutToWrist(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  HandOutToWrist
  public static native long mptGetHandOutToWrist(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  HandContactSize
  public static native void mepSetHandContactSize(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  HandContactSize
  public static native double mepGetHandContactSize(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  HandContactSize
  public static native long mptGetHandContactSize(long lpjFbxCharacter);
  /// FbxPropertyT< FbxBool >  HandFingerContact
  public static native void mepSetHandFingerContact(long lpjFbxCharacter, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  HandFingerContact
  public static native boolean mepGetHandFingerContact(long lpjFbxCharacter);
  /// FbxPropertyT< FbxBool >  HandFingerContact
  public static native long mptGetHandFingerContact(long lpjFbxCharacter);
  /// FbxPropertyT< EHandContactType >  HandContactType
  public static native void mepSetHandContactType(long lpjFbxCharacter, int lpEHandContactType);
  /// FbxPropertyT< EHandContactType >  HandContactType
  public static native int mepGetHandContactType(long lpjFbxCharacter);
  /// FbxPropertyT< EHandContactType >  HandContactType
  public static native long mptGetHandContactType(long lpjFbxCharacter);
  /// FbxPropertyT< EFingerContactMode >  HandFingerContactMode
  public static native void mepSetHandFingerContactMode(long lpjFbxCharacter, int lpEFingerContactMode);
  /// FbxPropertyT< EFingerContactMode >  HandFingerContactMode
  public static native int mepGetHandFingerContactMode(long lpjFbxCharacter);
  /// FbxPropertyT< EFingerContactMode >  HandFingerContactMode
  public static native long mptGetHandFingerContactMode(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  HandContactStiffness
  public static native void mepSetHandContactStiffness(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  HandContactStiffness
  public static native double mepGetHandContactStiffness(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  HandContactStiffness
  public static native long mptGetHandContactStiffness(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  HandFingerContactRollStiffness
  public static native void mepSetHandFingerContactRollStiffness(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  HandFingerContactRollStiffness
  public static native double mepGetHandFingerContactRollStiffness(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  HandFingerContactRollStiffness
  public static native long mptGetHandFingerContactRollStiffness(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  LeftHandThumbTip
  public static native void mepSetLeftHandThumbTip(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  LeftHandThumbTip
  public static native double mepGetLeftHandThumbTip(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  LeftHandThumbTip
  public static native long mptGetLeftHandThumbTip(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  LeftHandIndexTip
  public static native void mepSetLeftHandIndexTip(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  LeftHandIndexTip
  public static native double mepGetLeftHandIndexTip(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  LeftHandIndexTip
  public static native long mptGetLeftHandIndexTip(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  LeftHandMiddleTip
  public static native void mepSetLeftHandMiddleTip(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  LeftHandMiddleTip
  public static native double mepGetLeftHandMiddleTip(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  LeftHandMiddleTip
  public static native long mptGetLeftHandMiddleTip(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  LeftHandRingTip
  public static native void mepSetLeftHandRingTip(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  LeftHandRingTip
  public static native double mepGetLeftHandRingTip(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  LeftHandRingTip
  public static native long mptGetLeftHandRingTip(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  LeftHandPinkyTip
  public static native void mepSetLeftHandPinkyTip(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  LeftHandPinkyTip
  public static native double mepGetLeftHandPinkyTip(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  LeftHandPinkyTip
  public static native long mptGetLeftHandPinkyTip(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  LeftHandExtraFingerTip
  public static native void mepSetLeftHandExtraFingerTip(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  LeftHandExtraFingerTip
  public static native double mepGetLeftHandExtraFingerTip(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  LeftHandExtraFingerTip
  public static native long mptGetLeftHandExtraFingerTip(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  RightHandThumbTip
  public static native void mepSetRightHandThumbTip(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  RightHandThumbTip
  public static native double mepGetRightHandThumbTip(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  RightHandThumbTip
  public static native long mptGetRightHandThumbTip(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  RightHandIndexTip
  public static native void mepSetRightHandIndexTip(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  RightHandIndexTip
  public static native double mepGetRightHandIndexTip(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  RightHandIndexTip
  public static native long mptGetRightHandIndexTip(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  RightHandMiddleTip
  public static native void mepSetRightHandMiddleTip(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  RightHandMiddleTip
  public static native double mepGetRightHandMiddleTip(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  RightHandMiddleTip
  public static native long mptGetRightHandMiddleTip(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  RightHandRingTip
  public static native void mepSetRightHandRingTip(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  RightHandRingTip
  public static native double mepGetRightHandRingTip(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  RightHandRingTip
  public static native long mptGetRightHandRingTip(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  RightHandPinkyTip
  public static native void mepSetRightHandPinkyTip(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  RightHandPinkyTip
  public static native double mepGetRightHandPinkyTip(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  RightHandPinkyTip
  public static native long mptGetRightHandPinkyTip(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  RightHandExtraFingerTip
  public static native void mepSetRightHandExtraFingerTip(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  RightHandExtraFingerTip
  public static native double mepGetRightHandExtraFingerTip(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  RightHandExtraFingerTip
  public static native long mptGetRightHandExtraFingerTip(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  LeftFootThumbTip
  public static native void mepSetLeftFootThumbTip(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  LeftFootThumbTip
  public static native double mepGetLeftFootThumbTip(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  LeftFootThumbTip
  public static native long mptGetLeftFootThumbTip(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  LeftFootIndexTip
  public static native void mepSetLeftFootIndexTip(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  LeftFootIndexTip
  public static native double mepGetLeftFootIndexTip(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  LeftFootIndexTip
  public static native long mptGetLeftFootIndexTip(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  LeftFootMiddleTip
  public static native void mepSetLeftFootMiddleTip(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  LeftFootMiddleTip
  public static native double mepGetLeftFootMiddleTip(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  LeftFootMiddleTip
  public static native long mptGetLeftFootMiddleTip(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  LeftFootRingTip
  public static native void mepSetLeftFootRingTip(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  LeftFootRingTip
  public static native double mepGetLeftFootRingTip(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  LeftFootRingTip
  public static native long mptGetLeftFootRingTip(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  LeftFootPinkyTip
  public static native void mepSetLeftFootPinkyTip(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  LeftFootPinkyTip
  public static native double mepGetLeftFootPinkyTip(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  LeftFootPinkyTip
  public static native long mptGetLeftFootPinkyTip(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  LeftFootExtraFingerTip
  public static native void mepSetLeftFootExtraFingerTip(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  LeftFootExtraFingerTip
  public static native double mepGetLeftFootExtraFingerTip(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  LeftFootExtraFingerTip
  public static native long mptGetLeftFootExtraFingerTip(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  RightFootThumbTip
  public static native void mepSetRightFootThumbTip(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  RightFootThumbTip
  public static native double mepGetRightFootThumbTip(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  RightFootThumbTip
  public static native long mptGetRightFootThumbTip(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  RightFootIndexTip
  public static native void mepSetRightFootIndexTip(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  RightFootIndexTip
  public static native double mepGetRightFootIndexTip(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  RightFootIndexTip
  public static native long mptGetRightFootIndexTip(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  RightFootMiddleTip
  public static native void mepSetRightFootMiddleTip(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  RightFootMiddleTip
  public static native double mepGetRightFootMiddleTip(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  RightFootMiddleTip
  public static native long mptGetRightFootMiddleTip(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  RightFootRingTip
  public static native void mepSetRightFootRingTip(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  RightFootRingTip
  public static native double mepGetRightFootRingTip(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  RightFootRingTip
  public static native long mptGetRightFootRingTip(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  RightFootPinkyTip
  public static native void mepSetRightFootPinkyTip(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  RightFootPinkyTip
  public static native double mepGetRightFootPinkyTip(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  RightFootPinkyTip
  public static native long mptGetRightFootPinkyTip(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  RightFootExtraFingerTip
  public static native void mepSetRightFootExtraFingerTip(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  RightFootExtraFingerTip
  public static native double mepGetRightFootExtraFingerTip(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  RightFootExtraFingerTip
  public static native long mptGetRightFootExtraFingerTip(long lpjFbxCharacter);
  /// FbxPropertyT< FbxBool >  FingerSolving
  public static native void mepSetFingerSolving(long lpjFbxCharacter, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  FingerSolving
  public static native boolean mepGetFingerSolving(long lpjFbxCharacter);
  /// FbxPropertyT< FbxBool >  FingerSolving
  public static native long mptGetFingerSolving(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlPullLeftToeBase
  public static native void mepSetCtrlPullLeftToeBase(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  CtrlPullLeftToeBase
  public static native double mepGetCtrlPullLeftToeBase(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlPullLeftToeBase
  public static native long mptGetCtrlPullLeftToeBase(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlPullLeftFoot
  public static native void mepSetCtrlPullLeftFoot(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  CtrlPullLeftFoot
  public static native double mepGetCtrlPullLeftFoot(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlPullLeftFoot
  public static native long mptGetCtrlPullLeftFoot(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlPullLeftKnee
  public static native void mepSetCtrlPullLeftKnee(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  CtrlPullLeftKnee
  public static native double mepGetCtrlPullLeftKnee(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlPullLeftKnee
  public static native long mptGetCtrlPullLeftKnee(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlPullRightToeBase
  public static native void mepSetCtrlPullRightToeBase(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  CtrlPullRightToeBase
  public static native double mepGetCtrlPullRightToeBase(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlPullRightToeBase
  public static native long mptGetCtrlPullRightToeBase(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlPullRightFoot
  public static native void mepSetCtrlPullRightFoot(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  CtrlPullRightFoot
  public static native double mepGetCtrlPullRightFoot(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlPullRightFoot
  public static native long mptGetCtrlPullRightFoot(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlPullRightKnee
  public static native void mepSetCtrlPullRightKnee(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  CtrlPullRightKnee
  public static native double mepGetCtrlPullRightKnee(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlPullRightKnee
  public static native long mptGetCtrlPullRightKnee(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlPullLeftFingerBase
  public static native void mepSetCtrlPullLeftFingerBase(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  CtrlPullLeftFingerBase
  public static native double mepGetCtrlPullLeftFingerBase(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlPullLeftFingerBase
  public static native long mptGetCtrlPullLeftFingerBase(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlPullLeftHand
  public static native void mepSetCtrlPullLeftHand(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  CtrlPullLeftHand
  public static native double mepGetCtrlPullLeftHand(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlPullLeftHand
  public static native long mptGetCtrlPullLeftHand(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlPullLeftElbow
  public static native void mepSetCtrlPullLeftElbow(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  CtrlPullLeftElbow
  public static native double mepGetCtrlPullLeftElbow(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlPullLeftElbow
  public static native long mptGetCtrlPullLeftElbow(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlPullRightFingerBase
  public static native void mepSetCtrlPullRightFingerBase(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  CtrlPullRightFingerBase
  public static native double mepGetCtrlPullRightFingerBase(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlPullRightFingerBase
  public static native long mptGetCtrlPullRightFingerBase(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlPullRightHand
  public static native void mepSetCtrlPullRightHand(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  CtrlPullRightHand
  public static native double mepGetCtrlPullRightHand(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlPullRightHand
  public static native long mptGetCtrlPullRightHand(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlPullRightElbow
  public static native void mepSetCtrlPullRightElbow(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  CtrlPullRightElbow
  public static native double mepGetCtrlPullRightElbow(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlPullRightElbow
  public static native long mptGetCtrlPullRightElbow(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlChestPullLeftHand
  public static native void mepSetCtrlChestPullLeftHand(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  CtrlChestPullLeftHand
  public static native double mepGetCtrlChestPullLeftHand(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlChestPullLeftHand
  public static native long mptGetCtrlChestPullLeftHand(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlChestPullRightHand
  public static native void mepSetCtrlChestPullRightHand(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  CtrlChestPullRightHand
  public static native double mepGetCtrlChestPullRightHand(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlChestPullRightHand
  public static native long mptGetCtrlChestPullRightHand(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlPullHead
  public static native void mepSetCtrlPullHead(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  CtrlPullHead
  public static native double mepGetCtrlPullHead(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlPullHead
  public static native long mptGetCtrlPullHead(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlResistHipsPosition
  public static native void mepSetCtrlResistHipsPosition(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  CtrlResistHipsPosition
  public static native double mepGetCtrlResistHipsPosition(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlResistHipsPosition
  public static native long mptGetCtrlResistHipsPosition(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlEnforceGravity
  public static native void mepSetCtrlEnforceGravity(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  CtrlEnforceGravity
  public static native double mepGetCtrlEnforceGravity(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlEnforceGravity
  public static native long mptGetCtrlEnforceGravity(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlResistHipsOrientation
  public static native void mepSetCtrlResistHipsOrientation(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  CtrlResistHipsOrientation
  public static native double mepGetCtrlResistHipsOrientation(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlResistHipsOrientation
  public static native long mptGetCtrlResistHipsOrientation(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlResistChestPosition
  public static native void mepSetCtrlResistChestPosition(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  CtrlResistChestPosition
  public static native double mepGetCtrlResistChestPosition(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlResistChestPosition
  public static native long mptGetCtrlResistChestPosition(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlResistChestOrientation
  public static native void mepSetCtrlResistChestOrientation(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  CtrlResistChestOrientation
  public static native double mepGetCtrlResistChestOrientation(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlResistChestOrientation
  public static native long mptGetCtrlResistChestOrientation(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlResistLeftCollar
  public static native void mepSetCtrlResistLeftCollar(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  CtrlResistLeftCollar
  public static native double mepGetCtrlResistLeftCollar(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlResistLeftCollar
  public static native long mptGetCtrlResistLeftCollar(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlResistRightCollar
  public static native void mepSetCtrlResistRightCollar(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  CtrlResistRightCollar
  public static native double mepGetCtrlResistRightCollar(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlResistRightCollar
  public static native long mptGetCtrlResistRightCollar(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlResistLeftKnee
  public static native void mepSetCtrlResistLeftKnee(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  CtrlResistLeftKnee
  public static native double mepGetCtrlResistLeftKnee(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlResistLeftKnee
  public static native long mptGetCtrlResistLeftKnee(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlResistMaximumExtensionLeftKnee
  public static native void mepSetCtrlResistMaximumExtensionLeftKnee(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  CtrlResistMaximumExtensionLeftKnee
  public static native double mepGetCtrlResistMaximumExtensionLeftKnee(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlResistMaximumExtensionLeftKnee
  public static native long mptGetCtrlResistMaximumExtensionLeftKnee(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlResistCompressionFactorLeftKnee
  public static native void mepSetCtrlResistCompressionFactorLeftKnee(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  CtrlResistCompressionFactorLeftKnee
  public static native double mepGetCtrlResistCompressionFactorLeftKnee(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlResistCompressionFactorLeftKnee
  public static native long mptGetCtrlResistCompressionFactorLeftKnee(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlResistRightKnee
  public static native void mepSetCtrlResistRightKnee(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  CtrlResistRightKnee
  public static native double mepGetCtrlResistRightKnee(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlResistRightKnee
  public static native long mptGetCtrlResistRightKnee(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlResistMaximumExtensionRightKnee
  public static native void mepSetCtrlResistMaximumExtensionRightKnee(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  CtrlResistMaximumExtensionRightKnee
  public static native double mepGetCtrlResistMaximumExtensionRightKnee(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlResistMaximumExtensionRightKnee
  public static native long mptGetCtrlResistMaximumExtensionRightKnee(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlResistCompressionFactorRightKnee
  public static native void mepSetCtrlResistCompressionFactorRightKnee(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  CtrlResistCompressionFactorRightKnee
  public static native double mepGetCtrlResistCompressionFactorRightKnee(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlResistCompressionFactorRightKnee
  public static native long mptGetCtrlResistCompressionFactorRightKnee(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlResistLeftElbow
  public static native void mepSetCtrlResistLeftElbow(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  CtrlResistLeftElbow
  public static native double mepGetCtrlResistLeftElbow(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlResistLeftElbow
  public static native long mptGetCtrlResistLeftElbow(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlResistMaximumExtensionLeftElbow
  public static native void mepSetCtrlResistMaximumExtensionLeftElbow(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  CtrlResistMaximumExtensionLeftElbow
  public static native double mepGetCtrlResistMaximumExtensionLeftElbow(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlResistMaximumExtensionLeftElbow
  public static native long mptGetCtrlResistMaximumExtensionLeftElbow(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlResistCompressionFactorLeftElbow
  public static native void mepSetCtrlResistCompressionFactorLeftElbow(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  CtrlResistCompressionFactorLeftElbow
  public static native double mepGetCtrlResistCompressionFactorLeftElbow(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlResistCompressionFactorLeftElbow
  public static native long mptGetCtrlResistCompressionFactorLeftElbow(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlResistRightElbow
  public static native void mepSetCtrlResistRightElbow(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  CtrlResistRightElbow
  public static native double mepGetCtrlResistRightElbow(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlResistRightElbow
  public static native long mptGetCtrlResistRightElbow(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlResistMaximumExtensionRightElbow
  public static native void mepSetCtrlResistMaximumExtensionRightElbow(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  CtrlResistMaximumExtensionRightElbow
  public static native double mepGetCtrlResistMaximumExtensionRightElbow(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlResistMaximumExtensionRightElbow
  public static native long mptGetCtrlResistMaximumExtensionRightElbow(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlResistCompressionFactorRightElbow
  public static native void mepSetCtrlResistCompressionFactorRightElbow(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  CtrlResistCompressionFactorRightElbow
  public static native double mepGetCtrlResistCompressionFactorRightElbow(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlResistCompressionFactorRightElbow
  public static native long mptGetCtrlResistCompressionFactorRightElbow(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlSpineStiffness
  public static native void mepSetCtrlSpineStiffness(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  CtrlSpineStiffness
  public static native double mepGetCtrlSpineStiffness(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlSpineStiffness
  public static native long mptGetCtrlSpineStiffness(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlNeckStiffness
  public static native void mepSetCtrlNeckStiffness(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  CtrlNeckStiffness
  public static native double mepGetCtrlNeckStiffness(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CtrlNeckStiffness
  public static native long mptGetCtrlNeckStiffness(long lpjFbxCharacter);
  /// FbxPropertyT< FbxBool >  MirrorMode
  public static native void mepSetMirrorMode(long lpjFbxCharacter, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  MirrorMode
  public static native boolean mepGetMirrorMode(long lpjFbxCharacter);
  /// FbxPropertyT< FbxBool >  MirrorMode
  public static native long mptGetMirrorMode(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  ShoulderCorrection
  public static native void mepSetShoulderCorrection(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  ShoulderCorrection
  public static native double mepGetShoulderCorrection(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  ShoulderCorrection
  public static native long mptGetShoulderCorrection(long lpjFbxCharacter);
  /// FbxPropertyT< FbxBool >  LeftKneeKillPitch
  public static native void mepSetLeftKneeKillPitch(long lpjFbxCharacter, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  LeftKneeKillPitch
  public static native boolean mepGetLeftKneeKillPitch(long lpjFbxCharacter);
  /// FbxPropertyT< FbxBool >  LeftKneeKillPitch
  public static native long mptGetLeftKneeKillPitch(long lpjFbxCharacter);
  /// FbxPropertyT< FbxBool >  RightKneeKillPitch
  public static native void mepSetRightKneeKillPitch(long lpjFbxCharacter, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  RightKneeKillPitch
  public static native boolean mepGetRightKneeKillPitch(long lpjFbxCharacter);
  /// FbxPropertyT< FbxBool >  RightKneeKillPitch
  public static native long mptGetRightKneeKillPitch(long lpjFbxCharacter);
  /// FbxPropertyT< FbxBool >  LeftElbowKillPitch
  public static native void mepSetLeftElbowKillPitch(long lpjFbxCharacter, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  LeftElbowKillPitch
  public static native boolean mepGetLeftElbowKillPitch(long lpjFbxCharacter);
  /// FbxPropertyT< FbxBool >  LeftElbowKillPitch
  public static native long mptGetLeftElbowKillPitch(long lpjFbxCharacter);
  /// FbxPropertyT< FbxBool >  RightElbowKillPitch
  public static native void mepSetRightElbowKillPitch(long lpjFbxCharacter, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  RightElbowKillPitch
  public static native boolean mepGetRightElbowKillPitch(long lpjFbxCharacter);
  /// FbxPropertyT< FbxBool >  RightElbowKillPitch
  public static native long mptGetRightElbowKillPitch(long lpjFbxCharacter);
  /// FbxPropertyT< FbxBool >  WriteReference
  public static native void mepSetWriteReference(long lpjFbxCharacter, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  WriteReference
  public static native boolean mepGetWriteReference(long lpjFbxCharacter);
  /// FbxPropertyT< FbxBool >  WriteReference
  public static native long mptGetWriteReference(long lpjFbxCharacter);
  /// FbxPropertyT< FbxBool >  SyncMode
  public static native void mepSetSyncMode(long lpjFbxCharacter, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  SyncMode
  public static native boolean mepGetSyncMode(long lpjFbxCharacter);
  /// FbxPropertyT< FbxBool >  SyncMode
  public static native long mptGetSyncMode(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  Damping
  public static native void mepSetDamping(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  Damping
  public static native double mepGetDamping(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  Damping
  public static native long mptGetDamping(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  OrientationDamping
  public static native void mepSetOrientationDamping(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  OrientationDamping
  public static native double mepGetOrientationDamping(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  OrientationDamping
  public static native long mptGetOrientationDamping(long lpjFbxCharacter);
  /// FbxPropertyT< EOffAutoUser >  OrientationDampingMode
  public static native void mepSetOrientationDampingMode(long lpjFbxCharacter, int lpEOffAutoUser);
  /// FbxPropertyT< EOffAutoUser >  OrientationDampingMode
  public static native int mepGetOrientationDampingMode(long lpjFbxCharacter);
  /// FbxPropertyT< EOffAutoUser >  OrientationDampingMode
  public static native long mptGetOrientationDampingMode(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  DisplacementDamping
  public static native void mepSetDisplacementDamping(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  DisplacementDamping
  public static native double mepGetDisplacementDamping(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  DisplacementDamping
  public static native long mptGetDisplacementDamping(long lpjFbxCharacter);
  /// FbxPropertyT< EOffAutoUser >  DisplacementDampingMode
  public static native void mepSetDisplacementDampingMode(long lpjFbxCharacter, int lpEOffAutoUser);
  /// FbxPropertyT< EOffAutoUser >  DisplacementDampingMode
  public static native int mepGetDisplacementDampingMode(long lpjFbxCharacter);
  /// FbxPropertyT< EOffAutoUser >  DisplacementDampingMode
  public static native long mptGetDisplacementDampingMode(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  DisplacementMemory
  public static native void mepSetDisplacementMemory(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  DisplacementMemory
  public static native double mepGetDisplacementMemory(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  DisplacementMemory
  public static native long mptGetDisplacementMemory(long lpjFbxCharacter);
  /// FbxPropertyT< EAutoUser >  DisplacementMemoryMode
  public static native void mepSetDisplacementMemoryMode(long lpjFbxCharacter, int lpEAutoUser);
  /// FbxPropertyT< EAutoUser >  DisplacementMemoryMode
  public static native int mepGetDisplacementMemoryMode(long lpjFbxCharacter);
  /// FbxPropertyT< EAutoUser >  DisplacementMemoryMode
  public static native long mptGetDisplacementMemoryMode(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  HipsDisplacementDamping
  public static native void mepSetHipsDisplacementDamping(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  HipsDisplacementDamping
  public static native double mepGetHipsDisplacementDamping(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  HipsDisplacementDamping
  public static native long mptGetHipsDisplacementDamping(long lpjFbxCharacter);
  /// FbxPropertyT< EAutoUser >  HipsDisplacementDampingMode
  public static native void mepSetHipsDisplacementDampingMode(long lpjFbxCharacter, int lpEAutoUser);
  /// FbxPropertyT< EAutoUser >  HipsDisplacementDampingMode
  public static native int mepGetHipsDisplacementDampingMode(long lpjFbxCharacter);
  /// FbxPropertyT< EAutoUser >  HipsDisplacementDampingMode
  public static native long mptGetHipsDisplacementDampingMode(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  AnkleDisplacementDamping
  public static native void mepSetAnkleDisplacementDamping(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  AnkleDisplacementDamping
  public static native double mepGetAnkleDisplacementDamping(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  AnkleDisplacementDamping
  public static native long mptGetAnkleDisplacementDamping(long lpjFbxCharacter);
  /// FbxPropertyT< EAutoUser >  AnkleDisplacementDampingMode
  public static native void mepSetAnkleDisplacementDampingMode(long lpjFbxCharacter, int lpEAutoUser);
  /// FbxPropertyT< EAutoUser >  AnkleDisplacementDampingMode
  public static native int mepGetAnkleDisplacementDampingMode(long lpjFbxCharacter);
  /// FbxPropertyT< EAutoUser >  AnkleDisplacementDampingMode
  public static native long mptGetAnkleDisplacementDampingMode(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  WristDisplacementDamping
  public static native void mepSetWristDisplacementDamping(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  WristDisplacementDamping
  public static native double mepGetWristDisplacementDamping(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  WristDisplacementDamping
  public static native long mptGetWristDisplacementDamping(long lpjFbxCharacter);
  /// FbxPropertyT< EAutoUser >  WristDisplacementDampingMode
  public static native void mepSetWristDisplacementDampingMode(long lpjFbxCharacter, int lpEAutoUser);
  /// FbxPropertyT< EAutoUser >  WristDisplacementDampingMode
  public static native int mepGetWristDisplacementDampingMode(long lpjFbxCharacter);
  /// FbxPropertyT< EAutoUser >  WristDisplacementDampingMode
  public static native long mptGetWristDisplacementDampingMode(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  Stabilization
  public static native void mepSetStabilization(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  Stabilization
  public static native double mepGetStabilization(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  Stabilization
  public static native long mptGetStabilization(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  AnkleStabilizationTime
  public static native void mepSetAnkleStabilizationTime(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  AnkleStabilizationTime
  public static native double mepGetAnkleStabilizationTime(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  AnkleStabilizationTime
  public static native long mptGetAnkleStabilizationTime(long lpjFbxCharacter);
  /// FbxPropertyT< EAutoUser >  AnkleStabilizationTimeMode
  public static native void mepSetAnkleStabilizationTimeMode(long lpjFbxCharacter, int lpEAutoUser);
  /// FbxPropertyT< EAutoUser >  AnkleStabilizationTimeMode
  public static native int mepGetAnkleStabilizationTimeMode(long lpjFbxCharacter);
  /// FbxPropertyT< EAutoUser >  AnkleStabilizationTimeMode
  public static native long mptGetAnkleStabilizationTimeMode(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  AnkleStabilizationPerimeter
  public static native void mepSetAnkleStabilizationPerimeter(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  AnkleStabilizationPerimeter
  public static native double mepGetAnkleStabilizationPerimeter(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  AnkleStabilizationPerimeter
  public static native long mptGetAnkleStabilizationPerimeter(long lpjFbxCharacter);
  /// FbxPropertyT< EAutoUser >  AnkleStabilizationPerimeterMode
  public static native void mepSetAnkleStabilizationPerimeterMode(long lpjFbxCharacter, int lpEAutoUser);
  /// FbxPropertyT< EAutoUser >  AnkleStabilizationPerimeterMode
  public static native int mepGetAnkleStabilizationPerimeterMode(long lpjFbxCharacter);
  /// FbxPropertyT< EAutoUser >  AnkleStabilizationPerimeterMode
  public static native long mptGetAnkleStabilizationPerimeterMode(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  AnkleStabilizationAngularPerimeter
  public static native void mepSetAnkleStabilizationAngularPerimeter(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  AnkleStabilizationAngularPerimeter
  public static native double mepGetAnkleStabilizationAngularPerimeter(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  AnkleStabilizationAngularPerimeter
  public static native long mptGetAnkleStabilizationAngularPerimeter(long lpjFbxCharacter);
  /// FbxPropertyT< EOffAutoUser >  AnkleStabilizationAngularPerimeterMode
  public static native void mepSetAnkleStabilizationAngularPerimeterMode(long lpjFbxCharacter, int lpEOffAutoUser);
  /// FbxPropertyT< EOffAutoUser >  AnkleStabilizationAngularPerimeterMode
  public static native int mepGetAnkleStabilizationAngularPerimeterMode(long lpjFbxCharacter);
  /// FbxPropertyT< EOffAutoUser >  AnkleStabilizationAngularPerimeterMode
  public static native long mptGetAnkleStabilizationAngularPerimeterMode(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  AnkleStabilizationFloorProximity
  public static native void mepSetAnkleStabilizationFloorProximity(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  AnkleStabilizationFloorProximity
  public static native double mepGetAnkleStabilizationFloorProximity(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  AnkleStabilizationFloorProximity
  public static native long mptGetAnkleStabilizationFloorProximity(long lpjFbxCharacter);
  /// FbxPropertyT< EOffAutoUser >  AnkleStabilizationFloorProximityMode
  public static native void mepSetAnkleStabilizationFloorProximityMode(long lpjFbxCharacter, int lpEOffAutoUser);
  /// FbxPropertyT< EOffAutoUser >  AnkleStabilizationFloorProximityMode
  public static native int mepGetAnkleStabilizationFloorProximityMode(long lpjFbxCharacter);
  /// FbxPropertyT< EOffAutoUser >  AnkleStabilizationFloorProximityMode
  public static native long mptGetAnkleStabilizationFloorProximityMode(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  AnkleStabilizationDamping
  public static native void mepSetAnkleStabilizationDamping(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  AnkleStabilizationDamping
  public static native double mepGetAnkleStabilizationDamping(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  AnkleStabilizationDamping
  public static native long mptGetAnkleStabilizationDamping(long lpjFbxCharacter);
  /// FbxPropertyT< EOffAutoUser >  AnkleStabilizationDampingMode
  public static native void mepSetAnkleStabilizationDampingMode(long lpjFbxCharacter, int lpEOffAutoUser);
  /// FbxPropertyT< EOffAutoUser >  AnkleStabilizationDampingMode
  public static native int mepGetAnkleStabilizationDampingMode(long lpjFbxCharacter);
  /// FbxPropertyT< EOffAutoUser >  AnkleStabilizationDampingMode
  public static native long mptGetAnkleStabilizationDampingMode(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  AnkleStabilizationRecoveryTime
  public static native void mepSetAnkleStabilizationRecoveryTime(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  AnkleStabilizationRecoveryTime
  public static native double mepGetAnkleStabilizationRecoveryTime(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  AnkleStabilizationRecoveryTime
  public static native long mptGetAnkleStabilizationRecoveryTime(long lpjFbxCharacter);
  /// FbxPropertyT< EOffAutoUser >  AnkleStabilizationRecoveryTimeMode
  public static native void mepSetAnkleStabilizationRecoveryTimeMode(long lpjFbxCharacter, int lpEOffAutoUser);
  /// FbxPropertyT< EOffAutoUser >  AnkleStabilizationRecoveryTimeMode
  public static native int mepGetAnkleStabilizationRecoveryTimeMode(long lpjFbxCharacter);
  /// FbxPropertyT< EOffAutoUser >  AnkleStabilizationRecoveryTimeMode
  public static native long mptGetAnkleStabilizationRecoveryTimeMode(long lpjFbxCharacter);
  /// FbxPropertyT< FbxReference >  SourceObject
  public static native void mepSetSourceObject(long lpjFbxCharacter, long lpFbxReference);
  /// FbxPropertyT< FbxReference >  SourceObject
  public static native long mepGetSourceObject(long lpjFbxCharacter);
  /// FbxPropertyT< FbxReference >  SourceObject
  public static native long mptGetSourceObject(long lpjFbxCharacter);
  /// FbxPropertyT< FbxReference >  DestinationObject
  public static native void mepSetDestinationObject(long lpjFbxCharacter, long lpFbxReference);
  /// FbxPropertyT< FbxReference >  DestinationObject
  public static native long mepGetDestinationObject(long lpjFbxCharacter);
  /// FbxPropertyT< FbxReference >  DestinationObject
  public static native long mptGetDestinationObject(long lpjFbxCharacter);
  /// FbxPropertyT< FbxReference >  Actor
  public static native void mepSetActor(long lpjFbxCharacter, long lpFbxReference);
  /// FbxPropertyT< FbxReference >  Actor
  public static native long mepGetActor(long lpjFbxCharacter);
  /// FbxPropertyT< FbxReference >  Actor
  public static native long mptGetActor(long lpjFbxCharacter);
  /// FbxPropertyT< FbxReference >  Character
  public static native void mepSetCharacter(long lpjFbxCharacter, long lpFbxReference);
  /// FbxPropertyT< FbxReference >  Character
  public static native long mepGetCharacter(long lpjFbxCharacter);
  /// FbxPropertyT< FbxReference >  Character
  public static native long mptGetCharacter(long lpjFbxCharacter);
  /// FbxPropertyT< FbxReference >  ControlSet
  public static native void mepSetControlSet(long lpjFbxCharacter, long lpFbxReference);
  /// FbxPropertyT< FbxReference >  ControlSet
  public static native long mepGetControlSet(long lpjFbxCharacter);
  /// FbxPropertyT< FbxReference >  ControlSet
  public static native long mptGetControlSet(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  HikVersion
  public static native void mepSetHikVersion(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  HikVersion
  public static native double mepGetHikVersion(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  HikVersion
  public static native long mptGetHikVersion(long lpjFbxCharacter);
  /// FbxPropertyT< FbxBool >  Characterize
  public static native void mepSetCharacterize(long lpjFbxCharacter, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  Characterize
  public static native boolean mepGetCharacterize(long lpjFbxCharacter);
  /// FbxPropertyT< FbxBool >  Characterize
  public static native long mptGetCharacterize(long lpjFbxCharacter);
  /// FbxPropertyT< FbxBool >  LockXForm
  public static native void mepSetLockXForm(long lpjFbxCharacter, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  LockXForm
  public static native boolean mepGetLockXForm(long lpjFbxCharacter);
  /// FbxPropertyT< FbxBool >  LockXForm
  public static native long mptGetLockXForm(long lpjFbxCharacter);
  /// FbxPropertyT< FbxBool >  LockPick
  public static native void mepSetLockPick(long lpjFbxCharacter, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  LockPick
  public static native boolean mepGetLockPick(long lpjFbxCharacter);
  /// FbxPropertyT< FbxBool >  LockPick
  public static native long mptGetLockPick(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  RealisticShoulder
  public static native void mepSetRealisticShoulder(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  RealisticShoulder
  public static native double mepGetRealisticShoulder(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  RealisticShoulder
  public static native long mptGetRealisticShoulder(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CollarStiffnessX
  public static native void mepSetCollarStiffnessX(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  CollarStiffnessX
  public static native double mepGetCollarStiffnessX(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CollarStiffnessX
  public static native long mptGetCollarStiffnessX(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CollarStiffnessY
  public static native void mepSetCollarStiffnessY(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  CollarStiffnessY
  public static native double mepGetCollarStiffnessY(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CollarStiffnessY
  public static native long mptGetCollarStiffnessY(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CollarStiffnessZ
  public static native void mepSetCollarStiffnessZ(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  CollarStiffnessZ
  public static native double mepGetCollarStiffnessZ(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  CollarStiffnessZ
  public static native long mptGetCollarStiffnessZ(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  ExtraCollarRatio
  public static native void mepSetExtraCollarRatio(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  ExtraCollarRatio
  public static native double mepGetExtraCollarRatio(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  ExtraCollarRatio
  public static native long mptGetExtraCollarRatio(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  LeftLegMaxExtensionAngle
  public static native void mepSetLeftLegMaxExtensionAngle(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  LeftLegMaxExtensionAngle
  public static native double mepGetLeftLegMaxExtensionAngle(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  LeftLegMaxExtensionAngle
  public static native long mptGetLeftLegMaxExtensionAngle(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  RightLegMaxExtensionAngle
  public static native void mepSetRightLegMaxExtensionAngle(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  RightLegMaxExtensionAngle
  public static native double mepGetRightLegMaxExtensionAngle(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  RightLegMaxExtensionAngle
  public static native long mptGetRightLegMaxExtensionAngle(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  LeftArmMaxExtensionAngle
  public static native void mepSetLeftArmMaxExtensionAngle(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  LeftArmMaxExtensionAngle
  public static native double mepGetLeftArmMaxExtensionAngle(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  LeftArmMaxExtensionAngle
  public static native long mptGetLeftArmMaxExtensionAngle(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  RightArmMaxExtensionAngle
  public static native void mepSetRightArmMaxExtensionAngle(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  RightArmMaxExtensionAngle
  public static native double mepGetRightArmMaxExtensionAngle(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  RightArmMaxExtensionAngle
  public static native long mptGetRightArmMaxExtensionAngle(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  StretchStartArmsAndLegs
  public static native void mepSetStretchStartArmsAndLegs(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  StretchStartArmsAndLegs
  public static native double mepGetStretchStartArmsAndLegs(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  StretchStartArmsAndLegs
  public static native long mptGetStretchStartArmsAndLegs(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  StretchStopArmsAndLegs
  public static native void mepSetStretchStopArmsAndLegs(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  StretchStopArmsAndLegs
  public static native double mepGetStretchStopArmsAndLegs(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  StretchStopArmsAndLegs
  public static native long mptGetStretchStopArmsAndLegs(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  SnSScaleArmsAndLegs
  public static native void mepSetSnSScaleArmsAndLegs(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  SnSScaleArmsAndLegs
  public static native double mepGetSnSScaleArmsAndLegs(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  SnSScaleArmsAndLegs
  public static native long mptGetSnSScaleArmsAndLegs(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  SnSReachLeftWrist
  public static native void mepSetSnSReachLeftWrist(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  SnSReachLeftWrist
  public static native double mepGetSnSReachLeftWrist(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  SnSReachLeftWrist
  public static native long mptGetSnSReachLeftWrist(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  SnSReachRightWrist
  public static native void mepSetSnSReachRightWrist(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  SnSReachRightWrist
  public static native double mepGetSnSReachRightWrist(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  SnSReachRightWrist
  public static native long mptGetSnSReachRightWrist(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  SnSReachLeftAnkle
  public static native void mepSetSnSReachLeftAnkle(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  SnSReachLeftAnkle
  public static native double mepGetSnSReachLeftAnkle(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  SnSReachLeftAnkle
  public static native long mptGetSnSReachLeftAnkle(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  SnSReachRightAnkle
  public static native void mepSetSnSReachRightAnkle(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  SnSReachRightAnkle
  public static native double mepGetSnSReachRightAnkle(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  SnSReachRightAnkle
  public static native long mptGetSnSReachRightAnkle(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  SnSScaleSpine
  public static native void mepSetSnSScaleSpine(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  SnSScaleSpine
  public static native double mepGetSnSScaleSpine(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  SnSScaleSpine
  public static native long mptGetSnSScaleSpine(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  SnSScaleSpineChildren
  public static native void mepSetSnSScaleSpineChildren(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  SnSScaleSpineChildren
  public static native double mepGetSnSScaleSpineChildren(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  SnSScaleSpineChildren
  public static native long mptGetSnSScaleSpineChildren(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  SnSSpineFreedom
  public static native void mepSetSnSSpineFreedom(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  SnSSpineFreedom
  public static native double mepGetSnSSpineFreedom(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  SnSSpineFreedom
  public static native long mptGetSnSSpineFreedom(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  SnSReachChestEnd
  public static native void mepSetSnSReachChestEnd(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  SnSReachChestEnd
  public static native double mepGetSnSReachChestEnd(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  SnSReachChestEnd
  public static native long mptGetSnSReachChestEnd(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  SnSScaleNeck
  public static native void mepSetSnSScaleNeck(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  SnSScaleNeck
  public static native double mepGetSnSScaleNeck(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  SnSScaleNeck
  public static native long mptGetSnSScaleNeck(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  SnSNeckFreedom
  public static native void mepSetSnSNeckFreedom(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  SnSNeckFreedom
  public static native double mepGetSnSNeckFreedom(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  SnSNeckFreedom
  public static native long mptGetSnSNeckFreedom(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  SnSReachHead
  public static native void mepSetSnSReachHead(long lpjFbxCharacter, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  SnSReachHead
  public static native double mepGetSnSReachHead(long lpjFbxCharacter);
  /// FbxPropertyT< FbxDouble >  SnSReachHead
  public static native long mptGetSnSReachHead(long lpjFbxCharacter);
  /// FbxCharacter * Create( FbxConstraint* lpFbxConstraint,  const char* pName )
  public static native long Create(   long lpFbxConstraint, String pName);
}
