package fbxsdk;
//26 115 FbxPatch  --------------------
public class FbxPatch  {
  public    class   EType  {
   public static final int eBezier = 0;
   public static final int eBezierQuadric = 1;
   public static final int eCardinal = 2;
   public static final int eBSpline = 3;
   public static final int eLinear = 4;
}
  /// virtual FbxNodeAttribute::EType  GetAttributeType () const
  public static native int GetAttributeType(long lpjFbxPatch);
  /// void  Reset ()
  public static native void Reset(long lpjFbxPatch);
  /// void  SetSurfaceMode (FbxGeometry::ESurfaceMode pMode)
  public static native void SetSurfaceMode(long lpjFbxPatch, int pMode);
  /// FbxGeometry::ESurfaceMode  GetSurfaceMode () const
  public static native int GetSurfaceMode(long lpjFbxPatch);
  /// void  InitControlPoints (int pUCount, EType pUType, int pVCount, EType pVType)
  public static native void InitControlPoints(long lpjFbxPatch, int pUCount, int pUType, int pVCount, int pVType);
  /// int  GetUCount () const
  public static native int GetUCount(long lpjFbxPatch);
  /// int  GetVCount () const
  public static native int GetVCount(long lpjFbxPatch);
  /// EType  GetPatchUType () const
  public static native int GetPatchUType(long lpjFbxPatch);
  /// EType  GetPatchVType () const
  public static native int GetPatchVType(long lpjFbxPatch);
  /// void  SetStep (int pUStep, int pVStep)
  public static native void SetStep(long lpjFbxPatch, int pUStep, int pVStep);
  /// int  GetUStep () const
  public static native int GetUStep(long lpjFbxPatch);
  /// int  GetVStep () const
  public static native int GetVStep(long lpjFbxPatch);
  /// void  SetClosed (bool pU, bool pV)
  public static native void SetClosed(long lpjFbxPatch, boolean pU, boolean pV);
  /// bool  GetUClosed () const
  public static native boolean GetUClosed(long lpjFbxPatch);
  /// bool  GetVClosed () const
  public static native boolean GetVClosed(long lpjFbxPatch);
  /// void  SetUCapped (bool pUBottom, bool pUTop)
  public static native void SetUCapped(long lpjFbxPatch, boolean pUBottom, boolean pUTop);
  /// bool  GetUCappedBottom () const
  public static native boolean GetUCappedBottom(long lpjFbxPatch);
  /// bool  GetUCappedTop () const
  public static native boolean GetUCappedTop(long lpjFbxPatch);
  /// void  SetVCapped (bool pVBottom, bool pVTop)
  public static native void SetVCapped(long lpjFbxPatch, boolean pVBottom, boolean pVTop);
  /// bool  GetVCappedBottom () const
  public static native boolean GetVCappedBottom(long lpjFbxPatch);
  /// bool  GetVCappedTop () const
  public static native boolean GetVCappedTop(long lpjFbxPatch);
  /// virtual bool  ContentWriteTo (FbxStream &pStream) const
  public static native boolean ContentWriteTo(long lpjFbxPatch, Long pStream);
  /// virtual bool  ContentReadFrom (const FbxStream &pStream)
  public static native boolean ContentReadFrom(long lpjFbxPatch, Long pStream);
  /// FbxPatch * Create( FbxGeometry* lpFbxGeometry,  const char* pName )
  public static native long Create(   long lpFbxGeometry, String pName);
}
