//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// virtual FbxNodeAttribute::EType  GetAttributeType () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxCamera_GetAttributeType(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxNodeAttribute::EType  >(
  ((FbxCamera *) lpjFbxCamera)->GetAttributeType(
  ));
  return ret;
}
  /// void  Reset ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_Reset(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->Reset(
  );
}
  /// void  SetFormat (EFormat pFormat)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_SetFormat(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jint pFormat)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->SetFormat(
  ( FbxCamera::EFormat  )  _lcvt.j2c<jint,FbxCamera::EFormat >(pFormat)
  );
}
  /// EFormat  GetFormat () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxCamera_GetFormat(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxCamera::EFormat  >(
  ((FbxCamera *) lpjFbxCamera)->GetFormat(
  ));
  return ret;
}
  /// void  SetAspect (EAspectRatioMode pRatioMode, double pWidth, double pHeight)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_SetAspect(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jint pRatioMode,jdouble pWidth,jdouble pHeight)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->SetAspect(
  ( FbxCamera::EAspectRatioMode  )  _lcvt.j2c<jint,FbxCamera::EAspectRatioMode >(pRatioMode)
  ,
  ( double  )  _lcvt.j2c<jdouble, double  >(pWidth)
  ,
  ( double  )  _lcvt.j2c<jdouble, double  >(pHeight)
  );
}
  /// EAspectRatioMode  GetAspectRatioMode () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxCamera_GetAspectRatioMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxCamera::EAspectRatioMode  >(
  ((FbxCamera *) lpjFbxCamera)->GetAspectRatioMode(
  ));
  return ret;
}
  /// void  SetPixelRatio (double pRatio)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_SetPixelRatio(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jdouble pRatio)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->SetPixelRatio(
  ( double  )  _lcvt.j2c<jdouble, double  >(pRatio)
  );
}
  /// double  GetPixelRatio () const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCamera_GetPixelRatio(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxCamera *) lpjFbxCamera)->GetPixelRatio(
  ));
  return ret;
}
  /// void  SetNearPlane (double pDistance)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_SetNearPlane(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jdouble pDistance)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->SetNearPlane(
  ( double  )  _lcvt.j2c<jdouble, double  >(pDistance)
  );
}
  /// double  GetNearPlane () const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCamera_GetNearPlane(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxCamera *) lpjFbxCamera)->GetNearPlane(
  ));
  return ret;
}
  /// void  SetFarPlane (double pDistance)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_SetFarPlane(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jdouble pDistance)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->SetFarPlane(
  ( double  )  _lcvt.j2c<jdouble, double  >(pDistance)
  );
}
  /// double  GetFarPlane () const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCamera_GetFarPlane(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxCamera *) lpjFbxCamera)->GetFarPlane(
  ));
  return ret;
}
  /// void  SetApertureFormat (EApertureFormat pFormat)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_SetApertureFormat(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jint pFormat)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->SetApertureFormat(
  ( FbxCamera::EApertureFormat  )  _lcvt.j2c<jint,FbxCamera::EApertureFormat >(pFormat)
  );
}
  /// EApertureFormat  GetApertureFormat () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxCamera_GetApertureFormat(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxCamera::EApertureFormat  >(
  ((FbxCamera *) lpjFbxCamera)->GetApertureFormat(
  ));
  return ret;
}
  /// void  SetApertureMode (EApertureMode pMode)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_SetApertureMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jint pMode)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->SetApertureMode(
  ( FbxCamera::EApertureMode  )  _lcvt.j2c<jint,FbxCamera::EApertureMode >(pMode)
  );
}
  /// EApertureMode  GetApertureMode () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxCamera_GetApertureMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxCamera::EApertureMode  >(
  ((FbxCamera *) lpjFbxCamera)->GetApertureMode(
  ));
  return ret;
}
  /// void  SetApertureWidth (double pWidth)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_SetApertureWidth(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jdouble pWidth)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->SetApertureWidth(
  ( double  )  _lcvt.j2c<jdouble, double  >(pWidth)
  );
}
  /// double  GetApertureWidth () const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCamera_GetApertureWidth(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxCamera *) lpjFbxCamera)->GetApertureWidth(
  ));
  return ret;
}
  /// void  SetApertureHeight (double pHeight)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_SetApertureHeight(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jdouble pHeight)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->SetApertureHeight(
  ( double  )  _lcvt.j2c<jdouble, double  >(pHeight)
  );
}
  /// double  GetApertureHeight () const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCamera_GetApertureHeight(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxCamera *) lpjFbxCamera)->GetApertureHeight(
  ));
  return ret;
}
  /// void  SetSqueezeRatio (double pRatio)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_SetSqueezeRatio(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jdouble pRatio)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->SetSqueezeRatio(
  ( double  )  _lcvt.j2c<jdouble, double  >(pRatio)
  );
}
  /// double  GetSqueezeRatio () const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCamera_GetSqueezeRatio(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxCamera *) lpjFbxCamera)->GetSqueezeRatio(
  ));
  return ret;
}
  /// double  ComputeFieldOfView (double pFocalLength) const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCamera_ComputeFieldOfView(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jdouble pFocalLength)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxCamera *) lpjFbxCamera)->ComputeFieldOfView(
  ( double  )  _lcvt.j2c<jdouble, double  >(pFocalLength)
  ));
  return ret;
}
  /// double  ComputeFocalLength (double pAngleOfView) const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCamera_ComputeFocalLength(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jdouble pAngleOfView)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxCamera *) lpjFbxCamera)->ComputeFocalLength(
  ( double  )  _lcvt.j2c<jdouble, double  >(pAngleOfView)
  ));
  return ret;
}
  /// void  SetBackgroundFileName (const char *pFileName)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_SetBackgroundFileName(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jstring pFileName)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->SetBackgroundFileName(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pFileName)
  );
}
  /// const char *  GetBackgroundFileName () const
extern "C" JNIEXPORT jstring JNICALL Java_fbxsdk_FbxCamera_GetBackgroundFileName(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jstring ret=(jstring)_lcvt.c2j_string(
  ((FbxCamera *) lpjFbxCamera)->GetBackgroundFileName(
  ));
  return ret;
}
  /// void  SetBackgroundMediaName (const char *pFileName)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_SetBackgroundMediaName(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jstring pFileName)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->SetBackgroundMediaName(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pFileName)
  );
}
  /// const char *  GetBackgroundMediaName () const
extern "C" JNIEXPORT jstring JNICALL Java_fbxsdk_FbxCamera_GetBackgroundMediaName(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jstring ret=(jstring)_lcvt.c2j_string(
  ((FbxCamera *) lpjFbxCamera)->GetBackgroundMediaName(
  ));
  return ret;
}
  /// void  SetForegroundFileName (const char *pFileName)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_SetForegroundFileName(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jstring pFileName)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->SetForegroundFileName(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pFileName)
  );
}
  /// const char *  GetForegroundFileName () const
extern "C" JNIEXPORT jstring JNICALL Java_fbxsdk_FbxCamera_GetForegroundFileName(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jstring ret=(jstring)_lcvt.c2j_string(
  ((FbxCamera *) lpjFbxCamera)->GetForegroundFileName(
  ));
  return ret;
}
  /// void  SetForegroundMediaName (const char *pFileName)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_SetForegroundMediaName(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jstring pFileName)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->SetForegroundMediaName(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pFileName)
  );
}
  /// const char *  GetForegroundMediaName () const
