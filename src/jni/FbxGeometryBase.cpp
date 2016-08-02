//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// virtual int  MemoryUsage () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxGeometryBase_MemoryUsage(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->MemoryUsage(
  ));
  return ret;
}
  /// virtual void  InitControlPoints (int pCount)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxGeometryBase_InitControlPoints(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase,jint pCount)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxGeometryBase *) lpjFbxGeometryBase)->InitControlPoints(
  ( int  )  _lcvt.j2c<jint, int  >(pCount)
  );
}
  /// void  InitNormals (int pCount=0)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxGeometryBase_InitNormals(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase,jint pCount)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxGeometryBase *) lpjFbxGeometryBase)->InitNormals(
  ( int  )  _lcvt.j2c<jint, int  >(pCount)
  );
}
  /// void  InitNormals (FbxGeometryBase *pSrc)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxGeometryBase_InitNormals1(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase,jlong pSrc)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxGeometryBase *) lpjFbxGeometryBase)->InitNormals(
  ( FbxGeometryBase  *)  _lcvt.j2c_object_pt<jlong, FbxGeometryBase>(pSrc)
  );
}
  /// void  InitTangents (int pCount=0, const int pLayerIndex=0, const char *pName="")
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxGeometryBase_InitTangents(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase,jint pCount,jint pLayerIndex,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxGeometryBase *) lpjFbxGeometryBase)->InitTangents(
  ( int  )  _lcvt.j2c<jint, int  >(pCount)
  ,
  (const int  )  _lcvt.j2c<jint,const int  >(pLayerIndex)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  );
}
  /// void  InitTangents (FbxGeometryBase *pSrc, const int pLayerIndex=0)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxGeometryBase_InitTangents1(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase,jlong pSrc,jint pLayerIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxGeometryBase *) lpjFbxGeometryBase)->InitTangents(
  ( FbxGeometryBase  *)  _lcvt.j2c_object_pt<jlong, FbxGeometryBase>(pSrc)
  ,
  (const int  )  _lcvt.j2c<jint,const int  >(pLayerIndex)
  );
}
  /// void  InitBinormals (int pCount=0, const int pLayerIndex=0, const char *pName="")
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxGeometryBase_InitBinormals(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase,jint pCount,jint pLayerIndex,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxGeometryBase *) lpjFbxGeometryBase)->InitBinormals(
  ( int  )  _lcvt.j2c<jint, int  >(pCount)
  ,
  (const int  )  _lcvt.j2c<jint,const int  >(pLayerIndex)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  );
}
  /// void  InitBinormals (FbxGeometryBase *pSrc, const int pLayerIndex=0)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxGeometryBase_InitBinormals1(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase,jlong pSrc,jint pLayerIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxGeometryBase *) lpjFbxGeometryBase)->InitBinormals(
  ( FbxGeometryBase  *)  _lcvt.j2c_object_pt<jlong, FbxGeometryBase>(pSrc)
  ,
  (const int  )  _lcvt.j2c<jint,const int  >(pLayerIndex)
  );
}
  /// virtual void  SetControlPointAt (const FbxVector4 &pCtrlPoint, const FbxVector4 &pNormal, int pIndex, bool pI2DSearch=false)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxGeometryBase_SetControlPointAt(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase,jobject pCtrlPoint,jobject pNormal,jint pIndex,jboolean pI2DSearch)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxGeometryBase *) lpjFbxGeometryBase)->SetControlPointAt(
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
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxGeometryBase_SetControlPointAt1(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase,jobject pCtrlPoint,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxGeometryBase *) lpjFbxGeometryBase)->SetControlPointAt(
  (const FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pCtrlPoint)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  );
}
  /// virtual FbxVector4  GetControlPointAt (int pIndex) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometryBase_GetControlPointAt(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxVector4>(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->GetControlPointAt(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// virtual void  SetControlPointNormalAt (const FbxVector4 &pNormal, int pIndex, bool pI2DSearch=false)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxGeometryBase_SetControlPointNormalAt(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase,jobject pNormal,jint pIndex,jboolean pI2DSearch)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxGeometryBase *) lpjFbxGeometryBase)->SetControlPointNormalAt(
  (const FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pNormal)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pI2DSearch)
  );
}
  /// virtual int  GetControlPointsCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxGeometryBase_GetControlPointsCount(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->GetControlPointsCount(
  ));
  return ret;
}
  /// virtual FbxVector4 *  GetControlPoints (FbxStatus *pStatus=NULL) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometryBase_GetControlPoints(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxVector4>(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->GetControlPoints(
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// virtual void  SetControlPointCount (int pCount)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxGeometryBase_SetControlPointCount(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase,jint pCount)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxGeometryBase *) lpjFbxGeometryBase)->SetControlPointCount(
  ( int  )  _lcvt.j2c<jint, int  >(pCount)
  );
}
  /// FbxGeometryElementNormal *  CreateElementNormal ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometryBase_CreateElementNormal(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxGeometryElementNormal>(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->CreateElementNormal(
  ));
  return ret;
}
  /// bool  RemoveElementNormal (FbxGeometryElementNormal *pElementNormal)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxGeometryBase_RemoveElementNormal(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase,jlong pElementNormal)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->RemoveElementNormal(
  ( FbxGeometryElementNormal  *)  _lcvt.j2c_object_pt<jlong, FbxGeometryElementNormal>(pElementNormal)
  ));
  return ret;
}
  /// FbxGeometryElementNormal *  GetElementNormal (int pIndex=0)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometryBase_GetElementNormal(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxGeometryElementNormal>(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->GetElementNormal(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// const FbxGeometryElementNormal *  GetElementNormal (int pIndex=0) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometryBase_GetElementNormal1(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxGeometryElementNormal>(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->GetElementNormal(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// int  GetElementNormalCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxGeometryBase_GetElementNormalCount(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->GetElementNormalCount(
  ));
  return ret;
}
  /// FbxGeometryElementBinormal *  CreateElementBinormal ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometryBase_CreateElementBinormal(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxGeometryElementBinormal>(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->CreateElementBinormal(
  ));
  return ret;
}
  /// bool  RemoveElementBinormal (FbxGeometryElementBinormal *pElementBinormal)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxGeometryBase_RemoveElementBinormal(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase,jlong pElementBinormal)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->RemoveElementBinormal(
  ( FbxGeometryElementBinormal  *)  _lcvt.j2c_object_pt<jlong, FbxGeometryElementBinormal>(pElementBinormal)
  ));
  return ret;
}
  /// FbxGeometryElementBinormal *  GetElementBinormal (int pIndex=0)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometryBase_GetElementBinormal(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxGeometryElementBinormal>(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->GetElementBinormal(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// const FbxGeometryElementBinormal *  GetElementBinormal (int pIndex=0) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometryBase_GetElementBinormal1(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxGeometryElementBinormal>(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->GetElementBinormal(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// int  GetElementBinormalCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxGeometryBase_GetElementBinormalCount(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->GetElementBinormalCount(
  ));
  return ret;
}
  /// FbxGeometryElementTangent *  CreateElementTangent ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometryBase_CreateElementTangent(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxGeometryElementTangent>(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->CreateElementTangent(
  ));
  return ret;
}
  /// bool  RemoveElementTangent (FbxGeometryElementTangent *pElementTangent)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxGeometryBase_RemoveElementTangent(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase,jlong pElementTangent)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->RemoveElementTangent(
  ( FbxGeometryElementTangent  *)  _lcvt.j2c_object_pt<jlong, FbxGeometryElementTangent>(pElementTangent)
  ));
  return ret;
}
  /// FbxGeometryElementTangent *  GetElementTangent (int pIndex=0)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometryBase_GetElementTangent(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxGeometryElementTangent>(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->GetElementTangent(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// const FbxGeometryElementTangent *  GetElementTangent (int pIndex=0) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometryBase_GetElementTangent1(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxGeometryElementTangent>(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->GetElementTangent(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// int  GetElementTangentCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxGeometryBase_GetElementTangentCount(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->GetElementTangentCount(
  ));
  return ret;
}
  /// FbxGeometryElementMaterial *  CreateElementMaterial ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometryBase_CreateElementMaterial(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxGeometryElementMaterial>(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->CreateElementMaterial(
  ));
  return ret;
}
  /// bool  RemoveElementMaterial (FbxGeometryElementMaterial *pElementMaterial)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxGeometryBase_RemoveElementMaterial(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase,jlong pElementMaterial)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->RemoveElementMaterial(
  ( FbxGeometryElementMaterial  *)  _lcvt.j2c_object_pt<jlong, FbxGeometryElementMaterial>(pElementMaterial)
  ));
  return ret;
}
  /// FbxGeometryElementMaterial *  GetElementMaterial (int pIndex=0)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometryBase_GetElementMaterial(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxGeometryElementMaterial>(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->GetElementMaterial(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// const FbxGeometryElementMaterial *  GetElementMaterial (int pIndex=0) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometryBase_GetElementMaterial1(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxGeometryElementMaterial>(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->GetElementMaterial(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// int  GetElementMaterialCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxGeometryBase_GetElementMaterialCount(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->GetElementMaterialCount(
  ));
  return ret;
}
  /// FbxGeometryElementPolygonGroup *  CreateElementPolygonGroup ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometryBase_CreateElementPolygonGroup(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxGeometryElementPolygonGroup>(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->CreateElementPolygonGroup(
  ));
  return ret;
}
  /// bool  RemoveElementPolygonGroup (FbxGeometryElementPolygonGroup *pElementPolygonGroup)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxGeometryBase_RemoveElementPolygonGroup(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase,jlong pElementPolygonGroup)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->RemoveElementPolygonGroup(
  ( FbxGeometryElementPolygonGroup  *)  _lcvt.j2c_object_pt<jlong, FbxGeometryElementPolygonGroup>(pElementPolygonGroup)
  ));
  return ret;
}
  /// FbxGeometryElementPolygonGroup *  GetElementPolygonGroup (int pIndex=0)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometryBase_GetElementPolygonGroup(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxGeometryElementPolygonGroup>(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->GetElementPolygonGroup(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// FbxGeometryElementPolygonGroup *  GetElementPolygonGroup (int pIndex=0) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometryBase_GetElementPolygonGroup1(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxGeometryElementPolygonGroup>(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->GetElementPolygonGroup(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// int  GetElementPolygonGroupCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxGeometryBase_GetElementPolygonGroupCount(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->GetElementPolygonGroupCount(
  ));
  return ret;
}
  /// FbxGeometryElementVertexColor *  CreateElementVertexColor ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometryBase_CreateElementVertexColor(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxGeometryElementVertexColor>(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->CreateElementVertexColor(
  ));
  return ret;
}
  /// bool  RemoveElementVertexColor (FbxGeometryElementVertexColor *pElementVertexColor)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxGeometryBase_RemoveElementVertexColor(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase,jlong pElementVertexColor)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->RemoveElementVertexColor(
  ( FbxGeometryElementVertexColor  *)  _lcvt.j2c_object_pt<jlong, FbxGeometryElementVertexColor>(pElementVertexColor)
  ));
  return ret;
}
  /// FbxGeometryElementVertexColor *  GetElementVertexColor (int pIndex=0)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometryBase_GetElementVertexColor(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxGeometryElementVertexColor>(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->GetElementVertexColor(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// FbxGeometryElementVertexColor *   GetElementVertexColor (int pIndex=0) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometryBase_GetElementVertexColor1(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxGeometryElementVertexColor>(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->GetElementVertexColor(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// int  GetElementVertexColorCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxGeometryBase_GetElementVertexColorCount(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->GetElementVertexColorCount(
  ));
  return ret;
}
  /// FbxGeometryElementSmoothing *  CreateElementSmoothing ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometryBase_CreateElementSmoothing(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxGeometryElementSmoothing>(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->CreateElementSmoothing(
  ));
  return ret;
}
  /// bool  RemoveElementSmoothing (FbxGeometryElementSmoothing *pElementSmoothing)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxGeometryBase_RemoveElementSmoothing(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase,jlong pElementSmoothing)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->RemoveElementSmoothing(
  ( FbxGeometryElementSmoothing  *)  _lcvt.j2c_object_pt<jlong, FbxGeometryElementSmoothing>(pElementSmoothing)
  ));
  return ret;
}
  /// FbxGeometryElementSmoothing *  GetElementSmoothing (int pIndex=0)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometryBase_GetElementSmoothing(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxGeometryElementSmoothing>(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->GetElementSmoothing(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// const FbxGeometryElementSmoothing *  GetElementSmoothing (int pIndex=0) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometryBase_GetElementSmoothing1(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxGeometryElementSmoothing>(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->GetElementSmoothing(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// int  GetElementSmoothingCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxGeometryBase_GetElementSmoothingCount(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->GetElementSmoothingCount(
  ));
  return ret;
}
  /// FbxGeometryElementCrease *  CreateElementVertexCrease ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometryBase_CreateElementVertexCrease(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxGeometryElementCrease>(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->CreateElementVertexCrease(
  ));
  return ret;
}
  /// bool  RemoveElementVertexCrease (FbxGeometryElementCrease *pElementCrease)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxGeometryBase_RemoveElementVertexCrease(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase,jlong pElementCrease)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->RemoveElementVertexCrease(
  ( FbxGeometryElementCrease  *)  _lcvt.j2c_object_pt<jlong, FbxGeometryElementCrease>(pElementCrease)
  ));
  return ret;
}
  /// FbxGeometryElementCrease *  GetElementVertexCrease (int pIndex=0)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometryBase_GetElementVertexCrease(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxGeometryElementCrease>(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->GetElementVertexCrease(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// const FbxGeometryElementCrease *  GetElementVertexCrease (int pIndex=0) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometryBase_GetElementVertexCrease1(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxGeometryElementCrease>(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->GetElementVertexCrease(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// int  GetElementVertexCreaseCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxGeometryBase_GetElementVertexCreaseCount(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->GetElementVertexCreaseCount(
  ));
  return ret;
}
  /// FbxGeometryElementCrease *  CreateElementEdgeCrease ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometryBase_CreateElementEdgeCrease(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxGeometryElementCrease>(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->CreateElementEdgeCrease(
  ));
  return ret;
}
  /// bool  RemoveElementEdgeCrease (FbxGeometryElementCrease *pElementCrease)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxGeometryBase_RemoveElementEdgeCrease(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase,jlong pElementCrease)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->RemoveElementEdgeCrease(
  ( FbxGeometryElementCrease  *)  _lcvt.j2c_object_pt<jlong, FbxGeometryElementCrease>(pElementCrease)
  ));
  return ret;
}
  /// FbxGeometryElementCrease *  GetElementEdgeCrease (int pIndex=0)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometryBase_GetElementEdgeCrease(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxGeometryElementCrease>(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->GetElementEdgeCrease(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// const FbxGeometryElementCrease *  GetElementEdgeCrease (int pIndex=0) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometryBase_GetElementEdgeCrease1(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxGeometryElementCrease>(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->GetElementEdgeCrease(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// int  GetElementEdgeCreaseCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxGeometryBase_GetElementEdgeCreaseCount(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->GetElementEdgeCreaseCount(
  ));
  return ret;
}
  /// FbxGeometryElementHole *  CreateElementHole ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometryBase_CreateElementHole(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxGeometryElementHole>(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->CreateElementHole(
  ));
  return ret;
}
  /// bool  RemoveElementHole (FbxGeometryElementHole *pElementHole)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxGeometryBase_RemoveElementHole(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase,jlong pElementHole)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->RemoveElementHole(
  ( FbxGeometryElementHole  *)  _lcvt.j2c_object_pt<jlong, FbxGeometryElementHole>(pElementHole)
  ));
  return ret;
}
  /// FbxGeometryElementHole *  GetElementHole (int pIndex=0)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometryBase_GetElementHole(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxGeometryElementHole>(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->GetElementHole(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// const FbxGeometryElementHole *  GetElementHole (int pIndex=0) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometryBase_GetElementHole1(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxGeometryElementHole>(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->GetElementHole(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// int  GetElementHoleCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxGeometryBase_GetElementHoleCount(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->GetElementHoleCount(
  ));
  return ret;
}
  /// FbxGeometryElementUserData *  CreateElementUserData ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometryBase_CreateElementUserData(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxGeometryElementUserData>(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->CreateElementUserData(
  ));
  return ret;
}
  /// bool  RemoveElementUserData (FbxGeometryElementUserData *pElementUserData)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxGeometryBase_RemoveElementUserData(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase,jlong pElementUserData)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->RemoveElementUserData(
  ( FbxGeometryElementUserData  *)  _lcvt.j2c_object_pt<jlong, FbxGeometryElementUserData>(pElementUserData)
  ));
  return ret;
}
  /// FbxGeometryElementUserData *  GetElementUserData (int pIndex=0)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometryBase_GetElementUserData(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxGeometryElementUserData>(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->GetElementUserData(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// const FbxGeometryElementUserData *  GetElementUserData (int pIndex=0) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometryBase_GetElementUserData1(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxGeometryElementUserData>(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->GetElementUserData(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// int  GetElementUserDataCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxGeometryBase_GetElementUserDataCount(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->GetElementUserDataCount(
  ));
  return ret;
}
  /// FbxGeometryElementVisibility *  CreateElementVisibility ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometryBase_CreateElementVisibility(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxGeometryElementVisibility>(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->CreateElementVisibility(
  ));
  return ret;
}
  /// bool  RemoveElementVisibility (FbxGeometryElementVisibility *pElementVisibility)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxGeometryBase_RemoveElementVisibility(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase,jlong pElementVisibility)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->RemoveElementVisibility(
  ( FbxGeometryElementVisibility  *)  _lcvt.j2c_object_pt<jlong, FbxGeometryElementVisibility>(pElementVisibility)
  ));
  return ret;
}
  /// FbxGeometryElementVisibility *  GetElementVisibility (int pIndex=0)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometryBase_GetElementVisibility(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxGeometryElementVisibility>(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->GetElementVisibility(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// FbxGeometryElementVisibility *    GetElementVisibility (int pIndex=0) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometryBase_GetElementVisibility1(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxGeometryElementVisibility>(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->GetElementVisibility(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// int  GetElementVisibilityCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxGeometryBase_GetElementVisibilityCount(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->GetElementVisibilityCount(
  ));
  return ret;
}
  /// FbxGeometryElementUV *  CreateElementUV (const char *pUVSetName)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometryBase_CreateElementUV(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase,jstring pUVSetName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxGeometryElementUV>(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->CreateElementUV(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pUVSetName)
  ));
  return ret;
}
  /// bool  RemoveElementUV (FbxGeometryElementUV *pElementUV)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxGeometryBase_RemoveElementUV(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase,jlong pElementUV)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->RemoveElementUV(
  ( FbxGeometryElementUV  *)  _lcvt.j2c_object_pt<jlong, FbxGeometryElementUV>(pElementUV)
  ));
  return ret;
}
  /// FbxGeometryElementUV *  GetElementUV (int pIndex=0)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometryBase_GetElementUV(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxGeometryElementUV>(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->GetElementUV(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// const FbxGeometryElementUV *  GetElementUV (int pIndex=0) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometryBase_GetElementUV1(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxGeometryElementUV>(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->GetElementUV(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// int  GetElementUVCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxGeometryBase_GetElementUVCount(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->GetElementUVCount(
  ));
  return ret;
}
  /// FbxGeometryElementUV *  GetElementUV (const char *pUVSetName)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometryBase_GetElementUV2(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase,jstring pUVSetName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxGeometryElementUV>(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->GetElementUV(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pUVSetName)
  ));
  return ret;
}
  /// const FbxGeometryElementUV *  GetElementUV (const char *pUVSetName) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometryBase_GetElementUV3(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase,jstring pUVSetName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxGeometryElementUV>(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->GetElementUV(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pUVSetName)
  ));
  return ret;
}
  /// void  GetUVSetNames (FbxStringList &pUVSetNameList) const
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxGeometryBase_GetUVSetNames(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase,jobject pUVSetNameList)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxGeometryBase *) lpjFbxGeometryBase)->GetUVSetNames(
  ( FbxStringList  &) * _lcvt.j2c_object_ref<jobject,FbxStringList >(pUVSetNameList)
  );
}
  /// virtual bool  ContentWriteTo (FbxStream &pStream) const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxGeometryBase_ContentWriteTo(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase,jobject pStream)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->ContentWriteTo(
  ( FbxStream  &) * _lcvt.j2c_object_ref<jobject,FbxStream >(pStream)
  ));
  return ret;
}
  /// virtual bool  ContentReadFrom (const FbxStream &pStream)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxGeometryBase_ContentReadFrom(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase,jobject pStream)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->ContentReadFrom(
  (const FbxStream  &) * _lcvt.j2c_object_ref<jobject,FbxStream >(pStream)
  ));
  return ret;
}
  /// void  ComputeBBox ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxGeometryBase_ComputeBBox(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxGeometryBase *) lpjFbxGeometryBase)->ComputeBBox(
  );
}
  /// FbxPropertyT< FbxBool >  PrimaryVisibility
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxGeometryBase_mepSetPrimaryVisibility(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxGeometryBase *) lpjFbxGeometryBase)->PrimaryVisibility.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  PrimaryVisibility
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxGeometryBase_mepGetPrimaryVisibility(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->PrimaryVisibility.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  PrimaryVisibility
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometryBase_mptGetPrimaryVisibility(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxGeometryBase *) lpjFbxGeometryBase)->PrimaryVisibility
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  CastShadow
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxGeometryBase_mepSetCastShadow(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxGeometryBase *) lpjFbxGeometryBase)->CastShadow.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  CastShadow
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxGeometryBase_mepGetCastShadow(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->CastShadow.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  CastShadow
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometryBase_mptGetCastShadow(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxGeometryBase *) lpjFbxGeometryBase)->CastShadow
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  ReceiveShadow
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxGeometryBase_mepSetReceiveShadow(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxGeometryBase *) lpjFbxGeometryBase)->ReceiveShadow.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  ReceiveShadow
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxGeometryBase_mepGetReceiveShadow(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->ReceiveShadow.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  ReceiveShadow
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometryBase_mptGetReceiveShadow(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxGeometryBase *) lpjFbxGeometryBase)->ReceiveShadow
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  BBoxMin
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxGeometryBase_mepSetBBoxMin(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase,jlong lpFbxDouble3)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxGeometryBase *) lpjFbxGeometryBase)->BBoxMin.Set(
  ( FbxDouble3  )  _lcvt.j2c_object<jlong,FbxDouble3 >(lpFbxDouble3)
  );
}
  /// FbxPropertyT< FbxDouble3 >  BBoxMin
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometryBase_mepGetBBoxMin(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxDouble3>(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->BBoxMin.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  BBoxMin
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometryBase_mptGetBBoxMin(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble3   >(
   (&((FbxGeometryBase *) lpjFbxGeometryBase)->BBoxMin
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  BBoxMax
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxGeometryBase_mepSetBBoxMax(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase,jlong lpFbxDouble3)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxGeometryBase *) lpjFbxGeometryBase)->BBoxMax.Set(
  ( FbxDouble3  )  _lcvt.j2c_object<jlong,FbxDouble3 >(lpFbxDouble3)
  );
}
  /// FbxPropertyT< FbxDouble3 >  BBoxMax
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometryBase_mepGetBBoxMax(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxDouble3>(
  ((FbxGeometryBase *) lpjFbxGeometryBase)->BBoxMax.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  BBoxMax
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometryBase_mptGetBBoxMax(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryBase)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble3   >(
   (&((FbxGeometryBase *) lpjFbxGeometryBase)->BBoxMax
  ));
  return ret;
}
  /// FbxGeometryBase * Create( FbxLayerContainer* lpFbxLayerContainer,  const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometryBase_Create(JNIEnv * __env, jclass __jc,jlong lpFbxLayerContainer,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxGeometryBase>(
  FbxGeometryBase::Create(
  ( FbxLayerContainer  *)  _lcvt.j2c_object_pt<jlong, FbxLayerContainer>(lpFbxLayerContainer)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
