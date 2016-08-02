//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// virtual  ~FbxAnimCurveKey_Impl ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveKey_Impl_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveKey_Impl)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxAnimCurveKey_Impl *) lpjFbxAnimCurveKey_Impl
  );
}
  /// virtual void  Set (FbxTime pTime, float pValue)=0
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveKey_Impl_Set(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveKey_Impl,jlong pTime,jfloat pValue)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveKey_Impl *) lpjFbxAnimCurveKey_Impl)->Set(
  ( FbxTime  )  _lcvt.j2c_object<jlong,FbxTime >(pTime)
  ,
  ( float  )  _lcvt.j2c<jfloat, float  >(pValue)
  );
}
  /// virtual void  SetTCB (FbxTime pTime, float pValue, float pData0=0.0f, float pData1=0.0f, float pData2=0.0f)=0
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveKey_Impl_SetTCB(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveKey_Impl,jlong pTime,jfloat pValue,jfloat pData0,jfloat pData1,jfloat pData2)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveKey_Impl *) lpjFbxAnimCurveKey_Impl)->SetTCB(
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
  /// virtual float  GetValue () const =0
extern "C" JNIEXPORT jfloat JNICALL Java_fbxsdk_FbxAnimCurveKey_Impl_GetValue(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveKey_Impl)
{
  JNILocalConverter _lcvt(__env,__jc);
  jfloat ret=(jfloat)_lcvt.c2j<jfloat,  float  >(
  ((FbxAnimCurveKey_Impl *) lpjFbxAnimCurveKey_Impl)->GetValue(
  ));
  return ret;
}
  /// virtual void  SetValue (float pValue)=0
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveKey_Impl_SetValue(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveKey_Impl,jfloat pValue)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveKey_Impl *) lpjFbxAnimCurveKey_Impl)->SetValue(
  ( float  )  _lcvt.j2c<jfloat, float  >(pValue)
  );
}
  /// FbxAnimCurveDef::EInterpolationType  GetInterpolation () const =0
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxAnimCurveKey_Impl_GetInterpolation(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveKey_Impl)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxAnimCurveDef::EInterpolationType  >(
  ((FbxAnimCurveKey_Impl *) lpjFbxAnimCurveKey_Impl)->GetInterpolation(
  ));
  return ret;
}
  /// virtual void  SetInterpolation (FbxAnimCurveDef::EInterpolationType pInterpolation)=0
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveKey_Impl_SetInterpolation(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveKey_Impl,jint pInterpolation)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveKey_Impl *) lpjFbxAnimCurveKey_Impl)->SetInterpolation(
  ( FbxAnimCurveDef::EInterpolationType  )  _lcvt.j2c<jint,FbxAnimCurveDef::EInterpolationType >(pInterpolation)
  );
}
  /// FbxAnimCurveDef::ETangentMode        GetTangentMode (bool pIncludeOverrides=false) const =0
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxAnimCurveKey_Impl_GetTangentMode(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveKey_Impl,jboolean pIncludeOverrides)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxAnimCurveDef::ETangentMode  >(
  ((FbxAnimCurveKey_Impl *) lpjFbxAnimCurveKey_Impl)->GetTangentMode(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pIncludeOverrides)
  ));
  return ret;
}
  /// virtual void  SetTangentMode (FbxAnimCurveDef::ETangentMode pTangentMode)=0
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveKey_Impl_SetTangentMode(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveKey_Impl,jint pTangentMode)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveKey_Impl *) lpjFbxAnimCurveKey_Impl)->SetTangentMode(
  ( FbxAnimCurveDef::ETangentMode  )  _lcvt.j2c<jint,FbxAnimCurveDef::ETangentMode >(pTangentMode)
  );
}
  /// FbxAnimCurveDef::EWeightedMode       GetTangentWeightMode () const =0
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxAnimCurveKey_Impl_GetTangentWeightMode(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveKey_Impl)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxAnimCurveDef::EWeightedMode  >(
  ((FbxAnimCurveKey_Impl *) lpjFbxAnimCurveKey_Impl)->GetTangentWeightMode(
  ));
  return ret;
}
  /// virtual void  SetTangentWeightMode (FbxAnimCurveDef::EWeightedMode pTangentWeightMode, FbxAnimCurveDef::EWeightedMode pMask=FbxAnimCurveDef::eWeightedAll)=0
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveKey_Impl_SetTangentWeightMode(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveKey_Impl,jint pTangentWeightMode,jint pMask)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveKey_Impl *) lpjFbxAnimCurveKey_Impl)->SetTangentWeightMode(
  ( FbxAnimCurveDef::EWeightedMode  )  _lcvt.j2c<jint,FbxAnimCurveDef::EWeightedMode >(pTangentWeightMode)
  ,
  ( FbxAnimCurveDef::EWeightedMode  )  _lcvt.j2c<jint,FbxAnimCurveDef::EWeightedMode >(pMask)
  );
}
  /// virtual void  SetTangentWeightAndAdjustTangent (FbxAnimCurveDef::EDataIndex pIndex, double pWeight)=0
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveKey_Impl_SetTangentWeightAndAdjustTangent(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveKey_Impl,jint pIndex,jdouble pWeight)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveKey_Impl *) lpjFbxAnimCurveKey_Impl)->SetTangentWeightAndAdjustTangent(
  ( FbxAnimCurveDef::EDataIndex  )  _lcvt.j2c<jint,FbxAnimCurveDef::EDataIndex >(pIndex)
  ,
  ( double  )  _lcvt.j2c<jdouble, double  >(pWeight)
  );
}
  /// FbxAnimCurveDef::EVelocityMode       GetTangentVelocityMode () const =0
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxAnimCurveKey_Impl_GetTangentVelocityMode(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveKey_Impl)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxAnimCurveDef::EVelocityMode  >(
  ((FbxAnimCurveKey_Impl *) lpjFbxAnimCurveKey_Impl)->GetTangentVelocityMode(
  ));
  return ret;
}
  /// virtual void  SetTangentVelocityMode (FbxAnimCurveDef::EVelocityMode pTangentVelocityMode, FbxAnimCurveDef::EVelocityMode pMask=FbxAnimCurveDef::eVelocityAll)=0
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveKey_Impl_SetTangentVelocityMode(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveKey_Impl,jint pTangentVelocityMode,jint pMask)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveKey_Impl *) lpjFbxAnimCurveKey_Impl)->SetTangentVelocityMode(
  ( FbxAnimCurveDef::EVelocityMode  )  _lcvt.j2c<jint,FbxAnimCurveDef::EVelocityMode >(pTangentVelocityMode)
  ,
  ( FbxAnimCurveDef::EVelocityMode  )  _lcvt.j2c<jint,FbxAnimCurveDef::EVelocityMode >(pMask)
  );
}
  /// FbxAnimCurveDef::EConstantMode       GetConstantMode () const =0
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxAnimCurveKey_Impl_GetConstantMode(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveKey_Impl)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxAnimCurveDef::EConstantMode  >(
  ((FbxAnimCurveKey_Impl *) lpjFbxAnimCurveKey_Impl)->GetConstantMode(
  ));
  return ret;
}
  /// virtual void  SetConstantMode (FbxAnimCurveDef::EConstantMode pMode)=0
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveKey_Impl_SetConstantMode(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveKey_Impl,jint pMode)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveKey_Impl *) lpjFbxAnimCurveKey_Impl)->SetConstantMode(
  ( FbxAnimCurveDef::EConstantMode  )  _lcvt.j2c<jint,FbxAnimCurveDef::EConstantMode >(pMode)
  );
}
  /// virtual float  GetDataFloat (FbxAnimCurveDef::EDataIndex pIndex) const =0
