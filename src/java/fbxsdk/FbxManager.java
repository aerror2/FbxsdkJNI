//copyright by aerror 2016 
package fbxsdk;
//26 237 FbxManager  --------------------
public class FbxManager  {
  /// int  GetDocumentCount ()
  public static native int GetDocumentCount(long lpjFbxManager);
  /// FbxDocument *  GetDocument (int pIndex)
  public static native long GetDocument(long lpjFbxManager, int pIndex);
  /// virtual void  Destroy ()
  public static native void Destroy(long lpjFbxManager);
  /// FbxObject *  CreateNewObjectFromClassId (FbxClassId pClassId, const char *pName, FbxObject *pContainer=NULL, const FbxObject *pCloneFrom=NULL)
  public static native long CreateNewObjectFromClassId(long lpjFbxManager, long pClassId, String pName, long pContainer, long pCloneFrom);
  /// FbxClassId  FindClass (const char *pClassName) const
  public static native long FindClass(long lpjFbxManager, String pClassName);
  /// FbxClassId  FindFbxFileClass (const char *pFbxFileTypeName, const char *pFbxFileSubTypeName) const
  public static native long FindFbxFileClass(long lpjFbxManager, String pFbxFileTypeName, String pFbxFileSubTypeName);
  /// FbxDataType  CreateDataType (const char *pName, const EFbxType pType)
  public static native long CreateDataType(long lpjFbxManager, String pName, int pType);
  /// int  GetDataTypeCount () const
  public static native int GetDataTypeCount(long lpjFbxManager);
  /// FbxDataType &  GetDataType (const int pIndex) const
  public static native long GetDataType(long lpjFbxManager, int pIndex);
  /// FbxDataType &  GetDataTypeFromName (const char *pDataType) const
  public static native long GetDataTypeFromName(long lpjFbxManager, String pDataType);
  /// FbxUserNotification *  GetUserNotification () const
  public static native long GetUserNotification(long lpjFbxManager);
  /// void  SetUserNotification (FbxUserNotification *pUN)
  public static native void SetUserNotification(long lpjFbxManager, long pUN);
  /// virtual FbxIOSettings *  GetIOSettings () const
  public static native long GetIOSettings(long lpjFbxManager);
  /// virtual void  SetIOSettings (FbxIOSettings *pIOSettings)
  public static native void SetIOSettings(long lpjFbxManager, long pIOSettings);
  /// FbxMessageEmitter &  GetMessageEmitter ()
  public static native long GetMessageEmitter(long lpjFbxManager);
  /// bool  SetMessageEmitter (FbxMessageEmitter *pMessageEmitter)
  public static native boolean SetMessageEmitter(long lpjFbxManager, long pMessageEmitter);
  /// void  AddLocalization (FbxLocalizationManager *pLocManager)
  public static native void AddLocalization(long lpjFbxManager, long pLocManager);
  /// void  RemoveLocalization (FbxLocalizationManager *pLocManager)
  public static native void RemoveLocalization(long lpjFbxManager, long pLocManager);
  /// bool  SetLocale (const char *pLocale)
  public static native boolean SetLocale(long lpjFbxManager, String pLocale);
  /// const char *  Localize (const char *pID, const char *pDefault=NULL) const
  public static native String Localize(long lpjFbxManager, String pID, String pDefault);
  /// FbxXRefManager &  GetXRefManager ()
  public static native long GetXRefManager(long lpjFbxManager);
  /// FbxLibrary *  GetRootLibrary () const
  public static native long GetRootLibrary(long lpjFbxManager);
  /// FbxLibrary *  GetSystemLibraries () const
  public static native long GetSystemLibraries(long lpjFbxManager);
  /// FbxLibrary *  GetUserLibraries () const
  public static native long GetUserLibraries(long lpjFbxManager);
  /// FbxIOPluginRegistry *  GetIOPluginRegistry () const
  public static native long GetIOPluginRegistry(long lpjFbxManager);
  /// bool  LoadPluginsDirectory (const char *pFilename, const char *pExtensions=NULL)
  public static native boolean LoadPluginsDirectory(long lpjFbxManager, String pFilename, String pExtensions);
  /// bool  LoadPlugin (const char *pFilename)
  public static native boolean LoadPlugin(long lpjFbxManager, String pFilename);
  /// bool  UnloadPlugins ()
  public static native boolean UnloadPlugins(long lpjFbxManager);
  /// bool  EmitPluginsEvent (const FbxEventBase &pEvent)
  public static native boolean EmitPluginsEvent(long lpjFbxManager, Long pEvent);
  /// int  GetPluginCount () const
  public static native int GetPluginCount(long lpjFbxManager);
  /// FbxPlugin *  FindPlugin (const char *pName, const char *pVersion) const
  public static native long FindPlugin(long lpjFbxManager, String pName, String pVersion);
  /// void  FillIOSettingsForReadersRegistered (FbxIOSettings &pIOS)
  public static native void FillIOSettingsForReadersRegistered(long lpjFbxManager, Long pIOS);
  /// void  FillIOSettingsForWritersRegistered (FbxIOSettings &pIOS)
  public static native void FillIOSettingsForWritersRegistered(long lpjFbxManager, Long pIOS);
  /// void  FillCommonIOSettings (FbxIOSettings &pIOS, bool pImport)
  public static native void FillCommonIOSettings(long lpjFbxManager, Long pIOS, boolean pImport);
  /// void  RegisterObject (FbxObject *pObject)
  public static native void RegisterObject(long lpjFbxManager, long pObject);
  /// void  UnregisterObject (FbxObject *pObject)
  public static native void UnregisterObject(long lpjFbxManager, long pObject);
  /// void  RegisterObjects (const FbxArray< FbxObject * > &pArray)
  public static native void RegisterObjects(long lpjFbxManager, Long pArray);
  /// void  UnregisterObjects (const FbxArray< FbxObject * > &pArray)
  public static native void UnregisterObjects(long lpjFbxManager, Long pArray);
  /// void  IncreaseDestroyingSceneFlag ()
  public static native void IncreaseDestroyingSceneFlag(long lpjFbxManager);
  /// void  DecreaseDestroyingSceneFlag ()
  public static native void DecreaseDestroyingSceneFlag(long lpjFbxManager);
  /// int  GetReferenceCount () const
  public static native int GetReferenceCount(long lpjFbxManager);
  /// FbxSceneReference *  GetReference (int pIndex) const
  public static native long GetReference(long lpjFbxManager, int pIndex);
  /// int  AddReference (FbxSceneReference *pReference)
  public static native int AddReference(long lpjFbxManager, long pReference);
  /// bool  RemoveReference (FbxSceneReference *pReference)
  public static native boolean RemoveReference(long lpjFbxManager, long pReference);
  /// bool  ClearReference (FbxSceneReference *pReference)
  public static native boolean ClearReference(long lpjFbxManager, long pReference);
  /// FbxManager * Create(  )
  public static native long Create(  );
}
