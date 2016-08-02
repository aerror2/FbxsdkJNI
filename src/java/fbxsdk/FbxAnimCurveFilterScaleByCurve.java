package fbxsdk;
//26 78 FbxAnimCurveFilterScaleByCurve  --------------------
public class FbxAnimCurveFilterScaleByCurve  {
  /// FbxAnimCurveFilterScaleByCurve ()
  public static native long meCreate(  );
  /// virtual  ~FbxAnimCurveFilterScaleByCurve ()
  public static native void meDestroy(long lpjFbxAnimCurveFilterScaleByCurve);
  /// virtual bool  Apply (FbxAnimCurveNode &pCurveNode, FbxStatus *pStatus=NULL)
  public static native boolean Apply(long lpjFbxAnimCurveFilterScaleByCurve, Long pCurveNode, long pStatus);
  /// virtual bool  Apply (FbxAnimCurve &pCurve, FbxStatus *pStatus=NULL)
  public static native boolean Apply1(long lpjFbxAnimCurveFilterScaleByCurve, Long pCurve, long pStatus);
  /// virtual void  Reset ()
  public static native void Reset(long lpjFbxAnimCurveFilterScaleByCurve);
  /// FbxAnimCurve *  GetScale () const
  public static native long GetScale(long lpjFbxAnimCurveFilterScaleByCurve);
  /// void  SetScale (FbxAnimCurve *pScale)
  public static native void SetScale(long lpjFbxAnimCurveFilterScaleByCurve, long pScale);
  /// virtual bool  Apply (FbxAnimStack *pAnimStack, FbxStatus *pStatus=NULL)
  public static native boolean Apply2(long lpjFbxAnimCurveFilterScaleByCurve, long pAnimStack, long pStatus);
  /// virtual bool  Apply (FbxObject *pObj, FbxAnimStack *pAnimStack, FbxStatus *pStatus=NULL)
  public static native boolean Apply3(long lpjFbxAnimCurveFilterScaleByCurve, long pObj, long pAnimStack, long pStatus);
  /// virtual bool  Apply (FbxAnimCurve **pCurve, int pCount, FbxStatus *pStatus=NULL)
  public static native boolean Apply4(long lpjFbxAnimCurveFilterScaleByCurve, long [] pCurve, int pCount, long pStatus);
}
