
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// void  SetShadowTexture (FbxTexture *pTexture)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLight_SetShadowTexture(JNIEnv * __env, jclass __jc,jlong lpjFbxLight,jlong pTexture)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLight *) lpjFbxLight)->SetShadowTexture(
  ( FbxTexture  *)  _lcvt.j2c_object_pt<jlong, FbxTexture>(pTexture)
  );
}
  /// FbxTexture *  GetShadowTexture () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLight_GetShadowTexture(JNIEnv * __env, jclass __jc,jlong lpjFbxLight)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxTexture>(
  ((FbxLight *) lpjFbxLight)->GetShadowTexture(
  ));
  return ret;
}
  /// FbxPropertyT< EType >  LightType
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLight_mepSetLightType(JNIEnv * __env, jclass __jc,jlong lpjFbxLight,jint lpEType)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLight *) lpjFbxLight)->LightType.Set(
  ( FbxLight::EType  )  _lcvt.j2c<jint,FbxLight::EType >(lpEType)
  );
}
  /// FbxPropertyT< EType >  LightType
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLight_mepGetLightType(JNIEnv * __env, jclass __jc,jlong lpjFbxLight)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxLight::EType  >(
  ((FbxLight *) lpjFbxLight)->LightType.Get(
  ));
  return ret;
}
  /// FbxPropertyT< EType >  LightType
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLight_mptGetLightType(JNIEnv * __env, jclass __jc,jlong lpjFbxLight)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxLight::EType   >(
   (&((FbxLight *) lpjFbxLight)->LightType
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  CastLight
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLight_mepSetCastLight(JNIEnv * __env, jclass __jc,jlong lpjFbxLight,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLight *) lpjFbxLight)->CastLight.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  CastLight
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxLight_mepGetCastLight(JNIEnv * __env, jclass __jc,jlong lpjFbxLight)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxLight *) lpjFbxLight)->CastLight.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  CastLight
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLight_mptGetCastLight(JNIEnv * __env, jclass __jc,jlong lpjFbxLight)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxLight *) lpjFbxLight)->CastLight
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  DrawVolumetricLight
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLight_mepSetDrawVolumetricLight(JNIEnv * __env, jclass __jc,jlong lpjFbxLight,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLight *) lpjFbxLight)->DrawVolumetricLight.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  DrawVolumetricLight
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxLight_mepGetDrawVolumetricLight(JNIEnv * __env, jclass __jc,jlong lpjFbxLight)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxLight *) lpjFbxLight)->DrawVolumetricLight.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  DrawVolumetricLight
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLight_mptGetDrawVolumetricLight(JNIEnv * __env, jclass __jc,jlong lpjFbxLight)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxLight *) lpjFbxLight)->DrawVolumetricLight
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  DrawGroundProjection
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLight_mepSetDrawGroundProjection(JNIEnv * __env, jclass __jc,jlong lpjFbxLight,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLight *) lpjFbxLight)->DrawGroundProjection.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  DrawGroundProjection
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxLight_mepGetDrawGroundProjection(JNIEnv * __env, jclass __jc,jlong lpjFbxLight)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxLight *) lpjFbxLight)->DrawGroundProjection.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  DrawGroundProjection
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLight_mptGetDrawGroundProjection(JNIEnv * __env, jclass __jc,jlong lpjFbxLight)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxLight *) lpjFbxLight)->DrawGroundProjection
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  DrawFrontFacingVolumetricLight
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLight_mepSetDrawFrontFacingVolumetricLight(JNIEnv * __env, jclass __jc,jlong lpjFbxLight,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLight *) lpjFbxLight)->DrawFrontFacingVolumetricLight.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  DrawFrontFacingVolumetricLight
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxLight_mepGetDrawFrontFacingVolumetricLight(JNIEnv * __env, jclass __jc,jlong lpjFbxLight)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxLight *) lpjFbxLight)->DrawFrontFacingVolumetricLight.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  DrawFrontFacingVolumetricLight
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLight_mptGetDrawFrontFacingVolumetricLight(JNIEnv * __env, jclass __jc,jlong lpjFbxLight)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxLight *) lpjFbxLight)->DrawFrontFacingVolumetricLight
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  Color
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLight_mepSetColor(JNIEnv * __env, jclass __jc,jlong lpjFbxLight,jlong lpFbxDouble3)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLight *) lpjFbxLight)->Color.Set(
  ( FbxDouble3  )  _lcvt.j2c_object<jlong,FbxDouble3 >(lpFbxDouble3)
  );
}
  /// FbxPropertyT< FbxDouble3 >  Color
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLight_mepGetColor(JNIEnv * __env, jclass __jc,jlong lpjFbxLight)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxDouble3>(
  ((FbxLight *) lpjFbxLight)->Color.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  Color
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLight_mptGetColor(JNIEnv * __env, jclass __jc,jlong lpjFbxLight)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble3   >(
   (&((FbxLight *) lpjFbxLight)->Color
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  Intensity
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLight_mepSetIntensity(JNIEnv * __env, jclass __jc,jlong lpjFbxLight,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLight *) lpjFbxLight)->Intensity.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  Intensity
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxLight_mepGetIntensity(JNIEnv * __env, jclass __jc,jlong lpjFbxLight)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxLight *) lpjFbxLight)->Intensity.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  Intensity
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLight_mptGetIntensity(JNIEnv * __env, jclass __jc,jlong lpjFbxLight)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxLight *) lpjFbxLight)->Intensity
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  InnerAngle
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLight_mepSetInnerAngle(JNIEnv * __env, jclass __jc,jlong lpjFbxLight,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLight *) lpjFbxLight)->InnerAngle.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  InnerAngle
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxLight_mepGetInnerAngle(JNIEnv * __env, jclass __jc,jlong lpjFbxLight)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxLight *) lpjFbxLight)->InnerAngle.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  InnerAngle
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLight_mptGetInnerAngle(JNIEnv * __env, jclass __jc,jlong lpjFbxLight)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxLight *) lpjFbxLight)->InnerAngle
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  OuterAngle
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLight_mepSetOuterAngle(JNIEnv * __env, jclass __jc,jlong lpjFbxLight,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLight *) lpjFbxLight)->OuterAngle.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  OuterAngle
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxLight_mepGetOuterAngle(JNIEnv * __env, jclass __jc,jlong lpjFbxLight)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxLight *) lpjFbxLight)->OuterAngle.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  OuterAngle
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLight_mptGetOuterAngle(JNIEnv * __env, jclass __jc,jlong lpjFbxLight)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxLight *) lpjFbxLight)->OuterAngle
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  Fog
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLight_mepSetFog(JNIEnv * __env, jclass __jc,jlong lpjFbxLight,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLight *) lpjFbxLight)->Fog.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  Fog
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxLight_mepGetFog(JNIEnv * __env, jclass __jc,jlong lpjFbxLight)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxLight *) lpjFbxLight)->Fog.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  Fog
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLight_mptGetFog(JNIEnv * __env, jclass __jc,jlong lpjFbxLight)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxLight *) lpjFbxLight)->Fog
  ));
  return ret;
}
  /// FbxPropertyT< EDecayType >  DecayType
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLight_mepSetDecayType(JNIEnv * __env, jclass __jc,jlong lpjFbxLight,jint lpEDecayType)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLight *) lpjFbxLight)->DecayType.Set(
  ( FbxLight::EDecayType  )  _lcvt.j2c<jint,FbxLight::EDecayType >(lpEDecayType)
  );
}
  /// FbxPropertyT< EDecayType >  DecayType
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLight_mepGetDecayType(JNIEnv * __env, jclass __jc,jlong lpjFbxLight)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxLight::EDecayType  >(
  ((FbxLight *) lpjFbxLight)->DecayType.Get(
  ));
  return ret;
}
  /// FbxPropertyT< EDecayType >  DecayType
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLight_mptGetDecayType(JNIEnv * __env, jclass __jc,jlong lpjFbxLight)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxLight::EDecayType   >(
   (&((FbxLight *) lpjFbxLight)->DecayType
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  DecayStart
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLight_mepSetDecayStart(JNIEnv * __env, jclass __jc,jlong lpjFbxLight,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLight *) lpjFbxLight)->DecayStart.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  DecayStart
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxLight_mepGetDecayStart(JNIEnv * __env, jclass __jc,jlong lpjFbxLight)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxLight *) lpjFbxLight)->DecayStart.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  DecayStart
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLight_mptGetDecayStart(JNIEnv * __env, jclass __jc,jlong lpjFbxLight)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxLight *) lpjFbxLight)->DecayStart
  ));
  return ret;
}
  /// FbxPropertyT< FbxString >  FileName
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLight_mepSetFileName(JNIEnv * __env, jclass __jc,jlong lpjFbxLight,jlong lpFbxString)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLight *) lpjFbxLight)->FileName.Set(
  ( FbxString  )  _lcvt.j2c_object<jlong,FbxString >(lpFbxString)
  );
}
  /// FbxPropertyT< FbxString >  FileName
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLight_mepGetFileName(JNIEnv * __env, jclass __jc,jlong lpjFbxLight)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxString>(
  ((FbxLight *) lpjFbxLight)->FileName.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxString >  FileName
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLight_mptGetFileName(JNIEnv * __env, jclass __jc,jlong lpjFbxLight)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxString   >(
   (&((FbxLight *) lpjFbxLight)->FileName
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  EnableNearAttenuation
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLight_mepSetEnableNearAttenuation(JNIEnv * __env, jclass __jc,jlong lpjFbxLight,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLight *) lpjFbxLight)->EnableNearAttenuation.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  EnableNearAttenuation
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxLight_mepGetEnableNearAttenuation(JNIEnv * __env, jclass __jc,jlong lpjFbxLight)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxLight *) lpjFbxLight)->EnableNearAttenuation.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  EnableNearAttenuation
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLight_mptGetEnableNearAttenuation(JNIEnv * __env, jclass __jc,jlong lpjFbxLight)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxLight *) lpjFbxLight)->EnableNearAttenuation
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  NearAttenuationStart
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLight_mepSetNearAttenuationStart(JNIEnv * __env, jclass __jc,jlong lpjFbxLight,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLight *) lpjFbxLight)->NearAttenuationStart.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  NearAttenuationStart
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxLight_mepGetNearAttenuationStart(JNIEnv * __env, jclass __jc,jlong lpjFbxLight)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxLight *) lpjFbxLight)->NearAttenuationStart.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  NearAttenuationStart
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLight_mptGetNearAttenuationStart(JNIEnv * __env, jclass __jc,jlong lpjFbxLight)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxLight *) lpjFbxLight)->NearAttenuationStart
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  NearAttenuationEnd
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLight_mepSetNearAttenuationEnd(JNIEnv * __env, jclass __jc,jlong lpjFbxLight,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLight *) lpjFbxLight)->NearAttenuationEnd.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  NearAttenuationEnd
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxLight_mepGetNearAttenuationEnd(JNIEnv * __env, jclass __jc,jlong lpjFbxLight)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxLight *) lpjFbxLight)->NearAttenuationEnd.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  NearAttenuationEnd
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLight_mptGetNearAttenuationEnd(JNIEnv * __env, jclass __jc,jlong lpjFbxLight)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxLight *) lpjFbxLight)->NearAttenuationEnd
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  EnableFarAttenuation
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLight_mepSetEnableFarAttenuation(JNIEnv * __env, jclass __jc,jlong lpjFbxLight,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLight *) lpjFbxLight)->EnableFarAttenuation.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  EnableFarAttenuation
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxLight_mepGetEnableFarAttenuation(JNIEnv * __env, jclass __jc,jlong lpjFbxLight)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxLight *) lpjFbxLight)->EnableFarAttenuation.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  EnableFarAttenuation
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLight_mptGetEnableFarAttenuation(JNIEnv * __env, jclass __jc,jlong lpjFbxLight)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxLight *) lpjFbxLight)->EnableFarAttenuation
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FarAttenuationStart
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLight_mepSetFarAttenuationStart(JNIEnv * __env, jclass __jc,jlong lpjFbxLight,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLight *) lpjFbxLight)->FarAttenuationStart.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  FarAttenuationStart
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxLight_mepGetFarAttenuationStart(JNIEnv * __env, jclass __jc,jlong lpjFbxLight)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxLight *) lpjFbxLight)->FarAttenuationStart.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FarAttenuationStart
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLight_mptGetFarAttenuationStart(JNIEnv * __env, jclass __jc,jlong lpjFbxLight)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxLight *) lpjFbxLight)->FarAttenuationStart
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FarAttenuationEnd
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLight_mepSetFarAttenuationEnd(JNIEnv * __env, jclass __jc,jlong lpjFbxLight,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLight *) lpjFbxLight)->FarAttenuationEnd.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  FarAttenuationEnd
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxLight_mepGetFarAttenuationEnd(JNIEnv * __env, jclass __jc,jlong lpjFbxLight)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxLight *) lpjFbxLight)->FarAttenuationEnd.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FarAttenuationEnd
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLight_mptGetFarAttenuationEnd(JNIEnv * __env, jclass __jc,jlong lpjFbxLight)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxLight *) lpjFbxLight)->FarAttenuationEnd
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  CastShadows
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLight_mepSetCastShadows(JNIEnv * __env, jclass __jc,jlong lpjFbxLight,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLight *) lpjFbxLight)->CastShadows.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  CastShadows
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxLight_mepGetCastShadows(JNIEnv * __env, jclass __jc,jlong lpjFbxLight)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxLight *) lpjFbxLight)->CastShadows.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  CastShadows
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLight_mptGetCastShadows(JNIEnv * __env, jclass __jc,jlong lpjFbxLight)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxLight *) lpjFbxLight)->CastShadows
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  ShadowColor
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLight_mepSetShadowColor(JNIEnv * __env, jclass __jc,jlong lpjFbxLight,jlong lpFbxDouble3)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLight *) lpjFbxLight)->ShadowColor.Set(
  ( FbxDouble3  )  _lcvt.j2c_object<jlong,FbxDouble3 >(lpFbxDouble3)
  );
}
  /// FbxPropertyT< FbxDouble3 >  ShadowColor
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLight_mepGetShadowColor(JNIEnv * __env, jclass __jc,jlong lpjFbxLight)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxDouble3>(
  ((FbxLight *) lpjFbxLight)->ShadowColor.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  ShadowColor
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLight_mptGetShadowColor(JNIEnv * __env, jclass __jc,jlong lpjFbxLight)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble3   >(
   (&((FbxLight *) lpjFbxLight)->ShadowColor
  ));
  return ret;
}
  /// FbxPropertyT< EAreaLightShape >  AreaLightShape
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLight_mepSetAreaLightShape(JNIEnv * __env, jclass __jc,jlong lpjFbxLight,jint lpEAreaLightShape)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLight *) lpjFbxLight)->AreaLightShape.Set(
  ( FbxLight::EAreaLightShape  )  _lcvt.j2c<jint,FbxLight::EAreaLightShape >(lpEAreaLightShape)
  );
}
  /// FbxPropertyT< EAreaLightShape >  AreaLightShape
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLight_mepGetAreaLightShape(JNIEnv * __env, jclass __jc,jlong lpjFbxLight)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxLight::EAreaLightShape  >(
  ((FbxLight *) lpjFbxLight)->AreaLightShape.Get(
  ));
  return ret;
}
  /// FbxPropertyT< EAreaLightShape >  AreaLightShape
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLight_mptGetAreaLightShape(JNIEnv * __env, jclass __jc,jlong lpjFbxLight)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxLight::EAreaLightShape   >(
   (&((FbxLight *) lpjFbxLight)->AreaLightShape
  ));
  return ret;
}
  /// FbxPropertyT< FbxFloat >  LeftBarnDoor
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLight_mepSetLeftBarnDoor(JNIEnv * __env, jclass __jc,jlong lpjFbxLight,jfloat lpFbxFloat)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLight *) lpjFbxLight)->LeftBarnDoor.Set(
  ( FbxFloat  )  _lcvt.j2c<jfloat, FbxFloat  >(lpFbxFloat)
  );
}
  /// FbxPropertyT< FbxFloat >  LeftBarnDoor