extern "C" JNIEXPORT jfloat JNICALL Java_fbxsdk_FbxAnimCurveKey_Impl_GetDataFloat(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveKey_Impl,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jfloat ret=(jfloat)_lcvt.c2j<jfloat,  float  >(
  ((FbxAnimCurveKey_Impl *) lpjFbxAnimCurveKey_Impl)->GetDataFloat(
  ( FbxAnimCurveDef::EDataIndex  )  _lcvt.j2c<jint,FbxAnimCurveDef::EDataIndex >(pIndex)
  ));
  return ret;
}
  /// virtual void  SetDataFloat (FbxAnimCurveDef::EDataIndex pIndex, float pValue)=0
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveKey_Impl_SetDataFloat(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveKey_Impl,jint pIndex,jfloat pValue)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveKey_Impl *) lpjFbxAnimCurveKey_Impl)->SetDataFloat(
  ( FbxAnimCurveDef::EDataIndex  )  _lcvt.j2c<jint,FbxAnimCurveDef::EDataIndex >(pIndex)
  ,
  ( float  )  _lcvt.j2c<jfloat, float  >(pValue)
  );
}
  /// virtual void  SetTangentVisibility (FbxAnimCurveDef::ETangentVisibility pVisibility)=0
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveKey_Impl_SetTangentVisibility(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveKey_Impl,jint pVisibility)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveKey_Impl *) lpjFbxAnimCurveKey_Impl)->SetTangentVisibility(
  ( FbxAnimCurveDef::ETangentVisibility  )  _lcvt.j2c<jint,FbxAnimCurveDef::ETangentVisibility >(pVisibility)
  );
}
  /// FbxAnimCurveDef::ETangentVisibility  GetTangentVisibility () const =0
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxAnimCurveKey_Impl_GetTangentVisibility(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveKey_Impl)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxAnimCurveDef::ETangentVisibility  >(
  ((FbxAnimCurveKey_Impl *) lpjFbxAnimCurveKey_Impl)->GetTangentVisibility(
  ));
  return ret;
}
  /// virtual void  SetBreak (bool pVal)=0
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveKey_Impl_SetBreak(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveKey_Impl,jboolean pVal)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveKey_Impl *) lpjFbxAnimCurveKey_Impl)->SetBreak(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pVal)
  );
}
  /// virtual bool  GetBreak () const =0
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveKey_Impl_GetBreak(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveKey_Impl)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveKey_Impl *) lpjFbxAnimCurveKey_Impl)->GetBreak(
  ));
  return ret;
}
  /// FbxAnimCurveKey_Impl * meCreate()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimCurveKey_Impl_meCreate(JNIEnv * __env, jclass __jc)
{
  return 0;
}
