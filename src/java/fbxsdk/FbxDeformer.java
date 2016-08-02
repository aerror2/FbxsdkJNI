package fbxsdk;
//26 72 FbxDeformer  --------------------
public class FbxDeformer  {
  public                    class   EDeformerType  {
   public static final int eUnknown = 0;
   public static final int eSkin = 1;
   public static final int eBlendShape = 2;
   public static final int eVertexCache = 3;
}
  /// void  SetMultiLayer (bool pMultiLayer)
  public static native void SetMultiLayer(long lpjFbxDeformer, boolean pMultiLayer);
  /// bool  GetMultiLayer () const
  public static native boolean GetMultiLayer(long lpjFbxDeformer);
  /// virtual EDeformerType  GetDeformerType () const
  public static native int GetDeformerType(long lpjFbxDeformer);
  /// FbxDeformer * Create( FbxObject* lpFbxObject,  const char* pName )
  public static native long Create(   long lpFbxObject, String pName);
}