extern "C" JNIEXPORT jstring JNICALL Java_fbxsdk_FbxCamera_GetForegroundMediaName(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jstring ret=(jstring)_lcvt.c2j_string(
  ((FbxCamera *) lpjFbxCamera)->GetForegroundMediaName(
  ));
  return ret;
}
  /// void  SetBackgroundAlphaTreshold (double pThreshold)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_SetBackgroundAlphaTreshold(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jdouble pThreshold)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->SetBackgroundAlphaTreshold(
  ( double  )  _lcvt.j2c<jdouble, double  >(pThreshold)
  );
}
  /// double  GetBackgroundAlphaTreshold () const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCamera_GetBackgroundAlphaTreshold(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxCamera *) lpjFbxCamera)->GetBackgroundAlphaTreshold(
  ));
  return ret;
}
  /// void  SetBackPlateFitImage (bool pFitImage)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_SetBackPlateFitImage(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jboolean pFitImage)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->SetBackPlateFitImage(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pFitImage)
  );
}
  /// bool  GetBackPlateFitImage () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCamera_GetBackPlateFitImage(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxCamera *) lpjFbxCamera)->GetBackPlateFitImage(
  ));
  return ret;
}
  /// void  SetBackPlateCrop (bool pCrop)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_SetBackPlateCrop(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jboolean pCrop)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->SetBackPlateCrop(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pCrop)
  );
}
  /// bool  GetBackPlateCrop () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCamera_GetBackPlateCrop(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxCamera *) lpjFbxCamera)->GetBackPlateCrop(
  ));
  return ret;
}
  /// void  SetBackPlateCenter (bool pCenter)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_SetBackPlateCenter(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jboolean pCenter)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->SetBackPlateCenter(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pCenter)
  );
}
  /// bool  GetBackPlateCenter () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCamera_GetBackPlateCenter(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxCamera *) lpjFbxCamera)->GetBackPlateCenter(
  ));
  return ret;
}
  /// void  SetBackPlateKeepRatio (bool pKeepRatio)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_SetBackPlateKeepRatio(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jboolean pKeepRatio)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->SetBackPlateKeepRatio(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pKeepRatio)
  );
}
  /// bool  GetBackPlateKeepRatio () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCamera_GetBackPlateKeepRatio(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxCamera *) lpjFbxCamera)->GetBackPlateKeepRatio(
  ));
  return ret;
}
  /// void  SetShowFrontPlate (bool pEnable)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_SetShowFrontPlate(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jboolean pEnable)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->SetShowFrontPlate(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pEnable)
  );
}
  /// bool  GetShowFrontPlate () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCamera_GetShowFrontPlate(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxCamera *) lpjFbxCamera)->GetShowFrontPlate(
  ));
  return ret;
}
  /// void  SetFrontPlateFitImage (bool pFrontPlateFitImage)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_SetFrontPlateFitImage(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jboolean pFrontPlateFitImage)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->SetFrontPlateFitImage(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pFrontPlateFitImage)
  );
}
  /// bool  GetFrontPlateFitImage () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCamera_GetFrontPlateFitImage(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxCamera *) lpjFbxCamera)->GetFrontPlateFitImage(
  ));
  return ret;
}
  /// void  SetFrontPlateCrop (bool pFrontPlateCrop)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_SetFrontPlateCrop(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jboolean pFrontPlateCrop)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->SetFrontPlateCrop(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pFrontPlateCrop)
  );
}
  /// bool  GetFrontPlateCrop () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCamera_GetFrontPlateCrop(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxCamera *) lpjFbxCamera)->GetFrontPlateCrop(
  ));
  return ret;
}
  /// void  SetFrontPlateCenter (bool pFrontPlateCenter)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_SetFrontPlateCenter(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jboolean pFrontPlateCenter)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->SetFrontPlateCenter(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pFrontPlateCenter)
  );
}
  /// bool  GetFrontPlateCenter () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCamera_GetFrontPlateCenter(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxCamera *) lpjFbxCamera)->GetFrontPlateCenter(
  ));
  return ret;
}
  /// void  SetFrontPlateKeepRatio (bool pFrontPlateKeepRatio)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_SetFrontPlateKeepRatio(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jboolean pFrontPlateKeepRatio)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->SetFrontPlateKeepRatio(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pFrontPlateKeepRatio)
  );
}
  /// bool  GetFrontPlateKeepRatio () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCamera_GetFrontPlateKeepRatio(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxCamera *) lpjFbxCamera)->GetFrontPlateKeepRatio(
  ));
  return ret;
}
  /// void  SetForegroundOpacity (double pOpacity)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_SetForegroundOpacity(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jdouble pOpacity)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->SetForegroundOpacity(
  ( double  )  _lcvt.j2c<jdouble, double  >(pOpacity)
  );
}
  /// double  GetForegroundOpacity () const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCamera_GetForegroundOpacity(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxCamera *) lpjFbxCamera)->GetForegroundOpacity(
  ));
  return ret;
}
  /// void  SetForegroundTexture (FbxTexture *pTexture)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_SetForegroundTexture(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jlong pTexture)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->SetForegroundTexture(
  ( FbxTexture  *)  _lcvt.j2c_object_pt<jlong, FbxTexture>(pTexture)
  );
}
  /// FbxTexture *  GetForegroundTexture () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_GetForegroundTexture(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxTexture>(
  ((FbxCamera *) lpjFbxCamera)->GetForegroundTexture(
  ));
  return ret;
}
  /// void  SetBackPlaneDistanceMode (EFrontBackPlaneDistanceMode pMode)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_SetBackPlaneDistanceMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jint pMode)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->SetBackPlaneDistanceMode(
  ( FbxCamera::EFrontBackPlaneDistanceMode  )  _lcvt.j2c<jint,FbxCamera::EFrontBackPlaneDistanceMode >(pMode)
  );
}
  /// EFrontBackPlaneDistanceMode  GetBackPlaneDistanceMode () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxCamera_GetBackPlaneDistanceMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxCamera::EFrontBackPlaneDistanceMode  >(
  ((FbxCamera *) lpjFbxCamera)->GetBackPlaneDistanceMode(
  ));
  return ret;
}
  /// void  SetFrontPlaneDistance (double pDistance)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_SetFrontPlaneDistance(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jdouble pDistance)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->SetFrontPlaneDistance(
  ( double  )  _lcvt.j2c<jdouble, double  >(pDistance)
  );
}
  /// double  GetFrontPlaneDistance () const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCamera_GetFrontPlaneDistance(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxCamera *) lpjFbxCamera)->GetFrontPlaneDistance(
  ));
  return ret;
}
  /// void  SetFrontPlaneDistanceMode (EFrontBackPlaneDistanceMode pMode)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_SetFrontPlaneDistanceMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jint pMode)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->SetFrontPlaneDistanceMode(
  ( FbxCamera::EFrontBackPlaneDistanceMode  )  _lcvt.j2c<jint,FbxCamera::EFrontBackPlaneDistanceMode >(pMode)
  );
}
  /// EFrontBackPlaneDistanceMode  GetFrontPlaneDistanceMode () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxCamera_GetFrontPlaneDistanceMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxCamera::EFrontBackPlaneDistanceMode  >(
  ((FbxCamera *) lpjFbxCamera)->GetFrontPlaneDistanceMode(
  ));
  return ret;
}
  /// void  SetViewFrustumFrontPlaneMode (EFrontBackPlaneDisplayMode pMode)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_SetViewFrustumFrontPlaneMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jint pMode)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->SetViewFrustumFrontPlaneMode(
  ( FbxCamera::EFrontBackPlaneDisplayMode  )  _lcvt.j2c<jint,FbxCamera::EFrontBackPlaneDisplayMode >(pMode)
  );
}
  /// EFrontBackPlaneDisplayMode  GetViewFrustumFrontPlaneMode () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxCamera_GetViewFrustumFrontPlaneMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxCamera::EFrontBackPlaneDisplayMode  >(
  ((FbxCamera *) lpjFbxCamera)->GetViewFrustumFrontPlaneMode(
  ));
  return ret;
}
  /// void  SetViewFrustumBackPlaneMode (EFrontBackPlaneDisplayMode pMode)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_SetViewFrustumBackPlaneMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jint pMode)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->SetViewFrustumBackPlaneMode(
  ( FbxCamera::EFrontBackPlaneDisplayMode  )  _lcvt.j2c<jint,FbxCamera::EFrontBackPlaneDisplayMode >(pMode)
  );
}
  /// EFrontBackPlaneDisplayMode  GetViewFrustumBackPlaneMode () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxCamera_GetViewFrustumBackPlaneMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxCamera::EFrontBackPlaneDisplayMode  >(
  ((FbxCamera *) lpjFbxCamera)->GetViewFrustumBackPlaneMode(
  ));
  return ret;
}
  /// void  SetViewCameraInterest (bool pEnable)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_SetViewCameraInterest(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jboolean pEnable)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->SetViewCameraInterest(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pEnable)
  );
}
  /// bool  GetViewCameraInterest () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCamera_GetViewCameraInterest(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxCamera *) lpjFbxCamera)->GetViewCameraInterest(
  ));
  return ret;
}
  /// void  SetViewNearFarPlanes (bool pEnable)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_SetViewNearFarPlanes(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jboolean pEnable)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->SetViewNearFarPlanes(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pEnable)
  );
}
  /// bool  GetViewNearFarPlanes () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCamera_GetViewNearFarPlanes(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxCamera *) lpjFbxCamera)->GetViewNearFarPlanes(
  ));
  return ret;
}
  /// FbxVector4  EvaluatePosition (const FbxTime &pTime=FBXSDK_TIME_ZERO) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_EvaluatePosition(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jobject pTime)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxVector4>(
  ((FbxCamera *) lpjFbxCamera)->EvaluatePosition(
  (const FbxTime  &) * _lcvt.j2c_object_ref<jobject,FbxTime >(pTime)
  ));
  return ret;
}
  /// FbxVector4  EvaluateLookAtPosition (const FbxTime &pTime=FBXSDK_TIME_ZERO) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_EvaluateLookAtPosition(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jobject pTime)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxVector4>(
  ((FbxCamera *) lpjFbxCamera)->EvaluateLookAtPosition(
  (const FbxTime  &) * _lcvt.j2c_object_ref<jobject,FbxTime >(pTime)
  ));
  return ret;
}
  /// FbxVector4  EvaluateUpDirection (const FbxVector4 &pCameraPosition, const FbxVector4 &pLookAtPosition, const FbxTime &pTime=FBXSDK_TIME_ZERO) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_EvaluateUpDirection(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jobject pCameraPosition,jobject pLookAtPosition,jobject pTime)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxVector4>(
  ((FbxCamera *) lpjFbxCamera)->EvaluateUpDirection(
  (const FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pCameraPosition)
  ,
  (const FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pLookAtPosition)
  ,
  (const FbxTime  &) * _lcvt.j2c_object_ref<jobject,FbxTime >(pTime)
  ));
  return ret;
}
  /// FbxMatrix  ComputeProjectionMatrix (const int pWidth, const int pHeight) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_ComputeProjectionMatrix(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jint pWidth,jint pHeight)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxMatrix>(
  ((FbxCamera *) lpjFbxCamera)->ComputeProjectionMatrix(
  (const int  )  _lcvt.j2c<jint,const int  >(pWidth)
  ,
  (const int  )  _lcvt.j2c<jint,const int  >(pHeight)
  ));
  return ret;
}
  /// bool  IsBoundingBoxInView (const FbxMatrix &pWorldToScreen, const FbxMatrix &pWorldToCamera, const FbxVector4 pPoints[8]) const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCamera_IsBoundingBoxInView(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jobject pWorldToScreen,jobject pWorldToCamera,jlong pPoints)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxCamera *) lpjFbxCamera)->IsBoundingBoxInView(
  (const FbxMatrix  &) * _lcvt.j2c_object_ref<jobject,FbxMatrix >(pWorldToScreen)
  ,
  (const FbxMatrix  &) * _lcvt.j2c_object_ref<jobject,FbxMatrix >(pWorldToCamera)
  ,
  (const FbxVector4  *)  _lcvt.j2c_object_pt<jlong, FbxVector4>(pPoints)
  ));
  return ret;
}
  /// bool  IsPointInView (const FbxMatrix &pWorldToScreen, const FbxMatrix &pWorldToCamera, const FbxVector4 &pPoint) const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCamera_IsPointInView(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jobject pWorldToScreen,jobject pWorldToCamera,jobject pPoint)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxCamera *) lpjFbxCamera)->IsPointInView(
  (const FbxMatrix  &) * _lcvt.j2c_object_ref<jobject,FbxMatrix >(pWorldToScreen)
  ,
  (const FbxMatrix  &) * _lcvt.j2c_object_ref<jobject,FbxMatrix >(pWorldToCamera)
  ,
  (const FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pPoint)
  ));
  return ret;
}
  /// FbxMatrix  ComputeWorldToScreen (int pPixelWidth, int pPixelHeight, const FbxAMatrix &pWorldToCamera) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_ComputeWorldToScreen(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jint pPixelWidth,jint pPixelHeight,jobject pWorldToCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxMatrix>(
  ((FbxCamera *) lpjFbxCamera)->ComputeWorldToScreen(
  ( int  )  _lcvt.j2c<jint, int  >(pPixelWidth)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pPixelHeight)
  ,
  (const FbxAMatrix  &) * _lcvt.j2c_object_ref<jobject,FbxAMatrix >(pWorldToCamera)
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  Position
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetPosition(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jlong lpFbxDouble3)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->Position.Set(
  ( FbxDouble3  )  _lcvt.j2c_object<jlong,FbxDouble3 >(lpFbxDouble3)
  );
}
  /// FbxPropertyT< FbxDouble3 >  Position
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mepGetPosition(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxDouble3>(
  ((FbxCamera *) lpjFbxCamera)->Position.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  Position
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetPosition(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble3   >(
   (&((FbxCamera *) lpjFbxCamera)->Position
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  UpVector
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetUpVector(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jlong lpFbxDouble3)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->UpVector.Set(
  ( FbxDouble3  )  _lcvt.j2c_object<jlong,FbxDouble3 >(lpFbxDouble3)
  );
}
  /// FbxPropertyT< FbxDouble3 >  UpVector
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mepGetUpVector(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxDouble3>(
  ((FbxCamera *) lpjFbxCamera)->UpVector.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  UpVector
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetUpVector(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble3   >(
   (&((FbxCamera *) lpjFbxCamera)->UpVector
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  InterestPosition
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetInterestPosition(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jlong lpFbxDouble3)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->InterestPosition.Set(
  ( FbxDouble3  )  _lcvt.j2c_object<jlong,FbxDouble3 >(lpFbxDouble3)
  );
}
  /// FbxPropertyT< FbxDouble3 >  InterestPosition
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mepGetInterestPosition(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxDouble3>(
  ((FbxCamera *) lpjFbxCamera)->InterestPosition.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  InterestPosition
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetInterestPosition(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble3   >(
   (&((FbxCamera *) lpjFbxCamera)->InterestPosition
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  Roll
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetRoll(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->Roll.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  Roll
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCamera_mepGetRoll(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCamera *) lpjFbxCamera)->Roll.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  Roll
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetRoll(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCamera *) lpjFbxCamera)->Roll
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  OpticalCenterX
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetOpticalCenterX(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->OpticalCenterX.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  OpticalCenterX
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCamera_mepGetOpticalCenterX(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCamera *) lpjFbxCamera)->OpticalCenterX.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  OpticalCenterX
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetOpticalCenterX(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCamera *) lpjFbxCamera)->OpticalCenterX
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  OpticalCenterY
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetOpticalCenterY(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->OpticalCenterY.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  OpticalCenterY
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCamera_mepGetOpticalCenterY(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCamera *) lpjFbxCamera)->OpticalCenterY.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  OpticalCenterY
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetOpticalCenterY(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCamera *) lpjFbxCamera)->OpticalCenterY
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  BackgroundColor
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetBackgroundColor(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jlong lpFbxDouble3)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->BackgroundColor.Set(
  ( FbxDouble3  )  _lcvt.j2c_object<jlong,FbxDouble3 >(lpFbxDouble3)
  );
}
  /// FbxPropertyT< FbxDouble3 >  BackgroundColor
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mepGetBackgroundColor(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxDouble3>(
  ((FbxCamera *) lpjFbxCamera)->BackgroundColor.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  BackgroundColor
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetBackgroundColor(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble3   >(
   (&((FbxCamera *) lpjFbxCamera)->BackgroundColor
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  TurnTable
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetTurnTable(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->TurnTable.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  TurnTable
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCamera_mepGetTurnTable(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCamera *) lpjFbxCamera)->TurnTable.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  TurnTable
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetTurnTable(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCamera *) lpjFbxCamera)->TurnTable
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  DisplayTurnTableIcon
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetDisplayTurnTableIcon(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->DisplayTurnTableIcon.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  DisplayTurnTableIcon
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCamera_mepGetDisplayTurnTableIcon(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxCamera *) lpjFbxCamera)->DisplayTurnTableIcon.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  DisplayTurnTableIcon
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetDisplayTurnTableIcon(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxCamera *) lpjFbxCamera)->DisplayTurnTableIcon
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  UseMotionBlur
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetUseMotionBlur(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->UseMotionBlur.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  UseMotionBlur
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCamera_mepGetUseMotionBlur(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxCamera *) lpjFbxCamera)->UseMotionBlur.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  UseMotionBlur
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetUseMotionBlur(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxCamera *) lpjFbxCamera)->UseMotionBlur
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  UseRealTimeMotionBlur
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetUseRealTimeMotionBlur(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->UseRealTimeMotionBlur.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  UseRealTimeMotionBlur
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCamera_mepGetUseRealTimeMotionBlur(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxCamera *) lpjFbxCamera)->UseRealTimeMotionBlur.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  UseRealTimeMotionBlur
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetUseRealTimeMotionBlur(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxCamera *) lpjFbxCamera)->UseRealTimeMotionBlur
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  MotionBlurIntensity
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetMotionBlurIntensity(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->MotionBlurIntensity.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  MotionBlurIntensity
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCamera_mepGetMotionBlurIntensity(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCamera *) lpjFbxCamera)->MotionBlurIntensity.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  MotionBlurIntensity
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetMotionBlurIntensity(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCamera *) lpjFbxCamera)->MotionBlurIntensity
  ));
  return ret;
}
  /// FbxPropertyT< EAspectRatioMode >  AspectRatioMode
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetAspectRatioMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jint lpEAspectRatioMode)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->AspectRatioMode.Set(
  ( FbxCamera::EAspectRatioMode  )  _lcvt.j2c<jint,FbxCamera::EAspectRatioMode >(lpEAspectRatioMode)
  );
}
  /// FbxPropertyT< EAspectRatioMode >  AspectRatioMode
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxCamera_mepGetAspectRatioMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxCamera::EAspectRatioMode  >(
  ((FbxCamera *) lpjFbxCamera)->AspectRatioMode.Get(
  ));
  return ret;
}
  /// FbxPropertyT< EAspectRatioMode >  AspectRatioMode
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetAspectRatioMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxCamera::EAspectRatioMode   >(
   (&((FbxCamera *) lpjFbxCamera)->AspectRatioMode
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  AspectWidth
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetAspectWidth(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->AspectWidth.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  AspectWidth
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCamera_mepGetAspectWidth(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCamera *) lpjFbxCamera)->AspectWidth.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  AspectWidth
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetAspectWidth(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCamera *) lpjFbxCamera)->AspectWidth
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  AspectHeight
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetAspectHeight(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->AspectHeight.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  AspectHeight
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCamera_mepGetAspectHeight(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCamera *) lpjFbxCamera)->AspectHeight.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  AspectHeight
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetAspectHeight(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCamera *) lpjFbxCamera)->AspectHeight
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  PixelAspectRatio
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetPixelAspectRatio(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->PixelAspectRatio.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  PixelAspectRatio
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCamera_mepGetPixelAspectRatio(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCamera *) lpjFbxCamera)->PixelAspectRatio.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  PixelAspectRatio
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetPixelAspectRatio(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCamera *) lpjFbxCamera)->PixelAspectRatio
  ));
  return ret;
}
  /// FbxPropertyT< EApertureMode >  ApertureMode
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetApertureMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jint lpEApertureMode)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->ApertureMode.Set(
  ( FbxCamera::EApertureMode  )  _lcvt.j2c<jint,FbxCamera::EApertureMode >(lpEApertureMode)
  );
}
  /// FbxPropertyT< EApertureMode >  ApertureMode
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxCamera_mepGetApertureMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxCamera::EApertureMode  >(
  ((FbxCamera *) lpjFbxCamera)->ApertureMode.Get(
  ));
  return ret;
}
  /// FbxPropertyT< EApertureMode >  ApertureMode
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetApertureMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxCamera::EApertureMode   >(
   (&((FbxCamera *) lpjFbxCamera)->ApertureMode
  ));
  return ret;
}
  /// FbxPropertyT< EGateFit >  GateFit
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetGateFit(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jint lpEGateFit)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->GateFit.Set(
  ( FbxCamera::EGateFit  )  _lcvt.j2c<jint,FbxCamera::EGateFit >(lpEGateFit)
  );
}
  /// FbxPropertyT< EGateFit >  GateFit
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxCamera_mepGetGateFit(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxCamera::EGateFit  >(
  ((FbxCamera *) lpjFbxCamera)->GateFit.Get(
  ));
  return ret;
}
  /// FbxPropertyT< EGateFit >  GateFit
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetGateFit(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxCamera::EGateFit   >(
   (&((FbxCamera *) lpjFbxCamera)->GateFit
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FieldOfView
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetFieldOfView(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->FieldOfView.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  FieldOfView
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCamera_mepGetFieldOfView(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCamera *) lpjFbxCamera)->FieldOfView.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FieldOfView
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetFieldOfView(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCamera *) lpjFbxCamera)->FieldOfView
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FieldOfViewX
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetFieldOfViewX(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->FieldOfViewX.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  FieldOfViewX
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCamera_mepGetFieldOfViewX(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCamera *) lpjFbxCamera)->FieldOfViewX.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FieldOfViewX
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetFieldOfViewX(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCamera *) lpjFbxCamera)->FieldOfViewX
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FieldOfViewY
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetFieldOfViewY(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->FieldOfViewY.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  FieldOfViewY
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCamera_mepGetFieldOfViewY(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCamera *) lpjFbxCamera)->FieldOfViewY.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FieldOfViewY
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetFieldOfViewY(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCamera *) lpjFbxCamera)->FieldOfViewY
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FocalLength
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetFocalLength(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->FocalLength.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  FocalLength
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCamera_mepGetFocalLength(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCamera *) lpjFbxCamera)->FocalLength.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FocalLength
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetFocalLength(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCamera *) lpjFbxCamera)->FocalLength
  ));
  return ret;
}
  /// FbxPropertyT< EFormat >  CameraFormat
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetCameraFormat(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jint lpEFormat)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->CameraFormat.Set(
  ( FbxCamera::EFormat  )  _lcvt.j2c<jint,FbxCamera::EFormat >(lpEFormat)
  );
}
  /// FbxPropertyT< EFormat >  CameraFormat
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxCamera_mepGetCameraFormat(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxCamera::EFormat  >(
  ((FbxCamera *) lpjFbxCamera)->CameraFormat.Get(
  ));
  return ret;
}
  /// FbxPropertyT< EFormat >  CameraFormat
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetCameraFormat(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxCamera::EFormat   >(
   (&((FbxCamera *) lpjFbxCamera)->CameraFormat
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  UseFrameColor
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetUseFrameColor(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->UseFrameColor.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  UseFrameColor
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCamera_mepGetUseFrameColor(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxCamera *) lpjFbxCamera)->UseFrameColor.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  UseFrameColor
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetUseFrameColor(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxCamera *) lpjFbxCamera)->UseFrameColor
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  FrameColor
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetFrameColor(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jlong lpFbxDouble3)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->FrameColor.Set(
  ( FbxDouble3  )  _lcvt.j2c_object<jlong,FbxDouble3 >(lpFbxDouble3)
  );
}
  /// FbxPropertyT< FbxDouble3 >  FrameColor
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mepGetFrameColor(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxDouble3>(
  ((FbxCamera *) lpjFbxCamera)->FrameColor.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  FrameColor
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetFrameColor(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble3   >(
   (&((FbxCamera *) lpjFbxCamera)->FrameColor
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  ShowName
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetShowName(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->ShowName.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  ShowName
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCamera_mepGetShowName(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxCamera *) lpjFbxCamera)->ShowName.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  ShowName
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetShowName(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxCamera *) lpjFbxCamera)->ShowName
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  ShowInfoOnMoving
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetShowInfoOnMoving(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->ShowInfoOnMoving.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  ShowInfoOnMoving
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCamera_mepGetShowInfoOnMoving(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxCamera *) lpjFbxCamera)->ShowInfoOnMoving.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  ShowInfoOnMoving
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetShowInfoOnMoving(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxCamera *) lpjFbxCamera)->ShowInfoOnMoving
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  ShowGrid
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetShowGrid(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->ShowGrid.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  ShowGrid
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCamera_mepGetShowGrid(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxCamera *) lpjFbxCamera)->ShowGrid.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  ShowGrid
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetShowGrid(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxCamera *) lpjFbxCamera)->ShowGrid
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  ShowOpticalCenter
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetShowOpticalCenter(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->ShowOpticalCenter.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  ShowOpticalCenter
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCamera_mepGetShowOpticalCenter(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxCamera *) lpjFbxCamera)->ShowOpticalCenter.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  ShowOpticalCenter
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetShowOpticalCenter(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxCamera *) lpjFbxCamera)->ShowOpticalCenter
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  ShowAzimut
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetShowAzimut(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->ShowAzimut.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  ShowAzimut
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCamera_mepGetShowAzimut(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxCamera *) lpjFbxCamera)->ShowAzimut.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  ShowAzimut
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetShowAzimut(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxCamera *) lpjFbxCamera)->ShowAzimut
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  ShowTimeCode
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetShowTimeCode(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->ShowTimeCode.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  ShowTimeCode
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCamera_mepGetShowTimeCode(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxCamera *) lpjFbxCamera)->ShowTimeCode.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  ShowTimeCode
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetShowTimeCode(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxCamera *) lpjFbxCamera)->ShowTimeCode
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  ShowAudio
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetShowAudio(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->ShowAudio.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  ShowAudio
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCamera_mepGetShowAudio(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxCamera *) lpjFbxCamera)->ShowAudio.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  ShowAudio
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetShowAudio(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxCamera *) lpjFbxCamera)->ShowAudio
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  AudioColor
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetAudioColor(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jlong lpFbxDouble3)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->AudioColor.Set(
  ( FbxDouble3  )  _lcvt.j2c_object<jlong,FbxDouble3 >(lpFbxDouble3)
  );
}
  /// FbxPropertyT< FbxDouble3 >  AudioColor
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mepGetAudioColor(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxDouble3>(
  ((FbxCamera *) lpjFbxCamera)->AudioColor.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  AudioColor
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetAudioColor(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble3   >(
   (&((FbxCamera *) lpjFbxCamera)->AudioColor
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  NearPlane
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetNearPlane(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->NearPlane.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  NearPlane
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCamera_mepGetNearPlane(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCamera *) lpjFbxCamera)->NearPlane.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  NearPlane
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetNearPlane(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCamera *) lpjFbxCamera)->NearPlane
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FarPlane
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetFarPlane(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->FarPlane.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  FarPlane
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCamera_mepGetFarPlane(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCamera *) lpjFbxCamera)->FarPlane.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FarPlane
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetFarPlane(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCamera *) lpjFbxCamera)->FarPlane
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  AutoComputeClipPlanes
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetAutoComputeClipPlanes(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->AutoComputeClipPlanes.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  AutoComputeClipPlanes
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCamera_mepGetAutoComputeClipPlanes(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxCamera *) lpjFbxCamera)->AutoComputeClipPlanes.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  AutoComputeClipPlanes
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetAutoComputeClipPlanes(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxCamera *) lpjFbxCamera)->AutoComputeClipPlanes
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FilmWidth
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetFilmWidth(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->FilmWidth.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  FilmWidth
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCamera_mepGetFilmWidth(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCamera *) lpjFbxCamera)->FilmWidth.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FilmWidth
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetFilmWidth(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCamera *) lpjFbxCamera)->FilmWidth
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FilmHeight
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetFilmHeight(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->FilmHeight.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  FilmHeight
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCamera_mepGetFilmHeight(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCamera *) lpjFbxCamera)->FilmHeight.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FilmHeight
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetFilmHeight(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCamera *) lpjFbxCamera)->FilmHeight
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FilmAspectRatio
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetFilmAspectRatio(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->FilmAspectRatio.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  FilmAspectRatio
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCamera_mepGetFilmAspectRatio(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCamera *) lpjFbxCamera)->FilmAspectRatio.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FilmAspectRatio
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetFilmAspectRatio(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCamera *) lpjFbxCamera)->FilmAspectRatio
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FilmSqueezeRatio
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetFilmSqueezeRatio(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->FilmSqueezeRatio.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  FilmSqueezeRatio
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCamera_mepGetFilmSqueezeRatio(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCamera *) lpjFbxCamera)->FilmSqueezeRatio.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FilmSqueezeRatio
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetFilmSqueezeRatio(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCamera *) lpjFbxCamera)->FilmSqueezeRatio
  ));
  return ret;
}
  /// FbxPropertyT< EApertureFormat >  FilmFormat
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetFilmFormat(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jint lpEApertureFormat)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->FilmFormat.Set(
  ( FbxCamera::EApertureFormat  )  _lcvt.j2c<jint,FbxCamera::EApertureFormat >(lpEApertureFormat)
  );
}
  /// FbxPropertyT< EApertureFormat >  FilmFormat
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxCamera_mepGetFilmFormat(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxCamera::EApertureFormat  >(
  ((FbxCamera *) lpjFbxCamera)->FilmFormat.Get(
  ));
  return ret;
}
  /// FbxPropertyT< EApertureFormat >  FilmFormat
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetFilmFormat(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxCamera::EApertureFormat   >(
   (&((FbxCamera *) lpjFbxCamera)->FilmFormat
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FilmOffsetX
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetFilmOffsetX(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->FilmOffsetX.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  FilmOffsetX
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCamera_mepGetFilmOffsetX(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCamera *) lpjFbxCamera)->FilmOffsetX.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FilmOffsetX
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetFilmOffsetX(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCamera *) lpjFbxCamera)->FilmOffsetX
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FilmOffsetY
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetFilmOffsetY(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->FilmOffsetY.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  FilmOffsetY
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCamera_mepGetFilmOffsetY(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCamera *) lpjFbxCamera)->FilmOffsetY.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FilmOffsetY
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetFilmOffsetY(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCamera *) lpjFbxCamera)->FilmOffsetY
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  PreScale
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetPreScale(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->PreScale.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  PreScale
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCamera_mepGetPreScale(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCamera *) lpjFbxCamera)->PreScale.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  PreScale
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetPreScale(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCamera *) lpjFbxCamera)->PreScale
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FilmTranslateX
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetFilmTranslateX(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->FilmTranslateX.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  FilmTranslateX
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCamera_mepGetFilmTranslateX(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCamera *) lpjFbxCamera)->FilmTranslateX.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FilmTranslateX
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetFilmTranslateX(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCamera *) lpjFbxCamera)->FilmTranslateX
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FilmTranslateY
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetFilmTranslateY(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->FilmTranslateY.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  FilmTranslateY
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCamera_mepGetFilmTranslateY(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCamera *) lpjFbxCamera)->FilmTranslateY.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FilmTranslateY
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetFilmTranslateY(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCamera *) lpjFbxCamera)->FilmTranslateY
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FilmRollPivotX
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetFilmRollPivotX(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->FilmRollPivotX.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  FilmRollPivotX
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCamera_mepGetFilmRollPivotX(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCamera *) lpjFbxCamera)->FilmRollPivotX.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FilmRollPivotX
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetFilmRollPivotX(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCamera *) lpjFbxCamera)->FilmRollPivotX
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FilmRollPivotY
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetFilmRollPivotY(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->FilmRollPivotY.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  FilmRollPivotY
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCamera_mepGetFilmRollPivotY(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCamera *) lpjFbxCamera)->FilmRollPivotY.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FilmRollPivotY
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetFilmRollPivotY(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCamera *) lpjFbxCamera)->FilmRollPivotY
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FilmRollValue
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetFilmRollValue(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->FilmRollValue.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  FilmRollValue
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCamera_mepGetFilmRollValue(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCamera *) lpjFbxCamera)->FilmRollValue.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FilmRollValue
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetFilmRollValue(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCamera *) lpjFbxCamera)->FilmRollValue
  ));
  return ret;
}
  /// FbxPropertyT< EFilmRollOrder >  FilmRollOrder
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetFilmRollOrder(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jint lpEFilmRollOrder)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->FilmRollOrder.Set(
  ( FbxCamera::EFilmRollOrder  )  _lcvt.j2c<jint,FbxCamera::EFilmRollOrder >(lpEFilmRollOrder)
  );
}
  /// FbxPropertyT< EFilmRollOrder >  FilmRollOrder
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxCamera_mepGetFilmRollOrder(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxCamera::EFilmRollOrder  >(
  ((FbxCamera *) lpjFbxCamera)->FilmRollOrder.Get(
  ));
  return ret;
}
  /// FbxPropertyT< EFilmRollOrder >  FilmRollOrder
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetFilmRollOrder(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxCamera::EFilmRollOrder   >(
   (&((FbxCamera *) lpjFbxCamera)->FilmRollOrder
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  ViewCameraToLookAt
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetViewCameraToLookAt(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->ViewCameraToLookAt.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  ViewCameraToLookAt
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCamera_mepGetViewCameraToLookAt(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxCamera *) lpjFbxCamera)->ViewCameraToLookAt.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  ViewCameraToLookAt
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetViewCameraToLookAt(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxCamera *) lpjFbxCamera)->ViewCameraToLookAt
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  ViewFrustumNearFarPlane
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetViewFrustumNearFarPlane(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->ViewFrustumNearFarPlane.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  ViewFrustumNearFarPlane
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCamera_mepGetViewFrustumNearFarPlane(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxCamera *) lpjFbxCamera)->ViewFrustumNearFarPlane.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  ViewFrustumNearFarPlane
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetViewFrustumNearFarPlane(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxCamera *) lpjFbxCamera)->ViewFrustumNearFarPlane
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  BackPlaneDistance
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetBackPlaneDistance(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->BackPlaneDistance.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  BackPlaneDistance
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCamera_mepGetBackPlaneDistance(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCamera *) lpjFbxCamera)->BackPlaneDistance.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  BackPlaneDistance
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetBackPlaneDistance(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCamera *) lpjFbxCamera)->BackPlaneDistance
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FrontPlaneDistance
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetFrontPlaneDistance(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->FrontPlaneDistance.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  FrontPlaneDistance
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCamera_mepGetFrontPlaneDistance(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCamera *) lpjFbxCamera)->FrontPlaneDistance.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FrontPlaneDistance
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetFrontPlaneDistance(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCamera *) lpjFbxCamera)->FrontPlaneDistance
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  LockMode
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetLockMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->LockMode.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  LockMode
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCamera_mepGetLockMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxCamera *) lpjFbxCamera)->LockMode.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  LockMode
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetLockMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxCamera *) lpjFbxCamera)->LockMode
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  LockInterestNavigation
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetLockInterestNavigation(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->LockInterestNavigation.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  LockInterestNavigation
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCamera_mepGetLockInterestNavigation(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxCamera *) lpjFbxCamera)->LockInterestNavigation.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  LockInterestNavigation
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetLockInterestNavigation(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxCamera *) lpjFbxCamera)->LockInterestNavigation
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  BackPlateFitImage
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetBackPlateFitImage(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->BackPlateFitImage.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  BackPlateFitImage
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCamera_mepGetBackPlateFitImage(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxCamera *) lpjFbxCamera)->BackPlateFitImage.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  BackPlateFitImage
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetBackPlateFitImage(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxCamera *) lpjFbxCamera)->BackPlateFitImage
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  BackPlateCrop
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetBackPlateCrop(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->BackPlateCrop.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  BackPlateCrop
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCamera_mepGetBackPlateCrop(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxCamera *) lpjFbxCamera)->BackPlateCrop.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  BackPlateCrop
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetBackPlateCrop(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxCamera *) lpjFbxCamera)->BackPlateCrop
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  BackPlateCenter
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetBackPlateCenter(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->BackPlateCenter.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  BackPlateCenter
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCamera_mepGetBackPlateCenter(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxCamera *) lpjFbxCamera)->BackPlateCenter.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  BackPlateCenter
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetBackPlateCenter(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxCamera *) lpjFbxCamera)->BackPlateCenter
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  BackPlateKeepRatio
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetBackPlateKeepRatio(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->BackPlateKeepRatio.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  BackPlateKeepRatio
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCamera_mepGetBackPlateKeepRatio(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxCamera *) lpjFbxCamera)->BackPlateKeepRatio.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  BackPlateKeepRatio
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetBackPlateKeepRatio(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxCamera *) lpjFbxCamera)->BackPlateKeepRatio
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  BackgroundAlphaTreshold
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetBackgroundAlphaTreshold(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->BackgroundAlphaTreshold.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  BackgroundAlphaTreshold
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCamera_mepGetBackgroundAlphaTreshold(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCamera *) lpjFbxCamera)->BackgroundAlphaTreshold.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  BackgroundAlphaTreshold
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetBackgroundAlphaTreshold(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCamera *) lpjFbxCamera)->BackgroundAlphaTreshold
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  BackPlaneOffsetX
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetBackPlaneOffsetX(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->BackPlaneOffsetX.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  BackPlaneOffsetX
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCamera_mepGetBackPlaneOffsetX(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCamera *) lpjFbxCamera)->BackPlaneOffsetX.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  BackPlaneOffsetX
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetBackPlaneOffsetX(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCamera *) lpjFbxCamera)->BackPlaneOffsetX
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  BackPlaneOffsetY
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetBackPlaneOffsetY(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->BackPlaneOffsetY.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  BackPlaneOffsetY
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCamera_mepGetBackPlaneOffsetY(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCamera *) lpjFbxCamera)->BackPlaneOffsetY.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  BackPlaneOffsetY
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetBackPlaneOffsetY(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCamera *) lpjFbxCamera)->BackPlaneOffsetY
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  BackPlaneRotation
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetBackPlaneRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->BackPlaneRotation.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  BackPlaneRotation
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCamera_mepGetBackPlaneRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCamera *) lpjFbxCamera)->BackPlaneRotation.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  BackPlaneRotation
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetBackPlaneRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCamera *) lpjFbxCamera)->BackPlaneRotation
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  BackPlaneScaleX
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetBackPlaneScaleX(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->BackPlaneScaleX.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  BackPlaneScaleX
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCamera_mepGetBackPlaneScaleX(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCamera *) lpjFbxCamera)->BackPlaneScaleX.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  BackPlaneScaleX
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetBackPlaneScaleX(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCamera *) lpjFbxCamera)->BackPlaneScaleX
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  BackPlaneScaleY
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetBackPlaneScaleY(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->BackPlaneScaleY.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  BackPlaneScaleY
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCamera_mepGetBackPlaneScaleY(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCamera *) lpjFbxCamera)->BackPlaneScaleY.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  BackPlaneScaleY
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetBackPlaneScaleY(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCamera *) lpjFbxCamera)->BackPlaneScaleY
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  ShowBackplate
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetShowBackplate(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->ShowBackplate.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  ShowBackplate
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCamera_mepGetShowBackplate(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxCamera *) lpjFbxCamera)->ShowBackplate.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  ShowBackplate
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetShowBackplate(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxCamera *) lpjFbxCamera)->ShowBackplate
  ));
  return ret;
}
  /// FbxPropertyT< FbxReference >  BackgroundTexture
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetBackgroundTexture(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jlong lpFbxReference)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->BackgroundTexture.Set(
  ( FbxReference  )  _lcvt.j2c<jlong, FbxReference  >(lpFbxReference)
  );
}
  /// FbxPropertyT< FbxReference >  BackgroundTexture
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mepGetBackgroundTexture(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j<jlong,  FbxReference  >(
  ((FbxCamera *) lpjFbxCamera)->BackgroundTexture.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxReference >  BackgroundTexture
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetBackgroundTexture(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxReference   >(
   (&((FbxCamera *) lpjFbxCamera)->BackgroundTexture
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  FrontPlateFitImage
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetFrontPlateFitImage(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->FrontPlateFitImage.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  FrontPlateFitImage
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCamera_mepGetFrontPlateFitImage(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxCamera *) lpjFbxCamera)->FrontPlateFitImage.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  FrontPlateFitImage
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetFrontPlateFitImage(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxCamera *) lpjFbxCamera)->FrontPlateFitImage
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  FrontPlateCrop
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetFrontPlateCrop(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->FrontPlateCrop.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  FrontPlateCrop
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCamera_mepGetFrontPlateCrop(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxCamera *) lpjFbxCamera)->FrontPlateCrop.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  FrontPlateCrop
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetFrontPlateCrop(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxCamera *) lpjFbxCamera)->FrontPlateCrop
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  FrontPlateCenter
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetFrontPlateCenter(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->FrontPlateCenter.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  FrontPlateCenter
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCamera_mepGetFrontPlateCenter(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxCamera *) lpjFbxCamera)->FrontPlateCenter.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  FrontPlateCenter
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetFrontPlateCenter(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxCamera *) lpjFbxCamera)->FrontPlateCenter
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  FrontPlateKeepRatio
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetFrontPlateKeepRatio(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->FrontPlateKeepRatio.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  FrontPlateKeepRatio
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCamera_mepGetFrontPlateKeepRatio(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxCamera *) lpjFbxCamera)->FrontPlateKeepRatio.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  FrontPlateKeepRatio
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetFrontPlateKeepRatio(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxCamera *) lpjFbxCamera)->FrontPlateKeepRatio
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  ShowFrontplate
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetShowFrontplate(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->ShowFrontplate.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  ShowFrontplate
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCamera_mepGetShowFrontplate(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxCamera *) lpjFbxCamera)->ShowFrontplate.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  ShowFrontplate
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetShowFrontplate(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxCamera *) lpjFbxCamera)->ShowFrontplate
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FrontPlaneOffsetX
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetFrontPlaneOffsetX(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->FrontPlaneOffsetX.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  FrontPlaneOffsetX
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCamera_mepGetFrontPlaneOffsetX(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCamera *) lpjFbxCamera)->FrontPlaneOffsetX.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FrontPlaneOffsetX
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetFrontPlaneOffsetX(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCamera *) lpjFbxCamera)->FrontPlaneOffsetX
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FrontPlaneOffsetY
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetFrontPlaneOffsetY(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->FrontPlaneOffsetY.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  FrontPlaneOffsetY
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCamera_mepGetFrontPlaneOffsetY(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCamera *) lpjFbxCamera)->FrontPlaneOffsetY.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FrontPlaneOffsetY
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetFrontPlaneOffsetY(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCamera *) lpjFbxCamera)->FrontPlaneOffsetY
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FrontPlaneRotation
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetFrontPlaneRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->FrontPlaneRotation.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  FrontPlaneRotation
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCamera_mepGetFrontPlaneRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCamera *) lpjFbxCamera)->FrontPlaneRotation.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FrontPlaneRotation
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetFrontPlaneRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCamera *) lpjFbxCamera)->FrontPlaneRotation
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FrontPlaneScaleX
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetFrontPlaneScaleX(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->FrontPlaneScaleX.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  FrontPlaneScaleX
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCamera_mepGetFrontPlaneScaleX(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCamera *) lpjFbxCamera)->FrontPlaneScaleX.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FrontPlaneScaleX
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetFrontPlaneScaleX(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCamera *) lpjFbxCamera)->FrontPlaneScaleX
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FrontPlaneScaleY
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetFrontPlaneScaleY(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->FrontPlaneScaleY.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  FrontPlaneScaleY
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCamera_mepGetFrontPlaneScaleY(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCamera *) lpjFbxCamera)->FrontPlaneScaleY.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FrontPlaneScaleY
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetFrontPlaneScaleY(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCamera *) lpjFbxCamera)->FrontPlaneScaleY
  ));
  return ret;
}
  /// FbxPropertyT< FbxReference >  ForegroundTexture
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetForegroundTexture(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jlong lpFbxReference)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->ForegroundTexture.Set(
  ( FbxReference  )  _lcvt.j2c<jlong, FbxReference  >(lpFbxReference)
  );
}
  /// FbxPropertyT< FbxReference >  ForegroundTexture
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mepGetForegroundTexture(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j<jlong,  FbxReference  >(
  ((FbxCamera *) lpjFbxCamera)->ForegroundTexture.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxReference >  ForegroundTexture
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetForegroundTexture(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxReference   >(
   (&((FbxCamera *) lpjFbxCamera)->ForegroundTexture
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  ForegroundOpacity
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetForegroundOpacity(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->ForegroundOpacity.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  ForegroundOpacity
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCamera_mepGetForegroundOpacity(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCamera *) lpjFbxCamera)->ForegroundOpacity.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  ForegroundOpacity
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetForegroundOpacity(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCamera *) lpjFbxCamera)->ForegroundOpacity
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  DisplaySafeArea
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetDisplaySafeArea(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->DisplaySafeArea.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  DisplaySafeArea
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCamera_mepGetDisplaySafeArea(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxCamera *) lpjFbxCamera)->DisplaySafeArea.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  DisplaySafeArea
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetDisplaySafeArea(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxCamera *) lpjFbxCamera)->DisplaySafeArea
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  DisplaySafeAreaOnRender
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetDisplaySafeAreaOnRender(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->DisplaySafeAreaOnRender.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  DisplaySafeAreaOnRender
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCamera_mepGetDisplaySafeAreaOnRender(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxCamera *) lpjFbxCamera)->DisplaySafeAreaOnRender.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  DisplaySafeAreaOnRender
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetDisplaySafeAreaOnRender(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxCamera *) lpjFbxCamera)->DisplaySafeAreaOnRender
  ));
  return ret;
}
  /// FbxPropertyT< ESafeAreaStyle >  SafeAreaDisplayStyle
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetSafeAreaDisplayStyle(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jint lpESafeAreaStyle)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->SafeAreaDisplayStyle.Set(
  ( FbxCamera::ESafeAreaStyle  )  _lcvt.j2c<jint,FbxCamera::ESafeAreaStyle >(lpESafeAreaStyle)
  );
}
  /// FbxPropertyT< ESafeAreaStyle >  SafeAreaDisplayStyle
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxCamera_mepGetSafeAreaDisplayStyle(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxCamera::ESafeAreaStyle  >(
  ((FbxCamera *) lpjFbxCamera)->SafeAreaDisplayStyle.Get(
  ));
  return ret;
}
  /// FbxPropertyT< ESafeAreaStyle >  SafeAreaDisplayStyle
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetSafeAreaDisplayStyle(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxCamera::ESafeAreaStyle   >(
   (&((FbxCamera *) lpjFbxCamera)->SafeAreaDisplayStyle
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  SafeAreaAspectRatio
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetSafeAreaAspectRatio(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->SafeAreaAspectRatio.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  SafeAreaAspectRatio
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCamera_mepGetSafeAreaAspectRatio(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCamera *) lpjFbxCamera)->SafeAreaAspectRatio.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  SafeAreaAspectRatio
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetSafeAreaAspectRatio(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCamera *) lpjFbxCamera)->SafeAreaAspectRatio
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  Use2DMagnifierZoom
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetUse2DMagnifierZoom(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->Use2DMagnifierZoom.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  Use2DMagnifierZoom
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCamera_mepGetUse2DMagnifierZoom(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxCamera *) lpjFbxCamera)->Use2DMagnifierZoom.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  Use2DMagnifierZoom
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetUse2DMagnifierZoom(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxCamera *) lpjFbxCamera)->Use2DMagnifierZoom
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  _2DMagnifierZoom
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSet_2DMagnifierZoom(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->_2DMagnifierZoom.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  _2DMagnifierZoom
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCamera_mepGet_2DMagnifierZoom(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCamera *) lpjFbxCamera)->_2DMagnifierZoom.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  _2DMagnifierZoom
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGet_2DMagnifierZoom(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCamera *) lpjFbxCamera)->_2DMagnifierZoom
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  _2DMagnifierX
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSet_2DMagnifierX(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->_2DMagnifierX.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  _2DMagnifierX
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCamera_mepGet_2DMagnifierX(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCamera *) lpjFbxCamera)->_2DMagnifierX.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  _2DMagnifierX
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGet_2DMagnifierX(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCamera *) lpjFbxCamera)->_2DMagnifierX
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  _2DMagnifierY
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSet_2DMagnifierY(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->_2DMagnifierY.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  _2DMagnifierY
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCamera_mepGet_2DMagnifierY(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCamera *) lpjFbxCamera)->_2DMagnifierY.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  _2DMagnifierY
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGet_2DMagnifierY(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCamera *) lpjFbxCamera)->_2DMagnifierY
  ));
  return ret;
}
  /// FbxPropertyT< EProjectionType >  ProjectionType
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetProjectionType(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jint lpEProjectionType)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->ProjectionType.Set(
  ( FbxCamera::EProjectionType  )  _lcvt.j2c<jint,FbxCamera::EProjectionType >(lpEProjectionType)
  );
}
  /// FbxPropertyT< EProjectionType >  ProjectionType
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxCamera_mepGetProjectionType(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxCamera::EProjectionType  >(
  ((FbxCamera *) lpjFbxCamera)->ProjectionType.Get(
  ));
  return ret;
}
  /// FbxPropertyT< EProjectionType >  ProjectionType
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetProjectionType(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxCamera::EProjectionType   >(
   (&((FbxCamera *) lpjFbxCamera)->ProjectionType
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  OrthoZoom
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetOrthoZoom(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->OrthoZoom.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  OrthoZoom
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCamera_mepGetOrthoZoom(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCamera *) lpjFbxCamera)->OrthoZoom.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  OrthoZoom
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetOrthoZoom(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCamera *) lpjFbxCamera)->OrthoZoom
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  UseRealTimeDOFAndAA
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetUseRealTimeDOFAndAA(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->UseRealTimeDOFAndAA.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  UseRealTimeDOFAndAA
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCamera_mepGetUseRealTimeDOFAndAA(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxCamera *) lpjFbxCamera)->UseRealTimeDOFAndAA.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  UseRealTimeDOFAndAA
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetUseRealTimeDOFAndAA(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxCamera *) lpjFbxCamera)->UseRealTimeDOFAndAA
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  UseDepthOfField
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetUseDepthOfField(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->UseDepthOfField.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  UseDepthOfField
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCamera_mepGetUseDepthOfField(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxCamera *) lpjFbxCamera)->UseDepthOfField.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  UseDepthOfField
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetUseDepthOfField(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxCamera *) lpjFbxCamera)->UseDepthOfField
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FocusAngle
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetFocusAngle(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->FocusAngle.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  FocusAngle
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCamera_mepGetFocusAngle(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCamera *) lpjFbxCamera)->FocusAngle.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FocusAngle
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetFocusAngle(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCamera *) lpjFbxCamera)->FocusAngle
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FocusDistance
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetFocusDistance(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->FocusDistance.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  FocusDistance
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCamera_mepGetFocusDistance(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCamera *) lpjFbxCamera)->FocusDistance.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FocusDistance
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetFocusDistance(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCamera *) lpjFbxCamera)->FocusDistance
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  UseAntialiasing
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetUseAntialiasing(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->UseAntialiasing.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  UseAntialiasing
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCamera_mepGetUseAntialiasing(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxCamera *) lpjFbxCamera)->UseAntialiasing.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  UseAntialiasing
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetUseAntialiasing(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxCamera *) lpjFbxCamera)->UseAntialiasing
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  AntialiasingIntensity
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetAntialiasingIntensity(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->AntialiasingIntensity.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  AntialiasingIntensity
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCamera_mepGetAntialiasingIntensity(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCamera *) lpjFbxCamera)->AntialiasingIntensity.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  AntialiasingIntensity
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetAntialiasingIntensity(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCamera *) lpjFbxCamera)->AntialiasingIntensity
  ));
  return ret;
}
  /// FbxPropertyT< EAntialiasingMethod >  AntialiasingMethod
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetAntialiasingMethod(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jint lpEAntialiasingMethod)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->AntialiasingMethod.Set(
  ( FbxCamera::EAntialiasingMethod  )  _lcvt.j2c<jint,FbxCamera::EAntialiasingMethod >(lpEAntialiasingMethod)
  );
}
  /// FbxPropertyT< EAntialiasingMethod >  AntialiasingMethod
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxCamera_mepGetAntialiasingMethod(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxCamera::EAntialiasingMethod  >(
  ((FbxCamera *) lpjFbxCamera)->AntialiasingMethod.Get(
  ));
  return ret;
}
  /// FbxPropertyT< EAntialiasingMethod >  AntialiasingMethod
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetAntialiasingMethod(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxCamera::EAntialiasingMethod   >(
   (&((FbxCamera *) lpjFbxCamera)->AntialiasingMethod
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  UseAccumulationBuffer
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetUseAccumulationBuffer(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->UseAccumulationBuffer.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  UseAccumulationBuffer
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCamera_mepGetUseAccumulationBuffer(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxCamera *) lpjFbxCamera)->UseAccumulationBuffer.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  UseAccumulationBuffer
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetUseAccumulationBuffer(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxCamera *) lpjFbxCamera)->UseAccumulationBuffer
  ));
  return ret;
}
  /// FbxPropertyT< FbxInt >  FrameSamplingCount
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetFrameSamplingCount(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jint lpFbxInt)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->FrameSamplingCount.Set(
  ( FbxInt  )  _lcvt.j2c<jint, FbxInt  >(lpFbxInt)
  );
}
  /// FbxPropertyT< FbxInt >  FrameSamplingCount
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxCamera_mepGetFrameSamplingCount(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxInt  >(
  ((FbxCamera *) lpjFbxCamera)->FrameSamplingCount.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxInt >  FrameSamplingCount
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetFrameSamplingCount(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxInt   >(
   (&((FbxCamera *) lpjFbxCamera)->FrameSamplingCount
  ));
  return ret;
}
  /// FbxPropertyT< ESamplingType >  FrameSamplingType
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCamera_mepSetFrameSamplingType(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera,jint lpESamplingType)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCamera *) lpjFbxCamera)->FrameSamplingType.Set(
  ( FbxCamera::ESamplingType  )  _lcvt.j2c<jint,FbxCamera::ESamplingType >(lpESamplingType)
  );
}
  /// FbxPropertyT< ESamplingType >  FrameSamplingType
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxCamera_mepGetFrameSamplingType(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxCamera::ESamplingType  >(
  ((FbxCamera *) lpjFbxCamera)->FrameSamplingType.Get(
  ));
  return ret;
}
  /// FbxPropertyT< ESamplingType >  FrameSamplingType
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_mptGetFrameSamplingType(JNIEnv * __env, jclass __jc,jlong lpjFbxCamera)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxCamera::ESamplingType   >(
   (&((FbxCamera *) lpjFbxCamera)->FrameSamplingType
  ));
  return ret;
}
  /// FbxCamera * Create( FbxNodeAttribute* lpFbxNodeAttribute,  const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCamera_Create(JNIEnv * __env, jclass __jc,jlong lpFbxNodeAttribute,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxCamera>(
  FbxCamera::Create(
  ( FbxNodeAttribute  *)  _lcvt.j2c_object_pt<jlong, FbxNodeAttribute>(lpFbxNodeAttribute)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
