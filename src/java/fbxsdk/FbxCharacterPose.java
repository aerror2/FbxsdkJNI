//copyright by aerror 2016 
package fbxsdk;
//26 84 FbxCharacterPose  --------------------
public class FbxCharacterPose  {
  /// void  Reset ()
  public static native void Reset(long lpjFbxCharacterPose);
  /// FbxNode *  GetRootNode () const
  public static native long GetRootNode(long lpjFbxCharacterPose);
  /// FbxCharacter *  GetCharacter () const
  public static native long GetCharacter(long lpjFbxCharacterPose);
  /// bool  GetOffset (FbxCharacter::ENodeId pCharacterNodeId, FbxAMatrix &pOffset) const
  public static native boolean GetOffset(long lpjFbxCharacterPose, int pCharacterNodeId, Long pOffset);
  /// bool  GetLocalPosition (FbxCharacter::ENodeId pCharacterNodeId, FbxVector4 &pLocalT, FbxVector4 &pLocalR, FbxVector4 &pLocalS) const
  public static native boolean GetLocalPosition(long lpjFbxCharacterPose, int pCharacterNodeId, Long pLocalT, Long pLocalR, Long pLocalS);
  /// bool  GetGlobalPosition (FbxCharacter::ENodeId pCharacterNodeId, FbxAMatrix &pGlobalPosition) const
  public static native boolean GetGlobalPosition(long lpjFbxCharacterPose, int pCharacterNodeId, Long pGlobalPosition);
  /// FbxScene *  GetPoseScene () const
  public static native long GetPoseScene(long lpjFbxCharacterPose);
  /// FbxCharacterPose * Create( FbxObject* lpFbxObject,  const char* pName )
  public static native long Create(   long lpFbxObject, String pName);
}
