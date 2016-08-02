//copyright by aerror 2016 
package fbxsdk;
//26 90 FbxAnimCurveFilterConstantKeyReducer  --------------------
public class FbxAnimCurveFilterConstantKeyReducer  {
  /// FbxAnimCurveFilterConstantKeyReducer ()
  public static native long meCreate(  );
  /// virtual  ~FbxAnimCurveFilterConstantKeyReducer ()
  public static native void meDestroy(long lpjFbxAnimCurveFilterConstantKeyReducer);
  /// virtual bool  Apply (FbxAnimCurveNode &pCurveNode, FbxStatus *pStatus=NULL)
  public static native boolean Apply(long lpjFbxAnimCurveFilterConstantKeyReducer, Long pCurveNode, long pStatus);
  /// virtual bool  Apply (FbxAnimCurve &pCurve, FbxStatus *pStatus=NULL)
  public static native boolean Apply1(long lpjFbxAnimCurveFilterConstantKeyReducer, Long pCurve, long pStatus);
  /// virtual void  Reset ()
  public static native void Reset(long lpjFbxAnimCurveFilterConstantKeyReducer);
  /// double  GetDerivativeTolerance () const
  public static native double GetDerivativeTolerance(long lpjFbxAnimCurveFilterConstantKeyReducer);
  /// void  SetDerivativeTolerance (double pValue)
  public static native void SetDerivativeTolerance(long lpjFbxAnimCurveFilterConstantKeyReducer, double pValue);
  /// double  GetValueTolerance () const
  public static native double GetValueTolerance(long lpjFbxAnimCurveFilterConstantKeyReducer);
  /// void  SetValueTolerance (double pValue)
  public static native void SetValueTolerance(long lpjFbxAnimCurveFilterConstantKeyReducer, double pValue);
  /// bool  GetKeepFirstAndLastKeys () const
  public static native boolean GetKeepFirstAndLastKeys(long lpjFbxAnimCurveFilterConstantKeyReducer);
  /// void  SetKeepFirstAndLastKeys (bool pKeepFirstAndLastKeys)
  public static native void SetKeepFirstAndLastKeys(long lpjFbxAnimCurveFilterConstantKeyReducer, boolean pKeepFirstAndLastKeys);
  /// bool  GetKeepOneKey () const
  public static native boolean GetKeepOneKey(long lpjFbxAnimCurveFilterConstantKeyReducer);
  /// void  SetKeepOneKey (bool pKeepOneKey)
  public static native void SetKeepOneKey(long lpjFbxAnimCurveFilterConstantKeyReducer, boolean pKeepOneKey);
  /// void  SetKeepNotPureAutoKeys (bool pKeep)
  public static native void SetKeepNotPureAutoKeys(long lpjFbxAnimCurveFilterConstantKeyReducer, boolean pKeep);
  /// virtual bool  Apply (FbxAnimStack *pAnimStack, FbxStatus *pStatus=NULL)
  public static native boolean Apply2(long lpjFbxAnimCurveFilterConstantKeyReducer, long pAnimStack, long pStatus);
  /// virtual bool  Apply (FbxObject *pObj, FbxAnimStack *pAnimStack, FbxStatus *pStatus=NULL)
  public static native boolean Apply3(long lpjFbxAnimCurveFilterConstantKeyReducer, long pObj, long pAnimStack, long pStatus);
  /// virtual bool  Apply (FbxAnimCurve **pCurve, int pCount, FbxStatus *pStatus=NULL)
  public static native boolean Apply4(long lpjFbxAnimCurveFilterConstantKeyReducer, long [] pCurve, int pCount, long pStatus);
}
