package fbxsdk;
//26 71 FbxHalfFloat  --------------------
public class FbxHalfFloat  {
  /// FbxHalfFloat ()
  public static native long meCreate(  );
  /// FbxHalfFloat (float pVal)
  public static native long meCreate1(   float pVal);
  /// FbxHalfFloat (const FbxHalfFloat &pVal)
  public static native long meCreate2(   Long pVal);
  /// const float  value () const
  public static native float value(long lpjFbxHalfFloat);
  /// void meDestroy(FbxHalfFloat * lpFbxHalfFloat)
  public static native void meDestroy(long lpjFbxHalfFloat);
}
