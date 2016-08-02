
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxProperty &  StaticInit (FbxObject *pObject, const char *pName, const double &pValue, bool pForceSet, FbxPropertyFlags::EFlags pFlags=FbxPropertyFlags::eNone)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxPropertyTDouble_StaticInit(JNIEnv * __env, jclass __jc,jlong lpjFbxPropertyTDouble,jlong pObject,jstring pName,jobject pValue,jboolean pForceSet,jint pFlags)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_ref<jlong, FbxProperty>(
  ((FbxPropertyTDouble *) lpjFbxPropertyTDouble)->StaticInit(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pObject)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ,
  (const double  &) * _lcvt.j2c_double_ref<jobject,double>(pValue)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pForceSet)
  ,
  ( FbxPropertyFlags::EFlags  )  _lcvt.j2c<jint,FbxPropertyFlags::EFlags >(pFlags)
  ));
  return ret;
}
  /// FbxProperty &  StaticInit (FbxObject *pObject, const char *pName, const FbxDataType &pDataType, const double &pValue, bool pForceSet, FbxPropertyFlags::EFlags pFlags=FbxPropertyFlags::eNone)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxPropertyTDouble_StaticInit1(JNIEnv * __env, jclass __jc,jlong lpjFbxPropertyTDouble,jlong pObject,jstring pName,jobject pDataType,jobject pValue,jboolean pForceSet,jint pFlags)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_ref<jlong, FbxProperty>(
  ((FbxPropertyTDouble *) lpjFbxPropertyTDouble)->StaticInit(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pObject)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ,
  (const FbxDataType  &) * _lcvt.j2c_object_ref<jobject,FbxDataType >(pDataType)
  ,
  (const double  &) * _lcvt.j2c_double_ref<jobject,double>(pValue)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pForceSet)
  ,
  ( FbxPropertyFlags::EFlags  )  _lcvt.j2c<jint,FbxPropertyFlags::EFlags >(pFlags)
  ));
  return ret;
}
  /// FbxProperty &  StaticInit (FbxProperty pCompound, const char *pName, const FbxDataType &pDataType, const double &pValue, bool pForceSet=true, FbxPropertyFlags::EFlags pFlags=FbxPropertyFlags::eNone)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxPropertyTDouble_StaticInit2(JNIEnv * __env, jclass __jc,jlong lpjFbxPropertyTDouble,jlong pCompound,jstring pName,jobject pDataType,jobject pValue,jboolean pForceSet,jint pFlags)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_ref<jlong, FbxProperty>(
  ((FbxPropertyTDouble *) lpjFbxPropertyTDouble)->StaticInit(
  ( FbxProperty  )  _lcvt.j2c_object<jlong,FbxProperty >(pCompound)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ,
  (const FbxDataType  &) * _lcvt.j2c_object_ref<jobject,FbxDataType >(pDataType)
  ,
  (const double  &) * _lcvt.j2c_double_ref<jobject,double>(pValue)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pForceSet)
  ,
  ( FbxPropertyFlags::EFlags  )  _lcvt.j2c<jint,FbxPropertyFlags::EFlags >(pFlags)
  ));
  return ret;
}
  /// void  Set (const double &pValue)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxPropertyTDouble_Set(JNIEnv * __env, jclass __jc,jlong lpjFbxPropertyTDouble,jobject pValue)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxPropertyTDouble *) lpjFbxPropertyTDouble)->Set(
  (const double  &) * _lcvt.j2c_double_ref<jobject,double>(pValue)
  );
}
  /// double  Get () const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxPropertyTDouble_Get(JNIEnv * __env, jclass __jc,jlong lpjFbxPropertyTDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxPropertyTDouble *) lpjFbxPropertyTDouble)->Get(
  ));
  return ret;
}
  /// double  EvaluateValue (const FbxTime &pTime=FBXSDK_TIME_INFINITE, bool pForceEval=false)
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxPropertyTDouble_EvaluateValue(JNIEnv * __env, jclass __jc,jlong lpjFbxPropertyTDouble,jobject pTime,jboolean pForceEval)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxPropertyTDouble *) lpjFbxPropertyTDouble)->EvaluateValue(
  (const FbxTime  &) * _lcvt.j2c_object_ref<jobject,FbxTime >(pTime)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pForceEval)
  ));
  return ret;
}
  /// FbxAnimCurveNode *  CreateCurveNode (FbxAnimLayer *pAnimLayer)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxPropertyTDouble_CreateCurveNode(JNIEnv * __env, jclass __jc,jlong lpjFbxPropertyTDouble,jlong pAnimLayer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAnimCurveNode>(
  ((FbxPropertyTDouble *) lpjFbxPropertyTDouble)->CreateCurveNode(
  ( FbxAnimLayer  *)  _lcvt.j2c_object_pt<jlong, FbxAnimLayer>(pAnimLayer)
  ));
  return ret;
}
  /// FbxAnimCurveNode *  GetCurveNode (bool pCreate=false)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxPropertyTDouble_GetCurveNode(JNIEnv * __env, jclass __jc,jlong lpjFbxPropertyTDouble,jboolean pCreate)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAnimCurveNode>(
  ((FbxPropertyTDouble *) lpjFbxPropertyTDouble)->GetCurveNode(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pCreate)
  ));
  return ret;
}
  /// FbxAnimCurveNode *  GetCurveNode (FbxAnimStack *pAnimStack, bool pCreate=false)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxPropertyTDouble_GetCurveNode1(JNIEnv * __env, jclass __jc,jlong lpjFbxPropertyTDouble,jlong pAnimStack,jboolean pCreate)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAnimCurveNode>(
  ((FbxPropertyTDouble *) lpjFbxPropertyTDouble)->GetCurveNode(
  ( FbxAnimStack  *)  _lcvt.j2c_object_pt<jlong, FbxAnimStack>(pAnimStack)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pCreate)
  ));
  return ret;
}
  /// FbxAnimCurveNode *  GetCurveNode (FbxAnimLayer *pAnimLayer, bool pCreate=false)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxPropertyTDouble_GetCurveNode2(JNIEnv * __env, jclass __jc,jlong lpjFbxPropertyTDouble,jlong pAnimLayer,jboolean pCreate)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAnimCurveNode>(
  ((FbxPropertyTDouble *) lpjFbxPropertyTDouble)->GetCurveNode(
  ( FbxAnimLayer  *)  _lcvt.j2c_object_pt<jlong, FbxAnimLayer>(pAnimLayer)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pCreate)
  ));
  return ret;
}
  /// FbxAnimCurve *  GetCurve (FbxAnimLayer *pAnimLayer, bool pCreate=false)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxPropertyTDouble_GetCurve(JNIEnv * __env, jclass __jc,jlong lpjFbxPropertyTDouble,jlong pAnimLayer,jboolean pCreate)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAnimCurve>(
  ((FbxPropertyTDouble *) lpjFbxPropertyTDouble)->GetCurve(
  ( FbxAnimLayer  *)  _lcvt.j2c_object_pt<jlong, FbxAnimLayer>(pAnimLayer)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pCreate)
  ));
  return ret;
}
  /// FbxAnimCurve *  GetCurve (FbxAnimLayer *pAnimLayer, const char *pChannel, bool pCreate=false)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxPropertyTDouble_GetCurve1(JNIEnv * __env, jclass __jc,jlong lpjFbxPropertyTDouble,jlong pAnimLayer,jstring pChannel,jboolean pCreate)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAnimCurve>(
  ((FbxPropertyTDouble *) lpjFbxPropertyTDouble)->GetCurve(
  ( FbxAnimLayer  *)  _lcvt.j2c_object_pt<jlong, FbxAnimLayer>(pAnimLayer)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pChannel)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pCreate)
  ));
  return ret;
}
  /// FbxAnimCurve *  GetCurve (FbxAnimLayer *pAnimLayer, const char *pName, const char *pChannel, bool pCreate)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxPropertyTDouble_GetCurve2(JNIEnv * __env, jclass __jc,jlong lpjFbxPropertyTDouble,jlong pAnimLayer,jstring pName,jstring pChannel,jboolean pCreate)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAnimCurve>(
  ((FbxPropertyTDouble *) lpjFbxPropertyTDouble)->GetCurve(
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
