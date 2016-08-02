//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// virtual FbxNodeAttribute::EType  GetAttributeType () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxTrimNurbsSurface_GetAttributeType(JNIEnv * __env, jclass __jc,jlong lpjFbxTrimNurbsSurface)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxNodeAttribute::EType  >(
  ((FbxTrimNurbsSurface *) lpjFbxTrimNurbsSurface)->GetAttributeType(
  ));
  return ret;
}
  /// int  GetTrimRegionCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxTrimNurbsSurface_GetTrimRegionCount(JNIEnv * __env, jclass __jc,jlong lpjFbxTrimNurbsSurface)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxTrimNurbsSurface *) lpjFbxTrimNurbsSurface)->GetTrimRegionCount(
  ));
  return ret;
}
  /// void  BeginTrimRegion ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxTrimNurbsSurface_BeginTrimRegion(JNIEnv * __env, jclass __jc,jlong lpjFbxTrimNurbsSurface)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxTrimNurbsSurface *) lpjFbxTrimNurbsSurface)->BeginTrimRegion(
  );
}
  /// void  EndTrimRegion ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxTrimNurbsSurface_EndTrimRegion(JNIEnv * __env, jclass __jc,jlong lpjFbxTrimNurbsSurface)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxTrimNurbsSurface *) lpjFbxTrimNurbsSurface)->EndTrimRegion(
  );
}
  /// bool  AddBoundary (FbxBoundary *pBoundary)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxTrimNurbsSurface_AddBoundary(JNIEnv * __env, jclass __jc,jlong lpjFbxTrimNurbsSurface,jlong pBoundary)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxTrimNurbsSurface *) lpjFbxTrimNurbsSurface)->AddBoundary(
  ( FbxBoundary  *)  _lcvt.j2c_object_pt<jlong, FbxBoundary>(pBoundary)
  ));
  return ret;
}
  /// FbxBoundary *  GetBoundary (int pIndex, int pRegionIndex=0)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxTrimNurbsSurface_GetBoundary(JNIEnv * __env, jclass __jc,jlong lpjFbxTrimNurbsSurface,jint pIndex,jint pRegionIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxBoundary>(
  ((FbxTrimNurbsSurface *) lpjFbxTrimNurbsSurface)->GetBoundary(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pRegionIndex)
  ));
  return ret;
}
  /// const FbxBoundary *  GetBoundary (int pIndex, int pRegionIndex=0) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxTrimNurbsSurface_GetBoundary1(JNIEnv * __env, jclass __jc,jlong lpjFbxTrimNurbsSurface,jint pIndex,jint pRegionIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxBoundary>(
  ((FbxTrimNurbsSurface *) lpjFbxTrimNurbsSurface)->GetBoundary(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pRegionIndex)
  ));
  return ret;
}
  /// int  GetBoundaryCount (int pRegionIndex=0) const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxTrimNurbsSurface_GetBoundaryCount(JNIEnv * __env, jclass __jc,jlong lpjFbxTrimNurbsSurface,jint pRegionIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxTrimNurbsSurface *) lpjFbxTrimNurbsSurface)->GetBoundaryCount(
  ( int  )  _lcvt.j2c<jint, int  >(pRegionIndex)
  ));
  return ret;
}
  /// void  SetNurbsSurface (const FbxNurbsSurface *pNurbs)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxTrimNurbsSurface_SetNurbsSurface(JNIEnv * __env, jclass __jc,jlong lpjFbxTrimNurbsSurface,jlong pNurbs)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxTrimNurbsSurface *) lpjFbxTrimNurbsSurface)->SetNurbsSurface(
  (const FbxNurbsSurface  *)  _lcvt.j2c_object_pt<jlong, FbxNurbsSurface>(pNurbs)
  );
}
  /// FbxNurbsSurface *  GetNurbsSurface ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxTrimNurbsSurface_GetNurbsSurface(JNIEnv * __env, jclass __jc,jlong lpjFbxTrimNurbsSurface)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxNurbsSurface>(
  ((FbxTrimNurbsSurface *) lpjFbxTrimNurbsSurface)->GetNurbsSurface(
  ));
  return ret;
}
  /// const FbxNurbsSurface *  GetNurbsSurface () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxTrimNurbsSurface_GetNurbsSurface1(JNIEnv * __env, jclass __jc,jlong lpjFbxTrimNurbsSurface)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxNurbsSurface>(
  ((FbxTrimNurbsSurface *) lpjFbxTrimNurbsSurface)->GetNurbsSurface(
  ));
  return ret;
}
  /// void  SetFlipNormals (bool pFlip)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxTrimNurbsSurface_SetFlipNormals(JNIEnv * __env, jclass __jc,jlong lpjFbxTrimNurbsSurface,jboolean pFlip)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxTrimNurbsSurface *) lpjFbxTrimNurbsSurface)->SetFlipNormals(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pFlip)
  );
}
  /// bool  GetFlipNormals () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxTrimNurbsSurface_GetFlipNormals(JNIEnv * __env, jclass __jc,jlong lpjFbxTrimNurbsSurface)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxTrimNurbsSurface *) lpjFbxTrimNurbsSurface)->GetFlipNormals(
  ));
  return ret;
}
  /// virtual int  GetControlPointsCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxTrimNurbsSurface_GetControlPointsCount(JNIEnv * __env, jclass __jc,jlong lpjFbxTrimNurbsSurface)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxTrimNurbsSurface *) lpjFbxTrimNurbsSurface)->GetControlPointsCount(
  ));
  return ret;
}
  /// virtual void  SetControlPointAt (const FbxVector4 &pCtrlPoint, const FbxVector4 &pNormal, int pIndex, bool pI2DSearch=false)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxTrimNurbsSurface_SetControlPointAt(JNIEnv * __env, jclass __jc,jlong lpjFbxTrimNurbsSurface,jobject pCtrlPoint,jobject pNormal,jint pIndex,jboolean pI2DSearch)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxTrimNurbsSurface *) lpjFbxTrimNurbsSurface)->SetControlPointAt(
  (const FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pCtrlPoint)
  ,
  (const FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pNormal)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pI2DSearch)
  );
}
  /// virtual void  SetControlPointAt (const FbxVector4 &pCtrlPoint, int pIndex)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxTrimNurbsSurface_SetControlPointAt1(JNIEnv * __env, jclass __jc,jlong lpjFbxTrimNurbsSurface,jobject pCtrlPoint,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxTrimNurbsSurface *) lpjFbxTrimNurbsSurface)->SetControlPointAt(
  (const FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pCtrlPoint)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  );
}
  /// virtual FbxVector4 *  GetControlPoints (FbxStatus *pStatus=NULL) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxTrimNurbsSurface_GetControlPoints(JNIEnv * __env, jclass __jc,jlong lpjFbxTrimNurbsSurface,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxVector4>(
  ((FbxTrimNurbsSurface *) lpjFbxTrimNurbsSurface)->GetControlPoints(
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// FbxTrimNurbsSurface * Create( FbxGeometry* lpFbxGeometry,  const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxTrimNurbsSurface_Create(JNIEnv * __env, jclass __jc,jlong lpFbxGeometry,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxTrimNurbsSurface>(
  FbxTrimNurbsSurface::Create(
  ( FbxGeometry  *)  _lcvt.j2c_object_pt<jlong, FbxGeometry>(lpFbxGeometry)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
