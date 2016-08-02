//copyright by aerror 2016 
package fbxsdk;
//26 80 FbxAnimCurveFilterTSS  --------------------
public class FbxAnimCurveFilterTSS  {
  /// FbxAnimCurveFilterTSS ()
  public static native long meCreate(  );
  /// virtual  ~FbxAnimCurveFilterTSS ()
  public static native void meDestroy(long lpjFbxAnimCurveFilterTSS);
  /// virtual bool  Apply (FbxAnimCurve &pCurve, FbxStatus *pStatus=NULL)
  public static native boolean Apply(long lpjFbxAnimCurveFilterTSS, Long pCurve, long pStatus);
  /// virtual void  Reset ()
  public static native void Reset(long lpjFbxAnimCurveFilterTSS);
  /// FbxTime  GetShift () const
  public static native long GetShift(long lpjFbxAnimCurveFilterTSS);
  /// void  SetShift (FbxTime &pShift)
  public static native void SetShift(long lpjFbxAnimCurveFilterTSS, Long pShift);
  /// double  GetScale () const
  public static native double GetScale(long lpjFbxAnimCurveFilterTSS);
  /// void  SetScale (double pScale)
  public static native void SetScale(long lpjFbxAnimCurveFilterTSS, double pScale);
  /// virtual bool  Apply (FbxAnimStack *pAnimStack, FbxStatus *pStatus=NULL)
  public static native boolean Apply1(long lpjFbxAnimCurveFilterTSS, long pAnimStack, long pStatus);
  /// virtual bool  Apply (FbxObject *pObj, FbxAnimStack *pAnimStack, FbxStatus *pStatus=NULL)
  public static native boolean Apply2(long lpjFbxAnimCurveFilterTSS, long pObj, long pAnimStack, long pStatus);
  /// virtual bool  Apply (FbxAnimCurveNode &pCurveNode, FbxStatus *pStatus=NULL)
  public static native boolean Apply3(long lpjFbxAnimCurveFilterTSS, Long pCurveNode, long pStatus);
  /// virtual bool  Apply (FbxAnimCurve **pCurve, int pCount, FbxStatus *pStatus=NULL)
  public static native boolean Apply4(long lpjFbxAnimCurveFilterTSS, long [] pCurve, int pCount, long pStatus);
}
