package fbxsdk;
//26 90 FbxDateTime  --------------------
public class FbxDateTime  {
  /// void  Clear ()
  public static native void Clear(long lpjFbxDateTime);
  /// bool  isValid () const
  public static native boolean isValid(long lpjFbxDateTime);
  /// FbxDateTime ()
  public static native long meCreate(  );
  /// FbxDateTime (int pDay, int pMonth, int pYear, int pHour, int pMin, int pSec, int pMillisecond=0)
  public static native long meCreate1(   int pDay, int pMonth, int pYear, int pHour, int pMin, int pSec, int pMillisecond);
  /// void  setDate (int pDay, int pMonth, int pYear)
  public static native void setDate(long lpjFbxDateTime, int pDay, int pMonth, int pYear);
  /// void  setTime (int pHour, int pMin, int pSec, int pMillisecond=0)
  public static native void setTime(long lpjFbxDateTime, int pHour, int pMin, int pSec, int pMillisecond);
  /// FbxString  toString () const
  public static native long toString(long lpjFbxDateTime);
  /// void meDestroy(FbxDateTime * lpFbxDateTime)
  public static native void meDestroy(long lpjFbxDateTime);
}
