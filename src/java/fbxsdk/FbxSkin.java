//copyright by aerror 2016 
package fbxsdk;
//26 105 FbxSkin  --------------------
public class FbxSkin  {
  public                 class   EType  {
   public static final int eRigid = 0;
   public static final int eLinear = 1;
   public static final int eDualQuaternion = 2;
   public static final int eBlend = 3;
}
  /// void  SetDeformAccuracy (double pDeformAccuracy)
  public static native void SetDeformAccuracy(long lpjFbxSkin, double pDeformAccuracy);
  /// double  GetDeformAccuracy () const
  public static native double GetDeformAccuracy(long lpjFbxSkin);
  /// bool  SetGeometry (FbxGeometry *pGeometry)
  public static native boolean SetGeometry(long lpjFbxSkin, long pGeometry);
  /// FbxGeometry *  GetGeometry ()
  public static native long GetGeometry(long lpjFbxSkin);
  /// bool  AddCluster (FbxCluster *pCluster)
  public static native boolean AddCluster(long lpjFbxSkin, long pCluster);
  /// FbxCluster *  RemoveCluster (FbxCluster *pCluster)
  public static native long RemoveCluster(long lpjFbxSkin, long pCluster);
  /// int  GetClusterCount () const
  public static native int GetClusterCount(long lpjFbxSkin);
  /// FbxCluster *  GetCluster (int pIndex)
  public static native long GetCluster(long lpjFbxSkin, int pIndex);
  /// const FbxCluster *  GetCluster (int pIndex) const
  public static native long GetCluster1(long lpjFbxSkin, int pIndex);
  /// EDeformerType  GetDeformerType () const
  public static native int GetDeformerType(long lpjFbxSkin);
  /// void  SetSkinningType (EType pType)
  public static native void SetSkinningType(long lpjFbxSkin, int pType);
  /// EType  GetSkinningType () const
  public static native int GetSkinningType(long lpjFbxSkin);
  /// void  AddControlPointIndex (int pIndex, double pBlendWeight=0)
  public static native void AddControlPointIndex(long lpjFbxSkin, int pIndex, double pBlendWeight);
  /// int  GetControlPointIndicesCount () const
  public static native int GetControlPointIndicesCount(long lpjFbxSkin);
  /// int *  GetControlPointIndices () const
  public static native long GetControlPointIndices(long lpjFbxSkin);
  /// double *  GetControlPointBlendWeights () const
  public static native long GetControlPointBlendWeights(long lpjFbxSkin);
  /// void  SetControlPointIWCount (int pCount)
  public static native void SetControlPointIWCount(long lpjFbxSkin, int pCount);
  /// FbxSkin * Create( FbxDeformer* lpFbxDeformer,  const char* pName )
  public static native long Create(   long lpFbxDeformer, String pName);
}
