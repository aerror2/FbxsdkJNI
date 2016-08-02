//copyright by aerror 2016 
package fbxsdk;
//26 124 FbxNurbs  --------------------
public class FbxNurbs  {
  public                              class   EType  {
   public static final int ePeriodic = 0;
   public static final int eClosed = 1;
   public static final int eOpen = 2;
}
  /// virtual FbxNodeAttribute::EType  GetAttributeType () const
  public static native int GetAttributeType(long lpjFbxNurbs);
  /// void  Reset ()
  public static native void Reset(long lpjFbxNurbs);
  /// void  SetSurfaceMode (FbxGeometry::ESurfaceMode pMode)
  public static native void SetSurfaceMode(long lpjFbxNurbs, int pMode);
  /// ESurfaceMode  GetSurfaceMode () const
  public static native int GetSurfaceMode(long lpjFbxNurbs);
  /// void  InitControlPoints (int pUCount, EType pUType, int pVCount, EType pVType)
  public static native void InitControlPoints(long lpjFbxNurbs, int pUCount, int pUType, int pVCount, int pVType);
  /// int  GetUCount () const
  public static native int GetUCount(long lpjFbxNurbs);
  /// int  GetVCount () const
  public static native int GetVCount(long lpjFbxNurbs);
  /// EType  GetNurbsUType () const
  public static native int GetNurbsUType(long lpjFbxNurbs);
  /// EType  GetNurbsVType () const
  public static native int GetNurbsVType(long lpjFbxNurbs);
  /// int  GetUKnotCount () const
  public static native int GetUKnotCount(long lpjFbxNurbs);
  /// double *  GetUKnotVector () const
  public static native long GetUKnotVector(long lpjFbxNurbs);
  /// int  GetVKnotCount () const
  public static native int GetVKnotCount(long lpjFbxNurbs);
  /// double *  GetVKnotVector () const
  public static native long GetVKnotVector(long lpjFbxNurbs);
  /// int *  GetUMultiplicityVector () const
  public static native long GetUMultiplicityVector(long lpjFbxNurbs);
  /// int *  GetVMultiplicityVector () const
  public static native long GetVMultiplicityVector(long lpjFbxNurbs);
  /// void  SetOrder (FbxUInt pUOrder, FbxUInt pVOrder)
  public static native void SetOrder(long lpjFbxNurbs, int pUOrder, int pVOrder);
  /// int  GetUOrder () const
  public static native int GetUOrder(long lpjFbxNurbs);
  /// int  GetVOrder () const
  public static native int GetVOrder(long lpjFbxNurbs);
  /// void  SetStep (int pUStep, int pVStep)
  public static native void SetStep(long lpjFbxNurbs, int pUStep, int pVStep);
  /// int  GetUStep () const
  public static native int GetUStep(long lpjFbxNurbs);
  /// int  GetVStep () const
  public static native int GetVStep(long lpjFbxNurbs);
  /// int  GetUSpanCount () const
  public static native int GetUSpanCount(long lpjFbxNurbs);
  /// int  GetVSpanCount () const
  public static native int GetVSpanCount(long lpjFbxNurbs);
  /// void  SetApplyFlipUV (bool pFlag)
  public static native void SetApplyFlipUV(long lpjFbxNurbs, boolean pFlag);
  /// bool  GetApplyFlipUV () const
  public static native boolean GetApplyFlipUV(long lpjFbxNurbs);
  /// void  SetApplyFlipLinks (bool pFlag)
  public static native void SetApplyFlipLinks(long lpjFbxNurbs, boolean pFlag);
  /// bool  GetApplyFlipLinks () const
  public static native boolean GetApplyFlipLinks(long lpjFbxNurbs);
  /// bool  GetApplyFlip () const
  public static native boolean GetApplyFlip(long lpjFbxNurbs);
  /// FbxNurbs * Create( FbxGeometry* lpFbxGeometry,  const char* pName )
  public static native long Create(   long lpFbxGeometry, String pName);
}
