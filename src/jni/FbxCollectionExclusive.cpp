
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// bool  AddMember (FbxObject *pMember)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCollectionExclusive_AddMember(JNIEnv * __env, jclass __jc,jlong lpjFbxCollectionExclusive,jlong pMember)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxCollectionExclusive *) lpjFbxCollectionExclusive)->AddMember(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pMember)
  ));
  return ret;
}
  /// FbxCollectionExclusive * Create( FbxCollection* lpFbxCollection,  const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCollectionExclusive_Create(JNIEnv * __env, jclass __jc,jlong lpFbxCollection,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxCollectionExclusive>(
  FbxCollectionExclusive::Create(
  ( FbxCollection  *)  _lcvt.j2c_object_pt<jlong, FbxCollection>(lpFbxCollection)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
