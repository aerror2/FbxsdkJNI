//copyright by aerror 2016 
package fbxsdk;
//26 57 FbxCollectionExclusive  --------------------
public class FbxCollectionExclusive  {
  /// bool  AddMember (FbxObject *pMember)
  public static native boolean AddMember(long lpjFbxCollectionExclusive, long pMember);
  /// FbxCollectionExclusive * Create( FbxCollection* lpFbxCollection,  const char* pName )
  public static native long Create(   long lpFbxCollection, String pName);
}
