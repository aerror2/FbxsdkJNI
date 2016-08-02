//copyright by aerror 2016 
package fbxsdk;
//26 138 FbxGlobalSettings  --------------------
public class FbxGlobalSettings  {
  public                 class   ESnapOnFrameMode  {
   public static final int eNoSnap = 0;
   public static final int eSnapOnFrame = 1;
   public static final int ePlayOnFrame = 2;
   public static final int eSnapAndPlayOnFrame = 3;
}
  /// void  SetOriginalUpAxis (const FbxAxisSystem &pAxisSystem)
  public static native void SetOriginalUpAxis(long lpjFbxGlobalSettings, Long pAxisSystem);
  /// int  GetOriginalUpAxis () const
  public static native int GetOriginalUpAxis(long lpjFbxGlobalSettings);
  /// void  SetAxisSystem (const FbxAxisSystem &pAxisSystem)
  public static native void SetAxisSystem(long lpjFbxGlobalSettings, Long pAxisSystem);
  /// FbxAxisSystem  GetAxisSystem ()
  public static native long GetAxisSystem(long lpjFbxGlobalSettings);
  /// void  SetSystemUnit (const FbxSystemUnit &pOther)
  public static native void SetSystemUnit(long lpjFbxGlobalSettings, Long pOther);
  /// FbxSystemUnit  GetSystemUnit () const
  public static native long GetSystemUnit(long lpjFbxGlobalSettings);
  /// void  SetOriginalSystemUnit (const FbxSystemUnit &pOther)
  public static native void SetOriginalSystemUnit(long lpjFbxGlobalSettings, Long pOther);
  /// FbxSystemUnit  GetOriginalSystemUnit () const
  public static native long GetOriginalSystemUnit(long lpjFbxGlobalSettings);
  /// void  SetAmbientColor (FbxColor pAmbientColor)
  public static native void SetAmbientColor(long lpjFbxGlobalSettings, long pAmbientColor);
  /// FbxColor  GetAmbientColor () const
  public static native long GetAmbientColor(long lpjFbxGlobalSettings);
  /// bool  SetDefaultCamera (const char *pCameraName)
  public static native boolean SetDefaultCamera(long lpjFbxGlobalSettings, String pCameraName);
  /// FbxString  GetDefaultCamera () const
  public static native long GetDefaultCamera(long lpjFbxGlobalSettings);
  /// void  SetTimeMode (FbxTime::EMode pTimeMode)
  public static native void SetTimeMode(long lpjFbxGlobalSettings, int pTimeMode);
  /// FbxTime::EMode  GetTimeMode () const
  public static native int GetTimeMode(long lpjFbxGlobalSettings);
  /// void  SetTimeProtocol (FbxTime::EProtocol pTimeProtocol)
  public static native void SetTimeProtocol(long lpjFbxGlobalSettings, int pTimeProtocol);
  /// FbxTime::EProtocol  GetTimeProtocol () const
  public static native int GetTimeProtocol(long lpjFbxGlobalSettings);
  /// void  SetSnapOnFrameMode (ESnapOnFrameMode pSnapOnFrameMode)
  public static native void SetSnapOnFrameMode(long lpjFbxGlobalSettings, int pSnapOnFrameMode);
  /// ESnapOnFrameMode  GetSnapOnFrameMode () const
  public static native int GetSnapOnFrameMode(long lpjFbxGlobalSettings);
  /// void  SetTimelineDefaultTimeSpan (const FbxTimeSpan &pTimeSpan)
  public static native void SetTimelineDefaultTimeSpan(long lpjFbxGlobalSettings, Long pTimeSpan);
  /// void  GetTimelineDefaultTimeSpan (FbxTimeSpan &pTimeSpan) const
  public static native void GetTimelineDefaultTimeSpan(long lpjFbxGlobalSettings, Long pTimeSpan);
  /// void  SetCustomFrameRate (double pCustomFrameRate)
  public static native void SetCustomFrameRate(long lpjFbxGlobalSettings, double pCustomFrameRate);
  /// double  GetCustomFrameRate () const
  public static native double GetCustomFrameRate(long lpjFbxGlobalSettings);
  /// int  GetTimeMarkerCount () const
  public static native int GetTimeMarkerCount(long lpjFbxGlobalSettings);
  /// TimeMarker  GetTimeMarker (int pIndex, FbxStatus *pStatus=NULL) const
  public static native long GetTimeMarker(long lpjFbxGlobalSettings, int pIndex, long pStatus);
  /// void  AddTimeMarker (const TimeMarker &pTimeMarker, FbxStatus *pStatus=NULL)
  public static native void AddTimeMarker(long lpjFbxGlobalSettings, Long pTimeMarker, long pStatus);
  /// void  ReplaceTimeMarker (int pIndex, const TimeMarker &pTimeMarker, FbxStatus *pStatus=NULL)
  public static native void ReplaceTimeMarker(long lpjFbxGlobalSettings, int pIndex, Long pTimeMarker, long pStatus);
  /// void  RemoveAllTimeMarkers ()
  public static native void RemoveAllTimeMarkers(long lpjFbxGlobalSettings);
  /// bool  SetCurrentTimeMarker (int pIndex, FbxStatus *pStatus=NULL)
  public static native boolean SetCurrentTimeMarker(long lpjFbxGlobalSettings, int pIndex, long pStatus);
  /// int  GetCurrentTimeMarker () const
  public static native int GetCurrentTimeMarker(long lpjFbxGlobalSettings);
  /// FbxGlobalSettings * Create( FbxObject* lpFbxObject,  const char* pName )
  public static native long Create(   long lpFbxObject, String pName);
}
