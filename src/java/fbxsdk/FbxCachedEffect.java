//copyright by aerror 2016 
package fbxsdk;
//26 67 FbxCachedEffect  --------------------
public class FbxCachedEffect  {
  public                              class   ECategory  {
   public static final int eParticles = 0;
   public static final int eFluids = 1;
   public static final int eHair = 2;
   public static final int eGeneric = 3;
}
  /// virtual FbxNodeAttribute::EType  GetAttributeType () const
  public static native int GetAttributeType(long lpjFbxCachedEffect);
  /// ECategory  GetCategory () const
  public static native int GetCategory(long lpjFbxCachedEffect);
  /// void  SetCache (FbxCache *pCache, ECategory pCategory=eGeneric)
  public static native void SetCache(long lpjFbxCachedEffect, long pCache, int pCategory);
  /// FbxCache *  GetCache () const
  public static native long GetCache(long lpjFbxCachedEffect);
  /// FbxCachedEffect * Create( FbxNodeAttribute* lpFbxNodeAttribute,  const char* pName )
  public static native long Create(   long lpFbxNodeAttribute, String pName);
}
