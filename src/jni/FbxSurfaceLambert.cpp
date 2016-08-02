
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxPropertyT< FbxDouble3 >  Emissive
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxSurfaceLambert_mepSetEmissive(JNIEnv * __env, jclass __jc,jlong lpjFbxSurfaceLambert,jlong lpFbxDouble3)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxSurfaceLambert *) lpjFbxSurfaceLambert)->Emissive.Set(
  ( FbxDouble3  )  _lcvt.j2c_object<jlong,FbxDouble3 >(lpFbxDouble3)
  );
}
  /// FbxPropertyT< FbxDouble3 >  Emissive
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxSurfaceLambert_mepGetEmissive(JNIEnv * __env, jclass __jc,jlong lpjFbxSurfaceLambert)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxDouble3>(
  ((FbxSurfaceLambert *) lpjFbxSurfaceLambert)->Emissive.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  Emissive
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxSurfaceLambert_mptGetEmissive(JNIEnv * __env, jclass __jc,jlong lpjFbxSurfaceLambert)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble3   >(
   (&((FbxSurfaceLambert *) lpjFbxSurfaceLambert)->Emissive
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  EmissiveFactor
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxSurfaceLambert_mepSetEmissiveFactor(JNIEnv * __env, jclass __jc,jlong lpjFbxSurfaceLambert,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxSurfaceLambert *) lpjFbxSurfaceLambert)->EmissiveFactor.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  EmissiveFactor
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxSurfaceLambert_mepGetEmissiveFactor(JNIEnv * __env, jclass __jc,jlong lpjFbxSurfaceLambert)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxSurfaceLambert *) lpjFbxSurfaceLambert)->EmissiveFactor.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  EmissiveFactor
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxSurfaceLambert_mptGetEmissiveFactor(JNIEnv * __env, jclass __jc,jlong lpjFbxSurfaceLambert)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxSurfaceLambert *) lpjFbxSurfaceLambert)->EmissiveFactor
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  Ambient
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxSurfaceLambert_mepSetAmbient(JNIEnv * __env, jclass __jc,jlong lpjFbxSurfaceLambert,jlong lpFbxDouble3)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxSurfaceLambert *) lpjFbxSurfaceLambert)->Ambient.Set(
  ( FbxDouble3  )  _lcvt.j2c_object<jlong,FbxDouble3 >(lpFbxDouble3)
  );
}
  /// FbxPropertyT< FbxDouble3 >  Ambient
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxSurfaceLambert_mepGetAmbient(JNIEnv * __env, jclass __jc,jlong lpjFbxSurfaceLambert)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxDouble3>(
  ((FbxSurfaceLambert *) lpjFbxSurfaceLambert)->Ambient.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  Ambient
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxSurfaceLambert_mptGetAmbient(JNIEnv * __env, jclass __jc,jlong lpjFbxSurfaceLambert)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble3   >(
   (&((FbxSurfaceLambert *) lpjFbxSurfaceLambert)->Ambient
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  AmbientFactor
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxSurfaceLambert_mepSetAmbientFactor(JNIEnv * __env, jclass __jc,jlong lpjFbxSurfaceLambert,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxSurfaceLambert *) lpjFbxSurfaceLambert)->AmbientFactor.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  AmbientFactor
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxSurfaceLambert_mepGetAmbientFactor(JNIEnv * __env, jclass __jc,jlong lpjFbxSurfaceLambert)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxSurfaceLambert *) lpjFbxSurfaceLambert)->AmbientFactor.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  AmbientFactor
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxSurfaceLambert_mptGetAmbientFactor(JNIEnv * __env, jclass __jc,jlong lpjFbxSurfaceLambert)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxSurfaceLambert *) lpjFbxSurfaceLambert)->AmbientFactor
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  Diffuse
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxSurfaceLambert_mepSetDiffuse(JNIEnv * __env, jclass __jc,jlong lpjFbxSurfaceLambert,jlong lpFbxDouble3)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxSurfaceLambert *) lpjFbxSurfaceLambert)->Diffuse.Set(
  ( FbxDouble3  )  _lcvt.j2c_object<jlong,FbxDouble3 >(lpFbxDouble3)
  );
}
  /// FbxPropertyT< FbxDouble3 >  Diffuse
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxSurfaceLambert_mepGetDiffuse(JNIEnv * __env, jclass __jc,jlong lpjFbxSurfaceLambert)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxDouble3>(
  ((FbxSurfaceLambert *) lpjFbxSurfaceLambert)->Diffuse.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  Diffuse
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxSurfaceLambert_mptGetDiffuse(JNIEnv * __env, jclass __jc,jlong lpjFbxSurfaceLambert)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble3   >(
   (&((FbxSurfaceLambert *) lpjFbxSurfaceLambert)->Diffuse
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  DiffuseFactor
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxSurfaceLambert_mepSetDiffuseFactor(JNIEnv * __env, jclass __jc,jlong lpjFbxSurfaceLambert,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxSurfaceLambert *) lpjFbxSurfaceLambert)->DiffuseFactor.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  DiffuseFactor
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxSurfaceLambert_mepGetDiffuseFactor(JNIEnv * __env, jclass __jc,jlong lpjFbxSurfaceLambert)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxSurfaceLambert *) lpjFbxSurfaceLambert)->DiffuseFactor.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  DiffuseFactor
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxSurfaceLambert_mptGetDiffuseFactor(JNIEnv * __env, jclass __jc,jlong lpjFbxSurfaceLambert)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxSurfaceLambert *) lpjFbxSurfaceLambert)->DiffuseFactor
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  NormalMap
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxSurfaceLambert_mepSetNormalMap(JNIEnv * __env, jclass __jc,jlong lpjFbxSurfaceLambert,jlong lpFbxDouble3)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxSurfaceLambert *) lpjFbxSurfaceLambert)->NormalMap.Set(
  ( FbxDouble3  )  _lcvt.j2c_object<jlong,FbxDouble3 >(lpFbxDouble3)
  );
}
  /// FbxPropertyT< FbxDouble3 >  NormalMap
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxSurfaceLambert_mepGetNormalMap(JNIEnv * __env, jclass __jc,jlong lpjFbxSurfaceLambert)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxDouble3>(
  ((FbxSurfaceLambert *) lpjFbxSurfaceLambert)->NormalMap.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  NormalMap
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxSurfaceLambert_mptGetNormalMap(JNIEnv * __env, jclass __jc,jlong lpjFbxSurfaceLambert)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble3   >(
   (&((FbxSurfaceLambert *) lpjFbxSurfaceLambert)->NormalMap
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  Bump
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxSurfaceLambert_mepSetBump(JNIEnv * __env, jclass __jc,jlong lpjFbxSurfaceLambert,jlong lpFbxDouble3)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxSurfaceLambert *) lpjFbxSurfaceLambert)->Bump.Set(
  ( FbxDouble3  )  _lcvt.j2c_object<jlong,FbxDouble3 >(lpFbxDouble3)
  );
}
  /// FbxPropertyT< FbxDouble3 >  Bump
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxSurfaceLambert_mepGetBump(JNIEnv * __env, jclass __jc,jlong lpjFbxSurfaceLambert)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxDouble3>(
  ((FbxSurfaceLambert *) lpjFbxSurfaceLambert)->Bump.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  Bump
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxSurfaceLambert_mptGetBump(JNIEnv * __env, jclass __jc,jlong lpjFbxSurfaceLambert)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble3   >(
   (&((FbxSurfaceLambert *) lpjFbxSurfaceLambert)->Bump
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  BumpFactor
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxSurfaceLambert_mepSetBumpFactor(JNIEnv * __env, jclass __jc,jlong lpjFbxSurfaceLambert,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxSurfaceLambert *) lpjFbxSurfaceLambert)->BumpFactor.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  BumpFactor
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxSurfaceLambert_mepGetBumpFactor(JNIEnv * __env, jclass __jc,jlong lpjFbxSurfaceLambert)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxSurfaceLambert *) lpjFbxSurfaceLambert)->BumpFactor.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  BumpFactor
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxSurfaceLambert_mptGetBumpFactor(JNIEnv * __env, jclass __jc,jlong lpjFbxSurfaceLambert)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxSurfaceLambert *) lpjFbxSurfaceLambert)->BumpFactor
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  TransparentColor
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxSurfaceLambert_mepSetTransparentColor(JNIEnv * __env, jclass __jc,jlong lpjFbxSurfaceLambert,jlong lpFbxDouble3)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxSurfaceLambert *) lpjFbxSurfaceLambert)->TransparentColor.Set(
  ( FbxDouble3  )  _lcvt.j2c_object<jlong,FbxDouble3 >(lpFbxDouble3)
  );
}
  /// FbxPropertyT< FbxDouble3 >  TransparentColor
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxSurfaceLambert_mepGetTransparentColor(JNIEnv * __env, jclass __jc,jlong lpjFbxSurfaceLambert)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxDouble3>(
  ((FbxSurfaceLambert *) lpjFbxSurfaceLambert)->TransparentColor.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  TransparentColor
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxSurfaceLambert_mptGetTransparentColor(JNIEnv * __env, jclass __jc,jlong lpjFbxSurfaceLambert)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble3   >(
   (&((FbxSurfaceLambert *) lpjFbxSurfaceLambert)->TransparentColor
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  TransparencyFactor
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxSurfaceLambert_mepSetTransparencyFactor(JNIEnv * __env, jclass __jc,jlong lpjFbxSurfaceLambert,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxSurfaceLambert *) lpjFbxSurfaceLambert)->TransparencyFactor.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  TransparencyFactor
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxSurfaceLambert_mepGetTransparencyFactor(JNIEnv * __env, jclass __jc,jlong lpjFbxSurfaceLambert)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxSurfaceLambert *) lpjFbxSurfaceLambert)->TransparencyFactor.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  TransparencyFactor
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxSurfaceLambert_mptGetTransparencyFactor(JNIEnv * __env, jclass __jc,jlong lpjFbxSurfaceLambert)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxSurfaceLambert *) lpjFbxSurfaceLambert)->TransparencyFactor
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  DisplacementColor
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxSurfaceLambert_mepSetDisplacementColor(JNIEnv * __env, jclass __jc,jlong lpjFbxSurfaceLambert,jlong lpFbxDouble3)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxSurfaceLambert *) lpjFbxSurfaceLambert)->DisplacementColor.Set(
  ( FbxDouble3  )  _lcvt.j2c_object<jlong,FbxDouble3 >(lpFbxDouble3)
  );
}
  /// FbxPropertyT< FbxDouble3 >  DisplacementColor
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxSurfaceLambert_mepGetDisplacementColor(JNIEnv * __env, jclass __jc,jlong lpjFbxSurfaceLambert)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxDouble3>(
  ((FbxSurfaceLambert *) lpjFbxSurfaceLambert)->DisplacementColor.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  DisplacementColor
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxSurfaceLambert_mptGetDisplacementColor(JNIEnv * __env, jclass __jc,jlong lpjFbxSurfaceLambert)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble3   >(
   (&((FbxSurfaceLambert *) lpjFbxSurfaceLambert)->DisplacementColor
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  DisplacementFactor
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxSurfaceLambert_mepSetDisplacementFactor(JNIEnv * __env, jclass __jc,jlong lpjFbxSurfaceLambert,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxSurfaceLambert *) lpjFbxSurfaceLambert)->DisplacementFactor.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  DisplacementFactor
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxSurfaceLambert_mepGetDisplacementFactor(JNIEnv * __env, jclass __jc,jlong lpjFbxSurfaceLambert)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxSurfaceLambert *) lpjFbxSurfaceLambert)->DisplacementFactor.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  DisplacementFactor
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxSurfaceLambert_mptGetDisplacementFactor(JNIEnv * __env, jclass __jc,jlong lpjFbxSurfaceLambert)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxSurfaceLambert *) lpjFbxSurfaceLambert)->DisplacementFactor
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  VectorDisplacementColor
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxSurfaceLambert_mepSetVectorDisplacementColor(JNIEnv * __env, jclass __jc,jlong lpjFbxSurfaceLambert,jlong lpFbxDouble3)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxSurfaceLambert *) lpjFbxSurfaceLambert)->VectorDisplacementColor.Set(
  ( FbxDouble3  )  _lcvt.j2c_object<jlong,FbxDouble3 >(lpFbxDouble3)
  );
}
  /// FbxPropertyT< FbxDouble3 >  VectorDisplacementColor
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxSurfaceLambert_mepGetVectorDisplacementColor(JNIEnv * __env, jclass __jc,jlong lpjFbxSurfaceLambert)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxDouble3>(
  ((FbxSurfaceLambert *) lpjFbxSurfaceLambert)->VectorDisplacementColor.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  VectorDisplacementColor
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxSurfaceLambert_mptGetVectorDisplacementColor(JNIEnv * __env, jclass __jc,jlong lpjFbxSurfaceLambert)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble3   >(
   (&((FbxSurfaceLambert *) lpjFbxSurfaceLambert)->VectorDisplacementColor
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  VectorDisplacementFactor
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxSurfaceLambert_mepSetVectorDisplacementFactor(JNIEnv * __env, jclass __jc,jlong lpjFbxSurfaceLambert,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxSurfaceLambert *) lpjFbxSurfaceLambert)->VectorDisplacementFactor.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  VectorDisplacementFactor
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxSurfaceLambert_mepGetVectorDisplacementFactor(JNIEnv * __env, jclass __jc,jlong lpjFbxSurfaceLambert)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxSurfaceLambert *) lpjFbxSurfaceLambert)->VectorDisplacementFactor.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  VectorDisplacementFactor
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxSurfaceLambert_mptGetVectorDisplacementFactor(JNIEnv * __env, jclass __jc,jlong lpjFbxSurfaceLambert)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxSurfaceLambert *) lpjFbxSurfaceLambert)->VectorDisplacementFactor
  ));
  return ret;
}
  /// FbxSurfaceLambert * Create( FbxSurfaceMaterial* lpFbxSurfaceMaterial,  const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxSurfaceLambert_Create(JNIEnv * __env, jclass __jc,jlong lpFbxSurfaceMaterial,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxSurfaceLambert>(
  FbxSurfaceLambert::Create(
  ( FbxSurfaceMaterial  *)  _lcvt.j2c_object_pt<jlong, FbxSurfaceMaterial>(lpFbxSurfaceMaterial)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
