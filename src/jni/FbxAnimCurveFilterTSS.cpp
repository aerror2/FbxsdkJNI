
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxAnimCurveFilterTSS ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimCurveFilterTSS_meCreate(JNIEnv * __env, jclass __jc)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAnimCurveFilterTSS>(
  new FbxAnimCurveFilterTSS(
  ));
  return ret;
}
  /// virtual  ~FbxAnimCurveFilterTSS ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveFilterTSS_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterTSS)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxAnimCurveFilterTSS *) lpjFbxAnimCurveFilterTSS
  );
}
  /// virtual bool  Apply (FbxAnimCurve &pCurve, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterTSS_Apply(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterTSS,jobject pCurve,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterTSS *) lpjFbxAnimCurveFilterTSS)->Apply(
  ( FbxAnimCurve  &) * _lcvt.j2c_object_ref<jobject,FbxAnimCurve >(pCurve)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// virtual void  Reset ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveFilterTSS_Reset(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterTSS)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveFilterTSS *) lpjFbxAnimCurveFilterTSS)->Reset(
  );
}
  /// FbxTime  GetShift () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimCurveFilterTSS_GetShift(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterTSS)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxTime>(
  ((FbxAnimCurveFilterTSS *) lpjFbxAnimCurveFilterTSS)->GetShift(
  ));
  return ret;
}
  /// void  SetShift (FbxTime &pShift)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveFilterTSS_SetShift(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterTSS,jobject pShift)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveFilterTSS *) lpjFbxAnimCurveFilterTSS)->SetShift(
  ( FbxTime  &) * _lcvt.j2c_object_ref<jobject,FbxTime >(pShift)
  );
}
  /// double  GetScale () const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxAnimCurveFilterTSS_GetScale(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterTSS)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxAnimCurveFilterTSS *) lpjFbxAnimCurveFilterTSS)->GetScale(
  ));
  return ret;
}
  /// void  SetScale (double pScale)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveFilterTSS_SetScale(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterTSS,jdouble pScale)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveFilterTSS *) lpjFbxAnimCurveFilterTSS)->SetScale(
  ( double  )  _lcvt.j2c<jdouble, double  >(pScale)
  );
}
  /// virtual bool  Apply (FbxAnimStack *pAnimStack, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterTSS_Apply1(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterTSS,jlong pAnimStack,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterTSS *) lpjFbxAnimCurveFilterTSS)->Apply(
  ( FbxAnimStack  *)  _lcvt.j2c_object_pt<jlong, FbxAnimStack>(pAnimStack)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// virtual bool  Apply (FbxObject *pObj, FbxAnimStack *pAnimStack, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterTSS_Apply2(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterTSS,jlong pObj,jlong pAnimStack,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterTSS *) lpjFbxAnimCurveFilterTSS)->Apply(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pObj)
  ,
  ( FbxAnimStack  *)  _lcvt.j2c_object_pt<jlong, FbxAnimStack>(pAnimStack)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// virtual bool  Apply (FbxAnimCurveNode &pCurveNode, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterTSS_Apply3(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterTSS,jobject pCurveNode,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterTSS *) lpjFbxAnimCurveFilterTSS)->Apply(
  ( FbxAnimCurveNode  &) * _lcvt.j2c_object_ref<jobject,FbxAnimCurveNode >(pCurveNode)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// virtual bool  Apply (FbxAnimCurve **pCurve, int pCount, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterTSS_Apply4(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterTSS,jlongArray pCurve,jint pCount,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterTSS *) lpjFbxAnimCurveFilterTSS)->Apply(
  ( FbxAnimCurve  **)  _lcvt.j2c_object_ppt<jlongArray,FbxAnimCurve>(pCurve)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pCount)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
