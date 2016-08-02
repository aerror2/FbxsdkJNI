
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// virtual void  ResizeKeyBuffer (int pKeyCount)=0
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurve_ResizeKeyBuffer(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurve,jint pKeyCount)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurve *) lpjFbxAnimCurve)->ResizeKeyBuffer(
  ( int  )  _lcvt.j2c<jint, int  >(pKeyCount)
  );
}
  /// virtual void  KeyModifyBegin ()=0
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurve_KeyModifyBegin(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurve)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurve *) lpjFbxAnimCurve)->KeyModifyBegin(
  );
}
  /// virtual void  KeyModifyEnd ()=0
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurve_KeyModifyEnd(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurve)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurve *) lpjFbxAnimCurve)->KeyModifyEnd(
  );
}
  /// virtual void  KeyClear ()=0
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurve_KeyClear(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurve)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurve *) lpjFbxAnimCurve)->KeyClear(
  );
}
  /// virtual int  KeyGetCount () const =0
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxAnimCurve_KeyGetCount(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurve)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxAnimCurve *) lpjFbxAnimCurve)->KeyGetCount(
  ));
  return ret;
}
  /// virtual int  KeyAdd (FbxTime pTime, FbxAnimCurveKeyBase &pKey, int *pLast=NULL)=0
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxAnimCurve_KeyAdd(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurve,jlong pTime,jobject pKey,jintArray pLast)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxAnimCurve *) lpjFbxAnimCurve)->KeyAdd(
  ( FbxTime  )  _lcvt.j2c_object<jlong,FbxTime >(pTime)
  ,
  ( FbxAnimCurveKeyBase  &) * _lcvt.j2c_object_ref<jobject,FbxAnimCurveKeyBase >(pKey)
  ,
  ( int  *)  _lcvt.j2c_int_pt<jintArray,int>(pLast)
  ));
  return ret;
}
  /// virtual int  KeyAdd (FbxTime pTime, int *pLast=NULL)=0
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxAnimCurve_KeyAdd1(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurve,jlong pTime,jintArray pLast)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxAnimCurve *) lpjFbxAnimCurve)->KeyAdd(
  ( FbxTime  )  _lcvt.j2c_object<jlong,FbxTime >(pTime)
  ,
  ( int  *)  _lcvt.j2c_int_pt<jintArray,int>(pLast)
  ));
  return ret;
}
  /// virtual bool  KeySet (int pIndex, FbxAnimCurveKeyBase &pKey)=0
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurve_KeySet(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurve,jint pIndex,jobject pKey)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurve *) lpjFbxAnimCurve)->KeySet(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ,
  ( FbxAnimCurveKeyBase  &) * _lcvt.j2c_object_ref<jobject,FbxAnimCurveKeyBase >(pKey)
  ));
  return ret;
}
  /// virtual bool  KeyRemove (int pIndex)=0
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurve_KeyRemove(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurve,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurve *) lpjFbxAnimCurve)->KeyRemove(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// virtual bool  KeyRemove (int pStartIndex, int pEndIndex)=0
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurve_KeyRemove1(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurve,jint pStartIndex,jint pEndIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurve *) lpjFbxAnimCurve)->KeyRemove(
  ( int  )  _lcvt.j2c<jint, int  >(pStartIndex)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pEndIndex)
  ));
  return ret;
}
  /// virtual int  KeyInsert (FbxTime pTime, int *pLast=NULL)=0
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxAnimCurve_KeyInsert(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurve,jlong pTime,jintArray pLast)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxAnimCurve *) lpjFbxAnimCurve)->KeyInsert(
  ( FbxTime  )  _lcvt.j2c_object<jlong,FbxTime >(pTime)
  ,
  ( int  *)  _lcvt.j2c_int_pt<jintArray,int>(pLast)
  ));
  return ret;
}
  /// virtual double  KeyFind (FbxTime pTime, int *pLast=NULL)=0
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxAnimCurve_KeyFind(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurve,jlong pTime,jintArray pLast)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxAnimCurve *) lpjFbxAnimCurve)->KeyFind(
  ( FbxTime  )  _lcvt.j2c_object<jlong,FbxTime >(pTime)
  ,
  ( int  *)  _lcvt.j2c_int_pt<jintArray,int>(pLast)
  ));
  return ret;
}
  /// virtual bool  KeyScaleValue (float pMultValue)=0
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurve_KeyScaleValue(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurve,jfloat pMultValue)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurve *) lpjFbxAnimCurve)->KeyScaleValue(
  ( float  )  _lcvt.j2c<jfloat, float  >(pMultValue)
  ));
  return ret;
}
  /// virtual bool  KeyScaleValueAndTangent (float pMultValue)=0
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurve_KeyScaleValueAndTangent(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurve,jfloat pMultValue)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurve *) lpjFbxAnimCurve)->KeyScaleValueAndTangent(
  ( float  )  _lcvt.j2c<jfloat, float  >(pMultValue)
  ));
  return ret;
}
  /// virtual void  KeySetTCB (int pKeyIndex, FbxTime pTime, float pValue, float pData0=0.0f, float pData1=0.0f, float pData2=0.0f)=0
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurve_KeySetTCB(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurve,jint pKeyIndex,jlong pTime,jfloat pValue,jfloat pData0,jfloat pData1,jfloat pData2)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurve *) lpjFbxAnimCurve)->KeySetTCB(
  ( int  )  _lcvt.j2c<jint, int  >(pKeyIndex)
  ,
  ( FbxTime  )  _lcvt.j2c_object<jlong,FbxTime >(pTime)
  ,
  ( float  )  _lcvt.j2c<jfloat, float  >(pValue)
  ,
  ( float  )  _lcvt.j2c<jfloat, float  >(pData0)
  ,
  ( float  )  _lcvt.j2c<jfloat, float  >(pData1)
  ,
  ( float  )  _lcvt.j2c<jfloat, float  >(pData2)
  );
}
  /// FbxAnimCurveDef::EInterpolationType  KeyGetInterpolation (int pKeyIndex) const =0
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxAnimCurve_KeyGetInterpolation(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurve,jint pKeyIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxAnimCurveDef::EInterpolationType  >(
  ((FbxAnimCurve *) lpjFbxAnimCurve)->KeyGetInterpolation(
  ( int  )  _lcvt.j2c<jint, int  >(pKeyIndex)
  ));
  return ret;
}
  /// virtual void  KeySetInterpolation (int pKeyIndex, FbxAnimCurveDef::EInterpolationType pInterpolation)=0
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurve_KeySetInterpolation(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurve,jint pKeyIndex,jint pInterpolation)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurve *) lpjFbxAnimCurve)->KeySetInterpolation(
  ( int  )  _lcvt.j2c<jint, int  >(pKeyIndex)
  ,
  ( FbxAnimCurveDef::EInterpolationType  )  _lcvt.j2c<jint,FbxAnimCurveDef::EInterpolationType >(pInterpolation)
  );
}
  /// FbxAnimCurveDef::EConstantMode  KeyGetConstantMode (int pKeyIndex) const =0
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxAnimCurve_KeyGetConstantMode(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurve,jint pKeyIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxAnimCurveDef::EConstantMode  >(
  ((FbxAnimCurve *) lpjFbxAnimCurve)->KeyGetConstantMode(
  ( int  )  _lcvt.j2c<jint, int  >(pKeyIndex)
  ));
  return ret;
}
  /// FbxAnimCurveDef::ETangentMode  KeyGetTangentMode (int pKeyIndex, bool pIncludeOverrides=false) const =0
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxAnimCurve_KeyGetTangentMode(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurve,jint pKeyIndex,jboolean pIncludeOverrides)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxAnimCurveDef::ETangentMode  >(
  ((FbxAnimCurve *) lpjFbxAnimCurve)->KeyGetTangentMode(
  ( int  )  _lcvt.j2c<jint, int  >(pKeyIndex)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pIncludeOverrides)
  ));
  return ret;
}
  /// virtual void  KeySetConstantMode (int pKeyIndex, FbxAnimCurveDef::EConstantMode pMode)=0
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurve_KeySetConstantMode(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurve,jint pKeyIndex,jint pMode)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurve *) lpjFbxAnimCurve)->KeySetConstantMode(
  ( int  )  _lcvt.j2c<jint, int  >(pKeyIndex)
  ,
  ( FbxAnimCurveDef::EConstantMode  )  _lcvt.j2c<jint,FbxAnimCurveDef::EConstantMode >(pMode)
  );
}
  /// virtual void  KeySetTangentMode (int pKeyIndex, FbxAnimCurveDef::ETangentMode pTangent)=0
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurve_KeySetTangentMode(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurve,jint pKeyIndex,jint pTangent)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurve *) lpjFbxAnimCurve)->KeySetTangentMode(
  ( int  )  _lcvt.j2c<jint, int  >(pKeyIndex)
  ,
  ( FbxAnimCurveDef::ETangentMode  )  _lcvt.j2c<jint,FbxAnimCurveDef::ETangentMode >(pTangent)
  );
}
  /// virtual FbxAnimCurveKey  KeyGet (int pIndex) const =0
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimCurve_KeyGet(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurve,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxAnimCurveKey>(
  ((FbxAnimCurve *) lpjFbxAnimCurve)->KeyGet(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// virtual float  KeyGetValue (int pKeyIndex) const =0
extern "C" JNIEXPORT jfloat JNICALL Java_fbxsdk_FbxAnimCurve_KeyGetValue(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurve,jint pKeyIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jfloat ret=(jfloat)_lcvt.c2j<jfloat,  float  >(
  ((FbxAnimCurve *) lpjFbxAnimCurve)->KeyGetValue(
  ( int  )  _lcvt.j2c<jint, int  >(pKeyIndex)
  ));
  return ret;
}
  /// virtual void  KeySetValue (int pKeyIndex, float pValue)=0
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurve_KeySetValue(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurve,jint pKeyIndex,jfloat pValue)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurve *) lpjFbxAnimCurve)->KeySetValue(
  ( int  )  _lcvt.j2c<jint, int  >(pKeyIndex)
  ,
  ( float  )  _lcvt.j2c<jfloat, float  >(pValue)
  );
}
  /// virtual void  KeyIncValue (int pKeyIndex, float pValue)=0
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurve_KeyIncValue(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurve,jint pKeyIndex,jfloat pValue)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurve *) lpjFbxAnimCurve)->KeyIncValue(
  ( int  )  _lcvt.j2c<jint, int  >(pKeyIndex)
  ,
  ( float  )  _lcvt.j2c<jfloat, float  >(pValue)
  );
}
  /// virtual void  KeyMultValue (int pKeyIndex, float pValue)=0
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurve_KeyMultValue(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurve,jint pKeyIndex,jfloat pValue)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurve *) lpjFbxAnimCurve)->KeyMultValue(
  ( int  )  _lcvt.j2c<jint, int  >(pKeyIndex)
  ,
  ( float  )  _lcvt.j2c<jfloat, float  >(pValue)
  );
}
  /// virtual void  KeyMultTangent (int pKeyIndex, float pValue)=0
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurve_KeyMultTangent(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurve,jint pKeyIndex,jfloat pValue)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurve *) lpjFbxAnimCurve)->KeyMultTangent(
  ( int  )  _lcvt.j2c<jint, int  >(pKeyIndex)
  ,
  ( float  )  _lcvt.j2c<jfloat, float  >(pValue)
  );
}
  /// virtual FbxTime  KeyGetTime (int pKeyIndex) const =0
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimCurve_KeyGetTime(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurve,jint pKeyIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxTime>(
  ((FbxAnimCurve *) lpjFbxAnimCurve)->KeyGetTime(
  ( int  )  _lcvt.j2c<jint, int  >(pKeyIndex)
  ));
  return ret;
}
  /// virtual void  KeySetTime (int pKeyIndex, FbxTime pTime)=0
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurve_KeySetTime(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurve,jint pKeyIndex,jlong pTime)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurve *) lpjFbxAnimCurve)->KeySetTime(
  ( int  )  _lcvt.j2c<jint, int  >(pKeyIndex)
  ,
  ( FbxTime  )  _lcvt.j2c_object<jlong,FbxTime >(pTime)
  );
}
  /// virtual void  KeySetBreak (int pKeyIndex, bool pVal)=0
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurve_KeySetBreak(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurve,jint pKeyIndex,jboolean pVal)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurve *) lpjFbxAnimCurve)->KeySetBreak(
  ( int  )  _lcvt.j2c<jint, int  >(pKeyIndex)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pVal)
  );
}
  /// virtual bool  KeyGetBreak (int pKeyIndex) const =0
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurve_KeyGetBreak(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurve,jint pKeyIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurve *) lpjFbxAnimCurve)->KeyGetBreak(
  ( int  )  _lcvt.j2c<jint, int  >(pKeyIndex)
  ));
  return ret;
}
  /// virtual float  KeyGetLeftDerivative (int pIndex)=0
