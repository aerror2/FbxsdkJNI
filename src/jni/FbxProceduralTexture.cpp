
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// void  Reset ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxProceduralTexture_Reset(JNIEnv * __env, jclass __jc,jlong lpjFbxProceduralTexture)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxProceduralTexture *) lpjFbxProceduralTexture)->Reset(
  );
}
  /// void  SetBlob (FbxBlob &pBlob)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxProceduralTexture_SetBlob(JNIEnv * __env, jclass __jc,jlong lpjFbxProceduralTexture,jobject pBlob)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxProceduralTexture *) lpjFbxProceduralTexture)->SetBlob(
  ( FbxBlob  &) * _lcvt.j2c_object_ref<jobject,FbxBlob >(pBlob)
  );
}
  /// FbxBlob  GetBlob () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxProceduralTexture_GetBlob(JNIEnv * __env, jclass __jc,jlong lpjFbxProceduralTexture)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxBlob>(
  ((FbxProceduralTexture *) lpjFbxProceduralTexture)->GetBlob(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBlob >  BlobProp
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxProceduralTexture_mepSetBlobProp(JNIEnv * __env, jclass __jc,jlong lpjFbxProceduralTexture,jlong lpFbxBlob)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxProceduralTexture *) lpjFbxProceduralTexture)->BlobProp.Set(
  ( FbxBlob  )  _lcvt.j2c_object<jlong,FbxBlob >(lpFbxBlob)
  );
}
  /// FbxPropertyT< FbxBlob >  BlobProp
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxProceduralTexture_mepGetBlobProp(JNIEnv * __env, jclass __jc,jlong lpjFbxProceduralTexture)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxBlob>(
  ((FbxProceduralTexture *) lpjFbxProceduralTexture)->BlobProp.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBlob >  BlobProp
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxProceduralTexture_mptGetBlobProp(JNIEnv * __env, jclass __jc,jlong lpjFbxProceduralTexture)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBlob   >(
   (&((FbxProceduralTexture *) lpjFbxProceduralTexture)->BlobProp
  ));
  return ret;
}
  /// FbxProceduralTexture * Create( FbxTexture* lpFbxTexture,  const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxProceduralTexture_Create(JNIEnv * __env, jclass __jc,jlong lpFbxTexture,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxProceduralTexture>(
  FbxProceduralTexture::Create(
  ( FbxTexture  *)  _lcvt.j2c_object_pt<jlong, FbxTexture>(lpFbxTexture)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
