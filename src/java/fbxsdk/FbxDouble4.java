package fbxsdk;
//1 10 FbxDouble4  --------------------
public class FbxDouble4  {
  /// FbxDouble4(double x, double y, double z, double w)
  public static native long meCreate(   double x, double y, double z, double w);
  /// ~FbxDouble4()
  public static native void meDestroy(long lpjFbxDouble4);
  /// double GetAt(int idx)
  public static native double GetAt(long lpjFbxDouble4, int idx);
  /// void   SetAt(int idx, double v)
  public static native void SetAt(long lpjFbxDouble4, int idx, double v);
}
