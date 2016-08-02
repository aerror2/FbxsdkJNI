//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// virtual FbxNodeAttribute::EType  GetAttributeType () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxNurbs_GetAttributeType(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbs)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxNodeAttribute::EType  >(
  ((FbxNurbs *) lpjFbxNurbs)->GetAttributeType(
  ));
  return ret;
}
  /// void  Reset ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNurbs_Reset(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbs)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNurbs *) lpjFbxNurbs)->Reset(
  );
}
  /// void  SetSurfaceMode (FbxGeometry::ESurfaceMode pMode)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNurbs_SetSurfaceMode(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbs,jint pMode)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNurbs *) lpjFbxNurbs)->SetSurfaceMode(
  ( FbxGeometry::ESurfaceMode  )  _lcvt.j2c<jint,FbxGeometry::ESurfaceMode >(pMode)
  );
}
  /// ESurfaceMode  GetSurfaceMode () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxNurbs_GetSurfaceMode(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbs)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxGeometry::ESurfaceMode  >(
  ((FbxNurbs *) lpjFbxNurbs)->GetSurfaceMode(
  ));
  return ret;
}
  /// void  InitControlPoints (int pUCount, EType pUType, int pVCount, EType pVType)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNurbs_InitControlPoints(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbs,jint pUCount,jint pUType,jint pVCount,jint pVType)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNurbs *) lpjFbxNurbs)->InitControlPoints(
  ( int  )  _lcvt.j2c<jint, int  >(pUCount)
  ,
  ( FbxNurbs::EType  )  _lcvt.j2c<jint,FbxNurbs::EType >(pUType)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pVCount)
  ,
  ( FbxNurbs::EType  )  _lcvt.j2c<jint,FbxNurbs::EType >(pVType)
  );
}
  /// int  GetUCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxNurbs_GetUCount(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbs)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxNurbs *) lpjFbxNurbs)->GetUCount(
  ));
  return ret;
}
  /// int  GetVCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxNurbs_GetVCount(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbs)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxNurbs *) lpjFbxNurbs)->GetVCount(
  ));
  return ret;
}
  /// EType  GetNurbsUType () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxNurbs_GetNurbsUType(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbs)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxNurbs::EType  >(
  ((FbxNurbs *) lpjFbxNurbs)->GetNurbsUType(
  ));
  return ret;
}
  /// EType  GetNurbsVType () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxNurbs_GetNurbsVType(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbs)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxNurbs::EType  >(
  ((FbxNurbs *) lpjFbxNurbs)->GetNurbsVType(
  ));
  return ret;
}
  /// int  GetUKnotCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxNurbs_GetUKnotCount(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbs)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxNurbs *) lpjFbxNurbs)->GetUKnotCount(
  ));
  return ret;
}
  /// double *  GetUKnotVector () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNurbs_GetUKnotVector(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbs)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_pt<jlong,  double  *>(
  ((FbxNurbs *) lpjFbxNurbs)->GetUKnotVector(
  ));
  return ret;
}
  /// int  GetVKnotCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxNurbs_GetVKnotCount(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbs)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxNurbs *) lpjFbxNurbs)->GetVKnotCount(
  ));
  return ret;
}
  /// double *  GetVKnotVector () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNurbs_GetVKnotVector(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbs)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_pt<jlong,  double  *>(
  ((FbxNurbs *) lpjFbxNurbs)->GetVKnotVector(
  ));
  return ret;
}
  /// int *  GetUMultiplicityVector () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNurbs_GetUMultiplicityVector(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbs)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_pt<jlong,  int  *>(
  ((FbxNurbs *) lpjFbxNurbs)->GetUMultiplicityVector(
  ));
  return ret;
}
  /// int *  GetVMultiplicityVector () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNurbs_GetVMultiplicityVector(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbs)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_pt<jlong,  int  *>(
  ((FbxNurbs *) lpjFbxNurbs)->GetVMultiplicityVector(
  ));
  return ret;
}
  /// void  SetOrder (FbxUInt pUOrder, FbxUInt pVOrder)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNurbs_SetOrder(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbs,jint pUOrder,jint pVOrder)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNurbs *) lpjFbxNurbs)->SetOrder(
  ( FbxUInt  )  _lcvt.j2c<jint, FbxUInt  >(pUOrder)
  ,
  ( FbxUInt  )  _lcvt.j2c<jint, FbxUInt  >(pVOrder)
  );
}
  /// int  GetUOrder () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxNurbs_GetUOrder(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbs)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxNurbs *) lpjFbxNurbs)->GetUOrder(
  ));
  return ret;
}
  /// int  GetVOrder () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxNurbs_GetVOrder(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbs)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxNurbs *) lpjFbxNurbs)->GetVOrder(
  ));
  return ret;
}
  /// void  SetStep (int pUStep, int pVStep)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNurbs_SetStep(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbs,jint pUStep,jint pVStep)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNurbs *) lpjFbxNurbs)->SetStep(
  ( int  )  _lcvt.j2c<jint, int  >(pUStep)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pVStep)
  );
}
  /// int  GetUStep () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxNurbs_GetUStep(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbs)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxNurbs *) lpjFbxNurbs)->GetUStep(
  ));
  return ret;
}
  /// int  GetVStep () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxNurbs_GetVStep(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbs)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxNurbs *) lpjFbxNurbs)->GetVStep(
  ));
  return ret;
}
  /// int  GetUSpanCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxNurbs_GetUSpanCount(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbs)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxNurbs *) lpjFbxNurbs)->GetUSpanCount(
  ));
  return ret;
}
  /// int  GetVSpanCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxNurbs_GetVSpanCount(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbs)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxNurbs *) lpjFbxNurbs)->GetVSpanCount(
  ));
  return ret;
}
  /// void  SetApplyFlipUV (bool pFlag)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNurbs_SetApplyFlipUV(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbs,jboolean pFlag)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNurbs *) lpjFbxNurbs)->SetApplyFlipUV(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pFlag)
  );
}
  /// bool  GetApplyFlipUV () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxNurbs_GetApplyFlipUV(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbs)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxNurbs *) lpjFbxNurbs)->GetApplyFlipUV(
  ));
  return ret;
}
  /// void  SetApplyFlipLinks (bool pFlag)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNurbs_SetApplyFlipLinks(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbs,jboolean pFlag)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNurbs *) lpjFbxNurbs)->SetApplyFlipLinks(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pFlag)
  );
}
  /// bool  GetApplyFlipLinks () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxNurbs_GetApplyFlipLinks(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbs)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxNurbs *) lpjFbxNurbs)->GetApplyFlipLinks(
  ));
  return ret;
}
  /// bool  GetApplyFlip () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxNurbs_GetApplyFlip(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbs)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxNurbs *) lpjFbxNurbs)->GetApplyFlip(
  ));
  return ret;
}
  /// FbxNurbs * Create( FbxGeometry* lpFbxGeometry,  const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNurbs_Create(JNIEnv * __env, jclass __jc,jlong lpFbxGeometry,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxNurbs>(
  FbxNurbs::Create(
  ( FbxGeometry  *)  _lcvt.j2c_object_pt<jlong, FbxGeometry>(lpFbxGeometry)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