extern "C" JNIEXPORT jfloat JNICALL Java_fbxsdk_FbxLight_mepGetLeftBarnDoor(JNIEnv * __env, jclass __jc,jlong lpjFbxLight)
{
  JNILocalConverter _lcvt(__env,__jc);
  jfloat ret=(jfloat)_lcvt.c2j<jfloat,  FbxFloat  >(
  ((FbxLight *) lpjFbxLight)->LeftBarnDoor.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxFloat >  LeftBarnDoor
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLight_mptGetLeftBarnDoor(JNIEnv * __env, jclass __jc,jlong lpjFbxLight)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxFloat   >(
   (&((FbxLight *) lpjFbxLight)->LeftBarnDoor
  ));
  return ret;
}
  /// FbxPropertyT< FbxFloat >  RightBarnDoor
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLight_mepSetRightBarnDoor(JNIEnv * __env, jclass __jc,jlong lpjFbxLight,jfloat lpFbxFloat)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLight *) lpjFbxLight)->RightBarnDoor.Set(
  ( FbxFloat  )  _lcvt.j2c<jfloat, FbxFloat  >(lpFbxFloat)
  );
}
  /// FbxPropertyT< FbxFloat >  RightBarnDoor
extern "C" JNIEXPORT jfloat JNICALL Java_fbxsdk_FbxLight_mepGetRightBarnDoor(JNIEnv * __env, jclass __jc,jlong lpjFbxLight)
{
  JNILocalConverter _lcvt(__env,__jc);
  jfloat ret=(jfloat)_lcvt.c2j<jfloat,  FbxFloat  >(
  ((FbxLight *) lpjFbxLight)->RightBarnDoor.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxFloat >  RightBarnDoor
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLight_mptGetRightBarnDoor(JNIEnv * __env, jclass __jc,jlong lpjFbxLight)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxFloat   >(
   (&((FbxLight *) lpjFbxLight)->RightBarnDoor
  ));
  return ret;
}
  /// FbxPropertyT< FbxFloat >  TopBarnDoor
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLight_mepSetTopBarnDoor(JNIEnv * __env, jclass __jc,jlong lpjFbxLight,jfloat lpFbxFloat)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLight *) lpjFbxLight)->TopBarnDoor.Set(
  ( FbxFloat  )  _lcvt.j2c<jfloat, FbxFloat  >(lpFbxFloat)
  );
}
  /// FbxPropertyT< FbxFloat >  TopBarnDoor
