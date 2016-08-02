//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// virtual void  Reset ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxTexture_Reset(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxTexture *) lpjFbxTexture)->Reset(
  );
}
  /// void  SetSwapUV (bool pSwapUV)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxTexture_SetSwapUV(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture,jboolean pSwapUV)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxTexture *) lpjFbxTexture)->SetSwapUV(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pSwapUV)
  );
}
  /// bool  GetSwapUV () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxTexture_GetSwapUV(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxTexture *) lpjFbxTexture)->GetSwapUV(
  ));
  return ret;
}
  /// void  SetPremultiplyAlpha (bool pPremultiplyAlpha)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxTexture_SetPremultiplyAlpha(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture,jboolean pPremultiplyAlpha)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxTexture *) lpjFbxTexture)->SetPremultiplyAlpha(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pPremultiplyAlpha)
  );
}
  /// bool  GetPremultiplyAlpha () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxTexture_GetPremultiplyAlpha(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxTexture *) lpjFbxTexture)->GetPremultiplyAlpha(
  ));
  return ret;
}
  /// void  SetAlphaSource (EAlphaSource pAlphaSource)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxTexture_SetAlphaSource(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture,jint pAlphaSource)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxTexture *) lpjFbxTexture)->SetAlphaSource(
  ( FbxTexture::EAlphaSource  )  _lcvt.j2c<jint,FbxTexture::EAlphaSource >(pAlphaSource)
  );
}
  /// EAlphaSource  GetAlphaSource () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxTexture_GetAlphaSource(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxTexture::EAlphaSource  >(
  ((FbxTexture *) lpjFbxTexture)->GetAlphaSource(
  ));
  return ret;
}
  /// void  SetCropping (int pLeft, int pTop, int pRight, int pBottom)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxTexture_SetCropping(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture,jint pLeft,jint pTop,jint pRight,jint pBottom)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxTexture *) lpjFbxTexture)->SetCropping(
  ( int  )  _lcvt.j2c<jint, int  >(pLeft)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pTop)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pRight)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pBottom)
  );
}
  /// int  GetCroppingLeft () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxTexture_GetCroppingLeft(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxTexture *) lpjFbxTexture)->GetCroppingLeft(
  ));
  return ret;
}
  /// int  GetCroppingTop () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxTexture_GetCroppingTop(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxTexture *) lpjFbxTexture)->GetCroppingTop(
  ));
  return ret;
}
  /// int  GetCroppingRight () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxTexture_GetCroppingRight(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxTexture *) lpjFbxTexture)->GetCroppingRight(
  ));
  return ret;
}
  /// int  GetCroppingBottom () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxTexture_GetCroppingBottom(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxTexture *) lpjFbxTexture)->GetCroppingBottom(
  ));
  return ret;
}
  /// void  SetMappingType (EMappingType pMappingType)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxTexture_SetMappingType(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture,jint pMappingType)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxTexture *) lpjFbxTexture)->SetMappingType(
  ( FbxTexture::EMappingType  )  _lcvt.j2c<jint,FbxTexture::EMappingType >(pMappingType)
  );
}
  /// EMappingType  GetMappingType () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxTexture_GetMappingType(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxTexture::EMappingType  >(
  ((FbxTexture *) lpjFbxTexture)->GetMappingType(
  ));
  return ret;
}
  /// void  SetPlanarMappingNormal (EPlanarMappingNormal pPlanarMappingNormal)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxTexture_SetPlanarMappingNormal(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture,jint pPlanarMappingNormal)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxTexture *) lpjFbxTexture)->SetPlanarMappingNormal(
  ( FbxTexture::EPlanarMappingNormal  )  _lcvt.j2c<jint,FbxTexture::EPlanarMappingNormal >(pPlanarMappingNormal)
  );
}
  /// EPlanarMappingNormal  GetPlanarMappingNormal () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxTexture_GetPlanarMappingNormal(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxTexture::EPlanarMappingNormal  >(
  ((FbxTexture *) lpjFbxTexture)->GetPlanarMappingNormal(
  ));
  return ret;
}
  /// void  SetTextureUse (ETextureUse pTextureUse)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxTexture_SetTextureUse(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture,jint pTextureUse)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxTexture *) lpjFbxTexture)->SetTextureUse(
  ( FbxTexture::ETextureUse  )  _lcvt.j2c<jint,FbxTexture::ETextureUse >(pTextureUse)
  );
}
  /// ETextureUse  GetTextureUse () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxTexture_GetTextureUse(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxTexture::ETextureUse  >(
  ((FbxTexture *) lpjFbxTexture)->GetTextureUse(
  ));
  return ret;
}
  /// void  SetWrapMode (EWrapMode pWrapU, EWrapMode pWrapV)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxTexture_SetWrapMode(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture,jint pWrapU,jint pWrapV)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxTexture *) lpjFbxTexture)->SetWrapMode(
  ( FbxTexture::EWrapMode  )  _lcvt.j2c<jint,FbxTexture::EWrapMode >(pWrapU)
  ,
  ( FbxTexture::EWrapMode  )  _lcvt.j2c<jint,FbxTexture::EWrapMode >(pWrapV)
  );
}
  /// EWrapMode  GetWrapModeU () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxTexture_GetWrapModeU(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxTexture::EWrapMode  >(
  ((FbxTexture *) lpjFbxTexture)->GetWrapModeU(
  ));
  return ret;
}
  /// EWrapMode  GetWrapModeV () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxTexture_GetWrapModeV(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxTexture::EWrapMode  >(
  ((FbxTexture *) lpjFbxTexture)->GetWrapModeV(
  ));
  return ret;
}
  /// void  SetBlendMode (EBlendMode pBlendMode)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxTexture_SetBlendMode(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture,jint pBlendMode)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxTexture *) lpjFbxTexture)->SetBlendMode(
  ( FbxTexture::EBlendMode  )  _lcvt.j2c<jint,FbxTexture::EBlendMode >(pBlendMode)
  );
}
  /// EBlendMode  GetBlendMode () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxTexture_GetBlendMode(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxTexture::EBlendMode  >(
  ((FbxTexture *) lpjFbxTexture)->GetBlendMode(
  ));
  return ret;
}
  /// void  SetDefaultT (const FbxVector4 &pT)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxTexture_SetDefaultT(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture,jobject pT)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxTexture *) lpjFbxTexture)->SetDefaultT(
  (const FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pT)
  );
}
  /// FbxVector4 &  GetDefaultT (FbxVector4 &pT) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxTexture_GetDefaultT(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture,jobject pT)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_ref<jlong, FbxVector4>(
  ((FbxTexture *) lpjFbxTexture)->GetDefaultT(
  ( FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pT)
  ));
  return ret;
}
  /// void  SetDefaultR (const FbxVector4 &pR)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxTexture_SetDefaultR(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture,jobject pR)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxTexture *) lpjFbxTexture)->SetDefaultR(
  (const FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pR)
  );
}
  /// FbxVector4 &  GetDefaultR (FbxVector4 &pR) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxTexture_GetDefaultR(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture,jobject pR)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_ref<jlong, FbxVector4>(
  ((FbxTexture *) lpjFbxTexture)->GetDefaultR(
  ( FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pR)
  ));
  return ret;
}
  /// void  SetDefaultS (const FbxVector4 &pS)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxTexture_SetDefaultS(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture,jobject pS)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxTexture *) lpjFbxTexture)->SetDefaultS(
  (const FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pS)
  );
}
  /// FbxVector4 &  GetDefaultS (FbxVector4 &pS) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxTexture_GetDefaultS(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture,jobject pS)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_ref<jlong, FbxVector4>(
  ((FbxTexture *) lpjFbxTexture)->GetDefaultS(
  ( FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pS)
  ));
  return ret;
}
  /// void  SetDefaultAlpha (double pAlpha)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxTexture_SetDefaultAlpha(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture,jdouble pAlpha)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxTexture *) lpjFbxTexture)->SetDefaultAlpha(
  ( double  )  _lcvt.j2c<jdouble, double  >(pAlpha)
  );
}
  /// double  GetDefaultAlpha () const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxTexture_GetDefaultAlpha(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxTexture *) lpjFbxTexture)->GetDefaultAlpha(
  ));
  return ret;
}
  /// void  SetTranslation (double pU, double pV)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxTexture_SetTranslation(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture,jdouble pU,jdouble pV)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxTexture *) lpjFbxTexture)->SetTranslation(
  ( double  )  _lcvt.j2c<jdouble, double  >(pU)
  ,
  ( double  )  _lcvt.j2c<jdouble, double  >(pV)
  );
}
  /// double  GetTranslationU () const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxTexture_GetTranslationU(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxTexture *) lpjFbxTexture)->GetTranslationU(
  ));
  return ret;
}
  /// double  GetTranslationV () const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxTexture_GetTranslationV(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxTexture *) lpjFbxTexture)->GetTranslationV(
  ));
  return ret;
}
  /// void  SetRotation (double pU, double pV, double pW=0.0)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxTexture_SetRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture,jdouble pU,jdouble pV,jdouble pW)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxTexture *) lpjFbxTexture)->SetRotation(
  ( double  )  _lcvt.j2c<jdouble, double  >(pU)
  ,
  ( double  )  _lcvt.j2c<jdouble, double  >(pV)
  ,
  ( double  )  _lcvt.j2c<jdouble, double  >(pW)
  );
}
  /// double  GetRotationU () const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxTexture_GetRotationU(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxTexture *) lpjFbxTexture)->GetRotationU(
  ));
  return ret;
}
  /// double  GetRotationV () const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxTexture_GetRotationV(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxTexture *) lpjFbxTexture)->GetRotationV(
  ));
  return ret;
}
  /// double  GetRotationW () const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxTexture_GetRotationW(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxTexture *) lpjFbxTexture)->GetRotationW(
  ));
  return ret;
}
  /// void  SetScale (double pU, double pV)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxTexture_SetScale(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture,jdouble pU,jdouble pV)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxTexture *) lpjFbxTexture)->SetScale(
  ( double  )  _lcvt.j2c<jdouble, double  >(pU)
  ,
  ( double  )  _lcvt.j2c<jdouble, double  >(pV)
  );
}
  /// double  GetScaleU () const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxTexture_GetScaleU(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxTexture *) lpjFbxTexture)->GetScaleU(
  ));
  return ret;
}
  /// double  GetScaleV () const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxTexture_GetScaleV(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxTexture *) lpjFbxTexture)->GetScaleV(
  ));
  return ret;
}
  /// FbxPropertyT< ETextureUse6 >  TextureTypeUse
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxTexture_mepSetTextureTypeUse(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture,jint lpETextureUse6)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxTexture *) lpjFbxTexture)->TextureTypeUse.Set(
  ( FbxTexture::ETextureUse6  )  _lcvt.j2c<jint,FbxTexture::ETextureUse6 >(lpETextureUse6)
  );
}
  /// FbxPropertyT< ETextureUse6 >  TextureTypeUse
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxTexture_mepGetTextureTypeUse(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxTexture::ETextureUse6  >(
  ((FbxTexture *) lpjFbxTexture)->TextureTypeUse.Get(
  ));
  return ret;
}
  /// FbxPropertyT< ETextureUse6 >  TextureTypeUse
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxTexture_mptGetTextureTypeUse(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxTexture::ETextureUse6   >(
   (&((FbxTexture *) lpjFbxTexture)->TextureTypeUse
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  Alpha
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxTexture_mepSetAlpha(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxTexture *) lpjFbxTexture)->Alpha.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  Alpha
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxTexture_mepGetAlpha(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxTexture *) lpjFbxTexture)->Alpha.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  Alpha
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxTexture_mptGetAlpha(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxTexture *) lpjFbxTexture)->Alpha
  ));
  return ret;
}
  /// FbxPropertyT< EUnifiedMappingType >  CurrentMappingType
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxTexture_mepSetCurrentMappingType(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture,jint lpEUnifiedMappingType)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxTexture *) lpjFbxTexture)->CurrentMappingType.Set(
  ( FbxTexture::EUnifiedMappingType  )  _lcvt.j2c<jint,FbxTexture::EUnifiedMappingType >(lpEUnifiedMappingType)
  );
}
  /// FbxPropertyT< EUnifiedMappingType >  CurrentMappingType
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxTexture_mepGetCurrentMappingType(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxTexture::EUnifiedMappingType  >(
  ((FbxTexture *) lpjFbxTexture)->CurrentMappingType.Get(
  ));
  return ret;
}
  /// FbxPropertyT< EUnifiedMappingType >  CurrentMappingType
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxTexture_mptGetCurrentMappingType(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxTexture::EUnifiedMappingType   >(
   (&((FbxTexture *) lpjFbxTexture)->CurrentMappingType
  ));
  return ret;
}
  /// FbxPropertyT< EWrapMode >  WrapModeU
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxTexture_mepSetWrapModeU(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture,jint lpEWrapMode)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxTexture *) lpjFbxTexture)->WrapModeU.Set(
  ( FbxTexture::EWrapMode  )  _lcvt.j2c<jint,FbxTexture::EWrapMode >(lpEWrapMode)
  );
}
  /// FbxPropertyT< EWrapMode >  WrapModeU
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxTexture_mepGetWrapModeU(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxTexture::EWrapMode  >(
  ((FbxTexture *) lpjFbxTexture)->WrapModeU.Get(
  ));
  return ret;
}
  /// FbxPropertyT< EWrapMode >  WrapModeU
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxTexture_mptGetWrapModeU(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxTexture::EWrapMode   >(
   (&((FbxTexture *) lpjFbxTexture)->WrapModeU
  ));
  return ret;
}
  /// FbxPropertyT< EWrapMode >  WrapModeV
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxTexture_mepSetWrapModeV(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture,jint lpEWrapMode)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxTexture *) lpjFbxTexture)->WrapModeV.Set(
  ( FbxTexture::EWrapMode  )  _lcvt.j2c<jint,FbxTexture::EWrapMode >(lpEWrapMode)
  );
}
  /// FbxPropertyT< EWrapMode >  WrapModeV
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxTexture_mepGetWrapModeV(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxTexture::EWrapMode  >(
  ((FbxTexture *) lpjFbxTexture)->WrapModeV.Get(
  ));
  return ret;
}
  /// FbxPropertyT< EWrapMode >  WrapModeV
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxTexture_mptGetWrapModeV(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxTexture::EWrapMode   >(
   (&((FbxTexture *) lpjFbxTexture)->WrapModeV
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  UVSwap
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxTexture_mepSetUVSwap(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxTexture *) lpjFbxTexture)->UVSwap.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  UVSwap
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxTexture_mepGetUVSwap(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxTexture *) lpjFbxTexture)->UVSwap.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  UVSwap
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxTexture_mptGetUVSwap(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxTexture *) lpjFbxTexture)->UVSwap
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  PremultiplyAlpha
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxTexture_mepSetPremultiplyAlpha(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxTexture *) lpjFbxTexture)->PremultiplyAlpha.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  PremultiplyAlpha
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxTexture_mepGetPremultiplyAlpha(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxTexture *) lpjFbxTexture)->PremultiplyAlpha.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  PremultiplyAlpha
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxTexture_mptGetPremultiplyAlpha(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxTexture *) lpjFbxTexture)->PremultiplyAlpha
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  Translation
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxTexture_mepSetTranslation(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture,jlong lpFbxDouble3)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxTexture *) lpjFbxTexture)->Translation.Set(
  ( FbxDouble3  )  _lcvt.j2c_object<jlong,FbxDouble3 >(lpFbxDouble3)
  );
}
  /// FbxPropertyT< FbxDouble3 >  Translation
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxTexture_mepGetTranslation(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxDouble3>(
  ((FbxTexture *) lpjFbxTexture)->Translation.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  Translation
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxTexture_mptGetTranslation(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble3   >(
   (&((FbxTexture *) lpjFbxTexture)->Translation
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  Rotation
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxTexture_mepSetRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture,jlong lpFbxDouble3)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxTexture *) lpjFbxTexture)->Rotation.Set(
  ( FbxDouble3  )  _lcvt.j2c_object<jlong,FbxDouble3 >(lpFbxDouble3)
  );
}
  /// FbxPropertyT< FbxDouble3 >  Rotation
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxTexture_mepGetRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxDouble3>(
  ((FbxTexture *) lpjFbxTexture)->Rotation.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  Rotation
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxTexture_mptGetRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble3   >(
   (&((FbxTexture *) lpjFbxTexture)->Rotation
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  Scaling
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxTexture_mepSetScaling(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture,jlong lpFbxDouble3)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxTexture *) lpjFbxTexture)->Scaling.Set(
  ( FbxDouble3  )  _lcvt.j2c_object<jlong,FbxDouble3 >(lpFbxDouble3)
  );
}
  /// FbxPropertyT< FbxDouble3 >  Scaling
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxTexture_mepGetScaling(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxDouble3>(
  ((FbxTexture *) lpjFbxTexture)->Scaling.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  Scaling
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxTexture_mptGetScaling(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble3   >(
   (&((FbxTexture *) lpjFbxTexture)->Scaling
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  RotationPivot
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxTexture_mepSetRotationPivot(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture,jlong lpFbxDouble3)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxTexture *) lpjFbxTexture)->RotationPivot.Set(
  ( FbxDouble3  )  _lcvt.j2c_object<jlong,FbxDouble3 >(lpFbxDouble3)
  );
}
  /// FbxPropertyT< FbxDouble3 >  RotationPivot
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxTexture_mepGetRotationPivot(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxDouble3>(
  ((FbxTexture *) lpjFbxTexture)->RotationPivot.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  RotationPivot
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxTexture_mptGetRotationPivot(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble3   >(
   (&((FbxTexture *) lpjFbxTexture)->RotationPivot
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  ScalingPivot
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxTexture_mepSetScalingPivot(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture,jlong lpFbxDouble3)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxTexture *) lpjFbxTexture)->ScalingPivot.Set(
  ( FbxDouble3  )  _lcvt.j2c_object<jlong,FbxDouble3 >(lpFbxDouble3)
  );
}
  /// FbxPropertyT< FbxDouble3 >  ScalingPivot
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxTexture_mepGetScalingPivot(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxDouble3>(
  ((FbxTexture *) lpjFbxTexture)->ScalingPivot.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  ScalingPivot
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxTexture_mptGetScalingPivot(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble3   >(
   (&((FbxTexture *) lpjFbxTexture)->ScalingPivot
  ));
  return ret;
}
  /// FbxPropertyT< EBlendMode >  CurrentTextureBlendMode
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxTexture_mepSetCurrentTextureBlendMode(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture,jint lpEBlendMode)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxTexture *) lpjFbxTexture)->CurrentTextureBlendMode.Set(
  ( FbxTexture::EBlendMode  )  _lcvt.j2c<jint,FbxTexture::EBlendMode >(lpEBlendMode)
  );
}
  /// FbxPropertyT< EBlendMode >  CurrentTextureBlendMode
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxTexture_mepGetCurrentTextureBlendMode(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxTexture::EBlendMode  >(
  ((FbxTexture *) lpjFbxTexture)->CurrentTextureBlendMode.Get(
  ));
  return ret;
}
  /// FbxPropertyT< EBlendMode >  CurrentTextureBlendMode
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxTexture_mptGetCurrentTextureBlendMode(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxTexture::EBlendMode   >(
   (&((FbxTexture *) lpjFbxTexture)->CurrentTextureBlendMode
  ));
  return ret;
}
  /// FbxPropertyT< FbxString >  UVSet
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxTexture_mepSetUVSet(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture,jlong lpFbxString)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxTexture *) lpjFbxTexture)->UVSet.Set(
  ( FbxString  )  _lcvt.j2c_object<jlong,FbxString >(lpFbxString)
  );
}
  /// FbxPropertyT< FbxString >  UVSet
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxTexture_mepGetUVSet(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxString>(
  ((FbxTexture *) lpjFbxTexture)->UVSet.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxString >  UVSet
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxTexture_mptGetUVSet(JNIEnv * __env, jclass __jc,jlong lpjFbxTexture)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxString   >(
   (&((FbxTexture *) lpjFbxTexture)->UVSet
  ));
  return ret;
}
  /// FbxTexture * Create( FbxObject* lpFbxObject,  const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxTexture_Create(JNIEnv * __env, jclass __jc,jlong lpFbxObject,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxTexture>(
  FbxTexture::Create(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(lpFbxObject)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
