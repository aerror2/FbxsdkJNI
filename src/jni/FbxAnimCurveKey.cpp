//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxAnimCurveKey ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimCurveKey_meCreate(JNIEnv * __env, jclass __jc)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAnimCurveKey>(
  new FbxAnimCurveKey(
  ));
  return ret;
}
  /// FbxAnimCurveKey (FbxTime pTime)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimCurveKey_meCreate1(JNIEnv * __env, jclass __jc,jlong pTime)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAnimCurveKey>(
  new FbxAnimCurveKey(
  ( FbxTime  )  _lcvt.j2c_object<jlong,FbxTime >(pTime)
  ));
  return ret;
}
  /// FbxAnimCurveKey (FbxTime pTime, float pVal)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimCurveKey_meCreate2(JNIEnv * __env, jclass __jc,jlong pTime,jfloat pVal)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAnimCurveKey>(
  new FbxAnimCurveKey(
  ( FbxTime  )  _lcvt.j2c_object<jlong,FbxTime >(pTime)
  ,
  ( float  )  _lcvt.j2c<jfloat, float  >(pVal)
  ));
  return ret;
}
  /// FbxAnimCurveKey (FbxAnimCurveKey const &pFKey)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimCurveKey_meCreate3(JNIEnv * __env, jclass __jc,jobject pFKey)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAnimCurveKey>(
  new FbxAnimCurveKey(
  ( FbxAnimCurveKey  &) * _lcvt.j2c_object_ref<jobject,FbxAnimCurveKey >(pFKey)
  ));
  return ret;
}
  /// ~FbxAnimCurveKey ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveKey_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveKey)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxAnimCurveKey *) lpjFbxAnimCurveKey
  );
}
  /// FbxTime  GetTime () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimCurveKey_GetTime(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveKey)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxTime>(
  ((FbxAnimCurveKey *) lpjFbxAnimCurveKey)->GetTime(
  ));
  return ret;
}
  /// void  SetTime (const FbxTime &pTime)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveKey_SetTime(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveKey,jobject pTime)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveKey *) lpjFbxAnimCurveKey)->SetTime(
  (const FbxTime  &) * _lcvt.j2c_object_ref<jobject,FbxTime >(pTime)
  );
}
  /// void  Set (FbxTime pTime, float pValue)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveKey_Set(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveKey,jlong pTime,jfloat pValue)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveKey *) lpjFbxAnimCurveKey)->Set(
  ( FbxTime  )  _lcvt.j2c_object<jlong,FbxTime >(pTime)
  ,
  ( float  )  _lcvt.j2c<jfloat, float  >(pValue)
  );
}
  /// void  SetTCB (FbxTime pTime, float pValue, float pData0=0.0f, float pData1=0.0f, float pData2=0.0f)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveKey_SetTCB(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveKey,jlong pTime,jfloat pValue,jfloat pData0,jfloat pData1,jfloat pData2)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveKey *) lpjFbxAnimCurveKey)->SetTCB(
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
  /// float  GetValue () const
