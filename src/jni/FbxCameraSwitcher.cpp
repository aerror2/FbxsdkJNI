//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// virtual FbxNodeAttribute::EType  GetAttributeType () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxCameraSwitcher_GetAttributeType(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraSwitcher)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxNodeAttribute::EType  >(
  ((FbxCameraSwitcher *) lpjFbxCameraSwitcher)->GetAttributeType(
  ));
  return ret;
}
  /// int  GetDefaultCameraIndex () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxCameraSwitcher_GetDefaultCameraIndex(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraSwitcher)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxCameraSwitcher *) lpjFbxCameraSwitcher)->GetDefaultCameraIndex(
  ));
  return ret;
}
  /// void  SetDefaultCameraIndex (int pIndex)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCameraSwitcher_SetDefaultCameraIndex(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraSwitcher,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCameraSwitcher *) lpjFbxCameraSwitcher)->SetDefaultCameraIndex(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  );
}
  /// FbxPropertyT< FbxInt >  CameraIndex
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCameraSwitcher_mepSetCameraIndex(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraSwitcher,jint lpFbxInt)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCameraSwitcher *) lpjFbxCameraSwitcher)->CameraIndex.Set(
  ( FbxInt  )  _lcvt.j2c<jint, FbxInt  >(lpFbxInt)
  );
}
  /// FbxPropertyT< FbxInt >  CameraIndex
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxCameraSwitcher_mepGetCameraIndex(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraSwitcher)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxInt  >(
  ((FbxCameraSwitcher *) lpjFbxCameraSwitcher)->CameraIndex.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxInt >  CameraIndex
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCameraSwitcher_mptGetCameraIndex(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraSwitcher)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxInt   >(
   (&((FbxCameraSwitcher *) lpjFbxCameraSwitcher)->CameraIndex
  ));
  return ret;
}
  /// FbxCameraSwitcher * Create( FbxNodeAttribute* lpFbxNodeAttribute,  const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCameraSwitcher_Create(JNIEnv * __env, jclass __jc,jlong lpFbxNodeAttribute,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxCameraSwitcher>(
  FbxCameraSwitcher::Create(
  ( FbxNodeAttribute  *)  _lcvt.j2c_object_pt<jlong, FbxNodeAttribute>(lpFbxNodeAttribute)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
