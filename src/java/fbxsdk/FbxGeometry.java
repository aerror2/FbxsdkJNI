package fbxsdk;
//26 132 FbxGeometry  --------------------
public class FbxGeometry  {
  public    class   ESurfaceMode  {
   public static final int eRaw = 0;
   public static final int eLowNoNormals = 1;
   public static final int eLow = 2;
   public static final int eHighNoNormals = 3;
   public static final int eHigh = 4;
}
  /// virtual FbxNodeAttribute::EType  GetAttributeType () const
  public static native int GetAttributeType(long lpjFbxGeometry);
  /// int  AddDeformer (FbxDeformer *pDeformer)
  public static native int AddDeformer(long lpjFbxGeometry, long pDeformer);
  /// FbxDeformer *  RemoveDeformer (int pIndex, FbxStatus *pStatus=NULL)
  public static native long RemoveDeformer(long lpjFbxGeometry, int pIndex, long pStatus);
  /// int  GetDeformerCount () const
  public static native int GetDeformerCount(long lpjFbxGeometry);
  /// FbxDeformer *  GetDeformer (int pIndex, FbxStatus *pStatus=NULL) const
  public static native long GetDeformer(long lpjFbxGeometry, int pIndex, long pStatus);
  /// int  GetDeformerCount (FbxDeformer::EDeformerType pType) const
  public static native int GetDeformerCount1(long lpjFbxGeometry, int pType);
  /// FbxDeformer *  GetDeformer (int pIndex, FbxDeformer::EDeformerType pType, FbxStatus *pStatus=NULL) const
  public static native long GetDeformer1(long lpjFbxGeometry, int pIndex, int pType, long pStatus);
  /// FbxGeometryWeightedMap *  GetSourceGeometryWeightedMap ()
  public static native long GetSourceGeometryWeightedMap(long lpjFbxGeometry);
  /// int  GetDestinationGeometryWeightedMapCount () const
  public static native int GetDestinationGeometryWeightedMapCount(long lpjFbxGeometry);
  /// FbxGeometryWeightedMap *  GetDestinationGeometryWeightedMap (int pIndex)
  public static native long GetDestinationGeometryWeightedMap(long lpjFbxGeometry, int pIndex);
  /// bool  AddShape (int pBlendShapeIndex, int pBlendShapeChannelIndex, FbxShape *pShape, double pPercent=100, FbxStatus *pStatus=NULL)
  public static native boolean AddShape(long lpjFbxGeometry, int pBlendShapeIndex, int pBlendShapeChannelIndex, long pShape, double pPercent, long pStatus);
  /// void  ClearShape ()
  public static native void ClearShape(long lpjFbxGeometry);
  /// int  GetShapeCount () const
  public static native int GetShapeCount(long lpjFbxGeometry);
  /// int  GetShapeCount (int pBlendShapeIndex, int pBlendShapeChannelIndex, FbxStatus *pStatus=NULL) const
  public static native int GetShapeCount1(long lpjFbxGeometry, int pBlendShapeIndex, int pBlendShapeChannelIndex, long pStatus);
  /// FbxShape *  GetShape (int pBlendShapeIndex, int pBlendShapeChannelIndex, int pShapeIndex, FbxStatus *pStatus=NULL)
  public static native long GetShape(long lpjFbxGeometry, int pBlendShapeIndex, int pBlendShapeChannelIndex, int pShapeIndex, long pStatus);
  /// const FbxShape *  GetShape (int pBlendShapeIndex, int pBlendShapeChannelIndex, int pShapeIndex, FbxStatus *pStatus=NULL) const
  public static native long GetShape1(long lpjFbxGeometry, int pBlendShapeIndex, int pBlendShapeChannelIndex, int pShapeIndex, long pStatus);
  /// FbxAnimCurve *  GetShapeChannel (int pBlendShapeIndex, int pBlendShapeChannelIndex, FbxAnimLayer *pLayer, bool pCreateAsNeeded=false, FbxStatus *pStatus=NULL)
  public static native long GetShapeChannel(long lpjFbxGeometry, int pBlendShapeIndex, int pBlendShapeChannelIndex, long pLayer, boolean pCreateAsNeeded, long pStatus);
  /// FbxAMatrix &  GetPivot (FbxAMatrix &pXMatrix) const
  public static native long GetPivot(long lpjFbxGeometry, Long pXMatrix);
  /// void  SetPivot (FbxAMatrix &pXMatrix)
  public static native void SetPivot(long lpjFbxGeometry, Long pXMatrix);
  /// void  ApplyPivot ()
  public static native void ApplyPivot(long lpjFbxGeometry);
  /// void  SetDefaultShape (int pBlendShapeIndex, int pBlendShapeChannelIndex, double pPercent)
  public static native void SetDefaultShape(long lpjFbxGeometry, int pBlendShapeIndex, int pBlendShapeChannelIndex, double pPercent);
  /// void  SetDefaultShape (FbxBlendShapeChannel *pBlendShapeChannel, double pPercent)
  public static native void SetDefaultShape1(long lpjFbxGeometry, long pBlendShapeChannel, double pPercent);
  /// double  GetDefaultShape (int pBlendShapeIndex, int pBlendShapeChannelIndex) const
  public static native double GetDefaultShape(long lpjFbxGeometry, int pBlendShapeIndex, int pBlendShapeChannelIndex);
  /// double  GetDefaultShape (FbxBlendShapeChannel *pBlendShapeChannel) const
  public static native double GetDefaultShape1(long lpjFbxGeometry, long pBlendShapeChannel);
  /// FbxGeometry * Create( FbxGeometryBase* lpFbxGeometryBase,  const char* pName )
  public static native long Create(   long lpFbxGeometryBase, String pName);
}