extern "C" JNIEXPORT jfloat JNICALL Java_fbxsdk_FbxAnimCurve_KeyGetLeftDerivative(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurve,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jfloat ret=(jfloat)_lcvt.c2j<jfloat,  float  >(
  ((FbxAnimCurve *) lpjFbxAnimCurve)->KeyGetLeftDerivative(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// virtual void  KeySetLeftDerivative (int pIndex, float pValue)=0
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurve_KeySetLeftDerivative(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurve,jint pIndex,jfloat pValue)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurve *) lpjFbxAnimCurve)->KeySetLeftDerivative(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ,
  ( float  )  _lcvt.j2c<jfloat, float  >(pValue)
  );
}
  /// virtual float  KeyGetLeftAuto (int pIndex, bool pApplyOvershootProtection=false)=0
extern "C" JNIEXPORT jfloat JNICALL Java_fbxsdk_FbxAnimCurve_KeyGetLeftAuto(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurve,jint pIndex,jboolean pApplyOvershootProtection)
{
  JNILocalConverter _lcvt(__env,__jc);
  jfloat ret=(jfloat)_lcvt.c2j<jfloat,  float  >(
  ((FbxAnimCurve *) lpjFbxAnimCurve)->KeyGetLeftAuto(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pApplyOvershootProtection)
  ));
  return ret;
}
  /// virtual FbxAnimCurveTangentInfo  KeyGetLeftDerivativeInfo (int pIndex)=0
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimCurve_KeyGetLeftDerivativeInfo(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurve,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxAnimCurveTangentInfo>(
  ((FbxAnimCurve *) lpjFbxAnimCurve)->KeyGetLeftDerivativeInfo(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// virtual void  KeySetLeftDerivativeInfo (int pIndex, const FbxAnimCurveTangentInfo &pValue, bool pForceDerivative=false)=0
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurve_KeySetLeftDerivativeInfo(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurve,jint pIndex,jobject pValue,jboolean pForceDerivative)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurve *) lpjFbxAnimCurve)->KeySetLeftDerivativeInfo(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ,
  (const FbxAnimCurveTangentInfo  &) * _lcvt.j2c_object_ref<jobject,FbxAnimCurveTangentInfo >(pValue)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pForceDerivative)
  );
}
  /// virtual float  KeyGetRightDerivative (int pIndex)=0
