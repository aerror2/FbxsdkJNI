//copyright by aerror 2016 
package fbxsdk;
//26 84 FbxAnimCurveFilterResample  --------------------
public class FbxAnimCurveFilterResample  {
  /// FbxAnimCurveFilterResample ()
  public static native long meCreate(  );
  /// virtual  ~FbxAnimCurveFilterResample ()
  public static native void meDestroy(long lpjFbxAnimCurveFilterResample);
  /// virtual bool  Apply (FbxAnimCurve &pCurve, FbxStatus *pStatus=NULL)
  public static native boolean Apply(long lpjFbxAnimCurveFilterResample, Long pCurve, long pStatus);
  /// virtual void  Reset ()
  public static native void Reset(long lpjFbxAnimCurveFilterResample);
  /// void  SetKeysOnFrame (bool pKeysOnFrame)
  public static native void SetKeysOnFrame(long lpjFbxAnimCurveFilterResample, boolean pKeysOnFrame);
  /// bool  GetKeysOnFrame () const
  public static native boolean GetKeysOnFrame(long lpjFbxAnimCurveFilterResample);
  /// FbxTime  GetPeriodTime () const
  public static native long GetPeriodTime(long lpjFbxAnimCurveFilterResample);
  /// void  SetPeriodTime (FbxTime &pPeriod)
  public static native void SetPeriodTime(long lpjFbxAnimCurveFilterResample, Long pPeriod);
  /// bool  GetIntelligentMode () const
  public static native boolean GetIntelligentMode(long lpjFbxAnimCurveFilterResample);
  /// void  SetIntelligentMode (bool pIntelligent)
  public static native void SetIntelligentMode(long lpjFbxAnimCurveFilterResample, boolean pIntelligent);
  /// virtual bool  Apply (FbxAnimStack *pAnimStack, FbxStatus *pStatus=NULL)
  public static native boolean Apply1(long lpjFbxAnimCurveFilterResample, long pAnimStack, long pStatus);
  /// virtual bool  Apply (FbxObject *pObj, FbxAnimStack *pAnimStack, FbxStatus *pStatus=NULL)
  public static native boolean Apply2(long lpjFbxAnimCurveFilterResample, long pObj, long pAnimStack, long pStatus);
  /// virtual bool  Apply (FbxAnimCurveNode &pCurveNode, FbxStatus *pStatus=NULL)
  public static native boolean Apply3(long lpjFbxAnimCurveFilterResample, Long pCurveNode, long pStatus);
  /// virtual bool  Apply (FbxAnimCurve **pCurve, int pCount, FbxStatus *pStatus=NULL)
  public static native boolean Apply4(long lpjFbxAnimCurveFilterResample, long [] pCurve, int pCount, long pStatus);
}
