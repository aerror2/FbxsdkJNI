//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// virtual FbxNodeAttribute::EType  GetAttributeType () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxMesh_GetAttributeType(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxNodeAttribute::EType  >(
  ((FbxMesh *) lpjFbxMesh)->GetAttributeType(
  ));
  return ret;
}
  /// void  ReservePolygonCount (int pCount)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxMesh_ReservePolygonCount(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh,jint pCount)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxMesh *) lpjFbxMesh)->ReservePolygonCount(
  ( int  )  _lcvt.j2c<jint, int  >(pCount)
  );
}
  /// void  ReservePolygonVertexCount (int pCount)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxMesh_ReservePolygonVertexCount(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh,jint pCount)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxMesh *) lpjFbxMesh)->ReservePolygonVertexCount(
  ( int  )  _lcvt.j2c<jint, int  >(pCount)
  );
}
  /// bool  GetTextureUV (FbxLayerElementArrayTemplate< FbxVector2 > **pLockableArray, FbxLayerElement::EType pTypeIdentifier=FbxLayerElement::eTextureDiffuse) const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxMesh_GetTextureUV(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh,jlongArray pLockableArray,jint pTypeIdentifier)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxMesh *) lpjFbxMesh)->GetTextureUV(
  (FbxLayerElementArrayTemplate<  FbxVector2   > **)  _lcvt.j2c_tmpl_FbxLayerElementArrayTemplate_obj_ppt<jlongArray,  FbxVector2   >(pLockableArray)
  ,
  ( FbxLayerElement::EType  )  _lcvt.j2c<jint,FbxLayerElement::EType >(pTypeIdentifier)
  ));
  return ret;
}
  /// bool  GetMaterialIndices (FbxLayerElementArrayTemplate< int > **pLockableArray) const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxMesh_GetMaterialIndices(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh,jlongArray pLockableArray)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxMesh *) lpjFbxMesh)->GetMaterialIndices(
  (FbxLayerElementArrayTemplate<  int   > **)  _lcvt.j2c_tmpl_FbxLayerElementArrayTemplate_obj_ppt<jlongArray,  int   >(pLockableArray)
  ));
  return ret;
}
  /// bool  GetTextureIndices (FbxLayerElementArrayTemplate< int > **pLockableArray, FbxLayerElement::EType pTextureType) const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxMesh_GetTextureIndices(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh,jlongArray pLockableArray,jint pTextureType)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxMesh *) lpjFbxMesh)->GetTextureIndices(
  (FbxLayerElementArrayTemplate<  int   > **)  _lcvt.j2c_tmpl_FbxLayerElementArrayTemplate_obj_ppt<jlongArray,  int   >(pLockableArray)
  ,
  ( FbxLayerElement::EType  )  _lcvt.j2c<jint,FbxLayerElement::EType >(pTextureType)
  ));
  return ret;
}
  /// void  BeginPolygon (int pMaterial=-1, int pTexture=-1, int pGroup=-1, bool pLegacy=true)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxMesh_BeginPolygon(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh,jint pMaterial,jint pTexture,jint pGroup,jboolean pLegacy)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxMesh *) lpjFbxMesh)->BeginPolygon(
  ( int  )  _lcvt.j2c<jint, int  >(pMaterial)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pTexture)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pGroup)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pLegacy)
  );
}
  /// void  BeginPolygonExt (int pMaterial, int *pTextures)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxMesh_BeginPolygonExt(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh,jint pMaterial,jintArray pTextures)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxMesh *) lpjFbxMesh)->BeginPolygonExt(
  ( int  )  _lcvt.j2c<jint, int  >(pMaterial)
  ,
  ( int  *)  _lcvt.j2c_int_pt<jintArray,int>(pTextures)
  );
}
  /// void  AddPolygon (int pIndex, int pTextureUVIndex=-1)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxMesh_AddPolygon(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh,jint pIndex,jint pTextureUVIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxMesh *) lpjFbxMesh)->AddPolygon(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pTextureUVIndex)
  );
}
  /// void  EndPolygon ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxMesh_EndPolygon(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxMesh *) lpjFbxMesh)->EndPolygon(
  );
}
  /// int  GetPolygonCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxMesh_GetPolygonCount(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxMesh *) lpjFbxMesh)->GetPolygonCount(
  ));
  return ret;
}
  /// int  GetPolygonSize (int pPolygonIndex) const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxMesh_GetPolygonSize(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh,jint pPolygonIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxMesh *) lpjFbxMesh)->GetPolygonSize(
  ( int  )  _lcvt.j2c<jint, int  >(pPolygonIndex)
  ));
  return ret;
}
  /// int  GetPolygonGroup (int pPolygonIndex) const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxMesh_GetPolygonGroup(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh,jint pPolygonIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxMesh *) lpjFbxMesh)->GetPolygonGroup(
  ( int  )  _lcvt.j2c<jint, int  >(pPolygonIndex)
  ));
  return ret;
}
  /// void  SetPolygonGroup (int pPolygonIndex, int pGroup) const
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxMesh_SetPolygonGroup(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh,jint pPolygonIndex,jint pGroup)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxMesh *) lpjFbxMesh)->SetPolygonGroup(
  ( int  )  _lcvt.j2c<jint, int  >(pPolygonIndex)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pGroup)
  );
}
  /// int  GetPolygonVertex (int pPolygonIndex, int pPositionInPolygon) const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxMesh_GetPolygonVertex(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh,jint pPolygonIndex,jint pPositionInPolygon)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxMesh *) lpjFbxMesh)->GetPolygonVertex(
  ( int  )  _lcvt.j2c<jint, int  >(pPolygonIndex)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pPositionInPolygon)
  ));
  return ret;
}
  /// bool  GetPolygonVertexNormal (int pPolyIndex, int pVertexIndex, FbxVector4 &pNormal) const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxMesh_GetPolygonVertexNormal(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh,jint pPolyIndex,jint pVertexIndex,jobject pNormal)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxMesh *) lpjFbxMesh)->GetPolygonVertexNormal(
  ( int  )  _lcvt.j2c<jint, int  >(pPolyIndex)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pVertexIndex)
  ,
  ( FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pNormal)
  ));
  return ret;
}
  /// bool  GetPolygonVertexNormals (FbxArray< FbxVector4 > &pNormals) const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxMesh_GetPolygonVertexNormals(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh,jobject pNormals)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxMesh *) lpjFbxMesh)->GetPolygonVertexNormals(
  (FbxArray<  FbxVector4   > &) * _lcvt.j2c_tmpl_FbxArray_obj_ref<jobject,  FbxVector4   >(pNormals)
  ));
  return ret;
}
  /// bool  GetPolygonVertexUV (int pPolyIndex, int pVertexIndex, const char *pUVSetName, FbxVector2 &pUV, bool &pUnmapped) const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxMesh_GetPolygonVertexUV(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh,jint pPolyIndex,jint pVertexIndex,jstring pUVSetName,jobject pUV,jobject pUnmapped)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxMesh *) lpjFbxMesh)->GetPolygonVertexUV(
  ( int  )  _lcvt.j2c<jint, int  >(pPolyIndex)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pVertexIndex)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pUVSetName)
  ,
  ( FbxVector2  &) * _lcvt.j2c_object_ref<jobject,FbxVector2 >(pUV)
  ,
  ( bool  &) * _lcvt.j2c_bool_ref<jobject,bool>(pUnmapped)
  ));
  return ret;
}
  /// bool  GetPolygonVertexUVs (const char *pUVSetName, FbxArray< FbxVector2 > &pUVs, FbxArray< int > *pUnmappedUVId=NULL) const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxMesh_GetPolygonVertexUVs(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh,jstring pUVSetName,jobject pUVs,jlong pUnmappedUVId)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxMesh *) lpjFbxMesh)->GetPolygonVertexUVs(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pUVSetName)
  ,
  (FbxArray<  FbxVector2   > &) * _lcvt.j2c_tmpl_FbxArray_obj_ref<jobject,  FbxVector2   >(pUVs)
  ,
  (FbxArray<  int   > *)  _lcvt.j2c_tmpl_FbxArray_obj_pt<jlong,  int   >(pUnmappedUVId)
  ));
  return ret;
}
  /// int *  GetPolygonVertices () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxMesh_GetPolygonVertices(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_pt<jlong,  int  *>(
  ((FbxMesh *) lpjFbxMesh)->GetPolygonVertices(
  ));
  return ret;
}
  /// int  GetPolygonVertexCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxMesh_GetPolygonVertexCount(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxMesh *) lpjFbxMesh)->GetPolygonVertexCount(
  ));
  return ret;
}
  /// int  GetPolygonVertexIndex (int pPolygonIndex) const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxMesh_GetPolygonVertexIndex(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh,jint pPolygonIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxMesh *) lpjFbxMesh)->GetPolygonVertexIndex(
  ( int  )  _lcvt.j2c<jint, int  >(pPolygonIndex)
  ));
  return ret;
}
  /// int  RemovePolygon (int pPolygonIndex)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxMesh_RemovePolygon(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh,jint pPolygonIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxMesh *) lpjFbxMesh)->RemovePolygon(
  ( int  )  _lcvt.j2c<jint, int  >(pPolygonIndex)
  ));
  return ret;
}
  /// int  RemoveDuplicatedEdges (FbxArray< int > &pEdgeIndexList)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxMesh_RemoveDuplicatedEdges(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh,jobject pEdgeIndexList)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxMesh *) lpjFbxMesh)->RemoveDuplicatedEdges(
  (FbxArray<  int   > &) * _lcvt.j2c_tmpl_FbxArray_obj_ref<jobject,  int   >(pEdgeIndexList)
  ));
  return ret;
}
  /// void  InitTextureUV (int pCount, FbxLayerElement::EType pTypeIdentifier=FbxLayerElement::eTextureDiffuse)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxMesh_InitTextureUV(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh,jint pCount,jint pTypeIdentifier)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxMesh *) lpjFbxMesh)->InitTextureUV(
  ( int  )  _lcvt.j2c<jint, int  >(pCount)
  ,
  ( FbxLayerElement::EType  )  _lcvt.j2c<jint,FbxLayerElement::EType >(pTypeIdentifier)
  );
}
  /// void  AddTextureUV (FbxVector2 pUV, FbxLayerElement::EType pTypeIdentifier=FbxLayerElement::eTextureDiffuse)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxMesh_AddTextureUV(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh,jlong pUV,jint pTypeIdentifier)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxMesh *) lpjFbxMesh)->AddTextureUV(
  ( FbxVector2  )  _lcvt.j2c_object<jlong,FbxVector2 >(pUV)
  ,
  ( FbxLayerElement::EType  )  _lcvt.j2c<jint,FbxLayerElement::EType >(pTypeIdentifier)
  );
}
  /// int  GetTextureUVCount (FbxLayerElement::EType pTypeIdentifier=FbxLayerElement::eTextureDiffuse)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxMesh_GetTextureUVCount(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh,jint pTypeIdentifier)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxMesh *) lpjFbxMesh)->GetTextureUVCount(
  ( FbxLayerElement::EType  )  _lcvt.j2c<jint,FbxLayerElement::EType >(pTypeIdentifier)
  ));
  return ret;
}
  /// int  GetUVLayerCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxMesh_GetUVLayerCount(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxMesh *) lpjFbxMesh)->GetUVLayerCount(
  ));
  return ret;
}
  /// FbxArray< FbxLayerElement::EType >  GetAllChannelUV (int pLayer)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxMesh_GetAllChannelUV(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh,jint pLayer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxArray<jlong,  FbxLayerElement::EType   >(
  ((FbxMesh *) lpjFbxMesh)->GetAllChannelUV(
  ( int  )  _lcvt.j2c<jint, int  >(pLayer)
  ));
  return ret;
}
  /// void  InitMaterialIndices (FbxLayerElement::EMappingMode pMappingMode)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxMesh_InitMaterialIndices(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh,jint pMappingMode)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxMesh *) lpjFbxMesh)->InitMaterialIndices(
  ( FbxLayerElement::EMappingMode  )  _lcvt.j2c<jint,FbxLayerElement::EMappingMode >(pMappingMode)
  );
}
  /// void  InitTextureIndices (FbxLayerElement::EMappingMode pMappingMode, FbxLayerElement::EType pTextureType)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxMesh_InitTextureIndices(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh,jint pMappingMode,jint pTextureType)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxMesh *) lpjFbxMesh)->InitTextureIndices(
  ( FbxLayerElement::EMappingMode  )  _lcvt.j2c<jint,FbxLayerElement::EMappingMode >(pMappingMode)
  ,
  ( FbxLayerElement::EType  )  _lcvt.j2c<jint,FbxLayerElement::EType >(pTextureType)
  );
}
  /// void  InitTextureUVIndices (FbxLayerElement::EMappingMode pMappingMode, FbxLayerElement::EType pTypeIdentifier=FbxLayerElement::eTextureDiffuse)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxMesh_InitTextureUVIndices(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh,jint pMappingMode,jint pTypeIdentifier)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxMesh *) lpjFbxMesh)->InitTextureUVIndices(
  ( FbxLayerElement::EMappingMode  )  _lcvt.j2c<jint,FbxLayerElement::EMappingMode >(pMappingMode)
  ,
  ( FbxLayerElement::EType  )  _lcvt.j2c<jint,FbxLayerElement::EType >(pTypeIdentifier)
  );
}
  /// int  GetTextureUVIndex (int pPolygonIndex, int pPositionInPolygon, FbxLayerElement::EType pTypeIdentifier=FbxLayerElement::eTextureDiffuse)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxMesh_GetTextureUVIndex(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh,jint pPolygonIndex,jint pPositionInPolygon,jint pTypeIdentifier)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxMesh *) lpjFbxMesh)->GetTextureUVIndex(
  ( int  )  _lcvt.j2c<jint, int  >(pPolygonIndex)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pPositionInPolygon)
  ,
  ( FbxLayerElement::EType  )  _lcvt.j2c<jint,FbxLayerElement::EType >(pTypeIdentifier)
  ));
  return ret;
}
  /// void  SetTextureUVIndex (int pPolygonIndex, int pPositionInPolygon, int pIndex, FbxLayerElement::EType pTypeIdentifier)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxMesh_SetTextureUVIndex(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh,jint pPolygonIndex,jint pPositionInPolygon,jint pIndex,jint pTypeIdentifier)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxMesh *) lpjFbxMesh)->SetTextureUVIndex(
  ( int  )  _lcvt.j2c<jint, int  >(pPolygonIndex)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pPositionInPolygon)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ,
  ( FbxLayerElement::EType  )  _lcvt.j2c<jint,FbxLayerElement::EType >(pTypeIdentifier)
  );
}
  /// void  Reset ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxMesh_Reset(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxMesh *) lpjFbxMesh)->Reset(
  );
}
  /// bool  GenerateNormals (bool pOverwrite=false, bool pByCtrlPoint=false, bool pCW=false)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxMesh_GenerateNormals(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh,jboolean pOverwrite,jboolean pByCtrlPoint,jboolean pCW)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxMesh *) lpjFbxMesh)->GenerateNormals(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pOverwrite)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pByCtrlPoint)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pCW)
  ));
  return ret;
}
  /// bool  CheckIfVertexNormalsCCW ()
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxMesh_CheckIfVertexNormalsCCW(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxMesh *) lpjFbxMesh)->CheckIfVertexNormalsCCW(
  ));
  return ret;
}
  /// bool  CheckSamePointTwice () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxMesh_CheckSamePointTwice(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxMesh *) lpjFbxMesh)->CheckSamePointTwice(
  ));
  return ret;
}
  /// int  RemoveBadPolygons ()
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxMesh_RemoveBadPolygons(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxMesh *) lpjFbxMesh)->RemoveBadPolygons(
  ));
  return ret;
}
  /// bool  SplitPoints (FbxLayerElement::EType pTypeIdentifier=FbxLayerElement::eTextureDiffuse)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxMesh_SplitPoints(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh,jint pTypeIdentifier)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxMesh *) lpjFbxMesh)->SplitPoints(
  ( FbxLayerElement::EType  )  _lcvt.j2c<jint,FbxLayerElement::EType >(pTypeIdentifier)
  ));
  return ret;
}
  /// bool  BuildMergeList (FbxArray< int > &pMergeList, bool pExport=false)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxMesh_BuildMergeList(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh,jobject pMergeList,jboolean pExport)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxMesh *) lpjFbxMesh)->BuildMergeList(
  (FbxArray<  int   > &) * _lcvt.j2c_tmpl_FbxArray_obj_ref<jobject,  int   >(pMergeList)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pExport)
  ));
  return ret;
}
  /// void  MergePointsForPolygonVerteNormals (FbxArray< int > &pMergeList)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxMesh_MergePointsForPolygonVerteNormals(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh,jobject pMergeList)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxMesh *) lpjFbxMesh)->MergePointsForPolygonVerteNormals(
  (FbxArray<  int   > &) * _lcvt.j2c_tmpl_FbxArray_obj_ref<jobject,  int   >(pMergeList)
  );
}
  /// void  BuildMeshEdgeArray ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxMesh_BuildMeshEdgeArray(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxMesh *) lpjFbxMesh)->BuildMeshEdgeArray(
  );
}
  /// int  GetMeshEdgeCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxMesh_GetMeshEdgeCount(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxMesh *) lpjFbxMesh)->GetMeshEdgeCount(
  ));
  return ret;
}
  /// int  GetMeshEdgeIndex (int pStartVertexIndex, int pEndVertexIndex, bool &pReversed, int pExistedEdgeCount=-1)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxMesh_GetMeshEdgeIndex(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh,jint pStartVertexIndex,jint pEndVertexIndex,jobject pReversed,jint pExistedEdgeCount)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxMesh *) lpjFbxMesh)->GetMeshEdgeIndex(
  ( int  )  _lcvt.j2c<jint, int  >(pStartVertexIndex)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pEndVertexIndex)
  ,
  ( bool  &) * _lcvt.j2c_bool_ref<jobject,bool>(pReversed)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pExistedEdgeCount)
  ));
  return ret;
}
  /// void  BeginGetMeshEdgeIndexForPolygon ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxMesh_BeginGetMeshEdgeIndexForPolygon(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxMesh *) lpjFbxMesh)->BeginGetMeshEdgeIndexForPolygon(
  );
}
  /// void  EndGetMeshEdgeIndexForPolygon ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxMesh_EndGetMeshEdgeIndexForPolygon(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxMesh *) lpjFbxMesh)->EndGetMeshEdgeIndexForPolygon(
  );
}
  /// int  GetMeshEdgeIndexForPolygon (int pPolygon, int pPositionInPolygon)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxMesh_GetMeshEdgeIndexForPolygon(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh,jint pPolygon,jint pPositionInPolygon)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxMesh *) lpjFbxMesh)->GetMeshEdgeIndexForPolygon(
  ( int  )  _lcvt.j2c<jint, int  >(pPolygon)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pPositionInPolygon)
  ));
  return ret;
}
  /// void  GetMeshEdgeVertices (int pEdgeIndex, int &pStartVertexIndex, int &pEndVertexIndex) const
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxMesh_GetMeshEdgeVertices(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh,jint pEdgeIndex,jobject pStartVertexIndex,jobject pEndVertexIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxMesh *) lpjFbxMesh)->GetMeshEdgeVertices(
  ( int  )  _lcvt.j2c<jint, int  >(pEdgeIndex)
  ,
  ( int  &) * _lcvt.j2c_int_ref<jobject,int>(pStartVertexIndex)
  ,
  ( int  &) * _lcvt.j2c_int_ref<jobject,int>(pEndVertexIndex)
  );
}
  /// void  BeginGetMeshEdgeVertices ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxMesh_BeginGetMeshEdgeVertices(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxMesh *) lpjFbxMesh)->BeginGetMeshEdgeVertices(
  );
}
  /// void  EndGetMeshEdgeVertices ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxMesh_EndGetMeshEdgeVertices(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxMesh *) lpjFbxMesh)->EndGetMeshEdgeVertices(
  );
}
  /// void  SetMeshEdgeCount (int pEdgeCount)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxMesh_SetMeshEdgeCount(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh,jint pEdgeCount)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxMesh *) lpjFbxMesh)->SetMeshEdgeCount(
  ( int  )  _lcvt.j2c<jint, int  >(pEdgeCount)
  );
}
  /// void  SetMeshEdge (int pEdgeIndex, int pValue)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxMesh_SetMeshEdge(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh,jint pEdgeIndex,jint pValue)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxMesh *) lpjFbxMesh)->SetMeshEdge(
  ( int  )  _lcvt.j2c<jint, int  >(pEdgeIndex)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pValue)
  );
}
  /// int  AddMeshEdgeIndex (int pStartVertexIndex, int pEndVertexIndex, bool pCheckForDuplicates)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxMesh_AddMeshEdgeIndex(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh,jint pStartVertexIndex,jint pEndVertexIndex,jboolean pCheckForDuplicates)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxMesh *) lpjFbxMesh)->AddMeshEdgeIndex(
  ( int  )  _lcvt.j2c<jint, int  >(pStartVertexIndex)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pEndVertexIndex)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pCheckForDuplicates)
  ));
  return ret;
}
  /// int  SetMeshEdgeIndex (int pEdgeIndex, int pStartVertexIndex, int pEndVertexIndex, bool pCheckForDuplicates, int pExistedEdgeCount=-1)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxMesh_SetMeshEdgeIndex(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh,jint pEdgeIndex,jint pStartVertexIndex,jint pEndVertexIndex,jboolean pCheckForDuplicates,jint pExistedEdgeCount)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxMesh *) lpjFbxMesh)->SetMeshEdgeIndex(
  ( int  )  _lcvt.j2c<jint, int  >(pEdgeIndex)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pStartVertexIndex)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pEndVertexIndex)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pCheckForDuplicates)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pExistedEdgeCount)
  ));
  return ret;
}
  /// void  BeginAddMeshEdgeIndex ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxMesh_BeginAddMeshEdgeIndex(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxMesh *) lpjFbxMesh)->BeginAddMeshEdgeIndex(
  );
}
  /// void  EndAddMeshEdgeIndex ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxMesh_EndAddMeshEdgeIndex(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxMesh *) lpjFbxMesh)->EndAddMeshEdgeIndex(
  );
}
  /// int  AddMeshEdgeIndexForPolygon (int pPolygonIndex, int pPositionInPolygon)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxMesh_AddMeshEdgeIndexForPolygon(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh,jint pPolygonIndex,jint pPositionInPolygon)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxMesh *) lpjFbxMesh)->AddMeshEdgeIndexForPolygon(
  ( int  )  _lcvt.j2c<jint, int  >(pPolygonIndex)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pPositionInPolygon)
  ));
  return ret;
}
  /// bool  SetMeshEdgeIndex (int pEdgeIndex, int pPolygonIndex, int pPositionInPolygon)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxMesh_SetMeshEdgeIndex1(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh,jint pEdgeIndex,jint pPolygonIndex,jint pPositionInPolygon)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxMesh *) lpjFbxMesh)->SetMeshEdgeIndex(
  ( int  )  _lcvt.j2c<jint, int  >(pEdgeIndex)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pPolygonIndex)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pPositionInPolygon)
  ));
  return ret;
}
  /// bool  IsTriangleMesh () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxMesh_IsTriangleMesh(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxMesh *) lpjFbxMesh)->IsTriangleMesh(
  ));
  return ret;
}
  /// double  GetEdgeCreaseInfo (int pEdgeIndex)
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxMesh_GetEdgeCreaseInfo(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh,jint pEdgeIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxMesh *) lpjFbxMesh)->GetEdgeCreaseInfo(
  ( int  )  _lcvt.j2c<jint, int  >(pEdgeIndex)
  ));
  return ret;
}
  /// bool  GetEdgeCreaseInfoArray (FbxLayerElementArrayTemplate< double > **pCreaseArray)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxMesh_GetEdgeCreaseInfoArray(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh,jlongArray pCreaseArray)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxMesh *) lpjFbxMesh)->GetEdgeCreaseInfoArray(
  (FbxLayerElementArrayTemplate<  double   > **)  _lcvt.j2c_tmpl_FbxLayerElementArrayTemplate_obj_ppt<jlongArray,  double   >(pCreaseArray)
  ));
  return ret;
}
  /// double  GetVertexCreaseInfo (int pVertexIndex)
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxMesh_GetVertexCreaseInfo(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh,jint pVertexIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxMesh *) lpjFbxMesh)->GetVertexCreaseInfo(
  ( int  )  _lcvt.j2c<jint, int  >(pVertexIndex)
  ));
  return ret;
}
  /// bool  GetVertexCreaseInfoArray (FbxLayerElementArrayTemplate< double > **pCreaseArray)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxMesh_GetVertexCreaseInfoArray(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh,jlongArray pCreaseArray)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxMesh *) lpjFbxMesh)->GetVertexCreaseInfoArray(
  (FbxLayerElementArrayTemplate<  double   > **)  _lcvt.j2c_tmpl_FbxLayerElementArrayTemplate_obj_ppt<jlongArray,  double   >(pCreaseArray)
  ));
  return ret;
}
  /// bool  SetEdgeCreaseInfo (int pEdgeIndex, double pWeight)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxMesh_SetEdgeCreaseInfo(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh,jint pEdgeIndex,jdouble pWeight)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxMesh *) lpjFbxMesh)->SetEdgeCreaseInfo(
  ( int  )  _lcvt.j2c<jint, int  >(pEdgeIndex)
  ,
  ( double  )  _lcvt.j2c<jdouble, double  >(pWeight)
  ));
  return ret;
}
  /// bool  SetEdgeCreaseInfoArray (FbxArray< double > *pWeightArray)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxMesh_SetEdgeCreaseInfoArray(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh,jlong pWeightArray)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxMesh *) lpjFbxMesh)->SetEdgeCreaseInfoArray(
  (FbxArray<  double   > *)  _lcvt.j2c_tmpl_FbxArray_obj_pt<jlong,  double   >(pWeightArray)
  ));
  return ret;
}
  /// bool  SetVertexCreaseInfo (int pVertexIndex, double pWeight)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxMesh_SetVertexCreaseInfo(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh,jint pVertexIndex,jdouble pWeight)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxMesh *) lpjFbxMesh)->SetVertexCreaseInfo(
  ( int  )  _lcvt.j2c<jint, int  >(pVertexIndex)
  ,
  ( double  )  _lcvt.j2c<jdouble, double  >(pWeight)
  ));
  return ret;
}
  /// bool  SetVertexCreaseInfoArray (FbxArray< double > *pWeightArray)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxMesh_SetVertexCreaseInfoArray(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh,jlong pWeightArray)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxMesh *) lpjFbxMesh)->SetVertexCreaseInfoArray(
  (FbxArray<  double   > *)  _lcvt.j2c_tmpl_FbxArray_obj_pt<jlong,  double   >(pWeightArray)
  ));
  return ret;
}
  /// FbxMesh::ESmoothness  GetMeshSmoothness () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxMesh_GetMeshSmoothness(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxMesh::ESmoothness  >(
  ((FbxMesh *) lpjFbxMesh)->GetMeshSmoothness(
  ));
  return ret;
}
  /// void  SetMeshSmoothness (FbxMesh::ESmoothness pSmoothness)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxMesh_SetMeshSmoothness(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh,jint pSmoothness)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxMesh *) lpjFbxMesh)->SetMeshSmoothness(
  ( FbxMesh::ESmoothness  )  _lcvt.j2c<jint,FbxMesh::ESmoothness >(pSmoothness)
  );
}
  /// int  GetMeshPreviewDivisionLevels () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxMesh_GetMeshPreviewDivisionLevels(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxMesh *) lpjFbxMesh)->GetMeshPreviewDivisionLevels(
  ));
  return ret;
}
  /// void  SetMeshPreviewDivisionLevels (int pPreviewDivisionLevels)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxMesh_SetMeshPreviewDivisionLevels(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh,jint pPreviewDivisionLevels)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxMesh *) lpjFbxMesh)->SetMeshPreviewDivisionLevels(
  ( int  )  _lcvt.j2c<jint, int  >(pPreviewDivisionLevels)
  );
}
  /// int  GetMeshRenderDivisionLevels () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxMesh_GetMeshRenderDivisionLevels(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxMesh *) lpjFbxMesh)->GetMeshRenderDivisionLevels(
  ));
  return ret;
}
  /// void  SetMeshRenderDivisionLevels (int pRenderDivisionLevels)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxMesh_SetMeshRenderDivisionLevels(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh,jint pRenderDivisionLevels)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxMesh *) lpjFbxMesh)->SetMeshRenderDivisionLevels(
  ( int  )  _lcvt.j2c<jint, int  >(pRenderDivisionLevels)
  );
}
  /// bool  GetDisplaySubdivisions () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxMesh_GetDisplaySubdivisions(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxMesh *) lpjFbxMesh)->GetDisplaySubdivisions(
  ));
  return ret;
}
  /// void  SetDisplaySubdivisions (bool pDisplySubdivisions)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxMesh_SetDisplaySubdivisions(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh,jboolean pDisplySubdivisions)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxMesh *) lpjFbxMesh)->SetDisplaySubdivisions(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pDisplySubdivisions)
  );
}
  /// EBoundaryRule  GetBoundaryRule () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxMesh_GetBoundaryRule(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxMesh::EBoundaryRule  >(
  ((FbxMesh *) lpjFbxMesh)->GetBoundaryRule(
  ));
  return ret;
}
  /// void  SetBoundaryRule (EBoundaryRule pBoundaryRule)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxMesh_SetBoundaryRule(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh,jint pBoundaryRule)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxMesh *) lpjFbxMesh)->SetBoundaryRule(
  ( FbxMesh::EBoundaryRule  )  _lcvt.j2c<jint,FbxMesh::EBoundaryRule >(pBoundaryRule)
  );
}
  /// bool  GetPreserveBorders () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxMesh_GetPreserveBorders(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxMesh *) lpjFbxMesh)->GetPreserveBorders(
  ));
  return ret;
}
  /// void  SetPreserveBorders (bool pPreserveBorders)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxMesh_SetPreserveBorders(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh,jboolean pPreserveBorders)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxMesh *) lpjFbxMesh)->SetPreserveBorders(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pPreserveBorders)
  );
}
  /// bool  GetPreserveHardEdges () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxMesh_GetPreserveHardEdges(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxMesh *) lpjFbxMesh)->GetPreserveHardEdges(
  ));
  return ret;
}
  /// void  SetPreserveHardEdges (bool pPreserveHardEdges)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxMesh_SetPreserveHardEdges(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh,jboolean pPreserveHardEdges)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxMesh *) lpjFbxMesh)->SetPreserveHardEdges(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pPreserveHardEdges)
  );
}
  /// bool  GetPropagateEdgeHardness () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxMesh_GetPropagateEdgeHardness(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxMesh *) lpjFbxMesh)->GetPropagateEdgeHardness(
  ));
  return ret;
}
  /// void  SetPropagateEdgeHardness (bool pPropagateEdgeHardness)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxMesh_SetPropagateEdgeHardness(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh,jboolean pPropagateEdgeHardness)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxMesh *) lpjFbxMesh)->SetPropagateEdgeHardness(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pPropagateEdgeHardness)
  );
}
  /// bool  GetPolyHoleInfo (int pFaceIndex)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxMesh_GetPolyHoleInfo(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh,jint pFaceIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxMesh *) lpjFbxMesh)->GetPolyHoleInfo(
  ( int  )  _lcvt.j2c<jint, int  >(pFaceIndex)
  ));
  return ret;
}
  /// bool  GetPolyHoleInfoArray (FbxLayerElementArrayTemplate< bool > **pHoleArray)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxMesh_GetPolyHoleInfoArray(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh,jlongArray pHoleArray)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxMesh *) lpjFbxMesh)->GetPolyHoleInfoArray(
  (FbxLayerElementArrayTemplate<  bool   > **)  _lcvt.j2c_tmpl_FbxLayerElementArrayTemplate_obj_ppt<jlongArray,  bool   >(pHoleArray)
  ));
  return ret;
}
  /// bool  SetPolyHoleInfo (int pFaceIndex, bool pIsHole)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxMesh_SetPolyHoleInfo(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh,jint pFaceIndex,jboolean pIsHole)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxMesh *) lpjFbxMesh)->SetPolyHoleInfo(
  ( int  )  _lcvt.j2c<jint, int  >(pFaceIndex)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pIsHole)
  ));
  return ret;
}
  /// bool  SetPolyHoleInfoArray (FbxArray< bool > *pHoleArray)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxMesh_SetPolyHoleInfoArray(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh,jlong pHoleArray)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxMesh *) lpjFbxMesh)->SetPolyHoleInfoArray(
  (FbxArray<  bool   > *)  _lcvt.j2c_tmpl_FbxArray_obj_pt<jlong,  bool   >(pHoleArray)
  ));
  return ret;
}
  /// bool  GenerateTangentsData (const char *pUVSetName=NULL, bool pOverwrite=false)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxMesh_GenerateTangentsData(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh,jstring pUVSetName,jboolean pOverwrite)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxMesh *) lpjFbxMesh)->GenerateTangentsData(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pUVSetName)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pOverwrite)
  ));
  return ret;
}
  /// bool  GenerateTangentsData (int pUVSetLayerIndex, bool pOverwrite=false)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxMesh_GenerateTangentsData1(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh,jint pUVSetLayerIndex,jboolean pOverwrite)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxMesh *) lpjFbxMesh)->GenerateTangentsData(
  ( int  )  _lcvt.j2c<jint, int  >(pUVSetLayerIndex)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pOverwrite)
  ));
  return ret;
}
  /// bool  GenerateTangentsDataForAllUVSets (bool pOverwrite=false)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxMesh_GenerateTangentsDataForAllUVSets(JNIEnv * __env, jclass __jc,jlong lpjFbxMesh,jboolean pOverwrite)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxMesh *) lpjFbxMesh)->GenerateTangentsDataForAllUVSets(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pOverwrite)
  ));
  return ret;
}
  /// FbxMesh * Create( FbxGeometry* lpFbxGeometry,  const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxMesh_Create(JNIEnv * __env, jclass __jc,jlong lpFbxGeometry,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxMesh>(
  FbxMesh::Create(
  ( FbxGeometry  *)  _lcvt.j2c_object_pt<jlong, FbxGeometry>(lpFbxGeometry)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
