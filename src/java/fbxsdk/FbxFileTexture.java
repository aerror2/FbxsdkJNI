//copyright by aerror 2016 
package fbxsdk;
//26 86 FbxFileTexture  --------------------
public class FbxFileTexture  {
  public                      class   EMaterialUse  {
   public static final int eModelMaterial = 0;
   public static final int eDefaultMaterial = 1;
}
  /// void  Reset ()
  public static native void Reset(long lpjFbxFileTexture);
  /// bool  SetFileName (const char *pName)
  public static native boolean SetFileName(long lpjFbxFileTexture, String pName);
  /// bool  SetRelativeFileName (const char *pName)
  public static native boolean SetRelativeFileName(long lpjFbxFileTexture, String pName);
  /// const char *  GetFileName () const
  public static native String GetFileName(long lpjFbxFileTexture);
  /// const char *  GetRelativeFileName () const
  public static native String GetRelativeFileName(long lpjFbxFileTexture);
  /// void  SetMaterialUse (EMaterialUse pMaterialUse)
  public static native void SetMaterialUse(long lpjFbxFileTexture, int pMaterialUse);
  /// EMaterialUse  GetMaterialUse () const
  public static native int GetMaterialUse(long lpjFbxFileTexture);
  /// FbxPropertyT< FbxBool >  UseMaterial
  public static native void mepSetUseMaterial(long lpjFbxFileTexture, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  UseMaterial
  public static native boolean mepGetUseMaterial(long lpjFbxFileTexture);
  /// FbxPropertyT< FbxBool >  UseMaterial
  public static native long mptGetUseMaterial(long lpjFbxFileTexture);
  /// FbxPropertyT< FbxBool >  UseMipMap
  public static native void mepSetUseMipMap(long lpjFbxFileTexture, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  UseMipMap
  public static native boolean mepGetUseMipMap(long lpjFbxFileTexture);
  /// FbxPropertyT< FbxBool >  UseMipMap
  public static native long mptGetUseMipMap(long lpjFbxFileTexture);
  /// FbxFileTexture * Create( FbxTexture* lpFbxTexture,  const char* pName )
  public static native long Create(   long lpFbxTexture, String pName);
}
