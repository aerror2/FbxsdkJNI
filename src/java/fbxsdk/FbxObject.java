package fbxsdk;
//26 474 FbxObject  --------------------
public class FbxObject  {
  public    class   EObjectFlag  {
   public static final int eNone  =  0;
   public static final int eInitialized  =  1 << 0;
   public static final int eSystem  =  1 << 1;
   public static final int eSavable  =  1 << 2;
   public static final int eSelected  =  1 << 3;
   public static final int eHidden  =  1 << 4;
   public static final int eContentLoaded  =  1 << 5;
   public static final int eDontLocalize  =  1 << 6;
   public static final int eCopyCalledByClone  =  1 << 16;
}
  public    class   ECloneType  {
   public static final int eDeepClone = 0;
   public static final int eReferenceClone = 1;
}
  /// FbxManager *  GetFbxManager () const
  public static native long GetFbxManager(long lpjFbxObject);
  /// FbxDocument *  GetDocument () const
  public static native long GetDocument(long lpjFbxObject);
  /// FbxDocument *  GetRootDocument () const
  public static native long GetRootDocument(long lpjFbxObject);
  /// FbxScene *  GetScene () const
  public static native long GetScene(long lpjFbxObject);
  /// void  Destroy (bool pRecursive=false)
  public static native void Destroy(long lpjFbxObject, boolean pRecursive);
  /// void  ResetProperties ()
  public static native void ResetProperties(long lpjFbxObject);
  /// virtual bool  GetSelected ()
  public static native boolean GetSelected(long lpjFbxObject);
  /// virtual void  SetSelected (bool pSelected)
  public static native void SetSelected(long lpjFbxObject, boolean pSelected);
  /// void  SetUserDataPtr (const FbxUInt64 &pUserID, void *pUserData)
  public static native void SetUserDataPtr(long lpjFbxObject, Long pUserID, long pUserData);
  /// void *  GetUserDataPtr (const FbxUInt64 &pUserID) const
  public static native long GetUserDataPtr(long lpjFbxObject, Long pUserID);
  /// void  SetUserDataPtr (void *pUserData)
  public static native void SetUserDataPtr1(long lpjFbxObject, long pUserData);
  /// void *  GetUserDataPtr () const
  public static native long GetUserDataPtr1(long lpjFbxObject);
  /// bool  ConnectSrcObject (FbxObject *pObject, FbxConnection::EType pType=FbxConnection::eNone)
  public static native boolean ConnectSrcObject(long lpjFbxObject, long pObject, int pType);
  /// bool  IsConnectedSrcObject (const FbxObject *pObject) const
  public static native boolean IsConnectedSrcObject(long lpjFbxObject, long pObject);
  /// bool  DisconnectSrcObject (FbxObject *pObject)
  public static native boolean DisconnectSrcObject(long lpjFbxObject, long pObject);
  /// bool  DisconnectAllSrcObject ()
  public static native boolean DisconnectAllSrcObject(long lpjFbxObject);
  /// bool  DisconnectAllSrcObject (const FbxCriteria &pCriteria)
  public static native boolean DisconnectAllSrcObject1(long lpjFbxObject, Long pCriteria);
  /// int  GetSrcObjectCount () const
  public static native int GetSrcObjectCount(long lpjFbxObject);
  /// int  GetSrcObjectCount (const FbxCriteria &pCriteria) const
  public static native int GetSrcObjectCount1(long lpjFbxObject, Long pCriteria);
  /// FbxObject *  GetSrcObject (int pIndex=0) const
  public static native long GetSrcObject(long lpjFbxObject, int pIndex);
  /// FbxObject *  GetSrcObject (const FbxCriteria &pCriteria, int pIndex=0) const
  public static native long GetSrcObject1(long lpjFbxObject, Long pCriteria, int pIndex);
  /// FbxObject *  FindSrcObject (const char *pName, int pStartIndex=0) const
  public static native long FindSrcObject(long lpjFbxObject, String pName, int pStartIndex);
  /// FbxObject *  FindSrcObject (const FbxCriteria &pCriteria, const char *pName, int pStartIndex=0) const
  public static native long FindSrcObject1(long lpjFbxObject, Long pCriteria, String pName, int pStartIndex);
  /// bool  DisconnectAllSrcObject ()
  public static native boolean DisconnectAllSrcObject2(long lpjFbxObject);
  /// bool  DisconnectAllSrcObject (const FbxCriteria &pCriteria)
  public static native boolean DisconnectAllSrcObject3(long lpjFbxObject, Long pCriteria);
  /// int  GetSrcObjectCount () const
  public static native int GetSrcObjectCount2(long lpjFbxObject);
  /// int  GetSrcObjectCount (const FbxCriteria &pCriteria) const
  public static native int GetSrcObjectCount3(long lpjFbxObject, Long pCriteria);
  /// bool  ConnectDstObject (FbxObject *pObject, FbxConnection::EType pType=FbxConnection::eNone)
  public static native boolean ConnectDstObject(long lpjFbxObject, long pObject, int pType);
  /// bool  IsConnectedDstObject (const FbxObject *pObject) const
  public static native boolean IsConnectedDstObject(long lpjFbxObject, long pObject);
  /// bool  DisconnectDstObject (FbxObject *pObject)
  public static native boolean DisconnectDstObject(long lpjFbxObject, long pObject);
  /// bool  DisconnectAllDstObject ()
  public static native boolean DisconnectAllDstObject(long lpjFbxObject);
  /// bool  DisconnectAllDstObject (const FbxCriteria &pCriteria)
  public static native boolean DisconnectAllDstObject1(long lpjFbxObject, Long pCriteria);
  /// int  GetDstObjectCount () const
  public static native int GetDstObjectCount(long lpjFbxObject);
  /// int  GetDstObjectCount (const FbxCriteria &pCriteria) const
  public static native int GetDstObjectCount1(long lpjFbxObject, Long pCriteria);
  /// FbxObject *  GetDstObject (int pIndex=0) const
  public static native long GetDstObject(long lpjFbxObject, int pIndex);
  /// FbxObject *  GetDstObject (const FbxCriteria &pCriteria, int pIndex=0) const
  public static native long GetDstObject1(long lpjFbxObject, Long pCriteria, int pIndex);
  /// FbxObject *  FindDstObject (const char *pName, int pStartIndex=0) const
  public static native long FindDstObject(long lpjFbxObject, String pName, int pStartIndex);
  /// FbxObject *  FindDstObject (const FbxCriteria &pCriteria, const char *pName, int pStartIndex=0) const
  public static native long FindDstObject1(long lpjFbxObject, Long pCriteria, String pName, int pStartIndex);
  /// bool  DisconnectAllDstObject ()
  public static native boolean DisconnectAllDstObject2(long lpjFbxObject);
  /// bool  DisconnectAllDstObject (const FbxCriteria &pCriteria)
  public static native boolean DisconnectAllDstObject3(long lpjFbxObject, Long pCriteria);
  /// int  GetDstObjectCount () const
  public static native int GetDstObjectCount2(long lpjFbxObject);
  /// int  GetDstObjectCount (const FbxCriteria &pCriteria) const
  public static native int GetDstObjectCount3(long lpjFbxObject, Long pCriteria);
  /// FbxProperty  GetFirstProperty () const
  public static native long GetFirstProperty(long lpjFbxObject);
  /// FbxProperty  GetNextProperty (const FbxProperty &pProperty) const
  public static native long GetNextProperty(long lpjFbxObject, Long pProperty);
  /// FbxProperty  FindProperty (const char *pName, bool pCaseSensitive=true) const
  public static native long FindProperty(long lpjFbxObject, String pName, boolean pCaseSensitive);
  /// FbxProperty  FindProperty (const char *pName, const FbxDataType &pDataType, bool pCaseSensitive=true) const
  public static native long FindProperty1(long lpjFbxObject, String pName, Long pDataType, boolean pCaseSensitive);
  /// FbxProperty  FindPropertyHierarchical (const char *pName, bool pCaseSensitive=true) const
  public static native long FindPropertyHierarchical(long lpjFbxObject, String pName, boolean pCaseSensitive);
  /// FbxProperty  FindPropertyHierarchical (const char *pName, const FbxDataType &pDataType, bool pCaseSensitive=true) const
  public static native long FindPropertyHierarchical1(long lpjFbxObject, String pName, Long pDataType, boolean pCaseSensitive);
  /// FbxProperty  GetClassRootProperty ()
  public static native long GetClassRootProperty(long lpjFbxObject);
  /// bool  ConnectSrcProperty (const FbxProperty &pProperty)
  public static native boolean ConnectSrcProperty(long lpjFbxObject, Long pProperty);
  /// bool  IsConnectedSrcProperty (const FbxProperty &pProperty)
  public static native boolean IsConnectedSrcProperty(long lpjFbxObject, Long pProperty);
  /// bool  DisconnectSrcProperty (const FbxProperty &pProperty)
  public static native boolean DisconnectSrcProperty(long lpjFbxObject, Long pProperty);
  /// int  GetSrcPropertyCount () const
  public static native int GetSrcPropertyCount(long lpjFbxObject);
  /// FbxProperty  GetSrcProperty (int pIndex=0) const
  public static native long GetSrcProperty(long lpjFbxObject, int pIndex);
  /// FbxProperty  FindSrcProperty (const char *pName, int pStartIndex=0) const
  public static native long FindSrcProperty(long lpjFbxObject, String pName, int pStartIndex);
  /// bool  ConnectDstProperty (const FbxProperty &pProperty)
  public static native boolean ConnectDstProperty(long lpjFbxObject, Long pProperty);
  /// bool  IsConnectedDstProperty (const FbxProperty &pProperty)
  public static native boolean IsConnectedDstProperty(long lpjFbxObject, Long pProperty);
  /// bool  DisconnectDstProperty (const FbxProperty &pProperty)
  public static native boolean DisconnectDstProperty(long lpjFbxObject, Long pProperty);
  /// int  GetDstPropertyCount () const
  public static native int GetDstPropertyCount(long lpjFbxObject);
  /// FbxProperty  GetDstProperty (int pIndex=0) const
  public static native long GetDstProperty(long lpjFbxObject, int pIndex);
  /// FbxProperty  FindDstProperty (const char *pName, int pStartIndex=0) const
  public static native long FindDstProperty(long lpjFbxObject, String pName, int pStartIndex);
  /// int  ContentUnload ()
  public static native int ContentUnload(long lpjFbxObject);
  /// int  ContentLoad ()
  public static native int ContentLoad(long lpjFbxObject);
  /// bool  ContentIsLoaded () const
  public static native boolean ContentIsLoaded(long lpjFbxObject);
  /// void  ContentDecrementLockCount ()
  public static native void ContentDecrementLockCount(long lpjFbxObject);
  /// void  ContentIncrementLockCount ()
  public static native void ContentIncrementLockCount(long lpjFbxObject);
  /// bool  ContentIsLocked () const
  public static native boolean ContentIsLocked(long lpjFbxObject);
  /// virtual bool  ContentWriteTo (FbxStream &pStream) const
  public static native boolean ContentWriteTo(long lpjFbxObject, Long pStream);
  /// virtual bool  ContentReadFrom (const FbxStream &pStream)
  public static native boolean ContentReadFrom(long lpjFbxObject, Long pStream);
  /// void  EmitMessage (FbxMessage *pMessage) const
  public static native void EmitMessage(long lpjFbxObject, long pMessage);
  /// FbxLibrary *  GetParentLibrary () const
  public static native long GetParentLibrary(long lpjFbxObject);
  /// bool  AddImplementation (FbxImplementation *pImplementation)
  public static native boolean AddImplementation(long lpjFbxObject, long pImplementation);
  /// bool  RemoveImplementation (FbxImplementation *pImplementation)
  public static native boolean RemoveImplementation(long lpjFbxObject, long pImplementation);
  /// bool  HasDefaultImplementation (void) const
  public static native boolean HasDefaultImplementation(long lpjFbxObject);
  /// FbxImplementation *  GetDefaultImplementation (void) const
  public static native long GetDefaultImplementation(long lpjFbxObject);
  /// bool  SetDefaultImplementation (FbxImplementation *pImplementation)
  public static native boolean SetDefaultImplementation(long lpjFbxObject, long pImplementation);
  /// int  GetImplementationCount (const FbxImplementationFilter *pCriteria=NULL) const
  public static native int GetImplementationCount(long lpjFbxObject, long pCriteria);
  /// FbxImplementation *  GetImplementation (int pIndex, const FbxImplementationFilter *pCriteria=NULL) const
  public static native long GetImplementation(long lpjFbxObject, int pIndex, long pCriteria);
  /// virtual FbxString  GetUrl () const
  public static native long GetUrl(long lpjFbxObject);
  /// virtual bool  SetUrl (char *pUrl)
  public static native boolean SetUrl(long lpjFbxObject, String pUrl);
  /// void  SetRuntimeClassId (const FbxClassId &pClassId)
  public static native void SetRuntimeClassId(long lpjFbxObject, Long pClassId);
  /// FbxClassId  GetRuntimeClassId () const
  public static native long GetRuntimeClassId(long lpjFbxObject);
  /// bool  IsRuntime (const FbxClassId &pClassId) const
  public static native boolean IsRuntime(long lpjFbxObject, Long pClassId);
  /// bool  IsRuntimePlug () const
  public static native boolean IsRuntimePlug(long lpjFbxObject);
  /// void  SetObjectFlags (EObjectFlag pFlags, bool pValue)
  public static native void SetObjectFlags(long lpjFbxObject, int pFlags, boolean pValue);
  /// bool  GetObjectFlags (EObjectFlag pFlags) const
  public static native boolean GetObjectFlags(long lpjFbxObject, int pFlags);
  /// void  SetAllObjectFlags (FbxUInt pFlags)
  public static native void SetAllObjectFlags(long lpjFbxObject, int pFlags);
  /// FbxUInt  GetAllObjectFlags () const
  public static native int GetAllObjectFlags(long lpjFbxObject);
  /// virtual FbxObject &  Copy (const FbxObject &pObject)
  public static native long Copy(long lpjFbxObject, Long pObject);
  /// virtual FbxObject *  Clone (FbxObject::ECloneType pCloneType=eDeepClone, FbxObject *pContainer=NULL, void *pSet=NULL) const
  public static native long Clone(long lpjFbxObject, int pCloneType, long pContainer, long pSet);
  /// bool  IsAReferenceTo () const
  public static native boolean IsAReferenceTo(long lpjFbxObject);
  /// FbxObject *  GetReferenceTo () const
  public static native long GetReferenceTo(long lpjFbxObject);
  /// bool  IsReferencedBy () const
  public static native boolean IsReferencedBy(long lpjFbxObject);
  /// int  GetReferencedByCount () const
  public static native int GetReferencedByCount(long lpjFbxObject);
  /// FbxObject *  GetReferencedBy (int pIndex) const
  public static native long GetReferencedBy(long lpjFbxObject, int pIndex);
  /// void  SetName (const char *pName)
  public static native void SetName(long lpjFbxObject, String pName);
  /// const char *  GetName () const
  public static native String GetName(long lpjFbxObject);
  /// FbxString  GetNameWithoutNameSpacePrefix () const
  public static native long GetNameWithoutNameSpacePrefix(long lpjFbxObject);
  /// FbxString  GetNameWithNameSpacePrefix () const
  public static native long GetNameWithNameSpacePrefix(long lpjFbxObject);
  /// void  SetInitialName (const char *pName)
  public static native void SetInitialName(long lpjFbxObject, String pName);
  /// const char *  GetInitialName () const
  public static native String GetInitialName(long lpjFbxObject);
  /// FbxString  GetNameSpaceOnly ()
  public static native long GetNameSpaceOnly(long lpjFbxObject);
  /// void  SetNameSpace (FbxString pNameSpace)
  public static native void SetNameSpace(long lpjFbxObject, long pNameSpace);
  /// FbxArray< FbxString * >  GetNameSpaceArray (char identifier)
  public static native long GetNameSpaceArray(long lpjFbxObject, byte identifier);
  /// FbxString  GetNameOnly () const
  public static native long GetNameOnly(long lpjFbxObject);
  /// FbxString  GetNameSpacePrefix () const
  public static native long GetNameSpacePrefix(long lpjFbxObject);
  /// const FbxUInt64 &  GetUniqueID () const
  public static native long GetUniqueID(long lpjFbxObject);
  /// FbxObject * Create( FbxScene* pContainer, const char* pName )
  public static native long Create(   long pContainer, String pName);
}
