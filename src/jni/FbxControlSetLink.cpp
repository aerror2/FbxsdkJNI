
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxControlSetLink ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxControlSetLink_meCreate(JNIEnv * __env, jclass __jc)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxControlSetLink>(
  new FbxControlSetLink(
  ));
  return ret;
}
  /// FbxControlSetLink (const FbxControlSetLink &pControlSetLink)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxControlSetLink_meCreate1(JNIEnv * __env, jclass __jc,jobject pControlSetLink)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxControlSetLink>(
  new FbxControlSetLink(
  (const FbxControlSetLink  &) * _lcvt.j2c_object_ref<jobject,FbxControlSetLink >(pControlSetLink)
  ));
  return ret;
}
  /// void  Reset ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxControlSetLink_Reset(JNIEnv * __env, jclass __jc,jlong lpjFbxControlSetLink)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxControlSetLink *) lpjFbxControlSetLink)->Reset(
  );
}
  /// void meDestroy(FbxControlSetLink * lpFbxControlSetLink)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxControlSetLink_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxControlSetLink)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxControlSetLink *) lpjFbxControlSetLink
  );
}
