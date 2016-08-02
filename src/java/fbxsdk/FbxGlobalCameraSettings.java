package fbxsdk;
//26 104 FbxGlobalCameraSettings  --------------------
public class FbxGlobalCameraSettings  {
  public                              class   EViewingMode  {
   public static final int eStandard = 0;
   public static final int eXRay = 1;
   public static final int eModelsOnly = 2;
}
  /// bool  SetDefaultCamera (const char *pCameraName, FbxStatus *pStatus=NULL)
  public static native boolean SetDefaultCamera(long lpjFbxGlobalCameraSettings, String pCameraName, long pStatus);
  /// const char *  GetDefaultCamera () const
  public static native String GetDefaultCamera(long lpjFbxGlobalCameraSettings);
  /// void  RestoreDefaultSettings ()
  public static native void RestoreDefaultSettings(long lpjFbxGlobalCameraSettings);
  /// void  SetDefaultViewingMode (EViewingMode pViewingMode)
  public static native void SetDefaultViewingMode(long lpjFbxGlobalCameraSettings, int pViewingMode);
  /// EViewingMode  GetDefaultViewingMode () const
  public static native int GetDefaultViewingMode(long lpjFbxGlobalCameraSettings);
  /// void  CreateProducerCameras ()
  public static native void CreateProducerCameras(long lpjFbxGlobalCameraSettings);
  /// void  DestroyProducerCameras ()
  public static native void DestroyProducerCameras(long lpjFbxGlobalCameraSettings);
  /// bool  IsProducerCamera (FbxCamera *pCamera) const
  public static native boolean IsProducerCamera(long lpjFbxGlobalCameraSettings, long pCamera);
  /// FbxCamera *  GetCameraProducerPerspective () const
  public static native long GetCameraProducerPerspective(long lpjFbxGlobalCameraSettings);
  /// FbxCamera *  GetCameraProducerFront () const
  public static native long GetCameraProducerFront(long lpjFbxGlobalCameraSettings);
  /// FbxCamera *  GetCameraProducerBack () const
  public static native long GetCameraProducerBack(long lpjFbxGlobalCameraSettings);
  /// FbxCamera *  GetCameraProducerLeft () const
  public static native long GetCameraProducerLeft(long lpjFbxGlobalCameraSettings);
  /// FbxCamera *  GetCameraProducerRight () const
  public static native long GetCameraProducerRight(long lpjFbxGlobalCameraSettings);
  /// FbxCamera *  GetCameraProducerTop () const
  public static native long GetCameraProducerTop(long lpjFbxGlobalCameraSettings);
  /// FbxCamera *  GetCameraProducerBottom () const
  public static native long GetCameraProducerBottom(long lpjFbxGlobalCameraSettings);
  /// FbxCameraSwitcher *  GetCameraSwitcher () const
  public static native long GetCameraSwitcher(long lpjFbxGlobalCameraSettings);
  /// void  SetCameraSwitcher (FbxCameraSwitcher *pSwitcher)
  public static native void SetCameraSwitcher(long lpjFbxGlobalCameraSettings, long pSwitcher);
//No Static CreateFunc
}
