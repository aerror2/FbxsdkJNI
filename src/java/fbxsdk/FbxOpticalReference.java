package fbxsdk;
//26 53 FbxOpticalReference  --------------------
public class FbxOpticalReference  {
  /// virtual FbxNodeAttribute::EType  GetAttributeType () const
  public static native int GetAttributeType(long lpjFbxOpticalReference);
  /// FbxOpticalReference * Create( FbxNodeAttribute* lpFbxNodeAttribute,  const char* pName )
  public static native long Create(   long lpFbxNodeAttribute, String pName);
}
