package fbxsdk;
//26 136 FbxVideo  --------------------
public class FbxVideo  {
  public    class   EInterlaceMode  {
   public static final int eNone = 0;
   public static final int eFields = 1;
   public static final int eHalfEven = 2;
   public static final int eHalfOdd = 3;
   public static final int eFullEven = 4;
   public static final int eFullOdd = 5;
   public static final int eFullEvenOdd = 6;
   public static final int eFullOddEven = 7;
}
  public    class   EAccessMode  {
   public static final int eDisk = 0;
   public static final int eMemory = 1;
   public static final int eDiskAsync = 2;
}
  /// double  GetFrameRate () const
  public static native double GetFrameRate(long lpjFbxVideo);
  /// int  GetLastFrame () const
  public static native int GetLastFrame(long lpjFbxVideo);
  /// int  GetWidth () const
  public static native int GetWidth(long lpjFbxVideo);
  /// int  GetHeight () const
  public static native int GetHeight(long lpjFbxVideo);
  /// void  SetStartFrame (int pStartFrame)
  public static native void SetStartFrame(long lpjFbxVideo, int pStartFrame);
  /// int  GetStartFrame () const
  public static native int GetStartFrame(long lpjFbxVideo);
  /// void  SetStopFrame (int pStopFrame)
  public static native void SetStopFrame(long lpjFbxVideo, int pStopFrame);
  /// int  GetStopFrame () const
  public static native int GetStopFrame(long lpjFbxVideo);
  /// void  SetPlaySpeed (double pPlaySpeed)
  public static native void SetPlaySpeed(long lpjFbxVideo, double pPlaySpeed);
  /// double  GetPlaySpeed () const
  public static native double GetPlaySpeed(long lpjFbxVideo);
  /// void  SetOffset (FbxTime pTime)
  public static native void SetOffset(long lpjFbxVideo, long pTime);
  /// FbxTime  GetOffset () const
  public static native long GetOffset(long lpjFbxVideo);
  /// void  SetFreeRunning (bool pState)
  public static native void SetFreeRunning(long lpjFbxVideo, boolean pState);
  /// bool  GetFreeRunning () const
  public static native boolean GetFreeRunning(long lpjFbxVideo);
  /// void  SetLoop (bool pLoop)
  public static native void SetLoop(long lpjFbxVideo, boolean pLoop);
  /// bool  GetLoop () const
  public static native boolean GetLoop(long lpjFbxVideo);
  /// void  SetInterlaceMode (EInterlaceMode pInterlaceMode)
  public static native void SetInterlaceMode(long lpjFbxVideo, int pInterlaceMode);
  /// EInterlaceMode  GetInterlaceMode () const
  public static native int GetInterlaceMode(long lpjFbxVideo);
  /// void  SetAccessMode (EAccessMode pAccessMode)
  public static native void SetAccessMode(long lpjFbxVideo, int pAccessMode);
  /// EAccessMode  GetAccessMode () const
  public static native int GetAccessMode(long lpjFbxVideo);
  /// void  Reset ()
  public static native void Reset(long lpjFbxVideo);
  /// void  ImageTextureSetMipMap (bool pUseMipMap)
  public static native void ImageTextureSetMipMap(long lpjFbxVideo, boolean pUseMipMap);
  /// bool  ImageTextureGetMipMap () const
  public static native boolean ImageTextureGetMipMap(long lpjFbxVideo);
  /// bool  SetFileName (const char *pName)
  public static native boolean SetFileName(long lpjFbxVideo, String pName);
  /// FbxString  GetFileName () const
  public static native long GetFileName(long lpjFbxVideo);
  /// bool  SetRelativeFileName (const char *pName)
  public static native boolean SetRelativeFileName(long lpjFbxVideo, String pName);
  /// const char *  GetRelativeFileName () const
  public static native String GetRelativeFileName(long lpjFbxVideo);
  /// void  SetImageSequence (bool pImageSequence)
  public static native void SetImageSequence(long lpjFbxVideo, boolean pImageSequence);
  /// bool  GetImageSequence () const
  public static native boolean GetImageSequence(long lpjFbxVideo);
  /// void  SetImageSequenceOffset (int pOffset)
  public static native void SetImageSequenceOffset(long lpjFbxVideo, int pOffset);
  /// int  GetImageSequenceOffset () const
  public static native int GetImageSequenceOffset(long lpjFbxVideo);
  /// FbxVideo * Create( FbxObject* lpFbxObject,  const char* pName )
  public static native long Create(   long lpFbxObject, String pName);
}
