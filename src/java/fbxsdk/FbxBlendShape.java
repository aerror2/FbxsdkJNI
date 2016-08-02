//copyright by aerror 2016 
package fbxsdk;
//26 81 FbxBlendShape  --------------------
public class FbxBlendShape  {
  /// bool  SetGeometry (FbxGeometry *pGeometry)
  public static native boolean SetGeometry(long lpjFbxBlendShape, long pGeometry);
  /// FbxGeometry *  GetGeometry ()
  public static native long GetGeometry(long lpjFbxBlendShape);
  /// bool  AddBlendShapeChannel (FbxBlendShapeChannel *pBlendShapeChannel)
  public static native boolean AddBlendShapeChannel(long lpjFbxBlendShape, long pBlendShapeChannel);
  /// FbxBlendShapeChannel *  RemoveBlendShapeChannel (FbxBlendShapeChannel *pBlendShapeChannel)
  public static native long RemoveBlendShapeChannel(long lpjFbxBlendShape, long pBlendShapeChannel);
  /// int  GetBlendShapeChannelCount () const
  public static native int GetBlendShapeChannelCount(long lpjFbxBlendShape);
  /// FbxBlendShapeChannel *  GetBlendShapeChannel (int pIndex)
  public static native long GetBlendShapeChannel(long lpjFbxBlendShape, int pIndex);
  /// const FbxBlendShapeChannel *  GetBlendShapeChannel (int pIndex) const
  public static native long GetBlendShapeChannel1(long lpjFbxBlendShape, int pIndex);
  /// EDeformerType  GetDeformerType () const
  public static native int GetDeformerType(long lpjFbxBlendShape);
  /// void  Reset ()
  public static native void Reset(long lpjFbxBlendShape);
  /// FbxBlendShape * Create( FbxDeformer* lpFbxDeformer,  const char* pName )
  public static native long Create(   long lpFbxDeformer, String pName);
}
