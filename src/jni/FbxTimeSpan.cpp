
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxTimeSpan ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxTimeSpan_meCreate(JNIEnv * __env, jclass __jc)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxTimeSpan>(
  new FbxTimeSpan(
  ));
  return ret;
}
  /// FbxTimeSpan (FbxTime pStart, FbxTime pStop)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxTimeSpan_meCreate1(JNIEnv * __env, jclass __jc,jlong pStart,jlong pStop)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxTimeSpan>(
  new FbxTimeSpan(
  ( FbxTime  )  _lcvt.j2c_object<jlong,FbxTime >(pStart)
  ,
  ( FbxTime  )  _lcvt.j2c_object<jlong,FbxTime >(pStop)
  ));
  return ret;
}
  /// void  Set (FbxTime pStart, FbxTime pStop)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxTimeSpan_Set(JNIEnv * __env, jclass __jc,jlong lpjFbxTimeSpan,jlong pStart,jlong pStop)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxTimeSpan *) lpjFbxTimeSpan)->Set(
  ( FbxTime  )  _lcvt.j2c_object<jlong,FbxTime >(pStart)
  ,
  ( FbxTime  )  _lcvt.j2c_object<jlong,FbxTime >(pStop)
  );
}
  /// void  SetStart (FbxTime pStart)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxTimeSpan_SetStart(JNIEnv * __env, jclass __jc,jlong lpjFbxTimeSpan,jlong pStart)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxTimeSpan *) lpjFbxTimeSpan)->SetStart(
  ( FbxTime  )  _lcvt.j2c_object<jlong,FbxTime >(pStart)
  );
}
  /// void  SetStop (FbxTime pStop)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxTimeSpan_SetStop(JNIEnv * __env, jclass __jc,jlong lpjFbxTimeSpan,jlong pStop)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxTimeSpan *) lpjFbxTimeSpan)->SetStop(
  ( FbxTime  )  _lcvt.j2c_object<jlong,FbxTime >(pStop)
  );
}
  /// FbxTime  GetStart () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxTimeSpan_GetStart(JNIEnv * __env, jclass __jc,jlong lpjFbxTimeSpan)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxTime>(
  ((FbxTimeSpan *) lpjFbxTimeSpan)->GetStart(
  ));
  return ret;
}
  /// FbxTime  GetStop () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxTimeSpan_GetStop(JNIEnv * __env, jclass __jc,jlong lpjFbxTimeSpan)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxTime>(
  ((FbxTimeSpan *) lpjFbxTimeSpan)->GetStop(
  ));
  return ret;
}
  /// FbxTime  GetDuration () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxTimeSpan_GetDuration(JNIEnv * __env, jclass __jc,jlong lpjFbxTimeSpan)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxTime>(
  ((FbxTimeSpan *) lpjFbxTimeSpan)->GetDuration(
  ));
  return ret;
}
  /// FbxTime  GetSignedDuration () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxTimeSpan_GetSignedDuration(JNIEnv * __env, jclass __jc,jlong lpjFbxTimeSpan)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxTime>(
  ((FbxTimeSpan *) lpjFbxTimeSpan)->GetSignedDuration(
  ));
  return ret;
}
  /// int  GetDirection () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxTimeSpan_GetDirection(JNIEnv * __env, jclass __jc,jlong lpjFbxTimeSpan)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxTimeSpan *) lpjFbxTimeSpan)->GetDirection(
  ));
  return ret;
}
  /// bool  IsInside (FbxTime pTime) const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxTimeSpan_IsInside(JNIEnv * __env, jclass __jc,jlong lpjFbxTimeSpan,jlong pTime)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxTimeSpan *) lpjFbxTimeSpan)->IsInside(
  ( FbxTime  )  _lcvt.j2c_object<jlong,FbxTime >(pTime)
  ));
  return ret;
}
  /// FbxTimeSpan  Intersect (const FbxTimeSpan &pTime) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxTimeSpan_Intersect(JNIEnv * __env, jclass __jc,jlong lpjFbxTimeSpan,jobject pTime)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxTimeSpan>(
  ((FbxTimeSpan *) lpjFbxTimeSpan)->Intersect(
  (const FbxTimeSpan  &) * _lcvt.j2c_object_ref<jobject,FbxTimeSpan >(pTime)
  ));
  return ret;
}
  /// void  UnionAssignment (const FbxTimeSpan &pSpan, int pDirection=FBXSDK_TIME_FORWARD)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxTimeSpan_UnionAssignment(JNIEnv * __env, jclass __jc,jlong lpjFbxTimeSpan,jobject pSpan,jint pDirection)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxTimeSpan *) lpjFbxTimeSpan)->UnionAssignment(
  (const FbxTimeSpan  &) * _lcvt.j2c_object_ref<jobject,FbxTimeSpan >(pSpan)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pDirection)
  );
}
  /// void meDestroy(FbxTimeSpan * lpFbxTimeSpan)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxTimeSpan_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxTimeSpan)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxTimeSpan *) lpjFbxTimeSpan
  );
}
