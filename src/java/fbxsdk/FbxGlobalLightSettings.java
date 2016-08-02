//copyright by aerror 2016 
package fbxsdk;
//26 118 FbxGlobalLightSettings  --------------------
public class FbxGlobalLightSettings  {
  public                             class   EFogMode  {
   public static final int eLinear = 0;
   public static final int eExponential = 1;
   public static final int eExponentialSquareRoot = 2;
}
  /// void  RestoreDefaultSettings ()
  public static native void RestoreDefaultSettings(long lpjFbxGlobalLightSettings);
  /// void  SetAmbientColor (FbxColor pAmbientColor)
  public static native void SetAmbientColor(long lpjFbxGlobalLightSettings, long pAmbientColor);
  /// FbxColor  GetAmbientColor () const
  public static native long GetAmbientColor(long lpjFbxGlobalLightSettings);
  /// void  SetFogEnable (bool pEnable)
  public static native void SetFogEnable(long lpjFbxGlobalLightSettings, boolean pEnable);
  /// bool  GetFogEnable () const
  public static native boolean GetFogEnable(long lpjFbxGlobalLightSettings);
  /// void  SetFogColor (FbxColor pColor)
  public static native void SetFogColor(long lpjFbxGlobalLightSettings, long pColor);
  /// FbxColor  GetFogColor () const
  public static native long GetFogColor(long lpjFbxGlobalLightSettings);
  /// void  SetFogMode (EFogMode pMode)
  public static native void SetFogMode(long lpjFbxGlobalLightSettings, int pMode);
  /// EFogMode  GetFogMode () const
  public static native int GetFogMode(long lpjFbxGlobalLightSettings);
  /// void  SetFogDensity (double pDensity)
  public static native void SetFogDensity(long lpjFbxGlobalLightSettings, double pDensity);
  /// double  GetFogDensity () const
  public static native double GetFogDensity(long lpjFbxGlobalLightSettings);
  /// void  SetFogStart (double pStart)
  public static native void SetFogStart(long lpjFbxGlobalLightSettings, double pStart);
  /// double  GetFogStart () const
  public static native double GetFogStart(long lpjFbxGlobalLightSettings);
  /// void  SetFogEnd (double pEnd)
  public static native void SetFogEnd(long lpjFbxGlobalLightSettings, double pEnd);
  /// double  GetFogEnd () const
  public static native double GetFogEnd(long lpjFbxGlobalLightSettings);
  /// void  SetShadowEnable (bool pShadowEnable)
  public static native void SetShadowEnable(long lpjFbxGlobalLightSettings, boolean pShadowEnable);
  /// bool  GetShadowEnable () const
  public static native boolean GetShadowEnable(long lpjFbxGlobalLightSettings);
  /// void  SetShadowIntensity (double pShadowIntensity)
  public static native void SetShadowIntensity(long lpjFbxGlobalLightSettings, double pShadowIntensity);
  /// double  GetShadowIntensity () const
  public static native double GetShadowIntensity(long lpjFbxGlobalLightSettings);
  /// int  GetShadowPlaneCount () const
  public static native int GetShadowPlaneCount(long lpjFbxGlobalLightSettings);
  /// ShadowPlane *  GetShadowPlane (int pIndex, FbxStatus *pStatus=NULL)
  public static native long GetShadowPlane(long lpjFbxGlobalLightSettings, int pIndex, long pStatus);
  /// void  AddShadowPlane (ShadowPlane pShadowPlane)
  public static native void AddShadowPlane(long lpjFbxGlobalLightSettings, long pShadowPlane);
  /// void  RemoveAllShadowPlanes ()
  public static native void RemoveAllShadowPlanes(long lpjFbxGlobalLightSettings);
//No Static CreateFunc
}
