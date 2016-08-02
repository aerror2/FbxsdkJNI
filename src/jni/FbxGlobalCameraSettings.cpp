//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// bool  SetDefaultCamera (const char *pCameraName, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxGlobalCameraSettings_SetDefaultCamera(JNIEnv * __env, jclass __jc,jlong lpjFbxGlobalCameraSettings,jstring pCameraName,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxGlobalCameraSettings *) lpjFbxGlobalCameraSettings)->SetDefaultCamera(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pCameraName)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// const char *  GetDefaultCamera () const
extern "C" JNIEXPORT jstring JNICALL Java_fbxsdk_FbxGlobalCameraSettings_GetDefaultCamera(JNIEnv * __env, jclass __jc,jlong lpjFbxGlobalCameraSettings)
{
  JNILocalConverter _lcvt(__env,__jc);
  jstring ret=(jstring)_lcvt.c2j_string(
  ((FbxGlobalCameraSettings *) lpjFbxGlobalCameraSettings)->GetDefaultCamera(
  ));
  return ret;
}
  /// void  RestoreDefaultSettings ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxGlobalCameraSettings_RestoreDefaultSettings(JNIEnv * __env, jclass __jc,jlong lpjFbxGlobalCameraSettings)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxGlobalCameraSettings *) lpjFbxGlobalCameraSettings)->RestoreDefaultSettings(
  );
}
  /// void  SetDefaultViewingMode (EViewingMode pViewingMode)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxGlobalCameraSettings_SetDefaultViewingMode(JNIEnv * __env, jclass __jc,jlong lpjFbxGlobalCameraSettings,jint pViewingMode)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxGlobalCameraSettings *) lpjFbxGlobalCameraSettings)->SetDefaultViewingMode(
  ( FbxGlobalCameraSettings::EViewingMode  )  _lcvt.j2c<jint,FbxGlobalCameraSettings::EViewingMode >(pViewingMode)
  );
}
  /// EViewingMode  GetDefaultViewingMode () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxGlobalCameraSettings_GetDefaultViewingMode(JNIEnv * __env, jclass __jc,jlong lpjFbxGlobalCameraSettings)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxGlobalCameraSettings::EViewingMode  >(
  ((FbxGlobalCameraSettings *) lpjFbxGlobalCameraSettings)->GetDefaultViewingMode(
  ));
  return ret;
}
  /// void  CreateProducerCameras ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxGlobalCameraSettings_CreateProducerCameras(JNIEnv * __env, jclass __jc,jlong lpjFbxGlobalCameraSettings)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxGlobalCameraSettings *) lpjFbxGlobalCameraSettings)->CreateProducerCameras(
  );
}
  /// void  DestroyProducerCameras ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxGlobalCameraSettings_DestroyProducerCameras(JNIEnv * __env, jclass __jc,jlong lpjFbxGlobalCameraSettings)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxGlobalCameraSettings *) lpjFbxGlobalCameraSettings)->DestroyProducerCameras(
  );
}
  /// bool  IsProducerCamera (FbxCamera *pCamera) const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxGlobalCameraSettings_IsProducerCamera(JNIEnv * __env, jclass __jc,jlong lpjFbxGlobalCameraSettings,jlong pCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxGlobalCameraSettings *) lpjFbxGlobalCameraSettings)->IsProducerCamera(
  ( FbxCamera  *)  _lcvt.j2c_object_pt<jlong, FbxCamera>(pCamera)
  ));
  return ret;
}
  /// FbxCamera *  GetCameraProducerPerspective () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGlobalCameraSettings_GetCameraProducerPerspective(JNIEnv * __env, jclass __jc,jlong lpjFbxGlobalCameraSettings)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxCamera>(
  ((FbxGlobalCameraSettings *) lpjFbxGlobalCameraSettings)->GetCameraProducerPerspective(
  ));
  return ret;
}
  /// FbxCamera *  GetCameraProducerFront () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGlobalCameraSettings_GetCameraProducerFront(JNIEnv * __env, jclass __jc,jlong lpjFbxGlobalCameraSettings)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxCamera>(
  ((FbxGlobalCameraSettings *) lpjFbxGlobalCameraSettings)->GetCameraProducerFront(
  ));
  return ret;
}
  /// FbxCamera *  GetCameraProducerBack () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGlobalCameraSettings_GetCameraProducerBack(JNIEnv * __env, jclass __jc,jlong lpjFbxGlobalCameraSettings)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxCamera>(
  ((FbxGlobalCameraSettings *) lpjFbxGlobalCameraSettings)->GetCameraProducerBack(
  ));
  return ret;
}
  /// FbxCamera *  GetCameraProducerLeft () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGlobalCameraSettings_GetCameraProducerLeft(JNIEnv * __env, jclass __jc,jlong lpjFbxGlobalCameraSettings)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxCamera>(
  ((FbxGlobalCameraSettings *) lpjFbxGlobalCameraSettings)->GetCameraProducerLeft(
  ));
  return ret;
}
  /// FbxCamera *  GetCameraProducerRight () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGlobalCameraSettings_GetCameraProducerRight(JNIEnv * __env, jclass __jc,jlong lpjFbxGlobalCameraSettings)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxCamera>(
  ((FbxGlobalCameraSettings *) lpjFbxGlobalCameraSettings)->GetCameraProducerRight(
  ));
  return ret;
}
  /// FbxCamera *  GetCameraProducerTop () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGlobalCameraSettings_GetCameraProducerTop(JNIEnv * __env, jclass __jc,jlong lpjFbxGlobalCameraSettings)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxCamera>(
  ((FbxGlobalCameraSettings *) lpjFbxGlobalCameraSettings)->GetCameraProducerTop(
  ));
  return ret;
}
  /// FbxCamera *  GetCameraProducerBottom () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGlobalCameraSettings_GetCameraProducerBottom(JNIEnv * __env, jclass __jc,jlong lpjFbxGlobalCameraSettings)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxCamera>(
  ((FbxGlobalCameraSettings *) lpjFbxGlobalCameraSettings)->GetCameraProducerBottom(
  ));
  return ret;
}
  /// FbxCameraSwitcher *  GetCameraSwitcher () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGlobalCameraSettings_GetCameraSwitcher(JNIEnv * __env, jclass __jc,jlong lpjFbxGlobalCameraSettings)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxCameraSwitcher>(
  ((FbxGlobalCameraSettings *) lpjFbxGlobalCameraSettings)->GetCameraSwitcher(
  ));
  return ret;
}
  /// void  SetCameraSwitcher (FbxCameraSwitcher *pSwitcher)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxGlobalCameraSettings_SetCameraSwitcher(JNIEnv * __env, jclass __jc,jlong lpjFbxGlobalCameraSettings,jlong pSwitcher)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxGlobalCameraSettings *) lpjFbxGlobalCameraSettings)->SetCameraSwitcher(
  ( FbxCameraSwitcher  *)  _lcvt.j2c_object_pt<jlong, FbxCameraSwitcher>(pSwitcher)
  );
}
