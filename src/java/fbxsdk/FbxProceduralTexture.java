package fbxsdk;
//26 71 FbxProceduralTexture  --------------------
public class FbxProceduralTexture  {
  /// void  Reset ()
  public static native void Reset(long lpjFbxProceduralTexture);
  /// void  SetBlob (FbxBlob &pBlob)
  public static native void SetBlob(long lpjFbxProceduralTexture, Long pBlob);
  /// FbxBlob  GetBlob () const
  public static native long GetBlob(long lpjFbxProceduralTexture);
  /// FbxPropertyT< FbxBlob >  BlobProp
  public static native void mepSetBlobProp(long lpjFbxProceduralTexture, long lpFbxBlob);
  /// FbxPropertyT< FbxBlob >  BlobProp
  public static native long mepGetBlobProp(long lpjFbxProceduralTexture);
  /// FbxPropertyT< FbxBlob >  BlobProp
  public static native long mptGetBlobProp(long lpjFbxProceduralTexture);
  /// FbxProceduralTexture * Create( FbxTexture* lpFbxTexture,  const char* pName )
  public static native long Create(   long lpFbxTexture, String pName);
}
