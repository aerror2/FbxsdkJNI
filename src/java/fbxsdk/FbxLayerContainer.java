package fbxsdk;
//26 85 FbxLayerContainer  --------------------
public class FbxLayerContainer  {
  /// virtual FbxNodeAttribute::EType  GetAttributeType () const
  public static native int GetAttributeType(long lpjFbxLayerContainer);
  /// bool  ConvertDirectToIndexToDirect (int pLayer)
  public static native boolean ConvertDirectToIndexToDirect(long lpjFbxLayerContainer, int pLayer);
  /// int  CreateLayer ()
  public static native int CreateLayer(long lpjFbxLayerContainer);
  /// void  ClearLayers ()
  public static native void ClearLayers(long lpjFbxLayerContainer);
  /// int  GetLayerCount () const
  public static native int GetLayerCount(long lpjFbxLayerContainer);
  /// int  GetLayerCount (FbxLayerElement::EType pType, bool pUVCount=false) const
  public static native int GetLayerCount1(long lpjFbxLayerContainer, int pType, boolean pUVCount);
  /// FbxLayer *  GetLayer (int pIndex)
  public static native long GetLayer(long lpjFbxLayerContainer, int pIndex);
  /// const FbxLayer *  GetLayer (int pIndex) const
  public static native long GetLayer1(long lpjFbxLayerContainer, int pIndex);
  /// FbxLayer *  GetLayer (int pIndex, FbxLayerElement::EType pType, bool pIsUV=false)
  public static native long GetLayer2(long lpjFbxLayerContainer, int pIndex, int pType, boolean pIsUV);
  /// const FbxLayer *  GetLayer (int pIndex, FbxLayerElement::EType pType, bool pIsUV=false) const
  public static native long GetLayer3(long lpjFbxLayerContainer, int pIndex, int pType, boolean pIsUV);
  /// int  GetLayerIndex (int pIndex, FbxLayerElement::EType pType, bool pIsUV=false) const
  public static native int GetLayerIndex(long lpjFbxLayerContainer, int pIndex, int pType, boolean pIsUV);
  /// int  GetLayerTypedIndex (int pGlobalIndex, FbxLayerElement::EType pType, bool pIsUV=false) const
  public static native int GetLayerTypedIndex(long lpjFbxLayerContainer, int pGlobalIndex, int pType, boolean pIsUV);
  /// FbxLayerContainer * Create( FbxLayerContainer* pOwner, const char* pName )
  public static native long Create(   long pOwner, String pName);
}
