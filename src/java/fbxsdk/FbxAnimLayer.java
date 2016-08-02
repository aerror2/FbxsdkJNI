//copyright by aerror 2016 
package fbxsdk;
//26 108 FbxAnimLayer  --------------------
public class FbxAnimLayer  {
  public                         class   EBlendMode  {
   public static final int eBlendAdditive = 0;
   public static final int eBlendOverride = 1;
   public static final int eBlendOverridePassthrough = 2;
}
  public                         class   ERotationAccumulationMode  {
   public static final int eRotationByLayer = 0;
   public static final int eRotationByChannel = 1;
}
  public                         class   EScaleAccumulationMode  {
   public static final int eScaleMultiply = 0;
   public static final int eScaleAdditive = 1;
}
  /// void  Reset ()
  public static native void Reset(long lpjFbxAnimLayer);
  /// void  SetBlendModeBypass (EFbxType pType, bool pState)
  public static native void SetBlendModeBypass(long lpjFbxAnimLayer, int pType, boolean pState);
  /// bool  GetBlendModeBypass (EFbxType pType)
  public static native boolean GetBlendModeBypass(long lpjFbxAnimLayer, int pType);
  /// FbxAnimCurveNode *  CreateCurveNode (FbxProperty &pProperty)
  public static native long CreateCurveNode(long lpjFbxAnimLayer, Long pProperty);
  /// FbxPropertyT< FbxDouble >  Weight
  public static native void mepSetWeight(long lpjFbxAnimLayer, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  Weight
  public static native double mepGetWeight(long lpjFbxAnimLayer);
  /// FbxPropertyT< FbxDouble >  Weight
  public static native long mptGetWeight(long lpjFbxAnimLayer);
  /// FbxPropertyT< FbxBool >  Mute
  public static native void mepSetMute(long lpjFbxAnimLayer, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  Mute
  public static native boolean mepGetMute(long lpjFbxAnimLayer);
  /// FbxPropertyT< FbxBool >  Mute
  public static native long mptGetMute(long lpjFbxAnimLayer);
  /// FbxPropertyT< FbxBool >  Solo
  public static native void mepSetSolo(long lpjFbxAnimLayer, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  Solo
  public static native boolean mepGetSolo(long lpjFbxAnimLayer);
  /// FbxPropertyT< FbxBool >  Solo
  public static native long mptGetSolo(long lpjFbxAnimLayer);
  /// FbxPropertyT< FbxBool >  Lock
  public static native void mepSetLock(long lpjFbxAnimLayer, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  Lock
  public static native boolean mepGetLock(long lpjFbxAnimLayer);
  /// FbxPropertyT< FbxBool >  Lock
  public static native long mptGetLock(long lpjFbxAnimLayer);
  /// FbxPropertyT< FbxDouble3 >  Color
  public static native void mepSetColor(long lpjFbxAnimLayer, long lpFbxDouble3);
  /// FbxPropertyT< FbxDouble3 >  Color
  public static native long mepGetColor(long lpjFbxAnimLayer);
  /// FbxPropertyT< FbxDouble3 >  Color
  public static native long mptGetColor(long lpjFbxAnimLayer);
  /// FbxPropertyT< FbxEnum >  BlendMode
  public static native void mepSetBlendMode(long lpjFbxAnimLayer, int lpFbxEnum);
  /// FbxPropertyT< FbxEnum >  BlendMode
  public static native int mepGetBlendMode(long lpjFbxAnimLayer);
  /// FbxPropertyT< FbxEnum >  BlendMode
  public static native long mptGetBlendMode(long lpjFbxAnimLayer);
  /// FbxPropertyT< FbxEnum >  RotationAccumulationMode
  public static native void mepSetRotationAccumulationMode(long lpjFbxAnimLayer, int lpFbxEnum);
  /// FbxPropertyT< FbxEnum >  RotationAccumulationMode
  public static native int mepGetRotationAccumulationMode(long lpjFbxAnimLayer);
  /// FbxPropertyT< FbxEnum >  RotationAccumulationMode
  public static native long mptGetRotationAccumulationMode(long lpjFbxAnimLayer);
  /// FbxPropertyT< FbxEnum >  ScaleAccumulationMode
  public static native void mepSetScaleAccumulationMode(long lpjFbxAnimLayer, int lpFbxEnum);
  /// FbxPropertyT< FbxEnum >  ScaleAccumulationMode
  public static native int mepGetScaleAccumulationMode(long lpjFbxAnimLayer);
  /// FbxPropertyT< FbxEnum >  ScaleAccumulationMode
  public static native long mptGetScaleAccumulationMode(long lpjFbxAnimLayer);
  /// FbxAnimLayer * Create( FbxCollection* lpFbxCollection,  const char* pName )
  public static native long Create(   long lpFbxCollection, String pName);
}
