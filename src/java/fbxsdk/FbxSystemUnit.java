package fbxsdk;
//26 113 FbxSystemUnit  --------------------
public class FbxSystemUnit  {
  /// FbxSystemUnit ()
  public static native long meCreate(  );
  /// FbxSystemUnit (double pScaleFactor, double pMultiplier=1.0)
  public static native long meCreate1(   double pScaleFactor, double pMultiplier);
  /// ~FbxSystemUnit ()
  public static native void meDestroy(long lpjFbxSystemUnit);
  /// void  ConvertScene (FbxScene *pScene, const ConversionOptions &pOptions=DefaultConversionOptions) const
  public static native void ConvertScene(long lpjFbxSystemUnit, long pScene, Long pOptions);
  /// void  ConvertChildren (FbxNode *pRoot, const FbxSystemUnit &pSrcUnit, const ConversionOptions &pOptions=DefaultConversionOptions) const
  public static native void ConvertChildren(long lpjFbxSystemUnit, long pRoot, Long pSrcUnit, Long pOptions);
  /// void  ConvertScene (FbxScene *pScene, FbxNode *pFbxRoot, const ConversionOptions &pOptions=DefaultConversionOptions) const
  public static native void ConvertScene1(long lpjFbxSystemUnit, long pScene, long pFbxRoot, Long pOptions);
  /// double  GetScaleFactor () const
  public static native double GetScaleFactor(long lpjFbxSystemUnit);
  /// FbxString  GetScaleFactorAsString (bool pAbbreviated=true) const
  public static native long GetScaleFactorAsString(long lpjFbxSystemUnit, boolean pAbbreviated);
  /// FbxString  GetScaleFactorAsString_Plurial () const
  public static native long GetScaleFactorAsString_Plurial(long lpjFbxSystemUnit);
  /// double  GetMultiplier () const
  public static native double GetMultiplier(long lpjFbxSystemUnit);
  /// double  GetConversionFactorTo (const FbxSystemUnit &pTarget) const
  public static native double GetConversionFactorTo(long lpjFbxSystemUnit, Long pTarget);
  /// double  GetConversionFactorFrom (const FbxSystemUnit &pSource) const
  public static native double GetConversionFactorFrom(long lpjFbxSystemUnit, Long pSource);
}
