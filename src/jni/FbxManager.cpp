
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// int  GetDocumentCount ()
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxManager_GetDocumentCount(JNIEnv * __env, jclass __jc,jlong lpjFbxManager)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxManager *) lpjFbxManager)->GetDocumentCount(
  ));
  return ret;
}
  /// FbxDocument *  GetDocument (int pIndex)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxManager_GetDocument(JNIEnv * __env, jclass __jc,jlong lpjFbxManager,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxDocument>(
  ((FbxManager *) lpjFbxManager)->GetDocument(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// virtual void  Destroy ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxManager_Destroy(JNIEnv * __env, jclass __jc,jlong lpjFbxManager)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxManager *) lpjFbxManager)->Destroy(
  );
}
  /// FbxObject *  CreateNewObjectFromClassId (FbxClassId pClassId, const char *pName, FbxObject *pContainer=NULL, const FbxObject *pCloneFrom=NULL)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxManager_CreateNewObjectFromClassId(JNIEnv * __env, jclass __jc,jlong lpjFbxManager,jlong pClassId,jstring pName,jlong pContainer,jlong pCloneFrom)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxObject>(
  ((FbxManager *) lpjFbxManager)->CreateNewObjectFromClassId(
  ( FbxClassId  )  _lcvt.j2c_object<jlong,FbxClassId >(pClassId)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ,
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pContainer)
  ,
  (const FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pCloneFrom)
  ));
  return ret;
}
  /// FbxClassId  FindClass (const char *pClassName) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxManager_FindClass(JNIEnv * __env, jclass __jc,jlong lpjFbxManager,jstring pClassName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxClassId>(
  ((FbxManager *) lpjFbxManager)->FindClass(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pClassName)
  ));
  return ret;
}
  /// FbxClassId  FindFbxFileClass (const char *pFbxFileTypeName, const char *pFbxFileSubTypeName) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxManager_FindFbxFileClass(JNIEnv * __env, jclass __jc,jlong lpjFbxManager,jstring pFbxFileTypeName,jstring pFbxFileSubTypeName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxClassId>(
  ((FbxManager *) lpjFbxManager)->FindFbxFileClass(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pFbxFileTypeName)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pFbxFileSubTypeName)
  ));
  return ret;
}
  /// FbxDataType  CreateDataType (const char *pName, const EFbxType pType)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxManager_CreateDataType(JNIEnv * __env, jclass __jc,jlong lpjFbxManager,jstring pName,jint pType)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxDataType>(
  ((FbxManager *) lpjFbxManager)->CreateDataType(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ,
  (const EFbxType  )  _lcvt.j2c<jint,EFbxType >(pType)
  ));
  return ret;
}
  /// int  GetDataTypeCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxManager_GetDataTypeCount(JNIEnv * __env, jclass __jc,jlong lpjFbxManager)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxManager *) lpjFbxManager)->GetDataTypeCount(
  ));
  return ret;
}
  /// FbxDataType &  GetDataType (const int pIndex) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxManager_GetDataType(JNIEnv * __env, jclass __jc,jlong lpjFbxManager,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_ref<jlong, FbxDataType>(
  ((FbxManager *) lpjFbxManager)->GetDataType(
  (const int  )  _lcvt.j2c<jint,const int  >(pIndex)
  ));
  return ret;
}
  /// FbxDataType &  GetDataTypeFromName (const char *pDataType) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxManager_GetDataTypeFromName(JNIEnv * __env, jclass __jc,jlong lpjFbxManager,jstring pDataType)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_ref<jlong, FbxDataType>(
  ((FbxManager *) lpjFbxManager)->GetDataTypeFromName(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pDataType)
  ));
  return ret;
}
  /// FbxUserNotification *  GetUserNotification () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxManager_GetUserNotification(JNIEnv * __env, jclass __jc,jlong lpjFbxManager)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxUserNotification>(
  ((FbxManager *) lpjFbxManager)->GetUserNotification(
  ));
  return ret;
}
  /// void  SetUserNotification (FbxUserNotification *pUN)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxManager_SetUserNotification(JNIEnv * __env, jclass __jc,jlong lpjFbxManager,jlong pUN)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxManager *) lpjFbxManager)->SetUserNotification(
  ( FbxUserNotification  *)  _lcvt.j2c_object_pt<jlong, FbxUserNotification>(pUN)
  );
}
  /// virtual FbxIOSettings *  GetIOSettings () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxManager_GetIOSettings(JNIEnv * __env, jclass __jc,jlong lpjFbxManager)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxIOSettings>(
  ((FbxManager *) lpjFbxManager)->GetIOSettings(
  ));
  return ret;
}
  /// virtual void  SetIOSettings (FbxIOSettings *pIOSettings)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxManager_SetIOSettings(JNIEnv * __env, jclass __jc,jlong lpjFbxManager,jlong pIOSettings)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxManager *) lpjFbxManager)->SetIOSettings(
  ( FbxIOSettings  *)  _lcvt.j2c_object_pt<jlong, FbxIOSettings>(pIOSettings)
  );
}
  /// FbxMessageEmitter &  GetMessageEmitter ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxManager_GetMessageEmitter(JNIEnv * __env, jclass __jc,jlong lpjFbxManager)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_ref<jlong, FbxMessageEmitter>(
  ((FbxManager *) lpjFbxManager)->GetMessageEmitter(
  ));
  return ret;
}
  /// bool  SetMessageEmitter (FbxMessageEmitter *pMessageEmitter)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxManager_SetMessageEmitter(JNIEnv * __env, jclass __jc,jlong lpjFbxManager,jlong pMessageEmitter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxManager *) lpjFbxManager)->SetMessageEmitter(
  ( FbxMessageEmitter  *)  _lcvt.j2c_object_pt<jlong, FbxMessageEmitter>(pMessageEmitter)
  ));
  return ret;
}
  /// void  AddLocalization (FbxLocalizationManager *pLocManager)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxManager_AddLocalization(JNIEnv * __env, jclass __jc,jlong lpjFbxManager,jlong pLocManager)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxManager *) lpjFbxManager)->AddLocalization(
  ( FbxLocalizationManager  *)  _lcvt.j2c_object_pt<jlong, FbxLocalizationManager>(pLocManager)
  );
}
  /// void  RemoveLocalization (FbxLocalizationManager *pLocManager)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxManager_RemoveLocalization(JNIEnv * __env, jclass __jc,jlong lpjFbxManager,jlong pLocManager)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxManager *) lpjFbxManager)->RemoveLocalization(
  ( FbxLocalizationManager  *)  _lcvt.j2c_object_pt<jlong, FbxLocalizationManager>(pLocManager)
  );
}
  /// bool  SetLocale (const char *pLocale)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxManager_SetLocale(JNIEnv * __env, jclass __jc,jlong lpjFbxManager,jstring pLocale)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxManager *) lpjFbxManager)->SetLocale(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pLocale)
  ));
  return ret;
}
  /// const char *  Localize (const char *pID, const char *pDefault=NULL) const
