//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// bool  SetBlendShapeChannel (FbxBlendShapeChannel *pBlendShapeChannel)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxShape_SetBlendShapeChannel(JNIEnv * __env, jclass __jc,jlong lpjFbxShape,jlong pBlendShapeChannel)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxShape *) lpjFbxShape)->SetBlendShapeChannel(
  ( FbxBlendShapeChannel  *)  _lcvt.j2c_object_pt<jlong, FbxBlendShapeChannel>(pBlendShapeChannel)
  ));
  return ret;
}
  /// FbxBlendShapeChannel *  GetBlendShapeChannel () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxShape_GetBlendShapeChannel(JNIEnv * __env, jclass __jc,jlong lpjFbxShape)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxBlendShapeChannel>(
  ((FbxShape *) lpjFbxShape)->GetBlendShapeChannel(
  ));
  return ret;
}
  /// FbxGeometry *  GetBaseGeometry ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxShape_GetBaseGeometry(JNIEnv * __env, jclass __jc,jlong lpjFbxShape)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxGeometry>(
  ((FbxShape *) lpjFbxShape)->GetBaseGeometry(
  ));
  return ret;
}
  /// int  GetControlPointIndicesCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxShape_GetControlPointIndicesCount(JNIEnv * __env, jclass __jc,jlong lpjFbxShape)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxShape *) lpjFbxShape)->GetControlPointIndicesCount(
  ));
  return ret;
}
  /// int *  GetControlPointIndices () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxShape_GetControlPointIndices(JNIEnv * __env, jclass __jc,jlong lpjFbxShape)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_pt<jlong,  int  *>(
  ((FbxShape *) lpjFbxShape)->GetControlPointIndices(
  ));
  return ret;
}
  /// void  SetControlPointIndicesCount (int pCount)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxShape_SetControlPointIndicesCount(JNIEnv * __env, jclass __jc,jlong lpjFbxShape,jint pCount)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxShape *) lpjFbxShape)->SetControlPointIndicesCount(
  ( int  )  _lcvt.j2c<jint, int  >(pCount)
  );
}
  /// void  AddControlPointIndex (int pIndex)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxShape_AddControlPointIndex(JNIEnv * __env, jclass __jc,jlong lpjFbxShape,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxShape *) lpjFbxShape)->AddControlPointIndex(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  );
}
  /// void  Reset ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxShape_Reset(JNIEnv * __env, jclass __jc,jlong lpjFbxShape)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxShape *) lpjFbxShape)->Reset(
  );
}
  /// FbxShape * Create( FbxGeometryBase* lpFbxGeometryBase,  const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxShape_Create(JNIEnv * __env, jclass __jc,jlong lpFbxGeometryBase,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxShape>(
  FbxShape::Create(
  ( FbxGeometryBase  *)  _lcvt.j2c_object_pt<jlong, FbxGeometryBase>(lpFbxGeometryBase)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
