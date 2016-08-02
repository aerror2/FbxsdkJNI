//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxAnimCurveFilterResample ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimCurveFilterResample_meCreate(JNIEnv * __env, jclass __jc)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAnimCurveFilterResample>(
  new FbxAnimCurveFilterResample(
  ));
  return ret;
}
  /// virtual  ~FbxAnimCurveFilterResample ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveFilterResample_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterResample)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxAnimCurveFilterResample *) lpjFbxAnimCurveFilterResample
  );
}
  /// virtual bool  Apply (FbxAnimCurve &pCurve, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterResample_Apply(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterResample,jobject pCurve,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterResample *) lpjFbxAnimCurveFilterResample)->Apply(
  ( FbxAnimCurve  &) * _lcvt.j2c_object_ref<jobject,FbxAnimCurve >(pCurve)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// virtual void  Reset ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveFilterResample_Reset(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterResample)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveFilterResample *) lpjFbxAnimCurveFilterResample)->Reset(
  );
}
  /// void  SetKeysOnFrame (bool pKeysOnFrame)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveFilterResample_SetKeysOnFrame(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterResample,jboolean pKeysOnFrame)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveFilterResample *) lpjFbxAnimCurveFilterResample)->SetKeysOnFrame(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pKeysOnFrame)
  );
}
  /// bool  GetKeysOnFrame () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterResample_GetKeysOnFrame(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterResample)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterResample *) lpjFbxAnimCurveFilterResample)->GetKeysOnFrame(
  ));
  return ret;
}
  /// FbxTime  GetPeriodTime () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimCurveFilterResample_GetPeriodTime(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterResample)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxTime>(
  ((FbxAnimCurveFilterResample *) lpjFbxAnimCurveFilterResample)->GetPeriodTime(
  ));
  return ret;
}
  /// void  SetPeriodTime (FbxTime &pPeriod)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveFilterResample_SetPeriodTime(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterResample,jobject pPeriod)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveFilterResample *) lpjFbxAnimCurveFilterResample)->SetPeriodTime(
  ( FbxTime  &) * _lcvt.j2c_object_ref<jobject,FbxTime >(pPeriod)
  );
}
  /// bool  GetIntelligentMode () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterResample_GetIntelligentMode(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterResample)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterResample *) lpjFbxAnimCurveFilterResample)->GetIntelligentMode(
  ));
  return ret;
}
  /// void  SetIntelligentMode (bool pIntelligent)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveFilterResample_SetIntelligentMode(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterResample,jboolean pIntelligent)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveFilterResample *) lpjFbxAnimCurveFilterResample)->SetIntelligentMode(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pIntelligent)
  );
}
  /// virtual bool  Apply (FbxAnimStack *pAnimStack, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterResample_Apply1(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterResample,jlong pAnimStack,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterResample *) lpjFbxAnimCurveFilterResample)->Apply(
  ( FbxAnimStack  *)  _lcvt.j2c_object_pt<jlong, FbxAnimStack>(pAnimStack)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// virtual bool  Apply (FbxObject *pObj, FbxAnimStack *pAnimStack, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterResample_Apply2(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterResample,jlong pObj,jlong pAnimStack,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterResample *) lpjFbxAnimCurveFilterResample)->Apply(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pObj)
  ,
  ( FbxAnimStack  *)  _lcvt.j2c_object_pt<jlong, FbxAnimStack>(pAnimStack)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// virtual bool  Apply (FbxAnimCurveNode &pCurveNode, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterResample_Apply3(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterResample,jobject pCurveNode,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterResample *) lpjFbxAnimCurveFilterResample)->Apply(
  ( FbxAnimCurveNode  &) * _lcvt.j2c_object_ref<jobject,FbxAnimCurveNode >(pCurveNode)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// virtual bool  Apply (FbxAnimCurve **pCurve, int pCount, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterResample_Apply4(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterResample,jlongArray pCurve,jint pCount,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterResample *) lpjFbxAnimCurveFilterResample)->Apply(
  ( FbxAnimCurve  **)  _lcvt.j2c_object_ppt<jlongArray,FbxAnimCurve>(pCurve)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pCount)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
