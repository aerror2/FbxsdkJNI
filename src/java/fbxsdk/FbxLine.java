package fbxsdk;
//26 86 FbxLine  --------------------
public class FbxLine  {
  /// virtual FbxNodeAttribute::EType  GetAttributeType () const
  public static native int GetAttributeType(long lpjFbxLine);
  /// void  Reset ()
  public static native void Reset(long lpjFbxLine);
  /// void  SetIndexArraySize (int pCount)
  public static native void SetIndexArraySize(long lpjFbxLine, int pCount);
  /// int  GetIndexArraySize () const
  public static native int GetIndexArraySize(long lpjFbxLine);
  /// FbxArray< int > *  GetIndexArray ()
  public static native long GetIndexArray(long lpjFbxLine);
  /// bool  SetPointIndexAt (int pValue, int pIndex, bool pAsEndPoint=false)
  public static native boolean SetPointIndexAt(long lpjFbxLine, int pValue, int pIndex, boolean pAsEndPoint);
  /// int  GetPointIndexAt (int pIndex) const
  public static native int GetPointIndexAt(long lpjFbxLine, int pIndex);
  /// bool  AddPointIndex (int pValue, bool pAsEndPoint=false)
  public static native boolean AddPointIndex(long lpjFbxLine, int pValue, boolean pAsEndPoint);
  /// FbxArray< int > *  GetEndPointArray ()
  public static native long GetEndPointArray(long lpjFbxLine);
  /// bool  AddEndPoint (int pPointIndex)
  public static native boolean AddEndPoint(long lpjFbxLine, int pPointIndex);
  /// int  GetEndPointAt (int pEndPointIndex) const
  public static native int GetEndPointAt(long lpjFbxLine, int pEndPointIndex);
  /// int  GetEndPointCount () const
  public static native int GetEndPointCount(long lpjFbxLine);
  /// FbxPropertyT< FbxBool >  Renderable
  public static native void mepSetRenderable(long lpjFbxLine, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  Renderable
  public static native boolean mepGetRenderable(long lpjFbxLine);
  /// FbxPropertyT< FbxBool >  Renderable
  public static native long mptGetRenderable(long lpjFbxLine);
  /// FbxLine * Create( FbxGeometry* lpFbxGeometry,  const char* pName )
  public static native long Create(   long lpFbxGeometry, String pName);
}
