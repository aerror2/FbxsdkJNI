package fbxsdk;
//26 109 FbxNurbsCurve  --------------------
public class FbxNurbsCurve  {
  public                              class   EDimension  {
   public static final int e2D  =  2;
   public static final int e3D = e2D  + 1;
}
  public                              class   EType  {
   public static final int eOpen = 0;
   public static final int eClosed = 1;
   public static final int ePeriodic = 2;
}
  /// virtual FbxNodeAttribute::EType  GetAttributeType () const
  public static native int GetAttributeType(long lpjFbxNurbsCurve);
  /// void  InitControlPoints (int pCount, EType pVType)
  public static native void InitControlPoints(long lpjFbxNurbsCurve, int pCount, int pVType);
  /// double *  GetKnotVector () const
  public static native long GetKnotVector(long lpjFbxNurbsCurve);
  /// int  GetKnotCount () const
  public static native int GetKnotCount(long lpjFbxNurbsCurve);
  /// void  SetOrder (int pOrder)
  public static native void SetOrder(long lpjFbxNurbsCurve, int pOrder);
  /// int  GetOrder () const
  public static native int GetOrder(long lpjFbxNurbsCurve);
  /// void  SetStep (int pStep)
  public static native void SetStep(long lpjFbxNurbsCurve, int pStep);
  /// int  GetStep () const
  public static native int GetStep(long lpjFbxNurbsCurve);
  /// void  SetDimension (EDimension pDimension)
  public static native void SetDimension(long lpjFbxNurbsCurve, int pDimension);
  /// EDimension  GetDimension () const
  public static native int GetDimension(long lpjFbxNurbsCurve);
  /// bool  IsRational ()
  public static native boolean IsRational(long lpjFbxNurbsCurve);
  /// int  GetSpanCount () const
  public static native int GetSpanCount(long lpjFbxNurbsCurve);
  /// EType  GetType () const
  public static native int GetType(long lpjFbxNurbsCurve);
  /// bool  IsPolyline () const
  public static native boolean IsPolyline(long lpjFbxNurbsCurve);
  /// bool  IsBezier () const
  public static native boolean IsBezier(long lpjFbxNurbsCurve);
  /// int  TessellateCurve (FbxArray< FbxVector4 > &pPointArray, int pStep=16)
  public static native int TessellateCurve(long lpjFbxNurbsCurve, Long pPointArray, int pStep);
  /// FbxLine *  TessellateCurve (int pStep=16)
  public static native long TessellateCurve1(long lpjFbxNurbsCurve, int pStep);
  /// FbxNurbsCurve * Create( FbxGeometry* lpFbxGeometry,  const char* pName )
  public static native long Create(   long lpFbxGeometry, String pName);
}
