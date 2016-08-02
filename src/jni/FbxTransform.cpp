//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxTransform ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxTransform_meCreate(JNIEnv * __env, jclass __jc)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxTransform>(
  new FbxTransform(
  ));
  return ret;
}
  /// EInheritType  GetInheritType ()
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxTransform_GetInheritType(JNIEnv * __env, jclass __jc,jlong lpjFbxTransform)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxTransform::EInheritType  >(
  ((FbxTransform *) lpjFbxTransform)->GetInheritType(
  ));
  return ret;
}
  /// void  SetInheritType (EInheritType pType)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxTransform_SetInheritType(JNIEnv * __env, jclass __jc,jlong lpjFbxTransform,jint pType)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxTransform *) lpjFbxTransform)->SetInheritType(
  ( FbxTransform::EInheritType  )  _lcvt.j2c<jint,FbxTransform::EInheritType >(pType)
  );
}
  /// FbxLimits &  GetTranslationLimits ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxTransform_GetTranslationLimits(JNIEnv * __env, jclass __jc,jlong lpjFbxTransform)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_ref<jlong, FbxLimits>(
  ((FbxTransform *) lpjFbxTransform)->GetTranslationLimits(
  ));
  return ret;
}
  /// FbxLimits &  GetRotationLimits ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxTransform_GetRotationLimits(JNIEnv * __env, jclass __jc,jlong lpjFbxTransform)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_ref<jlong, FbxLimits>(
  ((FbxTransform *) lpjFbxTransform)->GetRotationLimits(
  ));
  return ret;
}
  /// FbxLimits &  GetScalingLimits ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxTransform_GetScalingLimits(JNIEnv * __env, jclass __jc,jlong lpjFbxTransform)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_ref<jlong, FbxLimits>(
  ((FbxTransform *) lpjFbxTransform)->GetScalingLimits(
  ));
  return ret;
}
  /// FbxRotationOrder &  GetRotationOrder ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxTransform_GetRotationOrder(JNIEnv * __env, jclass __jc,jlong lpjFbxTransform)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_ref<jlong, FbxRotationOrder>(
  ((FbxTransform *) lpjFbxTransform)->GetRotationOrder(
  ));
  return ret;
}
  /// bool  HasROffset ()
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxTransform_HasROffset(JNIEnv * __env, jclass __jc,jlong lpjFbxTransform)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxTransform *) lpjFbxTransform)->HasROffset(
  ));
  return ret;
}
  /// bool  HasRPivot ()
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxTransform_HasRPivot(JNIEnv * __env, jclass __jc,jlong lpjFbxTransform)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxTransform *) lpjFbxTransform)->HasRPivot(
  ));
  return ret;
}
  /// bool  HasSOffset ()
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxTransform_HasSOffset(JNIEnv * __env, jclass __jc,jlong lpjFbxTransform)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxTransform *) lpjFbxTransform)->HasSOffset(
  ));
  return ret;
}
  /// bool  HasSPivot ()
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxTransform_HasSPivot(JNIEnv * __env, jclass __jc,jlong lpjFbxTransform)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxTransform *) lpjFbxTransform)->HasSPivot(
  ));
  return ret;
}
  /// bool  HasPreRM ()
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxTransform_HasPreRM(JNIEnv * __env, jclass __jc,jlong lpjFbxTransform)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxTransform *) lpjFbxTransform)->HasPreRM(
  ));
  return ret;
}
  /// bool  HasPostRM ()
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxTransform_HasPostRM(JNIEnv * __env, jclass __jc,jlong lpjFbxTransform)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxTransform *) lpjFbxTransform)->HasPostRM(
  ));
  return ret;
}
  /// void  SetROffset (FbxVector4 &pROffset)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxTransform_SetROffset(JNIEnv * __env, jclass __jc,jlong lpjFbxTransform,jobject pROffset)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxTransform *) lpjFbxTransform)->SetROffset(
  ( FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pROffset)
  );
}
  /// void  SetRPivot (FbxVector4 &pRPivot)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxTransform_SetRPivot(JNIEnv * __env, jclass __jc,jlong lpjFbxTransform,jobject pRPivot)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxTransform *) lpjFbxTransform)->SetRPivot(
  ( FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pRPivot)
  );
}
  /// void  SetSOffset (FbxVector4 &pSOffset)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxTransform_SetSOffset(JNIEnv * __env, jclass __jc,jlong lpjFbxTransform,jobject pSOffset)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxTransform *) lpjFbxTransform)->SetSOffset(
  ( FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pSOffset)
  );
}
  /// void  SetSPivot (FbxVector4 &pSPivot)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxTransform_SetSPivot(JNIEnv * __env, jclass __jc,jlong lpjFbxTransform,jobject pSPivot)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxTransform *) lpjFbxTransform)->SetSPivot(
  ( FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pSPivot)
  );
}
  /// void  SetPreRM (FbxVector4 &pPreR)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxTransform_SetPreRM(JNIEnv * __env, jclass __jc,jlong lpjFbxTransform,jobject pPreR)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxTransform *) lpjFbxTransform)->SetPreRM(
  ( FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pPreR)
  );
}
  /// void  SetPostRM (FbxVector4 &pPostR)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxTransform_SetPostRM(JNIEnv * __env, jclass __jc,jlong lpjFbxTransform,jobject pPostR)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxTransform *) lpjFbxTransform)->SetPostRM(
  ( FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pPostR)
  );
}
  /// bool  GetRotationSpaceForLimitOnly ()
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxTransform_GetRotationSpaceForLimitOnly(JNIEnv * __env, jclass __jc,jlong lpjFbxTransform)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxTransform *) lpjFbxTransform)->GetRotationSpaceForLimitOnly(
  ));
  return ret;
}
  /// void  SetRotationSpaceForLimitOnly (bool pRotationSpaceForLimitOnly)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxTransform_SetRotationSpaceForLimitOnly(JNIEnv * __env, jclass __jc,jlong lpjFbxTransform,jboolean pRotationSpaceForLimitOnly)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxTransform *) lpjFbxTransform)->SetRotationSpaceForLimitOnly(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pRotationSpaceForLimitOnly)
  );
}
  /// void  DoF2LT (FbxVector4 &pLT, FbxVector4 &pDoF, FbxAMatrix &pLRM, FbxAMatrix &pLSM)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxTransform_DoF2LT(JNIEnv * __env, jclass __jc,jlong lpjFbxTransform,jobject pLT,jobject pDoF,jobject pLRM,jobject pLSM)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxTransform *) lpjFbxTransform)->DoF2LT(
  ( FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pLT)
  ,
  ( FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pDoF)
  ,
  ( FbxAMatrix  &) * _lcvt.j2c_object_ref<jobject,FbxAMatrix >(pLRM)
  ,
  ( FbxAMatrix  &) * _lcvt.j2c_object_ref<jobject,FbxAMatrix >(pLSM)
  );
}
  /// void  LT2DoF (FbxVector4 &pDoF, FbxVector4 pLT, FbxAMatrix &pLRM, FbxAMatrix &pLSM)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxTransform_LT2DoF(JNIEnv * __env, jclass __jc,jlong lpjFbxTransform,jobject pDoF,jlong pLT,jobject pLRM,jobject pLSM)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxTransform *) lpjFbxTransform)->LT2DoF(
  ( FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pDoF)
  ,
  ( FbxVector4  )  _lcvt.j2c_object<jlong,FbxVector4 >(pLT)
  ,
  ( FbxAMatrix  &) * _lcvt.j2c_object_ref<jobject,FbxAMatrix >(pLRM)
  ,
  ( FbxAMatrix  &) * _lcvt.j2c_object_ref<jobject,FbxAMatrix >(pLSM)
  );
}
  /// void  DoF2LRM (FbxAMatrix &pLRM, FbxVector4 &pRDoF, bool pForLimit=false)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxTransform_DoF2LRM(JNIEnv * __env, jclass __jc,jlong lpjFbxTransform,jobject pLRM,jobject pRDoF,jboolean pForLimit)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxTransform *) lpjFbxTransform)->DoF2LRM(
  ( FbxAMatrix  &) * _lcvt.j2c_object_ref<jobject,FbxAMatrix >(pLRM)
  ,
  ( FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pRDoF)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pForLimit)
  );
}
  /// void  LRM2DoF (FbxVector4 &pRDoF, FbxAMatrix &pLRM, bool pForLimit=false)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxTransform_LRM2DoF(JNIEnv * __env, jclass __jc,jlong lpjFbxTransform,jobject pRDoF,jobject pLRM,jboolean pForLimit)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxTransform *) lpjFbxTransform)->LRM2DoF(
  ( FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pRDoF)
  ,
  ( FbxAMatrix  &) * _lcvt.j2c_object_ref<jobject,FbxAMatrix >(pLRM)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pForLimit)
  );
}
  /// void  LSM2GSM (FbxAMatrix &pGSM, FbxAMatrix &pPGSM, FbxAMatrix &pLSM, FbxAMatrix &pLRM, FbxVector4 &pPLS)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxTransform_LSM2GSM(JNIEnv * __env, jclass __jc,jlong lpjFbxTransform,jobject pGSM,jobject pPGSM,jobject pLSM,jobject pLRM,jobject pPLS)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxTransform *) lpjFbxTransform)->LSM2GSM(
  ( FbxAMatrix  &) * _lcvt.j2c_object_ref<jobject,FbxAMatrix >(pGSM)
  ,
  ( FbxAMatrix  &) * _lcvt.j2c_object_ref<jobject,FbxAMatrix >(pPGSM)
  ,
  ( FbxAMatrix  &) * _lcvt.j2c_object_ref<jobject,FbxAMatrix >(pLSM)
  ,
  ( FbxAMatrix  &) * _lcvt.j2c_object_ref<jobject,FbxAMatrix >(pLRM)
  ,
  ( FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pPLS)
  );
}
  /// void  GTRSM2GX (FbxAMatrix &pGX, FbxVector4 &pGT, FbxAMatrix &pGRM, FbxAMatrix &pGSM)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxTransform_GTRSM2GX(JNIEnv * __env, jclass __jc,jlong lpjFbxTransform,jobject pGX,jobject pGT,jobject pGRM,jobject pGSM)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxTransform *) lpjFbxTransform)->GTRSM2GX(
  ( FbxAMatrix  &) * _lcvt.j2c_object_ref<jobject,FbxAMatrix >(pGX)
  ,
  ( FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pGT)
  ,
  ( FbxAMatrix  &) * _lcvt.j2c_object_ref<jobject,FbxAMatrix >(pGRM)
  ,
  ( FbxAMatrix  &) * _lcvt.j2c_object_ref<jobject,FbxAMatrix >(pGSM)
  );
}
  /// void meDestroy(FbxTransform * lpFbxTransform)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxTransform_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxTransform)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxTransform *) lpjFbxTransform
  );
}
