
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxLimitsUtilities (FbxNode *pNode)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLimitsUtilities_meCreate(JNIEnv * __env, jclass __jc,jlong pNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxLimitsUtilities>(
  new FbxLimitsUtilities(
  ( FbxNode  *)  _lcvt.j2c_object_pt<jlong, FbxNode>(pNode)
  ));
  return ret;
}
  /// void  SetAuto (EType pType, bool pAuto)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLimitsUtilities_SetAuto(JNIEnv * __env, jclass __jc,jlong lpjFbxLimitsUtilities,jint pType,jboolean pAuto)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLimitsUtilities *) lpjFbxLimitsUtilities)->SetAuto(
  ( FbxLimitsUtilities::EType  )  _lcvt.j2c<jint,FbxLimitsUtilities::EType >(pType)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pAuto)
  );
}
  /// bool  GetAuto (EType pType) const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxLimitsUtilities_GetAuto(JNIEnv * __env, jclass __jc,jlong lpjFbxLimitsUtilities,jint pType)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxLimitsUtilities *) lpjFbxLimitsUtilities)->GetAuto(
  ( FbxLimitsUtilities::EType  )  _lcvt.j2c<jint,FbxLimitsUtilities::EType >(pType)
  ));
  return ret;
}
  /// void  SetEnable (EType pType, bool pEnable)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLimitsUtilities_SetEnable(JNIEnv * __env, jclass __jc,jlong lpjFbxLimitsUtilities,jint pType,jboolean pEnable)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLimitsUtilities *) lpjFbxLimitsUtilities)->SetEnable(
  ( FbxLimitsUtilities::EType  )  _lcvt.j2c<jint,FbxLimitsUtilities::EType >(pType)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pEnable)
  );
}
  /// bool  GetEnable (EType pType) const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxLimitsUtilities_GetEnable(JNIEnv * __env, jclass __jc,jlong lpjFbxLimitsUtilities,jint pType)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxLimitsUtilities *) lpjFbxLimitsUtilities)->GetEnable(
  ( FbxLimitsUtilities::EType  )  _lcvt.j2c<jint,FbxLimitsUtilities::EType >(pType)
  ));
  return ret;
}
  /// void  SetDefault (EType pType, FbxVector4 pDefault)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLimitsUtilities_SetDefault(JNIEnv * __env, jclass __jc,jlong lpjFbxLimitsUtilities,jint pType,jlong pDefault)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLimitsUtilities *) lpjFbxLimitsUtilities)->SetDefault(
  ( FbxLimitsUtilities::EType  )  _lcvt.j2c<jint,FbxLimitsUtilities::EType >(pType)
  ,
  ( FbxVector4  )  _lcvt.j2c_object<jlong,FbxVector4 >(pDefault)
  );
}
  /// FbxVector4  GetDefault (EType pType) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLimitsUtilities_GetDefault(JNIEnv * __env, jclass __jc,jlong lpjFbxLimitsUtilities,jint pType)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxVector4>(
  ((FbxLimitsUtilities *) lpjFbxLimitsUtilities)->GetDefault(
  ( FbxLimitsUtilities::EType  )  _lcvt.j2c<jint,FbxLimitsUtilities::EType >(pType)
  ));
  return ret;
}
  /// void  SetMin (EType pType, FbxVector4 pMin)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLimitsUtilities_SetMin(JNIEnv * __env, jclass __jc,jlong lpjFbxLimitsUtilities,jint pType,jlong pMin)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLimitsUtilities *) lpjFbxLimitsUtilities)->SetMin(
  ( FbxLimitsUtilities::EType  )  _lcvt.j2c<jint,FbxLimitsUtilities::EType >(pType)
  ,
  ( FbxVector4  )  _lcvt.j2c_object<jlong,FbxVector4 >(pMin)
  );
}
  /// FbxVector4  GetMin (EType pType) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLimitsUtilities_GetMin(JNIEnv * __env, jclass __jc,jlong lpjFbxLimitsUtilities,jint pType)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxVector4>(
  ((FbxLimitsUtilities *) lpjFbxLimitsUtilities)->GetMin(
  ( FbxLimitsUtilities::EType  )  _lcvt.j2c<jint,FbxLimitsUtilities::EType >(pType)
  ));
  return ret;
}
  /// void  SetMax (EType pType, FbxVector4 pMax)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLimitsUtilities_SetMax(JNIEnv * __env, jclass __jc,jlong lpjFbxLimitsUtilities,jint pType,jlong pMax)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLimitsUtilities *) lpjFbxLimitsUtilities)->SetMax(
  ( FbxLimitsUtilities::EType  )  _lcvt.j2c<jint,FbxLimitsUtilities::EType >(pType)
  ,
  ( FbxVector4  )  _lcvt.j2c_object<jlong,FbxVector4 >(pMax)
  );
}
  /// FbxVector4  GetMax (EType pType) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLimitsUtilities_GetMax(JNIEnv * __env, jclass __jc,jlong lpjFbxLimitsUtilities,jint pType)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxVector4>(
  ((FbxLimitsUtilities *) lpjFbxLimitsUtilities)->GetMax(
  ( FbxLimitsUtilities::EType  )  _lcvt.j2c<jint,FbxLimitsUtilities::EType >(pType)
  ));
  return ret;
}
  /// void  SetRotationType (ERotationType pType)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLimitsUtilities_SetRotationType(JNIEnv * __env, jclass __jc,jlong lpjFbxLimitsUtilities,jint pType)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLimitsUtilities *) lpjFbxLimitsUtilities)->SetRotationType(
  ( FbxLimitsUtilities::ERotationType  )  _lcvt.j2c<jint,FbxLimitsUtilities::ERotationType >(pType)
  );
}
  /// ERotationType  GetRotationType () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLimitsUtilities_GetRotationType(JNIEnv * __env, jclass __jc,jlong lpjFbxLimitsUtilities)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxLimitsUtilities::ERotationType  >(
  ((FbxLimitsUtilities *) lpjFbxLimitsUtilities)->GetRotationType(
  ));
  return ret;
}
  /// ERotationClampType  GetRotationClampType () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLimitsUtilities_GetRotationClampType(JNIEnv * __env, jclass __jc,jlong lpjFbxLimitsUtilities)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxLimitsUtilities::ERotationClampType  >(
  ((FbxLimitsUtilities *) lpjFbxLimitsUtilities)->GetRotationClampType(
  ));
  return ret;
}
  /// void  SetRotationAxis (FbxVector4 pRotationAxis)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLimitsUtilities_SetRotationAxis(JNIEnv * __env, jclass __jc,jlong lpjFbxLimitsUtilities,jlong pRotationAxis)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLimitsUtilities *) lpjFbxLimitsUtilities)->SetRotationAxis(
  ( FbxVector4  )  _lcvt.j2c_object<jlong,FbxVector4 >(pRotationAxis)
  );
}
  /// FbxVector4  GetRotationAxis () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLimitsUtilities_GetRotationAxis(JNIEnv * __env, jclass __jc,jlong lpjFbxLimitsUtilities)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxVector4>(
  ((FbxLimitsUtilities *) lpjFbxLimitsUtilities)->GetRotationAxis(
  ));
  return ret;
}
  /// void  SetAxisLength (double pLength)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLimitsUtilities_SetAxisLength(JNIEnv * __env, jclass __jc,jlong lpjFbxLimitsUtilities,jdouble pLength)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLimitsUtilities *) lpjFbxLimitsUtilities)->SetAxisLength(
  ( double  )  _lcvt.j2c<jdouble, double  >(pLength)
  );
}
  /// double  GetAxisLength () const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxLimitsUtilities_GetAxisLength(JNIEnv * __env, jclass __jc,jlong lpjFbxLimitsUtilities)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxLimitsUtilities *) lpjFbxLimitsUtilities)->GetAxisLength(
  ));
  return ret;
}
  /// void  UpdateAutomatic (FbxNode *pNode)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLimitsUtilities_UpdateAutomatic(JNIEnv * __env, jclass __jc,jlong lpjFbxLimitsUtilities,jlong pNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLimitsUtilities *) lpjFbxLimitsUtilities)->UpdateAutomatic(
  ( FbxNode  *)  _lcvt.j2c_object_pt<jlong, FbxNode>(pNode)
  );
}
  /// FbxVector4  GetEndPointTranslation (FbxNode *pNode) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLimitsUtilities_GetEndPointTranslation(JNIEnv * __env, jclass __jc,jlong lpjFbxLimitsUtilities,jlong pNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxVector4>(
  ((FbxLimitsUtilities *) lpjFbxLimitsUtilities)->GetEndPointTranslation(
  ( FbxNode  *)  _lcvt.j2c_object_pt<jlong, FbxNode>(pNode)
  ));
  return ret;
}
  /// FbxVector4  GetEndSite (FbxNode *pNode) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLimitsUtilities_GetEndSite(JNIEnv * __env, jclass __jc,jlong lpjFbxLimitsUtilities,jlong pNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxVector4>(
  ((FbxLimitsUtilities *) lpjFbxLimitsUtilities)->GetEndSite(
  ( FbxNode  *)  _lcvt.j2c_object_pt<jlong, FbxNode>(pNode)
  ));
  return ret;
}
  /// void meDestroy(FbxLimitsUtilities * lpFbxLimitsUtilities)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLimitsUtilities_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxLimitsUtilities)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxLimitsUtilities *) lpjFbxLimitsUtilities
  );
}
