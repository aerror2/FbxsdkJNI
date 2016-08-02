//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// virtual FbxNodeAttribute::EType  GetAttributeType () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxCachedEffect_GetAttributeType(JNIEnv * __env, jclass __jc,jlong lpjFbxCachedEffect)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxNodeAttribute::EType  >(
  ((FbxCachedEffect *) lpjFbxCachedEffect)->GetAttributeType(
  ));
  return ret;
}
  /// ECategory  GetCategory () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxCachedEffect_GetCategory(JNIEnv * __env, jclass __jc,jlong lpjFbxCachedEffect)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxCachedEffect::ECategory  >(
  ((FbxCachedEffect *) lpjFbxCachedEffect)->GetCategory(
  ));
  return ret;
}
  /// void  SetCache (FbxCache *pCache, ECategory pCategory=eGeneric)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCachedEffect_SetCache(JNIEnv * __env, jclass __jc,jlong lpjFbxCachedEffect,jlong pCache,jint pCategory)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCachedEffect *) lpjFbxCachedEffect)->SetCache(
  ( FbxCache  *)  _lcvt.j2c_object_pt<jlong, FbxCache>(pCache)
  ,
  ( FbxCachedEffect::ECategory  )  _lcvt.j2c<jint,FbxCachedEffect::ECategory >(pCategory)
  );
}
  /// FbxCache *  GetCache () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCachedEffect_GetCache(JNIEnv * __env, jclass __jc,jlong lpjFbxCachedEffect)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxCache>(
  ((FbxCachedEffect *) lpjFbxCachedEffect)->GetCache(
  ));
  return ret;
}
  /// FbxCachedEffect * Create( FbxNodeAttribute* lpFbxNodeAttribute,  const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCachedEffect_Create(JNIEnv * __env, jclass __jc,jlong lpFbxNodeAttribute,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxCachedEffect>(
  FbxCachedEffect::Create(
  ( FbxNodeAttribute  *)  _lcvt.j2c_object_pt<jlong, FbxNodeAttribute>(lpFbxNodeAttribute)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
