//copyright by aerror 2016 
package fbxsdk;
//26 67 FbxDisplayLayer  --------------------
public class FbxDisplayLayer  {
  /// FbxPropertyT< FbxDouble3 >  Color
  public static native void mepSetColor(long lpjFbxDisplayLayer, long lpFbxDouble3);
  /// FbxPropertyT< FbxDouble3 >  Color
  public static native long mepGetColor(long lpjFbxDisplayLayer);
  /// FbxPropertyT< FbxDouble3 >  Color
  public static native long mptGetColor(long lpjFbxDisplayLayer);
  /// FbxPropertyT< FbxBool >  Show
  public static native void mepSetShow(long lpjFbxDisplayLayer, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  Show
  public static native boolean mepGetShow(long lpjFbxDisplayLayer);
  /// FbxPropertyT< FbxBool >  Show
  public static native long mptGetShow(long lpjFbxDisplayLayer);
  /// FbxPropertyT< FbxBool >  Freeze
  public static native void mepSetFreeze(long lpjFbxDisplayLayer, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  Freeze
  public static native boolean mepGetFreeze(long lpjFbxDisplayLayer);
  /// FbxPropertyT< FbxBool >  Freeze
  public static native long mptGetFreeze(long lpjFbxDisplayLayer);
  /// FbxPropertyT< FbxBool >  LODBox
  public static native void mepSetLODBox(long lpjFbxDisplayLayer, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  LODBox
  public static native boolean mepGetLODBox(long lpjFbxDisplayLayer);
  /// FbxPropertyT< FbxBool >  LODBox
  public static native long mptGetLODBox(long lpjFbxDisplayLayer);
  /// FbxDisplayLayer * Create( FbxCollectionExclusive* lpFbxCollectionExclusive,  const char* pName )
  public static native long Create(   long lpFbxCollectionExclusive, String pName);
}
