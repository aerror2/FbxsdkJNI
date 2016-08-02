//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// void  SetBlendMode (EBlendMode pBlendMode)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLayerElementTexture_SetBlendMode(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementTexture,jint pBlendMode)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLayerElementTexture *) lpjFbxLayerElementTexture)->SetBlendMode(
  ( FbxLayerElementTexture::EBlendMode  )  _lcvt.j2c<jint,FbxLayerElementTexture::EBlendMode >(pBlendMode)
  );
}
  /// void  SetAlpha (double pAlpha)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLayerElementTexture_SetAlpha(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementTexture,jdouble pAlpha)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLayerElementTexture *) lpjFbxLayerElementTexture)->SetAlpha(
  ( double  )  _lcvt.j2c<jdouble, double  >(pAlpha)
  );
}
  /// EBlendMode  GetBlendMode () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLayerElementTexture_GetBlendMode(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementTexture)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxLayerElementTexture::EBlendMode  >(
  ((FbxLayerElementTexture *) lpjFbxLayerElementTexture)->GetBlendMode(
  ));
  return ret;
}
  /// double  GetAlpha () const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxLayerElementTexture_GetAlpha(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementTexture)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxLayerElementTexture *) lpjFbxLayerElementTexture)->GetAlpha(
  ));
  return ret;
}
