//copyright by aerror 2016 
package fbxsdk;
//26 102 FbxAnimCurveKey_Impl  --------------------
public class FbxAnimCurveKey_Impl  {
  /// virtual  ~FbxAnimCurveKey_Impl ()
  public static native void meDestroy(long lpjFbxAnimCurveKey_Impl);
  /// virtual void  Set (FbxTime pTime, float pValue)=0
  public static native void Set(long lpjFbxAnimCurveKey_Impl, long pTime, float pValue);
  /// virtual void  SetTCB (FbxTime pTime, float pValue, float pData0=0.0f, float pData1=0.0f, float pData2=0.0f)=0
  public static native void SetTCB(long lpjFbxAnimCurveKey_Impl, long pTime, float pValue, float pData0, float pData1, float pData2);
  /// virtual float  GetValue () const =0
  public static native float GetValue(long lpjFbxAnimCurveKey_Impl);
  /// virtual void  SetValue (float pValue)=0
  public static native void SetValue(long lpjFbxAnimCurveKey_Impl, float pValue);
  /// FbxAnimCurveDef::EInterpolationType  GetInterpolation () const =0
  public static native int GetInterpolation(long lpjFbxAnimCurveKey_Impl);
  /// virtual void  SetInterpolation (FbxAnimCurveDef::EInterpolationType pInterpolation)=0
  public static native void SetInterpolation(long lpjFbxAnimCurveKey_Impl, int pInterpolation);
  /// FbxAnimCurveDef::ETangentMode        GetTangentMode (bool pIncludeOverrides=false) const =0
  public static native int GetTangentMode(long lpjFbxAnimCurveKey_Impl, boolean pIncludeOverrides);
  /// virtual void  SetTangentMode (FbxAnimCurveDef::ETangentMode pTangentMode)=0
  public static native void SetTangentMode(long lpjFbxAnimCurveKey_Impl, int pTangentMode);
  /// FbxAnimCurveDef::EWeightedMode       GetTangentWeightMode () const =0
  public static native int GetTangentWeightMode(long lpjFbxAnimCurveKey_Impl);
  /// virtual void  SetTangentWeightMode (FbxAnimCurveDef::EWeightedMode pTangentWeightMode, FbxAnimCurveDef::EWeightedMode pMask=FbxAnimCurveDef::eWeightedAll)=0
  public static native void SetTangentWeightMode(long lpjFbxAnimCurveKey_Impl, int pTangentWeightMode, int pMask);
  /// virtual void  SetTangentWeightAndAdjustTangent (FbxAnimCurveDef::EDataIndex pIndex, double pWeight)=0
  public static native void SetTangentWeightAndAdjustTangent(long lpjFbxAnimCurveKey_Impl, int pIndex, double pWeight);
  /// FbxAnimCurveDef::EVelocityMode       GetTangentVelocityMode () const =0
  public static native int GetTangentVelocityMode(long lpjFbxAnimCurveKey_Impl);
  /// virtual void  SetTangentVelocityMode (FbxAnimCurveDef::EVelocityMode pTangentVelocityMode, FbxAnimCurveDef::EVelocityMode pMask=FbxAnimCurveDef::eVelocityAll)=0
  public static native void SetTangentVelocityMode(long lpjFbxAnimCurveKey_Impl, int pTangentVelocityMode, int pMask);
  /// FbxAnimCurveDef::EConstantMode       GetConstantMode () const =0
  public static native int GetConstantMode(long lpjFbxAnimCurveKey_Impl);
  /// virtual void  SetConstantMode (FbxAnimCurveDef::EConstantMode pMode)=0
  public static native void SetConstantMode(long lpjFbxAnimCurveKey_Impl, int pMode);
  /// virtual float  GetDataFloat (FbxAnimCurveDef::EDataIndex pIndex) const =0
  public static native float GetDataFloat(long lpjFbxAnimCurveKey_Impl, int pIndex);
  /// virtual void  SetDataFloat (FbxAnimCurveDef::EDataIndex pIndex, float pValue)=0
  public static native void SetDataFloat(long lpjFbxAnimCurveKey_Impl, int pIndex, float pValue);
  /// virtual void  SetTangentVisibility (FbxAnimCurveDef::ETangentVisibility pVisibility)=0
  public static native void SetTangentVisibility(long lpjFbxAnimCurveKey_Impl, int pVisibility);
  /// FbxAnimCurveDef::ETangentVisibility  GetTangentVisibility () const =0
  public static native int GetTangentVisibility(long lpjFbxAnimCurveKey_Impl);
  /// virtual void  SetBreak (bool pVal)=0
  public static native void SetBreak(long lpjFbxAnimCurveKey_Impl, boolean pVal);
  /// virtual bool  GetBreak () const =0
  public static native boolean GetBreak(long lpjFbxAnimCurveKey_Impl);
  /// FbxAnimCurveKey_Impl * meCreate()
  public static native long meCreate(  );
}
