
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// bool  SetGeometry (FbxGeometry *pGeometry)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxBlendShape_SetGeometry(JNIEnv * __env, jclass __jc,jlong lpjFbxBlendShape,jlong pGeometry)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxBlendShape *) lpjFbxBlendShape)->SetGeometry(
  ( FbxGeometry  *)  _lcvt.j2c_object_pt<jlong, FbxGeometry>(pGeometry)
  ));
  return ret;
}
  /// FbxGeometry *  GetGeometry ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxBlendShape_GetGeometry(JNIEnv * __env, jclass __jc,jlong lpjFbxBlendShape)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxGeometry>(
  ((FbxBlendShape *) lpjFbxBlendShape)->GetGeometry(
  ));
  return ret;
}
  /// bool  AddBlendShapeChannel (FbxBlendShapeChannel *pBlendShapeChannel)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxBlendShape_AddBlendShapeChannel(JNIEnv * __env, jclass __jc,jlong lpjFbxBlendShape,jlong pBlendShapeChannel)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxBlendShape *) lpjFbxBlendShape)->AddBlendShapeChannel(
  ( FbxBlendShapeChannel  *)  _lcvt.j2c_object_pt<jlong, FbxBlendShapeChannel>(pBlendShapeChannel)
  ));
  return ret;
}
  /// FbxBlendShapeChannel *  RemoveBlendShapeChannel (FbxBlendShapeChannel *pBlendShapeChannel)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxBlendShape_RemoveBlendShapeChannel(JNIEnv * __env, jclass __jc,jlong lpjFbxBlendShape,jlong pBlendShapeChannel)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxBlendShapeChannel>(
  ((FbxBlendShape *) lpjFbxBlendShape)->RemoveBlendShapeChannel(
  ( FbxBlendShapeChannel  *)  _lcvt.j2c_object_pt<jlong, FbxBlendShapeChannel>(pBlendShapeChannel)
  ));
  return ret;
}
  /// int  GetBlendShapeChannelCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxBlendShape_GetBlendShapeChannelCount(JNIEnv * __env, jclass __jc,jlong lpjFbxBlendShape)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxBlendShape *) lpjFbxBlendShape)->GetBlendShapeChannelCount(
  ));
  return ret;
}
  /// FbxBlendShapeChannel *  GetBlendShapeChannel (int pIndex)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxBlendShape_GetBlendShapeChannel(JNIEnv * __env, jclass __jc,jlong lpjFbxBlendShape,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxBlendShapeChannel>(
  ((FbxBlendShape *) lpjFbxBlendShape)->GetBlendShapeChannel(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// const FbxBlendShapeChannel *  GetBlendShapeChannel (int pIndex) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxBlendShape_GetBlendShapeChannel1(JNIEnv * __env, jclass __jc,jlong lpjFbxBlendShape,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxBlendShapeChannel>(
  ((FbxBlendShape *) lpjFbxBlendShape)->GetBlendShapeChannel(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// EDeformerType  GetDeformerType () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxBlendShape_GetDeformerType(JNIEnv * __env, jclass __jc,jlong lpjFbxBlendShape)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxDeformer::EDeformerType  >(
  ((FbxBlendShape *) lpjFbxBlendShape)->GetDeformerType(
  ));
  return ret;
}
  /// void  Reset ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxBlendShape_Reset(JNIEnv * __env, jclass __jc,jlong lpjFbxBlendShape)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxBlendShape *) lpjFbxBlendShape)->Reset(
  );
}
  /// FbxBlendShape * Create( FbxDeformer* lpFbxDeformer,  const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxBlendShape_Create(JNIEnv * __env, jclass __jc,jlong lpFbxDeformer,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxBlendShape>(
  FbxBlendShape::Create(
  ( FbxDeformer  *)  _lcvt.j2c_object_pt<jlong, FbxDeformer>(lpFbxDeformer)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
