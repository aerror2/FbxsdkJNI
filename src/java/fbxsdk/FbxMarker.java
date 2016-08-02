//copyright by aerror 2016 
package fbxsdk;
//26 133 FbxMarker  --------------------
public class FbxMarker  {
  public    class   EType  {
   public static final int eStandard = 0;
   public static final int eOptical = 1;
   public static final int eEffectorFK = 2;
   public static final int eEffectorIK = 3;
}
  public    class   ELook  {
   public static final int eCube = 0;
   public static final int eHardCross = 1;
   public static final int eLightCross = 2;
   public static final int eSphere = 3;
   public static final int eCapsule = 4;
   public static final int eBox = 5;
   public static final int eBone = 6;
   public static final int eCircle = 7;
   public static final int eSquare = 8;
   public static final int eStick = 9;
   public static final int eNone = 10;
}
  /// virtual FbxNodeAttribute::EType  GetAttributeType () const
  public static native int GetAttributeType(long lpjFbxMarker);
  /// void  Reset ()
  public static native void Reset(long lpjFbxMarker);
  /// void  SetType (EType pType)
  public static native void SetType(long lpjFbxMarker, int pType);
  /// EType  GetType () const
  public static native int GetType(long lpjFbxMarker);
  /// FbxProperty  GetOcclusion () const
  public static native long GetOcclusion(long lpjFbxMarker);
  /// FbxProperty  GetIKReachTranslation () const
  public static native long GetIKReachTranslation(long lpjFbxMarker);
  /// FbxProperty  GetIKReachRotation () const
  public static native long GetIKReachRotation(long lpjFbxMarker);
  /// FbxProperty  GetIKPull () const
  public static native long GetIKPull(long lpjFbxMarker);
  /// FbxProperty  GetIKPullHips () const
  public static native long GetIKPullHips(long lpjFbxMarker);
  /// double  GetDefaultOcclusion () const
  public static native double GetDefaultOcclusion(long lpjFbxMarker);
  /// void  SetDefaultOcclusion (double pOcclusion)
  public static native void SetDefaultOcclusion(long lpjFbxMarker, double pOcclusion);
  /// double  GetDefaultIKReachTranslation () const
  public static native double GetDefaultIKReachTranslation(long lpjFbxMarker);
  /// void  SetDefaultIKReachTranslation (double pIKReachTranslation)
  public static native void SetDefaultIKReachTranslation(long lpjFbxMarker, double pIKReachTranslation);
  /// double  GetDefaultIKReachRotation () const
  public static native double GetDefaultIKReachRotation(long lpjFbxMarker);
  /// void  SetDefaultIKReachRotation (double pIKReachRotation)
  public static native void SetDefaultIKReachRotation(long lpjFbxMarker, double pIKReachRotation);
  /// double  GetDefaultIKPull () const
  public static native double GetDefaultIKPull(long lpjFbxMarker);
  /// void  SetDefaultIKPull (double pIKPull)
  public static native void SetDefaultIKPull(long lpjFbxMarker, double pIKPull);
  /// double  GetDefaultIKPullHips () const
  public static native double GetDefaultIKPullHips(long lpjFbxMarker);
  /// void  SetDefaultIKPullHips (double pIKPullHips)
  public static native void SetDefaultIKPullHips(long lpjFbxMarker, double pIKPullHips);
  /// FbxColor &  GetDefaultColor (FbxColor &pColor) const
  public static native long GetDefaultColor(long lpjFbxMarker, Long pColor);
  /// void  SetDefaultColor (FbxColor &pColor)
  public static native void SetDefaultColor(long lpjFbxMarker, Long pColor);
  /// FbxPropertyT< ELook >  Look
  public static native void mepSetLook(long lpjFbxMarker, int lpELook);
  /// FbxPropertyT< ELook >  Look
  public static native int mepGetLook(long lpjFbxMarker);
  /// FbxPropertyT< ELook >  Look
  public static native long mptGetLook(long lpjFbxMarker);
  /// FbxPropertyT< FbxBool >  DrawLink
  public static native void mepSetDrawLink(long lpjFbxMarker, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  DrawLink
  public static native boolean mepGetDrawLink(long lpjFbxMarker);
  /// FbxPropertyT< FbxBool >  DrawLink
  public static native long mptGetDrawLink(long lpjFbxMarker);
  /// FbxPropertyT< FbxDouble >  Size
  public static native void mepSetSize(long lpjFbxMarker, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  Size
  public static native double mepGetSize(long lpjFbxMarker);
  /// FbxPropertyT< FbxDouble >  Size
  public static native long mptGetSize(long lpjFbxMarker);
  /// FbxPropertyT< FbxBool >  ShowLabel
  public static native void mepSetShowLabel(long lpjFbxMarker, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  ShowLabel
  public static native boolean mepGetShowLabel(long lpjFbxMarker);
  /// FbxPropertyT< FbxBool >  ShowLabel
  public static native long mptGetShowLabel(long lpjFbxMarker);
  /// FbxPropertyT< FbxDouble3 >  IKPivot
  public static native void mepSetIKPivot(long lpjFbxMarker, long lpFbxDouble3);
  /// FbxPropertyT< FbxDouble3 >  IKPivot
  public static native long mepGetIKPivot(long lpjFbxMarker);
  /// FbxPropertyT< FbxDouble3 >  IKPivot
  public static native long mptGetIKPivot(long lpjFbxMarker);
  /// FbxMarker * Create( FbxNodeAttribute* lpFbxNodeAttribute,  const char* pName )
  public static native long Create(   long lpFbxNodeAttribute, String pName);
}
