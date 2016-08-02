package fbxsdk;
//26 135 FbxCluster  --------------------
public class FbxCluster  {
  public              class   ELinkMode  {
   public static final int eNormalize = 0;
   public static final int eAdditive = 1;
   public static final int eTotalOne = 2;
}
  /// void  SetControlPointIWCount (int pCount)
  public static native void SetControlPointIWCount(long lpjFbxCluster, int pCount);
  /// EType  GetSubDeformerType () const
  public static native int GetSubDeformerType(long lpjFbxCluster);
  /// void  Reset ()
  public static native void Reset(long lpjFbxCluster);
  /// void  SetLinkMode (ELinkMode pMode)
  public static native void SetLinkMode(long lpjFbxCluster, int pMode);
  /// ELinkMode  GetLinkMode () const
  public static native int GetLinkMode(long lpjFbxCluster);
  /// void  SetLink (const FbxNode *pNode)
  public static native void SetLink(long lpjFbxCluster, long pNode);
  /// FbxNode *  GetLink ()
  public static native long GetLink(long lpjFbxCluster);
  /// const FbxNode *  GetLink () const
  public static native long GetLink1(long lpjFbxCluster);
  /// void  SetAssociateModel (FbxNode *pNode)
  public static native void SetAssociateModel(long lpjFbxCluster, long pNode);
  /// FbxNode *  GetAssociateModel () const
  public static native long GetAssociateModel(long lpjFbxCluster);
  /// void  AddControlPointIndex (int pIndex, double pWeight)
  public static native void AddControlPointIndex(long lpjFbxCluster, int pIndex, double pWeight);
  /// int  GetControlPointIndicesCount () const
  public static native int GetControlPointIndicesCount(long lpjFbxCluster);
  /// int *  GetControlPointIndices () const
  public static native long GetControlPointIndices(long lpjFbxCluster);
  /// double *  GetControlPointWeights () const
  public static native long GetControlPointWeights(long lpjFbxCluster);
  /// void  SetTransformMatrix (const FbxAMatrix &pMatrix)
  public static native void SetTransformMatrix(long lpjFbxCluster, Long pMatrix);
  /// FbxAMatrix &  GetTransformMatrix (FbxAMatrix &pMatrix) const
  public static native long GetTransformMatrix(long lpjFbxCluster, Long pMatrix);
  /// void  SetTransformLinkMatrix (const FbxAMatrix &pMatrix)
  public static native void SetTransformLinkMatrix(long lpjFbxCluster, Long pMatrix);
  /// FbxAMatrix &  GetTransformLinkMatrix (FbxAMatrix &pMatrix) const
  public static native long GetTransformLinkMatrix(long lpjFbxCluster, Long pMatrix);
  /// void  SetTransformAssociateModelMatrix (const FbxAMatrix &pMatrix)
  public static native void SetTransformAssociateModelMatrix(long lpjFbxCluster, Long pMatrix);
  /// FbxAMatrix &  GetTransformAssociateModelMatrix (FbxAMatrix &pMatrix) const
  public static native long GetTransformAssociateModelMatrix(long lpjFbxCluster, Long pMatrix);
  /// void  SetTransformParentMatrix (const FbxAMatrix &pMatrix)
  public static native void SetTransformParentMatrix(long lpjFbxCluster, Long pMatrix);
  /// FbxAMatrix &  GetTransformParentMatrix (FbxAMatrix &pMatrix) const
  public static native long GetTransformParentMatrix(long lpjFbxCluster, Long pMatrix);
  /// bool  IsTransformParentSet () const
  public static native boolean IsTransformParentSet(long lpjFbxCluster);
  /// FbxCluster * Create( FbxSubDeformer* lpFbxSubDeformer,  const char* pName )
  public static native long Create(   long lpFbxSubDeformer, String pName);
}
