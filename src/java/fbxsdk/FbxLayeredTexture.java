package fbxsdk;
//26 98 FbxLayeredTexture  --------------------
public class FbxLayeredTexture  {
  public    class   EBlendMode  {
   public static final int eTranslucent = 0;
   public static final int eAdditive = 1;
   public static final int eModulate = 2;
   public static final int eModulate2 = 3;
   public static final int eOver = 4;
   public static final int eNormal = 5;
   public static final int eDissolve = 6;
   public static final int eDarken = 7;
   public static final int eColorBurn = 8;
   public static final int eLinearBurn = 9;
   public static final int eDarkerColor = 10;
   public static final int eLighten = 11;
   public static final int eScreen = 12;
   public static final int eColorDodge = 13;
   public static final int eLinearDodge = 14;
   public static final int eLighterColor = 15;
   public static final int eSoftLight = 16;
   public static final int eHardLight = 17;
   public static final int eVividLight = 18;
   public static final int eLinearLight = 19;
   public static final int ePinLight = 20;
   public static final int eHardMix = 21;
   public static final int eDifference = 22;
   public static final int eExclusion = 23;
   public static final int eSubtract = 24;
   public static final int eDivide = 25;
   public static final int eHue = 26;
   public static final int eSaturation = 27;
   public static final int eColor = 28;
   public static final int eLuminosity = 29;
   public static final int eOverlay = 30;
   public static final int eBlendModeCount = 31;
}
  /// bool  SetTextureBlendMode (int pIndex, EBlendMode pMode)
  public static native boolean SetTextureBlendMode(long lpjFbxLayeredTexture, int pIndex, int pMode);
  /// bool  GetTextureBlendMode (int pIndex, EBlendMode &pMode) const
  public static native boolean GetTextureBlendMode(long lpjFbxLayeredTexture, int pIndex, Integer pMode);
  /// bool  SetTextureAlpha (int pIndex, double pAlpha)
  public static native boolean SetTextureAlpha(long lpjFbxLayeredTexture, int pIndex, double pAlpha);
  /// bool  GetTextureAlpha (int pIndex, double &pAlpha) const
  public static native boolean GetTextureAlpha(long lpjFbxLayeredTexture, int pIndex, Double pAlpha);
  /// FbxLayeredTexture * Create( FbxLayerContainer* pOwner, const char* pName )
  public static native long Create(   long pOwner, String pName);
}
