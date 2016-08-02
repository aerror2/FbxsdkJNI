//copyright by aerror 2016 
package fbxsdk;
//26 67 FbxLayerElementSmoothing  --------------------
public class FbxLayerElementSmoothing  {
  /// void  SetReferenceMode (FbxLayerElement::EReferenceMode pMode)
  public static native void SetReferenceMode(long lpjFbxLayerElementSmoothing, int pMode);
  /// FbxLayerElementSmoothing * Create( FbxLayerContainer* pOwner, const char* pName )
  public static native long Create(   long pOwner, String pName);
}
