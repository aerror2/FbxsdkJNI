//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxStringList ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxStringList_meCreate(JNIEnv * __env, jclass __jc)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxStringList>(
  new FbxStringList(
  ));
  return ret;
}
  /// FbxStringList (const FbxStringList &pOriginal)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxStringList_meCreate1(JNIEnv * __env, jclass __jc,jobject pOriginal)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxStringList>(
  new FbxStringList(
  (const FbxStringList  &) * _lcvt.j2c_object_ref<jobject,FbxStringList >(pOriginal)
  ));
  return ret;
}
  /// void  CopyFrom (const FbxStringList *pOriginal)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxStringList_CopyFrom(JNIEnv * __env, jclass __jc,jlong lpjFbxStringList,jlong pOriginal)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxStringList *) lpjFbxStringList)->CopyFrom(
  (const FbxStringList  *)  _lcvt.j2c_object_pt<jlong, FbxStringList>(pOriginal)
  );
}
  /// void meDestroy(FbxStringList * lpFbxStringList)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxStringList_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxStringList)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxStringList *) lpjFbxStringList
  );
}
