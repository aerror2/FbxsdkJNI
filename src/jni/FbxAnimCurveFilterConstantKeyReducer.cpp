//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxAnimCurveFilterConstantKeyReducer ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimCurveFilterConstantKeyReducer_meCreate(JNIEnv * __env, jclass __jc)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAnimCurveFilterConstantKeyReducer>(
  new FbxAnimCurveFilterConstantKeyReducer(
  ));
  return ret;
}
  /// virtual  ~FbxAnimCurveFilterConstantKeyReducer ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveFilterConstantKeyReducer_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterConstantKeyReducer)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxAnimCurveFilterConstantKeyReducer *) lpjFbxAnimCurveFilterConstantKeyReducer
  );
}
  /// virtual bool  Apply (FbxAnimCurveNode &pCurveNode, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterConstantKeyReducer_Apply(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterConstantKeyReducer,jobject pCurveNode,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterConstantKeyReducer *) lpjFbxAnimCurveFilterConstantKeyReducer)->Apply(
  ( FbxAnimCurveNode  &) * _lcvt.j2c_object_ref<jobject,FbxAnimCurveNode >(pCurveNode)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// virtual bool  Apply (FbxAnimCurve &pCurve, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterConstantKeyReducer_Apply1(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterConstantKeyReducer,jobject pCurve,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterConstantKeyReducer *) lpjFbxAnimCurveFilterConstantKeyReducer)->Apply(
  ( FbxAnimCurve  &) * _lcvt.j2c_object_ref<jobject,FbxAnimCurve >(pCurve)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// virtual void  Reset ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveFilterConstantKeyReducer_Reset(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterConstantKeyReducer)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveFilterConstantKeyReducer *) lpjFbxAnimCurveFilterConstantKeyReducer)->Reset(
  );
}
  /// double  GetDerivativeTolerance () const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxAnimCurveFilterConstantKeyReducer_GetDerivativeTolerance(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterConstantKeyReducer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxAnimCurveFilterConstantKeyReducer *) lpjFbxAnimCurveFilterConstantKeyReducer)->GetDerivativeTolerance(
  ));
  return ret;
}
  /// void  SetDerivativeTolerance (double pValue)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveFilterConstantKeyReducer_SetDerivativeTolerance(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterConstantKeyReducer,jdouble pValue)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveFilterConstantKeyReducer *) lpjFbxAnimCurveFilterConstantKeyReducer)->SetDerivativeTolerance(
  ( double  )  _lcvt.j2c<jdouble, double  >(pValue)
  );
}
  /// double  GetValueTolerance () const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxAnimCurveFilterConstantKeyReducer_GetValueTolerance(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterConstantKeyReducer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxAnimCurveFilterConstantKeyReducer *) lpjFbxAnimCurveFilterConstantKeyReducer)->GetValueTolerance(
  ));
  return ret;
}
  /// void  SetValueTolerance (double pValue)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveFilterConstantKeyReducer_SetValueTolerance(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterConstantKeyReducer,jdouble pValue)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveFilterConstantKeyReducer *) lpjFbxAnimCurveFilterConstantKeyReducer)->SetValueTolerance(
  ( double  )  _lcvt.j2c<jdouble, double  >(pValue)
  );
}
  /// bool  GetKeepFirstAndLastKeys () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterConstantKeyReducer_GetKeepFirstAndLastKeys(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterConstantKeyReducer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterConstantKeyReducer *) lpjFbxAnimCurveFilterConstantKeyReducer)->GetKeepFirstAndLastKeys(
  ));
  return ret;
}
  /// void  SetKeepFirstAndLastKeys (bool pKeepFirstAndLastKeys)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveFilterConstantKeyReducer_SetKeepFirstAndLastKeys(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterConstantKeyReducer,jboolean pKeepFirstAndLastKeys)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveFilterConstantKeyReducer *) lpjFbxAnimCurveFilterConstantKeyReducer)->SetKeepFirstAndLastKeys(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pKeepFirstAndLastKeys)
  );
}
  /// bool  GetKeepOneKey () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterConstantKeyReducer_GetKeepOneKey(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterConstantKeyReducer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterConstantKeyReducer *) lpjFbxAnimCurveFilterConstantKeyReducer)->GetKeepOneKey(
  ));
  return ret;
}
  /// void  SetKeepOneKey (bool pKeepOneKey)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveFilterConstantKeyReducer_SetKeepOneKey(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterConstantKeyReducer,jboolean pKeepOneKey)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveFilterConstantKeyReducer *) lpjFbxAnimCurveFilterConstantKeyReducer)->SetKeepOneKey(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pKeepOneKey)
  );
}
  /// void  SetKeepNotPureAutoKeys (bool pKeep)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveFilterConstantKeyReducer_SetKeepNotPureAutoKeys(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterConstantKeyReducer,jboolean pKeep)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveFilterConstantKeyReducer *) lpjFbxAnimCurveFilterConstantKeyReducer)->SetKeepNotPureAutoKeys(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pKeep)
  );
}
  /// virtual bool  Apply (FbxAnimStack *pAnimStack, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterConstantKeyReducer_Apply2(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterConstantKeyReducer,jlong pAnimStack,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterConstantKeyReducer *) lpjFbxAnimCurveFilterConstantKeyReducer)->Apply(
  ( FbxAnimStack  *)  _lcvt.j2c_object_pt<jlong, FbxAnimStack>(pAnimStack)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// virtual bool  Apply (FbxObject *pObj, FbxAnimStack *pAnimStack, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterConstantKeyReducer_Apply3(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterConstantKeyReducer,jlong pObj,jlong pAnimStack,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterConstantKeyReducer *) lpjFbxAnimCurveFilterConstantKeyReducer)->Apply(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pObj)
  ,
  ( FbxAnimStack  *)  _lcvt.j2c_object_pt<jlong, FbxAnimStack>(pAnimStack)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// virtual bool  Apply (FbxAnimCurve **pCurve, int pCount, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterConstantKeyReducer_Apply4(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterConstantKeyReducer,jlongArray pCurve,jint pCount,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterConstantKeyReducer *) lpjFbxAnimCurveFilterConstantKeyReducer)->Apply(
  ( FbxAnimCurve  **)  _lcvt.j2c_object_ppt<jlongArray,FbxAnimCurve>(pCurve)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pCount)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
