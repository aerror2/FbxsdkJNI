//copyright by aerror 2016 
package fbxsdk;
//26 73 FbxControlSetPlug  --------------------
public class FbxControlSetPlug  {
  /// FbxPropertyT< FbxBool >  UseAxis
  public static native void mepSetUseAxis(long lpjFbxControlSetPlug, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  UseAxis
  public static native boolean mepGetUseAxis(long lpjFbxControlSetPlug);
  /// FbxPropertyT< FbxBool >  UseAxis
  public static native long mptGetUseAxis(long lpjFbxControlSetPlug);
  /// FbxPropertyT< FbxReference >  Character
  public static native void mepSetCharacter(long lpjFbxControlSetPlug, long lpFbxReference);
  /// FbxPropertyT< FbxReference >  Character
  public static native long mepGetCharacter(long lpjFbxControlSetPlug);
  /// FbxPropertyT< FbxReference >  Character
  public static native long mptGetCharacter(long lpjFbxControlSetPlug);
  /// FbxControlSetPlug * Create( FbxObject* lpFbxObject,  const char* pName )
  public static native long Create(   long lpFbxObject, String pName);
}
