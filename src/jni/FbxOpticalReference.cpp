//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// virtual FbxNodeAttribute::EType  GetAttributeType () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxOpticalReference_GetAttributeType(JNIEnv * __env, jclass __jc,jlong lpjFbxOpticalReference)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxNodeAttribute::EType  >(
  ((FbxOpticalReference *) lpjFbxOpticalReference)->GetAttributeType(
  ));
  return ret;
}
  /// FbxOpticalReference * Create( FbxNodeAttribute* lpFbxNodeAttribute,  const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxOpticalReference_Create(JNIEnv * __env, jclass __jc,jlong lpFbxNodeAttribute,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxOpticalReference>(
  FbxOpticalReference::Create(
  ( FbxNodeAttribute  *)  _lcvt.j2c_object_pt<jlong, FbxNodeAttribute>(lpFbxNodeAttribute)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
