
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// void  SetIsBindPose (bool pIsBindPose)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxPose_SetIsBindPose(JNIEnv * __env, jclass __jc,jlong lpjFbxPose,jboolean pIsBindPose)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxPose *) lpjFbxPose)->SetIsBindPose(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pIsBindPose)
  );
}
  /// bool  IsBindPose () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxPose_IsBindPose(JNIEnv * __env, jclass __jc,jlong lpjFbxPose)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxPose *) lpjFbxPose)->IsBindPose(
  ));
  return ret;
}
  /// bool  IsRestPose () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxPose_IsRestPose(JNIEnv * __env, jclass __jc,jlong lpjFbxPose)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxPose *) lpjFbxPose)->IsRestPose(
  ));
  return ret;
}
  /// int  GetCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxPose_GetCount(JNIEnv * __env, jclass __jc,jlong lpjFbxPose)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxPose *) lpjFbxPose)->GetCount(
  ));
  return ret;
}
  /// int  Add (FbxNode *pNode, const FbxMatrix &pMatrix, bool pLocalMatrix=false, bool pMultipleBindPose=true)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxPose_Add(JNIEnv * __env, jclass __jc,jlong lpjFbxPose,jlong pNode,jobject pMatrix,jboolean pLocalMatrix,jboolean pMultipleBindPose)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxPose *) lpjFbxPose)->Add(
  ( FbxNode  *)  _lcvt.j2c_object_pt<jlong, FbxNode>(pNode)
  ,
  (const FbxMatrix  &) * _lcvt.j2c_object_ref<jobject,FbxMatrix >(pMatrix)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pLocalMatrix)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pMultipleBindPose)
  ));
  return ret;
}
  /// void  Remove (int pIndex)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxPose_Remove(JNIEnv * __env, jclass __jc,jlong lpjFbxPose,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxPose *) lpjFbxPose)->Remove(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  );
}
  /// FbxNameHandler  GetNodeName (int pIndex) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxPose_GetNodeName(JNIEnv * __env, jclass __jc,jlong lpjFbxPose,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxNameHandler>(
  ((FbxPose *) lpjFbxPose)->GetNodeName(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// FbxNode *  GetNode (int pIndex) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxPose_GetNode(JNIEnv * __env, jclass __jc,jlong lpjFbxPose,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxNode>(
  ((FbxPose *) lpjFbxPose)->GetNode(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// const FbxMatrix &  GetMatrix (int pIndex) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxPose_GetMatrix(JNIEnv * __env, jclass __jc,jlong lpjFbxPose,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_ref<jlong, FbxMatrix>(
  ((FbxPose *) lpjFbxPose)->GetMatrix(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// bool  IsLocalMatrix (int pIndex) const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxPose_IsLocalMatrix(JNIEnv * __env, jclass __jc,jlong lpjFbxPose,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxPose *) lpjFbxPose)->IsLocalMatrix(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// int  Find (const FbxNameHandler &pNodeName, char pCompareWhat=eAllNameComponents) const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxPose_Find(JNIEnv * __env, jclass __jc,jlong lpjFbxPose,jobject pNodeName,jbyte pCompareWhat)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxPose *) lpjFbxPose)->Find(
  (const FbxNameHandler  &) * _lcvt.j2c_object_ref<jobject,FbxNameHandler >(pNodeName)
  ,
  ( char  )  _lcvt.j2c<jbyte, char  >(pCompareWhat)
  ));
  return ret;
}
  /// int  Find (const FbxNode *pNode) const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxPose_Find1(JNIEnv * __env, jclass __jc,jlong lpjFbxPose,jlong pNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxPose *) lpjFbxPose)->Find(
  (const FbxNode  *)  _lcvt.j2c_object_pt<jlong, FbxNode>(pNode)
  ));
  return ret;
}
  /// bool  IsValidBindPose (FbxNode *pRoot, double pMatrixCmpTolerance=0.0001, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxPose_IsValidBindPose(JNIEnv * __env, jclass __jc,jlong lpjFbxPose,jlong pRoot,jdouble pMatrixCmpTolerance,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxPose *) lpjFbxPose)->IsValidBindPose(
  ( FbxNode  *)  _lcvt.j2c_object_pt<jlong, FbxNode>(pRoot)
  ,
  ( double  )  _lcvt.j2c<jdouble, double  >(pMatrixCmpTolerance)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// bool  IsValidBindPoseVerbose (FbxNode *pRoot, NodeList &pMissingAncestors, NodeList &pMissingDeformers, NodeList &pMissingDeformersAncestors, NodeList &pWrongMatrices, double pMatrixCmpTolerance=0.0001, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxPose_IsValidBindPoseVerbose(JNIEnv * __env, jclass __jc,jlong lpjFbxPose,jlong pRoot,jobject pMissingAncestors,jobject pMissingDeformers,jobject pMissingDeformersAncestors,jobject pWrongMatrices,jdouble pMatrixCmpTolerance,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxPose *) lpjFbxPose)->IsValidBindPoseVerbose(
  ( FbxNode  *)  _lcvt.j2c_object_pt<jlong, FbxNode>(pRoot)
  ,
  ( NodeList  &) * _lcvt.j2c_object_ref<jobject,NodeList >(pMissingAncestors)
  ,
  ( NodeList  &) * _lcvt.j2c_object_ref<jobject,NodeList >(pMissingDeformers)
  ,
  ( NodeList  &) * _lcvt.j2c_object_ref<jobject,NodeList >(pMissingDeformersAncestors)
  ,
  ( NodeList  &) * _lcvt.j2c_object_ref<jobject,NodeList >(pWrongMatrices)
  ,
  ( double  )  _lcvt.j2c<jdouble, double  >(pMatrixCmpTolerance)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// bool  IsValidBindPoseVerbose (FbxNode *pRoot, FbxUserNotification *pUserNotification, double pMatrixCmpTolerance=0.0001, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxPose_IsValidBindPoseVerbose1(JNIEnv * __env, jclass __jc,jlong lpjFbxPose,jlong pRoot,jlong pUserNotification,jdouble pMatrixCmpTolerance,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxPose *) lpjFbxPose)->IsValidBindPoseVerbose(
  ( FbxNode  *)  _lcvt.j2c_object_pt<jlong, FbxNode>(pRoot)
  ,
  ( FbxUserNotification  *)  _lcvt.j2c_object_pt<jlong, FbxUserNotification>(pUserNotification)
  ,
  ( double  )  _lcvt.j2c<jdouble, double  >(pMatrixCmpTolerance)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// FbxPose * Create( FbxObject* lpFbxObject,  const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxPose_Create(JNIEnv * __env, jclass __jc,jlong lpFbxObject,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxPose>(
  FbxPose::Create(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(lpFbxObject)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
