//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// void  AddCurve (FbxNurbsCurve *pCurve)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxBoundary_AddCurve(JNIEnv * __env, jclass __jc,jlong lpjFbxBoundary,jlong pCurve)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxBoundary *) lpjFbxBoundary)->AddCurve(
  ( FbxNurbsCurve  *)  _lcvt.j2c_object_pt<jlong, FbxNurbsCurve>(pCurve)
  );
}
  /// int  GetCurveCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxBoundary_GetCurveCount(JNIEnv * __env, jclass __jc,jlong lpjFbxBoundary)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxBoundary *) lpjFbxBoundary)->GetCurveCount(
  ));
  return ret;
}
  /// FbxNurbsCurve *  GetCurve (int pIndex)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxBoundary_GetCurve(JNIEnv * __env, jclass __jc,jlong lpjFbxBoundary,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxNurbsCurve>(
  ((FbxBoundary *) lpjFbxBoundary)->GetCurve(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// const FbxNurbsCurve *  GetCurve (int pIndex) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxBoundary_GetCurve1(JNIEnv * __env, jclass __jc,jlong lpjFbxBoundary,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxNurbsCurve>(
  ((FbxBoundary *) lpjFbxBoundary)->GetCurve(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// virtual FbxNodeAttribute::EType  GetAttributeType () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxBoundary_GetAttributeType(JNIEnv * __env, jclass __jc,jlong lpjFbxBoundary)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxNodeAttribute::EType  >(
  ((FbxBoundary *) lpjFbxBoundary)->GetAttributeType(
  ));
  return ret;
}
  /// bool  IsPointInControlHull (const FbxVector4 &pPoint)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxBoundary_IsPointInControlHull(JNIEnv * __env, jclass __jc,jlong lpjFbxBoundary,jobject pPoint)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxBoundary *) lpjFbxBoundary)->IsPointInControlHull(
  (const FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pPoint)
  ));
  return ret;
}
  /// FbxVector4  ComputePointInBoundary ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxBoundary_ComputePointInBoundary(JNIEnv * __env, jclass __jc,jlong lpjFbxBoundary)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxVector4>(
  ((FbxBoundary *) lpjFbxBoundary)->ComputePointInBoundary(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  OuterFlag
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxBoundary_mepSetOuterFlag(JNIEnv * __env, jclass __jc,jlong lpjFbxBoundary,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxBoundary *) lpjFbxBoundary)->OuterFlag.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  OuterFlag
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxBoundary_mepGetOuterFlag(JNIEnv * __env, jclass __jc,jlong lpjFbxBoundary)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxBoundary *) lpjFbxBoundary)->OuterFlag.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  OuterFlag
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxBoundary_mptGetOuterFlag(JNIEnv * __env, jclass __jc,jlong lpjFbxBoundary)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxBoundary *) lpjFbxBoundary)->OuterFlag
  ));
  return ret;
}
  /// FbxBoundary * Create( FbxGeometry* lpFbxGeometry,  const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxBoundary_Create(JNIEnv * __env, jclass __jc,jlong lpFbxGeometry,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxBoundary>(
  FbxBoundary::Create(
  ( FbxGeometry  *)  _lcvt.j2c_object_pt<jlong, FbxGeometry>(lpFbxGeometry)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
