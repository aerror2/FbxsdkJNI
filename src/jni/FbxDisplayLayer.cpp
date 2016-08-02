//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxPropertyT< FbxDouble3 >  Color
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxDisplayLayer_mepSetColor(JNIEnv * __env, jclass __jc,jlong lpjFbxDisplayLayer,jlong lpFbxDouble3)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxDisplayLayer *) lpjFbxDisplayLayer)->Color.Set(
  ( FbxDouble3  )  _lcvt.j2c_object<jlong,FbxDouble3 >(lpFbxDouble3)
  );
}
  /// FbxPropertyT< FbxDouble3 >  Color
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxDisplayLayer_mepGetColor(JNIEnv * __env, jclass __jc,jlong lpjFbxDisplayLayer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxDouble3>(
  ((FbxDisplayLayer *) lpjFbxDisplayLayer)->Color.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  Color
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxDisplayLayer_mptGetColor(JNIEnv * __env, jclass __jc,jlong lpjFbxDisplayLayer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble3   >(
   (&((FbxDisplayLayer *) lpjFbxDisplayLayer)->Color
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  Show
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxDisplayLayer_mepSetShow(JNIEnv * __env, jclass __jc,jlong lpjFbxDisplayLayer,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxDisplayLayer *) lpjFbxDisplayLayer)->Show.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  Show
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxDisplayLayer_mepGetShow(JNIEnv * __env, jclass __jc,jlong lpjFbxDisplayLayer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxDisplayLayer *) lpjFbxDisplayLayer)->Show.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  Show
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxDisplayLayer_mptGetShow(JNIEnv * __env, jclass __jc,jlong lpjFbxDisplayLayer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxDisplayLayer *) lpjFbxDisplayLayer)->Show
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  Freeze
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxDisplayLayer_mepSetFreeze(JNIEnv * __env, jclass __jc,jlong lpjFbxDisplayLayer,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxDisplayLayer *) lpjFbxDisplayLayer)->Freeze.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  Freeze
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxDisplayLayer_mepGetFreeze(JNIEnv * __env, jclass __jc,jlong lpjFbxDisplayLayer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxDisplayLayer *) lpjFbxDisplayLayer)->Freeze.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  Freeze
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxDisplayLayer_mptGetFreeze(JNIEnv * __env, jclass __jc,jlong lpjFbxDisplayLayer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxDisplayLayer *) lpjFbxDisplayLayer)->Freeze
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  LODBox
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxDisplayLayer_mepSetLODBox(JNIEnv * __env, jclass __jc,jlong lpjFbxDisplayLayer,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxDisplayLayer *) lpjFbxDisplayLayer)->LODBox.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  LODBox
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxDisplayLayer_mepGetLODBox(JNIEnv * __env, jclass __jc,jlong lpjFbxDisplayLayer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxDisplayLayer *) lpjFbxDisplayLayer)->LODBox.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  LODBox
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxDisplayLayer_mptGetLODBox(JNIEnv * __env, jclass __jc,jlong lpjFbxDisplayLayer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxDisplayLayer *) lpjFbxDisplayLayer)->LODBox
  ));
  return ret;
}
  /// FbxDisplayLayer * Create( FbxCollectionExclusive* lpFbxCollectionExclusive,  const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxDisplayLayer_Create(JNIEnv * __env, jclass __jc,jlong lpFbxCollectionExclusive,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxDisplayLayer>(
  FbxDisplayLayer::Create(
  ( FbxCollectionExclusive  *)  _lcvt.j2c_object_pt<jlong, FbxCollectionExclusive>(lpFbxCollectionExclusive)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
