//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// bool  SetBlendShapeDeformer (FbxBlendShape *pBlendShape)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxBlendShapeChannel_SetBlendShapeDeformer(JNIEnv * __env, jclass __jc,jlong lpjFbxBlendShapeChannel,jlong pBlendShape)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxBlendShapeChannel *) lpjFbxBlendShapeChannel)->SetBlendShapeDeformer(
  ( FbxBlendShape  *)  _lcvt.j2c_object_pt<jlong, FbxBlendShape>(pBlendShape)
  ));
  return ret;
}
  /// FbxBlendShape *  GetBlendShapeDeformer ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxBlendShapeChannel_GetBlendShapeDeformer(JNIEnv * __env, jclass __jc,jlong lpjFbxBlendShapeChannel)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxBlendShape>(
  ((FbxBlendShapeChannel *) lpjFbxBlendShapeChannel)->GetBlendShapeDeformer(
  ));
  return ret;
}
  /// bool  AddTargetShape (FbxShape *pShape, double pFullDeformPercent=100)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxBlendShapeChannel_AddTargetShape(JNIEnv * __env, jclass __jc,jlong lpjFbxBlendShapeChannel,jlong pShape,jdouble pFullDeformPercent)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxBlendShapeChannel *) lpjFbxBlendShapeChannel)->AddTargetShape(
  ( FbxShape  *)  _lcvt.j2c_object_pt<jlong, FbxShape>(pShape)
  ,
  ( double  )  _lcvt.j2c<jdouble, double  >(pFullDeformPercent)
  ));
  return ret;
}
  /// FbxShape *  RemoveTargetShape (FbxShape *pShape)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxBlendShapeChannel_RemoveTargetShape(JNIEnv * __env, jclass __jc,jlong lpjFbxBlendShapeChannel,jlong pShape)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxShape>(
  ((FbxBlendShapeChannel *) lpjFbxBlendShapeChannel)->RemoveTargetShape(
  ( FbxShape  *)  _lcvt.j2c_object_pt<jlong, FbxShape>(pShape)
  ));
  return ret;
}
  /// int  GetTargetShapeCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxBlendShapeChannel_GetTargetShapeCount(JNIEnv * __env, jclass __jc,jlong lpjFbxBlendShapeChannel)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxBlendShapeChannel *) lpjFbxBlendShapeChannel)->GetTargetShapeCount(
  ));
  return ret;
}
  /// FbxShape *  GetTargetShape (int pIndex)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxBlendShapeChannel_GetTargetShape(JNIEnv * __env, jclass __jc,jlong lpjFbxBlendShapeChannel,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxShape>(
  ((FbxBlendShapeChannel *) lpjFbxBlendShapeChannel)->GetTargetShape(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// const FbxShape *  GetTargetShape (int pIndex) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxBlendShapeChannel_GetTargetShape1(JNIEnv * __env, jclass __jc,jlong lpjFbxBlendShapeChannel,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxShape>(
  ((FbxBlendShapeChannel *) lpjFbxBlendShapeChannel)->GetTargetShape(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// int  GetTargetShapeIndex (FbxShape *pShape)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxBlendShapeChannel_GetTargetShapeIndex(JNIEnv * __env, jclass __jc,jlong lpjFbxBlendShapeChannel,jlong pShape)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxBlendShapeChannel *) lpjFbxBlendShapeChannel)->GetTargetShapeIndex(
  ( FbxShape  *)  _lcvt.j2c_object_pt<jlong, FbxShape>(pShape)
  ));
  return ret;
}
  /// double *  GetTargetShapeFullWeights ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxBlendShapeChannel_GetTargetShapeFullWeights(JNIEnv * __env, jclass __jc,jlong lpjFbxBlendShapeChannel)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_pt<jlong,  double  *>(
  ((FbxBlendShapeChannel *) lpjFbxBlendShapeChannel)->GetTargetShapeFullWeights(
  ));
  return ret;
}
  /// void  SetFullWeightsCount (int pCount)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxBlendShapeChannel_SetFullWeightsCount(JNIEnv * __env, jclass __jc,jlong lpjFbxBlendShapeChannel,jint pCount)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxBlendShapeChannel *) lpjFbxBlendShapeChannel)->SetFullWeightsCount(
  ( int  )  _lcvt.j2c<jint, int  >(pCount)
  );
}
  /// EType  GetSubDeformerType () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxBlendShapeChannel_GetSubDeformerType(JNIEnv * __env, jclass __jc,jlong lpjFbxBlendShapeChannel)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxBlendShapeChannel::EType  >(
  ((FbxBlendShapeChannel *) lpjFbxBlendShapeChannel)->GetSubDeformerType(
  ));
  return ret;
}
  /// void  Reset ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxBlendShapeChannel_Reset(JNIEnv * __env, jclass __jc,jlong lpjFbxBlendShapeChannel)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxBlendShapeChannel *) lpjFbxBlendShapeChannel)->Reset(
  );
}
  /// FbxPropertyT< FbxDouble >  DeformPercent
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxBlendShapeChannel_mepSetDeformPercent(JNIEnv * __env, jclass __jc,jlong lpjFbxBlendShapeChannel,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxBlendShapeChannel *) lpjFbxBlendShapeChannel)->DeformPercent.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  DeformPercent
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxBlendShapeChannel_mepGetDeformPercent(JNIEnv * __env, jclass __jc,jlong lpjFbxBlendShapeChannel)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxBlendShapeChannel *) lpjFbxBlendShapeChannel)->DeformPercent.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  DeformPercent
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxBlendShapeChannel_mptGetDeformPercent(JNIEnv * __env, jclass __jc,jlong lpjFbxBlendShapeChannel)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxBlendShapeChannel *) lpjFbxBlendShapeChannel)->DeformPercent
  ));
  return ret;
}
  /// FbxBlendShapeChannel * Create( FbxSubDeformer* lpFbxSubDeformer,  const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxBlendShapeChannel_Create(JNIEnv * __env, jclass __jc,jlong lpFbxSubDeformer,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxBlendShapeChannel>(
  FbxBlendShapeChannel::Create(
  ( FbxSubDeformer  *)  _lcvt.j2c_object_pt<jlong, FbxSubDeformer>(lpFbxSubDeformer)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
