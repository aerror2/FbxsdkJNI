
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxTakeInfo ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxTakeInfo_meCreate(JNIEnv * __env, jclass __jc)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxTakeInfo>(
  new FbxTakeInfo(
  ));
  return ret;
}
  /// virtual  ~FbxTakeInfo ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxTakeInfo_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxTakeInfo)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxTakeInfo *) lpjFbxTakeInfo
  );
}
  /// FbxTakeInfo (const FbxTakeInfo &pTakeInfo)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxTakeInfo_meCreate1(JNIEnv * __env, jclass __jc,jobject pTakeInfo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxTakeInfo>(
  new FbxTakeInfo(
  (const FbxTakeInfo  &) * _lcvt.j2c_object_ref<jobject,FbxTakeInfo >(pTakeInfo)
  ));
  return ret;
}
  /// void  CopyLayers (const FbxTakeInfo &pTakeInfo)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxTakeInfo_CopyLayers(JNIEnv * __env, jclass __jc,jlong lpjFbxTakeInfo,jobject pTakeInfo)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxTakeInfo *) lpjFbxTakeInfo)->CopyLayers(
  (const FbxTakeInfo  &) * _lcvt.j2c_object_ref<jobject,FbxTakeInfo >(pTakeInfo)
  );
}
