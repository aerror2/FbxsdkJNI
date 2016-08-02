//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxGate ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGate_meCreate(JNIEnv * __env, jclass __jc)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxGate>(
  new FbxGate(
  ));
  return ret;
}
  /// virtual  ~FbxGate ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxGate_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxGate)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxGate *) lpjFbxGate
  );
}
  /// void  Open ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxGate_Open(JNIEnv * __env, jclass __jc,jlong lpjFbxGate)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxGate *) lpjFbxGate)->Open(
  );
}
  /// void  Close ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxGate_Close(JNIEnv * __env, jclass __jc,jlong lpjFbxGate)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxGate *) lpjFbxGate)->Close(
  );
}
  /// bool  IsOpen ()
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxGate_IsOpen(JNIEnv * __env, jclass __jc,jlong lpjFbxGate)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxGate *) lpjFbxGate)->IsOpen(
  ));
  return ret;
}
  /// bool  Wait ()
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxGate_Wait(JNIEnv * __env, jclass __jc,jlong lpjFbxGate)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxGate *) lpjFbxGate)->Wait(
  ));
  return ret;
}
