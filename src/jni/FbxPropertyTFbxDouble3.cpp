
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxProperty &  StaticInit (FbxObject *pObject, const char *pName, const FbxDouble3  &pValue, bool pForceSet, FbxPropertyFlags::EFlags pFlags=FbxPropertyFlags::eNone)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxPropertyTFbxDouble3_StaticInit(JNIEnv * __env, jclass __jc,jlong lpjFbxPropertyTFbxDouble3,jlong pObject,jstring pName,jobject pValue,jboolean pForceSet,jint pFlags)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_ref<jlong, FbxProperty>(
  ((FbxPropertyTFbxDouble3 *) lpjFbxPropertyTFbxDouble3)->StaticInit(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pObject)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ,
  (const FbxDouble3  &) * _lcvt.j2c_object_ref<jobject,FbxDouble3 >(pValue)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pForceSet)
  ,
  ( FbxPropertyFlags::EFlags  )  _lcvt.j2c<jint,FbxPropertyFlags::EFlags >(pFlags)
  ));
  return ret;
}
  /// FbxProperty &  StaticInit (FbxObject *pObject, const char *pName, const FbxDataType &pDataType, const FbxDouble3  &pValue, bool pForceSet, FbxPropertyFlags::EFlags pFlags=FbxPropertyFlags::eNone)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxPropertyTFbxDouble3_StaticInit1(JNIEnv * __env, jclass __jc,jlong lpjFbxPropertyTFbxDouble3,jlong pObject,jstring pName,jobject pDataType,jobject pValue,jboolean pForceSet,jint pFlags)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_ref<jlong, FbxProperty>(
  ((FbxPropertyTFbxDouble3 *) lpjFbxPropertyTFbxDouble3)->StaticInit(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pObject)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ,
  (const FbxDataType  &) * _lcvt.j2c_object_ref<jobject,FbxDataType >(pDataType)
  ,
  (const FbxDouble3  &) * _lcvt.j2c_object_ref<jobject,FbxDouble3 >(pValue)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pForceSet)
  ,
  ( FbxPropertyFlags::EFlags  )  _lcvt.j2c<jint,FbxPropertyFlags::EFlags >(pFlags)
  ));
  return ret;
}
  /// FbxProperty &  StaticInit (FbxProperty pCompound, const char *pName, const FbxDataType &pDataType, const FbxDouble3  &pValue, bool pForceSet=true, FbxPropertyFlags::EFlags pFlags=FbxPropertyFlags::eNone)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxPropertyTFbxDouble3_StaticInit2(JNIEnv * __env, jclass __jc,jlong lpjFbxPropertyTFbxDouble3,jlong pCompound,jstring pName,jobject pDataType,jobject pValue,jboolean pForceSet,jint pFlags)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_ref<jlong, FbxProperty>(
  ((FbxPropertyTFbxDouble3 *) lpjFbxPropertyTFbxDouble3)->StaticInit(
  ( FbxProperty  )  _lcvt.j2c_object<jlong,FbxProperty >(pCompound)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ,
  (const FbxDataType  &) * _lcvt.j2c_object_ref<jobject,FbxDataType >(pDataType)
  ,
  (const FbxDouble3  &) * _lcvt.j2c_object_ref<jobject,FbxDouble3 >(pValue)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pForceSet)
  ,
  ( FbxPropertyFlags::EFlags  )  _lcvt.j2c<jint,FbxPropertyFlags::EFlags >(pFlags)
  ));
  return ret;
}
  /// void  Set (const FbxDouble3  &pValue)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxPropertyTFbxDouble3_Set(JNIEnv * __env, jclass __jc,jlong lpjFbxPropertyTFbxDouble3,jobject pValue)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxPropertyTFbxDouble3 *) lpjFbxPropertyTFbxDouble3)->Set(
  (const FbxDouble3  &) * _lcvt.j2c_object_ref<jobject,FbxDouble3 >(pValue)
  );
}
  /// FbxDouble3   Get () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxPropertyTFbxDouble3_Get(JNIEnv * __env, jclass __jc,jlong lpjFbxPropertyTFbxDouble3)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxDouble3>(
  ((FbxPropertyTFbxDouble3 *) lpjFbxPropertyTFbxDouble3)->Get(
  ));
  return ret;
}
  /// FbxDouble3   EvaluateValue (const FbxTime &pTime=FBXSDK_TIME_INFINITE, bool pForceEval=false)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxPropertyTFbxDouble3_EvaluateValue(JNIEnv * __env, jclass __jc,jlong lpjFbxPropertyTFbxDouble3,jobject pTime,jboolean pForceEval)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxDouble3>(
  ((FbxPropertyTFbxDouble3 *) lpjFbxPropertyTFbxDouble3)->EvaluateValue(
  (const FbxTime  &) * _lcvt.j2c_object_ref<jobject,FbxTime >(pTime)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pForceEval)
  ));
  return ret;
}
  /// FbxAnimCurveNode *  CreateCurveNode (FbxAnimLayer *pAnimLayer)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxPropertyTFbxDouble3_CreateCurveNode(JNIEnv * __env, jclass __jc,jlong lpjFbxPropertyTFbxDouble3,jlong pAnimLayer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAnimCurveNode>(
  ((FbxPropertyTFbxDouble3 *) lpjFbxPropertyTFbxDouble3)->CreateCurveNode(
  ( FbxAnimLayer  *)  _lcvt.j2c_object_pt<jlong, FbxAnimLayer>(pAnimLayer)
  ));
  return ret;
}
  /// FbxAnimCurveNode *  GetCurveNode (bool pCreate=false)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxPropertyTFbxDouble3_GetCurveNode(JNIEnv * __env, jclass __jc,jlong lpjFbxPropertyTFbxDouble3,jboolean pCreate)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAnimCurveNode>(
  ((FbxPropertyTFbxDouble3 *) lpjFbxPropertyTFbxDouble3)->GetCurveNode(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pCreate)
  ));
  return ret;
}
  /// FbxAnimCurveNode *  GetCurveNode (FbxAnimStack *pAnimStack, bool pCreate=false)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxPropertyTFbxDouble3_GetCurveNode1(JNIEnv * __env, jclass __jc,jlong lpjFbxPropertyTFbxDouble3,jlong pAnimStack,jboolean pCreate)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAnimCurveNode>(
  ((FbxPropertyTFbxDouble3 *) lpjFbxPropertyTFbxDouble3)->GetCurveNode(
  ( FbxAnimStack  *)  _lcvt.j2c_object_pt<jlong, FbxAnimStack>(pAnimStack)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pCreate)
  ));
  return ret;
}
  /// FbxAnimCurveNode *  GetCurveNode (FbxAnimLayer *pAnimLayer, bool pCreate=false)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxPropertyTFbxDouble3_GetCurveNode2(JNIEnv * __env, jclass __jc,jlong lpjFbxPropertyTFbxDouble3,jlong pAnimLayer,jboolean pCreate)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAnimCurveNode>(
  ((FbxPropertyTFbxDouble3 *) lpjFbxPropertyTFbxDouble3)->GetCurveNode(
  ( FbxAnimLayer  *)  _lcvt.j2c_object_pt<jlong, FbxAnimLayer>(pAnimLayer)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pCreate)
  ));
  return ret;
}
  /// FbxAnimCurve *  GetCurve (FbxAnimLayer *pAnimLayer, bool pCreate=false)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxPropertyTFbxDouble3_GetCurve(JNIEnv * __env, jclass __jc,jlong lpjFbxPropertyTFbxDouble3,jlong pAnimLayer,jboolean pCreate)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAnimCurve>(
  ((FbxPropertyTFbxDouble3 *) lpjFbxPropertyTFbxDouble3)->GetCurve(
  ( FbxAnimLayer  *)  _lcvt.j2c_object_pt<jlong, FbxAnimLayer>(pAnimLayer)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pCreate)
  ));
  return ret;
}
  /// FbxAnimCurve *  GetCurve (FbxAnimLayer *pAnimLayer, const char *pChannel, bool pCreate=false)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxPropertyTFbxDouble3_GetCurve1(JNIEnv * __env, jclass __jc,jlong lpjFbxPropertyTFbxDouble3,jlong pAnimLayer,jstring pChannel,jboolean pCreate)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAnimCurve>(
  ((FbxPropertyTFbxDouble3 *) lpjFbxPropertyTFbxDouble3)->GetCurve(
  ( FbxAnimLayer  *)  _lcvt.j2c_object_pt<jlong, FbxAnimLayer>(pAnimLayer)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pChannel)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pCreate)
  ));
  return ret;
}
  /// FbxAnimCurve *  GetCurve (FbxAnimLayer *pAnimLayer, const char *pName, const char *pChannel, bool pCreate)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxPropertyTFbxDouble3_GetCurve2(JNIEnv * __env, jclass __jc,jlong lpjFbxPropertyTFbxDouble3,jlong pAnimLayer,jstring pName,jstring pChannel,jboolean pCreate)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAnimCurve>(
  ((FbxPropertyTFbxDouble3 *) lpjFbxPropertyTFbxDouble3)->GetCurve(
  ( FbxAnimLayer  *)  _lcvt.j2c_object_pt<jlong, FbxAnimLayer>(pAnimLayer)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pChannel)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pCreate)
  ));
  return ret;
}
