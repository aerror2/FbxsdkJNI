package fbxsdk;
//26 242 FbxAnimCurve  --------------------
public class FbxAnimCurve  {
  /// virtual void  ResizeKeyBuffer (int pKeyCount)=0
  public static native void ResizeKeyBuffer(long lpjFbxAnimCurve, int pKeyCount);
  /// virtual void  KeyModifyBegin ()=0
  public static native void KeyModifyBegin(long lpjFbxAnimCurve);
  /// virtual void  KeyModifyEnd ()=0
  public static native void KeyModifyEnd(long lpjFbxAnimCurve);
  /// virtual void  KeyClear ()=0
  public static native void KeyClear(long lpjFbxAnimCurve);
  /// virtual int  KeyGetCount () const =0
  public static native int KeyGetCount(long lpjFbxAnimCurve);
  /// virtual int  KeyAdd (FbxTime pTime, FbxAnimCurveKeyBase &pKey, int *pLast=NULL)=0
  public static native int KeyAdd(long lpjFbxAnimCurve, long pTime, Long pKey, int [] pLast);
  /// virtual int  KeyAdd (FbxTime pTime, int *pLast=NULL)=0
  public static native int KeyAdd1(long lpjFbxAnimCurve, long pTime, int [] pLast);
  /// virtual bool  KeySet (int pIndex, FbxAnimCurveKeyBase &pKey)=0
  public static native boolean KeySet(long lpjFbxAnimCurve, int pIndex, Long pKey);
  /// virtual bool  KeyRemove (int pIndex)=0
  public static native boolean KeyRemove(long lpjFbxAnimCurve, int pIndex);
  /// virtual bool  KeyRemove (int pStartIndex, int pEndIndex)=0
  public static native boolean KeyRemove1(long lpjFbxAnimCurve, int pStartIndex, int pEndIndex);
  /// virtual int  KeyInsert (FbxTime pTime, int *pLast=NULL)=0
  public static native int KeyInsert(long lpjFbxAnimCurve, long pTime, int [] pLast);
  /// virtual double  KeyFind (FbxTime pTime, int *pLast=NULL)=0
  public static native double KeyFind(long lpjFbxAnimCurve, long pTime, int [] pLast);
  /// virtual bool  KeyScaleValue (float pMultValue)=0
  public static native boolean KeyScaleValue(long lpjFbxAnimCurve, float pMultValue);
  /// virtual bool  KeyScaleValueAndTangent (float pMultValue)=0
  public static native boolean KeyScaleValueAndTangent(long lpjFbxAnimCurve, float pMultValue);
  /// virtual void  KeySetTCB (int pKeyIndex, FbxTime pTime, float pValue, float pData0=0.0f, float pData1=0.0f, float pData2=0.0f)=0
  public static native void KeySetTCB(long lpjFbxAnimCurve, int pKeyIndex, long pTime, float pValue, float pData0, float pData1, float pData2);
  /// FbxAnimCurveDef::EInterpolationType  KeyGetInterpolation (int pKeyIndex) const =0
  public static native int KeyGetInterpolation(long lpjFbxAnimCurve, int pKeyIndex);
  /// virtual void  KeySetInterpolation (int pKeyIndex, FbxAnimCurveDef::EInterpolationType pInterpolation)=0
  public static native void KeySetInterpolation(long lpjFbxAnimCurve, int pKeyIndex, int pInterpolation);
  /// FbxAnimCurveDef::EConstantMode  KeyGetConstantMode (int pKeyIndex) const =0
  public static native int KeyGetConstantMode(long lpjFbxAnimCurve, int pKeyIndex);
  /// FbxAnimCurveDef::ETangentMode  KeyGetTangentMode (int pKeyIndex, bool pIncludeOverrides=false) const =0
  public static native int KeyGetTangentMode(long lpjFbxAnimCurve, int pKeyIndex, boolean pIncludeOverrides);
  /// virtual void  KeySetConstantMode (int pKeyIndex, FbxAnimCurveDef::EConstantMode pMode)=0
  public static native void KeySetConstantMode(long lpjFbxAnimCurve, int pKeyIndex, int pMode);
  /// virtual void  KeySetTangentMode (int pKeyIndex, FbxAnimCurveDef::ETangentMode pTangent)=0
  public static native void KeySetTangentMode(long lpjFbxAnimCurve, int pKeyIndex, int pTangent);
  /// virtual FbxAnimCurveKey  KeyGet (int pIndex) const =0
  public static native long KeyGet(long lpjFbxAnimCurve, int pIndex);
  /// virtual float  KeyGetValue (int pKeyIndex) const =0
  public static native float KeyGetValue(long lpjFbxAnimCurve, int pKeyIndex);
  /// virtual void  KeySetValue (int pKeyIndex, float pValue)=0
  public static native void KeySetValue(long lpjFbxAnimCurve, int pKeyIndex, float pValue);
  /// virtual void  KeyIncValue (int pKeyIndex, float pValue)=0
  public static native void KeyIncValue(long lpjFbxAnimCurve, int pKeyIndex, float pValue);
  /// virtual void  KeyMultValue (int pKeyIndex, float pValue)=0
  public static native void KeyMultValue(long lpjFbxAnimCurve, int pKeyIndex, float pValue);
  /// virtual void  KeyMultTangent (int pKeyIndex, float pValue)=0
  public static native void KeyMultTangent(long lpjFbxAnimCurve, int pKeyIndex, float pValue);
  /// virtual FbxTime  KeyGetTime (int pKeyIndex) const =0
  public static native long KeyGetTime(long lpjFbxAnimCurve, int pKeyIndex);
  /// virtual void  KeySetTime (int pKeyIndex, FbxTime pTime)=0
  public static native void KeySetTime(long lpjFbxAnimCurve, int pKeyIndex, long pTime);
  /// virtual void  KeySetBreak (int pKeyIndex, bool pVal)=0
  public static native void KeySetBreak(long lpjFbxAnimCurve, int pKeyIndex, boolean pVal);
  /// virtual bool  KeyGetBreak (int pKeyIndex) const =0
  public static native boolean KeyGetBreak(long lpjFbxAnimCurve, int pKeyIndex);
  /// virtual float  KeyGetLeftDerivative (int pIndex)=0
  public static native float KeyGetLeftDerivative(long lpjFbxAnimCurve, int pIndex);
  /// virtual void  KeySetLeftDerivative (int pIndex, float pValue)=0
  public static native void KeySetLeftDerivative(long lpjFbxAnimCurve, int pIndex, float pValue);
  /// virtual float  KeyGetLeftAuto (int pIndex, bool pApplyOvershootProtection=false)=0
  public static native float KeyGetLeftAuto(long lpjFbxAnimCurve, int pIndex, boolean pApplyOvershootProtection);
  /// virtual FbxAnimCurveTangentInfo  KeyGetLeftDerivativeInfo (int pIndex)=0
  public static native long KeyGetLeftDerivativeInfo(long lpjFbxAnimCurve, int pIndex);
  /// virtual void  KeySetLeftDerivativeInfo (int pIndex, const FbxAnimCurveTangentInfo &pValue, bool pForceDerivative=false)=0
  public static native void KeySetLeftDerivativeInfo(long lpjFbxAnimCurve, int pIndex, Long pValue, boolean pForceDerivative);
  /// virtual float  KeyGetRightDerivative (int pIndex)=0
  public static native float KeyGetRightDerivative(long lpjFbxAnimCurve, int pIndex);
  /// virtual void  KeySetRightDerivative (int pIndex, float pValue)=0
  public static native void KeySetRightDerivative(long lpjFbxAnimCurve, int pIndex, float pValue);
  /// virtual float  KeyGetRightAuto (int pIndex, bool pApplyOvershootProtection=false)=0
  public static native float KeyGetRightAuto(long lpjFbxAnimCurve, int pIndex, boolean pApplyOvershootProtection);
  /// virtual FbxAnimCurveTangentInfo  KeyGetRightDerivativeInfo (int pIndex)=0
  public static native long KeyGetRightDerivativeInfo(long lpjFbxAnimCurve, int pIndex);
  /// virtual void  KeySetRightDerivativeInfo (int pIndex, const FbxAnimCurveTangentInfo &pValue, bool pForceDerivative=false)=0
  public static native void KeySetRightDerivativeInfo(long lpjFbxAnimCurve, int pIndex, Long pValue, boolean pForceDerivative);
  /// virtual bool  KeyIsLeftTangentWeighted (int pIndex) const =0
  public static native boolean KeyIsLeftTangentWeighted(long lpjFbxAnimCurve, int pIndex);
  /// virtual bool  KeyIsRightTangentWeighted (int pIndex) const =0
  public static native boolean KeyIsRightTangentWeighted(long lpjFbxAnimCurve, int pIndex);
  /// virtual float  KeyGetLeftTangentWeight (int pIndex) const =0
  public static native float KeyGetLeftTangentWeight(long lpjFbxAnimCurve, int pIndex);
  /// virtual float  KeyGetRightTangentWeight (int pIndex) const =0
  public static native float KeyGetRightTangentWeight(long lpjFbxAnimCurve, int pIndex);
  /// virtual void  KeySetLeftTangentWeight (int pIndex, float pWeight, bool pAdjustTan=false)=0
  public static native void KeySetLeftTangentWeight(long lpjFbxAnimCurve, int pIndex, float pWeight, boolean pAdjustTan);
  /// virtual void  KeySetRightTangentWeight (int pIndex, float pWeight, bool pAdjustTan=false)=0
  public static native void KeySetRightTangentWeight(long lpjFbxAnimCurve, int pIndex, float pWeight, boolean pAdjustTan);
  /// virtual float  KeyGetLeftTangentVelocity (int pIndex) const =0
  public static native float KeyGetLeftTangentVelocity(long lpjFbxAnimCurve, int pIndex);
  /// virtual float  KeyGetRightTangentVelocity (int pIndex) const =0
  public static native float KeyGetRightTangentVelocity(long lpjFbxAnimCurve, int pIndex);
  /// virtual float  Evaluate (FbxTime pTime, int *pLast=NULL)=0
  public static native float Evaluate(long lpjFbxAnimCurve, long pTime, int [] pLast);
  /// virtual float  EvaluateIndex (double pIndex)=0
  public static native float EvaluateIndex(long lpjFbxAnimCurve, double pIndex);
  /// virtual float  EvaluateLeftDerivative (FbxTime pTime, int *pLast=NULL)=0
  public static native float EvaluateLeftDerivative(long lpjFbxAnimCurve, long pTime, int [] pLast);
  /// virtual float  EvaluateRightDerivative (FbxTime pTime, int *pLast=NULL)=0
  public static native float EvaluateRightDerivative(long lpjFbxAnimCurve, long pTime, int [] pLast);
  /// virtual bool  GetTimeInterval (FbxTimeSpan &pTimeInterval)=0
  public static native boolean GetTimeInterval(long lpjFbxAnimCurve, Long pTimeInterval);
  /// virtual void  CopyFrom (FbxAnimCurve &pSource, bool pWithKeys=true)=0
  public static native void CopyFrom(long lpjFbxAnimCurve, Long pSource, boolean pWithKeys);
  /// virtual float  GetValue (int pCurveNodeIndex=0)=0
  public static native float GetValue(long lpjFbxAnimCurve, int pCurveNodeIndex);
  /// virtual void  SetValue (float pValue, int pCurveNodeIndex=0)=0
  public static native void SetValue(long lpjFbxAnimCurve, float pValue, int pCurveNodeIndex);
  /// FbxAnimCurve * Create( FbxScene* pContainer, const char* pName )
  public static native long Create(   long pContainer, String pName);
}
