
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// bool  SetTextureBlendMode (int pIndex, EBlendMode pMode)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxLayeredTexture_SetTextureBlendMode(JNIEnv * __env, jclass __jc,jlong lpjFbxLayeredTexture,jint pIndex,jint pMode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxLayeredTexture *) lpjFbxLayeredTexture)->SetTextureBlendMode(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ,
  ( FbxLayeredTexture::EBlendMode  )  _lcvt.j2c<jint,FbxLayeredTexture::EBlendMode >(pMode)
  ));
  return ret;
}
  /// bool  GetTextureBlendMode (int pIndex, EBlendMode &pMode) const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxLayeredTexture_GetTextureBlendMode(JNIEnv * __env, jclass __jc,jlong lpjFbxLayeredTexture,jint pIndex,jobject pMode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxLayeredTexture *) lpjFbxLayeredTexture)->GetTextureBlendMode(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ,
  ( FbxLayeredTexture::EBlendMode  &) * _lcvt.j2c_int_ref<jobject,FbxLayeredTexture::EBlendMode>(pMode)
  ));
  return ret;
}
  /// bool  SetTextureAlpha (int pIndex, double pAlpha)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxLayeredTexture_SetTextureAlpha(JNIEnv * __env, jclass __jc,jlong lpjFbxLayeredTexture,jint pIndex,jdouble pAlpha)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxLayeredTexture *) lpjFbxLayeredTexture)->SetTextureAlpha(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ,
  ( double  )  _lcvt.j2c<jdouble, double  >(pAlpha)
  ));
  return ret;
}
  /// bool  GetTextureAlpha (int pIndex, double &pAlpha) const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxLayeredTexture_GetTextureAlpha(JNIEnv * __env, jclass __jc,jlong lpjFbxLayeredTexture,jint pIndex,jobject pAlpha)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxLayeredTexture *) lpjFbxLayeredTexture)->GetTextureAlpha(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ,
  ( double  &) * _lcvt.j2c_double_ref<jobject,double>(pAlpha)
  ));
  return ret;
}
  /// FbxLayeredTexture * Create( FbxLayerContainer* pOwner, const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLayeredTexture_Create(JNIEnv * __env, jclass __jc,jlong pOwner,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxLayeredTexture>(
  FbxLayeredTexture::Create(
  ( FbxLayerContainer  *)  _lcvt.j2c_object_pt<jlong, FbxLayerContainer>(pOwner)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
