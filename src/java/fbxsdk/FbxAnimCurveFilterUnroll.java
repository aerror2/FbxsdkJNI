package fbxsdk;
//26 96 FbxAnimCurveFilterUnroll  --------------------
public class FbxAnimCurveFilterUnroll  {
  /// FbxAnimCurveFilterUnroll ()
  public static native long meCreate(  );
  /// virtual  ~FbxAnimCurveFilterUnroll ()
  public static native void meDestroy(long lpjFbxAnimCurveFilterUnroll);
  /// virtual bool  NeedApply (FbxAnimStack *pAnimStack, FbxStatus *pStatus=NULL)
  public static native boolean NeedApply(long lpjFbxAnimCurveFilterUnroll, long pAnimStack, long pStatus);
  /// virtual bool  NeedApply (FbxObject *pObj, FbxAnimStack *pAnimStack, FbxStatus *pStatus=NULL)
  public static native boolean NeedApply1(long lpjFbxAnimCurveFilterUnroll, long pObj, long pAnimStack, long pStatus);
  /// virtual bool  NeedApply (FbxAnimCurveNode &pCurveNode, FbxStatus *pStatus=NULL)
  public static native boolean NeedApply2(long lpjFbxAnimCurveFilterUnroll, Long pCurveNode, long pStatus);
  /// virtual bool  NeedApply (FbxAnimCurve **pCurve, int pCount, FbxStatus *pStatus=NULL)
  public static native boolean NeedApply3(long lpjFbxAnimCurveFilterUnroll, long [] pCurve, int pCount, long pStatus);
  /// virtual bool  NeedApply (FbxAnimCurve &pCurve, FbxStatus *pStatus=NULL)
  public static native boolean NeedApply4(long lpjFbxAnimCurveFilterUnroll, Long pCurve, long pStatus);
  /// virtual bool  Apply (FbxAnimStack *pAnimStack, FbxStatus *pStatus=NULL)
  public static native boolean Apply(long lpjFbxAnimCurveFilterUnroll, long pAnimStack, long pStatus);
  /// virtual bool  Apply (FbxObject *pObj, FbxAnimStack *pAnimStack, FbxStatus *pStatus=NULL)
  public static native boolean Apply1(long lpjFbxAnimCurveFilterUnroll, long pObj, long pAnimStack, long pStatus);
  /// virtual bool  Apply (FbxAnimCurveNode &pCurveNode, FbxStatus *pStatus=NULL)
  public static native boolean Apply2(long lpjFbxAnimCurveFilterUnroll, Long pCurveNode, long pStatus);
  /// virtual bool  Apply (FbxAnimCurve **pCurve, int pCount, FbxStatus *pStatus=NULL)
  public static native boolean Apply3(long lpjFbxAnimCurveFilterUnroll, long [] pCurve, int pCount, long pStatus);
  /// virtual bool  Apply (FbxAnimCurve &pCurve, FbxStatus *pStatus=NULL)
  public static native boolean Apply4(long lpjFbxAnimCurveFilterUnroll, Long pCurve, long pStatus);
  /// virtual void  Reset ()
  public static native void Reset(long lpjFbxAnimCurveFilterUnroll);
  /// double  GetQualityTolerance () const
  public static native double GetQualityTolerance(long lpjFbxAnimCurveFilterUnroll);
  /// void  SetQualityTolerance (double pQualityTolerance)
  public static native void SetQualityTolerance(long lpjFbxAnimCurveFilterUnroll, double pQualityTolerance);
  /// bool  GetTestForPath () const
  public static native boolean GetTestForPath(long lpjFbxAnimCurveFilterUnroll);
  /// void  SetTestForPath (bool pTestForPath)
  public static native void SetTestForPath(long lpjFbxAnimCurveFilterUnroll, boolean pTestForPath);
  /// bool  GetForceAutoTangents () const
  public static native boolean GetForceAutoTangents(long lpjFbxAnimCurveFilterUnroll);
  /// void  SetForceAutoTangents (bool pForceAutoTangents)
  public static native void SetForceAutoTangents(long lpjFbxAnimCurveFilterUnroll, boolean pForceAutoTangents);
}
