//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// virtual  ~FbxObjectFilter ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxObjectFilter_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxObjectFilter)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxObjectFilter *) lpjFbxObjectFilter
  );
}
  /// virtual bool  Match (const FbxObject *pObjectPtr) const =0
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxObjectFilter_Match(JNIEnv * __env, jclass __jc,jlong lpjFbxObjectFilter,jlong pObjectPtr)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxObjectFilter *) lpjFbxObjectFilter)->Match(
  (const FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pObjectPtr)
  ));
  return ret;
}
  /// virtual bool  NotMatch (const FbxObject *pObjectPtr) const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxObjectFilter_NotMatch(JNIEnv * __env, jclass __jc,jlong lpjFbxObjectFilter,jlong pObjectPtr)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxObjectFilter *) lpjFbxObjectFilter)->NotMatch(
  (const FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pObjectPtr)
  ));
  return ret;
}
  /// FbxObjectFilter * meCreate()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxObjectFilter_meCreate(JNIEnv * __env, jclass __jc)
{
  return 0;
}
