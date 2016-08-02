
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// virtual void  Clear ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCollection_Clear(JNIEnv * __env, jclass __jc,jlong lpjFbxCollection)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCollection *) lpjFbxCollection)->Clear(
  );
}
  /// virtual bool  AddMember (FbxObject *pMember)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCollection_AddMember(JNIEnv * __env, jclass __jc,jlong lpjFbxCollection,jlong pMember)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxCollection *) lpjFbxCollection)->AddMember(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pMember)
  ));
  return ret;
}
  /// virtual bool  RemoveMember (FbxObject *pMember)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCollection_RemoveMember(JNIEnv * __env, jclass __jc,jlong lpjFbxCollection,jlong pMember)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxCollection *) lpjFbxCollection)->RemoveMember(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pMember)
  ));
  return ret;
}
  /// int  GetMemberCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxCollection_GetMemberCount(JNIEnv * __env, jclass __jc,jlong lpjFbxCollection)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxCollection *) lpjFbxCollection)->GetMemberCount(
  ));
  return ret;
}
  /// FbxObject *  GetMember (int pIndex=0) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCollection_GetMember(JNIEnv * __env, jclass __jc,jlong lpjFbxCollection,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxObject>(
  ((FbxCollection *) lpjFbxCollection)->GetMember(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// virtual bool  IsMember (const FbxObject *pMember) const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCollection_IsMember(JNIEnv * __env, jclass __jc,jlong lpjFbxCollection,jlong pMember)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxCollection *) lpjFbxCollection)->IsMember(
  (const FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pMember)
  ));
  return ret;
}
  /// int  GetMemberCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxCollection_GetMemberCount1(JNIEnv * __env, jclass __jc,jlong lpjFbxCollection)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxCollection *) lpjFbxCollection)->GetMemberCount(
  ));
  return ret;
}
  /// int  GetMemberCount (const FbxCriteria &pCriteria) const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxCollection_GetMemberCount2(JNIEnv * __env, jclass __jc,jlong lpjFbxCollection,jobject pCriteria)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxCollection *) lpjFbxCollection)->GetMemberCount(
  (const FbxCriteria  &) * _lcvt.j2c_object_ref<jobject,FbxCriteria >(pCriteria)
  ));
  return ret;
}
  /// FbxObject *  GetMember (const FbxCriteria &pCriteria, int pIndex=0) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCollection_GetMember1(JNIEnv * __env, jclass __jc,jlong lpjFbxCollection,jobject pCriteria,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxObject>(
  ((FbxCollection *) lpjFbxCollection)->GetMember(
  (const FbxCriteria  &) * _lcvt.j2c_object_ref<jobject,FbxCriteria >(pCriteria)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// FbxObject *  FindMember (const FbxCriteria &pCriteria, const char *pName) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCollection_FindMember(JNIEnv * __env, jclass __jc,jlong lpjFbxCollection,jobject pCriteria,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxObject>(
  ((FbxCollection *) lpjFbxCollection)->FindMember(
  (const FbxCriteria  &) * _lcvt.j2c_object_ref<jobject,FbxCriteria >(pCriteria)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
  /// virtual void  SetSelectedAll (bool pSelection)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCollection_SetSelectedAll(JNIEnv * __env, jclass __jc,jlong lpjFbxCollection,jboolean pSelection)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCollection *) lpjFbxCollection)->SetSelectedAll(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pSelection)
  );
}
  /// FbxCollection * Create( FbxObject* lpFbxObject,  const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCollection_Create(JNIEnv * __env, jclass __jc,jlong lpFbxObject,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxCollection>(
  FbxCollection::Create(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(lpFbxObject)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