extern "C" JNIEXPORT jfloat JNICALL Java_fbxsdk_FbxAnimCurveKey_GetValue(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveKey)
{
  JNILocalConverter _lcvt(__env,__jc);
  jfloat ret=(jfloat)_lcvt.c2j<jfloat,  float  >(
  ((FbxAnimCurveKey *) lpjFbxAnimCurveKey)->GetValue(
  ));
  return ret;
}
  /// void  SetValue (float pValue)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveKey_SetValue(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveKey,jfloat pValue)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveKey *) lpjFbxAnimCurveKey)->SetValue(
  ( float  )  _lcvt.j2c<jfloat, float  >(pValue)
  );
}
  /// FbxAnimCurveDef::EInterpolationType  GetInterpolation ()
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxAnimCurveKey_GetInterpolation(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveKey)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxAnimCurveDef::EInterpolationType  >(
  ((FbxAnimCurveKey *) lpjFbxAnimCurveKey)->GetInterpolation(
  ));
  return ret;
}
  /// void  SetInterpolation (FbxAnimCurveDef::EInterpolationType pInterpolation)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveKey_SetInterpolation(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveKey,jint pInterpolation)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveKey *) lpjFbxAnimCurveKey)->SetInterpolation(
  ( FbxAnimCurveDef::EInterpolationType  )  _lcvt.j2c<jint,FbxAnimCurveDef::EInterpolationType >(pInterpolation)
  );
}
  /// FbxAnimCurveDef::ETangentMode  GetTangentMode (bool pIncludeOverrides=false)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxAnimCurveKey_GetTangentMode(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveKey,jboolean pIncludeOverrides)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxAnimCurveDef::ETangentMode  >(
  ((FbxAnimCurveKey *) lpjFbxAnimCurveKey)->GetTangentMode(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pIncludeOverrides)
  ));
  return ret;
}
  /// void  SetTangentMode (FbxAnimCurveDef::ETangentMode pTangentMode)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveKey_SetTangentMode(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveKey,jint pTangentMode)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveKey *) lpjFbxAnimCurveKey)->SetTangentMode(
  ( FbxAnimCurveDef::ETangentMode  )  _lcvt.j2c<jint,FbxAnimCurveDef::ETangentMode >(pTangentMode)
  );
}
  /// FbxAnimCurveDef::EWeightedMode  GetTangentWeightMode () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxAnimCurveKey_GetTangentWeightMode(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveKey)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxAnimCurveDef::EWeightedMode  >(
  ((FbxAnimCurveKey *) lpjFbxAnimCurveKey)->GetTangentWeightMode(
  ));
  return ret;
}
  /// void  SetTangentWeightMode (FbxAnimCurveDef::EWeightedMode pTangentWeightMode, FbxAnimCurveDef::EWeightedMode pMask=FbxAnimCurveDef::eWeightedAll)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveKey_SetTangentWeightMode(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveKey,jint pTangentWeightMode,jint pMask)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveKey *) lpjFbxAnimCurveKey)->SetTangentWeightMode(
  ( FbxAnimCurveDef::EWeightedMode  )  _lcvt.j2c<jint,FbxAnimCurveDef::EWeightedMode >(pTangentWeightMode)
  ,
  ( FbxAnimCurveDef::EWeightedMode  )  _lcvt.j2c<jint,FbxAnimCurveDef::EWeightedMode >(pMask)
  );
}
  /// void  SetTangentWeightAndAdjustTangent (FbxAnimCurveDef::EDataIndex pIndex, double pWeight)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveKey_SetTangentWeightAndAdjustTangent(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveKey,jint pIndex,jdouble pWeight)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveKey *) lpjFbxAnimCurveKey)->SetTangentWeightAndAdjustTangent(
  ( FbxAnimCurveDef::EDataIndex  )  _lcvt.j2c<jint,FbxAnimCurveDef::EDataIndex >(pIndex)
  ,
  ( double  )  _lcvt.j2c<jdouble, double  >(pWeight)
  );
}
  /// FbxAnimCurveDef::EVelocityMode  GetTangentVelocityMode () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxAnimCurveKey_GetTangentVelocityMode(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveKey)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxAnimCurveDef::EVelocityMode  >(
  ((FbxAnimCurveKey *) lpjFbxAnimCurveKey)->GetTangentVelocityMode(
  ));
  return ret;
}
  /// void  SetTangentVelocityMode (FbxAnimCurveDef::EVelocityMode pTangentVelocityMode, FbxAnimCurveDef::EVelocityMode pMask=FbxAnimCurveDef::eVelocityAll)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveKey_SetTangentVelocityMode(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveKey,jint pTangentVelocityMode,jint pMask)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveKey *) lpjFbxAnimCurveKey)->SetTangentVelocityMode(
  ( FbxAnimCurveDef::EVelocityMode  )  _lcvt.j2c<jint,FbxAnimCurveDef::EVelocityMode >(pTangentVelocityMode)
  ,
  ( FbxAnimCurveDef::EVelocityMode  )  _lcvt.j2c<jint,FbxAnimCurveDef::EVelocityMode >(pMask)
  );
}
  /// FbxAnimCurveDef::EConstantMode  GetConstantMode () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxAnimCurveKey_GetConstantMode(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveKey)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxAnimCurveDef::EConstantMode  >(
  ((FbxAnimCurveKey *) lpjFbxAnimCurveKey)->GetConstantMode(
  ));
  return ret;
}
  /// void  SetConstantMode (FbxAnimCurveDef::EConstantMode pMode)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveKey_SetConstantMode(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveKey,jint pMode)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveKey *) lpjFbxAnimCurveKey)->SetConstantMode(
  ( FbxAnimCurveDef::EConstantMode  )  _lcvt.j2c<jint,FbxAnimCurveDef::EConstantMode >(pMode)
  );
}
  /// float  GetDataFloat (FbxAnimCurveDef::EDataIndex pIndex) const
extern "C" JNIEXPORT jfloat JNICALL Java_fbxsdk_FbxAnimCurveKey_GetDataFloat(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveKey,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jfloat ret=(jfloat)_lcvt.c2j<jfloat,  float  >(
  ((FbxAnimCurveKey *) lpjFbxAnimCurveKey)->GetDataFloat(
  ( FbxAnimCurveDef::EDataIndex  )  _lcvt.j2c<jint,FbxAnimCurveDef::EDataIndex >(pIndex)
  ));
  return ret;
}
  /// void  SetDataFloat (FbxAnimCurveDef::EDataIndex pIndex, float pValue)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveKey_SetDataFloat(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveKey,jint pIndex,jfloat pValue)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveKey *) lpjFbxAnimCurveKey)->SetDataFloat(
  ( FbxAnimCurveDef::EDataIndex  )  _lcvt.j2c<jint,FbxAnimCurveDef::EDataIndex >(pIndex)
  ,
  ( float  )  _lcvt.j2c<jfloat, float  >(pValue)
  );
}
  /// void  SetTangentVisibility (FbxAnimCurveDef::ETangentVisibility pVisibility)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveKey_SetTangentVisibility(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveKey,jint pVisibility)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveKey *) lpjFbxAnimCurveKey)->SetTangentVisibility(
  ( FbxAnimCurveDef::ETangentVisibility  )  _lcvt.j2c<jint,FbxAnimCurveDef::ETangentVisibility >(pVisibility)
  );
}
  /// FbxAnimCurveDef::ETangentVisibility  GetTangentVisibility () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxAnimCurveKey_GetTangentVisibility(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveKey)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxAnimCurveDef::ETangentVisibility  >(
  ((FbxAnimCurveKey *) lpjFbxAnimCurveKey)->GetTangentVisibility(
  ));
  return ret;
}
  /// void  SetBreak (bool pVal)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveKey_SetBreak(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveKey,jboolean pVal)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveKey *) lpjFbxAnimCurveKey)->SetBreak(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pVal)
  );
}
  /// bool  GetBreak () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveKey_GetBreak(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveKey)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveKey *) lpjFbxAnimCurveKey)->GetBreak(
  ));
  return ret;
}
  /// FbxAnimCurveKey_Impl *  GetImpl () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimCurveKey_GetImpl(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveKey)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAnimCurveKey_Impl>(
  ((FbxAnimCurveKey *) lpjFbxAnimCurveKey)->GetImpl(
  ));
  return ret;
}