extern "C" JNIEXPORT jfloat JNICALL Java_fbxsdk_FbxAnimCurve_KeyGetRightDerivative(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurve,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jfloat ret=(jfloat)_lcvt.c2j<jfloat,  float  >(
  ((FbxAnimCurve *) lpjFbxAnimCurve)->KeyGetRightDerivative(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// virtual void  KeySetRightDerivative (int pIndex, float pValue)=0
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurve_KeySetRightDerivative(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurve,jint pIndex,jfloat pValue)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurve *) lpjFbxAnimCurve)->KeySetRightDerivative(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ,
  ( float  )  _lcvt.j2c<jfloat, float  >(pValue)
  );
}
  /// virtual float  KeyGetRightAuto (int pIndex, bool pApplyOvershootProtection=false)=0
extern "C" JNIEXPORT jfloat JNICALL Java_fbxsdk_FbxAnimCurve_KeyGetRightAuto(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurve,jint pIndex,jboolean pApplyOvershootProtection)
{
  JNILocalConverter _lcvt(__env,__jc);
  jfloat ret=(jfloat)_lcvt.c2j<jfloat,  float  >(
  ((FbxAnimCurve *) lpjFbxAnimCurve)->KeyGetRightAuto(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pApplyOvershootProtection)
  ));
  return ret;
}
  /// virtual FbxAnimCurveTangentInfo  KeyGetRightDerivativeInfo (int pIndex)=0
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimCurve_KeyGetRightDerivativeInfo(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurve,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxAnimCurveTangentInfo>(
  ((FbxAnimCurve *) lpjFbxAnimCurve)->KeyGetRightDerivativeInfo(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// virtual void  KeySetRightDerivativeInfo (int pIndex, const FbxAnimCurveTangentInfo &pValue, bool pForceDerivative=false)=0
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurve_KeySetRightDerivativeInfo(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurve,jint pIndex,jobject pValue,jboolean pForceDerivative)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurve *) lpjFbxAnimCurve)->KeySetRightDerivativeInfo(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ,
  (const FbxAnimCurveTangentInfo  &) * _lcvt.j2c_object_ref<jobject,FbxAnimCurveTangentInfo >(pValue)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pForceDerivative)
  );
}
  /// virtual bool  KeyIsLeftTangentWeighted (int pIndex) const =0
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurve_KeyIsLeftTangentWeighted(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurve,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurve *) lpjFbxAnimCurve)->KeyIsLeftTangentWeighted(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// virtual bool  KeyIsRightTangentWeighted (int pIndex) const =0
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurve_KeyIsRightTangentWeighted(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurve,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurve *) lpjFbxAnimCurve)->KeyIsRightTangentWeighted(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// virtual float  KeyGetLeftTangentWeight (int pIndex) const =0
extern "C" JNIEXPORT jfloat JNICALL Java_fbxsdk_FbxAnimCurve_KeyGetLeftTangentWeight(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurve,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jfloat ret=(jfloat)_lcvt.c2j<jfloat,  float  >(
  ((FbxAnimCurve *) lpjFbxAnimCurve)->KeyGetLeftTangentWeight(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// virtual float  KeyGetRightTangentWeight (int pIndex) const =0
extern "C" JNIEXPORT jfloat JNICALL Java_fbxsdk_FbxAnimCurve_KeyGetRightTangentWeight(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurve,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jfloat ret=(jfloat)_lcvt.c2j<jfloat,  float  >(
  ((FbxAnimCurve *) lpjFbxAnimCurve)->KeyGetRightTangentWeight(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// virtual void  KeySetLeftTangentWeight (int pIndex, float pWeight, bool pAdjustTan=false)=0
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurve_KeySetLeftTangentWeight(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurve,jint pIndex,jfloat pWeight,jboolean pAdjustTan)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurve *) lpjFbxAnimCurve)->KeySetLeftTangentWeight(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ,
  ( float  )  _lcvt.j2c<jfloat, float  >(pWeight)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pAdjustTan)
  );
}
  /// virtual void  KeySetRightTangentWeight (int pIndex, float pWeight, bool pAdjustTan=false)=0
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurve_KeySetRightTangentWeight(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurve,jint pIndex,jfloat pWeight,jboolean pAdjustTan)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurve *) lpjFbxAnimCurve)->KeySetRightTangentWeight(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ,
  ( float  )  _lcvt.j2c<jfloat, float  >(pWeight)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pAdjustTan)
  );
}
  /// virtual float  KeyGetLeftTangentVelocity (int pIndex) const =0
