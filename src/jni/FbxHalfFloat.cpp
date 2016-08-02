//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxHalfFloat ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxHalfFloat_meCreate(JNIEnv * __env, jclass __jc)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxHalfFloat>(
  new FbxHalfFloat(
  ));
  return ret;
}
  /// FbxHalfFloat (float pVal)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxHalfFloat_meCreate1(JNIEnv * __env, jclass __jc,jfloat pVal)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxHalfFloat>(
  new FbxHalfFloat(
  ( float  )  _lcvt.j2c<jfloat, float  >(pVal)
  ));
  return ret;
}
  /// FbxHalfFloat (const FbxHalfFloat &pVal)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxHalfFloat_meCreate2(JNIEnv * __env, jclass __jc,jobject pVal)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxHalfFloat>(
  new FbxHalfFloat(
  (const FbxHalfFloat  &) * _lcvt.j2c_object_ref<jobject,FbxHalfFloat >(pVal)
  ));
  return ret;
}
  /// const float  value () const
extern "C" JNIEXPORT jfloat JNICALL Java_fbxsdk_FbxHalfFloat_value(JNIEnv * __env, jclass __jc,jlong lpjFbxHalfFloat)
{
  JNILocalConverter _lcvt(__env,__jc);
  jfloat ret=(jfloat)_lcvt.c2j<jfloat, const float  >(
  ((FbxHalfFloat *) lpjFbxHalfFloat)->value(
  ));
  return ret;
}
  /// void meDestroy(FbxHalfFloat * lpFbxHalfFloat)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxHalfFloat_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxHalfFloat)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxHalfFloat *) lpjFbxHalfFloat
  );
}
