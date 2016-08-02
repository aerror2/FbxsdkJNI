//copyright by aerror 2016 
package fbxsdk;
//26 57 FbxLayerElementHole  --------------------
public class FbxLayerElementHole  {
  /// void  SetReferenceMode (FbxLayerElement::EReferenceMode pMode)
  public static native void SetReferenceMode(long lpjFbxLayerElementHole, int pMode);
  /// FbxLayerElementHole * Create( FbxLayerContainer* pOwner, const char* pName )
  public static native long Create(   long pOwner, String pName);
}