extern "C" JNIEXPORT jfloat JNICALL Java_fbxsdk_FbxLight_mepGetTopBarnDoor(JNIEnv * __env, jclass __jc,jlong lpjFbxLight)
{
  JNILocalConverter _lcvt(__env,__jc);
  jfloat ret=(jfloat)_lcvt.c2j<jfloat,  FbxFloat  >(
  ((FbxLight *) lpjFbxLight)->TopBarnDoor.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxFloat >  TopBarnDoor
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLight_mptGetTopBarnDoor(JNIEnv * __env, jclass __jc,jlong lpjFbxLight)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxFloat   >(
   (&((FbxLight *) lpjFbxLight)->TopBarnDoor
  ));
  return ret;
}
  /// FbxPropertyT< FbxFloat >  BottomBarnDoor
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLight_mepSetBottomBarnDoor(JNIEnv * __env, jclass __jc,jlong lpjFbxLight,jfloat lpFbxFloat)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLight *) lpjFbxLight)->BottomBarnDoor.Set(
  ( FbxFloat  )  _lcvt.j2c<jfloat, FbxFloat  >(lpFbxFloat)
  );
}
  /// FbxPropertyT< FbxFloat >  BottomBarnDoor
extern "C" JNIEXPORT jfloat JNICALL Java_fbxsdk_FbxLight_mepGetBottomBarnDoor(JNIEnv * __env, jclass __jc,jlong lpjFbxLight)
{
  JNILocalConverter _lcvt(__env,__jc);
  jfloat ret=(jfloat)_lcvt.c2j<jfloat,  FbxFloat  >(
  ((FbxLight *) lpjFbxLight)->BottomBarnDoor.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxFloat >  BottomBarnDoor
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLight_mptGetBottomBarnDoor(JNIEnv * __env, jclass __jc,jlong lpjFbxLight)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxFloat   >(
   (&((FbxLight *) lpjFbxLight)->BottomBarnDoor
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  EnableBarnDoor
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLight_mepSetEnableBarnDoor(JNIEnv * __env, jclass __jc,jlong lpjFbxLight,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLight *) lpjFbxLight)->EnableBarnDoor.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  EnableBarnDoor
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxLight_mepGetEnableBarnDoor(JNIEnv * __env, jclass __jc,jlong lpjFbxLight)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxLight *) lpjFbxLight)->EnableBarnDoor.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  EnableBarnDoor
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLight_mptGetEnableBarnDoor(JNIEnv * __env, jclass __jc,jlong lpjFbxLight)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxLight *) lpjFbxLight)->EnableBarnDoor
  ));
  return ret;
}
  /// FbxLight * Create( FbxNodeAttribute* lpFbxNodeAttribute,  const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLight_Create(JNIEnv * __env, jclass __jc,jlong lpFbxNodeAttribute,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxLight>(
  FbxLight::Create(
  ( FbxNodeAttribute  *)  _lcvt.j2c_object_pt<jlong, FbxNodeAttribute>(lpFbxNodeAttribute)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
