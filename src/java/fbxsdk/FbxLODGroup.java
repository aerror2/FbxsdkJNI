package fbxsdk;
//26 108 FbxLODGroup  --------------------
public class FbxLODGroup  {
  public                              class   EDisplayLevel  {
   public static final int eUseLOD = 0;
   public static final int eShow = 1;
   public static final int eHide = 2;
}
  /// virtual FbxNodeAttribute::EType  GetAttributeType () const
  public static native int GetAttributeType(long lpjFbxLODGroup);
  /// int  GetNumThresholds () const
  public static native int GetNumThresholds(long lpjFbxLODGroup);
  /// bool  AddThreshold (FbxDistance pThreshValue)
  public static native boolean AddThreshold(long lpjFbxLODGroup, long pThreshValue);
  /// bool  SetThreshold (int pEl, FbxDistance pThreshValue)
  public static native boolean SetThreshold(long lpjFbxLODGroup, int pEl, long pThreshValue);
  /// bool  GetThreshold (int pEl, FbxDistance &pThreshValue) const
  public static native boolean GetThreshold(long lpjFbxLODGroup, int pEl, Long pThreshValue);
  /// int  GetNumDisplayLevels () const
  public static native int GetNumDisplayLevels(long lpjFbxLODGroup);
  /// bool  AddDisplayLevel (FbxLODGroup::EDisplayLevel pValue)
  public static native boolean AddDisplayLevel(long lpjFbxLODGroup, int pValue);
  /// bool  SetDisplayLevel (int pEl, FbxLODGroup::EDisplayLevel pValue)
  public static native boolean SetDisplayLevel(long lpjFbxLODGroup, int pEl, int pValue);
  /// bool  GetDisplayLevel (int pEl, FbxLODGroup::EDisplayLevel &pValue) const
  public static native boolean GetDisplayLevel(long lpjFbxLODGroup, int pEl, Integer pValue);
  /// FbxPropertyT< FbxBool >  MinMaxDistance
  public static native void mepSetMinMaxDistance(long lpjFbxLODGroup, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  MinMaxDistance
  public static native boolean mepGetMinMaxDistance(long lpjFbxLODGroup);
  /// FbxPropertyT< FbxBool >  MinMaxDistance
  public static native long mptGetMinMaxDistance(long lpjFbxLODGroup);
  /// FbxPropertyT< FbxDouble >  MinDistance
  public static native void mepSetMinDistance(long lpjFbxLODGroup, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  MinDistance
  public static native double mepGetMinDistance(long lpjFbxLODGroup);
  /// FbxPropertyT< FbxDouble >  MinDistance
  public static native long mptGetMinDistance(long lpjFbxLODGroup);
  /// FbxPropertyT< FbxDouble >  MaxDistance
  public static native void mepSetMaxDistance(long lpjFbxLODGroup, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  MaxDistance
  public static native double mepGetMaxDistance(long lpjFbxLODGroup);
  /// FbxPropertyT< FbxDouble >  MaxDistance
  public static native long mptGetMaxDistance(long lpjFbxLODGroup);
  /// FbxPropertyT< FbxBool >  WorldSpace
  public static native void mepSetWorldSpace(long lpjFbxLODGroup, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  WorldSpace
  public static native boolean mepGetWorldSpace(long lpjFbxLODGroup);
  /// FbxPropertyT< FbxBool >  WorldSpace
  public static native long mptGetWorldSpace(long lpjFbxLODGroup);
  /// FbxLODGroup * Create( FbxNodeAttribute* lpFbxNodeAttribute,  const char* pName )
  public static native long Create(   long lpFbxNodeAttribute, String pName);
}
