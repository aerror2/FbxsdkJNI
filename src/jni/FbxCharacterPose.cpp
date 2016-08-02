
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// void  Reset ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacterPose_Reset(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacterPose)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacterPose *) lpjFbxCharacterPose)->Reset(
  );
}
  /// FbxNode *  GetRootNode () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacterPose_GetRootNode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacterPose)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxNode>(
  ((FbxCharacterPose *) lpjFbxCharacterPose)->GetRootNode(
  ));
  return ret;
}
  /// FbxCharacter *  GetCharacter () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacterPose_GetCharacter(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacterPose)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxCharacter>(
  ((FbxCharacterPose *) lpjFbxCharacterPose)->GetCharacter(
  ));
  return ret;
}
  /// bool  GetOffset (FbxCharacter::ENodeId pCharacterNodeId, FbxAMatrix &pOffset) const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCharacterPose_GetOffset(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacterPose,jint pCharacterNodeId,jobject pOffset)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxCharacterPose *) lpjFbxCharacterPose)->GetOffset(
  ( FbxCharacter::ENodeId  )  _lcvt.j2c<jint,FbxCharacter::ENodeId >(pCharacterNodeId)
  ,
  ( FbxAMatrix  &) * _lcvt.j2c_object_ref<jobject,FbxAMatrix >(pOffset)
  ));
  return ret;
}
  /// bool  GetLocalPosition (FbxCharacter::ENodeId pCharacterNodeId, FbxVector4 &pLocalT, FbxVector4 &pLocalR, FbxVector4 &pLocalS) const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCharacterPose_GetLocalPosition(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacterPose,jint pCharacterNodeId,jobject pLocalT,jobject pLocalR,jobject pLocalS)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxCharacterPose *) lpjFbxCharacterPose)->GetLocalPosition(
  ( FbxCharacter::ENodeId  )  _lcvt.j2c<jint,FbxCharacter::ENodeId >(pCharacterNodeId)
  ,
  ( FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pLocalT)
  ,
  ( FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pLocalR)
  ,
  ( FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pLocalS)
  ));
  return ret;
}
  /// bool  GetGlobalPosition (FbxCharacter::ENodeId pCharacterNodeId, FbxAMatrix &pGlobalPosition) const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCharacterPose_GetGlobalPosition(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacterPose,jint pCharacterNodeId,jobject pGlobalPosition)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxCharacterPose *) lpjFbxCharacterPose)->GetGlobalPosition(
  ( FbxCharacter::ENodeId  )  _lcvt.j2c<jint,FbxCharacter::ENodeId >(pCharacterNodeId)
  ,
  ( FbxAMatrix  &) * _lcvt.j2c_object_ref<jobject,FbxAMatrix >(pGlobalPosition)
  ));
  return ret;
}
  /// FbxScene *  GetPoseScene () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacterPose_GetPoseScene(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacterPose)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxScene>(
  ((FbxCharacterPose *) lpjFbxCharacterPose)->GetPoseScene(
  ));
  return ret;
}
  /// FbxCharacterPose * Create( FbxObject* lpFbxObject,  const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacterPose_Create(JNIEnv * __env, jclass __jc,jlong lpFbxObject,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxCharacterPose>(
  FbxCharacterPose::Create(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(lpFbxObject)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
