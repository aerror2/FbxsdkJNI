//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// virtual bool  Match (const FbxObject *pObjectPtr) const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxNameFilter_Match(JNIEnv * __env, jclass __jc,jlong lpjFbxNameFilter,jlong pObjectPtr)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxNameFilter *) lpjFbxNameFilter)->Match(
  (const FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pObjectPtr)
  ));
  return ret;
}
  /// FbxNameFilter (const char *pTargetName)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNameFilter_meCreate(JNIEnv * __env, jclass __jc,jstring pTargetName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxNameFilter>(
  new FbxNameFilter(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pTargetName)
  ));
  return ret;
}
  /// virtual  ~FbxNameFilter ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNameFilter_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxNameFilter)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxNameFilter *) lpjFbxNameFilter
  );
}
