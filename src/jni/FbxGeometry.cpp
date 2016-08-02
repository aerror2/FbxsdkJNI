
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// virtual FbxNodeAttribute::EType  GetAttributeType () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxGeometry_GetAttributeType(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometry)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxNodeAttribute::EType  >(
  ((FbxGeometry *) lpjFbxGeometry)->GetAttributeType(
  ));
  return ret;
}
  /// int  AddDeformer (FbxDeformer *pDeformer)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxGeometry_AddDeformer(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometry,jlong pDeformer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxGeometry *) lpjFbxGeometry)->AddDeformer(
  ( FbxDeformer  *)  _lcvt.j2c_object_pt<jlong, FbxDeformer>(pDeformer)
  ));
  return ret;
}
  /// FbxDeformer *  RemoveDeformer (int pIndex, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometry_RemoveDeformer(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometry,jint pIndex,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxDeformer>(
  ((FbxGeometry *) lpjFbxGeometry)->RemoveDeformer(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// int  GetDeformerCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxGeometry_GetDeformerCount(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometry)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxGeometry *) lpjFbxGeometry)->GetDeformerCount(
  ));
  return ret;
}
  /// FbxDeformer *  GetDeformer (int pIndex, FbxStatus *pStatus=NULL) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometry_GetDeformer(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometry,jint pIndex,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxDeformer>(
  ((FbxGeometry *) lpjFbxGeometry)->GetDeformer(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// int  GetDeformerCount (FbxDeformer::EDeformerType pType) const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxGeometry_GetDeformerCount1(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometry,jint pType)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxGeometry *) lpjFbxGeometry)->GetDeformerCount(
  ( FbxDeformer::EDeformerType  )  _lcvt.j2c<jint,FbxDeformer::EDeformerType >(pType)
  ));
  return ret;
}
  /// FbxDeformer *  GetDeformer (int pIndex, FbxDeformer::EDeformerType pType, FbxStatus *pStatus=NULL) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometry_GetDeformer1(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometry,jint pIndex,jint pType,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxDeformer>(
  ((FbxGeometry *) lpjFbxGeometry)->GetDeformer(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ,
  ( FbxDeformer::EDeformerType  )  _lcvt.j2c<jint,FbxDeformer::EDeformerType >(pType)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// FbxGeometryWeightedMap *  GetSourceGeometryWeightedMap ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometry_GetSourceGeometryWeightedMap(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometry)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxGeometryWeightedMap>(
  ((FbxGeometry *) lpjFbxGeometry)->GetSourceGeometryWeightedMap(
  ));
  return ret;
}
  /// int  GetDestinationGeometryWeightedMapCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxGeometry_GetDestinationGeometryWeightedMapCount(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometry)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxGeometry *) lpjFbxGeometry)->GetDestinationGeometryWeightedMapCount(
  ));
  return ret;
}
  /// FbxGeometryWeightedMap *  GetDestinationGeometryWeightedMap (int pIndex)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometry_GetDestinationGeometryWeightedMap(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometry,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxGeometryWeightedMap>(
  ((FbxGeometry *) lpjFbxGeometry)->GetDestinationGeometryWeightedMap(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// bool  AddShape (int pBlendShapeIndex, int pBlendShapeChannelIndex, FbxShape *pShape, double pPercent=100, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxGeometry_AddShape(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometry,jint pBlendShapeIndex,jint pBlendShapeChannelIndex,jlong pShape,jdouble pPercent,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxGeometry *) lpjFbxGeometry)->AddShape(
  ( int  )  _lcvt.j2c<jint, int  >(pBlendShapeIndex)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pBlendShapeChannelIndex)
  ,
  ( FbxShape  *)  _lcvt.j2c_object_pt<jlong, FbxShape>(pShape)
  ,
  ( double  )  _lcvt.j2c<jdouble, double  >(pPercent)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// void  ClearShape ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxGeometry_ClearShape(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometry)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxGeometry *) lpjFbxGeometry)->ClearShape(
  );
}
  /// int  GetShapeCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxGeometry_GetShapeCount(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometry)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxGeometry *) lpjFbxGeometry)->GetShapeCount(
  ));
  return ret;
}
  /// int  GetShapeCount (int pBlendShapeIndex, int pBlendShapeChannelIndex, FbxStatus *pStatus=NULL) const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxGeometry_GetShapeCount1(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometry,jint pBlendShapeIndex,jint pBlendShapeChannelIndex,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxGeometry *) lpjFbxGeometry)->GetShapeCount(
  ( int  )  _lcvt.j2c<jint, int  >(pBlendShapeIndex)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pBlendShapeChannelIndex)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// FbxShape *  GetShape (int pBlendShapeIndex, int pBlendShapeChannelIndex, int pShapeIndex, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometry_GetShape(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometry,jint pBlendShapeIndex,jint pBlendShapeChannelIndex,jint pShapeIndex,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxShape>(
  ((FbxGeometry *) lpjFbxGeometry)->GetShape(
  ( int  )  _lcvt.j2c<jint, int  >(pBlendShapeIndex)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pBlendShapeChannelIndex)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pShapeIndex)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// const FbxShape *  GetShape (int pBlendShapeIndex, int pBlendShapeChannelIndex, int pShapeIndex, FbxStatus *pStatus=NULL) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometry_GetShape1(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometry,jint pBlendShapeIndex,jint pBlendShapeChannelIndex,jint pShapeIndex,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxShape>(
  ((FbxGeometry *) lpjFbxGeometry)->GetShape(
  ( int  )  _lcvt.j2c<jint, int  >(pBlendShapeIndex)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pBlendShapeChannelIndex)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pShapeIndex)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// FbxAnimCurve *  GetShapeChannel (int pBlendShapeIndex, int pBlendShapeChannelIndex, FbxAnimLayer *pLayer, bool pCreateAsNeeded=false, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometry_GetShapeChannel(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometry,jint pBlendShapeIndex,jint pBlendShapeChannelIndex,jlong pLayer,jboolean pCreateAsNeeded,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAnimCurve>(
  ((FbxGeometry *) lpjFbxGeometry)->GetShapeChannel(
  ( int  )  _lcvt.j2c<jint, int  >(pBlendShapeIndex)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pBlendShapeChannelIndex)
  ,
  ( FbxAnimLayer  *)  _lcvt.j2c_object_pt<jlong, FbxAnimLayer>(pLayer)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pCreateAsNeeded)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// FbxAMatrix &  GetPivot (FbxAMatrix &pXMatrix) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometry_GetPivot(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometry,jobject pXMatrix)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_ref<jlong, FbxAMatrix>(
  ((FbxGeometry *) lpjFbxGeometry)->GetPivot(
  ( FbxAMatrix  &) * _lcvt.j2c_object_ref<jobject,FbxAMatrix >(pXMatrix)
  ));
  return ret;
}
  /// void  SetPivot (FbxAMatrix &pXMatrix)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxGeometry_SetPivot(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometry,jobject pXMatrix)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxGeometry *) lpjFbxGeometry)->SetPivot(
  ( FbxAMatrix  &) * _lcvt.j2c_object_ref<jobject,FbxAMatrix >(pXMatrix)
  );
}
  /// void  ApplyPivot ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxGeometry_ApplyPivot(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometry)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxGeometry *) lpjFbxGeometry)->ApplyPivot(
  );
}
  /// void  SetDefaultShape (int pBlendShapeIndex, int pBlendShapeChannelIndex, double pPercent)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxGeometry_SetDefaultShape(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometry,jint pBlendShapeIndex,jint pBlendShapeChannelIndex,jdouble pPercent)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxGeometry *) lpjFbxGeometry)->SetDefaultShape(
  ( int  )  _lcvt.j2c<jint, int  >(pBlendShapeIndex)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pBlendShapeChannelIndex)
  ,
  ( double  )  _lcvt.j2c<jdouble, double  >(pPercent)
  );
}
  /// void  SetDefaultShape (FbxBlendShapeChannel *pBlendShapeChannel, double pPercent)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxGeometry_SetDefaultShape1(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometry,jlong pBlendShapeChannel,jdouble pPercent)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxGeometry *) lpjFbxGeometry)->SetDefaultShape(
  ( FbxBlendShapeChannel  *)  _lcvt.j2c_object_pt<jlong, FbxBlendShapeChannel>(pBlendShapeChannel)
  ,
  ( double  )  _lcvt.j2c<jdouble, double  >(pPercent)
  );
}
  /// double  GetDefaultShape (int pBlendShapeIndex, int pBlendShapeChannelIndex) const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxGeometry_GetDefaultShape(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometry,jint pBlendShapeIndex,jint pBlendShapeChannelIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxGeometry *) lpjFbxGeometry)->GetDefaultShape(
  ( int  )  _lcvt.j2c<jint, int  >(pBlendShapeIndex)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pBlendShapeChannelIndex)
  ));
  return ret;
}
  /// double  GetDefaultShape (FbxBlendShapeChannel *pBlendShapeChannel) const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxGeometry_GetDefaultShape1(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometry,jlong pBlendShapeChannel)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxGeometry *) lpjFbxGeometry)->GetDefaultShape(
  ( FbxBlendShapeChannel  *)  _lcvt.j2c_object_pt<jlong, FbxBlendShapeChannel>(pBlendShapeChannel)
  ));
  return ret;
}
  /// FbxGeometry * Create( FbxGeometryBase* lpFbxGeometryBase,  const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometry_Create(JNIEnv * __env, jclass __jc,jlong lpFbxGeometryBase,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxGeometry>(
  FbxGeometry::Create(
  ( FbxGeometryBase  *)  _lcvt.j2c_object_pt<jlong, FbxGeometryBase>(lpFbxGeometryBase)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
