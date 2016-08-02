//copyright by aerror 2016 
package fbxsdk;
//26 107 FbxLimits  --------------------
public class FbxLimits  {
  /// FbxLimits ()
  public static native long meCreate(  );
  /// bool  GetActive () const
  public static native boolean GetActive(long lpjFbxLimits);
  /// void  SetActive (const bool pActive)
  public static native void SetActive(long lpjFbxLimits, boolean pActive);
  /// bool  GetMinXActive () const
  public static native boolean GetMinXActive(long lpjFbxLimits);
  /// bool  GetMinYActive () const
  public static native boolean GetMinYActive(long lpjFbxLimits);
  /// bool  GetMinZActive () const
  public static native boolean GetMinZActive(long lpjFbxLimits);
  /// void  GetMinActive (bool &pXActive, bool &pYActive, bool &pZActive) const
  public static native void GetMinActive(long lpjFbxLimits, Boolean pXActive, Boolean pYActive, Boolean pZActive);
  /// FbxDouble3  GetMin () const
  public static native long GetMin(long lpjFbxLimits);
  /// void  SetMinXActive (const bool pActive)
  public static native void SetMinXActive(long lpjFbxLimits, boolean pActive);
  /// void  SetMinYActive (const bool pActive)
  public static native void SetMinYActive(long lpjFbxLimits, boolean pActive);
  /// void  SetMinZActive (const bool pActive)
  public static native void SetMinZActive(long lpjFbxLimits, boolean pActive);
  /// void  SetMinActive (const bool pXActive, const bool pYActive, const bool pZActive)
  public static native void SetMinActive(long lpjFbxLimits, boolean pXActive, boolean pYActive, boolean pZActive);
  /// void  SetMin (const FbxDouble3 &pMin)
  public static native void SetMin(long lpjFbxLimits, Long pMin);
  /// bool  GetMaxXActive () const
  public static native boolean GetMaxXActive(long lpjFbxLimits);
  /// bool  GetMaxYActive () const
  public static native boolean GetMaxYActive(long lpjFbxLimits);
  /// bool  GetMaxZActive () const
  public static native boolean GetMaxZActive(long lpjFbxLimits);
  /// void  GetMaxActive (bool &pXActive, bool &pYActive, bool &pZActive) const
  public static native void GetMaxActive(long lpjFbxLimits, Boolean pXActive, Boolean pYActive, Boolean pZActive);
  /// FbxDouble3  GetMax () const
  public static native long GetMax(long lpjFbxLimits);
  /// void  SetMaxXActive (const bool pActive)
  public static native void SetMaxXActive(long lpjFbxLimits, boolean pActive);
  /// void  SetMaxYActive (const bool pActive)
  public static native void SetMaxYActive(long lpjFbxLimits, boolean pActive);
  /// void  SetMaxZActive (const bool pActive)
  public static native void SetMaxZActive(long lpjFbxLimits, boolean pActive);
  /// void  SetMaxActive (const bool pXActive, const bool pYActive, const bool pZActive)
  public static native void SetMaxActive(long lpjFbxLimits, boolean pXActive, boolean pYActive, boolean pZActive);
  /// void  SetMax (const FbxDouble3 &pMax)
  public static native void SetMax(long lpjFbxLimits, Long pMax);
  /// bool  GetAnyMinMaxActive () const
  public static native boolean GetAnyMinMaxActive(long lpjFbxLimits);
  /// FbxDouble3  Apply (const FbxDouble3 &pVector)
  public static native long Apply(long lpjFbxLimits, Long pVector);
  /// void meDestroy(FbxLimits * lpFbxLimits)
  public static native void meDestroy(long lpjFbxLimits);
}
