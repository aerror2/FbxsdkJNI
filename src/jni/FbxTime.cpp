
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxTime (const FbxLongLong pTime=0)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxTime_meCreate(JNIEnv * __env, jclass __jc,jlong pTime)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxTime>(
  new FbxTime(
  (const FbxLongLong  )  _lcvt.j2c<jlong,const FbxLongLong  >(pTime)
  ));
  return ret;
}
  /// void  Set (FbxLongLong pTime)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxTime_Set(JNIEnv * __env, jclass __jc,jlong lpjFbxTime,jlong pTime)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxTime *) lpjFbxTime)->Set(
  ( FbxLongLong  )  _lcvt.j2c<jlong, FbxLongLong  >(pTime)
  );
}
  /// FbxLongLong  Get () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxTime_Get(JNIEnv * __env, jclass __jc,jlong lpjFbxTime)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j<jlong,  FbxLongLong  >(
  ((FbxTime *) lpjFbxTime)->Get(
  ));
  return ret;
}
  /// void  SetMilliSeconds (FbxLongLong pMilliSeconds)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxTime_SetMilliSeconds(JNIEnv * __env, jclass __jc,jlong lpjFbxTime,jlong pMilliSeconds)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxTime *) lpjFbxTime)->SetMilliSeconds(
  ( FbxLongLong  )  _lcvt.j2c<jlong, FbxLongLong  >(pMilliSeconds)
  );
}
  /// FbxLongLong  GetMilliSeconds () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxTime_GetMilliSeconds(JNIEnv * __env, jclass __jc,jlong lpjFbxTime)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j<jlong,  FbxLongLong  >(
  ((FbxTime *) lpjFbxTime)->GetMilliSeconds(
  ));
  return ret;
}
  /// void  SetSecondDouble (double pTime)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxTime_SetSecondDouble(JNIEnv * __env, jclass __jc,jlong lpjFbxTime,jdouble pTime)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxTime *) lpjFbxTime)->SetSecondDouble(
  ( double  )  _lcvt.j2c<jdouble, double  >(pTime)
  );
}
  /// double  GetSecondDouble () const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxTime_GetSecondDouble(JNIEnv * __env, jclass __jc,jlong lpjFbxTime)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxTime *) lpjFbxTime)->GetSecondDouble(
  ));
  return ret;
}
  /// void  SetTime (int pHour, int pMinute, int pSecond, int pFrame=0, int pField=0, EMode pTimeMode=eDefaultMode)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxTime_SetTime(JNIEnv * __env, jclass __jc,jlong lpjFbxTime,jint pHour,jint pMinute,jint pSecond,jint pFrame,jint pField,jint pTimeMode)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxTime *) lpjFbxTime)->SetTime(
  ( int  )  _lcvt.j2c<jint, int  >(pHour)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pMinute)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pSecond)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pFrame)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pField)
  ,
  ( FbxTime::EMode  )  _lcvt.j2c<jint,FbxTime::EMode >(pTimeMode)
  );
}
  /// void  SetTime (int pHour, int pMinute, int pSecond, int pFrame, int pField, int pResidual, EMode pTimeMode)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxTime_SetTime1(JNIEnv * __env, jclass __jc,jlong lpjFbxTime,jint pHour,jint pMinute,jint pSecond,jint pFrame,jint pField,jint pResidual,jint pTimeMode)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxTime *) lpjFbxTime)->SetTime(
  ( int  )  _lcvt.j2c<jint, int  >(pHour)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pMinute)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pSecond)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pFrame)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pField)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pResidual)
  ,
  ( FbxTime::EMode  )  _lcvt.j2c<jint,FbxTime::EMode >(pTimeMode)
  );
}
  /// bool  GetTime (int &pHour, int &pMinute, int &pSecond, int &pFrame, int &pField, int &pResidual, EMode pTimeMode=eDefaultMode) const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxTime_GetTime(JNIEnv * __env, jclass __jc,jlong lpjFbxTime,jobject pHour,jobject pMinute,jobject pSecond,jobject pFrame,jobject pField,jobject pResidual,jint pTimeMode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxTime *) lpjFbxTime)->GetTime(
  ( int  &) * _lcvt.j2c_int_ref<jobject,int>(pHour)
  ,
  ( int  &) * _lcvt.j2c_int_ref<jobject,int>(pMinute)
  ,
  ( int  &) * _lcvt.j2c_int_ref<jobject,int>(pSecond)
  ,
  ( int  &) * _lcvt.j2c_int_ref<jobject,int>(pFrame)
  ,
  ( int  &) * _lcvt.j2c_int_ref<jobject,int>(pField)
  ,
  ( int  &) * _lcvt.j2c_int_ref<jobject,int>(pResidual)
  ,
  ( FbxTime::EMode  )  _lcvt.j2c<jint,FbxTime::EMode >(pTimeMode)
  ));
  return ret;
}
  /// FbxTime  GetFramedTime (bool pRound=true) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxTime_GetFramedTime(JNIEnv * __env, jclass __jc,jlong lpjFbxTime,jboolean pRound)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxTime>(
  ((FbxTime *) lpjFbxTime)->GetFramedTime(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pRound)
  ));
  return ret;
}
  /// void  SetFrame (FbxLongLong pFrames, EMode pTimeMode=eDefaultMode)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxTime_SetFrame(JNIEnv * __env, jclass __jc,jlong lpjFbxTime,jlong pFrames,jint pTimeMode)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxTime *) lpjFbxTime)->SetFrame(
  ( FbxLongLong  )  _lcvt.j2c<jlong, FbxLongLong  >(pFrames)
  ,
  ( FbxTime::EMode  )  _lcvt.j2c<jint,FbxTime::EMode >(pTimeMode)
  );
}
  /// void  SetFramePrecise (FbxDouble pFrames, EMode pTimeMode=eDefaultMode)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxTime_SetFramePrecise(JNIEnv * __env, jclass __jc,jlong lpjFbxTime,jdouble pFrames,jint pTimeMode)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxTime *) lpjFbxTime)->SetFramePrecise(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(pFrames)
  ,
  ( FbxTime::EMode  )  _lcvt.j2c<jint,FbxTime::EMode >(pTimeMode)
  );
}
  /// int  GetHourCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxTime_GetHourCount(JNIEnv * __env, jclass __jc,jlong lpjFbxTime)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxTime *) lpjFbxTime)->GetHourCount(
  ));
  return ret;
}
  /// int  GetMinuteCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxTime_GetMinuteCount(JNIEnv * __env, jclass __jc,jlong lpjFbxTime)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxTime *) lpjFbxTime)->GetMinuteCount(
  ));
  return ret;
}
  /// int  GetSecondCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxTime_GetSecondCount(JNIEnv * __env, jclass __jc,jlong lpjFbxTime)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxTime *) lpjFbxTime)->GetSecondCount(
  ));
  return ret;
}
  /// FbxLongLong  GetFrameCount (EMode pTimeMode=eDefaultMode) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxTime_GetFrameCount(JNIEnv * __env, jclass __jc,jlong lpjFbxTime,jint pTimeMode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j<jlong,  FbxLongLong  >(
  ((FbxTime *) lpjFbxTime)->GetFrameCount(
  ( FbxTime::EMode  )  _lcvt.j2c<jint,FbxTime::EMode >(pTimeMode)
  ));
  return ret;
}
  /// FbxDouble  GetFrameCountPrecise (EMode pTimeMode=eDefaultMode) const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxTime_GetFrameCountPrecise(JNIEnv * __env, jclass __jc,jlong lpjFbxTime,jint pTimeMode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxTime *) lpjFbxTime)->GetFrameCountPrecise(
  ( FbxTime::EMode  )  _lcvt.j2c<jint,FbxTime::EMode >(pTimeMode)
  ));
  return ret;
}
  /// FbxLongLong  GetFieldCount (EMode pTimeMode=eDefaultMode) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxTime_GetFieldCount(JNIEnv * __env, jclass __jc,jlong lpjFbxTime,jint pTimeMode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j<jlong,  FbxLongLong  >(
  ((FbxTime *) lpjFbxTime)->GetFieldCount(
  ( FbxTime::EMode  )  _lcvt.j2c<jint,FbxTime::EMode >(pTimeMode)
  ));
  return ret;
}
  /// int  GetResidual (EMode pTimeMode=eDefaultMode) const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxTime_GetResidual(JNIEnv * __env, jclass __jc,jlong lpjFbxTime,jint pTimeMode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxTime *) lpjFbxTime)->GetResidual(
  ( FbxTime::EMode  )  _lcvt.j2c<jint,FbxTime::EMode >(pTimeMode)
  ));
  return ret;
}
  /// char  GetFrameSeparator (EMode pTimeMode=eDefaultMode) const
