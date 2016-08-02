//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxProperty &  StaticInit (FbxObject *pObject, const char *pName, const bool &pValue, bool pForceSet, FbxPropertyFlags::EFlags pFlags=FbxPropertyFlags::eNone)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxPropertyTBool_StaticInit(JNIEnv * __env, jclass __jc,jlong lpjFbxPropertyTBool,jlong pObject,jstring pName,jobject pValue,jboolean pForceSet,jint pFlags)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_ref<jlong, FbxProperty>(
  ((FbxPropertyTBool *) lpjFbxPropertyTBool)->StaticInit(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pObject)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ,
  (const bool  &) * _lcvt.j2c_bool_ref<jobject,bool>(pValue)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pForceSet)
  ,
  ( FbxPropertyFlags::EFlags  )  _lcvt.j2c<jint,FbxPropertyFlags::EFlags >(pFlags)
  ));
  return ret;
}
  /// FbxProperty &  StaticInit (FbxObject *pObject, const char *pName, const FbxDataType &pDataType, const bool &pValue, bool pForceSet, FbxPropertyFlags::EFlags pFlags=FbxPropertyFlags::eNone)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxPropertyTBool_StaticInit1(JNIEnv * __env, jclass __jc,jlong lpjFbxPropertyTBool,jlong pObject,jstring pName,jobject pDataType,jobject pValue,jboolean pForceSet,jint pFlags)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_ref<jlong, FbxProperty>(
  ((FbxPropertyTBool *) lpjFbxPropertyTBool)->StaticInit(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pObject)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ,
  (const FbxDataType  &) * _lcvt.j2c_object_ref<jobject,FbxDataType >(pDataType)
  ,
  (const bool  &) * _lcvt.j2c_bool_ref<jobject,bool>(pValue)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pForceSet)
  ,
  ( FbxPropertyFlags::EFlags  )  _lcvt.j2c<jint,FbxPropertyFlags::EFlags >(pFlags)
  ));
  return ret;
}
  /// FbxProperty &  StaticInit (FbxProperty pCompound, const char *pName, const FbxDataType &pDataType, const bool &pValue, bool pForceSet=true, FbxPropertyFlags::EFlags pFlags=FbxPropertyFlags::eNone)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxPropertyTBool_StaticInit2(JNIEnv * __env, jclass __jc,jlong lpjFbxPropertyTBool,jlong pCompound,jstring pName,jobject pDataType,jobject pValue,jboolean pForceSet,jint pFlags)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_ref<jlong, FbxProperty>(
  ((FbxPropertyTBool *) lpjFbxPropertyTBool)->StaticInit(
  ( FbxProperty  )  _lcvt.j2c_object<jlong,FbxProperty >(pCompound)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ,
  (const FbxDataType  &) * _lcvt.j2c_object_ref<jobject,FbxDataType >(pDataType)
  ,
  (const bool  &) * _lcvt.j2c_bool_ref<jobject,bool>(pValue)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pForceSet)
  ,
  ( FbxPropertyFlags::EFlags  )  _lcvt.j2c<jint,FbxPropertyFlags::EFlags >(pFlags)
  ));
  return ret;
}
  /// void  Set (const bool &pValue)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxPropertyTBool_Set(JNIEnv * __env, jclass __jc,jlong lpjFbxPropertyTBool,jobject pValue)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxPropertyTBool *) lpjFbxPropertyTBool)->Set(
  (const bool  &) * _lcvt.j2c_bool_ref<jobject,bool>(pValue)
  );
}
  /// bool  Get () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxPropertyTBool_Get(JNIEnv * __env, jclass __jc,jlong lpjFbxPropertyTBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxPropertyTBool *) lpjFbxPropertyTBool)->Get(
  ));
  return ret;
}
  /// bool  EvaluateValue (const FbxTime &pTime=FBXSDK_TIME_INFINITE, bool pForceEval=false)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxPropertyTBool_EvaluateValue(JNIEnv * __env, jclass __jc,jlong lpjFbxPropertyTBool,jobject pTime,jboolean pForceEval)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxPropertyTBool *) lpjFbxPropertyTBool)->EvaluateValue(
  (const FbxTime  &) * _lcvt.j2c_object_ref<jobject,FbxTime >(pTime)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pForceEval)
  ));
  return ret;
}
  /// FbxAnimCurveNode *  CreateCurveNode (FbxAnimLayer *pAnimLayer)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxPropertyTBool_CreateCurveNode(JNIEnv * __env, jclass __jc,jlong lpjFbxPropertyTBool,jlong pAnimLayer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAnimCurveNode>(
  ((FbxPropertyTBool *) lpjFbxPropertyTBool)->CreateCurveNode(
  ( FbxAnimLayer  *)  _lcvt.j2c_object_pt<jlong, FbxAnimLayer>(pAnimLayer)
  ));
  return ret;
}
  /// FbxAnimCurveNode *  GetCurveNode (bool pCreate=false)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxPropertyTBool_GetCurveNode(JNIEnv * __env, jclass __jc,jlong lpjFbxPropertyTBool,jboolean pCreate)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAnimCurveNode>(
  ((FbxPropertyTBool *) lpjFbxPropertyTBool)->GetCurveNode(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pCreate)
  ));
  return ret;
}
  /// FbxAnimCurveNode *  GetCurveNode (FbxAnimStack *pAnimStack, bool pCreate=false)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxPropertyTBool_GetCurveNode1(JNIEnv * __env, jclass __jc,jlong lpjFbxPropertyTBool,jlong pAnimStack,jboolean pCreate)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAnimCurveNode>(
  ((FbxPropertyTBool *) lpjFbxPropertyTBool)->GetCurveNode(
  ( FbxAnimStack  *)  _lcvt.j2c_object_pt<jlong, FbxAnimStack>(pAnimStack)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pCreate)
  ));
  return ret;
}
  /// FbxAnimCurveNode *  GetCurveNode (FbxAnimLayer *pAnimLayer, bool pCreate=false)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxPropertyTBool_GetCurveNode2(JNIEnv * __env, jclass __jc,jlong lpjFbxPropertyTBool,jlong pAnimLayer,jboolean pCreate)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAnimCurveNode>(
  ((FbxPropertyTBool *) lpjFbxPropertyTBool)->GetCurveNode(
  ( FbxAnimLayer  *)  _lcvt.j2c_object_pt<jlong, FbxAnimLayer>(pAnimLayer)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pCreate)
  ));
  return ret;
}
  /// FbxAnimCurve *  GetCurve (FbxAnimLayer *pAnimLayer, bool pCreate=false)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxPropertyTBool_GetCurve(JNIEnv * __env, jclass __jc,jlong lpjFbxPropertyTBool,jlong pAnimLayer,jboolean pCreate)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAnimCurve>(
  ((FbxPropertyTBool *) lpjFbxPropertyTBool)->GetCurve(
  ( FbxAnimLayer  *)  _lcvt.j2c_object_pt<jlong, FbxAnimLayer>(pAnimLayer)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pCreate)
  ));
  return ret;
}
  /// FbxAnimCurve *  GetCurve (FbxAnimLayer *pAnimLayer, const char *pChannel, bool pCreate=false)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxPropertyTBool_GetCurve1(JNIEnv * __env, jclass __jc,jlong lpjFbxPropertyTBool,jlong pAnimLayer,jstring pChannel,jboolean pCreate)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAnimCurve>(
  ((FbxPropertyTBool *) lpjFbxPropertyTBool)->GetCurve(
  ( FbxAnimLayer  *)  _lcvt.j2c_object_pt<jlong, FbxAnimLayer>(pAnimLayer)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pChannel)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pCreate)
  ));
  return ret;
}
  /// FbxAnimCurve *  GetCurve (FbxAnimLayer *pAnimLayer, const char *pName, const char *pChannel, bool pCreate)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxPropertyTBool_GetCurve2(JNIEnv * __env, jclass __jc,jlong lpjFbxPropertyTBool,jlong pAnimLayer,jstring pName,jstring pChannel,jboolean pCreate)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAnimCurve>(
  ((FbxPropertyTBool *) lpjFbxPropertyTBool)->GetCurve(
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
