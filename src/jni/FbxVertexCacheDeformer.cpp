//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// void  SetCache (FbxCache *pCache)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxVertexCacheDeformer_SetCache(JNIEnv * __env, jclass __jc,jlong lpjFbxVertexCacheDeformer,jlong pCache)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxVertexCacheDeformer *) lpjFbxVertexCacheDeformer)->SetCache(
  ( FbxCache  *)  _lcvt.j2c_object_pt<jlong, FbxCache>(pCache)
  );
}
  /// FbxCache *  GetCache () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxVertexCacheDeformer_GetCache(JNIEnv * __env, jclass __jc,jlong lpjFbxVertexCacheDeformer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxCache>(
  ((FbxVertexCacheDeformer *) lpjFbxVertexCacheDeformer)->GetCache(
  ));
  return ret;
}
  /// virtual EDeformerType  GetDeformerType () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxVertexCacheDeformer_GetDeformerType(JNIEnv * __env, jclass __jc,jlong lpjFbxVertexCacheDeformer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxDeformer::EDeformerType  >(
  ((FbxVertexCacheDeformer *) lpjFbxVertexCacheDeformer)->GetDeformerType(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  Active
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxVertexCacheDeformer_mepSetActive(JNIEnv * __env, jclass __jc,jlong lpjFbxVertexCacheDeformer,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxVertexCacheDeformer *) lpjFbxVertexCacheDeformer)->Active.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  Active
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxVertexCacheDeformer_mepGetActive(JNIEnv * __env, jclass __jc,jlong lpjFbxVertexCacheDeformer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxVertexCacheDeformer *) lpjFbxVertexCacheDeformer)->Active.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  Active
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxVertexCacheDeformer_mptGetActive(JNIEnv * __env, jclass __jc,jlong lpjFbxVertexCacheDeformer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxVertexCacheDeformer *) lpjFbxVertexCacheDeformer)->Active
  ));
  return ret;
}
  /// FbxPropertyT< FbxString >  Channel
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxVertexCacheDeformer_mepSetChannel(JNIEnv * __env, jclass __jc,jlong lpjFbxVertexCacheDeformer,jlong lpFbxString)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxVertexCacheDeformer *) lpjFbxVertexCacheDeformer)->Channel.Set(
  ( FbxString  )  _lcvt.j2c_object<jlong,FbxString >(lpFbxString)
  );
}
  /// FbxPropertyT< FbxString >  Channel
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxVertexCacheDeformer_mepGetChannel(JNIEnv * __env, jclass __jc,jlong lpjFbxVertexCacheDeformer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxString>(
  ((FbxVertexCacheDeformer *) lpjFbxVertexCacheDeformer)->Channel.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxString >  Channel
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxVertexCacheDeformer_mptGetChannel(JNIEnv * __env, jclass __jc,jlong lpjFbxVertexCacheDeformer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxString   >(
   (&((FbxVertexCacheDeformer *) lpjFbxVertexCacheDeformer)->Channel
  ));
  return ret;
}
  /// FbxPropertyT< FbxString >  CacheSet
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxVertexCacheDeformer_mepSetCacheSet(JNIEnv * __env, jclass __jc,jlong lpjFbxVertexCacheDeformer,jlong lpFbxString)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxVertexCacheDeformer *) lpjFbxVertexCacheDeformer)->CacheSet.Set(
  ( FbxString  )  _lcvt.j2c_object<jlong,FbxString >(lpFbxString)
  );
}
  /// FbxPropertyT< FbxString >  CacheSet
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxVertexCacheDeformer_mepGetCacheSet(JNIEnv * __env, jclass __jc,jlong lpjFbxVertexCacheDeformer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxString>(
  ((FbxVertexCacheDeformer *) lpjFbxVertexCacheDeformer)->CacheSet.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxString >  CacheSet
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxVertexCacheDeformer_mptGetCacheSet(JNIEnv * __env, jclass __jc,jlong lpjFbxVertexCacheDeformer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxString   >(
   (&((FbxVertexCacheDeformer *) lpjFbxVertexCacheDeformer)->CacheSet
  ));
  return ret;
}
  /// FbxVertexCacheDeformer * Create( FbxDeformer* lpFbxDeformer,  const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxVertexCacheDeformer_Create(JNIEnv * __env, jclass __jc,jlong lpFbxDeformer,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxVertexCacheDeformer>(
  FbxVertexCacheDeformer::Create(
  ( FbxDeformer  *)  _lcvt.j2c_object_pt<jlong, FbxDeformer>(lpFbxDeformer)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
