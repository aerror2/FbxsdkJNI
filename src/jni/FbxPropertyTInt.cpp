//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxProperty &  StaticInit (FbxObject *pObject, const char *pName, const int &pValue, bool pForceSet, FbxPropertyFlags::EFlags pFlags=FbxPropertyFlags::eNone)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxPropertyTInt_StaticInit(JNIEnv * __env, jclass __jc,jlong lpjFbxPropertyTInt,jlong pObject,jstring pName,jobject pValue,jboolean pForceSet,jint pFlags)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_ref<jlong, FbxProperty>(
  ((FbxPropertyTInt *) lpjFbxPropertyTInt)->StaticInit(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pObject)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ,
  (const int  &) * _lcvt.j2c_int_ref<jobject,int>(pValue)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pForceSet)
  ,
  ( FbxPropertyFlags::EFlags  )  _lcvt.j2c<jint,FbxPropertyFlags::EFlags >(pFlags)
  ));
  return ret;
}
  /// FbxProperty &  StaticInit (FbxObject *pObject, const char *pName, const FbxDataType &pDataType, const int &pValue, bool pForceSet, FbxPropertyFlags::EFlags pFlags=FbxPropertyFlags::eNone)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxPropertyTInt_StaticInit1(JNIEnv * __env, jclass __jc,jlong lpjFbxPropertyTInt,jlong pObject,jstring pName,jobject pDataType,jobject pValue,jboolean pForceSet,jint pFlags)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_ref<jlong, FbxProperty>(
  ((FbxPropertyTInt *) lpjFbxPropertyTInt)->StaticInit(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pObject)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ,
  (const FbxDataType  &) * _lcvt.j2c_object_ref<jobject,FbxDataType >(pDataType)
  ,
  (const int  &) * _lcvt.j2c_int_ref<jobject,int>(pValue)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pForceSet)
  ,
  ( FbxPropertyFlags::EFlags  )  _lcvt.j2c<jint,FbxPropertyFlags::EFlags >(pFlags)
  ));
  return ret;
}
  /// FbxProperty &  StaticInit (FbxProperty pCompound, const char *pName, const FbxDataType &pDataType, const int &pValue, bool pForceSet=true, FbxPropertyFlags::EFlags pFlags=FbxPropertyFlags::eNone)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxPropertyTInt_StaticInit2(JNIEnv * __env, jclass __jc,jlong lpjFbxPropertyTInt,jlong pCompound,jstring pName,jobject pDataType,jobject pValue,jboolean pForceSet,jint pFlags)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_ref<jlong, FbxProperty>(
  ((FbxPropertyTInt *) lpjFbxPropertyTInt)->StaticInit(
  ( FbxProperty  )  _lcvt.j2c_object<jlong,FbxProperty >(pCompound)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ,
  (const FbxDataType  &) * _lcvt.j2c_object_ref<jobject,FbxDataType >(pDataType)
  ,
  (const int  &) * _lcvt.j2c_int_ref<jobject,int>(pValue)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pForceSet)
  ,
  ( FbxPropertyFlags::EFlags  )  _lcvt.j2c<jint,FbxPropertyFlags::EFlags >(pFlags)
  ));
  return ret;
}
  /// void       Set (const int &pValue)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxPropertyTInt_Set(JNIEnv * __env, jclass __jc,jlong lpjFbxPropertyTInt,jobject pValue)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxPropertyTInt *) lpjFbxPropertyTInt)->Set(
  (const int  &) * _lcvt.j2c_int_ref<jobject,int>(pValue)
  );
}
  /// int  Get () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxPropertyTInt_Get(JNIEnv * __env, jclass __jc,jlong lpjFbxPropertyTInt)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxPropertyTInt *) lpjFbxPropertyTInt)->Get(
  ));
  return ret;
}
  /// int  EvaluateValue (const FbxTime &pTime=FBXSDK_TIME_INFINITE, bool pForceEval=false)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxPropertyTInt_EvaluateValue(JNIEnv * __env, jclass __jc,jlong lpjFbxPropertyTInt,jobject pTime,jboolean pForceEval)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxPropertyTInt *) lpjFbxPropertyTInt)->EvaluateValue(
  (const FbxTime  &) * _lcvt.j2c_object_ref<jobject,FbxTime >(pTime)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pForceEval)
  ));
  return ret;
}
  /// FbxAnimCurveNode *  CreateCurveNode (FbxAnimLayer *pAnimLayer)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxPropertyTInt_CreateCurveNode(JNIEnv * __env, jclass __jc,jlong lpjFbxPropertyTInt,jlong pAnimLayer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAnimCurveNode>(
  ((FbxPropertyTInt *) lpjFbxPropertyTInt)->CreateCurveNode(
  ( FbxAnimLayer  *)  _lcvt.j2c_object_pt<jlong, FbxAnimLayer>(pAnimLayer)
  ));
  return ret;
}
  /// FbxAnimCurveNode *  GetCurveNode (bool pCreate=false)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxPropertyTInt_GetCurveNode(JNIEnv * __env, jclass __jc,jlong lpjFbxPropertyTInt,jboolean pCreate)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAnimCurveNode>(
  ((FbxPropertyTInt *) lpjFbxPropertyTInt)->GetCurveNode(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pCreate)
  ));
  return ret;
}
  /// FbxAnimCurveNode *  GetCurveNode (FbxAnimStack *pAnimStack, bool pCreate=false)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxPropertyTInt_GetCurveNode1(JNIEnv * __env, jclass __jc,jlong lpjFbxPropertyTInt,jlong pAnimStack,jboolean pCreate)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAnimCurveNode>(
  ((FbxPropertyTInt *) lpjFbxPropertyTInt)->GetCurveNode(
  ( FbxAnimStack  *)  _lcvt.j2c_object_pt<jlong, FbxAnimStack>(pAnimStack)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pCreate)
  ));
  return ret;
}
  /// FbxAnimCurveNode *  GetCurveNode (FbxAnimLayer *pAnimLayer, bool pCreate=false)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxPropertyTInt_GetCurveNode2(JNIEnv * __env, jclass __jc,jlong lpjFbxPropertyTInt,jlong pAnimLayer,jboolean pCreate)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAnimCurveNode>(
  ((FbxPropertyTInt *) lpjFbxPropertyTInt)->GetCurveNode(
  ( FbxAnimLayer  *)  _lcvt.j2c_object_pt<jlong, FbxAnimLayer>(pAnimLayer)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pCreate)
  ));
  return ret;
}
  /// FbxAnimCurve *  GetCurve (FbxAnimLayer *pAnimLayer, bool pCreate=false)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxPropertyTInt_GetCurve(JNIEnv * __env, jclass __jc,jlong lpjFbxPropertyTInt,jlong pAnimLayer,jboolean pCreate)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAnimCurve>(
  ((FbxPropertyTInt *) lpjFbxPropertyTInt)->GetCurve(
  ( FbxAnimLayer  *)  _lcvt.j2c_object_pt<jlong, FbxAnimLayer>(pAnimLayer)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pCreate)
  ));
  return ret;
}
  /// FbxAnimCurve *  GetCurve (FbxAnimLayer *pAnimLayer, const char *pChannel, bool pCreate=false)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxPropertyTInt_GetCurve1(JNIEnv * __env, jclass __jc,jlong lpjFbxPropertyTInt,jlong pAnimLayer,jstring pChannel,jboolean pCreate)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAnimCurve>(
  ((FbxPropertyTInt *) lpjFbxPropertyTInt)->GetCurve(
  ( FbxAnimLayer  *)  _lcvt.j2c_object_pt<jlong, FbxAnimLayer>(pAnimLayer)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pChannel)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pCreate)
  ));
  return ret;
}
  /// FbxAnimCurve *  GetCurve (FbxAnimLayer *pAnimLayer, const char *pName, const char *pChannel, bool pCreate)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxPropertyTInt_GetCurve2(JNIEnv * __env, jclass __jc,jlong lpjFbxPropertyTInt,jlong pAnimLayer,jstring pName,jstring pChannel,jboolean pCreate)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAnimCurve>(
  ((FbxPropertyTInt *) lpjFbxPropertyTInt)->GetCurve(
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
