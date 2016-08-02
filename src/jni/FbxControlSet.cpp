
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// void  Reset ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxControlSet_Reset(JNIEnv * __env, jclass __jc,jlong lpjFbxControlSet)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxControlSet *) lpjFbxControlSet)->Reset(
  );
}
  /// void  SetType (EType pType)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxControlSet_SetType(JNIEnv * __env, jclass __jc,jlong lpjFbxControlSet,jint pType)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxControlSet *) lpjFbxControlSet)->SetType(
  ( FbxControlSet::EType  )  _lcvt.j2c<jint,FbxControlSet::EType >(pType)
  );
}
  /// EType  GetType () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxControlSet_GetType(JNIEnv * __env, jclass __jc,jlong lpjFbxControlSet)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxControlSet::EType  >(
  ((FbxControlSet *) lpjFbxControlSet)->GetType(
  ));
  return ret;
}
  /// void  SetUseAxis (bool pUseAxis)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxControlSet_SetUseAxis(JNIEnv * __env, jclass __jc,jlong lpjFbxControlSet,jboolean pUseAxis)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxControlSet *) lpjFbxControlSet)->SetUseAxis(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pUseAxis)
  );
}
  /// bool  GetUseAxis () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxControlSet_GetUseAxis(JNIEnv * __env, jclass __jc,jlong lpjFbxControlSet)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxControlSet *) lpjFbxControlSet)->GetUseAxis(
  ));
  return ret;
}
  /// void  SetLockTransform (bool pLockTransform)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxControlSet_SetLockTransform(JNIEnv * __env, jclass __jc,jlong lpjFbxControlSet,jboolean pLockTransform)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxControlSet *) lpjFbxControlSet)->SetLockTransform(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pLockTransform)
  );
}
  /// bool  GetLockTransform () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxControlSet_GetLockTransform(JNIEnv * __env, jclass __jc,jlong lpjFbxControlSet)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxControlSet *) lpjFbxControlSet)->GetLockTransform(
  ));
  return ret;
}
  /// void  SetLock3DPick (bool pLock3DPick)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxControlSet_SetLock3DPick(JNIEnv * __env, jclass __jc,jlong lpjFbxControlSet,jboolean pLock3DPick)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxControlSet *) lpjFbxControlSet)->SetLock3DPick(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pLock3DPick)
  );
}
  /// bool  GetLock3DPick () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxControlSet_GetLock3DPick(JNIEnv * __env, jclass __jc,jlong lpjFbxControlSet)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxControlSet *) lpjFbxControlSet)->GetLock3DPick(
  ));
  return ret;
}
  /// bool  SetControlSetLink (FbxCharacter::ENodeId pCharacterNodeId, const FbxControlSetLink &pControlSetLink)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxControlSet_SetControlSetLink(JNIEnv * __env, jclass __jc,jlong lpjFbxControlSet,jint pCharacterNodeId,jobject pControlSetLink)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxControlSet *) lpjFbxControlSet)->SetControlSetLink(
  ( FbxCharacter::ENodeId  )  _lcvt.j2c<jint,FbxCharacter::ENodeId >(pCharacterNodeId)
  ,
  (const FbxControlSetLink  &) * _lcvt.j2c_object_ref<jobject,FbxControlSetLink >(pControlSetLink)
  ));
  return ret;
}
  /// bool  GetControlSetLink (FbxCharacter::ENodeId pCharacterNodeId, FbxControlSetLink *pControlSetLink=NULL) const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxControlSet_GetControlSetLink(JNIEnv * __env, jclass __jc,jlong lpjFbxControlSet,jint pCharacterNodeId,jlong pControlSetLink)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxControlSet *) lpjFbxControlSet)->GetControlSetLink(
  ( FbxCharacter::ENodeId  )  _lcvt.j2c<jint,FbxCharacter::ENodeId >(pCharacterNodeId)
  ,
  ( FbxControlSetLink  *)  _lcvt.j2c_object_pt<jlong, FbxControlSetLink>(pControlSetLink)
  ));
  return ret;
}
  /// bool  SetEffector (FbxEffector::ENodeId pEffectorNodeId, FbxEffector pEffector)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxControlSet_SetEffector(JNIEnv * __env, jclass __jc,jlong lpjFbxControlSet,jint pEffectorNodeId,jlong pEffector)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxControlSet *) lpjFbxControlSet)->SetEffector(
  ( FbxEffector::ENodeId  )  _lcvt.j2c<jint,FbxEffector::ENodeId >(pEffectorNodeId)
  ,
  ( FbxEffector  )  _lcvt.j2c_object<jlong,FbxEffector >(pEffector)
  ));
  return ret;
}
  /// bool  GetEffector (FbxEffector::ENodeId pEffectorNodeId, FbxEffector *pEffector=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxControlSet_GetEffector(JNIEnv * __env, jclass __jc,jlong lpjFbxControlSet,jint pEffectorNodeId,jlong pEffector)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxControlSet *) lpjFbxControlSet)->GetEffector(
  ( FbxEffector::ENodeId  )  _lcvt.j2c<jint,FbxEffector::ENodeId >(pEffectorNodeId)
  ,
  ( FbxEffector  *)  _lcvt.j2c_object_pt<jlong, FbxEffector>(pEffector)
  ));
  return ret;
}
  /// bool  SetEffectorAux (FbxEffector::ENodeId pEffectorNodeId, FbxNode *pNode, FbxEffector::ESetId pEffectorSetId=FbxEffector::eAux1Set)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxControlSet_SetEffectorAux(JNIEnv * __env, jclass __jc,jlong lpjFbxControlSet,jint pEffectorNodeId,jlong pNode,jint pEffectorSetId)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxControlSet *) lpjFbxControlSet)->SetEffectorAux(
  ( FbxEffector::ENodeId  )  _lcvt.j2c<jint,FbxEffector::ENodeId >(pEffectorNodeId)
  ,
  ( FbxNode  *)  _lcvt.j2c_object_pt<jlong, FbxNode>(pNode)
  ,
  ( FbxEffector::ESetId  )  _lcvt.j2c<jint,FbxEffector::ESetId >(pEffectorSetId)
  ));
  return ret;
}
  /// bool  GetEffectorAux (FbxEffector::ENodeId pEffectorNodeId, FbxNode **pNode=NULL, FbxEffector::ESetId pEffectorSetId=FbxEffector::eAux1Set) const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxControlSet_GetEffectorAux(JNIEnv * __env, jclass __jc,jlong lpjFbxControlSet,jint pEffectorNodeId,jlongArray pNode,jint pEffectorSetId)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxControlSet *) lpjFbxControlSet)->GetEffectorAux(
  ( FbxEffector::ENodeId  )  _lcvt.j2c<jint,FbxEffector::ENodeId >(pEffectorNodeId)
  ,
  ( FbxNode  **)  _lcvt.j2c_object_ppt<jlongArray,FbxNode>(pNode)
  ,
  ( FbxEffector::ESetId  )  _lcvt.j2c<jint,FbxEffector::ESetId >(pEffectorSetId)
  ));
  return ret;
}
