//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxAnimCurveFilterUnroll ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimCurveFilterUnroll_meCreate(JNIEnv * __env, jclass __jc)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAnimCurveFilterUnroll>(
  new FbxAnimCurveFilterUnroll(
  ));
  return ret;
}
  /// virtual  ~FbxAnimCurveFilterUnroll ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveFilterUnroll_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterUnroll)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxAnimCurveFilterUnroll *) lpjFbxAnimCurveFilterUnroll
  );
}
  /// virtual bool  NeedApply (FbxAnimStack *pAnimStack, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterUnroll_NeedApply(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterUnroll,jlong pAnimStack,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterUnroll *) lpjFbxAnimCurveFilterUnroll)->NeedApply(
  ( FbxAnimStack  *)  _lcvt.j2c_object_pt<jlong, FbxAnimStack>(pAnimStack)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// virtual bool  NeedApply (FbxObject *pObj, FbxAnimStack *pAnimStack, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterUnroll_NeedApply1(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterUnroll,jlong pObj,jlong pAnimStack,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterUnroll *) lpjFbxAnimCurveFilterUnroll)->NeedApply(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pObj)
  ,
  ( FbxAnimStack  *)  _lcvt.j2c_object_pt<jlong, FbxAnimStack>(pAnimStack)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// virtual bool  NeedApply (FbxAnimCurveNode &pCurveNode, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterUnroll_NeedApply2(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterUnroll,jobject pCurveNode,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterUnroll *) lpjFbxAnimCurveFilterUnroll)->NeedApply(
  ( FbxAnimCurveNode  &) * _lcvt.j2c_object_ref<jobject,FbxAnimCurveNode >(pCurveNode)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// virtual bool  NeedApply (FbxAnimCurve **pCurve, int pCount, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterUnroll_NeedApply3(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterUnroll,jlongArray pCurve,jint pCount,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterUnroll *) lpjFbxAnimCurveFilterUnroll)->NeedApply(
  ( FbxAnimCurve  **)  _lcvt.j2c_object_ppt<jlongArray,FbxAnimCurve>(pCurve)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pCount)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// virtual bool  NeedApply (FbxAnimCurve &pCurve, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterUnroll_NeedApply4(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterUnroll,jobject pCurve,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterUnroll *) lpjFbxAnimCurveFilterUnroll)->NeedApply(
  ( FbxAnimCurve  &) * _lcvt.j2c_object_ref<jobject,FbxAnimCurve >(pCurve)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// virtual bool  Apply (FbxAnimStack *pAnimStack, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterUnroll_Apply(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterUnroll,jlong pAnimStack,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterUnroll *) lpjFbxAnimCurveFilterUnroll)->Apply(
  ( FbxAnimStack  *)  _lcvt.j2c_object_pt<jlong, FbxAnimStack>(pAnimStack)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// virtual bool  Apply (FbxObject *pObj, FbxAnimStack *pAnimStack, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterUnroll_Apply1(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterUnroll,jlong pObj,jlong pAnimStack,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterUnroll *) lpjFbxAnimCurveFilterUnroll)->Apply(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pObj)
  ,
  ( FbxAnimStack  *)  _lcvt.j2c_object_pt<jlong, FbxAnimStack>(pAnimStack)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// virtual bool  Apply (FbxAnimCurveNode &pCurveNode, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterUnroll_Apply2(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterUnroll,jobject pCurveNode,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterUnroll *) lpjFbxAnimCurveFilterUnroll)->Apply(
  ( FbxAnimCurveNode  &) * _lcvt.j2c_object_ref<jobject,FbxAnimCurveNode >(pCurveNode)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// virtual bool  Apply (FbxAnimCurve **pCurve, int pCount, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterUnroll_Apply3(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterUnroll,jlongArray pCurve,jint pCount,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterUnroll *) lpjFbxAnimCurveFilterUnroll)->Apply(
  ( FbxAnimCurve  **)  _lcvt.j2c_object_ppt<jlongArray,FbxAnimCurve>(pCurve)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pCount)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// virtual bool  Apply (FbxAnimCurve &pCurve, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterUnroll_Apply4(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterUnroll,jobject pCurve,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterUnroll *) lpjFbxAnimCurveFilterUnroll)->Apply(
  ( FbxAnimCurve  &) * _lcvt.j2c_object_ref<jobject,FbxAnimCurve >(pCurve)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// virtual void  Reset ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveFilterUnroll_Reset(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterUnroll)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveFilterUnroll *) lpjFbxAnimCurveFilterUnroll)->Reset(
  );
}
  /// double  GetQualityTolerance () const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxAnimCurveFilterUnroll_GetQualityTolerance(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterUnroll)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxAnimCurveFilterUnroll *) lpjFbxAnimCurveFilterUnroll)->GetQualityTolerance(
  ));
  return ret;
}
  /// void  SetQualityTolerance (double pQualityTolerance)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveFilterUnroll_SetQualityTolerance(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterUnroll,jdouble pQualityTolerance)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveFilterUnroll *) lpjFbxAnimCurveFilterUnroll)->SetQualityTolerance(
  ( double  )  _lcvt.j2c<jdouble, double  >(pQualityTolerance)
  );
}
  /// bool  GetTestForPath () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterUnroll_GetTestForPath(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterUnroll)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterUnroll *) lpjFbxAnimCurveFilterUnroll)->GetTestForPath(
  ));
  return ret;
}
  /// void  SetTestForPath (bool pTestForPath)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveFilterUnroll_SetTestForPath(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterUnroll,jboolean pTestForPath)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveFilterUnroll *) lpjFbxAnimCurveFilterUnroll)->SetTestForPath(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pTestForPath)
  );
}
  /// bool  GetForceAutoTangents () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterUnroll_GetForceAutoTangents(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterUnroll)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterUnroll *) lpjFbxAnimCurveFilterUnroll)->GetForceAutoTangents(
  ));
  return ret;
}
  /// void  SetForceAutoTangents (bool pForceAutoTangents)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveFilterUnroll_SetForceAutoTangents(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterUnroll,jboolean pForceAutoTangents)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveFilterUnroll *) lpjFbxAnimCurveFilterUnroll)->SetForceAutoTangents(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pForceAutoTangents)
  );
}
