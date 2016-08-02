package fbxsdk;
//26 514 FbxCamera  --------------------
public class FbxCamera  {
  public    class   EProjectionType  {
   public static final int ePerspective = 0;
   public static final int eOrthogonal = 1;
}
  public    class   EFormat  {
   public static final int eCustomFormat = 0;
   public static final int eD1NTSC = 1;
   public static final int eNTSC = 2;
   public static final int ePAL = 3;
   public static final int eD1PAL = 4;
   public static final int eHD = 5;
   public static final int e640x480 = 6;
   public static final int e320x200 = 7;
   public static final int e320x240 = 8;
   public static final int e128x128 = 9;
   public static final int eFullscreen = 10;
}
  public    class   EAspectRatioMode  {
   public static final int eWindowSize = 0;
   public static final int eFixedRatio = 1;
   public static final int eFixedResolution = 2;
   public static final int eFixedWidth = 3;
   public static final int eFixedHeight = 4;
}
  public    class   EApertureFormat  {
   public static final int eCustomAperture = 0;
   public static final int e16mmTheatrical = 1;
   public static final int eSuper16mm = 2;
   public static final int e35mmAcademy = 3;
   public static final int e35mmTVProjection = 4;
   public static final int e35mmFullAperture = 5;
   public static final int e35mm185Projection = 6;
   public static final int e35mmAnamorphic = 7;
   public static final int e70mmProjection = 8;
   public static final int eVistaVision = 9;
   public static final int eDynaVision = 10;
   public static final int eIMAX = 11;
}
  public    class   EApertureMode  {
   public static final int eHorizAndVert = 0;
   public static final int eHorizontal = 1;
   public static final int eVertical = 2;
   public static final int eFocalLength = 3;
}
  public    class   EGateFit  {
   public static final int eFitNone = 0;
   public static final int eFitVertical = 1;
   public static final int eFitHorizontal = 2;
   public static final int eFitFill = 3;
   public static final int eFitOverscan = 4;
   public static final int eFitStretch = 5;
}
  public    class   EFilmRollOrder  {
   public static final int eRotateFirst = 0;
   public static final int eTranslateFirst = 1;
}
  public    class   EPlateDrawingMode  {
   public static final int ePlateBackground = 0;
   public static final int ePlateForeground = 1;
   public static final int ePlateBackAndFront = 2;
}
  public    class   EFrontBackPlaneDistanceMode  {
   public static final int eRelativeToInterest = 0;
   public static final int eRelativeToCamera = 1;
}
  public    class   EFrontBackPlaneDisplayMode  {
   public static final int ePlanesDisabled = 0;
   public static final int ePlanesAlways = 1;
   public static final int ePlanesWhenMedia = 2;
}
  public    class   ESafeAreaStyle  {
   public static final int eSafeAreaRound = 0;
   public static final int eSafeAreaSquare = 1;
}
  public    class   ERenderOptionsUsageTime  {
   public static final int eInteractive = 0;
   public static final int eOnDemand = 1;
}
  public    class   EAntialiasingMethod  {
   public static final int eAAOversampling = 0;
   public static final int eAAHardware = 1;
}
  public    class   ESamplingType  {
   public static final int eSamplingUniform = 0;
   public static final int eSamplingStochastic = 1;
}
  public    class   EFocusDistanceSource  {
   public static final int eFocusSrcCameraInterest = 0;
   public static final int eFocusSpecificDistance = 1;
}
  /// virtual FbxNodeAttribute::EType  GetAttributeType () const
  public static native int GetAttributeType(long lpjFbxCamera);
  /// void  Reset ()
  public static native void Reset(long lpjFbxCamera);
  /// void  SetFormat (EFormat pFormat)
  public static native void SetFormat(long lpjFbxCamera, int pFormat);
  /// EFormat  GetFormat () const
  public static native int GetFormat(long lpjFbxCamera);
  /// void  SetAspect (EAspectRatioMode pRatioMode, double pWidth, double pHeight)
  public static native void SetAspect(long lpjFbxCamera, int pRatioMode, double pWidth, double pHeight);
  /// EAspectRatioMode  GetAspectRatioMode () const
  public static native int GetAspectRatioMode(long lpjFbxCamera);
  /// void  SetPixelRatio (double pRatio)
  public static native void SetPixelRatio(long lpjFbxCamera, double pRatio);
  /// double  GetPixelRatio () const
  public static native double GetPixelRatio(long lpjFbxCamera);
  /// void  SetNearPlane (double pDistance)
  public static native void SetNearPlane(long lpjFbxCamera, double pDistance);
  /// double  GetNearPlane () const
  public static native double GetNearPlane(long lpjFbxCamera);
  /// void  SetFarPlane (double pDistance)
  public static native void SetFarPlane(long lpjFbxCamera, double pDistance);
  /// double  GetFarPlane () const
  public static native double GetFarPlane(long lpjFbxCamera);
  /// void  SetApertureFormat (EApertureFormat pFormat)
  public static native void SetApertureFormat(long lpjFbxCamera, int pFormat);
  /// EApertureFormat  GetApertureFormat () const
  public static native int GetApertureFormat(long lpjFbxCamera);
  /// void  SetApertureMode (EApertureMode pMode)
  public static native void SetApertureMode(long lpjFbxCamera, int pMode);
  /// EApertureMode  GetApertureMode () const
  public static native int GetApertureMode(long lpjFbxCamera);
  /// void  SetApertureWidth (double pWidth)
  public static native void SetApertureWidth(long lpjFbxCamera, double pWidth);
  /// double  GetApertureWidth () const
  public static native double GetApertureWidth(long lpjFbxCamera);
  /// void  SetApertureHeight (double pHeight)
  public static native void SetApertureHeight(long lpjFbxCamera, double pHeight);
  /// double  GetApertureHeight () const
  public static native double GetApertureHeight(long lpjFbxCamera);
  /// void  SetSqueezeRatio (double pRatio)
  public static native void SetSqueezeRatio(long lpjFbxCamera, double pRatio);
  /// double  GetSqueezeRatio () const
  public static native double GetSqueezeRatio(long lpjFbxCamera);
  /// double  ComputeFieldOfView (double pFocalLength) const
  public static native double ComputeFieldOfView(long lpjFbxCamera, double pFocalLength);
  /// double  ComputeFocalLength (double pAngleOfView) const
  public static native double ComputeFocalLength(long lpjFbxCamera, double pAngleOfView);
  /// void  SetBackgroundFileName (const char *pFileName)
  public static native void SetBackgroundFileName(long lpjFbxCamera, String pFileName);
  /// const char *  GetBackgroundFileName () const
  public static native String GetBackgroundFileName(long lpjFbxCamera);
  /// void  SetBackgroundMediaName (const char *pFileName)
  public static native void SetBackgroundMediaName(long lpjFbxCamera, String pFileName);
  /// const char *  GetBackgroundMediaName () const
  public static native String GetBackgroundMediaName(long lpjFbxCamera);
  /// void  SetForegroundFileName (const char *pFileName)
  public static native void SetForegroundFileName(long lpjFbxCamera, String pFileName);
  /// const char *  GetForegroundFileName () const
  public static native String GetForegroundFileName(long lpjFbxCamera);
  /// void  SetForegroundMediaName (const char *pFileName)
  public static native void SetForegroundMediaName(long lpjFbxCamera, String pFileName);
  /// const char *  GetForegroundMediaName () const
  public static native String GetForegroundMediaName(long lpjFbxCamera);
  /// void  SetBackgroundAlphaTreshold (double pThreshold)
  public static native void SetBackgroundAlphaTreshold(long lpjFbxCamera, double pThreshold);
  /// double  GetBackgroundAlphaTreshold () const
  public static native double GetBackgroundAlphaTreshold(long lpjFbxCamera);
  /// void  SetBackPlateFitImage (bool pFitImage)
  public static native void SetBackPlateFitImage(long lpjFbxCamera, boolean pFitImage);
  /// bool  GetBackPlateFitImage () const
  public static native boolean GetBackPlateFitImage(long lpjFbxCamera);
  /// void  SetBackPlateCrop (bool pCrop)
  public static native void SetBackPlateCrop(long lpjFbxCamera, boolean pCrop);
  /// bool  GetBackPlateCrop () const
  public static native boolean GetBackPlateCrop(long lpjFbxCamera);
  /// void  SetBackPlateCenter (bool pCenter)
  public static native void SetBackPlateCenter(long lpjFbxCamera, boolean pCenter);
  /// bool  GetBackPlateCenter () const
  public static native boolean GetBackPlateCenter(long lpjFbxCamera);
  /// void  SetBackPlateKeepRatio (bool pKeepRatio)
  public static native void SetBackPlateKeepRatio(long lpjFbxCamera, boolean pKeepRatio);
  /// bool  GetBackPlateKeepRatio () const
  public static native boolean GetBackPlateKeepRatio(long lpjFbxCamera);
  /// void  SetShowFrontPlate (bool pEnable)
  public static native void SetShowFrontPlate(long lpjFbxCamera, boolean pEnable);
  /// bool  GetShowFrontPlate () const
  public static native boolean GetShowFrontPlate(long lpjFbxCamera);
  /// void  SetFrontPlateFitImage (bool pFrontPlateFitImage)
  public static native void SetFrontPlateFitImage(long lpjFbxCamera, boolean pFrontPlateFitImage);
  /// bool  GetFrontPlateFitImage () const
  public static native boolean GetFrontPlateFitImage(long lpjFbxCamera);
  /// void  SetFrontPlateCrop (bool pFrontPlateCrop)
  public static native void SetFrontPlateCrop(long lpjFbxCamera, boolean pFrontPlateCrop);
  /// bool  GetFrontPlateCrop () const
  public static native boolean GetFrontPlateCrop(long lpjFbxCamera);
  /// void  SetFrontPlateCenter (bool pFrontPlateCenter)
  public static native void SetFrontPlateCenter(long lpjFbxCamera, boolean pFrontPlateCenter);
  /// bool  GetFrontPlateCenter () const
  public static native boolean GetFrontPlateCenter(long lpjFbxCamera);
  /// void  SetFrontPlateKeepRatio (bool pFrontPlateKeepRatio)
  public static native void SetFrontPlateKeepRatio(long lpjFbxCamera, boolean pFrontPlateKeepRatio);
  /// bool  GetFrontPlateKeepRatio () const
  public static native boolean GetFrontPlateKeepRatio(long lpjFbxCamera);
  /// void  SetForegroundOpacity (double pOpacity)
  public static native void SetForegroundOpacity(long lpjFbxCamera, double pOpacity);
  /// double  GetForegroundOpacity () const
  public static native double GetForegroundOpacity(long lpjFbxCamera);
  /// void  SetForegroundTexture (FbxTexture *pTexture)
  public static native void SetForegroundTexture(long lpjFbxCamera, long pTexture);
  /// FbxTexture *  GetForegroundTexture () const
  public static native long GetForegroundTexture(long lpjFbxCamera);
  /// void  SetBackPlaneDistanceMode (EFrontBackPlaneDistanceMode pMode)
  public static native void SetBackPlaneDistanceMode(long lpjFbxCamera, int pMode);
  /// EFrontBackPlaneDistanceMode  GetBackPlaneDistanceMode () const
  public static native int GetBackPlaneDistanceMode(long lpjFbxCamera);
  /// void  SetFrontPlaneDistance (double pDistance)
  public static native void SetFrontPlaneDistance(long lpjFbxCamera, double pDistance);
  /// double  GetFrontPlaneDistance () const
  public static native double GetFrontPlaneDistance(long lpjFbxCamera);
  /// void  SetFrontPlaneDistanceMode (EFrontBackPlaneDistanceMode pMode)
  public static native void SetFrontPlaneDistanceMode(long lpjFbxCamera, int pMode);
  /// EFrontBackPlaneDistanceMode  GetFrontPlaneDistanceMode () const
  public static native int GetFrontPlaneDistanceMode(long lpjFbxCamera);
  /// void  SetViewFrustumFrontPlaneMode (EFrontBackPlaneDisplayMode pMode)
  public static native void SetViewFrustumFrontPlaneMode(long lpjFbxCamera, int pMode);
  /// EFrontBackPlaneDisplayMode  GetViewFrustumFrontPlaneMode () const
  public static native int GetViewFrustumFrontPlaneMode(long lpjFbxCamera);
  /// void  SetViewFrustumBackPlaneMode (EFrontBackPlaneDisplayMode pMode)
  public static native void SetViewFrustumBackPlaneMode(long lpjFbxCamera, int pMode);
  /// EFrontBackPlaneDisplayMode  GetViewFrustumBackPlaneMode () const
  public static native int GetViewFrustumBackPlaneMode(long lpjFbxCamera);
  /// void  SetViewCameraInterest (bool pEnable)
  public static native void SetViewCameraInterest(long lpjFbxCamera, boolean pEnable);
  /// bool  GetViewCameraInterest () const
  public static native boolean GetViewCameraInterest(long lpjFbxCamera);
  /// void  SetViewNearFarPlanes (bool pEnable)
  public static native void SetViewNearFarPlanes(long lpjFbxCamera, boolean pEnable);
  /// bool  GetViewNearFarPlanes () const
  public static native boolean GetViewNearFarPlanes(long lpjFbxCamera);
  /// FbxVector4  EvaluatePosition (const FbxTime &pTime=FBXSDK_TIME_ZERO) const
  public static native long EvaluatePosition(long lpjFbxCamera, Long pTime);
  /// FbxVector4  EvaluateLookAtPosition (const FbxTime &pTime=FBXSDK_TIME_ZERO) const
  public static native long EvaluateLookAtPosition(long lpjFbxCamera, Long pTime);
  /// FbxVector4  EvaluateUpDirection (const FbxVector4 &pCameraPosition, const FbxVector4 &pLookAtPosition, const FbxTime &pTime=FBXSDK_TIME_ZERO) const
  public static native long EvaluateUpDirection(long lpjFbxCamera, Long pCameraPosition, Long pLookAtPosition, Long pTime);
  /// FbxMatrix  ComputeProjectionMatrix (const int pWidth, const int pHeight) const
  public static native long ComputeProjectionMatrix(long lpjFbxCamera, int pWidth, int pHeight);
  /// bool  IsBoundingBoxInView (const FbxMatrix &pWorldToScreen, const FbxMatrix &pWorldToCamera, const FbxVector4 pPoints[8]) const
  public static native boolean IsBoundingBoxInView(long lpjFbxCamera, Long pWorldToScreen, Long pWorldToCamera, long pPoints);
  /// bool  IsPointInView (const FbxMatrix &pWorldToScreen, const FbxMatrix &pWorldToCamera, const FbxVector4 &pPoint) const
  public static native boolean IsPointInView(long lpjFbxCamera, Long pWorldToScreen, Long pWorldToCamera, Long pPoint);
  /// FbxMatrix  ComputeWorldToScreen (int pPixelWidth, int pPixelHeight, const FbxAMatrix &pWorldToCamera) const
  public static native long ComputeWorldToScreen(long lpjFbxCamera, int pPixelWidth, int pPixelHeight, Long pWorldToCamera);
  /// FbxPropertyT< FbxDouble3 >  Position
  public static native void mepSetPosition(long lpjFbxCamera, long lpFbxDouble3);
  /// FbxPropertyT< FbxDouble3 >  Position
  public static native long mepGetPosition(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble3 >  Position
  public static native long mptGetPosition(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble3 >  UpVector
  public static native void mepSetUpVector(long lpjFbxCamera, long lpFbxDouble3);
  /// FbxPropertyT< FbxDouble3 >  UpVector
  public static native long mepGetUpVector(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble3 >  UpVector
  public static native long mptGetUpVector(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble3 >  InterestPosition
  public static native void mepSetInterestPosition(long lpjFbxCamera, long lpFbxDouble3);
  /// FbxPropertyT< FbxDouble3 >  InterestPosition
  public static native long mepGetInterestPosition(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble3 >  InterestPosition
  public static native long mptGetInterestPosition(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  Roll
  public static native void mepSetRoll(long lpjFbxCamera, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  Roll
  public static native double mepGetRoll(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  Roll
  public static native long mptGetRoll(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  OpticalCenterX
  public static native void mepSetOpticalCenterX(long lpjFbxCamera, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  OpticalCenterX
  public static native double mepGetOpticalCenterX(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  OpticalCenterX
  public static native long mptGetOpticalCenterX(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  OpticalCenterY
  public static native void mepSetOpticalCenterY(long lpjFbxCamera, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  OpticalCenterY
  public static native double mepGetOpticalCenterY(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  OpticalCenterY
  public static native long mptGetOpticalCenterY(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble3 >  BackgroundColor
  public static native void mepSetBackgroundColor(long lpjFbxCamera, long lpFbxDouble3);
  /// FbxPropertyT< FbxDouble3 >  BackgroundColor
  public static native long mepGetBackgroundColor(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble3 >  BackgroundColor
  public static native long mptGetBackgroundColor(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  TurnTable
  public static native void mepSetTurnTable(long lpjFbxCamera, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  TurnTable
  public static native double mepGetTurnTable(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  TurnTable
  public static native long mptGetTurnTable(long lpjFbxCamera);
  /// FbxPropertyT< FbxBool >  DisplayTurnTableIcon
  public static native void mepSetDisplayTurnTableIcon(long lpjFbxCamera, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  DisplayTurnTableIcon
  public static native boolean mepGetDisplayTurnTableIcon(long lpjFbxCamera);
  /// FbxPropertyT< FbxBool >  DisplayTurnTableIcon
  public static native long mptGetDisplayTurnTableIcon(long lpjFbxCamera);
  /// FbxPropertyT< FbxBool >  UseMotionBlur
  public static native void mepSetUseMotionBlur(long lpjFbxCamera, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  UseMotionBlur
  public static native boolean mepGetUseMotionBlur(long lpjFbxCamera);
  /// FbxPropertyT< FbxBool >  UseMotionBlur
  public static native long mptGetUseMotionBlur(long lpjFbxCamera);
  /// FbxPropertyT< FbxBool >  UseRealTimeMotionBlur
  public static native void mepSetUseRealTimeMotionBlur(long lpjFbxCamera, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  UseRealTimeMotionBlur
  public static native boolean mepGetUseRealTimeMotionBlur(long lpjFbxCamera);
  /// FbxPropertyT< FbxBool >  UseRealTimeMotionBlur
  public static native long mptGetUseRealTimeMotionBlur(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  MotionBlurIntensity
  public static native void mepSetMotionBlurIntensity(long lpjFbxCamera, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  MotionBlurIntensity
  public static native double mepGetMotionBlurIntensity(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  MotionBlurIntensity
  public static native long mptGetMotionBlurIntensity(long lpjFbxCamera);
  /// FbxPropertyT< EAspectRatioMode >  AspectRatioMode
  public static native void mepSetAspectRatioMode(long lpjFbxCamera, int lpEAspectRatioMode);
  /// FbxPropertyT< EAspectRatioMode >  AspectRatioMode
  public static native int mepGetAspectRatioMode(long lpjFbxCamera);
  /// FbxPropertyT< EAspectRatioMode >  AspectRatioMode
  public static native long mptGetAspectRatioMode(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  AspectWidth
  public static native void mepSetAspectWidth(long lpjFbxCamera, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  AspectWidth
  public static native double mepGetAspectWidth(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  AspectWidth
  public static native long mptGetAspectWidth(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  AspectHeight
  public static native void mepSetAspectHeight(long lpjFbxCamera, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  AspectHeight
  public static native double mepGetAspectHeight(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  AspectHeight
  public static native long mptGetAspectHeight(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  PixelAspectRatio
  public static native void mepSetPixelAspectRatio(long lpjFbxCamera, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  PixelAspectRatio
  public static native double mepGetPixelAspectRatio(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  PixelAspectRatio
  public static native long mptGetPixelAspectRatio(long lpjFbxCamera);
  /// FbxPropertyT< EApertureMode >  ApertureMode
  public static native void mepSetApertureMode(long lpjFbxCamera, int lpEApertureMode);
  /// FbxPropertyT< EApertureMode >  ApertureMode
  public static native int mepGetApertureMode(long lpjFbxCamera);
  /// FbxPropertyT< EApertureMode >  ApertureMode
  public static native long mptGetApertureMode(long lpjFbxCamera);
  /// FbxPropertyT< EGateFit >  GateFit
  public static native void mepSetGateFit(long lpjFbxCamera, int lpEGateFit);
  /// FbxPropertyT< EGateFit >  GateFit
  public static native int mepGetGateFit(long lpjFbxCamera);
  /// FbxPropertyT< EGateFit >  GateFit
  public static native long mptGetGateFit(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  FieldOfView
  public static native void mepSetFieldOfView(long lpjFbxCamera, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  FieldOfView
  public static native double mepGetFieldOfView(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  FieldOfView
  public static native long mptGetFieldOfView(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  FieldOfViewX
  public static native void mepSetFieldOfViewX(long lpjFbxCamera, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  FieldOfViewX
  public static native double mepGetFieldOfViewX(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  FieldOfViewX
  public static native long mptGetFieldOfViewX(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  FieldOfViewY
  public static native void mepSetFieldOfViewY(long lpjFbxCamera, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  FieldOfViewY
  public static native double mepGetFieldOfViewY(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  FieldOfViewY
  public static native long mptGetFieldOfViewY(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  FocalLength
  public static native void mepSetFocalLength(long lpjFbxCamera, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  FocalLength
  public static native double mepGetFocalLength(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  FocalLength
  public static native long mptGetFocalLength(long lpjFbxCamera);
  /// FbxPropertyT< EFormat >  CameraFormat
  public static native void mepSetCameraFormat(long lpjFbxCamera, int lpEFormat);
  /// FbxPropertyT< EFormat >  CameraFormat
  public static native int mepGetCameraFormat(long lpjFbxCamera);
  /// FbxPropertyT< EFormat >  CameraFormat
  public static native long mptGetCameraFormat(long lpjFbxCamera);
  /// FbxPropertyT< FbxBool >  UseFrameColor
  public static native void mepSetUseFrameColor(long lpjFbxCamera, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  UseFrameColor
  public static native boolean mepGetUseFrameColor(long lpjFbxCamera);
  /// FbxPropertyT< FbxBool >  UseFrameColor
  public static native long mptGetUseFrameColor(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble3 >  FrameColor
  public static native void mepSetFrameColor(long lpjFbxCamera, long lpFbxDouble3);
  /// FbxPropertyT< FbxDouble3 >  FrameColor
  public static native long mepGetFrameColor(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble3 >  FrameColor
  public static native long mptGetFrameColor(long lpjFbxCamera);
  /// FbxPropertyT< FbxBool >  ShowName
  public static native void mepSetShowName(long lpjFbxCamera, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  ShowName
  public static native boolean mepGetShowName(long lpjFbxCamera);
  /// FbxPropertyT< FbxBool >  ShowName
  public static native long mptGetShowName(long lpjFbxCamera);
  /// FbxPropertyT< FbxBool >  ShowInfoOnMoving
  public static native void mepSetShowInfoOnMoving(long lpjFbxCamera, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  ShowInfoOnMoving
  public static native boolean mepGetShowInfoOnMoving(long lpjFbxCamera);
  /// FbxPropertyT< FbxBool >  ShowInfoOnMoving
  public static native long mptGetShowInfoOnMoving(long lpjFbxCamera);
  /// FbxPropertyT< FbxBool >  ShowGrid
  public static native void mepSetShowGrid(long lpjFbxCamera, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  ShowGrid
  public static native boolean mepGetShowGrid(long lpjFbxCamera);
  /// FbxPropertyT< FbxBool >  ShowGrid
  public static native long mptGetShowGrid(long lpjFbxCamera);
  /// FbxPropertyT< FbxBool >  ShowOpticalCenter
  public static native void mepSetShowOpticalCenter(long lpjFbxCamera, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  ShowOpticalCenter
  public static native boolean mepGetShowOpticalCenter(long lpjFbxCamera);
  /// FbxPropertyT< FbxBool >  ShowOpticalCenter
  public static native long mptGetShowOpticalCenter(long lpjFbxCamera);
  /// FbxPropertyT< FbxBool >  ShowAzimut
  public static native void mepSetShowAzimut(long lpjFbxCamera, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  ShowAzimut
  public static native boolean mepGetShowAzimut(long lpjFbxCamera);
  /// FbxPropertyT< FbxBool >  ShowAzimut
  public static native long mptGetShowAzimut(long lpjFbxCamera);
  /// FbxPropertyT< FbxBool >  ShowTimeCode
  public static native void mepSetShowTimeCode(long lpjFbxCamera, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  ShowTimeCode
  public static native boolean mepGetShowTimeCode(long lpjFbxCamera);
  /// FbxPropertyT< FbxBool >  ShowTimeCode
  public static native long mptGetShowTimeCode(long lpjFbxCamera);
  /// FbxPropertyT< FbxBool >  ShowAudio
  public static native void mepSetShowAudio(long lpjFbxCamera, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  ShowAudio
  public static native boolean mepGetShowAudio(long lpjFbxCamera);
  /// FbxPropertyT< FbxBool >  ShowAudio
  public static native long mptGetShowAudio(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble3 >  AudioColor
  public static native void mepSetAudioColor(long lpjFbxCamera, long lpFbxDouble3);
  /// FbxPropertyT< FbxDouble3 >  AudioColor
  public static native long mepGetAudioColor(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble3 >  AudioColor
  public static native long mptGetAudioColor(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  NearPlane
  public static native void mepSetNearPlane(long lpjFbxCamera, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  NearPlane
  public static native double mepGetNearPlane(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  NearPlane
  public static native long mptGetNearPlane(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  FarPlane
  public static native void mepSetFarPlane(long lpjFbxCamera, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  FarPlane
  public static native double mepGetFarPlane(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  FarPlane
  public static native long mptGetFarPlane(long lpjFbxCamera);
  /// FbxPropertyT< FbxBool >  AutoComputeClipPlanes
  public static native void mepSetAutoComputeClipPlanes(long lpjFbxCamera, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  AutoComputeClipPlanes
  public static native boolean mepGetAutoComputeClipPlanes(long lpjFbxCamera);
  /// FbxPropertyT< FbxBool >  AutoComputeClipPlanes
  public static native long mptGetAutoComputeClipPlanes(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  FilmWidth
  public static native void mepSetFilmWidth(long lpjFbxCamera, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  FilmWidth
  public static native double mepGetFilmWidth(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  FilmWidth
  public static native long mptGetFilmWidth(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  FilmHeight
  public static native void mepSetFilmHeight(long lpjFbxCamera, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  FilmHeight
  public static native double mepGetFilmHeight(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  FilmHeight
  public static native long mptGetFilmHeight(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  FilmAspectRatio
  public static native void mepSetFilmAspectRatio(long lpjFbxCamera, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  FilmAspectRatio
  public static native double mepGetFilmAspectRatio(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  FilmAspectRatio
  public static native long mptGetFilmAspectRatio(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  FilmSqueezeRatio
  public static native void mepSetFilmSqueezeRatio(long lpjFbxCamera, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  FilmSqueezeRatio
  public static native double mepGetFilmSqueezeRatio(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  FilmSqueezeRatio
  public static native long mptGetFilmSqueezeRatio(long lpjFbxCamera);
  /// FbxPropertyT< EApertureFormat >  FilmFormat
  public static native void mepSetFilmFormat(long lpjFbxCamera, int lpEApertureFormat);
  /// FbxPropertyT< EApertureFormat >  FilmFormat
  public static native int mepGetFilmFormat(long lpjFbxCamera);
  /// FbxPropertyT< EApertureFormat >  FilmFormat
  public static native long mptGetFilmFormat(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  FilmOffsetX
  public static native void mepSetFilmOffsetX(long lpjFbxCamera, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  FilmOffsetX
  public static native double mepGetFilmOffsetX(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  FilmOffsetX
  public static native long mptGetFilmOffsetX(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  FilmOffsetY
  public static native void mepSetFilmOffsetY(long lpjFbxCamera, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  FilmOffsetY
  public static native double mepGetFilmOffsetY(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  FilmOffsetY
  public static native long mptGetFilmOffsetY(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  PreScale
  public static native void mepSetPreScale(long lpjFbxCamera, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  PreScale
  public static native double mepGetPreScale(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  PreScale
  public static native long mptGetPreScale(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  FilmTranslateX
  public static native void mepSetFilmTranslateX(long lpjFbxCamera, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  FilmTranslateX
  public static native double mepGetFilmTranslateX(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  FilmTranslateX
  public static native long mptGetFilmTranslateX(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  FilmTranslateY
  public static native void mepSetFilmTranslateY(long lpjFbxCamera, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  FilmTranslateY
  public static native double mepGetFilmTranslateY(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  FilmTranslateY
  public static native long mptGetFilmTranslateY(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  FilmRollPivotX
  public static native void mepSetFilmRollPivotX(long lpjFbxCamera, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  FilmRollPivotX
  public static native double mepGetFilmRollPivotX(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  FilmRollPivotX
  public static native long mptGetFilmRollPivotX(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  FilmRollPivotY
  public static native void mepSetFilmRollPivotY(long lpjFbxCamera, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  FilmRollPivotY
  public static native double mepGetFilmRollPivotY(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  FilmRollPivotY
  public static native long mptGetFilmRollPivotY(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  FilmRollValue
  public static native void mepSetFilmRollValue(long lpjFbxCamera, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  FilmRollValue
  public static native double mepGetFilmRollValue(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  FilmRollValue
  public static native long mptGetFilmRollValue(long lpjFbxCamera);
  /// FbxPropertyT< EFilmRollOrder >  FilmRollOrder
  public static native void mepSetFilmRollOrder(long lpjFbxCamera, int lpEFilmRollOrder);
  /// FbxPropertyT< EFilmRollOrder >  FilmRollOrder
  public static native int mepGetFilmRollOrder(long lpjFbxCamera);
  /// FbxPropertyT< EFilmRollOrder >  FilmRollOrder
  public static native long mptGetFilmRollOrder(long lpjFbxCamera);
  /// FbxPropertyT< FbxBool >  ViewCameraToLookAt
  public static native void mepSetViewCameraToLookAt(long lpjFbxCamera, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  ViewCameraToLookAt
  public static native boolean mepGetViewCameraToLookAt(long lpjFbxCamera);
  /// FbxPropertyT< FbxBool >  ViewCameraToLookAt
  public static native long mptGetViewCameraToLookAt(long lpjFbxCamera);
  /// FbxPropertyT< FbxBool >  ViewFrustumNearFarPlane
  public static native void mepSetViewFrustumNearFarPlane(long lpjFbxCamera, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  ViewFrustumNearFarPlane
  public static native boolean mepGetViewFrustumNearFarPlane(long lpjFbxCamera);
  /// FbxPropertyT< FbxBool >  ViewFrustumNearFarPlane
  public static native long mptGetViewFrustumNearFarPlane(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  BackPlaneDistance
  public static native void mepSetBackPlaneDistance(long lpjFbxCamera, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  BackPlaneDistance
  public static native double mepGetBackPlaneDistance(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  BackPlaneDistance
  public static native long mptGetBackPlaneDistance(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  FrontPlaneDistance
  public static native void mepSetFrontPlaneDistance(long lpjFbxCamera, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  FrontPlaneDistance
  public static native double mepGetFrontPlaneDistance(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  FrontPlaneDistance
  public static native long mptGetFrontPlaneDistance(long lpjFbxCamera);
  /// FbxPropertyT< FbxBool >  LockMode
  public static native void mepSetLockMode(long lpjFbxCamera, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  LockMode
  public static native boolean mepGetLockMode(long lpjFbxCamera);
  /// FbxPropertyT< FbxBool >  LockMode
  public static native long mptGetLockMode(long lpjFbxCamera);
  /// FbxPropertyT< FbxBool >  LockInterestNavigation
  public static native void mepSetLockInterestNavigation(long lpjFbxCamera, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  LockInterestNavigation
  public static native boolean mepGetLockInterestNavigation(long lpjFbxCamera);
  /// FbxPropertyT< FbxBool >  LockInterestNavigation
  public static native long mptGetLockInterestNavigation(long lpjFbxCamera);
  /// FbxPropertyT< FbxBool >  BackPlateFitImage
  public static native void mepSetBackPlateFitImage(long lpjFbxCamera, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  BackPlateFitImage
  public static native boolean mepGetBackPlateFitImage(long lpjFbxCamera);
  /// FbxPropertyT< FbxBool >  BackPlateFitImage
  public static native long mptGetBackPlateFitImage(long lpjFbxCamera);
  /// FbxPropertyT< FbxBool >  BackPlateCrop
  public static native void mepSetBackPlateCrop(long lpjFbxCamera, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  BackPlateCrop
  public static native boolean mepGetBackPlateCrop(long lpjFbxCamera);
  /// FbxPropertyT< FbxBool >  BackPlateCrop
  public static native long mptGetBackPlateCrop(long lpjFbxCamera);
  /// FbxPropertyT< FbxBool >  BackPlateCenter
  public static native void mepSetBackPlateCenter(long lpjFbxCamera, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  BackPlateCenter
  public static native boolean mepGetBackPlateCenter(long lpjFbxCamera);
  /// FbxPropertyT< FbxBool >  BackPlateCenter
  public static native long mptGetBackPlateCenter(long lpjFbxCamera);
  /// FbxPropertyT< FbxBool >  BackPlateKeepRatio
  public static native void mepSetBackPlateKeepRatio(long lpjFbxCamera, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  BackPlateKeepRatio
  public static native boolean mepGetBackPlateKeepRatio(long lpjFbxCamera);
  /// FbxPropertyT< FbxBool >  BackPlateKeepRatio
  public static native long mptGetBackPlateKeepRatio(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  BackgroundAlphaTreshold
  public static native void mepSetBackgroundAlphaTreshold(long lpjFbxCamera, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  BackgroundAlphaTreshold
  public static native double mepGetBackgroundAlphaTreshold(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  BackgroundAlphaTreshold
  public static native long mptGetBackgroundAlphaTreshold(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  BackPlaneOffsetX
  public static native void mepSetBackPlaneOffsetX(long lpjFbxCamera, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  BackPlaneOffsetX
  public static native double mepGetBackPlaneOffsetX(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  BackPlaneOffsetX
  public static native long mptGetBackPlaneOffsetX(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  BackPlaneOffsetY
  public static native void mepSetBackPlaneOffsetY(long lpjFbxCamera, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  BackPlaneOffsetY
  public static native double mepGetBackPlaneOffsetY(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  BackPlaneOffsetY
  public static native long mptGetBackPlaneOffsetY(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  BackPlaneRotation
  public static native void mepSetBackPlaneRotation(long lpjFbxCamera, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  BackPlaneRotation
  public static native double mepGetBackPlaneRotation(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  BackPlaneRotation
  public static native long mptGetBackPlaneRotation(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  BackPlaneScaleX
  public static native void mepSetBackPlaneScaleX(long lpjFbxCamera, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  BackPlaneScaleX
  public static native double mepGetBackPlaneScaleX(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  BackPlaneScaleX
  public static native long mptGetBackPlaneScaleX(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  BackPlaneScaleY
  public static native void mepSetBackPlaneScaleY(long lpjFbxCamera, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  BackPlaneScaleY
  public static native double mepGetBackPlaneScaleY(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  BackPlaneScaleY
  public static native long mptGetBackPlaneScaleY(long lpjFbxCamera);
  /// FbxPropertyT< FbxBool >  ShowBackplate
  public static native void mepSetShowBackplate(long lpjFbxCamera, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  ShowBackplate
  public static native boolean mepGetShowBackplate(long lpjFbxCamera);
  /// FbxPropertyT< FbxBool >  ShowBackplate
  public static native long mptGetShowBackplate(long lpjFbxCamera);
  /// FbxPropertyT< FbxReference >  BackgroundTexture
  public static native void mepSetBackgroundTexture(long lpjFbxCamera, long lpFbxReference);
  /// FbxPropertyT< FbxReference >  BackgroundTexture
  public static native long mepGetBackgroundTexture(long lpjFbxCamera);
  /// FbxPropertyT< FbxReference >  BackgroundTexture
  public static native long mptGetBackgroundTexture(long lpjFbxCamera);
  /// FbxPropertyT< FbxBool >  FrontPlateFitImage
  public static native void mepSetFrontPlateFitImage(long lpjFbxCamera, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  FrontPlateFitImage
  public static native boolean mepGetFrontPlateFitImage(long lpjFbxCamera);
  /// FbxPropertyT< FbxBool >  FrontPlateFitImage
  public static native long mptGetFrontPlateFitImage(long lpjFbxCamera);
  /// FbxPropertyT< FbxBool >  FrontPlateCrop
  public static native void mepSetFrontPlateCrop(long lpjFbxCamera, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  FrontPlateCrop
  public static native boolean mepGetFrontPlateCrop(long lpjFbxCamera);
  /// FbxPropertyT< FbxBool >  FrontPlateCrop
  public static native long mptGetFrontPlateCrop(long lpjFbxCamera);
  /// FbxPropertyT< FbxBool >  FrontPlateCenter
  public static native void mepSetFrontPlateCenter(long lpjFbxCamera, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  FrontPlateCenter
  public static native boolean mepGetFrontPlateCenter(long lpjFbxCamera);
  /// FbxPropertyT< FbxBool >  FrontPlateCenter
  public static native long mptGetFrontPlateCenter(long lpjFbxCamera);
  /// FbxPropertyT< FbxBool >  FrontPlateKeepRatio
  public static native void mepSetFrontPlateKeepRatio(long lpjFbxCamera, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  FrontPlateKeepRatio
  public static native boolean mepGetFrontPlateKeepRatio(long lpjFbxCamera);
  /// FbxPropertyT< FbxBool >  FrontPlateKeepRatio
  public static native long mptGetFrontPlateKeepRatio(long lpjFbxCamera);
  /// FbxPropertyT< FbxBool >  ShowFrontplate
  public static native void mepSetShowFrontplate(long lpjFbxCamera, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  ShowFrontplate
  public static native boolean mepGetShowFrontplate(long lpjFbxCamera);
  /// FbxPropertyT< FbxBool >  ShowFrontplate
  public static native long mptGetShowFrontplate(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  FrontPlaneOffsetX
  public static native void mepSetFrontPlaneOffsetX(long lpjFbxCamera, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  FrontPlaneOffsetX
  public static native double mepGetFrontPlaneOffsetX(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  FrontPlaneOffsetX
  public static native long mptGetFrontPlaneOffsetX(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  FrontPlaneOffsetY
  public static native void mepSetFrontPlaneOffsetY(long lpjFbxCamera, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  FrontPlaneOffsetY
  public static native double mepGetFrontPlaneOffsetY(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  FrontPlaneOffsetY
  public static native long mptGetFrontPlaneOffsetY(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  FrontPlaneRotation
  public static native void mepSetFrontPlaneRotation(long lpjFbxCamera, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  FrontPlaneRotation
  public static native double mepGetFrontPlaneRotation(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  FrontPlaneRotation
  public static native long mptGetFrontPlaneRotation(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  FrontPlaneScaleX
  public static native void mepSetFrontPlaneScaleX(long lpjFbxCamera, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  FrontPlaneScaleX
  public static native double mepGetFrontPlaneScaleX(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  FrontPlaneScaleX
  public static native long mptGetFrontPlaneScaleX(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  FrontPlaneScaleY
  public static native void mepSetFrontPlaneScaleY(long lpjFbxCamera, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  FrontPlaneScaleY
  public static native double mepGetFrontPlaneScaleY(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  FrontPlaneScaleY
  public static native long mptGetFrontPlaneScaleY(long lpjFbxCamera);
  /// FbxPropertyT< FbxReference >  ForegroundTexture
  public static native void mepSetForegroundTexture(long lpjFbxCamera, long lpFbxReference);
  /// FbxPropertyT< FbxReference >  ForegroundTexture
  public static native long mepGetForegroundTexture(long lpjFbxCamera);
  /// FbxPropertyT< FbxReference >  ForegroundTexture
  public static native long mptGetForegroundTexture(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  ForegroundOpacity
  public static native void mepSetForegroundOpacity(long lpjFbxCamera, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  ForegroundOpacity
  public static native double mepGetForegroundOpacity(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  ForegroundOpacity
  public static native long mptGetForegroundOpacity(long lpjFbxCamera);
  /// FbxPropertyT< FbxBool >  DisplaySafeArea
  public static native void mepSetDisplaySafeArea(long lpjFbxCamera, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  DisplaySafeArea
  public static native boolean mepGetDisplaySafeArea(long lpjFbxCamera);
  /// FbxPropertyT< FbxBool >  DisplaySafeArea
  public static native long mptGetDisplaySafeArea(long lpjFbxCamera);
  /// FbxPropertyT< FbxBool >  DisplaySafeAreaOnRender
  public static native void mepSetDisplaySafeAreaOnRender(long lpjFbxCamera, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  DisplaySafeAreaOnRender
  public static native boolean mepGetDisplaySafeAreaOnRender(long lpjFbxCamera);
  /// FbxPropertyT< FbxBool >  DisplaySafeAreaOnRender
  public static native long mptGetDisplaySafeAreaOnRender(long lpjFbxCamera);
  /// FbxPropertyT< ESafeAreaStyle >  SafeAreaDisplayStyle
  public static native void mepSetSafeAreaDisplayStyle(long lpjFbxCamera, int lpESafeAreaStyle);
  /// FbxPropertyT< ESafeAreaStyle >  SafeAreaDisplayStyle
  public static native int mepGetSafeAreaDisplayStyle(long lpjFbxCamera);
  /// FbxPropertyT< ESafeAreaStyle >  SafeAreaDisplayStyle
  public static native long mptGetSafeAreaDisplayStyle(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  SafeAreaAspectRatio
  public static native void mepSetSafeAreaAspectRatio(long lpjFbxCamera, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  SafeAreaAspectRatio
  public static native double mepGetSafeAreaAspectRatio(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  SafeAreaAspectRatio
  public static native long mptGetSafeAreaAspectRatio(long lpjFbxCamera);
  /// FbxPropertyT< FbxBool >  Use2DMagnifierZoom
  public static native void mepSetUse2DMagnifierZoom(long lpjFbxCamera, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  Use2DMagnifierZoom
  public static native boolean mepGetUse2DMagnifierZoom(long lpjFbxCamera);
  /// FbxPropertyT< FbxBool >  Use2DMagnifierZoom
  public static native long mptGetUse2DMagnifierZoom(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  _2DMagnifierZoom
  public static native void mepSet_2DMagnifierZoom(long lpjFbxCamera, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  _2DMagnifierZoom
  public static native double mepGet_2DMagnifierZoom(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  _2DMagnifierZoom
  public static native long mptGet_2DMagnifierZoom(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  _2DMagnifierX
  public static native void mepSet_2DMagnifierX(long lpjFbxCamera, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  _2DMagnifierX
  public static native double mepGet_2DMagnifierX(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  _2DMagnifierX
  public static native long mptGet_2DMagnifierX(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  _2DMagnifierY
  public static native void mepSet_2DMagnifierY(long lpjFbxCamera, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  _2DMagnifierY
  public static native double mepGet_2DMagnifierY(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  _2DMagnifierY
  public static native long mptGet_2DMagnifierY(long lpjFbxCamera);
  /// FbxPropertyT< EProjectionType >  ProjectionType
  public static native void mepSetProjectionType(long lpjFbxCamera, int lpEProjectionType);
  /// FbxPropertyT< EProjectionType >  ProjectionType
  public static native int mepGetProjectionType(long lpjFbxCamera);
  /// FbxPropertyT< EProjectionType >  ProjectionType
  public static native long mptGetProjectionType(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  OrthoZoom
  public static native void mepSetOrthoZoom(long lpjFbxCamera, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  OrthoZoom
  public static native double mepGetOrthoZoom(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  OrthoZoom
  public static native long mptGetOrthoZoom(long lpjFbxCamera);
  /// FbxPropertyT< FbxBool >  UseRealTimeDOFAndAA
  public static native void mepSetUseRealTimeDOFAndAA(long lpjFbxCamera, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  UseRealTimeDOFAndAA
  public static native boolean mepGetUseRealTimeDOFAndAA(long lpjFbxCamera);
  /// FbxPropertyT< FbxBool >  UseRealTimeDOFAndAA
  public static native long mptGetUseRealTimeDOFAndAA(long lpjFbxCamera);
  /// FbxPropertyT< FbxBool >  UseDepthOfField
  public static native void mepSetUseDepthOfField(long lpjFbxCamera, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  UseDepthOfField
  public static native boolean mepGetUseDepthOfField(long lpjFbxCamera);
  /// FbxPropertyT< FbxBool >  UseDepthOfField
  public static native long mptGetUseDepthOfField(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  FocusAngle
  public static native void mepSetFocusAngle(long lpjFbxCamera, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  FocusAngle
  public static native double mepGetFocusAngle(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  FocusAngle
  public static native long mptGetFocusAngle(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  FocusDistance
  public static native void mepSetFocusDistance(long lpjFbxCamera, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  FocusDistance
  public static native double mepGetFocusDistance(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  FocusDistance
  public static native long mptGetFocusDistance(long lpjFbxCamera);
  /// FbxPropertyT< FbxBool >  UseAntialiasing
  public static native void mepSetUseAntialiasing(long lpjFbxCamera, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  UseAntialiasing
  public static native boolean mepGetUseAntialiasing(long lpjFbxCamera);
  /// FbxPropertyT< FbxBool >  UseAntialiasing
  public static native long mptGetUseAntialiasing(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  AntialiasingIntensity
  public static native void mepSetAntialiasingIntensity(long lpjFbxCamera, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  AntialiasingIntensity
  public static native double mepGetAntialiasingIntensity(long lpjFbxCamera);
  /// FbxPropertyT< FbxDouble >  AntialiasingIntensity
  public static native long mptGetAntialiasingIntensity(long lpjFbxCamera);
  /// FbxPropertyT< EAntialiasingMethod >  AntialiasingMethod
  public static native void mepSetAntialiasingMethod(long lpjFbxCamera, int lpEAntialiasingMethod);
  /// FbxPropertyT< EAntialiasingMethod >  AntialiasingMethod
  public static native int mepGetAntialiasingMethod(long lpjFbxCamera);
  /// FbxPropertyT< EAntialiasingMethod >  AntialiasingMethod
  public static native long mptGetAntialiasingMethod(long lpjFbxCamera);
  /// FbxPropertyT< FbxBool >  UseAccumulationBuffer
  public static native void mepSetUseAccumulationBuffer(long lpjFbxCamera, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  UseAccumulationBuffer
  public static native boolean mepGetUseAccumulationBuffer(long lpjFbxCamera);
  /// FbxPropertyT< FbxBool >  UseAccumulationBuffer
  public static native long mptGetUseAccumulationBuffer(long lpjFbxCamera);
  /// FbxPropertyT< FbxInt >  FrameSamplingCount
  public static native void mepSetFrameSamplingCount(long lpjFbxCamera, int lpFbxInt);
  /// FbxPropertyT< FbxInt >  FrameSamplingCount
  public static native int mepGetFrameSamplingCount(long lpjFbxCamera);
  /// FbxPropertyT< FbxInt >  FrameSamplingCount
  public static native long mptGetFrameSamplingCount(long lpjFbxCamera);
  /// FbxPropertyT< ESamplingType >  FrameSamplingType
  public static native void mepSetFrameSamplingType(long lpjFbxCamera, int lpESamplingType);
  /// FbxPropertyT< ESamplingType >  FrameSamplingType
  public static native int mepGetFrameSamplingType(long lpjFbxCamera);
  /// FbxPropertyT< ESamplingType >  FrameSamplingType
  public static native long mptGetFrameSamplingType(long lpjFbxCamera);
  /// FbxCamera * Create( FbxNodeAttribute* lpFbxNodeAttribute,  const char* pName )
  public static native long Create(   long lpFbxNodeAttribute, String pName);
}
