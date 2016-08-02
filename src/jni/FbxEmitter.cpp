
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// void  AddListener (FbxEventHandler &pHandler)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxEmitter_AddListener(JNIEnv * __env, jclass __jc,jlong lpjFbxEmitter,jobject pHandler)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxEmitter *) lpjFbxEmitter)->AddListener(
  ( FbxEventHandler  &) * _lcvt.j2c_object_ref<jobject,FbxEventHandler >(pHandler)
  );
}
  /// void  RemoveListener (FbxEventHandler &pHandler)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxEmitter_RemoveListener(JNIEnv * __env, jclass __jc,jlong lpjFbxEmitter,jobject pHandler)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxEmitter *) lpjFbxEmitter)->RemoveListener(
  ( FbxEventHandler  &) * _lcvt.j2c_object_ref<jobject,FbxEventHandler >(pHandler)
  );
}