extern "C" JNIEXPORT jbyte JNICALL Java_fbxsdk_FbxTime_GetFrameSeparator(JNIEnv * __env, jclass __jc,jlong lpjFbxTime,jint pTimeMode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jbyte ret=(jbyte)_lcvt.c2j<jbyte,  char  >(
  ((FbxTime *) lpjFbxTime)->GetFrameSeparator(
  ( FbxTime::EMode  )  _lcvt.j2c<jint,FbxTime::EMode >(pTimeMode)
  ));
  return ret;
}
  /// char *  GetTimeString (char *pTimeString, const FbxUShort &pTimeStringSize, int pInfo=5, EMode pTimeMode=eDefaultMode, EProtocol pTimeFormat=eDefaultProtocol) const
extern "C" JNIEXPORT jstring JNICALL Java_fbxsdk_FbxTime_GetTimeString(JNIEnv * __env, jclass __jc,jlong lpjFbxTime,jstring pTimeString,jobject pTimeStringSize,jint pInfo,jint pTimeMode,jint pTimeFormat)
{
  JNILocalConverter _lcvt(__env,__jc);
  jstring ret=(jstring)_lcvt.c2j_string(
  ((FbxTime *) lpjFbxTime)->GetTimeString(
  ( char  *)  _lcvt.j2c_string<jstring,char>(pTimeString)
  ,
  (const FbxUShort  &) * _lcvt.j2c_FbxUShort_ref<jobject,FbxUShort>(pTimeStringSize)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pInfo)
  ,
  ( FbxTime::EMode  )  _lcvt.j2c<jint,FbxTime::EMode >(pTimeMode)
  ,
  ( FbxTime::EProtocol  )  _lcvt.j2c<jint,FbxTime::EProtocol >(pTimeFormat)
  ));
  return ret;
}
  /// FbxString  GetTimeString (EElement pStart=eHours, EElement pEnd=eResidual, EMode pTimeMode=eDefaultMode, EProtocol pTimeFormat=eDefaultProtocol) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxTime_GetTimeString1(JNIEnv * __env, jclass __jc,jlong lpjFbxTime,jint pStart,jint pEnd,jint pTimeMode,jint pTimeFormat)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxString>(
  ((FbxTime *) lpjFbxTime)->GetTimeString(
  ( FbxTime::EElement  )  _lcvt.j2c<jint,FbxTime::EElement >(pStart)
  ,
  ( FbxTime::EElement  )  _lcvt.j2c<jint,FbxTime::EElement >(pEnd)
  ,
  ( FbxTime::EMode  )  _lcvt.j2c<jint,FbxTime::EMode >(pTimeMode)
  ,
  ( FbxTime::EProtocol  )  _lcvt.j2c<jint,FbxTime::EProtocol >(pTimeFormat)
  ));
  return ret;
}
  /// bool  SetTimeString (const char *pTime, EMode pTimeMode=eDefaultMode, EProtocol pTimeFormat=eDefaultProtocol)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxTime_SetTimeString(JNIEnv * __env, jclass __jc,jlong lpjFbxTime,jstring pTime,jint pTimeMode,jint pTimeFormat)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxTime *) lpjFbxTime)->SetTimeString(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pTime)
  ,
  ( FbxTime::EMode  )  _lcvt.j2c<jint,FbxTime::EMode >(pTimeMode)
  ,
  ( FbxTime::EProtocol  )  _lcvt.j2c<jint,FbxTime::EProtocol >(pTimeFormat)
  ));
  return ret;
}
  /// void meDestroy(FbxTime * lpFbxTime)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxTime_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxTime)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxTime *) lpjFbxTime
  );
}
