package fbxsdk;
//26 202 FbxLayer  --------------------
public class FbxLayer  {
  /// FbxLayerElementNormal *  GetNormals ()
  public static native long GetNormals(long lpjFbxLayer);
  /// const FbxLayerElementNormal *  GetNormals () const
  public static native long GetNormals1(long lpjFbxLayer);
  /// FbxLayerElementTangent *  GetTangents ()
  public static native long GetTangents(long lpjFbxLayer);
  /// const FbxLayerElementTangent *  GetTangents () const
  public static native long GetTangents1(long lpjFbxLayer);
  /// FbxLayerElementBinormal *  GetBinormals ()
  public static native long GetBinormals(long lpjFbxLayer);
  /// const FbxLayerElementBinormal *  GetBinormals () const
  public static native long GetBinormals1(long lpjFbxLayer);
  /// FbxLayerElementMaterial *  GetMaterials ()
  public static native long GetMaterials(long lpjFbxLayer);
  /// const FbxLayerElementMaterial *  GetMaterials () const
  public static native long GetMaterials1(long lpjFbxLayer);
  /// FbxLayerElementPolygonGroup *  GetPolygonGroups ()
  public static native long GetPolygonGroups(long lpjFbxLayer);
  /// const FbxLayerElementPolygonGroup *  GetPolygonGroups () const
  public static native long GetPolygonGroups1(long lpjFbxLayer);
  /// FbxLayerElementUV *  GetUVs (FbxLayerElement::EType pTypeIdentifier=FbxLayerElement::eTextureDiffuse)
  public static native long GetUVs(long lpjFbxLayer, int pTypeIdentifier);
  /// const FbxLayerElementUV *  GetUVs (FbxLayerElement::EType pTypeIdentifier=FbxLayerElement::eTextureDiffuse) const
  public static native long GetUVs1(long lpjFbxLayer, int pTypeIdentifier);
  /// int  GetUVSetCount () const
  public static native int GetUVSetCount(long lpjFbxLayer);
  /// FbxArray< FbxLayerElement::EType >  GetUVSetChannels () const
  public static native long GetUVSetChannels(long lpjFbxLayer);
  /// FbxLayerElementVertexColor *  GetVertexColors ()
  public static native long GetVertexColors(long lpjFbxLayer);
  /// const FbxLayerElementVertexColor *  GetVertexColors () const
  public static native long GetVertexColors1(long lpjFbxLayer);
  /// FbxLayerElementSmoothing *  GetSmoothing ()
  public static native long GetSmoothing(long lpjFbxLayer);
  /// const FbxLayerElementSmoothing *  GetSmoothing () const
  public static native long GetSmoothing1(long lpjFbxLayer);
  /// FbxLayerElementCrease *  GetVertexCrease ()
  public static native long GetVertexCrease(long lpjFbxLayer);
  /// const FbxLayerElementCrease *  GetVertexCrease () const
  public static native long GetVertexCrease1(long lpjFbxLayer);
  /// FbxLayerElementCrease *  GetEdgeCrease ()
  public static native long GetEdgeCrease(long lpjFbxLayer);
  /// const FbxLayerElementCrease *  GetEdgeCrease () const
  public static native long GetEdgeCrease1(long lpjFbxLayer);
  /// FbxLayerElementHole *  GetHole ()
  public static native long GetHole(long lpjFbxLayer);
  /// const FbxLayerElementHole *  GetHole () const
  public static native long GetHole1(long lpjFbxLayer);
  /// FbxLayerElementUserData *  GetUserData ()
  public static native long GetUserData(long lpjFbxLayer);
  /// const FbxLayerElementUserData *  GetUserData () const
  public static native long GetUserData1(long lpjFbxLayer);
  /// FbxLayerElementVisibility *  GetVisibility ()
  public static native long GetVisibility(long lpjFbxLayer);
  /// const FbxLayerElementVisibility *  GetVisibility () const
  public static native long GetVisibility1(long lpjFbxLayer);
  /// FbxLayerElementTexture *  GetTextures (FbxLayerElement::EType pType)
  public static native long GetTextures(long lpjFbxLayer, int pType);
  /// const FbxLayerElementTexture *  GetTextures (FbxLayerElement::EType pType) const
  public static native long GetTextures1(long lpjFbxLayer, int pType);
  /// void  SetTextures (FbxLayerElement::EType pType, FbxLayerElementTexture *pTextures)
  public static native void SetTextures(long lpjFbxLayer, int pType, long pTextures);
  /// FbxLayerElement *  GetLayerElementOfType (FbxLayerElement::EType pType, bool pIsUV=false)
  public static native long GetLayerElementOfType(long lpjFbxLayer, int pType, boolean pIsUV);
  /// const FbxLayerElement *  GetLayerElementOfType (FbxLayerElement::EType pType, bool pIsUV=false) const
  public static native long GetLayerElementOfType1(long lpjFbxLayer, int pType, boolean pIsUV);
  /// void  SetNormals (FbxLayerElementNormal *pNormals)
  public static native void SetNormals(long lpjFbxLayer, long pNormals);
  /// void  SetBinormals (FbxLayerElementBinormal *pBinormals)
  public static native void SetBinormals(long lpjFbxLayer, long pBinormals);
  /// void  SetTangents (FbxLayerElementTangent *pTangents)
  public static native void SetTangents(long lpjFbxLayer, long pTangents);
  /// void  SetMaterials (FbxLayerElementMaterial *pMaterials)
  public static native void SetMaterials(long lpjFbxLayer, long pMaterials);
  /// void  SetPolygonGroups (FbxLayerElementPolygonGroup *pPolygonGroups)
  public static native void SetPolygonGroups(long lpjFbxLayer, long pPolygonGroups);
  /// void  SetUVs (FbxLayerElementUV *pUVs, FbxLayerElement::EType pTypeIdentifier=FbxLayerElement::eTextureDiffuse)
  public static native void SetUVs(long lpjFbxLayer, long pUVs, int pTypeIdentifier);
  /// void  SetVertexColors (FbxLayerElementVertexColor *pVertexColors)
  public static native void SetVertexColors(long lpjFbxLayer, long pVertexColors);
  /// void  SetSmoothing (FbxLayerElementSmoothing *pSmoothing)
  public static native void SetSmoothing(long lpjFbxLayer, long pSmoothing);
  /// void  SetVertexCrease (FbxLayerElementCrease *pCrease)
  public static native void SetVertexCrease(long lpjFbxLayer, long pCrease);
  /// void  SetEdgeCrease (FbxLayerElementCrease *pCrease)
  public static native void SetEdgeCrease(long lpjFbxLayer, long pCrease);
  /// void  SetHole (FbxLayerElementHole *pHole)
  public static native void SetHole(long lpjFbxLayer, long pHole);
  /// void  SetUserData (FbxLayerElementUserData *pUserData)
  public static native void SetUserData(long lpjFbxLayer, long pUserData);
  /// void  SetVisibility (FbxLayerElementVisibility *pVisibility)
  public static native void SetVisibility(long lpjFbxLayer, long pVisibility);
  /// void  SetLayerElementOfType (FbxLayerElement *pLayerElement, FbxLayerElement::EType pType, bool pIsUV=false)
  public static native void SetLayerElementOfType(long lpjFbxLayer, long pLayerElement, int pType, boolean pIsUV);
  /// FbxLayerElement *  CreateLayerElementOfType (FbxLayerElement::EType pType, bool pIsUV=false)
  public static native long CreateLayerElementOfType(long lpjFbxLayer, int pType, boolean pIsUV);
  /// void  Clone (FbxLayer const &pSrcLayer)
  public static native void Clone(long lpjFbxLayer, Long pSrcLayer);
//No Static CreateFunc
}
