
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxPropertyT< FbxDouble3 >  Specular
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxSurfacePhong_mepSetSpecular(JNIEnv * __env, jclass __jc,jlong lpjFbxSurfacePhong,jlong lpFbxDouble3)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxSurfacePhong *) lpjFbxSurfacePhong)->Specular.Set(
  ( FbxDouble3  )  _lcvt.j2c_object<jlong,FbxDouble3 >(lpFbxDouble3)
  );
}
  /// FbxPropertyT< FbxDouble3 >  Specular
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxSurfacePhong_mepGetSpecular(JNIEnv * __env, jclass __jc,jlong lpjFbxSurfacePhong)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxDouble3>(
  ((FbxSurfacePhong *) lpjFbxSurfacePhong)->Specular.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  Specular
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxSurfacePhong_mptGetSpecular(JNIEnv * __env, jclass __jc,jlong lpjFbxSurfacePhong)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble3   >(
   (&((FbxSurfacePhong *) lpjFbxSurfacePhong)->Specular
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  SpecularFactor
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxSurfacePhong_mepSetSpecularFactor(JNIEnv * __env, jclass __jc,jlong lpjFbxSurfacePhong,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxSurfacePhong *) lpjFbxSurfacePhong)->SpecularFactor.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  SpecularFactor
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxSurfacePhong_mepGetSpecularFactor(JNIEnv * __env, jclass __jc,jlong lpjFbxSurfacePhong)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxSurfacePhong *) lpjFbxSurfacePhong)->SpecularFactor.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  SpecularFactor
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxSurfacePhong_mptGetSpecularFactor(JNIEnv * __env, jclass __jc,jlong lpjFbxSurfacePhong)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxSurfacePhong *) lpjFbxSurfacePhong)->SpecularFactor
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  Shininess
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxSurfacePhong_mepSetShininess(JNIEnv * __env, jclass __jc,jlong lpjFbxSurfacePhong,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxSurfacePhong *) lpjFbxSurfacePhong)->Shininess.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  Shininess
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxSurfacePhong_mepGetShininess(JNIEnv * __env, jclass __jc,jlong lpjFbxSurfacePhong)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxSurfacePhong *) lpjFbxSurfacePhong)->Shininess.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  Shininess
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxSurfacePhong_mptGetShininess(JNIEnv * __env, jclass __jc,jlong lpjFbxSurfacePhong)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxSurfacePhong *) lpjFbxSurfacePhong)->Shininess
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  Reflection
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxSurfacePhong_mepSetReflection(JNIEnv * __env, jclass __jc,jlong lpjFbxSurfacePhong,jlong lpFbxDouble3)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxSurfacePhong *) lpjFbxSurfacePhong)->Reflection.Set(
  ( FbxDouble3  )  _lcvt.j2c_object<jlong,FbxDouble3 >(lpFbxDouble3)
  );
}
  /// FbxPropertyT< FbxDouble3 >  Reflection
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxSurfacePhong_mepGetReflection(JNIEnv * __env, jclass __jc,jlong lpjFbxSurfacePhong)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxDouble3>(
  ((FbxSurfacePhong *) lpjFbxSurfacePhong)->Reflection.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  Reflection
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxSurfacePhong_mptGetReflection(JNIEnv * __env, jclass __jc,jlong lpjFbxSurfacePhong)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble3   >(
   (&((FbxSurfacePhong *) lpjFbxSurfacePhong)->Reflection
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  ReflectionFactor
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxSurfacePhong_mepSetReflectionFactor(JNIEnv * __env, jclass __jc,jlong lpjFbxSurfacePhong,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxSurfacePhong *) lpjFbxSurfacePhong)->ReflectionFactor.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  ReflectionFactor
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxSurfacePhong_mepGetReflectionFactor(JNIEnv * __env, jclass __jc,jlong lpjFbxSurfacePhong)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxSurfacePhong *) lpjFbxSurfacePhong)->ReflectionFactor.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  ReflectionFactor
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxSurfacePhong_mptGetReflectionFactor(JNIEnv * __env, jclass __jc,jlong lpjFbxSurfacePhong)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxSurfacePhong *) lpjFbxSurfacePhong)->ReflectionFactor
  ));
  return ret;
}
  /// FbxSurfacePhong * Create( FbxSurfaceLambert* lpFbxSurfaceLambert,  const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxSurfacePhong_Create(JNIEnv * __env, jclass __jc,jlong lpFbxSurfaceLambert,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxSurfacePhong>(
  FbxSurfacePhong::Create(
  ( FbxSurfaceLambert  *)  _lcvt.j2c_object_pt<jlong, FbxSurfaceLambert>(lpFbxSurfaceLambert)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
