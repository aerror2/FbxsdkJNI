//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// virtual FbxNodeAttribute::EType  GetAttributeType () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxCameraStereo_GetAttributeType(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraStereo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxNodeAttribute::EType  >(
  ((FbxCameraStereo *) lpjFbxCameraStereo)->GetAttributeType(
  ));
  return ret;
}
  /// void  Reset ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCameraStereo_Reset(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraStereo)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCameraStereo *) lpjFbxCameraStereo)->Reset(
  );
}
  /// FbxCamera *  GetLeftCamera () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCameraStereo_GetLeftCamera(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraStereo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxCamera>(
  ((FbxCameraStereo *) lpjFbxCameraStereo)->GetLeftCamera(
  ));
  return ret;
}
  /// FbxCamera *  GetRightCamera () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCameraStereo_GetRightCamera(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraStereo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxCamera>(
  ((FbxCameraStereo *) lpjFbxCameraStereo)->GetRightCamera(
  ));
  return ret;
}
  /// bool  SetLeftCamera (FbxCamera *pCamera)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCameraStereo_SetLeftCamera(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraStereo,jlong pCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxCameraStereo *) lpjFbxCameraStereo)->SetLeftCamera(
  ( FbxCamera  *)  _lcvt.j2c_object_pt<jlong, FbxCamera>(pCamera)
  ));
  return ret;
}
  /// bool  SetRightCamera (FbxCamera *pCamera)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCameraStereo_SetRightCamera(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraStereo,jlong pCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxCameraStereo *) lpjFbxCameraStereo)->SetRightCamera(
  ( FbxCamera  *)  _lcvt.j2c_object_pt<jlong, FbxCamera>(pCamera)
  ));
  return ret;
}
  /// FbxAMatrix  GetLeftCameraLocalMatrix () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCameraStereo_GetLeftCameraLocalMatrix(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraStereo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxAMatrix>(
  ((FbxCameraStereo *) lpjFbxCameraStereo)->GetLeftCameraLocalMatrix(
  ));
  return ret;
}
  /// FbxAMatrix  GetLeftCameraGlobalMatrix () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCameraStereo_GetLeftCameraGlobalMatrix(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraStereo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxAMatrix>(
  ((FbxCameraStereo *) lpjFbxCameraStereo)->GetLeftCameraGlobalMatrix(
  ));
  return ret;
}
  /// FbxAMatrix  GetRightCameraLocalMatrix () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCameraStereo_GetRightCameraLocalMatrix(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraStereo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxAMatrix>(
  ((FbxCameraStereo *) lpjFbxCameraStereo)->GetRightCameraLocalMatrix(
  ));
  return ret;
}
  /// FbxAMatrix  GetRightCameraGlobalMatrix () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCameraStereo_GetRightCameraGlobalMatrix(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraStereo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxAMatrix>(
  ((FbxCameraStereo *) lpjFbxCameraStereo)->GetRightCameraGlobalMatrix(
  ));
  return ret;
}
  /// double  ReevaluateLeftCameraFilmOffsetX () const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCameraStereo_ReevaluateLeftCameraFilmOffsetX(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraStereo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxCameraStereo *) lpjFbxCameraStereo)->ReevaluateLeftCameraFilmOffsetX(
  ));
  return ret;
}
  /// double  ReevaluateRightCameraFilmOffsetX () const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCameraStereo_ReevaluateRightCameraFilmOffsetX(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraStereo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxCameraStereo *) lpjFbxCameraStereo)->ReevaluateRightCameraFilmOffsetX(
  ));
  return ret;
}
  /// bool  ConnectProperties ()
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCameraStereo_ConnectProperties(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraStereo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxCameraStereo *) lpjFbxCameraStereo)->ConnectProperties(
  ));
  return ret;
}
  /// FbxPropertyT< EStereoType >  Stereo
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCameraStereo_mepSetStereo(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraStereo,jint lpEStereoType)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCameraStereo *) lpjFbxCameraStereo)->Stereo.Set(
  ( FbxCameraStereo::EStereoType  )  _lcvt.j2c<jint,FbxCameraStereo::EStereoType >(lpEStereoType)
  );
}
  /// FbxPropertyT< EStereoType >  Stereo
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxCameraStereo_mepGetStereo(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraStereo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxCameraStereo::EStereoType  >(
  ((FbxCameraStereo *) lpjFbxCameraStereo)->Stereo.Get(
  ));
  return ret;
}
  /// FbxPropertyT< EStereoType >  Stereo
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCameraStereo_mptGetStereo(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraStereo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxCameraStereo::EStereoType   >(
   (&((FbxCameraStereo *) lpjFbxCameraStereo)->Stereo
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  InteraxialSeparation
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCameraStereo_mepSetInteraxialSeparation(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraStereo,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCameraStereo *) lpjFbxCameraStereo)->InteraxialSeparation.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  InteraxialSeparation
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCameraStereo_mepGetInteraxialSeparation(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraStereo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCameraStereo *) lpjFbxCameraStereo)->InteraxialSeparation.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  InteraxialSeparation
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCameraStereo_mptGetInteraxialSeparation(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraStereo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCameraStereo *) lpjFbxCameraStereo)->InteraxialSeparation
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  ZeroParallax
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCameraStereo_mepSetZeroParallax(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraStereo,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCameraStereo *) lpjFbxCameraStereo)->ZeroParallax.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  ZeroParallax
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCameraStereo_mepGetZeroParallax(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraStereo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCameraStereo *) lpjFbxCameraStereo)->ZeroParallax.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  ZeroParallax
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCameraStereo_mptGetZeroParallax(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraStereo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCameraStereo *) lpjFbxCameraStereo)->ZeroParallax
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  ToeInAdjust
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCameraStereo_mepSetToeInAdjust(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraStereo,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCameraStereo *) lpjFbxCameraStereo)->ToeInAdjust.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  ToeInAdjust
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCameraStereo_mepGetToeInAdjust(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraStereo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCameraStereo *) lpjFbxCameraStereo)->ToeInAdjust.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  ToeInAdjust
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCameraStereo_mptGetToeInAdjust(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraStereo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCameraStereo *) lpjFbxCameraStereo)->ToeInAdjust
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FilmOffsetRightCam
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCameraStereo_mepSetFilmOffsetRightCam(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraStereo,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCameraStereo *) lpjFbxCameraStereo)->FilmOffsetRightCam.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  FilmOffsetRightCam
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCameraStereo_mepGetFilmOffsetRightCam(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraStereo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCameraStereo *) lpjFbxCameraStereo)->FilmOffsetRightCam.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FilmOffsetRightCam
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCameraStereo_mptGetFilmOffsetRightCam(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraStereo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCameraStereo *) lpjFbxCameraStereo)->FilmOffsetRightCam
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FilmOffsetLeftCam
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCameraStereo_mepSetFilmOffsetLeftCam(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraStereo,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCameraStereo *) lpjFbxCameraStereo)->FilmOffsetLeftCam.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  FilmOffsetLeftCam
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCameraStereo_mepGetFilmOffsetLeftCam(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraStereo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCameraStereo *) lpjFbxCameraStereo)->FilmOffsetLeftCam.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FilmOffsetLeftCam
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCameraStereo_mptGetFilmOffsetLeftCam(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraStereo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCameraStereo *) lpjFbxCameraStereo)->FilmOffsetLeftCam
  ));
  return ret;
}
  /// FbxPropertyT< FbxReference >  RightCamera
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCameraStereo_mepSetRightCamera(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraStereo,jlong lpFbxReference)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCameraStereo *) lpjFbxCameraStereo)->RightCamera.Set(
  ( FbxReference  )  _lcvt.j2c<jlong, FbxReference  >(lpFbxReference)
  );
}
  /// FbxPropertyT< FbxReference >  RightCamera
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCameraStereo_mepGetRightCamera(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraStereo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j<jlong,  FbxReference  >(
  ((FbxCameraStereo *) lpjFbxCameraStereo)->RightCamera.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxReference >  RightCamera
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCameraStereo_mptGetRightCamera(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraStereo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxReference   >(
   (&((FbxCameraStereo *) lpjFbxCameraStereo)->RightCamera
  ));
  return ret;
}
  /// FbxPropertyT< FbxReference >  LeftCamera
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCameraStereo_mepSetLeftCamera(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraStereo,jlong lpFbxReference)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCameraStereo *) lpjFbxCameraStereo)->LeftCamera.Set(
  ( FbxReference  )  _lcvt.j2c<jlong, FbxReference  >(lpFbxReference)
  );
}
  /// FbxPropertyT< FbxReference >  LeftCamera
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCameraStereo_mepGetLeftCamera(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraStereo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j<jlong,  FbxReference  >(
  ((FbxCameraStereo *) lpjFbxCameraStereo)->LeftCamera.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxReference >  LeftCamera
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCameraStereo_mptGetLeftCamera(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraStereo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxReference   >(
   (&((FbxCameraStereo *) lpjFbxCameraStereo)->LeftCamera
  ));
  return ret;
}
  /// FbxPropertyT< FbxString >  PrecompFileName
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCameraStereo_mepSetPrecompFileName(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraStereo,jlong lpFbxString)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCameraStereo *) lpjFbxCameraStereo)->PrecompFileName.Set(
  ( FbxString  )  _lcvt.j2c_object<jlong,FbxString >(lpFbxString)
  );
}
  /// FbxPropertyT< FbxString >  PrecompFileName
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCameraStereo_mepGetPrecompFileName(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraStereo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxString>(
  ((FbxCameraStereo *) lpjFbxCameraStereo)->PrecompFileName.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxString >  PrecompFileName
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCameraStereo_mptGetPrecompFileName(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraStereo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxString   >(
   (&((FbxCameraStereo *) lpjFbxCameraStereo)->PrecompFileName
  ));
  return ret;
}
  /// FbxPropertyT< FbxString >  RelativePrecompFileName
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCameraStereo_mepSetRelativePrecompFileName(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraStereo,jlong lpFbxString)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCameraStereo *) lpjFbxCameraStereo)->RelativePrecompFileName.Set(
  ( FbxString  )  _lcvt.j2c_object<jlong,FbxString >(lpFbxString)
  );
}
  /// FbxPropertyT< FbxString >  RelativePrecompFileName
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCameraStereo_mepGetRelativePrecompFileName(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraStereo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxString>(
  ((FbxCameraStereo *) lpjFbxCameraStereo)->RelativePrecompFileName.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxString >  RelativePrecompFileName
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCameraStereo_mptGetRelativePrecompFileName(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraStereo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxString   >(
   (&((FbxCameraStereo *) lpjFbxCameraStereo)->RelativePrecompFileName
  ));
  return ret;
}
  /// FbxCameraStereo * Create( FbxCamera* lpFbxCamera,  const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCameraStereo_Create(JNIEnv * __env, jclass __jc,jlong lpFbxCamera,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxCameraStereo>(
  FbxCameraStereo::Create(
  ( FbxCamera  *)  _lcvt.j2c_object_pt<jlong, FbxCamera>(lpFbxCamera)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
