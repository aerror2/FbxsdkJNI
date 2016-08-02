//copyright by aerror 2016 
package fbxsdk;
//26 61 FbxLayerElementCrease  --------------------
public class FbxLayerElementCrease  {
  /// void  SetReferenceMode (FbxLayerElement::EReferenceMode pMode)
  public static native void SetReferenceMode(long lpjFbxLayerElementCrease, int pMode);
  /// FbxLayerElementCrease * Create( FbxLayerContainer* pOwner, const char* pName )
  public static native long Create(   long pOwner, String pName);
}