extern "C" JNIEXPORT jstring JNICALL Java_fbxsdk_FbxManager_Localize(JNIEnv * __env, jclass __jc,jlong lpjFbxManager,jstring pID,jstring pDefault)
{
  JNILocalConverter _lcvt(__env,__jc);
  jstring ret=(jstring)_lcvt.c2j_string(
  ((FbxManager *) lpjFbxManager)->Localize(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pID)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pDefault)
  ));
  return ret;
}
  /// FbxXRefManager &  GetXRefManager ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxManager_GetXRefManager(JNIEnv * __env, jclass __jc,jlong lpjFbxManager)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_ref<jlong, FbxXRefManager>(
  ((FbxManager *) lpjFbxManager)->GetXRefManager(
  ));
  return ret;
}
  /// FbxLibrary *  GetRootLibrary () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxManager_GetRootLibrary(JNIEnv * __env, jclass __jc,jlong lpjFbxManager)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxLibrary>(
  ((FbxManager *) lpjFbxManager)->GetRootLibrary(
  ));
  return ret;
}
  /// FbxLibrary *  GetSystemLibraries () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxManager_GetSystemLibraries(JNIEnv * __env, jclass __jc,jlong lpjFbxManager)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxLibrary>(
  ((FbxManager *) lpjFbxManager)->GetSystemLibraries(
  ));
  return ret;
}
  /// FbxLibrary *  GetUserLibraries () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxManager_GetUserLibraries(JNIEnv * __env, jclass __jc,jlong lpjFbxManager)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxLibrary>(
  ((FbxManager *) lpjFbxManager)->GetUserLibraries(
  ));
  return ret;
}
  /// FbxIOPluginRegistry *  GetIOPluginRegistry () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxManager_GetIOPluginRegistry(JNIEnv * __env, jclass __jc,jlong lpjFbxManager)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxIOPluginRegistry>(
  ((FbxManager *) lpjFbxManager)->GetIOPluginRegistry(
  ));
  return ret;
}
  /// bool  LoadPluginsDirectory (const char *pFilename, const char *pExtensions=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxManager_LoadPluginsDirectory(JNIEnv * __env, jclass __jc,jlong lpjFbxManager,jstring pFilename,jstring pExtensions)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxManager *) lpjFbxManager)->LoadPluginsDirectory(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pFilename)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pExtensions)
  ));
  return ret;
}
  /// bool  LoadPlugin (const char *pFilename)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxManager_LoadPlugin(JNIEnv * __env, jclass __jc,jlong lpjFbxManager,jstring pFilename)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxManager *) lpjFbxManager)->LoadPlugin(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pFilename)
  ));
  return ret;
}
  /// bool  UnloadPlugins ()
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxManager_UnloadPlugins(JNIEnv * __env, jclass __jc,jlong lpjFbxManager)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxManager *) lpjFbxManager)->UnloadPlugins(
  ));
  return ret;
}
  /// bool  EmitPluginsEvent (const FbxEventBase &pEvent)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxManager_EmitPluginsEvent(JNIEnv * __env, jclass __jc,jlong lpjFbxManager,jobject pEvent)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxManager *) lpjFbxManager)->EmitPluginsEvent(
  (const FbxEventBase  &) * _lcvt.j2c_object_ref<jobject,FbxEventBase >(pEvent)
  ));
  return ret;
}
  /// int  GetPluginCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxManager_GetPluginCount(JNIEnv * __env, jclass __jc,jlong lpjFbxManager)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxManager *) lpjFbxManager)->GetPluginCount(
  ));
  return ret;
}
  /// FbxPlugin *  FindPlugin (const char *pName, const char *pVersion) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxManager_FindPlugin(JNIEnv * __env, jclass __jc,jlong lpjFbxManager,jstring pName,jstring pVersion)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxPlugin>(
  ((FbxManager *) lpjFbxManager)->FindPlugin(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pVersion)
  ));
  return ret;
}
  /// void  FillIOSettingsForReadersRegistered (FbxIOSettings &pIOS)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxManager_FillIOSettingsForReadersRegistered(JNIEnv * __env, jclass __jc,jlong lpjFbxManager,jobject pIOS)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxManager *) lpjFbxManager)->FillIOSettingsForReadersRegistered(
  ( FbxIOSettings  &) * _lcvt.j2c_object_ref<jobject,FbxIOSettings >(pIOS)
  );
}
  /// void  FillIOSettingsForWritersRegistered (FbxIOSettings &pIOS)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxManager_FillIOSettingsForWritersRegistered(JNIEnv * __env, jclass __jc,jlong lpjFbxManager,jobject pIOS)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxManager *) lpjFbxManager)->FillIOSettingsForWritersRegistered(
  ( FbxIOSettings  &) * _lcvt.j2c_object_ref<jobject,FbxIOSettings >(pIOS)
  );
}
  /// void  FillCommonIOSettings (FbxIOSettings &pIOS, bool pImport)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxManager_FillCommonIOSettings(JNIEnv * __env, jclass __jc,jlong lpjFbxManager,jobject pIOS,jboolean pImport)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxManager *) lpjFbxManager)->FillCommonIOSettings(
  ( FbxIOSettings  &) * _lcvt.j2c_object_ref<jobject,FbxIOSettings >(pIOS)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pImport)
  );
}
  /// void  RegisterObject (FbxObject *pObject)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxManager_RegisterObject(JNIEnv * __env, jclass __jc,jlong lpjFbxManager,jlong pObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxManager *) lpjFbxManager)->RegisterObject(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pObject)
  );
}
  /// void  UnregisterObject (FbxObject *pObject)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxManager_UnregisterObject(JNIEnv * __env, jclass __jc,jlong lpjFbxManager,jlong pObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxManager *) lpjFbxManager)->UnregisterObject(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pObject)
  );
}
  /// void  RegisterObjects (const FbxArray< FbxObject * > &pArray)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxManager_RegisterObjects(JNIEnv * __env, jclass __jc,jlong lpjFbxManager,jobject pArray)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxManager *) lpjFbxManager)->RegisterObjects(
  (FbxArray<  FbxObject  * > &) * _lcvt.j2c_tmpl_FbxArray_obj_ref<jobject,  FbxObject  * >(pArray)
  );
}
  /// void  UnregisterObjects (const FbxArray< FbxObject * > &pArray)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxManager_UnregisterObjects(JNIEnv * __env, jclass __jc,jlong lpjFbxManager,jobject pArray)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxManager *) lpjFbxManager)->UnregisterObjects(
  (FbxArray<  FbxObject  * > &) * _lcvt.j2c_tmpl_FbxArray_obj_ref<jobject,  FbxObject  * >(pArray)
  );
}
  /// void  IncreaseDestroyingSceneFlag ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxManager_IncreaseDestroyingSceneFlag(JNIEnv * __env, jclass __jc,jlong lpjFbxManager)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxManager *) lpjFbxManager)->IncreaseDestroyingSceneFlag(
  );
}
  /// void  DecreaseDestroyingSceneFlag ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxManager_DecreaseDestroyingSceneFlag(JNIEnv * __env, jclass __jc,jlong lpjFbxManager)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxManager *) lpjFbxManager)->DecreaseDestroyingSceneFlag(
  );
}
  /// int  GetReferenceCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxManager_GetReferenceCount(JNIEnv * __env, jclass __jc,jlong lpjFbxManager)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxManager *) lpjFbxManager)->GetReferenceCount(
  ));
  return ret;
}
  /// FbxSceneReference *  GetReference (int pIndex) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxManager_GetReference(JNIEnv * __env, jclass __jc,jlong lpjFbxManager,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxSceneReference>(
  ((FbxManager *) lpjFbxManager)->GetReference(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// int  AddReference (FbxSceneReference *pReference)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxManager_AddReference(JNIEnv * __env, jclass __jc,jlong lpjFbxManager,jlong pReference)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxManager *) lpjFbxManager)->AddReference(
  ( FbxSceneReference  *)  _lcvt.j2c_object_pt<jlong, FbxSceneReference>(pReference)
  ));
  return ret;
}
  /// bool  RemoveReference (FbxSceneReference *pReference)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxManager_RemoveReference(JNIEnv * __env, jclass __jc,jlong lpjFbxManager,jlong pReference)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxManager *) lpjFbxManager)->RemoveReference(
  ( FbxSceneReference  *)  _lcvt.j2c_object_pt<jlong, FbxSceneReference>(pReference)
  ));
  return ret;
}
  /// bool  ClearReference (FbxSceneReference *pReference)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxManager_ClearReference(JNIEnv * __env, jclass __jc,jlong lpjFbxManager,jlong pReference)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxManager *) lpjFbxManager)->ClearReference(
  ( FbxSceneReference  *)  _lcvt.j2c_object_pt<jlong, FbxSceneReference>(pReference)
  ));
  return ret;
}
  /// FbxManager * Create(  )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxManager_Create(JNIEnv * __env, jclass __jc)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxManager>(
  FbxManager::Create(
  ));
  return ret;
}
