
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxProperty &  StaticInit (FbxObject *pObject, const char *pName, const FbxReference &pValue, bool pForceSet, FbxPropertyFlags::EFlags pFlags=FbxPropertyFlags::eNone)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxPropertyTFbxReference_StaticInit(JNIEnv * __env, jclass __jc,jlong lpjFbxPropertyTFbxReference,jlong pObject,jstring pName,jobject pValue,jboolean pForceSet,jint pFlags)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_ref<jlong, FbxProperty>(
  ((FbxPropertyTFbxReference *) lpjFbxPropertyTFbxReference)->StaticInit(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pObject)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ,
  (const FbxReference  &) * _lcvt.j2c_FbxReference_ref<jobject,FbxReference>(pValue)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pForceSet)
  ,
  ( FbxPropertyFlags::EFlags  )  _lcvt.j2c<jint,FbxPropertyFlags::EFlags >(pFlags)
  ));
  return ret;
}
  /// FbxProperty &  StaticInit (FbxObject *pObject, const char *pName, const FbxDataType &pDataType, const FbxReference &pValue, bool pForceSet, FbxPropertyFlags::EFlags pFlags=FbxPropertyFlags::eNone)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxPropertyTFbxReference_StaticInit1(JNIEnv * __env, jclass __jc,jlong lpjFbxPropertyTFbxReference,jlong pObject,jstring pName,jobject pDataType,jobject pValue,jboolean pForceSet,jint pFlags)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_ref<jlong, FbxProperty>(
  ((FbxPropertyTFbxReference *) lpjFbxPropertyTFbxReference)->StaticInit(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pObject)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ,
  (const FbxDataType  &) * _lcvt.j2c_object_ref<jobject,FbxDataType >(pDataType)
  ,
  (const FbxReference  &) * _lcvt.j2c_FbxReference_ref<jobject,FbxReference>(pValue)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pForceSet)
  ,
  ( FbxPropertyFlags::EFlags  )  _lcvt.j2c<jint,FbxPropertyFlags::EFlags >(pFlags)
  ));
    
  return ret;
}
  /// FbxProperty &  StaticInit (FbxProperty pCompound, const char *pName, const FbxDataType &pDataType, const FbxReference &pValue, bool pForceSet=true, FbxPropertyFlags::EFlags pFlags=FbxPropertyFlags::eNone)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxPropertyTFbxReference_StaticInit2(JNIEnv * __env, jclass __jc,jlong lpjFbxPropertyTFbxReference,jlong pCompound,jstring pName,jobject pDataType,jobject pValue,jboolean pForceSet,jint pFlags)
{
    /*
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_ref<jlong, FbxProperty>(
  ((FbxPropertyTFbxReference *) lpjFbxPropertyTFbxReference)->StaticInit(
  ( FbxProperty  )  _lcvt.j2c_object<jlong,FbxProperty >(pCompound)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ,
  (const FbxDataType  &) * _lcvt.j2c_object_ref<jobject,FbxDataType >(pDataType)
  ,
  (const FbxReference  &) * _lcvt.j2c_FbxReference_ref<jobject,FbxReference>(pValue)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pForceSet)
  ,
  ( FbxPropertyFlags::EFlags  )  _lcvt.j2c<jint,FbxPropertyFlags::EFlags >(pFlags)
  ));
  return ret;*/
    
    return 0;
}
  /// void  Set (const FbxReference &pValue)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxPropertyTFbxReference_Set(JNIEnv * __env, jclass __jc,jlong lpjFbxPropertyTFbxReference,jobject pValue)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxPropertyTFbxReference *) lpjFbxPropertyTFbxReference)->Set(
  (const FbxReference  &) * _lcvt.j2c_FbxReference_ref<jobject,FbxReference>(pValue)
  );
}
  /// FbxReference  Get () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxPropertyTFbxReference_Get(JNIEnv * __env, jclass __jc,jlong lpjFbxPropertyTFbxReference)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j<jlong,  FbxReference  >(
  ((FbxPropertyTFbxReference *) lpjFbxPropertyTFbxReference)->Get(
  ));
  return ret;
}
  /// FbxReference  EvaluateValue (const FbxTime &pTime=FBXSDK_TIME_INFINITE, bool pForceEval=false)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxPropertyTFbxReference_EvaluateValue(JNIEnv * __env, jclass __jc,jlong lpjFbxPropertyTFbxReference,jobject pTime,jboolean pForceEval)
{
    /*
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j<jlong,  FbxReference  >(
  ((FbxPropertyTFbxReference *) lpjFbxPropertyTFbxReference)->EvaluateValue(
  (const FbxTime  &) * _lcvt.j2c_object_ref<jobject,FbxTime >(pTime)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pForceEval)
  ));
  return ret;*/
    return 0;
}
  /// FbxAnimCurveNode *  CreateCurveNode (FbxAnimLayer *pAnimLayer)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxPropertyTFbxReference_CreateCurveNode(JNIEnv * __env, jclass __jc,jlong lpjFbxPropertyTFbxReference,jlong pAnimLayer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAnimCurveNode>(
  ((FbxPropertyTFbxReference *) lpjFbxPropertyTFbxReference)->CreateCurveNode(
  ( FbxAnimLayer  *)  _lcvt.j2c_object_pt<jlong, FbxAnimLayer>(pAnimLayer)
  ));
  return ret;
}
  /// FbxAnimCurveNode *  GetCurveNode (bool pCreate=false)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxPropertyTFbxReference_GetCurveNode(JNIEnv * __env, jclass __jc,jlong lpjFbxPropertyTFbxReference,jboolean pCreate)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAnimCurveNode>(
  ((FbxPropertyTFbxReference *) lpjFbxPropertyTFbxReference)->GetCurveNode(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pCreate)
  ));
  return ret;
}
  /// FbxAnimCurveNode *  GetCurveNode (FbxAnimStack *pAnimStack, bool pCreate=false)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxPropertyTFbxReference_GetCurveNode1(JNIEnv * __env, jclass __jc,jlong lpjFbxPropertyTFbxReference,jlong pAnimStack,jboolean pCreate)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAnimCurveNode>(
  ((FbxPropertyTFbxReference *) lpjFbxPropertyTFbxReference)->GetCurveNode(
  ( FbxAnimStack  *)  _lcvt.j2c_object_pt<jlong, FbxAnimStack>(pAnimStack)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pCreate)
  ));
  return ret;
}
  /// FbxAnimCurveNode *  GetCurveNode (FbxAnimLayer *pAnimLayer, bool pCreate=false)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxPropertyTFbxReference_GetCurveNode2(JNIEnv * __env, jclass __jc,jlong lpjFbxPropertyTFbxReference,jlong pAnimLayer,jboolean pCreate)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAnimCurveNode>(
  ((FbxPropertyTFbxReference *) lpjFbxPropertyTFbxReference)->GetCurveNode(
  ( FbxAnimLayer  *)  _lcvt.j2c_object_pt<jlong, FbxAnimLayer>(pAnimLayer)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pCreate)
  ));
  return ret;
}
  /// FbxAnimCurve *  GetCurve (FbxAnimLayer *pAnimLayer, bool pCreate=false)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxPropertyTFbxReference_GetCurve(JNIEnv * __env, jclass __jc,jlong lpjFbxPropertyTFbxReference,jlong pAnimLayer,jboolean pCreate)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAnimCurve>(
  ((FbxPropertyTFbxReference *) lpjFbxPropertyTFbxReference)->GetCurve(
  ( FbxAnimLayer  *)  _lcvt.j2c_object_pt<jlong, FbxAnimLayer>(pAnimLayer)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pCreate)
  ));
  return ret;
}
  /// FbxAnimCurve *  GetCurve (FbxAnimLayer *pAnimLayer, const char *pChannel, bool pCreate=false)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxPropertyTFbxReference_GetCurve1(JNIEnv * __env, jclass __jc,jlong lpjFbxPropertyTFbxReference,jlong pAnimLayer,jstring pChannel,jboolean pCreate)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAnimCurve>(
  ((FbxPropertyTFbxReference *) lpjFbxPropertyTFbxReference)->GetCurve(
  ( FbxAnimLayer  *)  _lcvt.j2c_object_pt<jlong, FbxAnimLayer>(pAnimLayer)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pChannel)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pCreate)
  ));
  return ret;
}
  /// FbxAnimCurve *  GetCurve (FbxAnimLayer *pAnimLayer, const char *pName, const char *pChannel, bool pCreate)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxPropertyTFbxReference_GetCurve2(JNIEnv * __env, jclass __jc,jlong lpjFbxPropertyTFbxReference,jlong pAnimLayer,jstring pName,jstring pChannel,jboolean pCreate)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAnimCurve>(
  ((FbxPropertyTFbxReference *) lpjFbxPropertyTFbxReference)->GetCurve(
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
