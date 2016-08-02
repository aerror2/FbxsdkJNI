
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// const FbxString  unitName () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxDistance_unitName(JNIEnv * __env, jclass __jc,jlong lpjFbxDistance)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxString>(
  ((FbxDistance *) lpjFbxDistance)->unitName(
  ));
  return ret;
}
  /// const float  internalValue () const
extern "C" JNIEXPORT jfloat JNICALL Java_fbxsdk_FbxDistance_internalValue(JNIEnv * __env, jclass __jc,jlong lpjFbxDistance)
{
  JNILocalConverter _lcvt(__env,__jc);
  jfloat ret=(jfloat)_lcvt.c2j<jfloat, const float  >(
  ((FbxDistance *) lpjFbxDistance)->internalValue(
  ));
  return ret;
}
  /// const float  valueAs (const FbxSystemUnit &pUnit) const
extern "C" JNIEXPORT jfloat JNICALL Java_fbxsdk_FbxDistance_valueAs(JNIEnv * __env, jclass __jc,jlong lpjFbxDistance,jobject pUnit)
{
  JNILocalConverter _lcvt(__env,__jc);
  jfloat ret=(jfloat)_lcvt.c2j<jfloat, const float  >(
  ((FbxDistance *) lpjFbxDistance)->valueAs(
  (const FbxSystemUnit  &) * _lcvt.j2c_object_ref<jobject,FbxSystemUnit >(pUnit)
  ));
  return ret;
}
  /// FbxDistance ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxDistance_meCreate(JNIEnv * __env, jclass __jc)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxDistance>(
  new FbxDistance(
  ));
  return ret;
}
  /// FbxDistance (float pValue, FbxSystemUnit pUnit)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxDistance_meCreate1(JNIEnv * __env, jclass __jc,jfloat pValue,jlong pUnit)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxDistance>(
  new FbxDistance(
  ( float  )  _lcvt.j2c<jfloat, float  >(pValue)
  ,
  ( FbxSystemUnit  )  _lcvt.j2c_object<jlong,FbxSystemUnit >(pUnit)
  ));
  return ret;
}
  /// FbxDistance (float pValue, const char *pUnit)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxDistance_meCreate2(JNIEnv * __env, jclass __jc,jfloat pValue,jstring pUnit)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxDistance>(
  new FbxDistance(
  ( float  )  _lcvt.j2c<jfloat, float  >(pValue)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pUnit)
  ));
  return ret;
}
  /// ~FbxDistance ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxDistance_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxDistance)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxDistance *) lpjFbxDistance
  );
}
  /// const FbxSystemUnit  unit () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxDistance_unit(JNIEnv * __env, jclass __jc,jlong lpjFbxDistance)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxSystemUnit>(
  ((FbxDistance *) lpjFbxDistance)->unit(
  ));
  return ret;
}
  /// const float  value () const
extern "C" JNIEXPORT jfloat JNICALL Java_fbxsdk_FbxDistance_value(JNIEnv * __env, jclass __jc,jlong lpjFbxDistance)
{
  JNILocalConverter _lcvt(__env,__jc);
  jfloat ret=(jfloat)_lcvt.c2j<jfloat, const float  >(
  ((FbxDistance *) lpjFbxDistance)->value(
  ));
  return ret;
}
