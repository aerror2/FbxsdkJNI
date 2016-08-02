
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxManager *  GetFbxManager () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxObject_GetFbxManager(JNIEnv * __env, jclass __jc,jlong lpjFbxObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxManager>(
  ((FbxObject *) lpjFbxObject)->GetFbxManager(
  ));
  return ret;
}
  /// FbxDocument *  GetDocument () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxObject_GetDocument(JNIEnv * __env, jclass __jc,jlong lpjFbxObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxDocument>(
  ((FbxObject *) lpjFbxObject)->GetDocument(
  ));
  return ret;
}
  /// FbxDocument *  GetRootDocument () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxObject_GetRootDocument(JNIEnv * __env, jclass __jc,jlong lpjFbxObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxDocument>(
  ((FbxObject *) lpjFbxObject)->GetRootDocument(
  ));
  return ret;
}
  /// FbxScene *  GetScene () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxObject_GetScene(JNIEnv * __env, jclass __jc,jlong lpjFbxObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxScene>(
  ((FbxObject *) lpjFbxObject)->GetScene(
  ));
  return ret;
}
  /// void  Destroy (bool pRecursive=false)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxObject_Destroy(JNIEnv * __env, jclass __jc,jlong lpjFbxObject,jboolean pRecursive)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxObject *) lpjFbxObject)->Destroy(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pRecursive)
  );
}
  /// void  ResetProperties ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxObject_ResetProperties(JNIEnv * __env, jclass __jc,jlong lpjFbxObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxObject *) lpjFbxObject)->ResetProperties(
  );
}
  /// virtual bool  GetSelected ()
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxObject_GetSelected(JNIEnv * __env, jclass __jc,jlong lpjFbxObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxObject *) lpjFbxObject)->GetSelected(
  ));
  return ret;
}
  /// virtual void  SetSelected (bool pSelected)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxObject_SetSelected(JNIEnv * __env, jclass __jc,jlong lpjFbxObject,jboolean pSelected)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxObject *) lpjFbxObject)->SetSelected(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pSelected)
  );
}
  /// void  SetUserDataPtr (const FbxUInt64 &pUserID, void *pUserData)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxObject_SetUserDataPtr(JNIEnv * __env, jclass __jc,jlong lpjFbxObject,jobject pUserID,jlong pUserData)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxObject *) lpjFbxObject)->SetUserDataPtr(
  (const FbxUInt64  &) * _lcvt.j2c_FbxUInt64_ref<jobject,FbxUInt64>(pUserID)
  ,
  ( void  *)  _lcvt.j2c_void_pt(pUserData)
  );
}
  /// void *  GetUserDataPtr (const FbxUInt64 &pUserID) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxObject_GetUserDataPtr(JNIEnv * __env, jclass __jc,jlong lpjFbxObject,jobject pUserID)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_void_pt(
  ((FbxObject *) lpjFbxObject)->GetUserDataPtr(
  (const FbxUInt64  &) * _lcvt.j2c_FbxUInt64_ref<jobject,FbxUInt64>(pUserID)
  ));
  return ret;
}
  /// void  SetUserDataPtr (void *pUserData)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxObject_SetUserDataPtr1(JNIEnv * __env, jclass __jc,jlong lpjFbxObject,jlong pUserData)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxObject *) lpjFbxObject)->SetUserDataPtr(
  ( void  *)  _lcvt.j2c_void_pt(pUserData)
  );
}
  /// void *  GetUserDataPtr () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxObject_GetUserDataPtr1(JNIEnv * __env, jclass __jc,jlong lpjFbxObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_void_pt(
  ((FbxObject *) lpjFbxObject)->GetUserDataPtr(
  ));
  return ret;
}
  /// bool  ConnectSrcObject (FbxObject *pObject, FbxConnection::EType pType=FbxConnection::eNone)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxObject_ConnectSrcObject(JNIEnv * __env, jclass __jc,jlong lpjFbxObject,jlong pObject,jint pType)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxObject *) lpjFbxObject)->ConnectSrcObject(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pObject)
  ,
  ( FbxConnection::EType  )  _lcvt.j2c<jint,FbxConnection::EType >(pType)
  ));
  return ret;
}
  /// bool  IsConnectedSrcObject (const FbxObject *pObject) const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxObject_IsConnectedSrcObject(JNIEnv * __env, jclass __jc,jlong lpjFbxObject,jlong pObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxObject *) lpjFbxObject)->IsConnectedSrcObject(
  (const FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pObject)
  ));
  return ret;
}
  /// bool  DisconnectSrcObject (FbxObject *pObject)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxObject_DisconnectSrcObject(JNIEnv * __env, jclass __jc,jlong lpjFbxObject,jlong pObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxObject *) lpjFbxObject)->DisconnectSrcObject(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pObject)
  ));
  return ret;
}
  /// bool  DisconnectAllSrcObject ()
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxObject_DisconnectAllSrcObject(JNIEnv * __env, jclass __jc,jlong lpjFbxObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxObject *) lpjFbxObject)->DisconnectAllSrcObject(
  ));
  return ret;
}
  /// bool  DisconnectAllSrcObject (const FbxCriteria &pCriteria)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxObject_DisconnectAllSrcObject1(JNIEnv * __env, jclass __jc,jlong lpjFbxObject,jobject pCriteria)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxObject *) lpjFbxObject)->DisconnectAllSrcObject(
  (const FbxCriteria  &) * _lcvt.j2c_object_ref<jobject,FbxCriteria >(pCriteria)
  ));
  return ret;
}
  /// int  GetSrcObjectCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxObject_GetSrcObjectCount(JNIEnv * __env, jclass __jc,jlong lpjFbxObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxObject *) lpjFbxObject)->GetSrcObjectCount(
  ));
  return ret;
}
  /// int  GetSrcObjectCount (const FbxCriteria &pCriteria) const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxObject_GetSrcObjectCount1(JNIEnv * __env, jclass __jc,jlong lpjFbxObject,jobject pCriteria)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxObject *) lpjFbxObject)->GetSrcObjectCount(
  (const FbxCriteria  &) * _lcvt.j2c_object_ref<jobject,FbxCriteria >(pCriteria)
  ));
  return ret;
}
  /// FbxObject *  GetSrcObject (int pIndex=0) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxObject_GetSrcObject(JNIEnv * __env, jclass __jc,jlong lpjFbxObject,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxObject>(
  ((FbxObject *) lpjFbxObject)->GetSrcObject(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// FbxObject *  GetSrcObject (const FbxCriteria &pCriteria, int pIndex=0) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxObject_GetSrcObject1(JNIEnv * __env, jclass __jc,jlong lpjFbxObject,jobject pCriteria,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxObject>(
  ((FbxObject *) lpjFbxObject)->GetSrcObject(
  (const FbxCriteria  &) * _lcvt.j2c_object_ref<jobject,FbxCriteria >(pCriteria)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// FbxObject *  FindSrcObject (const char *pName, int pStartIndex=0) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxObject_FindSrcObject(JNIEnv * __env, jclass __jc,jlong lpjFbxObject,jstring pName,jint pStartIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxObject>(
  ((FbxObject *) lpjFbxObject)->FindSrcObject(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pStartIndex)
  ));
  return ret;
}
  /// FbxObject *  FindSrcObject (const FbxCriteria &pCriteria, const char *pName, int pStartIndex=0) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxObject_FindSrcObject1(JNIEnv * __env, jclass __jc,jlong lpjFbxObject,jobject pCriteria,jstring pName,jint pStartIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxObject>(
  ((FbxObject *) lpjFbxObject)->FindSrcObject(
  (const FbxCriteria  &) * _lcvt.j2c_object_ref<jobject,FbxCriteria >(pCriteria)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pStartIndex)
  ));
  return ret;
}
  /// bool  DisconnectAllSrcObject ()
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxObject_DisconnectAllSrcObject2(JNIEnv * __env, jclass __jc,jlong lpjFbxObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxObject *) lpjFbxObject)->DisconnectAllSrcObject(
  ));
  return ret;
}
  /// bool  DisconnectAllSrcObject (const FbxCriteria &pCriteria)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxObject_DisconnectAllSrcObject3(JNIEnv * __env, jclass __jc,jlong lpjFbxObject,jobject pCriteria)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxObject *) lpjFbxObject)->DisconnectAllSrcObject(
  (const FbxCriteria  &) * _lcvt.j2c_object_ref<jobject,FbxCriteria >(pCriteria)
  ));
  return ret;
}
  /// int  GetSrcObjectCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxObject_GetSrcObjectCount2(JNIEnv * __env, jclass __jc,jlong lpjFbxObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxObject *) lpjFbxObject)->GetSrcObjectCount(
  ));
  return ret;
}
  /// int  GetSrcObjectCount (const FbxCriteria &pCriteria) const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxObject_GetSrcObjectCount3(JNIEnv * __env, jclass __jc,jlong lpjFbxObject,jobject pCriteria)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxObject *) lpjFbxObject)->GetSrcObjectCount(
  (const FbxCriteria  &) * _lcvt.j2c_object_ref<jobject,FbxCriteria >(pCriteria)
  ));
  return ret;
}
  /// bool  ConnectDstObject (FbxObject *pObject, FbxConnection::EType pType=FbxConnection::eNone)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxObject_ConnectDstObject(JNIEnv * __env, jclass __jc,jlong lpjFbxObject,jlong pObject,jint pType)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxObject *) lpjFbxObject)->ConnectDstObject(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pObject)
  ,
  ( FbxConnection::EType  )  _lcvt.j2c<jint,FbxConnection::EType >(pType)
  ));
  return ret;
}
  /// bool  IsConnectedDstObject (const FbxObject *pObject) const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxObject_IsConnectedDstObject(JNIEnv * __env, jclass __jc,jlong lpjFbxObject,jlong pObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxObject *) lpjFbxObject)->IsConnectedDstObject(
  (const FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pObject)
  ));
  return ret;
}
  /// bool  DisconnectDstObject (FbxObject *pObject)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxObject_DisconnectDstObject(JNIEnv * __env, jclass __jc,jlong lpjFbxObject,jlong pObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxObject *) lpjFbxObject)->DisconnectDstObject(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pObject)
  ));
  return ret;
}
  /// bool  DisconnectAllDstObject ()
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxObject_DisconnectAllDstObject(JNIEnv * __env, jclass __jc,jlong lpjFbxObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxObject *) lpjFbxObject)->DisconnectAllDstObject(
  ));
  return ret;
}
  /// bool  DisconnectAllDstObject (const FbxCriteria &pCriteria)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxObject_DisconnectAllDstObject1(JNIEnv * __env, jclass __jc,jlong lpjFbxObject,jobject pCriteria)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxObject *) lpjFbxObject)->DisconnectAllDstObject(
  (const FbxCriteria  &) * _lcvt.j2c_object_ref<jobject,FbxCriteria >(pCriteria)
  ));
  return ret;
}
  /// int  GetDstObjectCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxObject_GetDstObjectCount(JNIEnv * __env, jclass __jc,jlong lpjFbxObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxObject *) lpjFbxObject)->GetDstObjectCount(
  ));
  return ret;
}
  /// int  GetDstObjectCount (const FbxCriteria &pCriteria) const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxObject_GetDstObjectCount1(JNIEnv * __env, jclass __jc,jlong lpjFbxObject,jobject pCriteria)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxObject *) lpjFbxObject)->GetDstObjectCount(
  (const FbxCriteria  &) * _lcvt.j2c_object_ref<jobject,FbxCriteria >(pCriteria)
  ));
  return ret;
}
  /// FbxObject *  GetDstObject (int pIndex=0) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxObject_GetDstObject(JNIEnv * __env, jclass __jc,jlong lpjFbxObject,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxObject>(
  ((FbxObject *) lpjFbxObject)->GetDstObject(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// FbxObject *  GetDstObject (const FbxCriteria &pCriteria, int pIndex=0) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxObject_GetDstObject1(JNIEnv * __env, jclass __jc,jlong lpjFbxObject,jobject pCriteria,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxObject>(
  ((FbxObject *) lpjFbxObject)->GetDstObject(
  (const FbxCriteria  &) * _lcvt.j2c_object_ref<jobject,FbxCriteria >(pCriteria)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// FbxObject *  FindDstObject (const char *pName, int pStartIndex=0) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxObject_FindDstObject(JNIEnv * __env, jclass __jc,jlong lpjFbxObject,jstring pName,jint pStartIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxObject>(
  ((FbxObject *) lpjFbxObject)->FindDstObject(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pStartIndex)
  ));
  return ret;
}
  /// FbxObject *  FindDstObject (const FbxCriteria &pCriteria, const char *pName, int pStartIndex=0) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxObject_FindDstObject1(JNIEnv * __env, jclass __jc,jlong lpjFbxObject,jobject pCriteria,jstring pName,jint pStartIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxObject>(
  ((FbxObject *) lpjFbxObject)->FindDstObject(
  (const FbxCriteria  &) * _lcvt.j2c_object_ref<jobject,FbxCriteria >(pCriteria)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pStartIndex)
  ));
  return ret;
}
  /// bool  DisconnectAllDstObject ()
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxObject_DisconnectAllDstObject2(JNIEnv * __env, jclass __jc,jlong lpjFbxObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxObject *) lpjFbxObject)->DisconnectAllDstObject(
  ));
  return ret;
}
  /// bool  DisconnectAllDstObject (const FbxCriteria &pCriteria)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxObject_DisconnectAllDstObject3(JNIEnv * __env, jclass __jc,jlong lpjFbxObject,jobject pCriteria)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxObject *) lpjFbxObject)->DisconnectAllDstObject(
  (const FbxCriteria  &) * _lcvt.j2c_object_ref<jobject,FbxCriteria >(pCriteria)
  ));
  return ret;
}
  /// int  GetDstObjectCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxObject_GetDstObjectCount2(JNIEnv * __env, jclass __jc,jlong lpjFbxObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxObject *) lpjFbxObject)->GetDstObjectCount(
  ));
  return ret;
}
  /// int  GetDstObjectCount (const FbxCriteria &pCriteria) const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxObject_GetDstObjectCount3(JNIEnv * __env, jclass __jc,jlong lpjFbxObject,jobject pCriteria)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxObject *) lpjFbxObject)->GetDstObjectCount(
  (const FbxCriteria  &) * _lcvt.j2c_object_ref<jobject,FbxCriteria >(pCriteria)
  ));
  return ret;
}
  /// FbxProperty  GetFirstProperty () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxObject_GetFirstProperty(JNIEnv * __env, jclass __jc,jlong lpjFbxObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxProperty>(
  ((FbxObject *) lpjFbxObject)->GetFirstProperty(
  ));
  return ret;
}
  /// FbxProperty  GetNextProperty (const FbxProperty &pProperty) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxObject_GetNextProperty(JNIEnv * __env, jclass __jc,jlong lpjFbxObject,jobject pProperty)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxProperty>(
  ((FbxObject *) lpjFbxObject)->GetNextProperty(
  (const FbxProperty  &) * _lcvt.j2c_object_ref<jobject,FbxProperty >(pProperty)
  ));
  return ret;
}
  /// FbxProperty  FindProperty (const char *pName, bool pCaseSensitive=true) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxObject_FindProperty(JNIEnv * __env, jclass __jc,jlong lpjFbxObject,jstring pName,jboolean pCaseSensitive)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxProperty>(
  ((FbxObject *) lpjFbxObject)->FindProperty(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pCaseSensitive)
  ));
  return ret;
}
  /// FbxProperty  FindProperty (const char *pName, const FbxDataType &pDataType, bool pCaseSensitive=true) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxObject_FindProperty1(JNIEnv * __env, jclass __jc,jlong lpjFbxObject,jstring pName,jobject pDataType,jboolean pCaseSensitive)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxProperty>(
  ((FbxObject *) lpjFbxObject)->FindProperty(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ,
  (const FbxDataType  &) * _lcvt.j2c_object_ref<jobject,FbxDataType >(pDataType)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pCaseSensitive)
  ));
  return ret;
}
  /// FbxProperty  FindPropertyHierarchical (const char *pName, bool pCaseSensitive=true) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxObject_FindPropertyHierarchical(JNIEnv * __env, jclass __jc,jlong lpjFbxObject,jstring pName,jboolean pCaseSensitive)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxProperty>(
  ((FbxObject *) lpjFbxObject)->FindPropertyHierarchical(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pCaseSensitive)
  ));
  return ret;
}
  /// FbxProperty  FindPropertyHierarchical (const char *pName, const FbxDataType &pDataType, bool pCaseSensitive=true) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxObject_FindPropertyHierarchical1(JNIEnv * __env, jclass __jc,jlong lpjFbxObject,jstring pName,jobject pDataType,jboolean pCaseSensitive)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxProperty>(
  ((FbxObject *) lpjFbxObject)->FindPropertyHierarchical(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ,
  (const FbxDataType  &) * _lcvt.j2c_object_ref<jobject,FbxDataType >(pDataType)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pCaseSensitive)
  ));
  return ret;
}
  /// FbxProperty  GetClassRootProperty ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxObject_GetClassRootProperty(JNIEnv * __env, jclass __jc,jlong lpjFbxObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxProperty>(
  ((FbxObject *) lpjFbxObject)->GetClassRootProperty(
  ));
  return ret;
}
  /// bool  ConnectSrcProperty (const FbxProperty &pProperty)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxObject_ConnectSrcProperty(JNIEnv * __env, jclass __jc,jlong lpjFbxObject,jobject pProperty)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxObject *) lpjFbxObject)->ConnectSrcProperty(
  (const FbxProperty  &) * _lcvt.j2c_object_ref<jobject,FbxProperty >(pProperty)
  ));
  return ret;
}
  /// bool  IsConnectedSrcProperty (const FbxProperty &pProperty)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxObject_IsConnectedSrcProperty(JNIEnv * __env, jclass __jc,jlong lpjFbxObject,jobject pProperty)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxObject *) lpjFbxObject)->IsConnectedSrcProperty(
  (const FbxProperty  &) * _lcvt.j2c_object_ref<jobject,FbxProperty >(pProperty)
  ));
  return ret;
}
  /// bool  DisconnectSrcProperty (const FbxProperty &pProperty)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxObject_DisconnectSrcProperty(JNIEnv * __env, jclass __jc,jlong lpjFbxObject,jobject pProperty)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxObject *) lpjFbxObject)->DisconnectSrcProperty(
  (const FbxProperty  &) * _lcvt.j2c_object_ref<jobject,FbxProperty >(pProperty)
  ));
  return ret;
}
  /// int  GetSrcPropertyCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxObject_GetSrcPropertyCount(JNIEnv * __env, jclass __jc,jlong lpjFbxObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxObject *) lpjFbxObject)->GetSrcPropertyCount(
  ));
  return ret;
}
  /// FbxProperty  GetSrcProperty (int pIndex=0) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxObject_GetSrcProperty(JNIEnv * __env, jclass __jc,jlong lpjFbxObject,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxProperty>(
  ((FbxObject *) lpjFbxObject)->GetSrcProperty(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// FbxProperty  FindSrcProperty (const char *pName, int pStartIndex=0) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxObject_FindSrcProperty(JNIEnv * __env, jclass __jc,jlong lpjFbxObject,jstring pName,jint pStartIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxProperty>(
  ((FbxObject *) lpjFbxObject)->FindSrcProperty(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pStartIndex)
  ));
  return ret;
}
  /// bool  ConnectDstProperty (const FbxProperty &pProperty)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxObject_ConnectDstProperty(JNIEnv * __env, jclass __jc,jlong lpjFbxObject,jobject pProperty)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxObject *) lpjFbxObject)->ConnectDstProperty(
  (const FbxProperty  &) * _lcvt.j2c_object_ref<jobject,FbxProperty >(pProperty)
  ));
  return ret;
}
  /// bool  IsConnectedDstProperty (const FbxProperty &pProperty)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxObject_IsConnectedDstProperty(JNIEnv * __env, jclass __jc,jlong lpjFbxObject,jobject pProperty)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxObject *) lpjFbxObject)->IsConnectedDstProperty(
  (const FbxProperty  &) * _lcvt.j2c_object_ref<jobject,FbxProperty >(pProperty)
  ));
  return ret;
}
  /// bool  DisconnectDstProperty (const FbxProperty &pProperty)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxObject_DisconnectDstProperty(JNIEnv * __env, jclass __jc,jlong lpjFbxObject,jobject pProperty)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxObject *) lpjFbxObject)->DisconnectDstProperty(
  (const FbxProperty  &) * _lcvt.j2c_object_ref<jobject,FbxProperty >(pProperty)
  ));
  return ret;
}
  /// int  GetDstPropertyCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxObject_GetDstPropertyCount(JNIEnv * __env, jclass __jc,jlong lpjFbxObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxObject *) lpjFbxObject)->GetDstPropertyCount(
  ));
  return ret;
}
  /// FbxProperty  GetDstProperty (int pIndex=0) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxObject_GetDstProperty(JNIEnv * __env, jclass __jc,jlong lpjFbxObject,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxProperty>(
  ((FbxObject *) lpjFbxObject)->GetDstProperty(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// FbxProperty  FindDstProperty (const char *pName, int pStartIndex=0) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxObject_FindDstProperty(JNIEnv * __env, jclass __jc,jlong lpjFbxObject,jstring pName,jint pStartIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxProperty>(
  ((FbxObject *) lpjFbxObject)->FindDstProperty(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pStartIndex)
  ));
  return ret;
}
  /// int  ContentUnload ()
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxObject_ContentUnload(JNIEnv * __env, jclass __jc,jlong lpjFbxObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxObject *) lpjFbxObject)->ContentUnload(
  ));
  return ret;
}
  /// int  ContentLoad ()
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxObject_ContentLoad(JNIEnv * __env, jclass __jc,jlong lpjFbxObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxObject *) lpjFbxObject)->ContentLoad(
  ));
  return ret;
}
  /// bool  ContentIsLoaded () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxObject_ContentIsLoaded(JNIEnv * __env, jclass __jc,jlong lpjFbxObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxObject *) lpjFbxObject)->ContentIsLoaded(
  ));
  return ret;
}
  /// void  ContentDecrementLockCount ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxObject_ContentDecrementLockCount(JNIEnv * __env, jclass __jc,jlong lpjFbxObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxObject *) lpjFbxObject)->ContentDecrementLockCount(
  );
}
  /// void  ContentIncrementLockCount ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxObject_ContentIncrementLockCount(JNIEnv * __env, jclass __jc,jlong lpjFbxObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxObject *) lpjFbxObject)->ContentIncrementLockCount(
  );
}
  /// bool  ContentIsLocked () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxObject_ContentIsLocked(JNIEnv * __env, jclass __jc,jlong lpjFbxObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxObject *) lpjFbxObject)->ContentIsLocked(
  ));
  return ret;
}
  /// virtual bool  ContentWriteTo (FbxStream &pStream) const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxObject_ContentWriteTo(JNIEnv * __env, jclass __jc,jlong lpjFbxObject,jobject pStream)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxObject *) lpjFbxObject)->ContentWriteTo(
  ( FbxStream  &) * _lcvt.j2c_object_ref<jobject,FbxStream >(pStream)
  ));
  return ret;
}
  /// virtual bool  ContentReadFrom (const FbxStream &pStream)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxObject_ContentReadFrom(JNIEnv * __env, jclass __jc,jlong lpjFbxObject,jobject pStream)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxObject *) lpjFbxObject)->ContentReadFrom(
  (const FbxStream  &) * _lcvt.j2c_object_ref<jobject,FbxStream >(pStream)
  ));
  return ret;
}
  /// void  EmitMessage (FbxMessage *pMessage) const
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxObject_EmitMessage(JNIEnv * __env, jclass __jc,jlong lpjFbxObject,jlong pMessage)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxObject *) lpjFbxObject)->EmitMessage(
  ( FbxMessage  *)  _lcvt.j2c_object_pt<jlong, FbxMessage>(pMessage)
  );
}
  /// FbxLibrary *  GetParentLibrary () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxObject_GetParentLibrary(JNIEnv * __env, jclass __jc,jlong lpjFbxObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxLibrary>(
  ((FbxObject *) lpjFbxObject)->GetParentLibrary(
  ));
  return ret;
}
  /// bool  AddImplementation (FbxImplementation *pImplementation)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxObject_AddImplementation(JNIEnv * __env, jclass __jc,jlong lpjFbxObject,jlong pImplementation)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxObject *) lpjFbxObject)->AddImplementation(
  ( FbxImplementation  *)  _lcvt.j2c_object_pt<jlong, FbxImplementation>(pImplementation)
  ));
  return ret;
}
  /// bool  RemoveImplementation (FbxImplementation *pImplementation)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxObject_RemoveImplementation(JNIEnv * __env, jclass __jc,jlong lpjFbxObject,jlong pImplementation)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxObject *) lpjFbxObject)->RemoveImplementation(
  ( FbxImplementation  *)  _lcvt.j2c_object_pt<jlong, FbxImplementation>(pImplementation)
  ));
  return ret;
}
  /// bool  HasDefaultImplementation (void) const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxObject_HasDefaultImplementation(JNIEnv * __env, jclass __jc,jlong lpjFbxObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxObject *) lpjFbxObject)->HasDefaultImplementation(
  ));
  return ret;
}
  /// FbxImplementation *  GetDefaultImplementation (void) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxObject_GetDefaultImplementation(JNIEnv * __env, jclass __jc,jlong lpjFbxObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxImplementation>(
  ((FbxObject *) lpjFbxObject)->GetDefaultImplementation(
  ));
  return ret;
}
  /// bool  SetDefaultImplementation (FbxImplementation *pImplementation)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxObject_SetDefaultImplementation(JNIEnv * __env, jclass __jc,jlong lpjFbxObject,jlong pImplementation)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxObject *) lpjFbxObject)->SetDefaultImplementation(
  ( FbxImplementation  *)  _lcvt.j2c_object_pt<jlong, FbxImplementation>(pImplementation)
  ));
  return ret;
}
  /// int  GetImplementationCount (const FbxImplementationFilter *pCriteria=NULL) const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxObject_GetImplementationCount(JNIEnv * __env, jclass __jc,jlong lpjFbxObject,jlong pCriteria)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxObject *) lpjFbxObject)->GetImplementationCount(
  (const FbxImplementationFilter  *)  _lcvt.j2c_object_pt<jlong, FbxImplementationFilter>(pCriteria)
  ));
  return ret;
}
  /// FbxImplementation *  GetImplementation (int pIndex, const FbxImplementationFilter *pCriteria=NULL) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxObject_GetImplementation(JNIEnv * __env, jclass __jc,jlong lpjFbxObject,jint pIndex,jlong pCriteria)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxImplementation>(
  ((FbxObject *) lpjFbxObject)->GetImplementation(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ,
  (const FbxImplementationFilter  *)  _lcvt.j2c_object_pt<jlong, FbxImplementationFilter>(pCriteria)
  ));
  return ret;
}
  /// virtual FbxString  GetUrl () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxObject_GetUrl(JNIEnv * __env, jclass __jc,jlong lpjFbxObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxString>(
  ((FbxObject *) lpjFbxObject)->GetUrl(
  ));
  return ret;
}
  /// virtual bool  SetUrl (char *pUrl)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxObject_SetUrl(JNIEnv * __env, jclass __jc,jlong lpjFbxObject,jstring pUrl)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxObject *) lpjFbxObject)->SetUrl(
  ( char  *)  _lcvt.j2c_string<jstring,char>(pUrl)
  ));
  return ret;
}
  /// void  SetRuntimeClassId (const FbxClassId &pClassId)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxObject_SetRuntimeClassId(JNIEnv * __env, jclass __jc,jlong lpjFbxObject,jobject pClassId)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxObject *) lpjFbxObject)->SetRuntimeClassId(
  (const FbxClassId  &) * _lcvt.j2c_object_ref<jobject,FbxClassId >(pClassId)
  );
}
  /// FbxClassId  GetRuntimeClassId () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxObject_GetRuntimeClassId(JNIEnv * __env, jclass __jc,jlong lpjFbxObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxClassId>(
  ((FbxObject *) lpjFbxObject)->GetRuntimeClassId(
  ));
  return ret;
}
  /// bool  IsRuntime (const FbxClassId &pClassId) const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxObject_IsRuntime(JNIEnv * __env, jclass __jc,jlong lpjFbxObject,jobject pClassId)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxObject *) lpjFbxObject)->IsRuntime(
  (const FbxClassId  &) * _lcvt.j2c_object_ref<jobject,FbxClassId >(pClassId)
  ));
  return ret;
}
  /// bool  IsRuntimePlug () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxObject_IsRuntimePlug(JNIEnv * __env, jclass __jc,jlong lpjFbxObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxObject *) lpjFbxObject)->IsRuntimePlug(
  ));
  return ret;
}
  /// void  SetObjectFlags (EObjectFlag pFlags, bool pValue)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxObject_SetObjectFlags(JNIEnv * __env, jclass __jc,jlong lpjFbxObject,jint pFlags,jboolean pValue)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxObject *) lpjFbxObject)->SetObjectFlags(
  ( FbxObject::EObjectFlag  )  _lcvt.j2c<jint,FbxObject::EObjectFlag >(pFlags)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pValue)
  );
}
  /// bool  GetObjectFlags (EObjectFlag pFlags) const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxObject_GetObjectFlags(JNIEnv * __env, jclass __jc,jlong lpjFbxObject,jint pFlags)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxObject *) lpjFbxObject)->GetObjectFlags(
  ( FbxObject::EObjectFlag  )  _lcvt.j2c<jint,FbxObject::EObjectFlag >(pFlags)
  ));
  return ret;
}
  /// void  SetAllObjectFlags (FbxUInt pFlags)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxObject_SetAllObjectFlags(JNIEnv * __env, jclass __jc,jlong lpjFbxObject,jint pFlags)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxObject *) lpjFbxObject)->SetAllObjectFlags(
  ( FbxUInt  )  _lcvt.j2c<jint, FbxUInt  >(pFlags)
  );
}
  /// FbxUInt  GetAllObjectFlags () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxObject_GetAllObjectFlags(JNIEnv * __env, jclass __jc,jlong lpjFbxObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxUInt  >(
  ((FbxObject *) lpjFbxObject)->GetAllObjectFlags(
  ));
  return ret;
}
  /// virtual FbxObject &  Copy (const FbxObject &pObject)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxObject_Copy(JNIEnv * __env, jclass __jc,jlong lpjFbxObject,jobject pObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_ref<jlong, FbxObject>(
  ((FbxObject *) lpjFbxObject)->Copy(
  (const FbxObject  &) * _lcvt.j2c_object_ref<jobject,FbxObject >(pObject)
  ));
  return ret;
}
  /// virtual FbxObject *  Clone (FbxObject::ECloneType pCloneType=eDeepClone, FbxObject *pContainer=NULL, void *pSet=NULL) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxObject_Clone(JNIEnv * __env, jclass __jc,jlong lpjFbxObject,jint pCloneType,jlong pContainer,jlong pSet)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxObject>(
  ((FbxObject *) lpjFbxObject)->Clone(
  ( FbxObject::ECloneType  )  _lcvt.j2c<jint,FbxObject::ECloneType >(pCloneType)
  ,
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pContainer)
  ,
  ( void  *)  _lcvt.j2c_void_pt(pSet)
  ));
  return ret;
}
  /// bool  IsAReferenceTo () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxObject_IsAReferenceTo(JNIEnv * __env, jclass __jc,jlong lpjFbxObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxObject *) lpjFbxObject)->IsAReferenceTo(
  ));
  return ret;
}
  /// FbxObject *  GetReferenceTo () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxObject_GetReferenceTo(JNIEnv * __env, jclass __jc,jlong lpjFbxObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxObject>(
  ((FbxObject *) lpjFbxObject)->GetReferenceTo(
  ));
  return ret;
}
  /// bool  IsReferencedBy () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxObject_IsReferencedBy(JNIEnv * __env, jclass __jc,jlong lpjFbxObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxObject *) lpjFbxObject)->IsReferencedBy(
  ));
  return ret;
}
  /// int  GetReferencedByCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxObject_GetReferencedByCount(JNIEnv * __env, jclass __jc,jlong lpjFbxObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxObject *) lpjFbxObject)->GetReferencedByCount(
  ));
  return ret;
}
  /// FbxObject *  GetReferencedBy (int pIndex) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxObject_GetReferencedBy(JNIEnv * __env, jclass __jc,jlong lpjFbxObject,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxObject>(
  ((FbxObject *) lpjFbxObject)->GetReferencedBy(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// void  SetName (const char *pName)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxObject_SetName(JNIEnv * __env, jclass __jc,jlong lpjFbxObject,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxObject *) lpjFbxObject)->SetName(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  );
}
  /// const char *  GetName () const
