//copyright by aerror 2016 
package fbxsdk;
//26 77 FbxShape  --------------------
public class FbxShape  {
  /// bool  SetBlendShapeChannel (FbxBlendShapeChannel *pBlendShapeChannel)
  public static native boolean SetBlendShapeChannel(long lpjFbxShape, long pBlendShapeChannel);
  /// FbxBlendShapeChannel *  GetBlendShapeChannel () const
  public static native long GetBlendShapeChannel(long lpjFbxShape);
  /// FbxGeometry *  GetBaseGeometry ()
  public static native long GetBaseGeometry(long lpjFbxShape);
  /// int  GetControlPointIndicesCount () const
  public static native int GetControlPointIndicesCount(long lpjFbxShape);
  /// int *  GetControlPointIndices () const
  public static native long GetControlPointIndices(long lpjFbxShape);
  /// void  SetControlPointIndicesCount (int pCount)
  public static native void SetControlPointIndicesCount(long lpjFbxShape, int pCount);
  /// void  AddControlPointIndex (int pIndex)
  public static native void AddControlPointIndex(long lpjFbxShape, int pIndex);
  /// void  Reset ()
  public static native void Reset(long lpjFbxShape);
  /// FbxShape * Create( FbxGeometryBase* lpFbxGeometryBase,  const char* pName )
  public static native long Create(   long lpFbxGeometryBase, String pName);
}
