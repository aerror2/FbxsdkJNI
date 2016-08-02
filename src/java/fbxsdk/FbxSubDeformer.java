package fbxsdk;
//26 73 FbxSubDeformer  --------------------
public class FbxSubDeformer  {
  public            class   EType  {
   public static final int eUnknown = 0;
   public static final int eCluster = 1;
   public static final int eBlendShapeChannel = 2;
}
  /// void  SetMultiLayer (bool pMultiLayer)
  public static native void SetMultiLayer(long lpjFbxSubDeformer, boolean pMultiLayer);
  /// bool  GetMultiLayer () const
  public static native boolean GetMultiLayer(long lpjFbxSubDeformer);
  /// virtual EType  GetSubDeformerType () const
  public static native int GetSubDeformerType(long lpjFbxSubDeformer);
  /// FbxSubDeformer * Create( FbxObject* lpFbxObject,  const char* pName )
  public static native long Create(   long lpFbxObject, String pName);
}
