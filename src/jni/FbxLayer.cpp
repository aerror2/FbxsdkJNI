//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxLayerElementNormal *  GetNormals ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLayer_GetNormals(JNIEnv * __env, jclass __jc,jlong lpjFbxLayer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxLayerElementNormal>(
  ((FbxLayer *) lpjFbxLayer)->GetNormals(
  ));
  return ret;
}
  /// const FbxLayerElementNormal *  GetNormals () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLayer_GetNormals1(JNIEnv * __env, jclass __jc,jlong lpjFbxLayer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxLayerElementNormal>(
  ((FbxLayer *) lpjFbxLayer)->GetNormals(
  ));
  return ret;
}
  /// FbxLayerElementTangent *  GetTangents ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLayer_GetTangents(JNIEnv * __env, jclass __jc,jlong lpjFbxLayer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxLayerElementTangent>(
  ((FbxLayer *) lpjFbxLayer)->GetTangents(
  ));
  return ret;
}
  /// const FbxLayerElementTangent *  GetTangents () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLayer_GetTangents1(JNIEnv * __env, jclass __jc,jlong lpjFbxLayer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxLayerElementTangent>(
  ((FbxLayer *) lpjFbxLayer)->GetTangents(
  ));
  return ret;
}
  /// FbxLayerElementBinormal *  GetBinormals ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLayer_GetBinormals(JNIEnv * __env, jclass __jc,jlong lpjFbxLayer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxLayerElementBinormal>(
  ((FbxLayer *) lpjFbxLayer)->GetBinormals(
  ));
  return ret;
}
  /// const FbxLayerElementBinormal *  GetBinormals () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLayer_GetBinormals1(JNIEnv * __env, jclass __jc,jlong lpjFbxLayer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxLayerElementBinormal>(
  ((FbxLayer *) lpjFbxLayer)->GetBinormals(
  ));
  return ret;
}
  /// FbxLayerElementMaterial *  GetMaterials ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLayer_GetMaterials(JNIEnv * __env, jclass __jc,jlong lpjFbxLayer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxLayerElementMaterial>(
  ((FbxLayer *) lpjFbxLayer)->GetMaterials(
  ));
  return ret;
}
  /// const FbxLayerElementMaterial *  GetMaterials () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLayer_GetMaterials1(JNIEnv * __env, jclass __jc,jlong lpjFbxLayer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxLayerElementMaterial>(
  ((FbxLayer *) lpjFbxLayer)->GetMaterials(
  ));
  return ret;
}
  /// FbxLayerElementPolygonGroup *  GetPolygonGroups ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLayer_GetPolygonGroups(JNIEnv * __env, jclass __jc,jlong lpjFbxLayer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxLayerElementPolygonGroup>(
  ((FbxLayer *) lpjFbxLayer)->GetPolygonGroups(
  ));
  return ret;
}
  /// const FbxLayerElementPolygonGroup *  GetPolygonGroups () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLayer_GetPolygonGroups1(JNIEnv * __env, jclass __jc,jlong lpjFbxLayer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxLayerElementPolygonGroup>(
  ((FbxLayer *) lpjFbxLayer)->GetPolygonGroups(
  ));
  return ret;
}
  /// FbxLayerElementUV *  GetUVs (FbxLayerElement::EType pTypeIdentifier=FbxLayerElement::eTextureDiffuse)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLayer_GetUVs(JNIEnv * __env, jclass __jc,jlong lpjFbxLayer,jint pTypeIdentifier)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxLayerElementUV>(
  ((FbxLayer *) lpjFbxLayer)->GetUVs(
  ( FbxLayerElement::EType  )  _lcvt.j2c<jint,FbxLayerElement::EType >(pTypeIdentifier)
  ));
  return ret;
}
  /// const FbxLayerElementUV *  GetUVs (FbxLayerElement::EType pTypeIdentifier=FbxLayerElement::eTextureDiffuse) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLayer_GetUVs1(JNIEnv * __env, jclass __jc,jlong lpjFbxLayer,jint pTypeIdentifier)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxLayerElementUV>(
  ((FbxLayer *) lpjFbxLayer)->GetUVs(
  ( FbxLayerElement::EType  )  _lcvt.j2c<jint,FbxLayerElement::EType >(pTypeIdentifier)
  ));
  return ret;
}
  /// int  GetUVSetCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLayer_GetUVSetCount(JNIEnv * __env, jclass __jc,jlong lpjFbxLayer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxLayer *) lpjFbxLayer)->GetUVSetCount(
  ));
  return ret;
}
  /// FbxArray< FbxLayerElement::EType >  GetUVSetChannels () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLayer_GetUVSetChannels(JNIEnv * __env, jclass __jc,jlong lpjFbxLayer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxArray<jlong,  FbxLayerElement::EType   >(
  ((FbxLayer *) lpjFbxLayer)->GetUVSetChannels(
  ));
  return ret;
}
  /// FbxLayerElementVertexColor *  GetVertexColors ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLayer_GetVertexColors(JNIEnv * __env, jclass __jc,jlong lpjFbxLayer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxLayerElementVertexColor>(
  ((FbxLayer *) lpjFbxLayer)->GetVertexColors(
  ));
  return ret;
}
  /// const FbxLayerElementVertexColor *  GetVertexColors () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLayer_GetVertexColors1(JNIEnv * __env, jclass __jc,jlong lpjFbxLayer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxLayerElementVertexColor>(
  ((FbxLayer *) lpjFbxLayer)->GetVertexColors(
  ));
  return ret;
}
  /// FbxLayerElementSmoothing *  GetSmoothing ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLayer_GetSmoothing(JNIEnv * __env, jclass __jc,jlong lpjFbxLayer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxLayerElementSmoothing>(
  ((FbxLayer *) lpjFbxLayer)->GetSmoothing(
  ));
  return ret;
}
  /// const FbxLayerElementSmoothing *  GetSmoothing () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLayer_GetSmoothing1(JNIEnv * __env, jclass __jc,jlong lpjFbxLayer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxLayerElementSmoothing>(
  ((FbxLayer *) lpjFbxLayer)->GetSmoothing(
  ));
  return ret;
}
  /// FbxLayerElementCrease *  GetVertexCrease ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLayer_GetVertexCrease(JNIEnv * __env, jclass __jc,jlong lpjFbxLayer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxLayerElementCrease>(
  ((FbxLayer *) lpjFbxLayer)->GetVertexCrease(
  ));
  return ret;
}
  /// const FbxLayerElementCrease *  GetVertexCrease () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLayer_GetVertexCrease1(JNIEnv * __env, jclass __jc,jlong lpjFbxLayer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxLayerElementCrease>(
  ((FbxLayer *) lpjFbxLayer)->GetVertexCrease(
  ));
  return ret;
}
  /// FbxLayerElementCrease *  GetEdgeCrease ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLayer_GetEdgeCrease(JNIEnv * __env, jclass __jc,jlong lpjFbxLayer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxLayerElementCrease>(
  ((FbxLayer *) lpjFbxLayer)->GetEdgeCrease(
  ));
  return ret;
}
  /// const FbxLayerElementCrease *  GetEdgeCrease () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLayer_GetEdgeCrease1(JNIEnv * __env, jclass __jc,jlong lpjFbxLayer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxLayerElementCrease>(
  ((FbxLayer *) lpjFbxLayer)->GetEdgeCrease(
  ));
  return ret;
}
  /// FbxLayerElementHole *  GetHole ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLayer_GetHole(JNIEnv * __env, jclass __jc,jlong lpjFbxLayer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxLayerElementHole>(
  ((FbxLayer *) lpjFbxLayer)->GetHole(
  ));
  return ret;
}
  /// const FbxLayerElementHole *  GetHole () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLayer_GetHole1(JNIEnv * __env, jclass __jc,jlong lpjFbxLayer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxLayerElementHole>(
  ((FbxLayer *) lpjFbxLayer)->GetHole(
  ));
  return ret;
}
  /// FbxLayerElementUserData *  GetUserData ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLayer_GetUserData(JNIEnv * __env, jclass __jc,jlong lpjFbxLayer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxLayerElementUserData>(
  ((FbxLayer *) lpjFbxLayer)->GetUserData(
  ));
  return ret;
}
  /// const FbxLayerElementUserData *  GetUserData () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLayer_GetUserData1(JNIEnv * __env, jclass __jc,jlong lpjFbxLayer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxLayerElementUserData>(
  ((FbxLayer *) lpjFbxLayer)->GetUserData(
  ));
  return ret;
}
  /// FbxLayerElementVisibility *  GetVisibility ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLayer_GetVisibility(JNIEnv * __env, jclass __jc,jlong lpjFbxLayer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxLayerElementVisibility>(
  ((FbxLayer *) lpjFbxLayer)->GetVisibility(
  ));
  return ret;
}
  /// const FbxLayerElementVisibility *  GetVisibility () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLayer_GetVisibility1(JNIEnv * __env, jclass __jc,jlong lpjFbxLayer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxLayerElementVisibility>(
  ((FbxLayer *) lpjFbxLayer)->GetVisibility(
  ));
  return ret;
}
  /// FbxLayerElementTexture *  GetTextures (FbxLayerElement::EType pType)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLayer_GetTextures(JNIEnv * __env, jclass __jc,jlong lpjFbxLayer,jint pType)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxLayerElementTexture>(
  ((FbxLayer *) lpjFbxLayer)->GetTextures(
  ( FbxLayerElement::EType  )  _lcvt.j2c<jint,FbxLayerElement::EType >(pType)
  ));
  return ret;
}
  /// const FbxLayerElementTexture *  GetTextures (FbxLayerElement::EType pType) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLayer_GetTextures1(JNIEnv * __env, jclass __jc,jlong lpjFbxLayer,jint pType)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxLayerElementTexture>(
  ((FbxLayer *) lpjFbxLayer)->GetTextures(
  ( FbxLayerElement::EType  )  _lcvt.j2c<jint,FbxLayerElement::EType >(pType)
  ));
  return ret;
}
  /// void  SetTextures (FbxLayerElement::EType pType, FbxLayerElementTexture *pTextures)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLayer_SetTextures(JNIEnv * __env, jclass __jc,jlong lpjFbxLayer,jint pType,jlong pTextures)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLayer *) lpjFbxLayer)->SetTextures(
  ( FbxLayerElement::EType  )  _lcvt.j2c<jint,FbxLayerElement::EType >(pType)
  ,
  ( FbxLayerElementTexture  *)  _lcvt.j2c_object_pt<jlong, FbxLayerElementTexture>(pTextures)
  );
}
  /// FbxLayerElement *  GetLayerElementOfType (FbxLayerElement::EType pType, bool pIsUV=false)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLayer_GetLayerElementOfType(JNIEnv * __env, jclass __jc,jlong lpjFbxLayer,jint pType,jboolean pIsUV)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxLayerElement>(
  ((FbxLayer *) lpjFbxLayer)->GetLayerElementOfType(
  ( FbxLayerElement::EType  )  _lcvt.j2c<jint,FbxLayerElement::EType >(pType)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pIsUV)
  ));
  return ret;
}
  /// const FbxLayerElement *  GetLayerElementOfType (FbxLayerElement::EType pType, bool pIsUV=false) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLayer_GetLayerElementOfType1(JNIEnv * __env, jclass __jc,jlong lpjFbxLayer,jint pType,jboolean pIsUV)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxLayerElement>(
  ((FbxLayer *) lpjFbxLayer)->GetLayerElementOfType(
  ( FbxLayerElement::EType  )  _lcvt.j2c<jint,FbxLayerElement::EType >(pType)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pIsUV)
  ));
  return ret;
}
  /// void  SetNormals (FbxLayerElementNormal *pNormals)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLayer_SetNormals(JNIEnv * __env, jclass __jc,jlong lpjFbxLayer,jlong pNormals)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLayer *) lpjFbxLayer)->SetNormals(
  ( FbxLayerElementNormal  *)  _lcvt.j2c_object_pt<jlong, FbxLayerElementNormal>(pNormals)
  );
}
  /// void  SetBinormals (FbxLayerElementBinormal *pBinormals)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLayer_SetBinormals(JNIEnv * __env, jclass __jc,jlong lpjFbxLayer,jlong pBinormals)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLayer *) lpjFbxLayer)->SetBinormals(
  ( FbxLayerElementBinormal  *)  _lcvt.j2c_object_pt<jlong, FbxLayerElementBinormal>(pBinormals)
  );
}
  /// void  SetTangents (FbxLayerElementTangent *pTangents)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLayer_SetTangents(JNIEnv * __env, jclass __jc,jlong lpjFbxLayer,jlong pTangents)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLayer *) lpjFbxLayer)->SetTangents(
  ( FbxLayerElementTangent  *)  _lcvt.j2c_object_pt<jlong, FbxLayerElementTangent>(pTangents)
  );
}
  /// void  SetMaterials (FbxLayerElementMaterial *pMaterials)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLayer_SetMaterials(JNIEnv * __env, jclass __jc,jlong lpjFbxLayer,jlong pMaterials)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLayer *) lpjFbxLayer)->SetMaterials(
  ( FbxLayerElementMaterial  *)  _lcvt.j2c_object_pt<jlong, FbxLayerElementMaterial>(pMaterials)
  );
}
  /// void  SetPolygonGroups (FbxLayerElementPolygonGroup *pPolygonGroups)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLayer_SetPolygonGroups(JNIEnv * __env, jclass __jc,jlong lpjFbxLayer,jlong pPolygonGroups)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLayer *) lpjFbxLayer)->SetPolygonGroups(
  ( FbxLayerElementPolygonGroup  *)  _lcvt.j2c_object_pt<jlong, FbxLayerElementPolygonGroup>(pPolygonGroups)
  );
}
  /// void  SetUVs (FbxLayerElementUV *pUVs, FbxLayerElement::EType pTypeIdentifier=FbxLayerElement::eTextureDiffuse)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLayer_SetUVs(JNIEnv * __env, jclass __jc,jlong lpjFbxLayer,jlong pUVs,jint pTypeIdentifier)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLayer *) lpjFbxLayer)->SetUVs(
  ( FbxLayerElementUV  *)  _lcvt.j2c_object_pt<jlong, FbxLayerElementUV>(pUVs)
  ,
  ( FbxLayerElement::EType  )  _lcvt.j2c<jint,FbxLayerElement::EType >(pTypeIdentifier)
  );
}
  /// void  SetVertexColors (FbxLayerElementVertexColor *pVertexColors)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLayer_SetVertexColors(JNIEnv * __env, jclass __jc,jlong lpjFbxLayer,jlong pVertexColors)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLayer *) lpjFbxLayer)->SetVertexColors(
  ( FbxLayerElementVertexColor  *)  _lcvt.j2c_object_pt<jlong, FbxLayerElementVertexColor>(pVertexColors)
  );
}
  /// void  SetSmoothing (FbxLayerElementSmoothing *pSmoothing)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLayer_SetSmoothing(JNIEnv * __env, jclass __jc,jlong lpjFbxLayer,jlong pSmoothing)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLayer *) lpjFbxLayer)->SetSmoothing(
  ( FbxLayerElementSmoothing  *)  _lcvt.j2c_object_pt<jlong, FbxLayerElementSmoothing>(pSmoothing)
  );
}
  /// void  SetVertexCrease (FbxLayerElementCrease *pCrease)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLayer_SetVertexCrease(JNIEnv * __env, jclass __jc,jlong lpjFbxLayer,jlong pCrease)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLayer *) lpjFbxLayer)->SetVertexCrease(
  ( FbxLayerElementCrease  *)  _lcvt.j2c_object_pt<jlong, FbxLayerElementCrease>(pCrease)
  );
}
  /// void  SetEdgeCrease (FbxLayerElementCrease *pCrease)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLayer_SetEdgeCrease(JNIEnv * __env, jclass __jc,jlong lpjFbxLayer,jlong pCrease)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLayer *) lpjFbxLayer)->SetEdgeCrease(
  ( FbxLayerElementCrease  *)  _lcvt.j2c_object_pt<jlong, FbxLayerElementCrease>(pCrease)
  );
}
  /// void  SetHole (FbxLayerElementHole *pHole)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLayer_SetHole(JNIEnv * __env, jclass __jc,jlong lpjFbxLayer,jlong pHole)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLayer *) lpjFbxLayer)->SetHole(
  ( FbxLayerElementHole  *)  _lcvt.j2c_object_pt<jlong, FbxLayerElementHole>(pHole)
  );
}
  /// void  SetUserData (FbxLayerElementUserData *pUserData)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLayer_SetUserData(JNIEnv * __env, jclass __jc,jlong lpjFbxLayer,jlong pUserData)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLayer *) lpjFbxLayer)->SetUserData(
  ( FbxLayerElementUserData  *)  _lcvt.j2c_object_pt<jlong, FbxLayerElementUserData>(pUserData)
  );
}
  /// void  SetVisibility (FbxLayerElementVisibility *pVisibility)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLayer_SetVisibility(JNIEnv * __env, jclass __jc,jlong lpjFbxLayer,jlong pVisibility)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLayer *) lpjFbxLayer)->SetVisibility(
  ( FbxLayerElementVisibility  *)  _lcvt.j2c_object_pt<jlong, FbxLayerElementVisibility>(pVisibility)
  );
}
  /// void  SetLayerElementOfType (FbxLayerElement *pLayerElement, FbxLayerElement::EType pType, bool pIsUV=false)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLayer_SetLayerElementOfType(JNIEnv * __env, jclass __jc,jlong lpjFbxLayer,jlong pLayerElement,jint pType,jboolean pIsUV)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLayer *) lpjFbxLayer)->SetLayerElementOfType(
  ( FbxLayerElement  *)  _lcvt.j2c_object_pt<jlong, FbxLayerElement>(pLayerElement)
  ,
  ( FbxLayerElement::EType  )  _lcvt.j2c<jint,FbxLayerElement::EType >(pType)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pIsUV)
  );
}
  /// FbxLayerElement *  CreateLayerElementOfType (FbxLayerElement::EType pType, bool pIsUV=false)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLayer_CreateLayerElementOfType(JNIEnv * __env, jclass __jc,jlong lpjFbxLayer,jint pType,jboolean pIsUV)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxLayerElement>(
  ((FbxLayer *) lpjFbxLayer)->CreateLayerElementOfType(
  ( FbxLayerElement::EType  )  _lcvt.j2c<jint,FbxLayerElement::EType >(pType)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pIsUV)
  ));
  return ret;
}
  /// void  Clone (FbxLayer const &pSrcLayer)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLayer_Clone(JNIEnv * __env, jclass __jc,jlong lpjFbxLayer,jobject pSrcLayer)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLayer *) lpjFbxLayer)->Clone(
  ( FbxLayer  &) * _lcvt.j2c_object_ref<jobject,FbxLayer >(pSrcLayer)
  );
}
