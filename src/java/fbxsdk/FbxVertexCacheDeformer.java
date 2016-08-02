//copyright by aerror 2016 
package fbxsdk;
//26 76 FbxVertexCacheDeformer  --------------------
public class FbxVertexCacheDeformer  {
  /// void  SetCache (FbxCache *pCache)
  public static native void SetCache(long lpjFbxVertexCacheDeformer, long pCache);
  /// FbxCache *  GetCache () const
  public static native long GetCache(long lpjFbxVertexCacheDeformer);
  /// virtual EDeformerType  GetDeformerType () const
  public static native int GetDeformerType(long lpjFbxVertexCacheDeformer);
  /// FbxPropertyT< FbxBool >  Active
  public static native void mepSetActive(long lpjFbxVertexCacheDeformer, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  Active
  public static native boolean mepGetActive(long lpjFbxVertexCacheDeformer);
  /// FbxPropertyT< FbxBool >  Active
  public static native long mptGetActive(long lpjFbxVertexCacheDeformer);
  /// FbxPropertyT< FbxString >  Channel
  public static native void mepSetChannel(long lpjFbxVertexCacheDeformer, long lpFbxString);
  /// FbxPropertyT< FbxString >  Channel
  public static native long mepGetChannel(long lpjFbxVertexCacheDeformer);
  /// FbxPropertyT< FbxString >  Channel
  public static native long mptGetChannel(long lpjFbxVertexCacheDeformer);
  /// FbxPropertyT< FbxString >  CacheSet
  public static native void mepSetCacheSet(long lpjFbxVertexCacheDeformer, long lpFbxString);
  /// FbxPropertyT< FbxString >  CacheSet
  public static native long mepGetCacheSet(long lpjFbxVertexCacheDeformer);
  /// FbxPropertyT< FbxString >  CacheSet
  public static native long mptGetCacheSet(long lpjFbxVertexCacheDeformer);
  /// FbxVertexCacheDeformer * Create( FbxDeformer* lpFbxDeformer,  const char* pName )
  public static native long Create(   long lpFbxDeformer, String pName);
}
