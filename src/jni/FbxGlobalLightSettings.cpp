
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// void  RestoreDefaultSettings ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxGlobalLightSettings_RestoreDefaultSettings(JNIEnv * __env, jclass __jc,jlong lpjFbxGlobalLightSettings)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxGlobalLightSettings *) lpjFbxGlobalLightSettings)->RestoreDefaultSettings(
  );
}
  /// void  SetAmbientColor (FbxColor pAmbientColor)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxGlobalLightSettings_SetAmbientColor(JNIEnv * __env, jclass __jc,jlong lpjFbxGlobalLightSettings,jlong pAmbientColor)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxGlobalLightSettings *) lpjFbxGlobalLightSettings)->SetAmbientColor(
  ( FbxColor  )  _lcvt.j2c_object<jlong,FbxColor >(pAmbientColor)
  );
}
  /// FbxColor  GetAmbientColor () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGlobalLightSettings_GetAmbientColor(JNIEnv * __env, jclass __jc,jlong lpjFbxGlobalLightSettings)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxColor>(
  ((FbxGlobalLightSettings *) lpjFbxGlobalLightSettings)->GetAmbientColor(
  ));
  return ret;
}
  /// void  SetFogEnable (bool pEnable)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxGlobalLightSettings_SetFogEnable(JNIEnv * __env, jclass __jc,jlong lpjFbxGlobalLightSettings,jboolean pEnable)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxGlobalLightSettings *) lpjFbxGlobalLightSettings)->SetFogEnable(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pEnable)
  );
}
  /// bool  GetFogEnable () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxGlobalLightSettings_GetFogEnable(JNIEnv * __env, jclass __jc,jlong lpjFbxGlobalLightSettings)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxGlobalLightSettings *) lpjFbxGlobalLightSettings)->GetFogEnable(
  ));
  return ret;
}
  /// void  SetFogColor (FbxColor pColor)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxGlobalLightSettings_SetFogColor(JNIEnv * __env, jclass __jc,jlong lpjFbxGlobalLightSettings,jlong pColor)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxGlobalLightSettings *) lpjFbxGlobalLightSettings)->SetFogColor(
  ( FbxColor  )  _lcvt.j2c_object<jlong,FbxColor >(pColor)
  );
}
  /// FbxColor  GetFogColor () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGlobalLightSettings_GetFogColor(JNIEnv * __env, jclass __jc,jlong lpjFbxGlobalLightSettings)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxColor>(
  ((FbxGlobalLightSettings *) lpjFbxGlobalLightSettings)->GetFogColor(
  ));
  return ret;
}
  /// void  SetFogMode (EFogMode pMode)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxGlobalLightSettings_SetFogMode(JNIEnv * __env, jclass __jc,jlong lpjFbxGlobalLightSettings,jint pMode)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxGlobalLightSettings *) lpjFbxGlobalLightSettings)->SetFogMode(
  ( FbxGlobalLightSettings::EFogMode  )  _lcvt.j2c<jint,FbxGlobalLightSettings::EFogMode >(pMode)
  );
}
  /// EFogMode  GetFogMode () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxGlobalLightSettings_GetFogMode(JNIEnv * __env, jclass __jc,jlong lpjFbxGlobalLightSettings)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxGlobalLightSettings::EFogMode  >(
  ((FbxGlobalLightSettings *) lpjFbxGlobalLightSettings)->GetFogMode(
  ));
  return ret;
}
  /// void  SetFogDensity (double pDensity)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxGlobalLightSettings_SetFogDensity(JNIEnv * __env, jclass __jc,jlong lpjFbxGlobalLightSettings,jdouble pDensity)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxGlobalLightSettings *) lpjFbxGlobalLightSettings)->SetFogDensity(
  ( double  )  _lcvt.j2c<jdouble, double  >(pDensity)
  );
}
  /// double  GetFogDensity () const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxGlobalLightSettings_GetFogDensity(JNIEnv * __env, jclass __jc,jlong lpjFbxGlobalLightSettings)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxGlobalLightSettings *) lpjFbxGlobalLightSettings)->GetFogDensity(
  ));
  return ret;
}
  /// void  SetFogStart (double pStart)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxGlobalLightSettings_SetFogStart(JNIEnv * __env, jclass __jc,jlong lpjFbxGlobalLightSettings,jdouble pStart)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxGlobalLightSettings *) lpjFbxGlobalLightSettings)->SetFogStart(
  ( double  )  _lcvt.j2c<jdouble, double  >(pStart)
  );
}
  /// double  GetFogStart () const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxGlobalLightSettings_GetFogStart(JNIEnv * __env, jclass __jc,jlong lpjFbxGlobalLightSettings)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxGlobalLightSettings *) lpjFbxGlobalLightSettings)->GetFogStart(
  ));
  return ret;
}
  /// void  SetFogEnd (double pEnd)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxGlobalLightSettings_SetFogEnd(JNIEnv * __env, jclass __jc,jlong lpjFbxGlobalLightSettings,jdouble pEnd)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxGlobalLightSettings *) lpjFbxGlobalLightSettings)->SetFogEnd(
  ( double  )  _lcvt.j2c<jdouble, double  >(pEnd)
  );
}
  /// double  GetFogEnd () const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxGlobalLightSettings_GetFogEnd(JNIEnv * __env, jclass __jc,jlong lpjFbxGlobalLightSettings)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxGlobalLightSettings *) lpjFbxGlobalLightSettings)->GetFogEnd(
  ));
  return ret;
}
  /// void  SetShadowEnable (bool pShadowEnable)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxGlobalLightSettings_SetShadowEnable(JNIEnv * __env, jclass __jc,jlong lpjFbxGlobalLightSettings,jboolean pShadowEnable)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxGlobalLightSettings *) lpjFbxGlobalLightSettings)->SetShadowEnable(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pShadowEnable)
  );
}
  /// bool  GetShadowEnable () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxGlobalLightSettings_GetShadowEnable(JNIEnv * __env, jclass __jc,jlong lpjFbxGlobalLightSettings)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxGlobalLightSettings *) lpjFbxGlobalLightSettings)->GetShadowEnable(
  ));
  return ret;
}
  /// void  SetShadowIntensity (double pShadowIntensity)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxGlobalLightSettings_SetShadowIntensity(JNIEnv * __env, jclass __jc,jlong lpjFbxGlobalLightSettings,jdouble pShadowIntensity)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxGlobalLightSettings *) lpjFbxGlobalLightSettings)->SetShadowIntensity(
  ( double  )  _lcvt.j2c<jdouble, double  >(pShadowIntensity)
  );
}
  /// double  GetShadowIntensity () const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxGlobalLightSettings_GetShadowIntensity(JNIEnv * __env, jclass __jc,jlong lpjFbxGlobalLightSettings)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxGlobalLightSettings *) lpjFbxGlobalLightSettings)->GetShadowIntensity(
  ));
  return ret;
}
  /// int  GetShadowPlaneCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxGlobalLightSettings_GetShadowPlaneCount(JNIEnv * __env, jclass __jc,jlong lpjFbxGlobalLightSettings)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxGlobalLightSettings *) lpjFbxGlobalLightSettings)->GetShadowPlaneCount(
  ));
  return ret;
}
  /// ShadowPlane *  GetShadowPlane (int pIndex, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGlobalLightSettings_GetShadowPlane(JNIEnv * __env, jclass __jc,jlong lpjFbxGlobalLightSettings,jint pIndex,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
    jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxGlobalLightSettings::ShadowPlane>(
  ((FbxGlobalLightSettings *) lpjFbxGlobalLightSettings)->GetShadowPlane(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// void  AddShadowPlane (ShadowPlane pShadowPlane)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxGlobalLightSettings_AddShadowPlane(JNIEnv * __env, jclass __jc,jlong lpjFbxGlobalLightSettings,jlong pShadowPlane)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxGlobalLightSettings *) lpjFbxGlobalLightSettings)->AddShadowPlane(
  ( FbxGlobalLightSettings::ShadowPlane  )  _lcvt.j2c_object<jlong,FbxGlobalLightSettings::ShadowPlane >(pShadowPlane)
  );
}
  /// void  RemoveAllShadowPlanes ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxGlobalLightSettings_RemoveAllShadowPlanes(JNIEnv * __env, jclass __jc,jlong lpjFbxGlobalLightSettings)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxGlobalLightSettings *) lpjFbxGlobalLightSettings)->RemoveAllShadowPlanes(
  );
}
