package fbxsdk;
//26 80 FbxAnimCurveFilterKeyReducer  --------------------
public class FbxAnimCurveFilterKeyReducer  {
  /// FbxAnimCurveFilterKeyReducer ()
  public static native long meCreate(  );
  /// virtual  ~FbxAnimCurveFilterKeyReducer ()
  public static native void meDestroy(long lpjFbxAnimCurveFilterKeyReducer);
  /// virtual bool  Apply (FbxAnimCurve **pCurve, int pCount, FbxStatus *pStatus=NULL)
  public static native boolean Apply(long lpjFbxAnimCurveFilterKeyReducer, long [] pCurve, int pCount, long pStatus);
  /// virtual bool  Apply (FbxAnimCurve &pCurve, FbxStatus *pStatus=NULL)
  public static native boolean Apply1(long lpjFbxAnimCurveFilterKeyReducer, Long pCurve, long pStatus);
  /// virtual void  Reset ()
  public static native void Reset(long lpjFbxAnimCurveFilterKeyReducer);
  /// double  GetPrecision () const
  public static native double GetPrecision(long lpjFbxAnimCurveFilterKeyReducer);
  /// void  SetPrecision (double pPrecision)
  public static native void SetPrecision(long lpjFbxAnimCurveFilterKeyReducer, double pPrecision);
  /// bool  GetKeySync () const
  public static native boolean GetKeySync(long lpjFbxAnimCurveFilterKeyReducer);
  /// void  SetKeySync (bool pKeySync)
  public static native void SetKeySync(long lpjFbxAnimCurveFilterKeyReducer, boolean pKeySync);
  /// virtual bool  Apply (FbxAnimStack *pAnimStack, FbxStatus *pStatus=NULL)
  public static native boolean Apply2(long lpjFbxAnimCurveFilterKeyReducer, long pAnimStack, long pStatus);
  /// virtual bool  Apply (FbxObject *pObj, FbxAnimStack *pAnimStack, FbxStatus *pStatus=NULL)
  public static native boolean Apply3(long lpjFbxAnimCurveFilterKeyReducer, long pObj, long pAnimStack, long pStatus);
  /// virtual bool  Apply (FbxAnimCurveNode &pCurveNode, FbxStatus *pStatus=NULL)
  public static native boolean Apply4(long lpjFbxAnimCurveFilterKeyReducer, Long pCurveNode, long pStatus);
}
