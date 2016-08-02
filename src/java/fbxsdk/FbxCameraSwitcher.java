package fbxsdk;
//26 81 FbxCameraSwitcher  --------------------
public class FbxCameraSwitcher  {
  /// virtual FbxNodeAttribute::EType  GetAttributeType () const
  public static native int GetAttributeType(long lpjFbxCameraSwitcher);
  /// int  GetDefaultCameraIndex () const
  public static native int GetDefaultCameraIndex(long lpjFbxCameraSwitcher);
  /// void  SetDefaultCameraIndex (int pIndex)
  public static native void SetDefaultCameraIndex(long lpjFbxCameraSwitcher, int pIndex);
  /// FbxPropertyT< FbxInt >  CameraIndex
  public static native void mepSetCameraIndex(long lpjFbxCameraSwitcher, int lpFbxInt);
  /// FbxPropertyT< FbxInt >  CameraIndex
  public static native int mepGetCameraIndex(long lpjFbxCameraSwitcher);
  /// FbxPropertyT< FbxInt >  CameraIndex
  public static native long mptGetCameraIndex(long lpjFbxCameraSwitcher);
  /// FbxCameraSwitcher * Create( FbxNodeAttribute* lpFbxNodeAttribute,  const char* pName )
  public static native long Create(   long lpFbxNodeAttribute, String pName);
}
