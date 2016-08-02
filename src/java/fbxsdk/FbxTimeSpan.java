package fbxsdk;
//26 87 FbxTimeSpan  --------------------
public class FbxTimeSpan  {
  /// FbxTimeSpan ()
  public static native long meCreate(  );
  /// FbxTimeSpan (FbxTime pStart, FbxTime pStop)
  public static native long meCreate1(   long pStart, long pStop);
  /// void  Set (FbxTime pStart, FbxTime pStop)
  public static native void Set(long lpjFbxTimeSpan, long pStart, long pStop);
  /// void  SetStart (FbxTime pStart)
  public static native void SetStart(long lpjFbxTimeSpan, long pStart);
  /// void  SetStop (FbxTime pStop)
  public static native void SetStop(long lpjFbxTimeSpan, long pStop);
  /// FbxTime  GetStart () const
  public static native long GetStart(long lpjFbxTimeSpan);
  /// FbxTime  GetStop () const
  public static native long GetStop(long lpjFbxTimeSpan);
  /// FbxTime  GetDuration () const
  public static native long GetDuration(long lpjFbxTimeSpan);
  /// FbxTime  GetSignedDuration () const
  public static native long GetSignedDuration(long lpjFbxTimeSpan);
  /// int  GetDirection () const
  public static native int GetDirection(long lpjFbxTimeSpan);
  /// bool  IsInside (FbxTime pTime) const
  public static native boolean IsInside(long lpjFbxTimeSpan, long pTime);
  /// FbxTimeSpan  Intersect (const FbxTimeSpan &pTime) const
  public static native long Intersect(long lpjFbxTimeSpan, Long pTime);
  /// void  UnionAssignment (const FbxTimeSpan &pSpan, int pDirection=FBXSDK_TIME_FORWARD)
  public static native void UnionAssignment(long lpjFbxTimeSpan, Long pSpan, int pDirection);
  /// void meDestroy(FbxTimeSpan * lpFbxTimeSpan)
  public static native void meDestroy(long lpjFbxTimeSpan);
}
