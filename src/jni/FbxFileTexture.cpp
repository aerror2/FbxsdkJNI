//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// void  Reset ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxFileTexture_Reset(JNIEnv * __env, jclass __jc,jlong lpjFbxFileTexture)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxFileTexture *) lpjFbxFileTexture)->Reset(
  );
}
  /// bool  SetFileName (const char *pName)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxFileTexture_SetFileName(JNIEnv * __env, jclass __jc,jlong lpjFbxFileTexture,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxFileTexture *) lpjFbxFileTexture)->SetFileName(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
  /// bool  SetRelativeFileName (const char *pName)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxFileTexture_SetRelativeFileName(JNIEnv * __env, jclass __jc,jlong lpjFbxFileTexture,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxFileTexture *) lpjFbxFileTexture)->SetRelativeFileName(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
  /// const char *  GetFileName () const
extern "C" JNIEXPORT jstring JNICALL Java_fbxsdk_FbxFileTexture_GetFileName(JNIEnv * __env, jclass __jc,jlong lpjFbxFileTexture)
{
  JNILocalConverter _lcvt(__env,__jc);
  jstring ret=(jstring)_lcvt.c2j_string(
  ((FbxFileTexture *) lpjFbxFileTexture)->GetFileName(
  ));
  return ret;
}
  /// const char *  GetRelativeFileName () const
extern "C" JNIEXPORT jstring JNICALL Java_fbxsdk_FbxFileTexture_GetRelativeFileName(JNIEnv * __env, jclass __jc,jlong lpjFbxFileTexture)
{
  JNILocalConverter _lcvt(__env,__jc);
  jstring ret=(jstring)_lcvt.c2j_string(
  ((FbxFileTexture *) lpjFbxFileTexture)->GetRelativeFileName(
  ));
  return ret;
}
  /// void  SetMaterialUse (EMaterialUse pMaterialUse)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxFileTexture_SetMaterialUse(JNIEnv * __env, jclass __jc,jlong lpjFbxFileTexture,jint pMaterialUse)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxFileTexture *) lpjFbxFileTexture)->SetMaterialUse(
  ( FbxFileTexture::EMaterialUse  )  _lcvt.j2c<jint,FbxFileTexture::EMaterialUse >(pMaterialUse)
  );
}
  /// EMaterialUse  GetMaterialUse () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxFileTexture_GetMaterialUse(JNIEnv * __env, jclass __jc,jlong lpjFbxFileTexture)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxFileTexture::EMaterialUse  >(
  ((FbxFileTexture *) lpjFbxFileTexture)->GetMaterialUse(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  UseMaterial
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxFileTexture_mepSetUseMaterial(JNIEnv * __env, jclass __jc,jlong lpjFbxFileTexture,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxFileTexture *) lpjFbxFileTexture)->UseMaterial.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  UseMaterial
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxFileTexture_mepGetUseMaterial(JNIEnv * __env, jclass __jc,jlong lpjFbxFileTexture)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxFileTexture *) lpjFbxFileTexture)->UseMaterial.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  UseMaterial
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxFileTexture_mptGetUseMaterial(JNIEnv * __env, jclass __jc,jlong lpjFbxFileTexture)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxFileTexture *) lpjFbxFileTexture)->UseMaterial
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  UseMipMap
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxFileTexture_mepSetUseMipMap(JNIEnv * __env, jclass __jc,jlong lpjFbxFileTexture,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxFileTexture *) lpjFbxFileTexture)->UseMipMap.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  UseMipMap
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxFileTexture_mepGetUseMipMap(JNIEnv * __env, jclass __jc,jlong lpjFbxFileTexture)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxFileTexture *) lpjFbxFileTexture)->UseMipMap.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  UseMipMap
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxFileTexture_mptGetUseMipMap(JNIEnv * __env, jclass __jc,jlong lpjFbxFileTexture)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxFileTexture *) lpjFbxFileTexture)->UseMipMap
  ));
  return ret;
}
  /// FbxFileTexture * Create( FbxTexture* lpFbxTexture,  const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxFileTexture_Create(JNIEnv * __env, jclass __jc,jlong lpFbxTexture,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxFileTexture>(
  FbxFileTexture::Create(
  ( FbxTexture  *)  _lcvt.j2c_object_pt<jlong, FbxTexture>(lpFbxTexture)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
