//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// void  SetDeformAccuracy (double pDeformAccuracy)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxSkin_SetDeformAccuracy(JNIEnv * __env, jclass __jc,jlong lpjFbxSkin,jdouble pDeformAccuracy)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxSkin *) lpjFbxSkin)->SetDeformAccuracy(
  ( double  )  _lcvt.j2c<jdouble, double  >(pDeformAccuracy)
  );
}
  /// double  GetDeformAccuracy () const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxSkin_GetDeformAccuracy(JNIEnv * __env, jclass __jc,jlong lpjFbxSkin)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxSkin *) lpjFbxSkin)->GetDeformAccuracy(
  ));
  return ret;
}
  /// bool  SetGeometry (FbxGeometry *pGeometry)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxSkin_SetGeometry(JNIEnv * __env, jclass __jc,jlong lpjFbxSkin,jlong pGeometry)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxSkin *) lpjFbxSkin)->SetGeometry(
  ( FbxGeometry  *)  _lcvt.j2c_object_pt<jlong, FbxGeometry>(pGeometry)
  ));
  return ret;
}
  /// FbxGeometry *  GetGeometry ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxSkin_GetGeometry(JNIEnv * __env, jclass __jc,jlong lpjFbxSkin)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxGeometry>(
  ((FbxSkin *) lpjFbxSkin)->GetGeometry(
  ));
  return ret;
}
  /// bool  AddCluster (FbxCluster *pCluster)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxSkin_AddCluster(JNIEnv * __env, jclass __jc,jlong lpjFbxSkin,jlong pCluster)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxSkin *) lpjFbxSkin)->AddCluster(
  ( FbxCluster  *)  _lcvt.j2c_object_pt<jlong, FbxCluster>(pCluster)
  ));
  return ret;
}
  /// FbxCluster *  RemoveCluster (FbxCluster *pCluster)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxSkin_RemoveCluster(JNIEnv * __env, jclass __jc,jlong lpjFbxSkin,jlong pCluster)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxCluster>(
  ((FbxSkin *) lpjFbxSkin)->RemoveCluster(
  ( FbxCluster  *)  _lcvt.j2c_object_pt<jlong, FbxCluster>(pCluster)
  ));
  return ret;
}
  /// int  GetClusterCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxSkin_GetClusterCount(JNIEnv * __env, jclass __jc,jlong lpjFbxSkin)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxSkin *) lpjFbxSkin)->GetClusterCount(
  ));
  return ret;
}
  /// FbxCluster *  GetCluster (int pIndex)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxSkin_GetCluster(JNIEnv * __env, jclass __jc,jlong lpjFbxSkin,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxCluster>(
  ((FbxSkin *) lpjFbxSkin)->GetCluster(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// const FbxCluster *  GetCluster (int pIndex) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxSkin_GetCluster1(JNIEnv * __env, jclass __jc,jlong lpjFbxSkin,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxCluster>(
  ((FbxSkin *) lpjFbxSkin)->GetCluster(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// EDeformerType  GetDeformerType () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxSkin_GetDeformerType(JNIEnv * __env, jclass __jc,jlong lpjFbxSkin)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxDeformer::EDeformerType  >(
  ((FbxSkin *) lpjFbxSkin)->GetDeformerType(
  ));
  return ret;
}
  /// void  SetSkinningType (EType pType)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxSkin_SetSkinningType(JNIEnv * __env, jclass __jc,jlong lpjFbxSkin,jint pType)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxSkin *) lpjFbxSkin)->SetSkinningType(
  ( FbxSkin::EType  )  _lcvt.j2c<jint,FbxSkin::EType >(pType)
  );
}
  /// EType  GetSkinningType () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxSkin_GetSkinningType(JNIEnv * __env, jclass __jc,jlong lpjFbxSkin)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxSkin::EType  >(
  ((FbxSkin *) lpjFbxSkin)->GetSkinningType(
  ));
  return ret;
}
  /// void  AddControlPointIndex (int pIndex, double pBlendWeight=0)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxSkin_AddControlPointIndex(JNIEnv * __env, jclass __jc,jlong lpjFbxSkin,jint pIndex,jdouble pBlendWeight)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxSkin *) lpjFbxSkin)->AddControlPointIndex(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ,
  ( double  )  _lcvt.j2c<jdouble, double  >(pBlendWeight)
  );
}
  /// int  GetControlPointIndicesCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxSkin_GetControlPointIndicesCount(JNIEnv * __env, jclass __jc,jlong lpjFbxSkin)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxSkin *) lpjFbxSkin)->GetControlPointIndicesCount(
  ));
  return ret;
}
  /// int *  GetControlPointIndices () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxSkin_GetControlPointIndices(JNIEnv * __env, jclass __jc,jlong lpjFbxSkin)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_pt<jlong,  int  *>(
  ((FbxSkin *) lpjFbxSkin)->GetControlPointIndices(
  ));
  return ret;
}
  /// double *  GetControlPointBlendWeights () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxSkin_GetControlPointBlendWeights(JNIEnv * __env, jclass __jc,jlong lpjFbxSkin)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_pt<jlong,  double  *>(
  ((FbxSkin *) lpjFbxSkin)->GetControlPointBlendWeights(
  ));
  return ret;
}
  /// void  SetControlPointIWCount (int pCount)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxSkin_SetControlPointIWCount(JNIEnv * __env, jclass __jc,jlong lpjFbxSkin,jint pCount)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxSkin *) lpjFbxSkin)->SetControlPointIWCount(
  ( int  )  _lcvt.j2c<jint, int  >(pCount)
  );
}
  /// FbxSkin * Create( FbxDeformer* lpFbxDeformer,  const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxSkin_Create(JNIEnv * __env, jclass __jc,jlong lpFbxDeformer,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxSkin>(
  FbxSkin::Create(
  ( FbxDeformer  *)  _lcvt.j2c_object_pt<jlong, FbxDeformer>(lpFbxDeformer)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
