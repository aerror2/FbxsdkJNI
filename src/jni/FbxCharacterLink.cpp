//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxCharacterLink ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacterLink_meCreate(JNIEnv * __env, jclass __jc)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxCharacterLink>(
  new FbxCharacterLink(
  ));
  return ret;
}
  /// FbxCharacterLink (const FbxCharacterLink &pCharacterLink)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacterLink_meCreate1(JNIEnv * __env, jclass __jc,jobject pCharacterLink)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxCharacterLink>(
  new FbxCharacterLink(
  (const FbxCharacterLink  &) * _lcvt.j2c_object_ref<jobject,FbxCharacterLink >(pCharacterLink)
  ));
  return ret;
}
  /// void  Reset ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacterLink_Reset(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacterLink)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacterLink *) lpjFbxCharacterLink)->Reset(
  );
}
  /// void meDestroy(FbxCharacterLink * lpFbxCharacterLink)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacterLink_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacterLink)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxCharacterLink *) lpjFbxCharacterLink
  );
}
