//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// virtual void  Clear ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxDocument_Clear(JNIEnv * __env, jclass __jc,jlong lpjFbxDocument)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxDocument *) lpjFbxDocument)->Clear(
  );
}
  /// void  AddRootMember (FbxObject *pMember)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxDocument_AddRootMember(JNIEnv * __env, jclass __jc,jlong lpjFbxDocument,jlong pMember)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxDocument *) lpjFbxDocument)->AddRootMember(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pMember)
  );
}
  /// void  RootRootRemoveMember (FbxObject *pMember)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxDocument_RootRootRemoveMember(JNIEnv * __env, jclass __jc,jlong lpjFbxDocument,jlong pMember)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxDocument *) lpjFbxDocument)->RootRootRemoveMember(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pMember)
  );
}
  /// int  GetRootMemberCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxDocument_GetRootMemberCount(JNIEnv * __env, jclass __jc,jlong lpjFbxDocument)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxDocument *) lpjFbxDocument)->GetRootMemberCount(
  ));
  return ret;
}
  /// int  GetRootMemberCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxDocument_GetRootMemberCount1(JNIEnv * __env, jclass __jc,jlong lpjFbxDocument)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxDocument *) lpjFbxDocument)->GetRootMemberCount(
  ));
  return ret;
}
  /// int  GetRootMemberCount (FbxCriteria pCriteria) const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxDocument_GetRootMemberCount2(JNIEnv * __env, jclass __jc,jlong lpjFbxDocument,jlong pCriteria)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxDocument *) lpjFbxDocument)->GetRootMemberCount(
  ( FbxCriteria  )  _lcvt.j2c_object<jlong,FbxCriteria >(pCriteria)
  ));
  return ret;
}
  /// FbxObject *  GetRootMember (int pIndex=0) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxDocument_GetRootMember(JNIEnv * __env, jclass __jc,jlong lpjFbxDocument,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxObject>(
  ((FbxDocument *) lpjFbxDocument)->GetRootMember(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// FbxObject *  GetRootMember (FbxCriteria pCriteria, int pIndex=0) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxDocument_GetRootMember1(JNIEnv * __env, jclass __jc,jlong lpjFbxDocument,jlong pCriteria,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxObject>(
  ((FbxDocument *) lpjFbxDocument)->GetRootMember(
  ( FbxCriteria  )  _lcvt.j2c_object<jlong,FbxCriteria >(pCriteria)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// virtual bool  IsRootMember (FbxObject *pMember) const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxDocument_IsRootMember(JNIEnv * __env, jclass __jc,jlong lpjFbxDocument,jlong pMember)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxDocument *) lpjFbxDocument)->IsRootMember(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pMember)
  ));
  return ret;
}
  /// FbxDocumentInfo *  GetDocumentInfo () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxDocument_GetDocumentInfo(JNIEnv * __env, jclass __jc,jlong lpjFbxDocument)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxDocumentInfo>(
  ((FbxDocument *) lpjFbxDocument)->GetDocumentInfo(
  ));
  return ret;
}
  /// void  SetDocumentInfo (FbxDocumentInfo *pSceneInfo)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxDocument_SetDocumentInfo(JNIEnv * __env, jclass __jc,jlong lpjFbxDocument,jlong pSceneInfo)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxDocument *) lpjFbxDocument)->SetDocumentInfo(
  ( FbxDocumentInfo  *)  _lcvt.j2c_object_pt<jlong, FbxDocumentInfo>(pSceneInfo)
  );
}
  /// void  SetPeripheral (FbxPeripheral *pPeripheral)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxDocument_SetPeripheral(JNIEnv * __env, jclass __jc,jlong lpjFbxDocument,jlong pPeripheral)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxDocument *) lpjFbxDocument)->SetPeripheral(
  ( FbxPeripheral  *)  _lcvt.j2c_object_pt<jlong, FbxPeripheral>(pPeripheral)
  );
}
  /// virtual FbxPeripheral *  GetPeripheral ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxDocument_GetPeripheral(JNIEnv * __env, jclass __jc,jlong lpjFbxDocument)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxPeripheral>(
  ((FbxDocument *) lpjFbxDocument)->GetPeripheral(
  ));
  return ret;
}
  /// int  UnloadContent (FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxDocument_UnloadContent(JNIEnv * __env, jclass __jc,jlong lpjFbxDocument,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxDocument *) lpjFbxDocument)->UnloadContent(
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// int  LoadContent (FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxDocument_LoadContent(JNIEnv * __env, jclass __jc,jlong lpjFbxDocument,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxDocument *) lpjFbxDocument)->LoadContent(
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// int  GetReferencingDocuments (FbxArray< FbxDocument * > &pReferencingDocuments) const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxDocument_GetReferencingDocuments(JNIEnv * __env, jclass __jc,jlong lpjFbxDocument,jobject pReferencingDocuments)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxDocument *) lpjFbxDocument)->GetReferencingDocuments(
  (FbxArray<  FbxDocument  * > &) * _lcvt.j2c_tmpl_FbxArray_obj_ref<jobject,  FbxDocument  * >(pReferencingDocuments)
  ));
  return ret;
}
  /// int  GetReferencingObjects (const FbxDocument *pFromDoc, FbxArray< FbxObject * > &pReferencingObjects) const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxDocument_GetReferencingObjects(JNIEnv * __env, jclass __jc,jlong lpjFbxDocument,jlong pFromDoc,jobject pReferencingObjects)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxDocument *) lpjFbxDocument)->GetReferencingObjects(
  (const FbxDocument  *)  _lcvt.j2c_object_pt<jlong, FbxDocument>(pFromDoc)
  ,
  (FbxArray<  FbxObject  * > &) * _lcvt.j2c_tmpl_FbxArray_obj_ref<jobject,  FbxObject  * >(pReferencingObjects)
  ));
  return ret;
}
  /// int  GetReferencedDocuments (FbxArray< FbxDocument * > &pReferencedDocuments) const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxDocument_GetReferencedDocuments(JNIEnv * __env, jclass __jc,jlong lpjFbxDocument,jobject pReferencedDocuments)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxDocument *) lpjFbxDocument)->GetReferencedDocuments(
  (FbxArray<  FbxDocument  * > &) * _lcvt.j2c_tmpl_FbxArray_obj_ref<jobject,  FbxDocument  * >(pReferencedDocuments)
  ));
  return ret;
}
  /// int  GetReferencedObjects (const FbxDocument *pToDoc, FbxArray< FbxObject * > &pReferencedObjects) const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxDocument_GetReferencedObjects(JNIEnv * __env, jclass __jc,jlong lpjFbxDocument,jlong pToDoc,jobject pReferencedObjects)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxDocument *) lpjFbxDocument)->GetReferencedObjects(
  (const FbxDocument  *)  _lcvt.j2c_object_pt<jlong, FbxDocument>(pToDoc)
  ,
  (FbxArray<  FbxObject  * > &) * _lcvt.j2c_tmpl_FbxArray_obj_ref<jobject,  FbxObject  * >(pReferencedObjects)
  ));
  return ret;
}
  /// FbxString  GetPathToRootDocument (void) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxDocument_GetPathToRootDocument(JNIEnv * __env, jclass __jc,jlong lpjFbxDocument)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxString>(
  ((FbxDocument *) lpjFbxDocument)->GetPathToRootDocument(
  ));
  return ret;
}
  /// void  GetDocumentPathToRootDocument (FbxArray< FbxDocument * > &pDocumentPath, bool pFirstCall=true) const
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxDocument_GetDocumentPathToRootDocument(JNIEnv * __env, jclass __jc,jlong lpjFbxDocument,jobject pDocumentPath,jboolean pFirstCall)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxDocument *) lpjFbxDocument)->GetDocumentPathToRootDocument(
  (FbxArray<  FbxDocument  * > &) * _lcvt.j2c_tmpl_FbxArray_obj_ref<jobject,  FbxDocument  * >(pDocumentPath)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pFirstCall)
  );
}
  /// bool  IsARootDocument (void)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxDocument_IsARootDocument(JNIEnv * __env, jclass __jc,jlong lpjFbxDocument)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxDocument *) lpjFbxDocument)->IsARootDocument(
  ));
  return ret;
}
  /// bool  CreateAnimStack (const char *pName, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxDocument_CreateAnimStack(JNIEnv * __env, jclass __jc,jlong lpjFbxDocument,jstring pName,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxDocument *) lpjFbxDocument)->CreateAnimStack(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// bool  RemoveAnimStack (const char *pName)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxDocument_RemoveAnimStack(JNIEnv * __env, jclass __jc,jlong lpjFbxDocument,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxDocument *) lpjFbxDocument)->RemoveAnimStack(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
  /// void  FillAnimStackNameArray (FbxArray< FbxString * > &pNameArray)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxDocument_FillAnimStackNameArray(JNIEnv * __env, jclass __jc,jlong lpjFbxDocument,jobject pNameArray)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxDocument *) lpjFbxDocument)->FillAnimStackNameArray(
  (FbxArray<  FbxString  * > &) * _lcvt.j2c_tmpl_FbxArray_obj_ref<jobject,  FbxString  * >(pNameArray)
  );
}
  /// bool  SetTakeInfo (const FbxTakeInfo &pTakeInfo)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxDocument_SetTakeInfo(JNIEnv * __env, jclass __jc,jlong lpjFbxDocument,jobject pTakeInfo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxDocument *) lpjFbxDocument)->SetTakeInfo(
  (const FbxTakeInfo  &) * _lcvt.j2c_object_ref<jobject,FbxTakeInfo >(pTakeInfo)
  ));
  return ret;
}
  /// FbxTakeInfo *  GetTakeInfo (const FbxString &pTakeName) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxDocument_GetTakeInfo(JNIEnv * __env, jclass __jc,jlong lpjFbxDocument,jobject pTakeName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxTakeInfo>(
  ((FbxDocument *) lpjFbxDocument)->GetTakeInfo(
  (const FbxString  &) * _lcvt.j2c_object_ref<jobject,FbxString >(pTakeName)
  ));
  return ret;
}
  /// FbxPropertyT< FbxReference >  Roots
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxDocument_mepSetRoots(JNIEnv * __env, jclass __jc,jlong lpjFbxDocument,jlong lpFbxReference)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxDocument *) lpjFbxDocument)->Roots.Set(
  ( FbxReference  )  _lcvt.j2c<jlong, FbxReference  >(lpFbxReference)
  );
}
  /// FbxPropertyT< FbxReference >  Roots
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxDocument_mepGetRoots(JNIEnv * __env, jclass __jc,jlong lpjFbxDocument)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j<jlong,  FbxReference  >(
  ((FbxDocument *) lpjFbxDocument)->Roots.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxReference >  Roots
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxDocument_mptGetRoots(JNIEnv * __env, jclass __jc,jlong lpjFbxDocument)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxReference   >(
   (&((FbxDocument *) lpjFbxDocument)->Roots
  ));
  return ret;
}
  /// FbxPropertyT< FbxString >  ActiveAnimStackName
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxDocument_mepSetActiveAnimStackName(JNIEnv * __env, jclass __jc,jlong lpjFbxDocument,jlong lpFbxString)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxDocument *) lpjFbxDocument)->ActiveAnimStackName.Set(
  ( FbxString  )  _lcvt.j2c_object<jlong,FbxString >(lpFbxString)
  );
}
  /// FbxPropertyT< FbxString >  ActiveAnimStackName
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxDocument_mepGetActiveAnimStackName(JNIEnv * __env, jclass __jc,jlong lpjFbxDocument)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxString>(
  ((FbxDocument *) lpjFbxDocument)->ActiveAnimStackName.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxString >  ActiveAnimStackName
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxDocument_mptGetActiveAnimStackName(JNIEnv * __env, jclass __jc,jlong lpjFbxDocument)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxString   >(
   (&((FbxDocument *) lpjFbxDocument)->ActiveAnimStackName
  ));
  return ret;
}
  /// FbxDocument * Create( FbxCollection* lpFbxCollection,  const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxDocument_Create(JNIEnv * __env, jclass __jc,jlong lpFbxCollection,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxDocument>(
  FbxDocument::Create(
  ( FbxCollection  *)  _lcvt.j2c_object_pt<jlong, FbxCollection>(lpFbxCollection)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
