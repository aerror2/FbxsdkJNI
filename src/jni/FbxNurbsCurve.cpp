
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// virtual FbxNodeAttribute::EType  GetAttributeType () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxNurbsCurve_GetAttributeType(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbsCurve)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxNodeAttribute::EType  >(
  ((FbxNurbsCurve *) lpjFbxNurbsCurve)->GetAttributeType(
  ));
  return ret;
}
  /// void  InitControlPoints (int pCount, EType pVType)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNurbsCurve_InitControlPoints(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbsCurve,jint pCount,jint pVType)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNurbsCurve *) lpjFbxNurbsCurve)->InitControlPoints(
  ( int  )  _lcvt.j2c<jint, int  >(pCount)
  ,
  ( FbxNurbsCurve::EType  )  _lcvt.j2c<jint,FbxNurbsCurve::EType >(pVType)
  );
}
  /// double *  GetKnotVector () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNurbsCurve_GetKnotVector(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbsCurve)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_pt<jlong,  double  *>(
  ((FbxNurbsCurve *) lpjFbxNurbsCurve)->GetKnotVector(
  ));
  return ret;
}
  /// int  GetKnotCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxNurbsCurve_GetKnotCount(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbsCurve)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxNurbsCurve *) lpjFbxNurbsCurve)->GetKnotCount(
  ));
  return ret;
}
  /// void  SetOrder (int pOrder)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNurbsCurve_SetOrder(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbsCurve,jint pOrder)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNurbsCurve *) lpjFbxNurbsCurve)->SetOrder(
  ( int  )  _lcvt.j2c<jint, int  >(pOrder)
  );
}
  /// int  GetOrder () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxNurbsCurve_GetOrder(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbsCurve)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxNurbsCurve *) lpjFbxNurbsCurve)->GetOrder(
  ));
  return ret;
}
  /// void  SetStep (int pStep)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNurbsCurve_SetStep(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbsCurve,jint pStep)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNurbsCurve *) lpjFbxNurbsCurve)->SetStep(
  ( int  )  _lcvt.j2c<jint, int  >(pStep)
  );
}
  /// int  GetStep () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxNurbsCurve_GetStep(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbsCurve)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxNurbsCurve *) lpjFbxNurbsCurve)->GetStep(
  ));
  return ret;
}
  /// void  SetDimension (EDimension pDimension)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNurbsCurve_SetDimension(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbsCurve,jint pDimension)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNurbsCurve *) lpjFbxNurbsCurve)->SetDimension(
  ( FbxNurbsCurve::EDimension  )  _lcvt.j2c<jint,FbxNurbsCurve::EDimension >(pDimension)
  );
}
  /// EDimension  GetDimension () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxNurbsCurve_GetDimension(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbsCurve)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxNurbsCurve::EDimension  >(
  ((FbxNurbsCurve *) lpjFbxNurbsCurve)->GetDimension(
  ));
  return ret;
}
  /// bool  IsRational ()
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxNurbsCurve_IsRational(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbsCurve)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxNurbsCurve *) lpjFbxNurbsCurve)->IsRational(
  ));
  return ret;
}
  /// int  GetSpanCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxNurbsCurve_GetSpanCount(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbsCurve)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxNurbsCurve *) lpjFbxNurbsCurve)->GetSpanCount(
  ));
  return ret;
}
  /// EType  GetType () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxNurbsCurve_GetType(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbsCurve)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxNurbsCurve::EType  >(
  ((FbxNurbsCurve *) lpjFbxNurbsCurve)->GetType(
  ));
  return ret;
}
  /// bool  IsPolyline () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxNurbsCurve_IsPolyline(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbsCurve)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxNurbsCurve *) lpjFbxNurbsCurve)->IsPolyline(
  ));
  return ret;
}
  /// bool  IsBezier () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxNurbsCurve_IsBezier(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbsCurve)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxNurbsCurve *) lpjFbxNurbsCurve)->IsBezier(
  ));
  return ret;
}
  /// int  TessellateCurve (FbxArray< FbxVector4 > &pPointArray, int pStep=16)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxNurbsCurve_TessellateCurve(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbsCurve,jobject pPointArray,jint pStep)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxNurbsCurve *) lpjFbxNurbsCurve)->TessellateCurve(
  (FbxArray<  FbxVector4   > &) * _lcvt.j2c_tmpl_FbxArray_obj_ref<jobject,  FbxVector4   >(pPointArray)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pStep)
  ));
  return ret;
}
  /// FbxLine *  TessellateCurve (int pStep=16)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNurbsCurve_TessellateCurve1(JNIEnv * __env, jclass __jc,jlong lpjFbxNurbsCurve,jint pStep)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxLine>(
  ((FbxNurbsCurve *) lpjFbxNurbsCurve)->TessellateCurve(
  ( int  )  _lcvt.j2c<jint, int  >(pStep)
  ));
  return ret;
}
  /// FbxNurbsCurve * Create( FbxGeometry* lpFbxGeometry,  const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNurbsCurve_Create(JNIEnv * __env, jclass __jc,jlong lpFbxGeometry,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxNurbsCurve>(
  FbxNurbsCurve::Create(
  ( FbxGeometry  *)  _lcvt.j2c_object_pt<jlong, FbxGeometry>(lpFbxGeometry)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
