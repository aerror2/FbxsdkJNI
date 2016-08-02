//copyright by aerror 2016 
package fbxsdk;
//26 51 FbxDeformationsEvaluator  --------------------
public class FbxDeformationsEvaluator  {
  /// bool  Init (const FbxNode *pNode, const FbxMesh *pMesh)
  public static native boolean Init(long lpjFbxDeformationsEvaluator, long pNode, long pMesh);
  /// bool  ComputeShapeDeformation (FbxVector4 *pVertexArray, const FbxTime &pTime)
  public static native boolean ComputeShapeDeformation(long lpjFbxDeformationsEvaluator, long pVertexArray, Long pTime);
  /// bool  ComputeSkinDeformation (FbxVector4 *pVertexArray, const FbxTime &pTime, FbxAMatrix *pGX=NULL, const FbxPose *pPose=NULL)
  public static native boolean ComputeSkinDeformation(long lpjFbxDeformationsEvaluator, long pVertexArray, Long pTime, long pGX, long pPose);
//No Static CreateFunc
}
