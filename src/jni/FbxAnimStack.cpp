//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// void  Reset (const FbxTakeInfo *pTakeInfo=NULL)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimStack_Reset(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimStack,jlong pTakeInfo)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimStack *) lpjFbxAnimStack)->Reset(
  (const FbxTakeInfo  *)  _lcvt.j2c_object_pt<jlong, FbxTakeInfo>(pTakeInfo)
  );
}
  /// FbxTimeSpan  GetLocalTimeSpan () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimStack_GetLocalTimeSpan(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimStack)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxTimeSpan>(
  ((FbxAnimStack *) lpjFbxAnimStack)->GetLocalTimeSpan(
  ));
  return ret;
}
  /// void  SetLocalTimeSpan (FbxTimeSpan &pTimeSpan)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimStack_SetLocalTimeSpan(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimStack,jobject pTimeSpan)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimStack *) lpjFbxAnimStack)->SetLocalTimeSpan(
  ( FbxTimeSpan  &) * _lcvt.j2c_object_ref<jobject,FbxTimeSpan >(pTimeSpan)
  );
}
  /// FbxTimeSpan  GetReferenceTimeSpan () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimStack_GetReferenceTimeSpan(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimStack)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxTimeSpan>(
  ((FbxAnimStack *) lpjFbxAnimStack)->GetReferenceTimeSpan(
  ));
  return ret;
}
  /// void  SetReferenceTimeSpan (FbxTimeSpan &pTimeSpan)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimStack_SetReferenceTimeSpan(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimStack,jobject pTimeSpan)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimStack *) lpjFbxAnimStack)->SetReferenceTimeSpan(
  ( FbxTimeSpan  &) * _lcvt.j2c_object_ref<jobject,FbxTimeSpan >(pTimeSpan)
  );
}
  /// bool  BakeLayers (FbxAnimEvaluator *pEvaluator, FbxTime pStart, FbxTime pStop, FbxTime pPeriod)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimStack_BakeLayers(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimStack,jlong pEvaluator,jlong pStart,jlong pStop,jlong pPeriod)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimStack *) lpjFbxAnimStack)->BakeLayers(
  ( FbxAnimEvaluator  *)  _lcvt.j2c_object_pt<jlong, FbxAnimEvaluator>(pEvaluator)
  ,
  ( FbxTime  )  _lcvt.j2c_object<jlong,FbxTime >(pStart)
  ,
  ( FbxTime  )  _lcvt.j2c_object<jlong,FbxTime >(pStop)
  ,
  ( FbxTime  )  _lcvt.j2c_object<jlong,FbxTime >(pPeriod)
  ));
  return ret;
}
  /// FbxPropertyT< FbxString >  Description
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimStack_mepSetDescription(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimStack,jlong lpFbxString)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimStack *) lpjFbxAnimStack)->Description.Set(
  ( FbxString  )  _lcvt.j2c_object<jlong,FbxString >(lpFbxString)
  );
}
  /// FbxPropertyT< FbxString >  Description
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimStack_mepGetDescription(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimStack)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxString>(
  ((FbxAnimStack *) lpjFbxAnimStack)->Description.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxString >  Description
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimStack_mptGetDescription(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimStack)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxString   >(
   (&((FbxAnimStack *) lpjFbxAnimStack)->Description
  ));
  return ret;
}
  /// FbxPropertyT< FbxTime >  LocalStart
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimStack_mepSetLocalStart(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimStack,jlong lpFbxTime)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimStack *) lpjFbxAnimStack)->LocalStart.Set(
  ( FbxTime  )  _lcvt.j2c_object<jlong,FbxTime >(lpFbxTime)
  );
}
  /// FbxPropertyT< FbxTime >  LocalStart
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimStack_mepGetLocalStart(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimStack)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxTime>(
  ((FbxAnimStack *) lpjFbxAnimStack)->LocalStart.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxTime >  LocalStart
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimStack_mptGetLocalStart(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimStack)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxTime   >(
   (&((FbxAnimStack *) lpjFbxAnimStack)->LocalStart
  ));
  return ret;
}
  /// FbxPropertyT< FbxTime >  LocalStop
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimStack_mepSetLocalStop(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimStack,jlong lpFbxTime)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimStack *) lpjFbxAnimStack)->LocalStop.Set(
  ( FbxTime  )  _lcvt.j2c_object<jlong,FbxTime >(lpFbxTime)
  );
}
  /// FbxPropertyT< FbxTime >  LocalStop
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimStack_mepGetLocalStop(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimStack)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxTime>(
  ((FbxAnimStack *) lpjFbxAnimStack)->LocalStop.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxTime >  LocalStop
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimStack_mptGetLocalStop(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimStack)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxTime   >(
   (&((FbxAnimStack *) lpjFbxAnimStack)->LocalStop
  ));
  return ret;
}
  /// FbxPropertyT< FbxTime >  ReferenceStart
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimStack_mepSetReferenceStart(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimStack,jlong lpFbxTime)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimStack *) lpjFbxAnimStack)->ReferenceStart.Set(
  ( FbxTime  )  _lcvt.j2c_object<jlong,FbxTime >(lpFbxTime)
  );
}
  /// FbxPropertyT< FbxTime >  ReferenceStart
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimStack_mepGetReferenceStart(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimStack)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxTime>(
  ((FbxAnimStack *) lpjFbxAnimStack)->ReferenceStart.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxTime >  ReferenceStart
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimStack_mptGetReferenceStart(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimStack)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxTime   >(
   (&((FbxAnimStack *) lpjFbxAnimStack)->ReferenceStart
  ));
  return ret;
}
  /// FbxPropertyT< FbxTime >  ReferenceStop
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimStack_mepSetReferenceStop(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimStack,jlong lpFbxTime)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimStack *) lpjFbxAnimStack)->ReferenceStop.Set(
  ( FbxTime  )  _lcvt.j2c_object<jlong,FbxTime >(lpFbxTime)
  );
}
  /// FbxPropertyT< FbxTime >  ReferenceStop
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimStack_mepGetReferenceStop(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimStack)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxTime>(
  ((FbxAnimStack *) lpjFbxAnimStack)->ReferenceStop.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxTime >  ReferenceStop
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimStack_mptGetReferenceStop(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimStack)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxTime   >(
   (&((FbxAnimStack *) lpjFbxAnimStack)->ReferenceStop
  ));
  return ret;
}
  /// FbxAnimStack * Create( FbxCollection* lpFbxCollection,  const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimStack_Create(JNIEnv * __env, jclass __jc,jlong lpFbxCollection,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAnimStack>(
  FbxAnimStack::Create(
  ( FbxCollection  *)  _lcvt.j2c_object_pt<jlong, FbxCollection>(lpFbxCollection)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
