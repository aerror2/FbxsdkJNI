//copyright by aerror 2016 
package fbxsdk;
//26 125 FbxLight  --------------------
public class FbxLight  {
  public    class   EType  {
   public static final int ePoint = 0;
   public static final int eDirectional = 1;
   public static final int eSpot = 2;
   public static final int eArea = 3;
   public static final int eVolume = 4;
}
  public    class   EDecayType  {
   public static final int eNone = 0;
   public static final int eLinear = 1;
   public static final int eQuadratic = 2;
   public static final int eCubic = 3;
}
  public    class   EAreaLightShape  {
   public static final int eRectangle = 0;
   public static final int eSphere = 1;
}
  /// void  SetShadowTexture (FbxTexture *pTexture)
  public static native void SetShadowTexture(long lpjFbxLight, long pTexture);
  /// FbxTexture *  GetShadowTexture () const
  public static native long GetShadowTexture(long lpjFbxLight);
  /// FbxPropertyT< EType >  LightType
  public static native void mepSetLightType(long lpjFbxLight, int lpEType);
  /// FbxPropertyT< EType >  LightType
  public static native int mepGetLightType(long lpjFbxLight);
  /// FbxPropertyT< EType >  LightType
  public static native long mptGetLightType(long lpjFbxLight);
  /// FbxPropertyT< FbxBool >  CastLight
  public static native void mepSetCastLight(long lpjFbxLight, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  CastLight
  public static native boolean mepGetCastLight(long lpjFbxLight);
  /// FbxPropertyT< FbxBool >  CastLight
  public static native long mptGetCastLight(long lpjFbxLight);
  /// FbxPropertyT< FbxBool >  DrawVolumetricLight
  public static native void mepSetDrawVolumetricLight(long lpjFbxLight, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  DrawVolumetricLight
  public static native boolean mepGetDrawVolumetricLight(long lpjFbxLight);
  /// FbxPropertyT< FbxBool >  DrawVolumetricLight
  public static native long mptGetDrawVolumetricLight(long lpjFbxLight);
  /// FbxPropertyT< FbxBool >  DrawGroundProjection
  public static native void mepSetDrawGroundProjection(long lpjFbxLight, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  DrawGroundProjection
  public static native boolean mepGetDrawGroundProjection(long lpjFbxLight);
  /// FbxPropertyT< FbxBool >  DrawGroundProjection
  public static native long mptGetDrawGroundProjection(long lpjFbxLight);
  /// FbxPropertyT< FbxBool >  DrawFrontFacingVolumetricLight
  public static native void mepSetDrawFrontFacingVolumetricLight(long lpjFbxLight, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  DrawFrontFacingVolumetricLight
  public static native boolean mepGetDrawFrontFacingVolumetricLight(long lpjFbxLight);
  /// FbxPropertyT< FbxBool >  DrawFrontFacingVolumetricLight
  public static native long mptGetDrawFrontFacingVolumetricLight(long lpjFbxLight);
  /// FbxPropertyT< FbxDouble3 >  Color
  public static native void mepSetColor(long lpjFbxLight, long lpFbxDouble3);
  /// FbxPropertyT< FbxDouble3 >  Color
  public static native long mepGetColor(long lpjFbxLight);
  /// FbxPropertyT< FbxDouble3 >  Color
  public static native long mptGetColor(long lpjFbxLight);
  /// FbxPropertyT< FbxDouble >  Intensity
  public static native void mepSetIntensity(long lpjFbxLight, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  Intensity
  public static native double mepGetIntensity(long lpjFbxLight);
  /// FbxPropertyT< FbxDouble >  Intensity
  public static native long mptGetIntensity(long lpjFbxLight);
  /// FbxPropertyT< FbxDouble >  InnerAngle
  public static native void mepSetInnerAngle(long lpjFbxLight, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  InnerAngle
  public static native double mepGetInnerAngle(long lpjFbxLight);
  /// FbxPropertyT< FbxDouble >  InnerAngle
  public static native long mptGetInnerAngle(long lpjFbxLight);
  /// FbxPropertyT< FbxDouble >  OuterAngle
  public static native void mepSetOuterAngle(long lpjFbxLight, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  OuterAngle
  public static native double mepGetOuterAngle(long lpjFbxLight);
  /// FbxPropertyT< FbxDouble >  OuterAngle
  public static native long mptGetOuterAngle(long lpjFbxLight);
  /// FbxPropertyT< FbxDouble >  Fog
  public static native void mepSetFog(long lpjFbxLight, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  Fog
  public static native double mepGetFog(long lpjFbxLight);
  /// FbxPropertyT< FbxDouble >  Fog
  public static native long mptGetFog(long lpjFbxLight);
  /// FbxPropertyT< EDecayType >  DecayType
  public static native void mepSetDecayType(long lpjFbxLight, int lpEDecayType);
  /// FbxPropertyT< EDecayType >  DecayType
  public static native int mepGetDecayType(long lpjFbxLight);
  /// FbxPropertyT< EDecayType >  DecayType
  public static native long mptGetDecayType(long lpjFbxLight);
  /// FbxPropertyT< FbxDouble >  DecayStart
  public static native void mepSetDecayStart(long lpjFbxLight, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  DecayStart
  public static native double mepGetDecayStart(long lpjFbxLight);
  /// FbxPropertyT< FbxDouble >  DecayStart
  public static native long mptGetDecayStart(long lpjFbxLight);
  /// FbxPropertyT< FbxString >  FileName
  public static native void mepSetFileName(long lpjFbxLight, long lpFbxString);
  /// FbxPropertyT< FbxString >  FileName
  public static native long mepGetFileName(long lpjFbxLight);
  /// FbxPropertyT< FbxString >  FileName
  public static native long mptGetFileName(long lpjFbxLight);
  /// FbxPropertyT< FbxBool >  EnableNearAttenuation
  public static native void mepSetEnableNearAttenuation(long lpjFbxLight, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  EnableNearAttenuation
  public static native boolean mepGetEnableNearAttenuation(long lpjFbxLight);
  /// FbxPropertyT< FbxBool >  EnableNearAttenuation
  public static native long mptGetEnableNearAttenuation(long lpjFbxLight);
  /// FbxPropertyT< FbxDouble >  NearAttenuationStart
  public static native void mepSetNearAttenuationStart(long lpjFbxLight, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  NearAttenuationStart
  public static native double mepGetNearAttenuationStart(long lpjFbxLight);
  /// FbxPropertyT< FbxDouble >  NearAttenuationStart
  public static native long mptGetNearAttenuationStart(long lpjFbxLight);
  /// FbxPropertyT< FbxDouble >  NearAttenuationEnd
  public static native void mepSetNearAttenuationEnd(long lpjFbxLight, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  NearAttenuationEnd
  public static native double mepGetNearAttenuationEnd(long lpjFbxLight);
  /// FbxPropertyT< FbxDouble >  NearAttenuationEnd
  public static native long mptGetNearAttenuationEnd(long lpjFbxLight);
  /// FbxPropertyT< FbxBool >  EnableFarAttenuation
  public static native void mepSetEnableFarAttenuation(long lpjFbxLight, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  EnableFarAttenuation
  public static native boolean mepGetEnableFarAttenuation(long lpjFbxLight);
  /// FbxPropertyT< FbxBool >  EnableFarAttenuation
  public static native long mptGetEnableFarAttenuation(long lpjFbxLight);
  /// FbxPropertyT< FbxDouble >  FarAttenuationStart
  public static native void mepSetFarAttenuationStart(long lpjFbxLight, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  FarAttenuationStart
  public static native double mepGetFarAttenuationStart(long lpjFbxLight);
  /// FbxPropertyT< FbxDouble >  FarAttenuationStart
  public static native long mptGetFarAttenuationStart(long lpjFbxLight);
  /// FbxPropertyT< FbxDouble >  FarAttenuationEnd
  public static native void mepSetFarAttenuationEnd(long lpjFbxLight, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  FarAttenuationEnd
  public static native double mepGetFarAttenuationEnd(long lpjFbxLight);
  /// FbxPropertyT< FbxDouble >  FarAttenuationEnd
  public static native long mptGetFarAttenuationEnd(long lpjFbxLight);
  /// FbxPropertyT< FbxBool >  CastShadows
  public static native void mepSetCastShadows(long lpjFbxLight, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  CastShadows
  public static native boolean mepGetCastShadows(long lpjFbxLight);
  /// FbxPropertyT< FbxBool >  CastShadows
  public static native long mptGetCastShadows(long lpjFbxLight);
  /// FbxPropertyT< FbxDouble3 >  ShadowColor
  public static native void mepSetShadowColor(long lpjFbxLight, long lpFbxDouble3);
  /// FbxPropertyT< FbxDouble3 >  ShadowColor
  public static native long mepGetShadowColor(long lpjFbxLight);
  /// FbxPropertyT< FbxDouble3 >  ShadowColor
  public static native long mptGetShadowColor(long lpjFbxLight);
  /// FbxPropertyT< EAreaLightShape >  AreaLightShape
  public static native void mepSetAreaLightShape(long lpjFbxLight, int lpEAreaLightShape);
  /// FbxPropertyT< EAreaLightShape >  AreaLightShape
  public static native int mepGetAreaLightShape(long lpjFbxLight);
  /// FbxPropertyT< EAreaLightShape >  AreaLightShape
  public static native long mptGetAreaLightShape(long lpjFbxLight);
  /// FbxPropertyT< FbxFloat >  LeftBarnDoor
  public static native void mepSetLeftBarnDoor(long lpjFbxLight, float lpFbxFloat);
  /// FbxPropertyT< FbxFloat >  LeftBarnDoor
  public static native float mepGetLeftBarnDoor(long lpjFbxLight);
  /// FbxPropertyT< FbxFloat >  LeftBarnDoor
  public static native long mptGetLeftBarnDoor(long lpjFbxLight);
  /// FbxPropertyT< FbxFloat >  RightBarnDoor
  public static native void mepSetRightBarnDoor(long lpjFbxLight, float lpFbxFloat);
  /// FbxPropertyT< FbxFloat >  RightBarnDoor
  public static native float mepGetRightBarnDoor(long lpjFbxLight);
  /// FbxPropertyT< FbxFloat >  RightBarnDoor
  public static native long mptGetRightBarnDoor(long lpjFbxLight);
  /// FbxPropertyT< FbxFloat >  TopBarnDoor
  public static native void mepSetTopBarnDoor(long lpjFbxLight, float lpFbxFloat);
  /// FbxPropertyT< FbxFloat >  TopBarnDoor
  public static native float mepGetTopBarnDoor(long lpjFbxLight);
  /// FbxPropertyT< FbxFloat >  TopBarnDoor
  public static native long mptGetTopBarnDoor(long lpjFbxLight);
  /// FbxPropertyT< FbxFloat >  BottomBarnDoor
  public static native void mepSetBottomBarnDoor(long lpjFbxLight, float lpFbxFloat);
  /// FbxPropertyT< FbxFloat >  BottomBarnDoor
  public static native float mepGetBottomBarnDoor(long lpjFbxLight);
  /// FbxPropertyT< FbxFloat >  BottomBarnDoor
  public static native long mptGetBottomBarnDoor(long lpjFbxLight);
  /// FbxPropertyT< FbxBool >  EnableBarnDoor
  public static native void mepSetEnableBarnDoor(long lpjFbxLight, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  EnableBarnDoor
  public static native boolean mepGetEnableBarnDoor(long lpjFbxLight);
  /// FbxPropertyT< FbxBool >  EnableBarnDoor
  public static native long mptGetEnableBarnDoor(long lpjFbxLight);
  /// FbxLight * Create( FbxNodeAttribute* lpFbxNodeAttribute,  const char* pName )
  public static native long Create(   long lpFbxNodeAttribute, String pName);
}
