package fbxsdk;
//2 11 FbxDouble3  --------------------
public class FbxDouble3  {
  /// FbxDouble3(double x, double y, double z)
  public static native long meCreate(   double x, double y, double z);
  /// ~FbxDouble3()
  public static native void meDestroy(long lpjFbxDouble3);
  /// double GetAt(int idx)
  public static native double GetAt(long lpjFbxDouble3, int idx);
  /// void   SetAt(int idx, double v)
  public static native void SetAt(long lpjFbxDouble3, int idx, double v);
}
