//copyright by aerror 2016 
package fbxsdk;
//26 169 FbxDocument  --------------------
public class FbxDocument  {
  /// virtual void  Clear ()
  public static native void Clear(long lpjFbxDocument);
  /// void  AddRootMember (FbxObject *pMember)
  public static native void AddRootMember(long lpjFbxDocument, long pMember);
  /// void  RootRootRemoveMember (FbxObject *pMember)
  public static native void RootRootRemoveMember(long lpjFbxDocument, long pMember);
  /// int  GetRootMemberCount () const
  public static native int GetRootMemberCount(long lpjFbxDocument);
  /// int  GetRootMemberCount () const
  public static native int GetRootMemberCount1(long lpjFbxDocument);
  /// int  GetRootMemberCount (FbxCriteria pCriteria) const
  public static native int GetRootMemberCount2(long lpjFbxDocument, long pCriteria);
  /// FbxObject *  GetRootMember (int pIndex=0) const
  public static native long GetRootMember(long lpjFbxDocument, int pIndex);
  /// FbxObject *  GetRootMember (FbxCriteria pCriteria, int pIndex=0) const
  public static native long GetRootMember1(long lpjFbxDocument, long pCriteria, int pIndex);
  /// virtual bool  IsRootMember (FbxObject *pMember) const
  public static native boolean IsRootMember(long lpjFbxDocument, long pMember);
  /// FbxDocumentInfo *  GetDocumentInfo () const
  public static native long GetDocumentInfo(long lpjFbxDocument);
  /// void  SetDocumentInfo (FbxDocumentInfo *pSceneInfo)
  public static native void SetDocumentInfo(long lpjFbxDocument, long pSceneInfo);
  /// void  SetPeripheral (FbxPeripheral *pPeripheral)
  public static native void SetPeripheral(long lpjFbxDocument, long pPeripheral);
  /// virtual FbxPeripheral *  GetPeripheral ()
  public static native long GetPeripheral(long lpjFbxDocument);
  /// int  UnloadContent (FbxStatus *pStatus=NULL)
  public static native int UnloadContent(long lpjFbxDocument, long pStatus);
  /// int  LoadContent (FbxStatus *pStatus=NULL)
  public static native int LoadContent(long lpjFbxDocument, long pStatus);
  /// int  GetReferencingDocuments (FbxArray< FbxDocument * > &pReferencingDocuments) const
  public static native int GetReferencingDocuments(long lpjFbxDocument, Long pReferencingDocuments);
  /// int  GetReferencingObjects (const FbxDocument *pFromDoc, FbxArray< FbxObject * > &pReferencingObjects) const
  public static native int GetReferencingObjects(long lpjFbxDocument, long pFromDoc, Long pReferencingObjects);
  /// int  GetReferencedDocuments (FbxArray< FbxDocument * > &pReferencedDocuments) const
  public static native int GetReferencedDocuments(long lpjFbxDocument, Long pReferencedDocuments);
  /// int  GetReferencedObjects (const FbxDocument *pToDoc, FbxArray< FbxObject * > &pReferencedObjects) const
  public static native int GetReferencedObjects(long lpjFbxDocument, long pToDoc, Long pReferencedObjects);
  /// FbxString  GetPathToRootDocument (void) const
  public static native long GetPathToRootDocument(long lpjFbxDocument);
  /// void  GetDocumentPathToRootDocument (FbxArray< FbxDocument * > &pDocumentPath, bool pFirstCall=true) const
  public static native void GetDocumentPathToRootDocument(long lpjFbxDocument, Long pDocumentPath, boolean pFirstCall);
  /// bool  IsARootDocument (void)
  public static native boolean IsARootDocument(long lpjFbxDocument);
  /// bool  CreateAnimStack (const char *pName, FbxStatus *pStatus=NULL)
  public static native boolean CreateAnimStack(long lpjFbxDocument, String pName, long pStatus);
  /// bool  RemoveAnimStack (const char *pName)
  public static native boolean RemoveAnimStack(long lpjFbxDocument, String pName);
  /// void  FillAnimStackNameArray (FbxArray< FbxString * > &pNameArray)
  public static native void FillAnimStackNameArray(long lpjFbxDocument, Long pNameArray);
  /// bool  SetTakeInfo (const FbxTakeInfo &pTakeInfo)
  public static native boolean SetTakeInfo(long lpjFbxDocument, Long pTakeInfo);
  /// FbxTakeInfo *  GetTakeInfo (const FbxString &pTakeName) const
  public static native long GetTakeInfo(long lpjFbxDocument, Long pTakeName);
  /// FbxPropertyT< FbxReference >  Roots
  public static native void mepSetRoots(long lpjFbxDocument, long lpFbxReference);
  /// FbxPropertyT< FbxReference >  Roots
  public static native long mepGetRoots(long lpjFbxDocument);
  /// FbxPropertyT< FbxReference >  Roots
  public static native long mptGetRoots(long lpjFbxDocument);
  /// FbxPropertyT< FbxString >  ActiveAnimStackName
  public static native void mepSetActiveAnimStackName(long lpjFbxDocument, long lpFbxString);
  /// FbxPropertyT< FbxString >  ActiveAnimStackName
  public static native long mepGetActiveAnimStackName(long lpjFbxDocument);
  /// FbxPropertyT< FbxString >  ActiveAnimStackName
  public static native long mptGetActiveAnimStackName(long lpjFbxDocument);
  /// FbxDocument * Create( FbxCollection* lpFbxCollection,  const char* pName )
  public static native long Create(   long lpFbxCollection, String pName);
}
