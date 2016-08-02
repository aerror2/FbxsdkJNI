//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxAnimCurveFilterScale ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimCurveFilterScale_meCreate(JNIEnv * __env, jclass __jc)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAnimCurveFilterScale>(
  new FbxAnimCurveFilterScale(
  ));
  return ret;
}
  /// virtual  ~FbxAnimCurveFilterScale ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveFilterScale_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterScale)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxAnimCurveFilterScale *) lpjFbxAnimCurveFilterScale
  );
}
  /// virtual bool  Apply (FbxAnimCurveNode &pCurveNode, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterScale_Apply(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterScale,jobject pCurveNode,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterScale *) lpjFbxAnimCurveFilterScale)->Apply(
  ( FbxAnimCurveNode  &) * _lcvt.j2c_object_ref<jobject,FbxAnimCurveNode >(pCurveNode)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// virtual bool  Apply (FbxAnimCurve &pCurve, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterScale_Apply1(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterScale,jobject pCurve,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterScale *) lpjFbxAnimCurveFilterScale)->Apply(
  ( FbxAnimCurve  &) * _lcvt.j2c_object_ref<jobject,FbxAnimCurve >(pCurve)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// virtual void  Reset ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveFilterScale_Reset(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterScale)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveFilterScale *) lpjFbxAnimCurveFilterScale)->Reset(
  );
}
  /// double  GetScale () const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxAnimCurveFilterScale_GetScale(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterScale)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxAnimCurveFilterScale *) lpjFbxAnimCurveFilterScale)->GetScale(
  ));
  return ret;
}
  /// void  SetScale (double pScale)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveFilterScale_SetScale(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterScale,jdouble pScale)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveFilterScale *) lpjFbxAnimCurveFilterScale)->SetScale(
  ( double  )  _lcvt.j2c<jdouble, double  >(pScale)
  );
}
  /// virtual bool  Apply (FbxAnimStack *pAnimStack, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterScale_Apply2(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterScale,jlong pAnimStack,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterScale *) lpjFbxAnimCurveFilterScale)->Apply(
  ( FbxAnimStack  *)  _lcvt.j2c_object_pt<jlong, FbxAnimStack>(pAnimStack)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// virtual bool  Apply (FbxObject *pObj, FbxAnimStack *pAnimStack, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterScale_Apply3(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterScale,jlong pObj,jlong pAnimStack,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterScale *) lpjFbxAnimCurveFilterScale)->Apply(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pObj)
  ,
  ( FbxAnimStack  *)  _lcvt.j2c_object_pt<jlong, FbxAnimStack>(pAnimStack)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// virtual bool  Apply (FbxAnimCurve **pCurve, int pCount, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterScale_Apply4(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterScale,jlongArray pCurve,jint pCount,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterScale *) lpjFbxAnimCurveFilterScale)->Apply(
  ( FbxAnimCurve  **)  _lcvt.j2c_object_ppt<jlongArray,FbxAnimCurve>(pCurve)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pCount)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
