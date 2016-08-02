//copyright by aerror 2016 
package fbxsdk;
//26 65 FbxAnimCurveKeyBase  --------------------
public class FbxAnimCurveKeyBase  {
  /// FbxAnimCurveKeyBase ()
  public static native long meCreate(  );
  /// virtual  ~FbxAnimCurveKeyBase ()
  public static native void meDestroy(long lpjFbxAnimCurveKeyBase);
  /// virtual FbxTime  GetTime () const
  public static native long GetTime(long lpjFbxAnimCurveKeyBase);
  /// virtual void  SetTime (const FbxTime &pTime)
  public static native void SetTime(long lpjFbxAnimCurveKeyBase, Long pTime);
}
