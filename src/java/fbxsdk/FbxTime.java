//copyright by aerror 2016 
package fbxsdk;
//26 180 FbxTime  --------------------
public class FbxTime  {
  public    class   EMode  {
   public static final int eDefaultMode = 0;
   public static final int eFrames120 = 1;
   public static final int eFrames100 = 2;
   public static final int eFrames60 = 3;
   public static final int eFrames50 = 4;
   public static final int eFrames48 = 5;
   public static final int eFrames30 = 6;
   public static final int eFrames30Drop = 7;
   public static final int eNTSCDropFrame = 8;
   public static final int eNTSCFullFrame = 9;
   public static final int ePAL = 10;
   public static final int eFrames24 = 11;
   public static final int eFrames1000 = 12;
   public static final int eFilmFullFrame = 13;
   public static final int eCustom = 14;
   public static final int eFrames96 = 15;
   public static final int eFrames72 = 16;
   public static final int eFrames59dot94 = 17;
   public static final int eModesCount = 18;
}
  public    class   EProtocol  {
   public static final int eSMPTE = 0;
   public static final int eFrameCount = 1;
   public static final int eDefaultProtocol = 2;
}
  public    class   EElement  {
   public static final int eHours = 0;
   public static final int eMinutes = 1;
   public static final int eSeconds = 2;
   public static final int eFrames = 3;
   public static final int eField = 4;
   public static final int eResidual = 5;
}
  /// FbxTime (const FbxLongLong pTime=0)
  public static native long meCreate(   long pTime);
  /// void  Set (FbxLongLong pTime)
  public static native void Set(long lpjFbxTime, long pTime);
  /// FbxLongLong  Get () const
  public static native long Get(long lpjFbxTime);
  /// void  SetMilliSeconds (FbxLongLong pMilliSeconds)
  public static native void SetMilliSeconds(long lpjFbxTime, long pMilliSeconds);
  /// FbxLongLong  GetMilliSeconds () const
  public static native long GetMilliSeconds(long lpjFbxTime);
  /// void  SetSecondDouble (double pTime)
  public static native void SetSecondDouble(long lpjFbxTime, double pTime);
  /// double  GetSecondDouble () const
  public static native double GetSecondDouble(long lpjFbxTime);
  /// void  SetTime (int pHour, int pMinute, int pSecond, int pFrame=0, int pField=0, EMode pTimeMode=eDefaultMode)
  public static native void SetTime(long lpjFbxTime, int pHour, int pMinute, int pSecond, int pFrame, int pField, int pTimeMode);
  /// void  SetTime (int pHour, int pMinute, int pSecond, int pFrame, int pField, int pResidual, EMode pTimeMode)
  public static native void SetTime1(long lpjFbxTime, int pHour, int pMinute, int pSecond, int pFrame, int pField, int pResidual, int pTimeMode);
  /// bool  GetTime (int &pHour, int &pMinute, int &pSecond, int &pFrame, int &pField, int &pResidual, EMode pTimeMode=eDefaultMode) const
  public static native boolean GetTime(long lpjFbxTime, Integer pHour, Integer pMinute, Integer pSecond, Integer pFrame, Integer pField, Integer pResidual, int pTimeMode);
  /// FbxTime  GetFramedTime (bool pRound=true) const
  public static native long GetFramedTime(long lpjFbxTime, boolean pRound);
  /// void  SetFrame (FbxLongLong pFrames, EMode pTimeMode=eDefaultMode)
  public static native void SetFrame(long lpjFbxTime, long pFrames, int pTimeMode);
  /// void  SetFramePrecise (FbxDouble pFrames, EMode pTimeMode=eDefaultMode)
  public static native void SetFramePrecise(long lpjFbxTime, double pFrames, int pTimeMode);
  /// int  GetHourCount () const
  public static native int GetHourCount(long lpjFbxTime);
  /// int  GetMinuteCount () const
  public static native int GetMinuteCount(long lpjFbxTime);
  /// int  GetSecondCount () const
  public static native int GetSecondCount(long lpjFbxTime);
  /// FbxLongLong  GetFrameCount (EMode pTimeMode=eDefaultMode) const
  public static native long GetFrameCount(long lpjFbxTime, int pTimeMode);
  /// FbxDouble  GetFrameCountPrecise (EMode pTimeMode=eDefaultMode) const
  public static native double GetFrameCountPrecise(long lpjFbxTime, int pTimeMode);
  /// FbxLongLong  GetFieldCount (EMode pTimeMode=eDefaultMode) const
  public static native long GetFieldCount(long lpjFbxTime, int pTimeMode);
  /// int  GetResidual (EMode pTimeMode=eDefaultMode) const
  public static native int GetResidual(long lpjFbxTime, int pTimeMode);
  /// char  GetFrameSeparator (EMode pTimeMode=eDefaultMode) const
  public static native byte GetFrameSeparator(long lpjFbxTime, int pTimeMode);
  /// char *  GetTimeString (char *pTimeString, const FbxUShort &pTimeStringSize, int pInfo=5, EMode pTimeMode=eDefaultMode, EProtocol pTimeFormat=eDefaultProtocol) const
  public static native String GetTimeString(long lpjFbxTime, String pTimeString, Short pTimeStringSize, int pInfo, int pTimeMode, int pTimeFormat);
  /// FbxString  GetTimeString (EElement pStart=eHours, EElement pEnd=eResidual, EMode pTimeMode=eDefaultMode, EProtocol pTimeFormat=eDefaultProtocol) const
  public static native long GetTimeString1(long lpjFbxTime, int pStart, int pEnd, int pTimeMode, int pTimeFormat);
  /// bool  SetTimeString (const char *pTime, EMode pTimeMode=eDefaultMode, EProtocol pTimeFormat=eDefaultProtocol)
  public static native boolean SetTimeString(long lpjFbxTime, String pTime, int pTimeMode, int pTimeFormat);
  /// void meDestroy(FbxTime * lpFbxTime)
  public static native void meDestroy(long lpjFbxTime);
}
