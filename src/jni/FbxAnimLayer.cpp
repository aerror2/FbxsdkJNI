
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// void  Reset ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimLayer_Reset(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimLayer)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimLayer *) lpjFbxAnimLayer)->Reset(
  );
}
  /// void  SetBlendModeBypass (EFbxType pType, bool pState)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimLayer_SetBlendModeBypass(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimLayer,jint pType,jboolean pState)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimLayer *) lpjFbxAnimLayer)->SetBlendModeBypass(
  ( EFbxType  )  _lcvt.j2c<jint,EFbxType >(pType)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pState)
  );
}
  /// bool  GetBlendModeBypass (EFbxType pType)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimLayer_GetBlendModeBypass(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimLayer,jint pType)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimLayer *) lpjFbxAnimLayer)->GetBlendModeBypass(
  ( EFbxType  )  _lcvt.j2c<jint,EFbxType >(pType)
  ));
  return ret;
}
  /// FbxAnimCurveNode *  CreateCurveNode (FbxProperty &pProperty)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimLayer_CreateCurveNode(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimLayer,jobject pProperty)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAnimCurveNode>(
  ((FbxAnimLayer *) lpjFbxAnimLayer)->CreateCurveNode(
  ( FbxProperty  &) * _lcvt.j2c_object_ref<jobject,FbxProperty >(pProperty)
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  Weight
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimLayer_mepSetWeight(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimLayer,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimLayer *) lpjFbxAnimLayer)->Weight.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  Weight
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxAnimLayer_mepGetWeight(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimLayer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxAnimLayer *) lpjFbxAnimLayer)->Weight.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  Weight
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimLayer_mptGetWeight(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimLayer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxAnimLayer *) lpjFbxAnimLayer)->Weight
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  Mute
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimLayer_mepSetMute(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimLayer,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimLayer *) lpjFbxAnimLayer)->Mute.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  Mute
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimLayer_mepGetMute(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimLayer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxAnimLayer *) lpjFbxAnimLayer)->Mute.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  Mute
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimLayer_mptGetMute(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimLayer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxAnimLayer *) lpjFbxAnimLayer)->Mute
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  Solo
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimLayer_mepSetSolo(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimLayer,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimLayer *) lpjFbxAnimLayer)->Solo.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  Solo
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimLayer_mepGetSolo(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimLayer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxAnimLayer *) lpjFbxAnimLayer)->Solo.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  Solo
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimLayer_mptGetSolo(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimLayer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxAnimLayer *) lpjFbxAnimLayer)->Solo
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  Lock
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimLayer_mepSetLock(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimLayer,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimLayer *) lpjFbxAnimLayer)->Lock.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  Lock
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimLayer_mepGetLock(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimLayer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxAnimLayer *) lpjFbxAnimLayer)->Lock.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  Lock
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimLayer_mptGetLock(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimLayer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxAnimLayer *) lpjFbxAnimLayer)->Lock
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  Color
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimLayer_mepSetColor(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimLayer,jlong lpFbxDouble3)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimLayer *) lpjFbxAnimLayer)->Color.Set(
  ( FbxDouble3  )  _lcvt.j2c_object<jlong,FbxDouble3 >(lpFbxDouble3)
  );
}
  /// FbxPropertyT< FbxDouble3 >  Color
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimLayer_mepGetColor(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimLayer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxDouble3>(
  ((FbxAnimLayer *) lpjFbxAnimLayer)->Color.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  Color
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimLayer_mptGetColor(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimLayer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble3   >(
   (&((FbxAnimLayer *) lpjFbxAnimLayer)->Color
  ));
  return ret;
}
  /// FbxPropertyT< FbxEnum >  BlendMode
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimLayer_mepSetBlendMode(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimLayer,jint lpFbxEnum)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimLayer *) lpjFbxAnimLayer)->BlendMode.Set(
  ( FbxEnum  )  _lcvt.j2c<jint,int >(lpFbxEnum)
  );
}
  /// FbxPropertyT< FbxEnum >  BlendMode
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxAnimLayer_mepGetBlendMode(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimLayer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxEnum  >(
  ((FbxAnimLayer *) lpjFbxAnimLayer)->BlendMode.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxEnum >  BlendMode
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimLayer_mptGetBlendMode(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimLayer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxEnum   >(
   (&((FbxAnimLayer *) lpjFbxAnimLayer)->BlendMode
  ));
  return ret;
}
  /// FbxPropertyT< FbxEnum >  RotationAccumulationMode
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimLayer_mepSetRotationAccumulationMode(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimLayer,jint lpFbxEnum)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimLayer *) lpjFbxAnimLayer)->RotationAccumulationMode.Set(
  ( FbxEnum  )  _lcvt.j2c<jint,int >(lpFbxEnum)
  );
}
  /// FbxPropertyT< FbxEnum >  RotationAccumulationMode
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxAnimLayer_mepGetRotationAccumulationMode(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimLayer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxEnum  >(
  ((FbxAnimLayer *) lpjFbxAnimLayer)->RotationAccumulationMode.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxEnum >  RotationAccumulationMode
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimLayer_mptGetRotationAccumulationMode(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimLayer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxEnum   >(
   (&((FbxAnimLayer *) lpjFbxAnimLayer)->RotationAccumulationMode
  ));
  return ret;
}
  /// FbxPropertyT< FbxEnum >  ScaleAccumulationMode
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimLayer_mepSetScaleAccumulationMode(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimLayer,jint lpFbxEnum)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimLayer *) lpjFbxAnimLayer)->ScaleAccumulationMode.Set(
  ( FbxEnum  )  _lcvt.j2c<jint,int >(lpFbxEnum)
  );
}
  /// FbxPropertyT< FbxEnum >  ScaleAccumulationMode
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxAnimLayer_mepGetScaleAccumulationMode(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimLayer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxEnum  >(
  ((FbxAnimLayer *) lpjFbxAnimLayer)->ScaleAccumulationMode.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxEnum >  ScaleAccumulationMode
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimLayer_mptGetScaleAccumulationMode(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimLayer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxEnum   >(
   (&((FbxAnimLayer *) lpjFbxAnimLayer)->ScaleAccumulationMode
  ));
  return ret;
}
  /// FbxAnimLayer * Create( FbxCollection* lpFbxCollection,  const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimLayer_Create(JNIEnv * __env, jclass __jc,jlong lpFbxCollection,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAnimLayer>(
  FbxAnimLayer::Create(
  ( FbxCollection  *)  _lcvt.j2c_object_pt<jlong, FbxCollection>(lpFbxCollection)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
