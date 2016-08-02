package fbxsdk;
//26 68 FbxAnimCurveFilterScaleCompensate  --------------------
public class FbxAnimCurveFilterScaleCompensate  {
  /// FbxAnimCurveFilterScaleCompensate ()
  public static native long meCreate(  );
  /// virtual bool  Apply (FbxAnimCurve **pCurve, int pCount, FbxIOSettings &pIOS, FbxStatus *pStatus=NULL)
  public static native boolean Apply(long lpjFbxAnimCurveFilterScaleCompensate, long [] pCurve, int pCount, Long pIOS, long pStatus);
  /// virtual bool  Apply (FbxAnimCurve &pCurve, FbxStatus *pStatus=NULL)
  public static native boolean Apply1(long lpjFbxAnimCurveFilterScaleCompensate, Long pCurve, long pStatus);
  /// virtual bool  Apply (FbxAnimStack *pAnimStack, FbxStatus *pStatus=NULL)
  public static native boolean Apply2(long lpjFbxAnimCurveFilterScaleCompensate, long pAnimStack, long pStatus);
  /// virtual bool  Apply (FbxObject *pObj, FbxAnimStack *pAnimStack, FbxStatus *pStatus=NULL)
  public static native boolean Apply3(long lpjFbxAnimCurveFilterScaleCompensate, long pObj, long pAnimStack, long pStatus);
  /// virtual bool  Apply (FbxAnimCurveNode &pCurveNode, FbxStatus *pStatus=NULL)
  public static native boolean Apply4(long lpjFbxAnimCurveFilterScaleCompensate, Long pCurveNode, long pStatus);
  /// virtual bool  Apply (FbxAnimCurve **pCurve, int pCount, FbxStatus *pStatus=NULL)
  public static native boolean Apply5(long lpjFbxAnimCurveFilterScaleCompensate, long [] pCurve, int pCount, long pStatus);
  /// void meDestroy(FbxAnimCurveFilterScaleCompensate * lpFbxAnimCurveFilterScaleCompensate)
  public static native void meDestroy(long lpjFbxAnimCurveFilterScaleCompensate);
}
