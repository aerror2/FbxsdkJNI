
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// void  SetMultiLayer (bool pMultiLayer)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxSubDeformer_SetMultiLayer(JNIEnv * __env, jclass __jc,jlong lpjFbxSubDeformer,jboolean pMultiLayer)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxSubDeformer *) lpjFbxSubDeformer)->SetMultiLayer(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pMultiLayer)
  );
}
  /// bool  GetMultiLayer () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxSubDeformer_GetMultiLayer(JNIEnv * __env, jclass __jc,jlong lpjFbxSubDeformer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxSubDeformer *) lpjFbxSubDeformer)->GetMultiLayer(
  ));
  return ret;
}
  /// virtual EType  GetSubDeformerType () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxSubDeformer_GetSubDeformerType(JNIEnv * __env, jclass __jc,jlong lpjFbxSubDeformer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxSubDeformer::EType  >(
  ((FbxSubDeformer *) lpjFbxSubDeformer)->GetSubDeformerType(
  ));
  return ret;
}
  /// FbxSubDeformer * Create( FbxObject* lpFbxObject,  const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxSubDeformer_Create(JNIEnv * __env, jclass __jc,jlong lpFbxObject,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxSubDeformer>(
  FbxSubDeformer::Create(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(lpFbxObject)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
