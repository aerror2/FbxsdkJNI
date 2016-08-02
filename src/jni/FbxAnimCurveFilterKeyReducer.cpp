
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxAnimCurveFilterKeyReducer ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimCurveFilterKeyReducer_meCreate(JNIEnv * __env, jclass __jc)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAnimCurveFilterKeyReducer>(
  new FbxAnimCurveFilterKeyReducer(
  ));
  return ret;
}
  /// virtual  ~FbxAnimCurveFilterKeyReducer ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveFilterKeyReducer_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterKeyReducer)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxAnimCurveFilterKeyReducer *) lpjFbxAnimCurveFilterKeyReducer
  );
}
  /// virtual bool  Apply (FbxAnimCurve **pCurve, int pCount, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterKeyReducer_Apply(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterKeyReducer,jlongArray pCurve,jint pCount,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterKeyReducer *) lpjFbxAnimCurveFilterKeyReducer)->Apply(
  ( FbxAnimCurve  **)  _lcvt.j2c_object_ppt<jlongArray,FbxAnimCurve>(pCurve)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pCount)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// virtual bool  Apply (FbxAnimCurve &pCurve, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterKeyReducer_Apply1(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterKeyReducer,jobject pCurve,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterKeyReducer *) lpjFbxAnimCurveFilterKeyReducer)->Apply(
  ( FbxAnimCurve  &) * _lcvt.j2c_object_ref<jobject,FbxAnimCurve >(pCurve)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// virtual void  Reset ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveFilterKeyReducer_Reset(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterKeyReducer)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveFilterKeyReducer *) lpjFbxAnimCurveFilterKeyReducer)->Reset(
  );
}
  /// double  GetPrecision () const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxAnimCurveFilterKeyReducer_GetPrecision(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterKeyReducer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxAnimCurveFilterKeyReducer *) lpjFbxAnimCurveFilterKeyReducer)->GetPrecision(
  ));
  return ret;
}
  /// void  SetPrecision (double pPrecision)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveFilterKeyReducer_SetPrecision(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterKeyReducer,jdouble pPrecision)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveFilterKeyReducer *) lpjFbxAnimCurveFilterKeyReducer)->SetPrecision(
  ( double  )  _lcvt.j2c<jdouble, double  >(pPrecision)
  );
}
  /// bool  GetKeySync () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterKeyReducer_GetKeySync(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterKeyReducer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterKeyReducer *) lpjFbxAnimCurveFilterKeyReducer)->GetKeySync(
  ));
  return ret;
}
  /// void  SetKeySync (bool pKeySync)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveFilterKeyReducer_SetKeySync(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterKeyReducer,jboolean pKeySync)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveFilterKeyReducer *) lpjFbxAnimCurveFilterKeyReducer)->SetKeySync(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pKeySync)
  );
}
  /// virtual bool  Apply (FbxAnimStack *pAnimStack, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterKeyReducer_Apply2(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterKeyReducer,jlong pAnimStack,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterKeyReducer *) lpjFbxAnimCurveFilterKeyReducer)->Apply(
  ( FbxAnimStack  *)  _lcvt.j2c_object_pt<jlong, FbxAnimStack>(pAnimStack)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// virtual bool  Apply (FbxObject *pObj, FbxAnimStack *pAnimStack, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterKeyReducer_Apply3(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterKeyReducer,jlong pObj,jlong pAnimStack,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterKeyReducer *) lpjFbxAnimCurveFilterKeyReducer)->Apply(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pObj)
  ,
  ( FbxAnimStack  *)  _lcvt.j2c_object_pt<jlong, FbxAnimStack>(pAnimStack)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// virtual bool  Apply (FbxAnimCurveNode &pCurveNode, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterKeyReducer_Apply4(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterKeyReducer,jobject pCurveNode,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterKeyReducer *) lpjFbxAnimCurveFilterKeyReducer)->Apply(
  ( FbxAnimCurveNode  &) * _lcvt.j2c_object_ref<jobject,FbxAnimCurveNode >(pCurveNode)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
