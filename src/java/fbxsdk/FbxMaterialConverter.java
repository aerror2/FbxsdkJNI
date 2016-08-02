package fbxsdk;
//26 58 FbxMaterialConverter  --------------------
public class FbxMaterialConverter  {
  /// FbxMaterialConverter (FbxManager &mManager, FbxSurfaceMaterial *pDefaultMaterial=NULL)
  public static native long meCreate(   Long mManager, long pDefaultMaterial);
  /// ~FbxMaterialConverter ()
  public static native void meDestroy(long lpjFbxMaterialConverter);
  /// bool  ConnectTexturesToMaterials (FbxScene &pScene)
  public static native boolean ConnectTexturesToMaterials(long lpjFbxMaterialConverter, Long pScene);
  /// bool  ConnectTexturesToMaterials (FbxNode *pNode)
  public static native boolean ConnectTexturesToMaterials1(long lpjFbxMaterialConverter, long pNode);
  /// bool  AssignTexturesToLayerElements (FbxScene &pScene)
  public static native boolean AssignTexturesToLayerElements(long lpjFbxMaterialConverter, Long pScene);
}
