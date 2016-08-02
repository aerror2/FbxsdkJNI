//copyright by aerror 2016 
package fbxsdk;
//26 225 FbxTexture  --------------------
public class FbxTexture  {
  public    class   EUnifiedMappingType  {
   public static final int eUMT_UV = 0;
   public static final int eUMT_XY = 1;
   public static final int eUMT_YZ = 2;
   public static final int eUMT_XZ = 3;
   public static final int eUMT_SPHERICAL = 4;
   public static final int eUMT_CYLINDRICAL = 5;
   public static final int eUMT_ENVIRONMENT = 6;
   public static final int eUMT_PROJECTION = 7;
   public static final int eUMT_BOX = 8;
   public static final int eUMT_FACE = 9;
   public static final int eUMT_NO_MAPPING = 10;
}
  public    class   ETextureUse6  {
   public static final int eTEXTURE_USE_6_STANDARD = 0;
   public static final int eTEXTURE_USE_6_SPHERICAL_REFLEXION_MAP = 1;
   public static final int eTEXTURE_USE_6_SPHERE_REFLEXION_MAP = 2;
   public static final int eTEXTURE_USE_6_SHADOW_MAP = 3;
   public static final int eTEXTURE_USE_6_LIGHT_MAP = 4;
   public static final int eTEXTURE_USE_6_BUMP_NORMAL_MAP = 5;
}
  public    class   EWrapMode  {
   public static final int eRepeat = 0;
   public static final int eClamp = 1;
}
  public    class   EBlendMode  {
   public static final int eTranslucent = 0;
   public static final int eAdditive = 1;
   public static final int eModulate = 2;
   public static final int eModulate2 = 3;
   public static final int eOver = 4;
}
  public    class   EAlignMode  {
   public static final int eLeft = 0;
   public static final int eRight = 1;
   public static final int eTop = 2;
   public static final int eBottom = 3;
}
  public    class   ECoordinates  {
   public static final int eU = 0;
   public static final int eV = 1;
   public static final int eW = 2;
}
  public    class   EAlphaSource  {
   public static final int eNone = 0;
   public static final int eRGBIntensity = 1;
   public static final int eBlack = 2;
}
  public    class   EMappingType  {
   public static final int eNull = 0;
   public static final int ePlanar = 1;
   public static final int eSpherical = 2;
   public static final int eCylindrical = 3;
   public static final int eBox = 4;
   public static final int eFace = 5;
   public static final int eUV = 6;
   public static final int eEnvironment = 7;
}
  public    class   EPlanarMappingNormal  {
   public static final int ePlanarNormalX = 0;
   public static final int ePlanarNormalY = 1;
   public static final int ePlanarNormalZ = 2;
}
  public    class   ETextureUse  {
   public static final int eStandard = 0;
   public static final int eShadowMap = 1;
   public static final int eLightMap = 2;
   public static final int eSphericalReflectionMap = 3;
   public static final int eSphereReflectionMap = 4;
   public static final int eBumpNormalMap = 5;
}
  /// virtual void  Reset ()
  public static native void Reset(long lpjFbxTexture);
  /// void  SetSwapUV (bool pSwapUV)
  public static native void SetSwapUV(long lpjFbxTexture, boolean pSwapUV);
  /// bool  GetSwapUV () const
  public static native boolean GetSwapUV(long lpjFbxTexture);
  /// void  SetPremultiplyAlpha (bool pPremultiplyAlpha)
  public static native void SetPremultiplyAlpha(long lpjFbxTexture, boolean pPremultiplyAlpha);
  /// bool  GetPremultiplyAlpha () const
  public static native boolean GetPremultiplyAlpha(long lpjFbxTexture);
  /// void  SetAlphaSource (EAlphaSource pAlphaSource)
  public static native void SetAlphaSource(long lpjFbxTexture, int pAlphaSource);
  /// EAlphaSource  GetAlphaSource () const
  public static native int GetAlphaSource(long lpjFbxTexture);
  /// void  SetCropping (int pLeft, int pTop, int pRight, int pBottom)
  public static native void SetCropping(long lpjFbxTexture, int pLeft, int pTop, int pRight, int pBottom);
  /// int  GetCroppingLeft () const
  public static native int GetCroppingLeft(long lpjFbxTexture);
  /// int  GetCroppingTop () const
  public static native int GetCroppingTop(long lpjFbxTexture);
  /// int  GetCroppingRight () const
  public static native int GetCroppingRight(long lpjFbxTexture);
  /// int  GetCroppingBottom () const
  public static native int GetCroppingBottom(long lpjFbxTexture);
  /// void  SetMappingType (EMappingType pMappingType)
  public static native void SetMappingType(long lpjFbxTexture, int pMappingType);
  /// EMappingType  GetMappingType () const
  public static native int GetMappingType(long lpjFbxTexture);
  /// void  SetPlanarMappingNormal (EPlanarMappingNormal pPlanarMappingNormal)
  public static native void SetPlanarMappingNormal(long lpjFbxTexture, int pPlanarMappingNormal);
  /// EPlanarMappingNormal  GetPlanarMappingNormal () const
  public static native int GetPlanarMappingNormal(long lpjFbxTexture);
  /// void  SetTextureUse (ETextureUse pTextureUse)
  public static native void SetTextureUse(long lpjFbxTexture, int pTextureUse);
  /// ETextureUse  GetTextureUse () const
  public static native int GetTextureUse(long lpjFbxTexture);
  /// void  SetWrapMode (EWrapMode pWrapU, EWrapMode pWrapV)
  public static native void SetWrapMode(long lpjFbxTexture, int pWrapU, int pWrapV);
  /// EWrapMode  GetWrapModeU () const
  public static native int GetWrapModeU(long lpjFbxTexture);
  /// EWrapMode  GetWrapModeV () const
  public static native int GetWrapModeV(long lpjFbxTexture);
  /// void  SetBlendMode (EBlendMode pBlendMode)
  public static native void SetBlendMode(long lpjFbxTexture, int pBlendMode);
  /// EBlendMode  GetBlendMode () const
  public static native int GetBlendMode(long lpjFbxTexture);
  /// void  SetDefaultT (const FbxVector4 &pT)
  public static native void SetDefaultT(long lpjFbxTexture, Long pT);
  /// FbxVector4 &  GetDefaultT (FbxVector4 &pT) const
  public static native long GetDefaultT(long lpjFbxTexture, Long pT);
  /// void  SetDefaultR (const FbxVector4 &pR)
  public static native void SetDefaultR(long lpjFbxTexture, Long pR);
  /// FbxVector4 &  GetDefaultR (FbxVector4 &pR) const
  public static native long GetDefaultR(long lpjFbxTexture, Long pR);
  /// void  SetDefaultS (const FbxVector4 &pS)
  public static native void SetDefaultS(long lpjFbxTexture, Long pS);
  /// FbxVector4 &  GetDefaultS (FbxVector4 &pS) const
  public static native long GetDefaultS(long lpjFbxTexture, Long pS);
  /// void  SetDefaultAlpha (double pAlpha)
  public static native void SetDefaultAlpha(long lpjFbxTexture, double pAlpha);
  /// double  GetDefaultAlpha () const
  public static native double GetDefaultAlpha(long lpjFbxTexture);
  /// void  SetTranslation (double pU, double pV)
  public static native void SetTranslation(long lpjFbxTexture, double pU, double pV);
  /// double  GetTranslationU () const
  public static native double GetTranslationU(long lpjFbxTexture);
  /// double  GetTranslationV () const
  public static native double GetTranslationV(long lpjFbxTexture);
  /// void  SetRotation (double pU, double pV, double pW=0.0)
  public static native void SetRotation(long lpjFbxTexture, double pU, double pV, double pW);
  /// double  GetRotationU () const
  public static native double GetRotationU(long lpjFbxTexture);
  /// double  GetRotationV () const
  public static native double GetRotationV(long lpjFbxTexture);
  /// double  GetRotationW () const
  public static native double GetRotationW(long lpjFbxTexture);
  /// void  SetScale (double pU, double pV)
  public static native void SetScale(long lpjFbxTexture, double pU, double pV);
  /// double  GetScaleU () const
  public static native double GetScaleU(long lpjFbxTexture);
  /// double  GetScaleV () const
  public static native double GetScaleV(long lpjFbxTexture);
  /// FbxPropertyT< ETextureUse6 >  TextureTypeUse
  public static native void mepSetTextureTypeUse(long lpjFbxTexture, int lpETextureUse6);
  /// FbxPropertyT< ETextureUse6 >  TextureTypeUse
  public static native int mepGetTextureTypeUse(long lpjFbxTexture);
  /// FbxPropertyT< ETextureUse6 >  TextureTypeUse
  public static native long mptGetTextureTypeUse(long lpjFbxTexture);
  /// FbxPropertyT< FbxDouble >  Alpha
  public static native void mepSetAlpha(long lpjFbxTexture, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  Alpha
  public static native double mepGetAlpha(long lpjFbxTexture);
  /// FbxPropertyT< FbxDouble >  Alpha
  public static native long mptGetAlpha(long lpjFbxTexture);
  /// FbxPropertyT< EUnifiedMappingType >  CurrentMappingType
  public static native void mepSetCurrentMappingType(long lpjFbxTexture, int lpEUnifiedMappingType);
  /// FbxPropertyT< EUnifiedMappingType >  CurrentMappingType
  public static native int mepGetCurrentMappingType(long lpjFbxTexture);
  /// FbxPropertyT< EUnifiedMappingType >  CurrentMappingType
  public static native long mptGetCurrentMappingType(long lpjFbxTexture);
  /// FbxPropertyT< EWrapMode >  WrapModeU
  public static native void mepSetWrapModeU(long lpjFbxTexture, int lpEWrapMode);
  /// FbxPropertyT< EWrapMode >  WrapModeU
  public static native int mepGetWrapModeU(long lpjFbxTexture);
  /// FbxPropertyT< EWrapMode >  WrapModeU
  public static native long mptGetWrapModeU(long lpjFbxTexture);
  /// FbxPropertyT< EWrapMode >  WrapModeV
  public static native void mepSetWrapModeV(long lpjFbxTexture, int lpEWrapMode);
  /// FbxPropertyT< EWrapMode >  WrapModeV
  public static native int mepGetWrapModeV(long lpjFbxTexture);
  /// FbxPropertyT< EWrapMode >  WrapModeV
  public static native long mptGetWrapModeV(long lpjFbxTexture);
  /// FbxPropertyT< FbxBool >  UVSwap
  public static native void mepSetUVSwap(long lpjFbxTexture, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  UVSwap
  public static native boolean mepGetUVSwap(long lpjFbxTexture);
  /// FbxPropertyT< FbxBool >  UVSwap
  public static native long mptGetUVSwap(long lpjFbxTexture);
  /// FbxPropertyT< FbxBool >  PremultiplyAlpha
  public static native void mepSetPremultiplyAlpha(long lpjFbxTexture, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  PremultiplyAlpha
  public static native boolean mepGetPremultiplyAlpha(long lpjFbxTexture);
  /// FbxPropertyT< FbxBool >  PremultiplyAlpha
  public static native long mptGetPremultiplyAlpha(long lpjFbxTexture);
  /// FbxPropertyT< FbxDouble3 >  Translation
  public static native void mepSetTranslation(long lpjFbxTexture, long lpFbxDouble3);
  /// FbxPropertyT< FbxDouble3 >  Translation
  public static native long mepGetTranslation(long lpjFbxTexture);
  /// FbxPropertyT< FbxDouble3 >  Translation
  public static native long mptGetTranslation(long lpjFbxTexture);
  /// FbxPropertyT< FbxDouble3 >  Rotation
  public static native void mepSetRotation(long lpjFbxTexture, long lpFbxDouble3);
  /// FbxPropertyT< FbxDouble3 >  Rotation
  public static native long mepGetRotation(long lpjFbxTexture);
  /// FbxPropertyT< FbxDouble3 >  Rotation
  public static native long mptGetRotation(long lpjFbxTexture);
  /// FbxPropertyT< FbxDouble3 >  Scaling
  public static native void mepSetScaling(long lpjFbxTexture, long lpFbxDouble3);
  /// FbxPropertyT< FbxDouble3 >  Scaling
  public static native long mepGetScaling(long lpjFbxTexture);
  /// FbxPropertyT< FbxDouble3 >  Scaling
  public static native long mptGetScaling(long lpjFbxTexture);
  /// FbxPropertyT< FbxDouble3 >  RotationPivot
  public static native void mepSetRotationPivot(long lpjFbxTexture, long lpFbxDouble3);
  /// FbxPropertyT< FbxDouble3 >  RotationPivot
  public static native long mepGetRotationPivot(long lpjFbxTexture);
  /// FbxPropertyT< FbxDouble3 >  RotationPivot
  public static native long mptGetRotationPivot(long lpjFbxTexture);
  /// FbxPropertyT< FbxDouble3 >  ScalingPivot
  public static native void mepSetScalingPivot(long lpjFbxTexture, long lpFbxDouble3);
  /// FbxPropertyT< FbxDouble3 >  ScalingPivot
  public static native long mepGetScalingPivot(long lpjFbxTexture);
  /// FbxPropertyT< FbxDouble3 >  ScalingPivot
  public static native long mptGetScalingPivot(long lpjFbxTexture);
  /// FbxPropertyT< EBlendMode >  CurrentTextureBlendMode
  public static native void mepSetCurrentTextureBlendMode(long lpjFbxTexture, int lpEBlendMode);
  /// FbxPropertyT< EBlendMode >  CurrentTextureBlendMode
  public static native int mepGetCurrentTextureBlendMode(long lpjFbxTexture);
  /// FbxPropertyT< EBlendMode >  CurrentTextureBlendMode
  public static native long mptGetCurrentTextureBlendMode(long lpjFbxTexture);
  /// FbxPropertyT< FbxString >  UVSet
  public static native void mepSetUVSet(long lpjFbxTexture, long lpFbxString);
  /// FbxPropertyT< FbxString >  UVSet
  public static native long mepGetUVSet(long lpjFbxTexture);
  /// FbxPropertyT< FbxString >  UVSet
  public static native long mptGetUVSet(long lpjFbxTexture);
  /// FbxTexture * Create( FbxObject* lpFbxObject,  const char* pName )
  public static native long Create(   long lpFbxObject, String pName);
}
