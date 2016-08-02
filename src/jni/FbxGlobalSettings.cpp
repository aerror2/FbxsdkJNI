
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// void  SetOriginalUpAxis (const FbxAxisSystem &pAxisSystem)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxGlobalSettings_SetOriginalUpAxis(JNIEnv * __env, jclass __jc,jlong lpjFbxGlobalSettings,jobject pAxisSystem)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxGlobalSettings *) lpjFbxGlobalSettings)->SetOriginalUpAxis(
  (const FbxAxisSystem  &) * _lcvt.j2c_object_ref<jobject,FbxAxisSystem >(pAxisSystem)
  );
}
  /// int  GetOriginalUpAxis () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxGlobalSettings_GetOriginalUpAxis(JNIEnv * __env, jclass __jc,jlong lpjFbxGlobalSettings)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxGlobalSettings *) lpjFbxGlobalSettings)->GetOriginalUpAxis(
  ));
  return ret;
}
  /// void  SetAxisSystem (const FbxAxisSystem &pAxisSystem)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxGlobalSettings_SetAxisSystem(JNIEnv * __env, jclass __jc,jlong lpjFbxGlobalSettings,jobject pAxisSystem)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxGlobalSettings *) lpjFbxGlobalSettings)->SetAxisSystem(
  (const FbxAxisSystem  &) * _lcvt.j2c_object_ref<jobject,FbxAxisSystem >(pAxisSystem)
  );
}
  /// FbxAxisSystem  GetAxisSystem ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGlobalSettings_GetAxisSystem(JNIEnv * __env, jclass __jc,jlong lpjFbxGlobalSettings)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxAxisSystem>(
  ((FbxGlobalSettings *) lpjFbxGlobalSettings)->GetAxisSystem(
  ));
  return ret;
}
  /// void  SetSystemUnit (const FbxSystemUnit &pOther)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxGlobalSettings_SetSystemUnit(JNIEnv * __env, jclass __jc,jlong lpjFbxGlobalSettings,jobject pOther)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxGlobalSettings *) lpjFbxGlobalSettings)->SetSystemUnit(
  (const FbxSystemUnit  &) * _lcvt.j2c_object_ref<jobject,FbxSystemUnit >(pOther)
  );
}
  /// FbxSystemUnit  GetSystemUnit () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGlobalSettings_GetSystemUnit(JNIEnv * __env, jclass __jc,jlong lpjFbxGlobalSettings)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxSystemUnit>(
  ((FbxGlobalSettings *) lpjFbxGlobalSettings)->GetSystemUnit(
  ));
  return ret;
}
  /// void  SetOriginalSystemUnit (const FbxSystemUnit &pOther)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxGlobalSettings_SetOriginalSystemUnit(JNIEnv * __env, jclass __jc,jlong lpjFbxGlobalSettings,jobject pOther)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxGlobalSettings *) lpjFbxGlobalSettings)->SetOriginalSystemUnit(
  (const FbxSystemUnit  &) * _lcvt.j2c_object_ref<jobject,FbxSystemUnit >(pOther)
  );
}
  /// FbxSystemUnit  GetOriginalSystemUnit () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGlobalSettings_GetOriginalSystemUnit(JNIEnv * __env, jclass __jc,jlong lpjFbxGlobalSettings)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxSystemUnit>(
  ((FbxGlobalSettings *) lpjFbxGlobalSettings)->GetOriginalSystemUnit(
  ));
  return ret;
}
  /// void  SetAmbientColor (FbxColor pAmbientColor)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxGlobalSettings_SetAmbientColor(JNIEnv * __env, jclass __jc,jlong lpjFbxGlobalSettings,jlong pAmbientColor)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxGlobalSettings *) lpjFbxGlobalSettings)->SetAmbientColor(
  ( FbxColor  )  _lcvt.j2c_object<jlong,FbxColor >(pAmbientColor)
  );
}
  /// FbxColor  GetAmbientColor () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGlobalSettings_GetAmbientColor(JNIEnv * __env, jclass __jc,jlong lpjFbxGlobalSettings)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxColor>(
  ((FbxGlobalSettings *) lpjFbxGlobalSettings)->GetAmbientColor(
  ));
  return ret;
}
  /// bool  SetDefaultCamera (const char *pCameraName)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxGlobalSettings_SetDefaultCamera(JNIEnv * __env, jclass __jc,jlong lpjFbxGlobalSettings,jstring pCameraName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxGlobalSettings *) lpjFbxGlobalSettings)->SetDefaultCamera(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pCameraName)
  ));
  return ret;
}
  /// FbxString  GetDefaultCamera () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGlobalSettings_GetDefaultCamera(JNIEnv * __env, jclass __jc,jlong lpjFbxGlobalSettings)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxString>(
  ((FbxGlobalSettings *) lpjFbxGlobalSettings)->GetDefaultCamera(
  ));
  return ret;
}
  /// void  SetTimeMode (FbxTime::EMode pTimeMode)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxGlobalSettings_SetTimeMode(JNIEnv * __env, jclass __jc,jlong lpjFbxGlobalSettings,jint pTimeMode)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxGlobalSettings *) lpjFbxGlobalSettings)->SetTimeMode(
  ( FbxTime::EMode  )  _lcvt.j2c<jint,FbxTime::EMode >(pTimeMode)
  );
}
  /// FbxTime::EMode  GetTimeMode () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxGlobalSettings_GetTimeMode(JNIEnv * __env, jclass __jc,jlong lpjFbxGlobalSettings)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxTime::EMode  >(
  ((FbxGlobalSettings *) lpjFbxGlobalSettings)->GetTimeMode(
  ));
  return ret;
}
  /// void  SetTimeProtocol (FbxTime::EProtocol pTimeProtocol)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxGlobalSettings_SetTimeProtocol(JNIEnv * __env, jclass __jc,jlong lpjFbxGlobalSettings,jint pTimeProtocol)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxGlobalSettings *) lpjFbxGlobalSettings)->SetTimeProtocol(
  ( FbxTime::EProtocol  )  _lcvt.j2c<jint,FbxTime::EProtocol >(pTimeProtocol)
  );
}
  /// FbxTime::EProtocol  GetTimeProtocol () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxGlobalSettings_GetTimeProtocol(JNIEnv * __env, jclass __jc,jlong lpjFbxGlobalSettings)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxTime::EProtocol  >(
  ((FbxGlobalSettings *) lpjFbxGlobalSettings)->GetTimeProtocol(
  ));
  return ret;
}
  /// void  SetSnapOnFrameMode (ESnapOnFrameMode pSnapOnFrameMode)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxGlobalSettings_SetSnapOnFrameMode(JNIEnv * __env, jclass __jc,jlong lpjFbxGlobalSettings,jint pSnapOnFrameMode)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxGlobalSettings *) lpjFbxGlobalSettings)->SetSnapOnFrameMode(
  ( FbxGlobalSettings::ESnapOnFrameMode  )  _lcvt.j2c<jint,FbxGlobalSettings::ESnapOnFrameMode >(pSnapOnFrameMode)
  );
}
  /// ESnapOnFrameMode  GetSnapOnFrameMode () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxGlobalSettings_GetSnapOnFrameMode(JNIEnv * __env, jclass __jc,jlong lpjFbxGlobalSettings)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxGlobalSettings::ESnapOnFrameMode  >(
  ((FbxGlobalSettings *) lpjFbxGlobalSettings)->GetSnapOnFrameMode(
  ));
  return ret;
}
  /// void  SetTimelineDefaultTimeSpan (const FbxTimeSpan &pTimeSpan)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxGlobalSettings_SetTimelineDefaultTimeSpan(JNIEnv * __env, jclass __jc,jlong lpjFbxGlobalSettings,jobject pTimeSpan)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxGlobalSettings *) lpjFbxGlobalSettings)->SetTimelineDefaultTimeSpan(
  (const FbxTimeSpan  &) * _lcvt.j2c_object_ref<jobject,FbxTimeSpan >(pTimeSpan)
  );
}
  /// void  GetTimelineDefaultTimeSpan (FbxTimeSpan &pTimeSpan) const
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxGlobalSettings_GetTimelineDefaultTimeSpan(JNIEnv * __env, jclass __jc,jlong lpjFbxGlobalSettings,jobject pTimeSpan)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxGlobalSettings *) lpjFbxGlobalSettings)->GetTimelineDefaultTimeSpan(
  ( FbxTimeSpan  &) * _lcvt.j2c_object_ref<jobject,FbxTimeSpan >(pTimeSpan)
  );
}
  /// void  SetCustomFrameRate (double pCustomFrameRate)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxGlobalSettings_SetCustomFrameRate(JNIEnv * __env, jclass __jc,jlong lpjFbxGlobalSettings,jdouble pCustomFrameRate)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxGlobalSettings *) lpjFbxGlobalSettings)->SetCustomFrameRate(
  ( double  )  _lcvt.j2c<jdouble, double  >(pCustomFrameRate)
  );
}
  /// double  GetCustomFrameRate () const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxGlobalSettings_GetCustomFrameRate(JNIEnv * __env, jclass __jc,jlong lpjFbxGlobalSettings)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxGlobalSettings *) lpjFbxGlobalSettings)->GetCustomFrameRate(
  ));
  return ret;
}
  /// int  GetTimeMarkerCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxGlobalSettings_GetTimeMarkerCount(JNIEnv * __env, jclass __jc,jlong lpjFbxGlobalSettings)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxGlobalSettings *) lpjFbxGlobalSettings)->GetTimeMarkerCount(
  ));
  return ret;
}
  /// TimeMarker  GetTimeMarker (int pIndex, FbxStatus *pStatus=NULL) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGlobalSettings_GetTimeMarker(JNIEnv * __env, jclass __jc,jlong lpjFbxGlobalSettings,jint pIndex,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
    jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxGlobalSettings::TimeMarker>(
  ((FbxGlobalSettings *) lpjFbxGlobalSettings)->GetTimeMarker(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// void  AddTimeMarker (const TimeMarker &pTimeMarker, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxGlobalSettings_AddTimeMarker(JNIEnv * __env, jclass __jc,jlong lpjFbxGlobalSettings,jobject pTimeMarker,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxGlobalSettings *) lpjFbxGlobalSettings)->AddTimeMarker(
  (const FbxGlobalSettings::TimeMarker  &) * _lcvt.j2c_object_ref<jobject,FbxGlobalSettings::TimeMarker >(pTimeMarker)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  );
}
  /// void  ReplaceTimeMarker (int pIndex, const TimeMarker &pTimeMarker, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxGlobalSettings_ReplaceTimeMarker(JNIEnv * __env, jclass __jc,jlong lpjFbxGlobalSettings,jint pIndex,jobject pTimeMarker,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxGlobalSettings *) lpjFbxGlobalSettings)->ReplaceTimeMarker(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ,
  (const FbxGlobalSettings::TimeMarker  &) * _lcvt.j2c_object_ref<jobject,FbxGlobalSettings::TimeMarker >(pTimeMarker)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  );
}
  /// void  RemoveAllTimeMarkers ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxGlobalSettings_RemoveAllTimeMarkers(JNIEnv * __env, jclass __jc,jlong lpjFbxGlobalSettings)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxGlobalSettings *) lpjFbxGlobalSettings)->RemoveAllTimeMarkers(
  );
}
  /// bool  SetCurrentTimeMarker (int pIndex, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxGlobalSettings_SetCurrentTimeMarker(JNIEnv * __env, jclass __jc,jlong lpjFbxGlobalSettings,jint pIndex,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxGlobalSettings *) lpjFbxGlobalSettings)->SetCurrentTimeMarker(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// int  GetCurrentTimeMarker () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxGlobalSettings_GetCurrentTimeMarker(JNIEnv * __env, jclass __jc,jlong lpjFbxGlobalSettings)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxGlobalSettings *) lpjFbxGlobalSettings)->GetCurrentTimeMarker(
  ));
  return ret;
}
  /// FbxGlobalSettings * Create( FbxObject* lpFbxObject,  const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGlobalSettings_Create(JNIEnv * __env, jclass __jc,jlong lpFbxObject,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxGlobalSettings>(
  FbxGlobalSettings::Create(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(lpFbxObject)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