extern "C" JNIEXPORT jfloat JNICALL Java_fbxsdk_FbxAnimCurve_KeyGetLeftTangentVelocity(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurve,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jfloat ret=(jfloat)_lcvt.c2j<jfloat,  float  >(
  ((FbxAnimCurve *) lpjFbxAnimCurve)->KeyGetLeftTangentVelocity(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// virtual float  KeyGetRightTangentVelocity (int pIndex) const =0
extern "C" JNIEXPORT jfloat JNICALL Java_fbxsdk_FbxAnimCurve_KeyGetRightTangentVelocity(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurve,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jfloat ret=(jfloat)_lcvt.c2j<jfloat,  float  >(
  ((FbxAnimCurve *) lpjFbxAnimCurve)->KeyGetRightTangentVelocity(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// virtual float  Evaluate (FbxTime pTime, int *pLast=NULL)=0
extern "C" JNIEXPORT jfloat JNICALL Java_fbxsdk_FbxAnimCurve_Evaluate(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurve,jlong pTime,jintArray pLast)
{
  JNILocalConverter _lcvt(__env,__jc);
  jfloat ret=(jfloat)_lcvt.c2j<jfloat,  float  >(
  ((FbxAnimCurve *) lpjFbxAnimCurve)->Evaluate(
  ( FbxTime  )  _lcvt.j2c_object<jlong,FbxTime >(pTime)
  ,
  ( int  *)  _lcvt.j2c_int_pt<jintArray,int>(pLast)
  ));
  return ret;
}
  /// virtual float  EvaluateIndex (double pIndex)=0
extern "C" JNIEXPORT jfloat JNICALL Java_fbxsdk_FbxAnimCurve_EvaluateIndex(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurve,jdouble pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jfloat ret=(jfloat)_lcvt.c2j<jfloat,  float  >(
  ((FbxAnimCurve *) lpjFbxAnimCurve)->EvaluateIndex(
  ( double  )  _lcvt.j2c<jdouble, double  >(pIndex)
  ));
  return ret;
}
  /// virtual float  EvaluateLeftDerivative (FbxTime pTime, int *pLast=NULL)=0
extern "C" JNIEXPORT jfloat JNICALL Java_fbxsdk_FbxAnimCurve_EvaluateLeftDerivative(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurve,jlong pTime,jintArray pLast)
{
  JNILocalConverter _lcvt(__env,__jc);
  jfloat ret=(jfloat)_lcvt.c2j<jfloat,  float  >(
  ((FbxAnimCurve *) lpjFbxAnimCurve)->EvaluateLeftDerivative(
  ( FbxTime  )  _lcvt.j2c_object<jlong,FbxTime >(pTime)
  ,
  ( int  *)  _lcvt.j2c_int_pt<jintArray,int>(pLast)
  ));
  return ret;
}
  /// virtual float  EvaluateRightDerivative (FbxTime pTime, int *pLast=NULL)=0
extern "C" JNIEXPORT jfloat JNICALL Java_fbxsdk_FbxAnimCurve_EvaluateRightDerivative(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurve,jlong pTime,jintArray pLast)
{
  JNILocalConverter _lcvt(__env,__jc);
  jfloat ret=(jfloat)_lcvt.c2j<jfloat,  float  >(
  ((FbxAnimCurve *) lpjFbxAnimCurve)->EvaluateRightDerivative(
  ( FbxTime  )  _lcvt.j2c_object<jlong,FbxTime >(pTime)
  ,
  ( int  *)  _lcvt.j2c_int_pt<jintArray,int>(pLast)
  ));
  return ret;
}
  /// virtual bool  GetTimeInterval (FbxTimeSpan &pTimeInterval)=0
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurve_GetTimeInterval(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurve,jobject pTimeInterval)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurve *) lpjFbxAnimCurve)->GetTimeInterval(
  ( FbxTimeSpan  &) * _lcvt.j2c_object_ref<jobject,FbxTimeSpan >(pTimeInterval)
  ));
  return ret;
}
  /// virtual void  CopyFrom (FbxAnimCurve &pSource, bool pWithKeys=true)=0
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurve_CopyFrom(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurve,jobject pSource,jboolean pWithKeys)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurve *) lpjFbxAnimCurve)->CopyFrom(
  ( FbxAnimCurve  &) * _lcvt.j2c_object_ref<jobject,FbxAnimCurve >(pSource)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pWithKeys)
  );
}
  /// virtual float  GetValue (int pCurveNodeIndex=0)=0
extern "C" JNIEXPORT jfloat JNICALL Java_fbxsdk_FbxAnimCurve_GetValue(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurve,jint pCurveNodeIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jfloat ret=(jfloat)_lcvt.c2j<jfloat,  float  >(
  ((FbxAnimCurve *) lpjFbxAnimCurve)->GetValue(
  ( int  )  _lcvt.j2c<jint, int  >(pCurveNodeIndex)
  ));
  return ret;
}
  /// virtual void  SetValue (float pValue, int pCurveNodeIndex=0)=0
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurve_SetValue(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurve,jfloat pValue,jint pCurveNodeIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurve *) lpjFbxAnimCurve)->SetValue(
  ( float  )  _lcvt.j2c<jfloat, float  >(pValue)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pCurveNodeIndex)
  );
}
  /// FbxAnimCurve * Create( FbxScene* pContainer, const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimCurve_Create(JNIEnv * __env, jclass __jc,jlong pContainer,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAnimCurve>(
  FbxAnimCurve::Create(
  ( FbxScene  *)  _lcvt.j2c_object_pt<jlong, FbxScene>(pContainer)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
