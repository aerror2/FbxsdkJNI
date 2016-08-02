//copyright by aerror 2016 
package fbxsdk;
//26 87 FbxBlendShapeChannel  --------------------
public class FbxBlendShapeChannel  {
  /// bool  SetBlendShapeDeformer (FbxBlendShape *pBlendShape)
  public static native boolean SetBlendShapeDeformer(long lpjFbxBlendShapeChannel, long pBlendShape);
  /// FbxBlendShape *  GetBlendShapeDeformer ()
  public static native long GetBlendShapeDeformer(long lpjFbxBlendShapeChannel);
  /// bool  AddTargetShape (FbxShape *pShape, double pFullDeformPercent=100)
  public static native boolean AddTargetShape(long lpjFbxBlendShapeChannel, long pShape, double pFullDeformPercent);
  /// FbxShape *  RemoveTargetShape (FbxShape *pShape)
  public static native long RemoveTargetShape(long lpjFbxBlendShapeChannel, long pShape);
  /// int  GetTargetShapeCount () const
  public static native int GetTargetShapeCount(long lpjFbxBlendShapeChannel);
  /// FbxShape *  GetTargetShape (int pIndex)
  public static native long GetTargetShape(long lpjFbxBlendShapeChannel, int pIndex);
  /// const FbxShape *  GetTargetShape (int pIndex) const
  public static native long GetTargetShape1(long lpjFbxBlendShapeChannel, int pIndex);
  /// int  GetTargetShapeIndex (FbxShape *pShape)
  public static native int GetTargetShapeIndex(long lpjFbxBlendShapeChannel, long pShape);
  /// double *  GetTargetShapeFullWeights ()
  public static native long GetTargetShapeFullWeights(long lpjFbxBlendShapeChannel);
  /// void  SetFullWeightsCount (int pCount)
  public static native void SetFullWeightsCount(long lpjFbxBlendShapeChannel, int pCount);
  /// EType  GetSubDeformerType () const
  public static native int GetSubDeformerType(long lpjFbxBlendShapeChannel);
  /// void  Reset ()
  public static native void Reset(long lpjFbxBlendShapeChannel);
  /// FbxPropertyT< FbxDouble >  DeformPercent
  public static native void mepSetDeformPercent(long lpjFbxBlendShapeChannel, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  DeformPercent
  public static native double mepGetDeformPercent(long lpjFbxBlendShapeChannel);
  /// FbxPropertyT< FbxDouble >  DeformPercent
  public static native long mptGetDeformPercent(long lpjFbxBlendShapeChannel);
  /// FbxBlendShapeChannel * Create( FbxSubDeformer* lpFbxSubDeformer,  const char* pName )
  public static native long Create(   long lpFbxSubDeformer, String pName);
}
