//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxAnimCurveFilterGimbleKiller ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimCurveFilterGimbleKiller_meCreate(JNIEnv * __env, jclass __jc)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAnimCurveFilterGimbleKiller>(
  new FbxAnimCurveFilterGimbleKiller(
  ));
  return ret;
}
  /// virtual  ~FbxAnimCurveFilterGimbleKiller ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveFilterGimbleKiller_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterGimbleKiller)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxAnimCurveFilterGimbleKiller *) lpjFbxAnimCurveFilterGimbleKiller
  );
}
  /// virtual bool  NeedApply (FbxAnimStack *pAnimStack, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterGimbleKiller_NeedApply(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterGimbleKiller,jlong pAnimStack,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterGimbleKiller *) lpjFbxAnimCurveFilterGimbleKiller)->NeedApply(
  ( FbxAnimStack  *)  _lcvt.j2c_object_pt<jlong, FbxAnimStack>(pAnimStack)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// virtual bool  NeedApply (FbxObject *pObj, FbxAnimStack *pAnimStack, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterGimbleKiller_NeedApply1(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterGimbleKiller,jlong pObj,jlong pAnimStack,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterGimbleKiller *) lpjFbxAnimCurveFilterGimbleKiller)->NeedApply(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pObj)
  ,
  ( FbxAnimStack  *)  _lcvt.j2c_object_pt<jlong, FbxAnimStack>(pAnimStack)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// virtual bool  NeedApply (FbxAnimCurveNode &pCurveNode, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterGimbleKiller_NeedApply2(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterGimbleKiller,jobject pCurveNode,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterGimbleKiller *) lpjFbxAnimCurveFilterGimbleKiller)->NeedApply(
  ( FbxAnimCurveNode  &) * _lcvt.j2c_object_ref<jobject,FbxAnimCurveNode >(pCurveNode)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// virtual bool  NeedApply (FbxAnimCurve **pCurve, int pCount, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterGimbleKiller_NeedApply3(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterGimbleKiller,jlongArray pCurve,jint pCount,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterGimbleKiller *) lpjFbxAnimCurveFilterGimbleKiller)->NeedApply(
  ( FbxAnimCurve  **)  _lcvt.j2c_object_ppt<jlongArray,FbxAnimCurve>(pCurve)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pCount)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// virtual bool  NeedApply (FbxAnimCurve &pCurve, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterGimbleKiller_NeedApply4(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterGimbleKiller,jobject pCurve,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterGimbleKiller *) lpjFbxAnimCurveFilterGimbleKiller)->NeedApply(
  ( FbxAnimCurve  &) * _lcvt.j2c_object_ref<jobject,FbxAnimCurve >(pCurve)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// virtual bool  Apply (FbxAnimStack *pAnimStack, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterGimbleKiller_Apply(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterGimbleKiller,jlong pAnimStack,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterGimbleKiller *) lpjFbxAnimCurveFilterGimbleKiller)->Apply(
  ( FbxAnimStack  *)  _lcvt.j2c_object_pt<jlong, FbxAnimStack>(pAnimStack)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// virtual bool  Apply (FbxObject *pObj, FbxAnimStack *pAnimStack, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterGimbleKiller_Apply1(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterGimbleKiller,jlong pObj,jlong pAnimStack,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterGimbleKiller *) lpjFbxAnimCurveFilterGimbleKiller)->Apply(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pObj)
  ,
  ( FbxAnimStack  *)  _lcvt.j2c_object_pt<jlong, FbxAnimStack>(pAnimStack)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// virtual bool  Apply (FbxAnimCurveNode &pCurveNode, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterGimbleKiller_Apply2(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterGimbleKiller,jobject pCurveNode,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterGimbleKiller *) lpjFbxAnimCurveFilterGimbleKiller)->Apply(
  ( FbxAnimCurveNode  &) * _lcvt.j2c_object_ref<jobject,FbxAnimCurveNode >(pCurveNode)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// virtual bool  Apply (FbxAnimCurve **pCurve, int pCount, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterGimbleKiller_Apply3(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterGimbleKiller,jlongArray pCurve,jint pCount,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterGimbleKiller *) lpjFbxAnimCurveFilterGimbleKiller)->Apply(
  ( FbxAnimCurve  **)  _lcvt.j2c_object_ppt<jlongArray,FbxAnimCurve>(pCurve)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pCount)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// virtual bool  Apply (FbxAnimCurve &pCurve, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterGimbleKiller_Apply4(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterGimbleKiller,jobject pCurve,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterGimbleKiller *) lpjFbxAnimCurveFilterGimbleKiller)->Apply(
  ( FbxAnimCurve  &) * _lcvt.j2c_object_ref<jobject,FbxAnimCurve >(pCurve)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// virtual void  Reset ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveFilterGimbleKiller_Reset(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterGimbleKiller)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveFilterGimbleKiller *) lpjFbxAnimCurveFilterGimbleKiller)->Reset(
  );
}
  /// bool  GetApplyKeySyncFilter () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterGimbleKiller_GetApplyKeySyncFilter(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterGimbleKiller)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterGimbleKiller *) lpjFbxAnimCurveFilterGimbleKiller)->GetApplyKeySyncFilter(
  ));
  return ret;
}
  /// void  SetApplyKeySyncFilter (bool pFlag)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveFilterGimbleKiller_SetApplyKeySyncFilter(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterGimbleKiller,jboolean pFlag)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveFilterGimbleKiller *) lpjFbxAnimCurveFilterGimbleKiller)->SetApplyKeySyncFilter(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pFlag)
  );
}
