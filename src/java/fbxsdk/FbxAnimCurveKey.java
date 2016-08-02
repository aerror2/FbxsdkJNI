//copyright by aerror 2016 
package fbxsdk;
//26 130 FbxAnimCurveKey  --------------------
public class FbxAnimCurveKey  {
  /// FbxAnimCurveKey ()
  public static native long meCreate(  );
  /// FbxAnimCurveKey (FbxTime pTime)
  public static native long meCreate1(   long pTime);
  /// FbxAnimCurveKey (FbxTime pTime, float pVal)
  public static native long meCreate2(   long pTime, float pVal);
  /// FbxAnimCurveKey (FbxAnimCurveKey const &pFKey)
  public static native long meCreate3(   Long pFKey);
  /// ~FbxAnimCurveKey ()
  public static native void meDestroy(long lpjFbxAnimCurveKey);
  /// FbxTime  GetTime () const
  public static native long GetTime(long lpjFbxAnimCurveKey);
  /// void  SetTime (const FbxTime &pTime)
  public static native void SetTime(long lpjFbxAnimCurveKey, Long pTime);
  /// void  Set (FbxTime pTime, float pValue)
  public static native void Set(long lpjFbxAnimCurveKey, long pTime, float pValue);
  /// void  SetTCB (FbxTime pTime, float pValue, float pData0=0.0f, float pData1=0.0f, float pData2=0.0f)
  public static native void SetTCB(long lpjFbxAnimCurveKey, long pTime, float pValue, float pData0, float pData1, float pData2);
  /// float  GetValue () const
  public static native float GetValue(long lpjFbxAnimCurveKey);
  /// void  SetValue (float pValue)
  public static native void SetValue(long lpjFbxAnimCurveKey, float pValue);
  /// FbxAnimCurveDef::EInterpolationType  GetInterpolation ()
  public static native int GetInterpolation(long lpjFbxAnimCurveKey);
  /// void  SetInterpolation (FbxAnimCurveDef::EInterpolationType pInterpolation)
  public static native void SetInterpolation(long lpjFbxAnimCurveKey, int pInterpolation);
  /// FbxAnimCurveDef::ETangentMode  GetTangentMode (bool pIncludeOverrides=false)
  public static native int GetTangentMode(long lpjFbxAnimCurveKey, boolean pIncludeOverrides);
  /// void  SetTangentMode (FbxAnimCurveDef::ETangentMode pTangentMode)
  public static native void SetTangentMode(long lpjFbxAnimCurveKey, int pTangentMode);
  /// FbxAnimCurveDef::EWeightedMode  GetTangentWeightMode () const
  public static native int GetTangentWeightMode(long lpjFbxAnimCurveKey);
  /// void  SetTangentWeightMode (FbxAnimCurveDef::EWeightedMode pTangentWeightMode, FbxAnimCurveDef::EWeightedMode pMask=FbxAnimCurveDef::eWeightedAll)
  public static native void SetTangentWeightMode(long lpjFbxAnimCurveKey, int pTangentWeightMode, int pMask);
  /// void  SetTangentWeightAndAdjustTangent (FbxAnimCurveDef::EDataIndex pIndex, double pWeight)
  public static native void SetTangentWeightAndAdjustTangent(long lpjFbxAnimCurveKey, int pIndex, double pWeight);
  /// FbxAnimCurveDef::EVelocityMode  GetTangentVelocityMode () const
  public static native int GetTangentVelocityMode(long lpjFbxAnimCurveKey);
  /// void  SetTangentVelocityMode (FbxAnimCurveDef::EVelocityMode pTangentVelocityMode, FbxAnimCurveDef::EVelocityMode pMask=FbxAnimCurveDef::eVelocityAll)
  public static native void SetTangentVelocityMode(long lpjFbxAnimCurveKey, int pTangentVelocityMode, int pMask);
  /// FbxAnimCurveDef::EConstantMode  GetConstantMode () const
  public static native int GetConstantMode(long lpjFbxAnimCurveKey);
  /// void  SetConstantMode (FbxAnimCurveDef::EConstantMode pMode)
  public static native void SetConstantMode(long lpjFbxAnimCurveKey, int pMode);
  /// float  GetDataFloat (FbxAnimCurveDef::EDataIndex pIndex) const
  public static native float GetDataFloat(long lpjFbxAnimCurveKey, int pIndex);
  /// void  SetDataFloat (FbxAnimCurveDef::EDataIndex pIndex, float pValue)
  public static native void SetDataFloat(long lpjFbxAnimCurveKey, int pIndex, float pValue);
  /// void  SetTangentVisibility (FbxAnimCurveDef::ETangentVisibility pVisibility)
  public static native void SetTangentVisibility(long lpjFbxAnimCurveKey, int pVisibility);
  /// FbxAnimCurveDef::ETangentVisibility  GetTangentVisibility () const
  public static native int GetTangentVisibility(long lpjFbxAnimCurveKey);
  /// void  SetBreak (bool pVal)
  public static native void SetBreak(long lpjFbxAnimCurveKey, boolean pVal);
  /// bool  GetBreak () const
  public static native boolean GetBreak(long lpjFbxAnimCurveKey);
  /// FbxAnimCurveKey_Impl *  GetImpl () const
  public static native long GetImpl(long lpjFbxAnimCurveKey);
}
