
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxNode *  MergeMeshes (FbxArray< FbxNode * > &pMeshNodes, const char *pNodeName, FbxScene *pScene)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometryConverter_MergeMeshes(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryConverter,jobject pMeshNodes,jstring pNodeName,jlong pScene)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxNode>(
  ((FbxGeometryConverter *) lpjFbxGeometryConverter)->MergeMeshes(
  (FbxArray<  FbxNode  * > &) * _lcvt.j2c_tmpl_FbxArray_obj_ref<jobject,  FbxNode  * >(pMeshNodes)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pNodeName)
  ,
  ( FbxScene  *)  _lcvt.j2c_object_pt<jlong, FbxScene>(pScene)
  ));
  return ret;
}
  /// bool  Triangulate (FbxScene *pScene, bool pReplace, bool pLegacy=false)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxGeometryConverter_Triangulate(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryConverter,jlong pScene,jboolean pReplace,jboolean pLegacy)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxGeometryConverter *) lpjFbxGeometryConverter)->Triangulate(
  ( FbxScene  *)  _lcvt.j2c_object_pt<jlong, FbxScene>(pScene)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pReplace)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pLegacy)
  ));
  return ret;
}
  /// FbxNodeAttribute *  Triangulate (FbxNodeAttribute *pNodeAttribute, bool pReplace, bool pLegacy=false)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometryConverter_Triangulate1(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryConverter,jlong pNodeAttribute,jboolean pReplace,jboolean pLegacy)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxNodeAttribute>(
  ((FbxGeometryConverter *) lpjFbxGeometryConverter)->Triangulate(
  ( FbxNodeAttribute  *)  _lcvt.j2c_object_pt<jlong, FbxNodeAttribute>(pNodeAttribute)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pReplace)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pLegacy)
  ));
  return ret;
}
  /// bool  ComputeGeometryControlPointsWeightedMapping (FbxGeometry *pSrcGeom, FbxGeometry *pDstGeom, FbxWeightedMapping *pSrcToDstWeightedMapping, bool pSwapUV=false)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxGeometryConverter_ComputeGeometryControlPointsWeightedMapping(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryConverter,jlong pSrcGeom,jlong pDstGeom,jlong pSrcToDstWeightedMapping,jboolean pSwapUV)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxGeometryConverter *) lpjFbxGeometryConverter)->ComputeGeometryControlPointsWeightedMapping(
  ( FbxGeometry  *)  _lcvt.j2c_object_pt<jlong, FbxGeometry>(pSrcGeom)
  ,
  ( FbxGeometry  *)  _lcvt.j2c_object_pt<jlong, FbxGeometry>(pDstGeom)
  ,
  ( FbxWeightedMapping  *)  _lcvt.j2c_object_pt<jlong, FbxWeightedMapping>(pSrcToDstWeightedMapping)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pSwapUV)
  ));
  return ret;
}
  /// FbxNurbs *  ConvertPatchToNurbs (FbxPatch *pPatch)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometryConverter_ConvertPatchToNurbs(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryConverter,jlong pPatch)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxNurbs>(
  ((FbxGeometryConverter *) lpjFbxGeometryConverter)->ConvertPatchToNurbs(
  ( FbxPatch  *)  _lcvt.j2c_object_pt<jlong, FbxPatch>(pPatch)
  ));
  return ret;
}
  /// bool  ConvertPatchToNurbsInPlace (FbxNode *pNode)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxGeometryConverter_ConvertPatchToNurbsInPlace(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryConverter,jlong pNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxGeometryConverter *) lpjFbxGeometryConverter)->ConvertPatchToNurbsInPlace(
  ( FbxNode  *)  _lcvt.j2c_object_pt<jlong, FbxNode>(pNode)
  ));
  return ret;
}
  /// FbxNurbsSurface *  ConvertPatchToNurbsSurface (FbxPatch *pPatch)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometryConverter_ConvertPatchToNurbsSurface(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryConverter,jlong pPatch)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxNurbsSurface>(
  ((FbxGeometryConverter *) lpjFbxGeometryConverter)->ConvertPatchToNurbsSurface(
  ( FbxPatch  *)  _lcvt.j2c_object_pt<jlong, FbxPatch>(pPatch)
  ));
  return ret;
}
  /// bool  ConvertPatchToNurbsSurfaceInPlace (FbxNode *pNode)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxGeometryConverter_ConvertPatchToNurbsSurfaceInPlace(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryConverter,jlong pNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxGeometryConverter *) lpjFbxGeometryConverter)->ConvertPatchToNurbsSurfaceInPlace(
  ( FbxNode  *)  _lcvt.j2c_object_pt<jlong, FbxNode>(pNode)
  ));
  return ret;
}
  /// FbxNurbsSurface *  ConvertNurbsToNurbsSurface (FbxNurbs *pNurbs)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometryConverter_ConvertNurbsToNurbsSurface(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryConverter,jlong pNurbs)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxNurbsSurface>(
  ((FbxGeometryConverter *) lpjFbxGeometryConverter)->ConvertNurbsToNurbsSurface(
  ( FbxNurbs  *)  _lcvt.j2c_object_pt<jlong, FbxNurbs>(pNurbs)
  ));
  return ret;
}
  /// FbxNurbs *  ConvertNurbsSurfaceToNurbs (FbxNurbsSurface *pNurbs)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometryConverter_ConvertNurbsSurfaceToNurbs(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryConverter,jlong pNurbs)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxNurbs>(
  ((FbxGeometryConverter *) lpjFbxGeometryConverter)->ConvertNurbsSurfaceToNurbs(
  ( FbxNurbsSurface  *)  _lcvt.j2c_object_pt<jlong, FbxNurbsSurface>(pNurbs)
  ));
  return ret;
}
  /// bool  ConvertNurbsToNurbsSurfaceInPlace (FbxNode *pNode)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxGeometryConverter_ConvertNurbsToNurbsSurfaceInPlace(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryConverter,jlong pNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxGeometryConverter *) lpjFbxGeometryConverter)->ConvertNurbsToNurbsSurfaceInPlace(
  ( FbxNode  *)  _lcvt.j2c_object_pt<jlong, FbxNode>(pNode)
  ));
  return ret;
}
  /// bool  ConvertNurbsSurfaceToNurbsInPlace (FbxNode *pNode)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxGeometryConverter_ConvertNurbsSurfaceToNurbsInPlace(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryConverter,jlong pNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxGeometryConverter *) lpjFbxGeometryConverter)->ConvertNurbsSurfaceToNurbsInPlace(
  ( FbxNode  *)  _lcvt.j2c_object_pt<jlong, FbxNode>(pNode)
  ));
  return ret;
}
  /// FbxNurbs *  FlipNurbs (FbxNurbs *pNurbs, bool pSwapUV, bool pSwapClusters)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometryConverter_FlipNurbs(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryConverter,jlong pNurbs,jboolean pSwapUV,jboolean pSwapClusters)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxNurbs>(
  ((FbxGeometryConverter *) lpjFbxGeometryConverter)->FlipNurbs(
  ( FbxNurbs  *)  _lcvt.j2c_object_pt<jlong, FbxNurbs>(pNurbs)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pSwapUV)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pSwapClusters)
  ));
  return ret;
}
  /// FbxNurbsSurface *  FlipNurbsSurface (FbxNurbsSurface *pNurbs, bool pSwapUV, bool pSwapClusters)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometryConverter_FlipNurbsSurface(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryConverter,jlong pNurbs,jboolean pSwapUV,jboolean pSwapClusters)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxNurbsSurface>(
  ((FbxGeometryConverter *) lpjFbxGeometryConverter)->FlipNurbsSurface(
  ( FbxNurbsSurface  *)  _lcvt.j2c_object_pt<jlong, FbxNurbsSurface>(pNurbs)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pSwapUV)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pSwapClusters)
  ));
  return ret;
}
  /// bool  EmulateNormalsByPolygonVertex (FbxMesh *pMesh)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxGeometryConverter_EmulateNormalsByPolygonVertex(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryConverter,jlong pMesh)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxGeometryConverter *) lpjFbxGeometryConverter)->EmulateNormalsByPolygonVertex(
  ( FbxMesh  *)  _lcvt.j2c_object_pt<jlong, FbxMesh>(pMesh)
  ));
  return ret;
}
  /// bool  ComputeEdgeSmoothingFromNormals (FbxMesh *pMesh) const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxGeometryConverter_ComputeEdgeSmoothingFromNormals(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryConverter,jlong pMesh)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxGeometryConverter *) lpjFbxGeometryConverter)->ComputeEdgeSmoothingFromNormals(
  ( FbxMesh  *)  _lcvt.j2c_object_pt<jlong, FbxMesh>(pMesh)
  ));
  return ret;
}
  /// bool  ComputePolygonSmoothingFromEdgeSmoothing (FbxMesh *pMesh, int pIndex=0) const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxGeometryConverter_ComputePolygonSmoothingFromEdgeSmoothing(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryConverter,jlong pMesh,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxGeometryConverter *) lpjFbxGeometryConverter)->ComputePolygonSmoothingFromEdgeSmoothing(
  ( FbxMesh  *)  _lcvt.j2c_object_pt<jlong, FbxMesh>(pMesh)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// bool  ComputeEdgeSmoothingFromPolygonSmoothing (FbxMesh *pMesh, int pIndex=0) const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxGeometryConverter_ComputeEdgeSmoothingFromPolygonSmoothing(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryConverter,jlong pMesh,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxGeometryConverter *) lpjFbxGeometryConverter)->ComputeEdgeSmoothingFromPolygonSmoothing(
  ( FbxMesh  *)  _lcvt.j2c_object_pt<jlong, FbxMesh>(pMesh)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// bool  SplitMeshesPerMaterial (FbxScene *pScene, bool pReplace)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxGeometryConverter_SplitMeshesPerMaterial(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryConverter,jlong pScene,jboolean pReplace)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxGeometryConverter *) lpjFbxGeometryConverter)->SplitMeshesPerMaterial(
  ( FbxScene  *)  _lcvt.j2c_object_pt<jlong, FbxScene>(pScene)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pReplace)
  ));
  return ret;
}
  /// bool  SplitMeshPerMaterial (FbxMesh *pMesh, bool pReplace)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxGeometryConverter_SplitMeshPerMaterial(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryConverter,jlong pMesh,jboolean pReplace)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxGeometryConverter *) lpjFbxGeometryConverter)->SplitMeshPerMaterial(
  ( FbxMesh  *)  _lcvt.j2c_object_pt<jlong, FbxMesh>(pMesh)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pReplace)
  ));
  return ret;
}
