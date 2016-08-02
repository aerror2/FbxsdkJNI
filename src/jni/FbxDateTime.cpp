//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// void  Clear ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxDateTime_Clear(JNIEnv * __env, jclass __jc,jlong lpjFbxDateTime)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxDateTime *) lpjFbxDateTime)->Clear(
  );
}
  /// bool  isValid () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxDateTime_isValid(JNIEnv * __env, jclass __jc,jlong lpjFbxDateTime)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxDateTime *) lpjFbxDateTime)->isValid(
  ));
  return ret;
}
  /// FbxDateTime ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxDateTime_meCreate(JNIEnv * __env, jclass __jc)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxDateTime>(
  new FbxDateTime(
  ));
  return ret;
}
  /// FbxDateTime (int pDay, int pMonth, int pYear, int pHour, int pMin, int pSec, int pMillisecond=0)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxDateTime_meCreate1(JNIEnv * __env, jclass __jc,jint pDay,jint pMonth,jint pYear,jint pHour,jint pMin,jint pSec,jint pMillisecond)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxDateTime>(
  new FbxDateTime(
  ( int  )  _lcvt.j2c<jint, int  >(pDay)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pMonth)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pYear)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pHour)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pMin)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pSec)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pMillisecond)
  ));
  return ret;
}
  /// void  setDate (int pDay, int pMonth, int pYear)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxDateTime_setDate(JNIEnv * __env, jclass __jc,jlong lpjFbxDateTime,jint pDay,jint pMonth,jint pYear)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxDateTime *) lpjFbxDateTime)->setDate(
  ( int  )  _lcvt.j2c<jint, int  >(pDay)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pMonth)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pYear)
  );
}
  /// void  setTime (int pHour, int pMin, int pSec, int pMillisecond=0)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxDateTime_setTime(JNIEnv * __env, jclass __jc,jlong lpjFbxDateTime,jint pHour,jint pMin,jint pSec,jint pMillisecond)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxDateTime *) lpjFbxDateTime)->setTime(
  ( int  )  _lcvt.j2c<jint, int  >(pHour)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pMin)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pSec)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pMillisecond)
  );
}
  /// FbxString  toString () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxDateTime_toString(JNIEnv * __env, jclass __jc,jlong lpjFbxDateTime)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxString>(
  ((FbxDateTime *) lpjFbxDateTime)->toString(
  ));
  return ret;
}
  /// void meDestroy(FbxDateTime * lpFbxDateTime)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxDateTime_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxDateTime)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxDateTime *) lpjFbxDateTime
  );
}
