
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// virtual FbxNodeAttribute::EType  GetAttributeType () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxNull_GetAttributeType(JNIEnv * __env, jclass __jc,jlong lpjFbxNull)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxNodeAttribute::EType  >(
  ((FbxNull *) lpjFbxNull)->GetAttributeType(
  ));
  return ret;
}
  /// void  Reset ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNull_Reset(JNIEnv * __env, jclass __jc,jlong lpjFbxNull)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNull *) lpjFbxNull)->Reset(
  );
}
  /// double  GetSizeDefaultValue () const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxNull_GetSizeDefaultValue(JNIEnv * __env, jclass __jc,jlong lpjFbxNull)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxNull *) lpjFbxNull)->GetSizeDefaultValue(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  Size
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNull_mepSetSize(JNIEnv * __env, jclass __jc,jlong lpjFbxNull,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNull *) lpjFbxNull)->Size.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  Size
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxNull_mepGetSize(JNIEnv * __env, jclass __jc,jlong lpjFbxNull)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxNull *) lpjFbxNull)->Size.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  Size
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNull_mptGetSize(JNIEnv * __env, jclass __jc,jlong lpjFbxNull)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxNull *) lpjFbxNull)->Size
  ));
  return ret;
}
  /// FbxPropertyT< ELook >  Look
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNull_mepSetLook(JNIEnv * __env, jclass __jc,jlong lpjFbxNull,jint lpELook)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNull *) lpjFbxNull)->Look.Set(
  ( FbxNull::ELook  )  _lcvt.j2c<jint,FbxNull::ELook >(lpELook)
  );
}
  /// FbxPropertyT< ELook >  Look
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxNull_mepGetLook(JNIEnv * __env, jclass __jc,jlong lpjFbxNull)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxNull::ELook  >(
  ((FbxNull *) lpjFbxNull)->Look.Get(
  ));
  return ret;
}
  /// FbxPropertyT< ELook >  Look
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNull_mptGetLook(JNIEnv * __env, jclass __jc,jlong lpjFbxNull)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxNull::ELook   >(
   (&((FbxNull *) lpjFbxNull)->Look
  ));
  return ret;
}
  /// FbxNull * Create( FbxNodeAttribute* lpFbxNodeAttribute,  const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNull_Create(JNIEnv * __env, jclass __jc,jlong lpFbxNodeAttribute,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxNull>(
  FbxNull::Create(
  ( FbxNodeAttribute  *)  _lcvt.j2c_object_pt<jlong, FbxNodeAttribute>(lpFbxNodeAttribute)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
