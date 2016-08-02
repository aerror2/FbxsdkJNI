//copyright by aerror 2016 
package fbxsdk;
//26 246 FbxScene  --------------------
public class FbxScene  {
  /// void  FillPoseArray (FbxArray< FbxPose * > &pPoseArray)
  public static native void FillPoseArray(long lpjFbxScene, Long pPoseArray);
  /// void  Clear ()
  public static native void Clear(long lpjFbxScene);
  /// FbxNode *  GetRootNode () const
  public static native long GetRootNode(long lpjFbxScene);
  /// void  FillTextureArray (FbxArray< FbxTexture * > &pTextureArray)
  public static native void FillTextureArray(long lpjFbxScene, Long pTextureArray);
  /// void  FillMaterialArray (FbxArray< FbxSurfaceMaterial * > &pMaterialArray)
  public static native void FillMaterialArray(long lpjFbxScene, Long pMaterialArray);
  /// int  GetGenericNodeCount () const
  public static native int GetGenericNodeCount(long lpjFbxScene);
  /// FbxGenericNode *  GetGenericNode (int pIndex)
  public static native long GetGenericNode(long lpjFbxScene, int pIndex);
  /// FbxGenericNode *  GetGenericNode (char *pName)
  public static native long GetGenericNode1(long lpjFbxScene, String pName);
  /// bool  AddGenericNode (FbxGenericNode *pGenericNode)
  public static native boolean AddGenericNode(long lpjFbxScene, long pGenericNode);
  /// bool  RemoveGenericNode (FbxGenericNode *pGenericNode)
  public static native boolean RemoveGenericNode(long lpjFbxScene, long pGenericNode);
  /// int  GetCharacterCount () const
  public static native int GetCharacterCount(long lpjFbxScene);
  /// FbxCharacter *  GetCharacter (int pIndex)
  public static native long GetCharacter(long lpjFbxScene, int pIndex);
  /// int  CreateCharacter (const char *pName)
  public static native int CreateCharacter(long lpjFbxScene, String pName);
  /// void  DestroyCharacter (int pIndex)
  public static native void DestroyCharacter(long lpjFbxScene, int pIndex);
  /// int  GetControlSetPlugCount () const
  public static native int GetControlSetPlugCount(long lpjFbxScene);
  /// FbxControlSetPlug *  GetControlSetPlug (int pIndex)
  public static native long GetControlSetPlug(long lpjFbxScene, int pIndex);
  /// int  CreateControlSetPlug (char *pName)
  public static native int CreateControlSetPlug(long lpjFbxScene, String pName);
  /// void  DestroyControlSetPlug (int pIndex)
  public static native void DestroyControlSetPlug(long lpjFbxScene, int pIndex);
  /// int  GetCharacterPoseCount () const
  public static native int GetCharacterPoseCount(long lpjFbxScene);
  /// FbxCharacterPose *  GetCharacterPose (int pIndex)
  public static native long GetCharacterPose(long lpjFbxScene, int pIndex);
  /// int  CreateCharacterPose (char *pName)
  public static native int CreateCharacterPose(long lpjFbxScene, String pName);
  /// void  DestroyCharacterPose (int pIndex)
  public static native void DestroyCharacterPose(long lpjFbxScene, int pIndex);
  /// int  GetPoseCount () const
  public static native int GetPoseCount(long lpjFbxScene);
  /// FbxPose *  GetPose (int pIndex)
  public static native long GetPose(long lpjFbxScene, int pIndex);
  /// bool  AddPose (FbxPose *pPose)
  public static native boolean AddPose(long lpjFbxScene, long pPose);
  /// bool  RemovePose (FbxPose *pPose)
  public static native boolean RemovePose(long lpjFbxScene, long pPose);
  /// bool  RemovePose (int pIndex)
  public static native boolean RemovePose1(long lpjFbxScene, int pIndex);
  /// FbxDocumentInfo *  GetSceneInfo ()
  public static native long GetSceneInfo(long lpjFbxScene);
  /// void  SetSceneInfo (FbxDocumentInfo *pSceneInfo)
  public static native void SetSceneInfo(long lpjFbxScene, long pSceneInfo);
  /// FbxGlobalSettings &  GetGlobalSettings ()
  public static native long GetGlobalSettings(long lpjFbxScene);
  /// const FbxGlobalSettings &  GetGlobalSettings () const
  public static native long GetGlobalSettings1(long lpjFbxScene);
  /// int  GetMaterialCount () const
  public static native int GetMaterialCount(long lpjFbxScene);
  /// FbxSurfaceMaterial *  GetMaterial (int pIndex)
  public static native long GetMaterial(long lpjFbxScene, int pIndex);
  /// FbxSurfaceMaterial *  GetMaterial (char *pName)
  public static native long GetMaterial1(long lpjFbxScene, String pName);
  /// bool  AddMaterial (FbxSurfaceMaterial *pMaterial)
  public static native boolean AddMaterial(long lpjFbxScene, long pMaterial);
  /// bool  RemoveMaterial (FbxSurfaceMaterial *pMaterial)
  public static native boolean RemoveMaterial(long lpjFbxScene, long pMaterial);
  /// int  GetTextureCount () const
  public static native int GetTextureCount(long lpjFbxScene);
  /// FbxTexture *  GetTexture (int pIndex)
  public static native long GetTexture(long lpjFbxScene, int pIndex);
  /// FbxTexture *  GetTexture (char *pName)
  public static native long GetTexture1(long lpjFbxScene, String pName);
  /// bool  AddTexture (FbxTexture *pTexture)
  public static native boolean AddTexture(long lpjFbxScene, long pTexture);
  /// bool  RemoveTexture (FbxTexture *pTexture)
  public static native boolean RemoveTexture(long lpjFbxScene, long pTexture);
  /// int  GetNodeCount () const
  public static native int GetNodeCount(long lpjFbxScene);
  /// FbxNode *  GetNode (int pIndex)
  public static native long GetNode(long lpjFbxScene, int pIndex);
  /// bool  AddNode (FbxNode *pNode)
  public static native boolean AddNode(long lpjFbxScene, long pNode);
  /// bool  RemoveNode (FbxNode *pNode)
  public static native boolean RemoveNode(long lpjFbxScene, long pNode);
  /// int  GetCurveOnSurfaceCount ()
  public static native int GetCurveOnSurfaceCount(long lpjFbxScene);
  /// FbxNode *  FindNodeByName (const FbxString &pName)
  public static native long FindNodeByName(long lpjFbxScene, Long pName);
  /// int  GetGeometryCount () const
  public static native int GetGeometryCount(long lpjFbxScene);
  /// FbxGeometry *  GetGeometry (int pIndex)
  public static native long GetGeometry(long lpjFbxScene, int pIndex);
  /// bool  AddGeometry (FbxGeometry *pGeometry)
  public static native boolean AddGeometry(long lpjFbxScene, long pGeometry);
  /// bool  RemoveGeometry (FbxGeometry *pGeometry)
  public static native boolean RemoveGeometry(long lpjFbxScene, long pGeometry);
  /// int  GetVideoCount () const
  public static native int GetVideoCount(long lpjFbxScene);
  /// FbxVideo *  GetVideo (int pIndex)
  public static native long GetVideo(long lpjFbxScene, int pIndex);
  /// bool  AddVideo (FbxVideo *pVideo)
  public static native boolean AddVideo(long lpjFbxScene, long pVideo);
  /// bool  RemoveVideo (FbxVideo *pVideo)
  public static native boolean RemoveVideo(long lpjFbxScene, long pVideo);
  /// void  SyncShowPropertyForInstance ()
  public static native void SyncShowPropertyForInstance(long lpjFbxScene);
  /// bool  ComputeBoundingBoxMinMaxCenter (FbxVector4 &pBBoxMin, FbxVector4 &pBBoxMax, FbxVector4 &pBBoxCenter, bool pSelected=false, const FbxTime &pTime=FBXSDK_TIME_INFINITE)
  public static native boolean ComputeBoundingBoxMinMaxCenter(long lpjFbxScene, Long pBBoxMin, Long pBBoxMax, Long pBBoxCenter, boolean pSelected, Long pTime);
  /// FbxScene * Create( FbxDocument* lpFbxDocument,  const char* pName )
  public static native long Create(   long lpFbxDocument, String pName);
}
