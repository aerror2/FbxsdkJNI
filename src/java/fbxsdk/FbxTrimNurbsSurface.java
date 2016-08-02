package fbxsdk;
//26 87 FbxTrimNurbsSurface  --------------------
public class FbxTrimNurbsSurface  {
  /// virtual FbxNodeAttribute::EType  GetAttributeType () const
  public static native int GetAttributeType(long lpjFbxTrimNurbsSurface);
  /// int  GetTrimRegionCount () const
  public static native int GetTrimRegionCount(long lpjFbxTrimNurbsSurface);
  /// void  BeginTrimRegion ()
  public static native void BeginTrimRegion(long lpjFbxTrimNurbsSurface);
  /// void  EndTrimRegion ()
  public static native void EndTrimRegion(long lpjFbxTrimNurbsSurface);
  /// bool  AddBoundary (FbxBoundary *pBoundary)
  public static native boolean AddBoundary(long lpjFbxTrimNurbsSurface, long pBoundary);
  /// FbxBoundary *  GetBoundary (int pIndex, int pRegionIndex=0)
  public static native long GetBoundary(long lpjFbxTrimNurbsSurface, int pIndex, int pRegionIndex);
  /// const FbxBoundary *  GetBoundary (int pIndex, int pRegionIndex=0) const
  public static native long GetBoundary1(long lpjFbxTrimNurbsSurface, int pIndex, int pRegionIndex);
  /// int  GetBoundaryCount (int pRegionIndex=0) const
  public static native int GetBoundaryCount(long lpjFbxTrimNurbsSurface, int pRegionIndex);
  /// void  SetNurbsSurface (const FbxNurbsSurface *pNurbs)
  public static native void SetNurbsSurface(long lpjFbxTrimNurbsSurface, long pNurbs);
  /// FbxNurbsSurface *  GetNurbsSurface ()
  public static native long GetNurbsSurface(long lpjFbxTrimNurbsSurface);
  /// const FbxNurbsSurface *  GetNurbsSurface () const
  public static native long GetNurbsSurface1(long lpjFbxTrimNurbsSurface);
  /// void  SetFlipNormals (bool pFlip)
  public static native void SetFlipNormals(long lpjFbxTrimNurbsSurface, boolean pFlip);
  /// bool  GetFlipNormals () const
  public static native boolean GetFlipNormals(long lpjFbxTrimNurbsSurface);
  /// virtual int  GetControlPointsCount () const
  public static native int GetControlPointsCount(long lpjFbxTrimNurbsSurface);
  /// virtual void  SetControlPointAt (const FbxVector4 &pCtrlPoint, const FbxVector4 &pNormal, int pIndex, bool pI2DSearch=false)
  public static native void SetControlPointAt(long lpjFbxTrimNurbsSurface, Long pCtrlPoint, Long pNormal, int pIndex, boolean pI2DSearch);
  /// virtual void  SetControlPointAt (const FbxVector4 &pCtrlPoint, int pIndex)
  public static native void SetControlPointAt1(long lpjFbxTrimNurbsSurface, Long pCtrlPoint, int pIndex);
  /// virtual FbxVector4 *  GetControlPoints (FbxStatus *pStatus=NULL) const
  public static native long GetControlPoints(long lpjFbxTrimNurbsSurface, long pStatus);
  /// FbxTrimNurbsSurface * Create( FbxGeometry* lpFbxGeometry,  const char* pName )
  public static native long Create(   long lpFbxGeometry, String pName);
}
