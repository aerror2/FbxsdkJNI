package fbxsdk;
//26 121 FbxAnimCurveFilter  --------------------
public class FbxAnimCurveFilter  {
  /// FbxAnimCurveFilter ()
  public static native long meCreate(  );
  /// virtual  ~FbxAnimCurveFilter ()
  public static native void meDestroy(long lpjFbxAnimCurveFilter);
  /// FbxTime &  GetStartTime ()
  public static native long GetStartTime(long lpjFbxAnimCurveFilter);
  /// void  SetStartTime (FbxTime &pTime)
  public static native void SetStartTime(long lpjFbxAnimCurveFilter, Long pTime);
  /// FbxTime &  GetStopTime ()
  public static native long GetStopTime(long lpjFbxAnimCurveFilter);
  /// void  SetStopTime (FbxTime &pTime)
  public static native void SetStopTime(long lpjFbxAnimCurveFilter, Long pTime);
  /// int  GetStartKey (FbxAnimCurve &pCurve) const
  public static native int GetStartKey(long lpjFbxAnimCurveFilter, Long pCurve);
  /// int  GetStopKey (FbxAnimCurve &pCurve) const
  public static native int GetStopKey(long lpjFbxAnimCurveFilter, Long pCurve);
  /// virtual bool  NeedApply (FbxAnimStack *pAnimStack, FbxStatus *pStatus=NULL)
  public static native boolean NeedApply(long lpjFbxAnimCurveFilter, long pAnimStack, long pStatus);
  /// virtual bool  NeedApply (FbxObject *pObj, FbxAnimStack *pAnimStack, FbxStatus *pStatus=NULL)
  public static native boolean NeedApply1(long lpjFbxAnimCurveFilter, long pObj, long pAnimStack, long pStatus);
  /// virtual bool  NeedApply (FbxAnimCurveNode &pCurveNode, FbxStatus *pStatus=NULL)
  public static native boolean NeedApply2(long lpjFbxAnimCurveFilter, Long pCurveNode, long pStatus);
  /// virtual bool  NeedApply (FbxAnimCurve **pCurve, int pCount, FbxStatus *pStatus=NULL)
  public static native boolean NeedApply3(long lpjFbxAnimCurveFilter, long [] pCurve, int pCount, long pStatus);
  /// virtual bool  NeedApply (FbxAnimCurve &pCurve, FbxStatus *pStatus=NULL)
  public static native boolean NeedApply4(long lpjFbxAnimCurveFilter, Long pCurve, long pStatus);
  /// virtual bool  Apply (FbxAnimStack *pAnimStack, FbxStatus *pStatus=NULL)
  public static native boolean Apply(long lpjFbxAnimCurveFilter, long pAnimStack, long pStatus);
  /// virtual bool  Apply (FbxObject *pObj, FbxAnimStack *pAnimStack, FbxStatus *pStatus=NULL)
  public static native boolean Apply1(long lpjFbxAnimCurveFilter, long pObj, long pAnimStack, long pStatus);
  /// virtual bool  Apply (FbxAnimCurveNode &pCurveNode, FbxStatus *pStatus=NULL)
  public static native boolean Apply2(long lpjFbxAnimCurveFilter, Long pCurveNode, long pStatus);
  /// virtual bool  Apply (FbxAnimCurve **pCurve, int pCount, FbxStatus *pStatus=NULL)
  public static native boolean Apply3(long lpjFbxAnimCurveFilter, long [] pCurve, int pCount, long pStatus);
  /// virtual bool  Apply (FbxAnimCurve &pCurve, FbxStatus *pStatus=NULL)=0
  public static native boolean Apply4(long lpjFbxAnimCurveFilter, Long pCurve, long pStatus);
  /// virtual void  Reset ()
  public static native void Reset(long lpjFbxAnimCurveFilter);
}
