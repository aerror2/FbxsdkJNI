package fbxsdk;
//26 87 FbxAnimCurveFilterGimbleKiller  --------------------
public class FbxAnimCurveFilterGimbleKiller  {
  /// FbxAnimCurveFilterGimbleKiller ()
  public static native long meCreate(  );
  /// virtual  ~FbxAnimCurveFilterGimbleKiller ()
  public static native void meDestroy(long lpjFbxAnimCurveFilterGimbleKiller);
  /// virtual bool  NeedApply (FbxAnimStack *pAnimStack, FbxStatus *pStatus=NULL)
  public static native boolean NeedApply(long lpjFbxAnimCurveFilterGimbleKiller, long pAnimStack, long pStatus);
  /// virtual bool  NeedApply (FbxObject *pObj, FbxAnimStack *pAnimStack, FbxStatus *pStatus=NULL)
  public static native boolean NeedApply1(long lpjFbxAnimCurveFilterGimbleKiller, long pObj, long pAnimStack, long pStatus);
  /// virtual bool  NeedApply (FbxAnimCurveNode &pCurveNode, FbxStatus *pStatus=NULL)
  public static native boolean NeedApply2(long lpjFbxAnimCurveFilterGimbleKiller, Long pCurveNode, long pStatus);
  /// virtual bool  NeedApply (FbxAnimCurve **pCurve, int pCount, FbxStatus *pStatus=NULL)
  public static native boolean NeedApply3(long lpjFbxAnimCurveFilterGimbleKiller, long [] pCurve, int pCount, long pStatus);
  /// virtual bool  NeedApply (FbxAnimCurve &pCurve, FbxStatus *pStatus=NULL)
  public static native boolean NeedApply4(long lpjFbxAnimCurveFilterGimbleKiller, Long pCurve, long pStatus);
  /// virtual bool  Apply (FbxAnimStack *pAnimStack, FbxStatus *pStatus=NULL)
  public static native boolean Apply(long lpjFbxAnimCurveFilterGimbleKiller, long pAnimStack, long pStatus);
  /// virtual bool  Apply (FbxObject *pObj, FbxAnimStack *pAnimStack, FbxStatus *pStatus=NULL)
  public static native boolean Apply1(long lpjFbxAnimCurveFilterGimbleKiller, long pObj, long pAnimStack, long pStatus);
  /// virtual bool  Apply (FbxAnimCurveNode &pCurveNode, FbxStatus *pStatus=NULL)
  public static native boolean Apply2(long lpjFbxAnimCurveFilterGimbleKiller, Long pCurveNode, long pStatus);
  /// virtual bool  Apply (FbxAnimCurve **pCurve, int pCount, FbxStatus *pStatus=NULL)
  public static native boolean Apply3(long lpjFbxAnimCurveFilterGimbleKiller, long [] pCurve, int pCount, long pStatus);
  /// virtual bool  Apply (FbxAnimCurve &pCurve, FbxStatus *pStatus=NULL)
  public static native boolean Apply4(long lpjFbxAnimCurveFilterGimbleKiller, Long pCurve, long pStatus);
  /// virtual void  Reset ()
  public static native void Reset(long lpjFbxAnimCurveFilterGimbleKiller);
  /// bool  GetApplyKeySyncFilter () const
  public static native boolean GetApplyKeySyncFilter(long lpjFbxAnimCurveFilterGimbleKiller);
  /// void  SetApplyKeySyncFilter (bool pFlag)
  public static native void SetApplyKeySyncFilter(long lpjFbxAnimCurveFilterGimbleKiller, boolean pFlag);
}