extern "C" JNIEXPORT jstring JNICALL Java_fbxsdk_FbxObject_GetName(JNIEnv * __env, jclass __jc,jlong lpjFbxObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  jstring ret=(jstring)_lcvt.c2j_string(
  ((FbxObject *) lpjFbxObject)->GetName(
  ));
  return ret;
}
  /// FbxString  GetNameWithoutNameSpacePrefix () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxObject_GetNameWithoutNameSpacePrefix(JNIEnv * __env, jclass __jc,jlong lpjFbxObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxString>(
  ((FbxObject *) lpjFbxObject)->GetNameWithoutNameSpacePrefix(
  ));
  return ret;
}
  /// FbxString  GetNameWithNameSpacePrefix () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxObject_GetNameWithNameSpacePrefix(JNIEnv * __env, jclass __jc,jlong lpjFbxObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxString>(
  ((FbxObject *) lpjFbxObject)->GetNameWithNameSpacePrefix(
  ));
  return ret;
}
  /// void  SetInitialName (const char *pName)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxObject_SetInitialName(JNIEnv * __env, jclass __jc,jlong lpjFbxObject,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxObject *) lpjFbxObject)->SetInitialName(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  );
}
  /// const char *  GetInitialName () const
extern "C" JNIEXPORT jstring JNICALL Java_fbxsdk_FbxObject_GetInitialName(JNIEnv * __env, jclass __jc,jlong lpjFbxObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  jstring ret=(jstring)_lcvt.c2j_string(
  ((FbxObject *) lpjFbxObject)->GetInitialName(
  ));
  return ret;
}
  /// FbxString  GetNameSpaceOnly ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxObject_GetNameSpaceOnly(JNIEnv * __env, jclass __jc,jlong lpjFbxObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxString>(
  ((FbxObject *) lpjFbxObject)->GetNameSpaceOnly(
  ));
  return ret;
}
  /// void  SetNameSpace (FbxString pNameSpace)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxObject_SetNameSpace(JNIEnv * __env, jclass __jc,jlong lpjFbxObject,jlong pNameSpace)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxObject *) lpjFbxObject)->SetNameSpace(
  ( FbxString  )  _lcvt.j2c_object<jlong,FbxString >(pNameSpace)
  );
}
  /// FbxArray< FbxString * >  GetNameSpaceArray (char identifier)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxObject_GetNameSpaceArray(JNIEnv * __env, jclass __jc,jlong lpjFbxObject,jbyte identifier)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxArray<jlong,  FbxString  * >(
  ((FbxObject *) lpjFbxObject)->GetNameSpaceArray(
  ( char  )  _lcvt.j2c<jbyte, char  >(identifier)
  ));
  return ret;
}
  /// FbxString  GetNameOnly () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxObject_GetNameOnly(JNIEnv * __env, jclass __jc,jlong lpjFbxObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxString>(
  ((FbxObject *) lpjFbxObject)->GetNameOnly(
  ));
  return ret;
}
  /// FbxString  GetNameSpacePrefix () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxObject_GetNameSpacePrefix(JNIEnv * __env, jclass __jc,jlong lpjFbxObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxString>(
  ((FbxObject *) lpjFbxObject)->GetNameSpacePrefix(
  ));
  return ret;
}
  /// const FbxUInt64 &  GetUniqueID () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxObject_GetUniqueID(JNIEnv * __env, jclass __jc,jlong lpjFbxObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_ref<jlong, const FbxUInt64  &>(
  ((FbxObject *) lpjFbxObject)->GetUniqueID(
  ));
  return ret;
}
  /// FbxObject * Create( FbxScene* pContainer, const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxObject_Create(JNIEnv * __env, jclass __jc,jlong pContainer,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxObject>(
  FbxObject::Create(
  ( FbxScene  *)  _lcvt.j2c_object_pt<jlong, FbxScene>(pContainer)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
