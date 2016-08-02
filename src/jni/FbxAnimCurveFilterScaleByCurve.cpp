
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxAnimCurveFilterScaleByCurve ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimCurveFilterScaleByCurve_meCreate(JNIEnv * __env, jclass __jc)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAnimCurveFilterScaleByCurve>(
  new FbxAnimCurveFilterScaleByCurve(
  ));
  return ret;
}
  /// virtual  ~FbxAnimCurveFilterScaleByCurve ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveFilterScaleByCurve_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterScaleByCurve)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxAnimCurveFilterScaleByCurve *) lpjFbxAnimCurveFilterScaleByCurve
  );
}
  /// virtual bool  Apply (FbxAnimCurveNode &pCurveNode, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterScaleByCurve_Apply(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterScaleByCurve,jobject pCurveNode,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterScaleByCurve *) lpjFbxAnimCurveFilterScaleByCurve)->Apply(
  ( FbxAnimCurveNode  &) * _lcvt.j2c_object_ref<jobject,FbxAnimCurveNode >(pCurveNode)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// virtual bool  Apply (FbxAnimCurve &pCurve, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterScaleByCurve_Apply1(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterScaleByCurve,jobject pCurve,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterScaleByCurve *) lpjFbxAnimCurveFilterScaleByCurve)->Apply(
  ( FbxAnimCurve  &) * _lcvt.j2c_object_ref<jobject,FbxAnimCurve >(pCurve)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// virtual void  Reset ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveFilterScaleByCurve_Reset(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterScaleByCurve)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveFilterScaleByCurve *) lpjFbxAnimCurveFilterScaleByCurve)->Reset(
  );
}
  /// FbxAnimCurve *  GetScale () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimCurveFilterScaleByCurve_GetScale(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterScaleByCurve)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAnimCurve>(
  ((FbxAnimCurveFilterScaleByCurve *) lpjFbxAnimCurveFilterScaleByCurve)->GetScale(
  ));
  return ret;
}
  /// void  SetScale (FbxAnimCurve *pScale)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveFilterScaleByCurve_SetScale(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterScaleByCurve,jlong pScale)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveFilterScaleByCurve *) lpjFbxAnimCurveFilterScaleByCurve)->SetScale(
  ( FbxAnimCurve  *)  _lcvt.j2c_object_pt<jlong, FbxAnimCurve>(pScale)
  );
}
  /// virtual bool  Apply (FbxAnimStack *pAnimStack, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterScaleByCurve_Apply2(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterScaleByCurve,jlong pAnimStack,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterScaleByCurve *) lpjFbxAnimCurveFilterScaleByCurve)->Apply(
  ( FbxAnimStack  *)  _lcvt.j2c_object_pt<jlong, FbxAnimStack>(pAnimStack)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// virtual bool  Apply (FbxObject *pObj, FbxAnimStack *pAnimStack, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterScaleByCurve_Apply3(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterScaleByCurve,jlong pObj,jlong pAnimStack,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterScaleByCurve *) lpjFbxAnimCurveFilterScaleByCurve)->Apply(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pObj)
  ,
  ( FbxAnimStack  *)  _lcvt.j2c_object_pt<jlong, FbxAnimStack>(pAnimStack)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// virtual bool  Apply (FbxAnimCurve **pCurve, int pCount, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterScaleByCurve_Apply4(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterScaleByCurve,jlongArray pCurve,jint pCount,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterScaleByCurve *) lpjFbxAnimCurveFilterScaleByCurve)->Apply(
  ( FbxAnimCurve  **)  _lcvt.j2c_object_ppt<jlongArray,FbxAnimCurve>(pCurve)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pCount)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
