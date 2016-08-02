package fbxsdk;
//26 115 FbxCameraStereo  --------------------
public class FbxCameraStereo  {
  public                              class   EStereoType  {
   public static final int eNone = 0;
   public static final int eConverged = 1;
   public static final int eOffAxis = 2;
   public static final int eParallel = 3;
}
  /// virtual FbxNodeAttribute::EType  GetAttributeType () const
  public static native int GetAttributeType(long lpjFbxCameraStereo);
  /// void  Reset ()
  public static native void Reset(long lpjFbxCameraStereo);
  /// FbxCamera *  GetLeftCamera () const
  public static native long GetLeftCamera(long lpjFbxCameraStereo);
  /// FbxCamera *  GetRightCamera () const
  public static native long GetRightCamera(long lpjFbxCameraStereo);
  /// bool  SetLeftCamera (FbxCamera *pCamera)
  public static native boolean SetLeftCamera(long lpjFbxCameraStereo, long pCamera);
  /// bool  SetRightCamera (FbxCamera *pCamera)
  public static native boolean SetRightCamera(long lpjFbxCameraStereo, long pCamera);
  /// FbxAMatrix  GetLeftCameraLocalMatrix () const
  public static native long GetLeftCameraLocalMatrix(long lpjFbxCameraStereo);
  /// FbxAMatrix  GetLeftCameraGlobalMatrix () const
  public static native long GetLeftCameraGlobalMatrix(long lpjFbxCameraStereo);
  /// FbxAMatrix  GetRightCameraLocalMatrix () const
  public static native long GetRightCameraLocalMatrix(long lpjFbxCameraStereo);
  /// FbxAMatrix  GetRightCameraGlobalMatrix () const
  public static native long GetRightCameraGlobalMatrix(long lpjFbxCameraStereo);
  /// double  ReevaluateLeftCameraFilmOffsetX () const
  public static native double ReevaluateLeftCameraFilmOffsetX(long lpjFbxCameraStereo);
  /// double  ReevaluateRightCameraFilmOffsetX () const
  public static native double ReevaluateRightCameraFilmOffsetX(long lpjFbxCameraStereo);
  /// bool  ConnectProperties ()
  public static native boolean ConnectProperties(long lpjFbxCameraStereo);
  /// FbxPropertyT< EStereoType >  Stereo
  public static native void mepSetStereo(long lpjFbxCameraStereo, int lpEStereoType);
  /// FbxPropertyT< EStereoType >  Stereo
  public static native int mepGetStereo(long lpjFbxCameraStereo);
  /// FbxPropertyT< EStereoType >  Stereo
  public static native long mptGetStereo(long lpjFbxCameraStereo);
  /// FbxPropertyT< FbxDouble >  InteraxialSeparation
  public static native void mepSetInteraxialSeparation(long lpjFbxCameraStereo, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  InteraxialSeparation
  public static native double mepGetInteraxialSeparation(long lpjFbxCameraStereo);
  /// FbxPropertyT< FbxDouble >  InteraxialSeparation
  public static native long mptGetInteraxialSeparation(long lpjFbxCameraStereo);
  /// FbxPropertyT< FbxDouble >  ZeroParallax
  public static native void mepSetZeroParallax(long lpjFbxCameraStereo, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  ZeroParallax
  public static native double mepGetZeroParallax(long lpjFbxCameraStereo);
  /// FbxPropertyT< FbxDouble >  ZeroParallax
  public static native long mptGetZeroParallax(long lpjFbxCameraStereo);
  /// FbxPropertyT< FbxDouble >  ToeInAdjust
  public static native void mepSetToeInAdjust(long lpjFbxCameraStereo, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  ToeInAdjust
  public static native double mepGetToeInAdjust(long lpjFbxCameraStereo);
  /// FbxPropertyT< FbxDouble >  ToeInAdjust
  public static native long mptGetToeInAdjust(long lpjFbxCameraStereo);
  /// FbxPropertyT< FbxDouble >  FilmOffsetRightCam
  public static native void mepSetFilmOffsetRightCam(long lpjFbxCameraStereo, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  FilmOffsetRightCam
  public static native double mepGetFilmOffsetRightCam(long lpjFbxCameraStereo);
  /// FbxPropertyT< FbxDouble >  FilmOffsetRightCam
  public static native long mptGetFilmOffsetRightCam(long lpjFbxCameraStereo);
  /// FbxPropertyT< FbxDouble >  FilmOffsetLeftCam
  public static native void mepSetFilmOffsetLeftCam(long lpjFbxCameraStereo, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  FilmOffsetLeftCam
  public static native double mepGetFilmOffsetLeftCam(long lpjFbxCameraStereo);
  /// FbxPropertyT< FbxDouble >  FilmOffsetLeftCam
  public static native long mptGetFilmOffsetLeftCam(long lpjFbxCameraStereo);
  /// FbxPropertyT< FbxReference >  RightCamera
  public static native void mepSetRightCamera(long lpjFbxCameraStereo, long lpFbxReference);
  /// FbxPropertyT< FbxReference >  RightCamera
  public static native long mepGetRightCamera(long lpjFbxCameraStereo);
  /// FbxPropertyT< FbxReference >  RightCamera
  public static native long mptGetRightCamera(long lpjFbxCameraStereo);
  /// FbxPropertyT< FbxReference >  LeftCamera
  public static native void mepSetLeftCamera(long lpjFbxCameraStereo, long lpFbxReference);
  /// FbxPropertyT< FbxReference >  LeftCamera
  public static native long mepGetLeftCamera(long lpjFbxCameraStereo);
  /// FbxPropertyT< FbxReference >  LeftCamera
  public static native long mptGetLeftCamera(long lpjFbxCameraStereo);
  /// FbxPropertyT< FbxString >  PrecompFileName
  public static native void mepSetPrecompFileName(long lpjFbxCameraStereo, long lpFbxString);
  /// FbxPropertyT< FbxString >  PrecompFileName
  public static native long mepGetPrecompFileName(long lpjFbxCameraStereo);
  /// FbxPropertyT< FbxString >  PrecompFileName
  public static native long mptGetPrecompFileName(long lpjFbxCameraStereo);
  /// FbxPropertyT< FbxString >  RelativePrecompFileName
  public static native void mepSetRelativePrecompFileName(long lpjFbxCameraStereo, long lpFbxString);
  /// FbxPropertyT< FbxString >  RelativePrecompFileName
  public static native long mepGetRelativePrecompFileName(long lpjFbxCameraStereo);
  /// FbxPropertyT< FbxString >  RelativePrecompFileName
  public static native long mptGetRelativePrecompFileName(long lpjFbxCameraStereo);
  /// FbxCameraStereo * Create( FbxCamera* lpFbxCamera,  const char* pName )
  public static native long Create(   long lpFbxCamera, String pName);
}
