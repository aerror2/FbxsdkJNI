
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// virtual void  Reset ()=0
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxPeripheral_Reset(JNIEnv * __env, jclass __jc,jlong lpjFbxPeripheral)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxPeripheral *) lpjFbxPeripheral)->Reset(
  );
}
  /// virtual bool  UnloadContentOf (FbxObject *pObject)=0
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxPeripheral_UnloadContentOf(JNIEnv * __env, jclass __jc,jlong lpjFbxPeripheral,jlong pObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxPeripheral *) lpjFbxPeripheral)->UnloadContentOf(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pObject)
  ));
  return ret;
}
  /// virtual bool  LoadContentOf (FbxObject *pObject)=0
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxPeripheral_LoadContentOf(JNIEnv * __env, jclass __jc,jlong lpjFbxPeripheral,jlong pObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxPeripheral *) lpjFbxPeripheral)->LoadContentOf(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pObject)
  ));
  return ret;
}
  /// virtual bool  CanUnloadContentOf (FbxObject *pObject)=0
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxPeripheral_CanUnloadContentOf(JNIEnv * __env, jclass __jc,jlong lpjFbxPeripheral,jlong pObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxPeripheral *) lpjFbxPeripheral)->CanUnloadContentOf(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pObject)
  ));
  return ret;
}
  /// virtual bool  CanLoadContentOf (FbxObject *pObject)=0
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxPeripheral_CanLoadContentOf(JNIEnv * __env, jclass __jc,jlong lpjFbxPeripheral,jlong pObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxPeripheral *) lpjFbxPeripheral)->CanLoadContentOf(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pObject)
  ));
  return ret;
}
  /// virtual void  InitializeConnectionsOf (FbxObject *pObject)=0
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxPeripheral_InitializeConnectionsOf(JNIEnv * __env, jclass __jc,jlong lpjFbxPeripheral,jlong pObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxPeripheral *) lpjFbxPeripheral)->InitializeConnectionsOf(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pObject)
  );
}
  /// virtual void  UninitializeConnectionsOf (FbxObject *pObject)=0
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxPeripheral_UninitializeConnectionsOf(JNIEnv * __env, jclass __jc,jlong lpjFbxPeripheral,jlong pObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxPeripheral *) lpjFbxPeripheral)->UninitializeConnectionsOf(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pObject)
  );
}
  /// FbxPeripheral ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxPeripheral_meCreate(JNIEnv * __env, jclass __jc)
{
  return 0;
}
  /// virtual  ~FbxPeripheral ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxPeripheral_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxPeripheral)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxPeripheral *) lpjFbxPeripheral
  );
}
