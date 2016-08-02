//copyright by aerror 2016 
package fbxsdk;
//26 79 FbxBoundary  --------------------
public class FbxBoundary  {
  /// void  AddCurve (FbxNurbsCurve *pCurve)
  public static native void AddCurve(long lpjFbxBoundary, long pCurve);
  /// int  GetCurveCount () const
  public static native int GetCurveCount(long lpjFbxBoundary);
  /// FbxNurbsCurve *  GetCurve (int pIndex)
  public static native long GetCurve(long lpjFbxBoundary, int pIndex);
  /// const FbxNurbsCurve *  GetCurve (int pIndex) const
  public static native long GetCurve1(long lpjFbxBoundary, int pIndex);
  /// virtual FbxNodeAttribute::EType  GetAttributeType () const
  public static native int GetAttributeType(long lpjFbxBoundary);
  /// bool  IsPointInControlHull (const FbxVector4 &pPoint)
  public static native boolean IsPointInControlHull(long lpjFbxBoundary, Long pPoint);
  /// FbxVector4  ComputePointInBoundary ()
  public static native long ComputePointInBoundary(long lpjFbxBoundary);
  /// FbxPropertyT< FbxBool >  OuterFlag
  public static native void mepSetOuterFlag(long lpjFbxBoundary, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  OuterFlag
  public static native boolean mepGetOuterFlag(long lpjFbxBoundary);
  /// FbxPropertyT< FbxBool >  OuterFlag
  public static native long mptGetOuterFlag(long lpjFbxBoundary);
  /// FbxBoundary * Create( FbxGeometry* lpFbxGeometry,  const char* pName )
  public static native long Create(   long lpFbxGeometry, String pName);
}
