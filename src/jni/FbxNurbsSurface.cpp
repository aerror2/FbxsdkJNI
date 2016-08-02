//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// virtual FbxNodeAttribute::EType  GetAttributeType () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxNurbsSurface_GetAttributeType(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbsSurface)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxNodeAttribute::EType  >(
  ((FbxNurbsSurface *) lpjFbxNurbsSurface)->GetAttributeType(
  ));
  return ret;
}
  /// void  Reset ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNurbsSurface_Reset(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbsSurface)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNurbsSurface *) lpjFbxNurbsSurface)->Reset(
  );
}
  /// bool  IsRational () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxNurbsSurface_IsRational(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbsSurface)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxNurbsSurface *) lpjFbxNurbsSurface)->IsRational(
  ));
  return ret;
}
  /// void  SetSurfaceMode (FbxGeometry::ESurfaceMode pMode)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNurbsSurface_SetSurfaceMode(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbsSurface,jint pMode)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNurbsSurface *) lpjFbxNurbsSurface)->SetSurfaceMode(
  ( FbxGeometry::ESurfaceMode  )  _lcvt.j2c<jint,FbxGeometry::ESurfaceMode >(pMode)
  );
}
  /// ESurfaceMode  GetSurfaceMode () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxNurbsSurface_GetSurfaceMode(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbsSurface)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxGeometry::ESurfaceMode  >(
  ((FbxNurbsSurface *) lpjFbxNurbsSurface)->GetSurfaceMode(
  ));
  return ret;
}
  /// void  InitControlPoints (int pUCount, EType pUType, int pVCount, EType pVType)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNurbsSurface_InitControlPoints(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbsSurface,jint pUCount,jint pUType,jint pVCount,jint pVType)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNurbsSurface *) lpjFbxNurbsSurface)->InitControlPoints(
  ( int  )  _lcvt.j2c<jint, int  >(pUCount)
  ,
  ( FbxNurbsSurface::EType  )  _lcvt.j2c<jint,FbxNurbsSurface::EType >(pUType)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pVCount)
  ,
  ( FbxNurbsSurface::EType  )  _lcvt.j2c<jint,FbxNurbsSurface::EType >(pVType)
  );
}
  /// int  GetUCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxNurbsSurface_GetUCount(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbsSurface)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxNurbsSurface *) lpjFbxNurbsSurface)->GetUCount(
  ));
  return ret;
}
  /// int  GetVCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxNurbsSurface_GetVCount(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbsSurface)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxNurbsSurface *) lpjFbxNurbsSurface)->GetVCount(
  ));
  return ret;
}
  /// EType  GetNurbsUType () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxNurbsSurface_GetNurbsUType(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbsSurface)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxNurbsSurface::EType  >(
  ((FbxNurbsSurface *) lpjFbxNurbsSurface)->GetNurbsUType(
  ));
  return ret;
}
  /// EType  GetNurbsVType () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxNurbsSurface_GetNurbsVType(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbsSurface)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxNurbsSurface::EType  >(
  ((FbxNurbsSurface *) lpjFbxNurbsSurface)->GetNurbsVType(
  ));
  return ret;
}
  /// int  GetUKnotCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxNurbsSurface_GetUKnotCount(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbsSurface)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxNurbsSurface *) lpjFbxNurbsSurface)->GetUKnotCount(
  ));
  return ret;
}
  /// double *  GetUKnotVector () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNurbsSurface_GetUKnotVector(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbsSurface)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_pt<jlong,  double  *>(
  ((FbxNurbsSurface *) lpjFbxNurbsSurface)->GetUKnotVector(
  ));
  return ret;
}
  /// int  GetVKnotCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxNurbsSurface_GetVKnotCount(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbsSurface)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxNurbsSurface *) lpjFbxNurbsSurface)->GetVKnotCount(
  ));
  return ret;
}
  /// double *  GetVKnotVector () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNurbsSurface_GetVKnotVector(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbsSurface)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_pt<jlong,  double  *>(
  ((FbxNurbsSurface *) lpjFbxNurbsSurface)->GetVKnotVector(
  ));
  return ret;
}
  /// void  SetOrder (FbxUInt pUOrder, FbxUInt pVOrder)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNurbsSurface_SetOrder(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbsSurface,jint pUOrder,jint pVOrder)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNurbsSurface *) lpjFbxNurbsSurface)->SetOrder(
  ( FbxUInt  )  _lcvt.j2c<jint, FbxUInt  >(pUOrder)
  ,
  ( FbxUInt  )  _lcvt.j2c<jint, FbxUInt  >(pVOrder)
  );
}
  /// int  GetUOrder () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxNurbsSurface_GetUOrder(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbsSurface)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxNurbsSurface *) lpjFbxNurbsSurface)->GetUOrder(
  ));
  return ret;
}
  /// int  GetVOrder () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxNurbsSurface_GetVOrder(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbsSurface)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxNurbsSurface *) lpjFbxNurbsSurface)->GetVOrder(
  ));
  return ret;
}
  /// void  SetStep (int pUStep, int pVStep)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNurbsSurface_SetStep(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbsSurface,jint pUStep,jint pVStep)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNurbsSurface *) lpjFbxNurbsSurface)->SetStep(
  ( int  )  _lcvt.j2c<jint, int  >(pUStep)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pVStep)
  );
}
  /// int  GetUStep () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxNurbsSurface_GetUStep(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbsSurface)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxNurbsSurface *) lpjFbxNurbsSurface)->GetUStep(
  ));
  return ret;
}
  /// int  GetVStep () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxNurbsSurface_GetVStep(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbsSurface)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxNurbsSurface *) lpjFbxNurbsSurface)->GetVStep(
  ));
  return ret;
}
  /// int  GetUSpanCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxNurbsSurface_GetUSpanCount(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbsSurface)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxNurbsSurface *) lpjFbxNurbsSurface)->GetUSpanCount(
  ));
  return ret;
}
  /// int  GetVSpanCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxNurbsSurface_GetVSpanCount(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbsSurface)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxNurbsSurface *) lpjFbxNurbsSurface)->GetVSpanCount(
  ));
  return ret;
}
  /// void  SetApplyFlipUV (bool pFlag)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNurbsSurface_SetApplyFlipUV(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbsSurface,jboolean pFlag)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNurbsSurface *) lpjFbxNurbsSurface)->SetApplyFlipUV(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pFlag)
  );
}
  /// bool  GetApplyFlipUV () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxNurbsSurface_GetApplyFlipUV(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbsSurface)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxNurbsSurface *) lpjFbxNurbsSurface)->GetApplyFlipUV(
  ));
  return ret;
}
  /// void  SetApplyFlipLinks (bool pFlag)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNurbsSurface_SetApplyFlipLinks(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbsSurface,jboolean pFlag)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNurbsSurface *) lpjFbxNurbsSurface)->SetApplyFlipLinks(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pFlag)
  );
}
  /// bool  GetApplyFlipLinks () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxNurbsSurface_GetApplyFlipLinks(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbsSurface)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxNurbsSurface *) lpjFbxNurbsSurface)->GetApplyFlipLinks(
  ));
  return ret;
}
  /// bool  GetApplyFlip () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxNurbsSurface_GetApplyFlip(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbsSurface)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxNurbsSurface *) lpjFbxNurbsSurface)->GetApplyFlip(
  ));
  return ret;
}
  /// void  AddCurveOnSurface (FbxNode *pCurve)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNurbsSurface_AddCurveOnSurface(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbsSurface,jlong pCurve)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNurbsSurface *) lpjFbxNurbsSurface)->AddCurveOnSurface(
  ( FbxNode  *)  _lcvt.j2c_object_pt<jlong, FbxNode>(pCurve)
  );
}
  /// FbxNode *  GetCurveOnSurface (int pIndex)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNurbsSurface_GetCurveOnSurface(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbsSurface,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxNode>(
  ((FbxNurbsSurface *) lpjFbxNurbsSurface)->GetCurveOnSurface(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// const FbxNode *  GetCurveOnSurface (int pIndex) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNurbsSurface_GetCurveOnSurface1(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbsSurface,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxNode>(
  ((FbxNurbsSurface *) lpjFbxNurbsSurface)->GetCurveOnSurface(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// int  GetCurveOnSurfaceCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxNurbsSurface_GetCurveOnSurfaceCount(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbsSurface)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxNurbsSurface *) lpjFbxNurbsSurface)->GetCurveOnSurfaceCount(
  ));
  return ret;
}
  /// bool  RemoveCurveOnSurface (FbxNode *pCurve)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxNurbsSurface_RemoveCurveOnSurface(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbsSurface,jlong pCurve)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxNurbsSurface *) lpjFbxNurbsSurface)->RemoveCurveOnSurface(
  ( FbxNode  *)  _lcvt.j2c_object_pt<jlong, FbxNode>(pCurve)
  ));
  return ret;
}
  /// FbxNurbsSurface * Create( FbxGeometry* lpFbxGeometry,  const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNurbsSurface_Create(JNIEnv * __env, jclass __jc,jlong lpFbxGeometry,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxNurbsSurface>(
  FbxNurbsSurface::Create(
  ( FbxGeometry  *)  _lcvt.j2c_object_pt<jlong, FbxGeometry>(lpFbxGeometry)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
