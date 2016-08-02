package fbxsdk;
//26 106 FbxControlSet  --------------------
public class FbxControlSet  {
  public                          class   EType  {
   public static final int eNone = 0;
   public static final int eFkIk = 1;
   public static final int eIkOnly = 2;
}
  /// void  Reset ()
  public static native void Reset(long lpjFbxControlSet);
  /// void  SetType (EType pType)
  public static native void SetType(long lpjFbxControlSet, int pType);
  /// EType  GetType () const
  public static native int GetType(long lpjFbxControlSet);
  /// void  SetUseAxis (bool pUseAxis)
  public static native void SetUseAxis(long lpjFbxControlSet, boolean pUseAxis);
  /// bool  GetUseAxis () const
  public static native boolean GetUseAxis(long lpjFbxControlSet);
  /// void  SetLockTransform (bool pLockTransform)
  public static native void SetLockTransform(long lpjFbxControlSet, boolean pLockTransform);
  /// bool  GetLockTransform () const
  public static native boolean GetLockTransform(long lpjFbxControlSet);
  /// void  SetLock3DPick (bool pLock3DPick)
  public static native void SetLock3DPick(long lpjFbxControlSet, boolean pLock3DPick);
  /// bool  GetLock3DPick () const
  public static native boolean GetLock3DPick(long lpjFbxControlSet);
  /// bool  SetControlSetLink (FbxCharacter::ENodeId pCharacterNodeId, const FbxControlSetLink &pControlSetLink)
  public static native boolean SetControlSetLink(long lpjFbxControlSet, int pCharacterNodeId, Long pControlSetLink);
  /// bool  GetControlSetLink (FbxCharacter::ENodeId pCharacterNodeId, FbxControlSetLink *pControlSetLink=NULL) const
  public static native boolean GetControlSetLink(long lpjFbxControlSet, int pCharacterNodeId, long pControlSetLink);
  /// bool  SetEffector (FbxEffector::ENodeId pEffectorNodeId, FbxEffector pEffector)
  public static native boolean SetEffector(long lpjFbxControlSet, int pEffectorNodeId, long pEffector);
  /// bool  GetEffector (FbxEffector::ENodeId pEffectorNodeId, FbxEffector *pEffector=NULL)
  public static native boolean GetEffector(long lpjFbxControlSet, int pEffectorNodeId, long pEffector);
  /// bool  SetEffectorAux (FbxEffector::ENodeId pEffectorNodeId, FbxNode *pNode, FbxEffector::ESetId pEffectorSetId=FbxEffector::eAux1Set)
  public static native boolean SetEffectorAux(long lpjFbxControlSet, int pEffectorNodeId, long pNode, int pEffectorSetId);
  /// bool  GetEffectorAux (FbxEffector::ENodeId pEffectorNodeId, FbxNode **pNode=NULL, FbxEffector::ESetId pEffectorSetId=FbxEffector::eAux1Set) const
  public static native boolean GetEffectorAux(long lpjFbxControlSet, int pEffectorNodeId, long [] pNode, int pEffectorSetId);
//No Static CreateFunc
}
