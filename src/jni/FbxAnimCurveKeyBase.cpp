
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxAnimCurveKeyBase ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimCurveKeyBase_meCreate(JNIEnv * __env, jclass __jc)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAnimCurveKeyBase>(
  new FbxAnimCurveKeyBase(
  ));
  return ret;
}
  /// virtual  ~FbxAnimCurveKeyBase ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveKeyBase_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveKeyBase)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxAnimCurveKeyBase *) lpjFbxAnimCurveKeyBase
  );
}
  /// virtual FbxTime  GetTime () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimCurveKeyBase_GetTime(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveKeyBase)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxTime>(
  ((FbxAnimCurveKeyBase *) lpjFbxAnimCurveKeyBase)->GetTime(
  ));
  return ret;
}
  /// virtual void  SetTime (const FbxTime &pTime)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveKeyBase_SetTime(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveKeyBase,jobject pTime)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveKeyBase *) lpjFbxAnimCurveKeyBase)->SetTime(
  (const FbxTime  &) * _lcvt.j2c_object_ref<jobject,FbxTime >(pTime)
  );
}
