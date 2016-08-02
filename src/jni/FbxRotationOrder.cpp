//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxRotationOrder (int pOrder=FbxEuler::eOrderXYZ)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxRotationOrder_meCreate(JNIEnv * __env, jclass __jc,jint pOrder)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxRotationOrder>(
  new FbxRotationOrder(
  ( FbxEuler::EOrder  )  _lcvt.j2c<jint, int  >(pOrder)
  ));
  return ret;
}
  /// int  GetOrder ()
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxRotationOrder_GetOrder(JNIEnv * __env, jclass __jc,jlong lpjFbxRotationOrder)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxRotationOrder *) lpjFbxRotationOrder)->GetOrder(
  ));
  return ret;
}
  /// void  SetOrder (int pOrder)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxRotationOrder_SetOrder(JNIEnv * __env, jclass __jc,jlong lpjFbxRotationOrder,jint pOrder)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxRotationOrder *) lpjFbxRotationOrder)->SetOrder(
  ( FbxEuler::EOrder  )  _lcvt.j2c<jint, int  >(pOrder)
  );
}
  /// void  V2M (FbxAMatrix &pRM, const FbxVector4 &pV)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxRotationOrder_V2M(JNIEnv * __env, jclass __jc,jlong lpjFbxRotationOrder,jobject pRM,jobject pV)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxRotationOrder *) lpjFbxRotationOrder)->V2M(
  ( FbxAMatrix  &) * _lcvt.j2c_object_ref<jobject,FbxAMatrix >(pRM)
  ,
  (const FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pV)
  );
}
  /// void  M2V (FbxVector4 &pV, FbxAMatrix &pRM)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxRotationOrder_M2V(JNIEnv * __env, jclass __jc,jlong lpjFbxRotationOrder,jobject pV,jobject pRM)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxRotationOrder *) lpjFbxRotationOrder)->M2V(
  ( FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pV)
  ,
  ( FbxAMatrix  &) * _lcvt.j2c_object_ref<jobject,FbxAMatrix >(pRM)
  );
}
  /// bool  V2VRef (FbxVector4 &pVOut, FbxVector4 &pVIn, FbxVector4 &pVRef)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxRotationOrder_V2VRef(JNIEnv * __env, jclass __jc,jlong lpjFbxRotationOrder,jobject pVOut,jobject pVIn,jobject pVRef)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxRotationOrder *) lpjFbxRotationOrder)->V2VRef(
  ( FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pVOut)
  ,
  ( FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pVIn)
  ,
  ( FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pVRef)
  ));
  return ret;
}
  /// void meDestroy(FbxRotationOrder * lpFbxRotationOrder)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxRotationOrder_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxRotationOrder)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxRotationOrder *) lpjFbxRotationOrder
  );
}
