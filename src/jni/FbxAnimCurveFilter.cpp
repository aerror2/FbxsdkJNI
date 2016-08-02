//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxAnimCurveFilter ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimCurveFilter_meCreate(JNIEnv * __env, jclass __jc)
{
  return 0;
}
  /// virtual  ~FbxAnimCurveFilter ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveFilter_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilter)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxAnimCurveFilter *) lpjFbxAnimCurveFilter
  );
}
  /// FbxTime &  GetStartTime ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimCurveFilter_GetStartTime(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_ref<jlong, FbxTime>(
  ((FbxAnimCurveFilter *) lpjFbxAnimCurveFilter)->GetStartTime(
  ));
  return ret;
}
  /// void  SetStartTime (FbxTime &pTime)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveFilter_SetStartTime(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilter,jobject pTime)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveFilter *) lpjFbxAnimCurveFilter)->SetStartTime(
  ( FbxTime  &) * _lcvt.j2c_object_ref<jobject,FbxTime >(pTime)
  );
}
  /// FbxTime &  GetStopTime ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimCurveFilter_GetStopTime(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_ref<jlong, FbxTime>(
  ((FbxAnimCurveFilter *) lpjFbxAnimCurveFilter)->GetStopTime(
  ));
  return ret;
}
  /// void  SetStopTime (FbxTime &pTime)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveFilter_SetStopTime(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilter,jobject pTime)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveFilter *) lpjFbxAnimCurveFilter)->SetStopTime(
  ( FbxTime  &) * _lcvt.j2c_object_ref<jobject,FbxTime >(pTime)
  );
}
  /// int  GetStartKey (FbxAnimCurve &pCurve) const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxAnimCurveFilter_GetStartKey(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilter,jobject pCurve)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxAnimCurveFilter *) lpjFbxAnimCurveFilter)->GetStartKey(
  ( FbxAnimCurve  &) * _lcvt.j2c_object_ref<jobject,FbxAnimCurve >(pCurve)
  ));
  return ret;
}
  /// int  GetStopKey (FbxAnimCurve &pCurve) const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxAnimCurveFilter_GetStopKey(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilter,jobject pCurve)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxAnimCurveFilter *) lpjFbxAnimCurveFilter)->GetStopKey(
  ( FbxAnimCurve  &) * _lcvt.j2c_object_ref<jobject,FbxAnimCurve >(pCurve)
  ));
  return ret;
}
  /// virtual bool  NeedApply (FbxAnimStack *pAnimStack, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilter_NeedApply(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilter,jlong pAnimStack,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilter *) lpjFbxAnimCurveFilter)->NeedApply(
  ( FbxAnimStack  *)  _lcvt.j2c_object_pt<jlong, FbxAnimStack>(pAnimStack)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// virtual bool  NeedApply (FbxObject *pObj, FbxAnimStack *pAnimStack, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilter_NeedApply1(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilter,jlong pObj,jlong pAnimStack,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilter *) lpjFbxAnimCurveFilter)->NeedApply(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pObj)
  ,
  ( FbxAnimStack  *)  _lcvt.j2c_object_pt<jlong, FbxAnimStack>(pAnimStack)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// virtual bool  NeedApply (FbxAnimCurveNode &pCurveNode, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilter_NeedApply2(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilter,jobject pCurveNode,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilter *) lpjFbxAnimCurveFilter)->NeedApply(
  ( FbxAnimCurveNode  &) * _lcvt.j2c_object_ref<jobject,FbxAnimCurveNode >(pCurveNode)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// virtual bool  NeedApply (FbxAnimCurve **pCurve, int pCount, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilter_NeedApply3(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilter,jlongArray pCurve,jint pCount,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilter *) lpjFbxAnimCurveFilter)->NeedApply(
  ( FbxAnimCurve  **)  _lcvt.j2c_object_ppt<jlongArray,FbxAnimCurve>(pCurve)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pCount)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// virtual bool  NeedApply (FbxAnimCurve &pCurve, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilter_NeedApply4(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilter,jobject pCurve,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilter *) lpjFbxAnimCurveFilter)->NeedApply(
  ( FbxAnimCurve  &) * _lcvt.j2c_object_ref<jobject,FbxAnimCurve >(pCurve)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// virtual bool  Apply (FbxAnimStack *pAnimStack, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilter_Apply(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilter,jlong pAnimStack,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilter *) lpjFbxAnimCurveFilter)->Apply(
  ( FbxAnimStack  *)  _lcvt.j2c_object_pt<jlong, FbxAnimStack>(pAnimStack)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// virtual bool  Apply (FbxObject *pObj, FbxAnimStack *pAnimStack, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilter_Apply1(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilter,jlong pObj,jlong pAnimStack,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilter *) lpjFbxAnimCurveFilter)->Apply(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pObj)
  ,
  ( FbxAnimStack  *)  _lcvt.j2c_object_pt<jlong, FbxAnimStack>(pAnimStack)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// virtual bool  Apply (FbxAnimCurveNode &pCurveNode, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilter_Apply2(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilter,jobject pCurveNode,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilter *) lpjFbxAnimCurveFilter)->Apply(
  ( FbxAnimCurveNode  &) * _lcvt.j2c_object_ref<jobject,FbxAnimCurveNode >(pCurveNode)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// virtual bool  Apply (FbxAnimCurve **pCurve, int pCount, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilter_Apply3(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilter,jlongArray pCurve,jint pCount,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilter *) lpjFbxAnimCurveFilter)->Apply(
  ( FbxAnimCurve  **)  _lcvt.j2c_object_ppt<jlongArray,FbxAnimCurve>(pCurve)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pCount)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// virtual bool  Apply (FbxAnimCurve &pCurve, FbxStatus *pStatus=NULL)=0
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilter_Apply4(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilter,jobject pCurve,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilter *) lpjFbxAnimCurveFilter)->Apply(
  ( FbxAnimCurve  &) * _lcvt.j2c_object_ref<jobject,FbxAnimCurve >(pCurve)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// virtual void  Reset ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveFilter_Reset(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilter)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveFilter *) lpjFbxAnimCurveFilter)->Reset(
  );
}
