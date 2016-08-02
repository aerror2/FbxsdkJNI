//copyright by aerror 2016 
package fbxsdk;
//26 128 FbxPose  --------------------
public class FbxPose  {
  public                class   ENameComponent  {
   public static final int eInitialNameComponent  =  1;
   public static final int eCurrentNameComponent  =  2;
   public static final int eAllNameComponents  =  3;
}
  /// void  SetIsBindPose (bool pIsBindPose)
  public static native void SetIsBindPose(long lpjFbxPose, boolean pIsBindPose);
  /// bool  IsBindPose () const
  public static native boolean IsBindPose(long lpjFbxPose);
  /// bool  IsRestPose () const
  public static native boolean IsRestPose(long lpjFbxPose);
  /// int  GetCount () const
  public static native int GetCount(long lpjFbxPose);
  /// int  Add (FbxNode *pNode, const FbxMatrix &pMatrix, bool pLocalMatrix=false, bool pMultipleBindPose=true)
  public static native int Add(long lpjFbxPose, long pNode, Long pMatrix, boolean pLocalMatrix, boolean pMultipleBindPose);
  /// void  Remove (int pIndex)
  public static native void Remove(long lpjFbxPose, int pIndex);
  /// FbxNameHandler  GetNodeName (int pIndex) const
  public static native long GetNodeName(long lpjFbxPose, int pIndex);
  /// FbxNode *  GetNode (int pIndex) const
  public static native long GetNode(long lpjFbxPose, int pIndex);
  /// const FbxMatrix &  GetMatrix (int pIndex) const
  public static native long GetMatrix(long lpjFbxPose, int pIndex);
  /// bool  IsLocalMatrix (int pIndex) const
  public static native boolean IsLocalMatrix(long lpjFbxPose, int pIndex);
  /// int  Find (const FbxNameHandler &pNodeName, char pCompareWhat=eAllNameComponents) const
  public static native int Find(long lpjFbxPose, Long pNodeName, byte pCompareWhat);
  /// int  Find (const FbxNode *pNode) const
  public static native int Find1(long lpjFbxPose, long pNode);
  /// bool  IsValidBindPose (FbxNode *pRoot, double pMatrixCmpTolerance=0.0001, FbxStatus *pStatus=NULL)
  public static native boolean IsValidBindPose(long lpjFbxPose, long pRoot, double pMatrixCmpTolerance, long pStatus);
  /// bool  IsValidBindPoseVerbose (FbxNode *pRoot, NodeList &pMissingAncestors, NodeList &pMissingDeformers, NodeList &pMissingDeformersAncestors, NodeList &pWrongMatrices, double pMatrixCmpTolerance=0.0001, FbxStatus *pStatus=NULL)
  public static native boolean IsValidBindPoseVerbose(long lpjFbxPose, long pRoot, Long pMissingAncestors, Long pMissingDeformers, Long pMissingDeformersAncestors, Long pWrongMatrices, double pMatrixCmpTolerance, long pStatus);
  /// bool  IsValidBindPoseVerbose (FbxNode *pRoot, FbxUserNotification *pUserNotification, double pMatrixCmpTolerance=0.0001, FbxStatus *pStatus=NULL)
  public static native boolean IsValidBindPoseVerbose1(long lpjFbxPose, long pRoot, long pUserNotification, double pMatrixCmpTolerance, long pStatus);
  /// FbxPose * Create( FbxObject* lpFbxObject,  const char* pName )
  public static native long Create(   long lpFbxObject, String pName);
}
