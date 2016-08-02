package fbxsdk;
//26 76 FbxAnimCurveFilterScale  --------------------
public class FbxAnimCurveFilterScale  {
  /// FbxAnimCurveFilterScale ()
  public static native long meCreate(  );
  /// virtual  ~FbxAnimCurveFilterScale ()
  public static native void meDestroy(long lpjFbxAnimCurveFilterScale);
  /// virtual bool  Apply (FbxAnimCurveNode &pCurveNode, FbxStatus *pStatus=NULL)
  public static native boolean Apply(long lpjFbxAnimCurveFilterScale, Long pCurveNode, long pStatus);
  /// virtual bool  Apply (FbxAnimCurve &pCurve, FbxStatus *pStatus=NULL)
  public static native boolean Apply1(long lpjFbxAnimCurveFilterScale, Long pCurve, long pStatus);
  /// virtual void  Reset ()
  public static native void Reset(long lpjFbxAnimCurveFilterScale);
  /// double  GetScale () const
  public static native double GetScale(long lpjFbxAnimCurveFilterScale);
  /// void  SetScale (double pScale)
  public static native void SetScale(long lpjFbxAnimCurveFilterScale, double pScale);
  /// virtual bool  Apply (FbxAnimStack *pAnimStack, FbxStatus *pStatus=NULL)
  public static native boolean Apply2(long lpjFbxAnimCurveFilterScale, long pAnimStack, long pStatus);
  /// virtual bool  Apply (FbxObject *pObj, FbxAnimStack *pAnimStack, FbxStatus *pStatus=NULL)
  public static native boolean Apply3(long lpjFbxAnimCurveFilterScale, long pObj, long pAnimStack, long pStatus);
  /// virtual bool  Apply (FbxAnimCurve **pCurve, int pCount, FbxStatus *pStatus=NULL)
  public static native boolean Apply4(long lpjFbxAnimCurveFilterScale, long [] pCurve, int pCount, long pStatus);
}
