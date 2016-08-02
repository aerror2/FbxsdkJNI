
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxAnimCurveFilterMatrixConverter ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimCurveFilterMatrixConverter_meCreate(JNIEnv * __env, jclass __jc)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAnimCurveFilterMatrixConverter>(
  new FbxAnimCurveFilterMatrixConverter(
  ));
  return ret;
}
  /// virtual  ~FbxAnimCurveFilterMatrixConverter ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveFilterMatrixConverter_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterMatrixConverter)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxAnimCurveFilterMatrixConverter *) lpjFbxAnimCurveFilterMatrixConverter
  );
}
  /// virtual bool  NeedApply (FbxAnimStack *pAnimStack, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterMatrixConverter_NeedApply(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterMatrixConverter,jlong pAnimStack,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterMatrixConverter *) lpjFbxAnimCurveFilterMatrixConverter)->NeedApply(
  ( FbxAnimStack  *)  _lcvt.j2c_object_pt<jlong, FbxAnimStack>(pAnimStack)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// virtual bool  NeedApply (FbxObject *pObj, FbxAnimStack *pAnimStack, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterMatrixConverter_NeedApply1(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterMatrixConverter,jlong pObj,jlong pAnimStack,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterMatrixConverter *) lpjFbxAnimCurveFilterMatrixConverter)->NeedApply(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pObj)
  ,
  ( FbxAnimStack  *)  _lcvt.j2c_object_pt<jlong, FbxAnimStack>(pAnimStack)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// virtual bool  NeedApply (FbxAnimCurveNode *pCurveNode[3], FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterMatrixConverter_NeedApply2(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterMatrixConverter,jlongArray pCurveNode,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterMatrixConverter *) lpjFbxAnimCurveFilterMatrixConverter)->NeedApply(
  ( FbxAnimCurveNode  **)  _lcvt.j2c_object_ppt<jlongArray,FbxAnimCurveNode>(pCurveNode)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// virtual bool  NeedApply (FbxAnimCurve &pCurve, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterMatrixConverter_NeedApply3(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterMatrixConverter,jobject pCurve,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterMatrixConverter *) lpjFbxAnimCurveFilterMatrixConverter)->NeedApply(
  ( FbxAnimCurve  &) * _lcvt.j2c_object_ref<jobject,FbxAnimCurve >(pCurve)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// virtual bool  Apply (FbxAnimStack *pAnimStack, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterMatrixConverter_Apply(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterMatrixConverter,jlong pAnimStack,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterMatrixConverter *) lpjFbxAnimCurveFilterMatrixConverter)->Apply(
  ( FbxAnimStack  *)  _lcvt.j2c_object_pt<jlong, FbxAnimStack>(pAnimStack)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// virtual bool  Apply (FbxObject *pObj, FbxAnimStack *pAnimStack, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterMatrixConverter_Apply1(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterMatrixConverter,jlong pObj,jlong pAnimStack,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterMatrixConverter *) lpjFbxAnimCurveFilterMatrixConverter)->Apply(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pObj)
  ,
  ( FbxAnimStack  *)  _lcvt.j2c_object_pt<jlong, FbxAnimStack>(pAnimStack)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// virtual bool  Apply (FbxAnimCurveNode *pCurveNode[3], FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterMatrixConverter_Apply2(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterMatrixConverter,jlongArray pCurveNode,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterMatrixConverter *) lpjFbxAnimCurveFilterMatrixConverter)->Apply(
  ( FbxAnimCurveNode  **)  _lcvt.j2c_object_ppt<jlongArray,FbxAnimCurveNode>(pCurveNode)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// virtual bool  Apply (FbxAnimCurve **pCurve, int pCount, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterMatrixConverter_Apply3(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterMatrixConverter,jlongArray pCurve,jint pCount,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterMatrixConverter *) lpjFbxAnimCurveFilterMatrixConverter)->Apply(
  ( FbxAnimCurve  **)  _lcvt.j2c_object_ppt<jlongArray,FbxAnimCurve>(pCurve)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pCount)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// bool  Apply (FbxAnimCurve **pCurve, double *pVals, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterMatrixConverter_Apply4(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterMatrixConverter,jlongArray pCurve,jdoubleArray pVals,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterMatrixConverter *) lpjFbxAnimCurveFilterMatrixConverter)->Apply(
  ( FbxAnimCurve  **)  _lcvt.j2c_object_ppt<jlongArray,FbxAnimCurve>(pCurve)
  ,
  ( double  *)  _lcvt.j2c_double_pt<jdoubleArray,double>(pVals)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// virtual bool  Apply (FbxAnimCurve &pCurve, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterMatrixConverter_Apply5(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterMatrixConverter,jobject pCurve,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterMatrixConverter *) lpjFbxAnimCurveFilterMatrixConverter)->Apply(
  ( FbxAnimCurve  &) * _lcvt.j2c_object_ref<jobject,FbxAnimCurve >(pCurve)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// virtual void  Reset ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveFilterMatrixConverter_Reset(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterMatrixConverter)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveFilterMatrixConverter *) lpjFbxAnimCurveFilterMatrixConverter)->Reset(
  );
}
  /// void  GetSourceMatrix (EMatrixIndex pIndex, FbxAMatrix &pMatrix) const
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveFilterMatrixConverter_GetSourceMatrix(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterMatrixConverter,jint pIndex,jobject pMatrix)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveFilterMatrixConverter *) lpjFbxAnimCurveFilterMatrixConverter)->GetSourceMatrix(
  ( FbxAnimCurveFilterMatrixConverter::EMatrixIndex  )  _lcvt.j2c<jint,FbxAnimCurveFilterMatrixConverter::EMatrixIndex >(pIndex)
  ,
  ( FbxAMatrix  &) * _lcvt.j2c_object_ref<jobject,FbxAMatrix >(pMatrix)
  );
}
  /// void  SetSourceMatrix (EMatrixIndex pIndex, FbxAMatrix &pMatrix)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveFilterMatrixConverter_SetSourceMatrix(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterMatrixConverter,jint pIndex,jobject pMatrix)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveFilterMatrixConverter *) lpjFbxAnimCurveFilterMatrixConverter)->SetSourceMatrix(
  ( FbxAnimCurveFilterMatrixConverter::EMatrixIndex  )  _lcvt.j2c<jint,FbxAnimCurveFilterMatrixConverter::EMatrixIndex >(pIndex)
  ,
  ( FbxAMatrix  &) * _lcvt.j2c_object_ref<jobject,FbxAMatrix >(pMatrix)
  );
}
  /// void  GetDestMatrix (EMatrixIndex pIndex, FbxAMatrix &pMatrix) const
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveFilterMatrixConverter_GetDestMatrix(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterMatrixConverter,jint pIndex,jobject pMatrix)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveFilterMatrixConverter *) lpjFbxAnimCurveFilterMatrixConverter)->GetDestMatrix(
  ( FbxAnimCurveFilterMatrixConverter::EMatrixIndex  )  _lcvt.j2c<jint,FbxAnimCurveFilterMatrixConverter::EMatrixIndex >(pIndex)
  ,
  ( FbxAMatrix  &) * _lcvt.j2c_object_ref<jobject,FbxAMatrix >(pMatrix)
  );
}
  /// void  SetDestMatrix (EMatrixIndex pIndex, FbxAMatrix &pMatrix)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveFilterMatrixConverter_SetDestMatrix(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterMatrixConverter,jint pIndex,jobject pMatrix)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveFilterMatrixConverter *) lpjFbxAnimCurveFilterMatrixConverter)->SetDestMatrix(
  ( FbxAnimCurveFilterMatrixConverter::EMatrixIndex  )  _lcvt.j2c<jint,FbxAnimCurveFilterMatrixConverter::EMatrixIndex >(pIndex)
  ,
  ( FbxAMatrix  &) * _lcvt.j2c_object_ref<jobject,FbxAMatrix >(pMatrix)
  );
}
  /// FbxTime  GetResamplingPeriod () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimCurveFilterMatrixConverter_GetResamplingPeriod(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterMatrixConverter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxTime>(
  ((FbxAnimCurveFilterMatrixConverter *) lpjFbxAnimCurveFilterMatrixConverter)->GetResamplingPeriod(
  ));
  return ret;
}
  /// void  SetResamplingPeriod (FbxTime &pResamplingPeriod)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveFilterMatrixConverter_SetResamplingPeriod(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterMatrixConverter,jobject pResamplingPeriod)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveFilterMatrixConverter *) lpjFbxAnimCurveFilterMatrixConverter)->SetResamplingPeriod(
  ( FbxTime  &) * _lcvt.j2c_object_ref<jobject,FbxTime >(pResamplingPeriod)
  );
}
  /// bool  GetGenerateLastKeyExactlyAtEndTime () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterMatrixConverter_GetGenerateLastKeyExactlyAtEndTime(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterMatrixConverter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterMatrixConverter *) lpjFbxAnimCurveFilterMatrixConverter)->GetGenerateLastKeyExactlyAtEndTime(
  ));
  return ret;
}
  /// void  SetGenerateLastKeyExactlyAtEndTime (bool pFlag)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveFilterMatrixConverter_SetGenerateLastKeyExactlyAtEndTime(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterMatrixConverter,jboolean pFlag)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveFilterMatrixConverter *) lpjFbxAnimCurveFilterMatrixConverter)->SetGenerateLastKeyExactlyAtEndTime(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pFlag)
  );
}
  /// bool  GetResamplingOnFrameRateMultiple () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterMatrixConverter_GetResamplingOnFrameRateMultiple(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterMatrixConverter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterMatrixConverter *) lpjFbxAnimCurveFilterMatrixConverter)->GetResamplingOnFrameRateMultiple(
  ));
  return ret;
}
  /// void  SetResamplingOnFrameRateMultiple (bool pFlag)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveFilterMatrixConverter_SetResamplingOnFrameRateMultiple(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterMatrixConverter,jboolean pFlag)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveFilterMatrixConverter *) lpjFbxAnimCurveFilterMatrixConverter)->SetResamplingOnFrameRateMultiple(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pFlag)
  );
}
  /// bool  GetApplyUnroll () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterMatrixConverter_GetApplyUnroll(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterMatrixConverter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterMatrixConverter *) lpjFbxAnimCurveFilterMatrixConverter)->GetApplyUnroll(
  ));
  return ret;
}
  /// void  SetApplyUnroll (bool pFlag)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveFilterMatrixConverter_SetApplyUnroll(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterMatrixConverter,jboolean pFlag)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveFilterMatrixConverter *) lpjFbxAnimCurveFilterMatrixConverter)->SetApplyUnroll(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pFlag)
  );
}
  /// bool  GetApplyConstantKeyReducer () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterMatrixConverter_GetApplyConstantKeyReducer(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterMatrixConverter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterMatrixConverter *) lpjFbxAnimCurveFilterMatrixConverter)->GetApplyConstantKeyReducer(
  ));
  return ret;
}
  /// void  SetApplyConstantKeyReducer (bool pFlag)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveFilterMatrixConverter_SetApplyConstantKeyReducer(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterMatrixConverter,jboolean pFlag)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveFilterMatrixConverter *) lpjFbxAnimCurveFilterMatrixConverter)->SetApplyConstantKeyReducer(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pFlag)
  );
}
  /// bool  GetResampleTranslation () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterMatrixConverter_GetResampleTranslation(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterMatrixConverter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterMatrixConverter *) lpjFbxAnimCurveFilterMatrixConverter)->GetResampleTranslation(
  ));
  return ret;
}
  /// void  SetResampleTranslation (bool pFlag)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveFilterMatrixConverter_SetResampleTranslation(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterMatrixConverter,jboolean pFlag)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveFilterMatrixConverter *) lpjFbxAnimCurveFilterMatrixConverter)->SetResampleTranslation(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pFlag)
  );
}
  /// void  SetSrcRotateOrder (int pOrder)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveFilterMatrixConverter_SetSrcRotateOrder(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterMatrixConverter,jint pOrder)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveFilterMatrixConverter *) lpjFbxAnimCurveFilterMatrixConverter)->SetSrcRotateOrder(
  ( FbxEuler::EOrder  )  _lcvt.j2c<jint, int  >(pOrder)
  );
}
  /// void  SetDestRotateOrder (int pOrder)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveFilterMatrixConverter_SetDestRotateOrder(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterMatrixConverter,jint pOrder)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveFilterMatrixConverter *) lpjFbxAnimCurveFilterMatrixConverter)->SetDestRotateOrder(
  ( FbxEuler::EOrder  )  _lcvt.j2c<jint, int  >(pOrder)
  );
}
  /// void  SetForceApply (bool pVal)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveFilterMatrixConverter_SetForceApply(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterMatrixConverter,jboolean pVal)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveFilterMatrixConverter *) lpjFbxAnimCurveFilterMatrixConverter)->SetForceApply(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pVal)
  );
}
  /// bool  GetForceApply () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterMatrixConverter_GetForceApply(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterMatrixConverter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterMatrixConverter *) lpjFbxAnimCurveFilterMatrixConverter)->GetForceApply(
  ));
  return ret;
}
  /// virtual bool  NeedApply (FbxAnimCurve **pCurve, int pCount, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterMatrixConverter_NeedApply4(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterMatrixConverter,jlongArray pCurve,jint pCount,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterMatrixConverter *) lpjFbxAnimCurveFilterMatrixConverter)->NeedApply(
  ( FbxAnimCurve  **)  _lcvt.j2c_object_ppt<jlongArray,FbxAnimCurve>(pCurve)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pCount)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// virtual bool  NeedApply (FbxAnimCurveNode &pCurveNode, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterMatrixConverter_NeedApply5(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterMatrixConverter,jobject pCurveNode,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterMatrixConverter *) lpjFbxAnimCurveFilterMatrixConverter)->NeedApply(
  ( FbxAnimCurveNode  &) * _lcvt.j2c_object_ref<jobject,FbxAnimCurveNode >(pCurveNode)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// virtual bool  Apply (FbxAnimCurveNode &pCurveNode, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveFilterMatrixConverter_Apply6(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveFilterMatrixConverter,jobject pCurveNode,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveFilterMatrixConverter *) lpjFbxAnimCurveFilterMatrixConverter)->Apply(
  ( FbxAnimCurveNode  &) * _lcvt.j2c_object_ref<jobject,FbxAnimCurveNode >(pCurveNode)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
