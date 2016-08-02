//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// bool  Valid () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxDataType_Valid(JNIEnv * __env, jclass __jc,jlong lpjFbxDataType)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxDataType *) lpjFbxDataType)->Valid(
  ));
  return ret;
}
  /// bool  Is (const FbxDataType &pDataType) const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxDataType_Is(JNIEnv * __env, jclass __jc,jlong lpjFbxDataType,jobject pDataType)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxDataType *) lpjFbxDataType)->Is(
  (const FbxDataType  &) * _lcvt.j2c_object_ref<jobject,FbxDataType >(pDataType)
  ));
  return ret;
}
  /// EFbxType  GetType () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxDataType_GetType(JNIEnv * __env, jclass __jc,jlong lpjFbxDataType)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  EFbxType  >(
  ((FbxDataType *) lpjFbxDataType)->GetType(
  ));
  return ret;
}
  /// const char *  GetName () const
extern "C" JNIEXPORT jstring JNICALL Java_fbxsdk_FbxDataType_GetName(JNIEnv * __env, jclass __jc,jlong lpjFbxDataType)
{
  JNILocalConverter _lcvt(__env,__jc);
  jstring ret=(jstring)_lcvt.c2j_string(
  ((FbxDataType *) lpjFbxDataType)->GetName(
  ));
  return ret;
}
  /// const FbxPropertyHandle &  GetTypeInfoHandle () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxDataType_GetTypeInfoHandle(JNIEnv * __env, jclass __jc,jlong lpjFbxDataType)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_ref<jlong, FbxPropertyHandle>(
  ((FbxDataType *) lpjFbxDataType)->GetTypeInfoHandle(
  ));
  return ret;
}
  /// FbxDataType ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxDataType_meCreate(JNIEnv * __env, jclass __jc)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxDataType>(
  new FbxDataType(
  ));
  return ret;
}
  /// FbxDataType (const FbxDataType &pDataType)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxDataType_meCreate1(JNIEnv * __env, jclass __jc,jobject pDataType)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxDataType>(
  new FbxDataType(
  (const FbxDataType  &) * _lcvt.j2c_object_ref<jobject,FbxDataType >(pDataType)
  ));
  return ret;
}
  /// void  Destroy ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxDataType_Destroy(JNIEnv * __env, jclass __jc,jlong lpjFbxDataType)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxDataType *) lpjFbxDataType)->Destroy(
  );
}
  /// FbxDataType (const FbxPropertyHandle &pTypeInfoHandle)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxDataType_meCreate2(JNIEnv * __env, jclass __jc,jobject pTypeInfoHandle)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxDataType>(
  new FbxDataType(
  (const FbxPropertyHandle  &) * _lcvt.j2c_object_ref<jobject,FbxPropertyHandle >(pTypeInfoHandle)
  ));
  return ret;
}
  /// ~FbxDataType ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxDataType_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxDataType)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxDataType *) lpjFbxDataType
  );
}
