//copyright by aerror 2016 
package fbxsdk;
//26 87 FbxSurfaceMaterial  --------------------
public class FbxSurfaceMaterial  {
  /// FbxPropertyT< FbxString >  ShadingModel
  public static native void mepSetShadingModel(long lpjFbxSurfaceMaterial, long lpFbxString);
  /// FbxPropertyT< FbxString >  ShadingModel
  public static native long mepGetShadingModel(long lpjFbxSurfaceMaterial);
  /// FbxPropertyT< FbxString >  ShadingModel
  public static native long mptGetShadingModel(long lpjFbxSurfaceMaterial);
  /// FbxPropertyT< FbxBool >  MultiLayer
  public static native void mepSetMultiLayer(long lpjFbxSurfaceMaterial, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  MultiLayer
  public static native boolean mepGetMultiLayer(long lpjFbxSurfaceMaterial);
  /// FbxPropertyT< FbxBool >  MultiLayer
  public static native long mptGetMultiLayer(long lpjFbxSurfaceMaterial);
  /// FbxSurfaceMaterial * Create( FbxObject* lpFbxObject,  const char* pName )
  public static native long Create(   long lpFbxObject, String pName);
}
