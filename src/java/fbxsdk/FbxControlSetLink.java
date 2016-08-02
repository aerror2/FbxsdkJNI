package fbxsdk;
//26 66 FbxControlSetLink  --------------------
public class FbxControlSetLink  {
  /// FbxControlSetLink ()
  public static native long meCreate(  );
  /// FbxControlSetLink (const FbxControlSetLink &pControlSetLink)
  public static native long meCreate1(   Long pControlSetLink);
  /// void  Reset ()
  public static native void Reset(long lpjFbxControlSetLink);
  /// void meDestroy(FbxControlSetLink * lpFbxControlSetLink)
  public static native void meDestroy(long lpjFbxControlSetLink);
}
