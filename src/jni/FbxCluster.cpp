//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// void  SetControlPointIWCount (int pCount)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCluster_SetControlPointIWCount(JNIEnv * __env, jclass __jc,jlong lpjFbxCluster,jint pCount)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCluster *) lpjFbxCluster)->SetControlPointIWCount(
  ( int  )  _lcvt.j2c<jint, int  >(pCount)
  );
}
  /// EType  GetSubDeformerType () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxCluster_GetSubDeformerType(JNIEnv * __env, jclass __jc,jlong lpjFbxCluster)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxCluster::EType  >(
  ((FbxCluster *) lpjFbxCluster)->GetSubDeformerType(
  ));
  return ret;
}
  /// void  Reset ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCluster_Reset(JNIEnv * __env, jclass __jc,jlong lpjFbxCluster)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCluster *) lpjFbxCluster)->Reset(
  );
}
  /// void  SetLinkMode (ELinkMode pMode)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCluster_SetLinkMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCluster,jint pMode)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCluster *) lpjFbxCluster)->SetLinkMode(
  ( FbxCluster::ELinkMode  )  _lcvt.j2c<jint,FbxCluster::ELinkMode >(pMode)
  );
}
  /// ELinkMode  GetLinkMode () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxCluster_GetLinkMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCluster)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxCluster::ELinkMode  >(
  ((FbxCluster *) lpjFbxCluster)->GetLinkMode(
  ));
  return ret;
}
  /// void  SetLink (const FbxNode *pNode)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCluster_SetLink(JNIEnv * __env, jclass __jc,jlong lpjFbxCluster,jlong pNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCluster *) lpjFbxCluster)->SetLink(
  (const FbxNode  *)  _lcvt.j2c_object_pt<jlong, FbxNode>(pNode)
  );
}
  /// FbxNode *  GetLink ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCluster_GetLink(JNIEnv * __env, jclass __jc,jlong lpjFbxCluster)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxNode>(
  ((FbxCluster *) lpjFbxCluster)->GetLink(
  ));
  return ret;
}
  /// const FbxNode *  GetLink () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCluster_GetLink1(JNIEnv * __env, jclass __jc,jlong lpjFbxCluster)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxNode>(
  ((FbxCluster *) lpjFbxCluster)->GetLink(
  ));
  return ret;
}
  /// void  SetAssociateModel (FbxNode *pNode)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCluster_SetAssociateModel(JNIEnv * __env, jclass __jc,jlong lpjFbxCluster,jlong pNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCluster *) lpjFbxCluster)->SetAssociateModel(
  ( FbxNode  *)  _lcvt.j2c_object_pt<jlong, FbxNode>(pNode)
  );
}
  /// FbxNode *  GetAssociateModel () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCluster_GetAssociateModel(JNIEnv * __env, jclass __jc,jlong lpjFbxCluster)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxNode>(
  ((FbxCluster *) lpjFbxCluster)->GetAssociateModel(
  ));
  return ret;
}
  /// void  AddControlPointIndex (int pIndex, double pWeight)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCluster_AddControlPointIndex(JNIEnv * __env, jclass __jc,jlong lpjFbxCluster,jint pIndex,jdouble pWeight)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCluster *) lpjFbxCluster)->AddControlPointIndex(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ,
  ( double  )  _lcvt.j2c<jdouble, double  >(pWeight)
  );
}
  /// int  GetControlPointIndicesCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxCluster_GetControlPointIndicesCount(JNIEnv * __env, jclass __jc,jlong lpjFbxCluster)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxCluster *) lpjFbxCluster)->GetControlPointIndicesCount(
  ));
  return ret;
}
  /// int *  GetControlPointIndices () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCluster_GetControlPointIndices(JNIEnv * __env, jclass __jc,jlong lpjFbxCluster)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_pt<jlong,  int  *>(
  ((FbxCluster *) lpjFbxCluster)->GetControlPointIndices(
  ));
  return ret;
}
  /// double *  GetControlPointWeights () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCluster_GetControlPointWeights(JNIEnv * __env, jclass __jc,jlong lpjFbxCluster)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_pt<jlong,  double  *>(
  ((FbxCluster *) lpjFbxCluster)->GetControlPointWeights(
  ));
  return ret;
}
  /// void  SetTransformMatrix (const FbxAMatrix &pMatrix)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCluster_SetTransformMatrix(JNIEnv * __env, jclass __jc,jlong lpjFbxCluster,jobject pMatrix)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCluster *) lpjFbxCluster)->SetTransformMatrix(
  (const FbxAMatrix  &) * _lcvt.j2c_object_ref<jobject,FbxAMatrix >(pMatrix)
  );
}
  /// FbxAMatrix &  GetTransformMatrix (FbxAMatrix &pMatrix) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCluster_GetTransformMatrix(JNIEnv * __env, jclass __jc,jlong lpjFbxCluster,jobject pMatrix)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_ref<jlong, FbxAMatrix>(
  ((FbxCluster *) lpjFbxCluster)->GetTransformMatrix(
  ( FbxAMatrix  &) * _lcvt.j2c_object_ref<jobject,FbxAMatrix >(pMatrix)
  ));
  return ret;
}
  /// void  SetTransformLinkMatrix (const FbxAMatrix &pMatrix)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCluster_SetTransformLinkMatrix(JNIEnv * __env, jclass __jc,jlong lpjFbxCluster,jobject pMatrix)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCluster *) lpjFbxCluster)->SetTransformLinkMatrix(
  (const FbxAMatrix  &) * _lcvt.j2c_object_ref<jobject,FbxAMatrix >(pMatrix)
  );
}
  /// FbxAMatrix &  GetTransformLinkMatrix (FbxAMatrix &pMatrix) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCluster_GetTransformLinkMatrix(JNIEnv * __env, jclass __jc,jlong lpjFbxCluster,jobject pMatrix)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_ref<jlong, FbxAMatrix>(
  ((FbxCluster *) lpjFbxCluster)->GetTransformLinkMatrix(
  ( FbxAMatrix  &) * _lcvt.j2c_object_ref<jobject,FbxAMatrix >(pMatrix)
  ));
  return ret;
}
  /// void  SetTransformAssociateModelMatrix (const FbxAMatrix &pMatrix)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCluster_SetTransformAssociateModelMatrix(JNIEnv * __env, jclass __jc,jlong lpjFbxCluster,jobject pMatrix)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCluster *) lpjFbxCluster)->SetTransformAssociateModelMatrix(
  (const FbxAMatrix  &) * _lcvt.j2c_object_ref<jobject,FbxAMatrix >(pMatrix)
  );
}
  /// FbxAMatrix &  GetTransformAssociateModelMatrix (FbxAMatrix &pMatrix) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCluster_GetTransformAssociateModelMatrix(JNIEnv * __env, jclass __jc,jlong lpjFbxCluster,jobject pMatrix)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_ref<jlong, FbxAMatrix>(
  ((FbxCluster *) lpjFbxCluster)->GetTransformAssociateModelMatrix(
  ( FbxAMatrix  &) * _lcvt.j2c_object_ref<jobject,FbxAMatrix >(pMatrix)
  ));
  return ret;
}
  /// void  SetTransformParentMatrix (const FbxAMatrix &pMatrix)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCluster_SetTransformParentMatrix(JNIEnv * __env, jclass __jc,jlong lpjFbxCluster,jobject pMatrix)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCluster *) lpjFbxCluster)->SetTransformParentMatrix(
  (const FbxAMatrix  &) * _lcvt.j2c_object_ref<jobject,FbxAMatrix >(pMatrix)
  );
}
  /// FbxAMatrix &  GetTransformParentMatrix (FbxAMatrix &pMatrix) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCluster_GetTransformParentMatrix(JNIEnv * __env, jclass __jc,jlong lpjFbxCluster,jobject pMatrix)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_ref<jlong, FbxAMatrix>(
  ((FbxCluster *) lpjFbxCluster)->GetTransformParentMatrix(
  ( FbxAMatrix  &) * _lcvt.j2c_object_ref<jobject,FbxAMatrix >(pMatrix)
  ));
  return ret;
}
  /// bool  IsTransformParentSet () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCluster_IsTransformParentSet(JNIEnv * __env, jclass __jc,jlong lpjFbxCluster)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxCluster *) lpjFbxCluster)->IsTransformParentSet(
  ));
  return ret;
}
  /// FbxCluster * Create( FbxSubDeformer* lpFbxSubDeformer,  const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCluster_Create(JNIEnv * __env, jclass __jc,jlong lpFbxSubDeformer,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxCluster>(
  FbxCluster::Create(
  ( FbxSubDeformer  *)  _lcvt.j2c_object_pt<jlong, FbxSubDeformer>(lpFbxSubDeformer)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
