package fbxsdk;
//26 129 FbxNurbsSurface  --------------------
public class FbxNurbsSurface  {
  public                              class   EType  {
   public static final int ePeriodic = 0;
   public static final int eClosed = 1;
   public static final int eOpen = 2;
}
  /// virtual FbxNodeAttribute::EType  GetAttributeType () const
  public static native int GetAttributeType(long lpjFbxNurbsSurface);
  /// void  Reset ()
  public static native void Reset(long lpjFbxNurbsSurface);
  /// bool  IsRational () const
  public static native boolean IsRational(long lpjFbxNurbsSurface);
  /// void  SetSurfaceMode (FbxGeometry::ESurfaceMode pMode)
  public static native void SetSurfaceMode(long lpjFbxNurbsSurface, int pMode);
  /// ESurfaceMode  GetSurfaceMode () const
  public static native int GetSurfaceMode(long lpjFbxNurbsSurface);
  /// void  InitControlPoints (int pUCount, EType pUType, int pVCount, EType pVType)
  public static native void InitControlPoints(long lpjFbxNurbsSurface, int pUCount, int pUType, int pVCount, int pVType);
  /// int  GetUCount () const
  public static native int GetUCount(long lpjFbxNurbsSurface);
  /// int  GetVCount () const
  public static native int GetVCount(long lpjFbxNurbsSurface);
  /// EType  GetNurbsUType () const
  public static native int GetNurbsUType(long lpjFbxNurbsSurface);
  /// EType  GetNurbsVType () const
  public static native int GetNurbsVType(long lpjFbxNurbsSurface);
  /// int  GetUKnotCount () const
  public static native int GetUKnotCount(long lpjFbxNurbsSurface);
  /// double *  GetUKnotVector () const
  public static native long GetUKnotVector(long lpjFbxNurbsSurface);
  /// int  GetVKnotCount () const
  public static native int GetVKnotCount(long lpjFbxNurbsSurface);
  /// double *  GetVKnotVector () const
  public static native long GetVKnotVector(long lpjFbxNurbsSurface);
  /// void  SetOrder (FbxUInt pUOrder, FbxUInt pVOrder)
  public static native void SetOrder(long lpjFbxNurbsSurface, int pUOrder, int pVOrder);
  /// int  GetUOrder () const
  public static native int GetUOrder(long lpjFbxNurbsSurface);
  /// int  GetVOrder () const
  public static native int GetVOrder(long lpjFbxNurbsSurface);
  /// void  SetStep (int pUStep, int pVStep)
  public static native void SetStep(long lpjFbxNurbsSurface, int pUStep, int pVStep);
  /// int  GetUStep () const
  public static native int GetUStep(long lpjFbxNurbsSurface);
  /// int  GetVStep () const
  public static native int GetVStep(long lpjFbxNurbsSurface);
  /// int  GetUSpanCount () const
  public static native int GetUSpanCount(long lpjFbxNurbsSurface);
  /// int  GetVSpanCount () const
  public static native int GetVSpanCount(long lpjFbxNurbsSurface);
  /// void  SetApplyFlipUV (bool pFlag)
  public static native void SetApplyFlipUV(long lpjFbxNurbsSurface, boolean pFlag);
  /// bool  GetApplyFlipUV () const
  public static native boolean GetApplyFlipUV(long lpjFbxNurbsSurface);
  /// void  SetApplyFlipLinks (bool pFlag)
  public static native void SetApplyFlipLinks(long lpjFbxNurbsSurface, boolean pFlag);
  /// bool  GetApplyFlipLinks () const
  public static native boolean GetApplyFlipLinks(long lpjFbxNurbsSurface);
  /// bool  GetApplyFlip () const
  public static native boolean GetApplyFlip(long lpjFbxNurbsSurface);
  /// void  AddCurveOnSurface (FbxNode *pCurve)
  public static native void AddCurveOnSurface(long lpjFbxNurbsSurface, long pCurve);
  /// FbxNode *  GetCurveOnSurface (int pIndex)
  public static native long GetCurveOnSurface(long lpjFbxNurbsSurface, int pIndex);
  /// const FbxNode *  GetCurveOnSurface (int pIndex) const
  public static native long GetCurveOnSurface1(long lpjFbxNurbsSurface, int pIndex);
  /// int  GetCurveOnSurfaceCount () const
  public static native int GetCurveOnSurfaceCount(long lpjFbxNurbsSurface);
  /// bool  RemoveCurveOnSurface (FbxNode *pCurve)
  public static native boolean RemoveCurveOnSurface(long lpjFbxNurbsSurface, long pCurve);
  /// FbxNurbsSurface * Create( FbxGeometry* lpFbxGeometry,  const char* pName )
  public static native long Create(   long lpFbxGeometry, String pName);
}
