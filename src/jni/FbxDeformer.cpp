//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// void  SetMultiLayer (bool pMultiLayer)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxDeformer_SetMultiLayer(JNIEnv * __env, jclass __jc,jlong lpjFbxDeformer,jboolean pMultiLayer)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxDeformer *) lpjFbxDeformer)->SetMultiLayer(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pMultiLayer)
  );
}
  /// bool  GetMultiLayer () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxDeformer_GetMultiLayer(JNIEnv * __env, jclass __jc,jlong lpjFbxDeformer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxDeformer *) lpjFbxDeformer)->GetMultiLayer(
  ));
  return ret;
}
  /// virtual EDeformerType  GetDeformerType () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxDeformer_GetDeformerType(JNIEnv * __env, jclass __jc,jlong lpjFbxDeformer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxDeformer::EDeformerType  >(
  ((FbxDeformer *) lpjFbxDeformer)->GetDeformerType(
  ));
  return ret;
}
  /// FbxDeformer * Create( FbxObject* lpFbxObject,  const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxDeformer_Create(JNIEnv * __env, jclass __jc,jlong lpFbxObject,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxDeformer>(
  FbxDeformer::Create(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(lpFbxObject)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
