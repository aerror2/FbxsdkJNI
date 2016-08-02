
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// bool  Init (const FbxNode *pNode, const FbxMesh *pMesh)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxDeformationsEvaluator_Init(JNIEnv * __env, jclass __jc,jlong lpjFbxDeformationsEvaluator,jlong pNode,jlong pMesh)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxDeformationsEvaluator *) lpjFbxDeformationsEvaluator)->Init(
  (const FbxNode  *)  _lcvt.j2c_object_pt<jlong, FbxNode>(pNode)
  ,
  (const FbxMesh  *)  _lcvt.j2c_object_pt<jlong, FbxMesh>(pMesh)
  ));
  return ret;
}
  /// bool  ComputeShapeDeformation (FbxVector4 *pVertexArray, const FbxTime &pTime)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxDeformationsEvaluator_ComputeShapeDeformation(JNIEnv * __env, jclass __jc,jlong lpjFbxDeformationsEvaluator,jlong pVertexArray,jobject pTime)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxDeformationsEvaluator *) lpjFbxDeformationsEvaluator)->ComputeShapeDeformation(
  ( FbxVector4  *)  _lcvt.j2c_object_pt<jlong, FbxVector4>(pVertexArray)
  ,
  (const FbxTime  &) * _lcvt.j2c_object_ref<jobject,FbxTime >(pTime)
  ));
  return ret;
}
  /// bool  ComputeSkinDeformation (FbxVector4 *pVertexArray, const FbxTime &pTime, FbxAMatrix *pGX=NULL, const FbxPose *pPose=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxDeformationsEvaluator_ComputeSkinDeformation(JNIEnv * __env, jclass __jc,jlong lpjFbxDeformationsEvaluator,jlong pVertexArray,jobject pTime,jlong pGX,jlong pPose)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxDeformationsEvaluator *) lpjFbxDeformationsEvaluator)->ComputeSkinDeformation(
  ( FbxVector4  *)  _lcvt.j2c_object_pt<jlong, FbxVector4>(pVertexArray)
  ,
  (const FbxTime  &) * _lcvt.j2c_object_ref<jobject,FbxTime >(pTime)
  ,
  ( FbxAMatrix  *)  _lcvt.j2c_object_pt<jlong, FbxAMatrix>(pGX)
  ,
  (const FbxPose  *)  _lcvt.j2c_object_pt<jlong, FbxPose>(pPose)
  ));
  return ret;
}
