package fbxsdk;
//26 89 FbxColor  --------------------
public class FbxColor  {
  /// FbxColor ()
  public static native long meCreate(  );
  /// FbxColor (const double pRed, const double pGreen, const double pBlue, const double pAlpha=1.0)
  public static native long meCreate1(   double pRed, double pGreen, double pBlue, double pAlpha);
  /// FbxColor (const FbxDouble3 &pRGB, const double pAlpha=1.0)
  public static native long meCreate2(   Long pRGB, double pAlpha);
  /// FbxColor (const FbxDouble4 &pRGBA)
  public static native long meCreate3(   Long pRGBA);
  /// ~FbxColor ()
  public static native void meDestroy(long lpjFbxColor);
  /// void  Set (const double pRed, const double pGreen, const double pBlue, const double pAlpha=1.0)
  public static native void Set(long lpjFbxColor, double pRed, double pGreen, double pBlue, double pAlpha);
  /// bool  IsValid () const
  public static native boolean IsValid(long lpjFbxColor);
}
