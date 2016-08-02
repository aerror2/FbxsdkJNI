
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxStatus ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxStatus_meCreate(JNIEnv * __env, jclass __jc)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxStatus>(
  new FbxStatus(
  ));
  return ret;
}
  /// FbxStatus (EStatusCode pCode)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxStatus_meCreate1(JNIEnv * __env, jclass __jc,jint pCode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxStatus>(
  new FbxStatus(
  ( FbxStatus::EStatusCode  )  _lcvt.j2c<jint,FbxStatus::EStatusCode >(pCode)
  ));
  return ret;
}
  /// FbxStatus (const FbxStatus &rhs)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxStatus_meCreate2(JNIEnv * __env, jclass __jc,jobject rhs)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxStatus>(
  new FbxStatus(
  (const FbxStatus  &) * _lcvt.j2c_object_ref<jobject,FbxStatus >(rhs)
  ));
  return ret;
}
  /// bool  Error () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxStatus_Error(JNIEnv * __env, jclass __jc,jlong lpjFbxStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxStatus *) lpjFbxStatus)->Error(
  ));
  return ret;
}
  /// void  Clear ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxStatus_Clear(JNIEnv * __env, jclass __jc,jlong lpjFbxStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxStatus *) lpjFbxStatus)->Clear(
  );
}
  /// EStatusCode  GetCode () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxStatus_GetCode(JNIEnv * __env, jclass __jc,jlong lpjFbxStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxStatus::EStatusCode  >(
  ((FbxStatus *) lpjFbxStatus)->GetCode(
  ));
  return ret;
}
  /// void  SetCode (const EStatusCode rhs)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxStatus_SetCode(JNIEnv * __env, jclass __jc,jlong lpjFbxStatus,jint rhs)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxStatus *) lpjFbxStatus)->SetCode(
  (const FbxStatus::EStatusCode  )  _lcvt.j2c<jint,FbxStatus::EStatusCode >(rhs)
  );
}
  /// const char *  GetErrorString () const
extern "C" JNIEXPORT jstring JNICALL Java_fbxsdk_FbxStatus_GetErrorString(JNIEnv * __env, jclass __jc,jlong lpjFbxStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jstring ret=(jstring)_lcvt.c2j_string(
  ((FbxStatus *) lpjFbxStatus)->GetErrorString(
  ));
  return ret;
}
  /// void meDestroy(FbxStatus * lpFbxStatus)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxStatus_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxStatus *) lpjFbxStatus
  );
}
