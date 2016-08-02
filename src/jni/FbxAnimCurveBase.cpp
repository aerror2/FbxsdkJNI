
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// virtual void  KeyClear ()=0
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveBase_KeyClear(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveBase)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveBase *) lpjFbxAnimCurveBase)->KeyClear(
  );
}
  /// virtual int  KeyGetCount () const =0
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxAnimCurveBase_KeyGetCount(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveBase)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxAnimCurveBase *) lpjFbxAnimCurveBase)->KeyGetCount(
  ));
  return ret;
}
  /// virtual int  KeyAdd (FbxTime pTime, FbxAnimCurveKeyBase &pKey, int *pLast=NULL)=0
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxAnimCurveBase_KeyAdd(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveBase,jlong pTime,jobject pKey,jintArray pLast)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxAnimCurveBase *) lpjFbxAnimCurveBase)->KeyAdd(
  ( FbxTime  )  _lcvt.j2c_object<jlong,FbxTime >(pTime)
  ,
  ( FbxAnimCurveKeyBase  &) * _lcvt.j2c_object_ref<jobject,FbxAnimCurveKeyBase >(pKey)
  ,
  ( int  *)  _lcvt.j2c_int_pt<jintArray,int>(pLast)
  ));
  return ret;
}
  /// virtual bool  KeySet (int pIndex, FbxAnimCurveKeyBase &pKey)=0
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveBase_KeySet(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveBase,jint pIndex,jobject pKey)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveBase *) lpjFbxAnimCurveBase)->KeySet(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ,
  ( FbxAnimCurveKeyBase  &) * _lcvt.j2c_object_ref<jobject,FbxAnimCurveKeyBase >(pKey)
  ));
  return ret;
}
  /// virtual bool  KeyRemove (int pIndex)=0
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveBase_KeyRemove(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveBase,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveBase *) lpjFbxAnimCurveBase)->KeyRemove(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// virtual bool  KeyRemove (int pStartIndex, int pEndIndex)=0
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveBase_KeyRemove1(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveBase,jint pStartIndex,jint pEndIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveBase *) lpjFbxAnimCurveBase)->KeyRemove(
  ( int  )  _lcvt.j2c<jint, int  >(pStartIndex)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pEndIndex)
  ));
  return ret;
}
  /// virtual FbxTime  KeyGetTime (int pKeyIndex) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimCurveBase_KeyGetTime(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveBase,jint pKeyIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxTime>(
  ((FbxAnimCurveBase *) lpjFbxAnimCurveBase)->KeyGetTime(
  ( int  )  _lcvt.j2c<jint, int  >(pKeyIndex)
  ));
  return ret;
}
  /// virtual void  KeySetTime (int pKeyIndex, FbxTime pTime)=0
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveBase_KeySetTime(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveBase,jint pKeyIndex,jlong pTime)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveBase *) lpjFbxAnimCurveBase)->KeySetTime(
  ( int  )  _lcvt.j2c<jint, int  >(pKeyIndex)
  ,
  ( FbxTime  )  _lcvt.j2c_object<jlong,FbxTime >(pTime)
  );
}
  /// void  SetPreExtrapolation (EExtrapolationType pExtrapolation)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveBase_SetPreExtrapolation(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveBase,jint pExtrapolation)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveBase *) lpjFbxAnimCurveBase)->SetPreExtrapolation(
  ( FbxAnimCurveBase::EExtrapolationType  )  _lcvt.j2c<jint,FbxAnimCurveBase::EExtrapolationType >(pExtrapolation)
  );
}
  /// EExtrapolationType  GetPreExtrapolation () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxAnimCurveBase_GetPreExtrapolation(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveBase)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxAnimCurveBase::EExtrapolationType  >(
  ((FbxAnimCurveBase *) lpjFbxAnimCurveBase)->GetPreExtrapolation(
  ));
  return ret;
}
  /// void  SetPreExtrapolationCount (unsigned long pCount)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveBase_SetPreExtrapolationCount(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveBase,jlong pCount)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveBase *) lpjFbxAnimCurveBase)->SetPreExtrapolationCount(
  (unsigned long  )  _lcvt.j2c<jlong,unsigned long  >(pCount)
  );
}
  /// unsigned long  GetPreExtrapolationCount () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimCurveBase_GetPreExtrapolationCount(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveBase)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j<jlong, unsigned long  >(
  ((FbxAnimCurveBase *) lpjFbxAnimCurveBase)->GetPreExtrapolationCount(
  ));
  return ret;
}
  /// void  SetPostExtrapolation (EExtrapolationType pExtrapolation)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveBase_SetPostExtrapolation(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveBase,jint pExtrapolation)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveBase *) lpjFbxAnimCurveBase)->SetPostExtrapolation(
  ( FbxAnimCurveBase::EExtrapolationType  )  _lcvt.j2c<jint,FbxAnimCurveBase::EExtrapolationType >(pExtrapolation)
  );
}
  /// EExtrapolationType  GetPostExtrapolation () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxAnimCurveBase_GetPostExtrapolation(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveBase)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxAnimCurveBase::EExtrapolationType  >(
  ((FbxAnimCurveBase *) lpjFbxAnimCurveBase)->GetPostExtrapolation(
  ));
  return ret;
}
  /// void  SetPostExtrapolationCount (unsigned long pCount)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveBase_SetPostExtrapolationCount(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveBase,jlong pCount)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveBase *) lpjFbxAnimCurveBase)->SetPostExtrapolationCount(
  (unsigned long  )  _lcvt.j2c<jlong,unsigned long  >(pCount)
  );
}
  /// unsigned long  GetPostExtrapolationCount () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimCurveBase_GetPostExtrapolationCount(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveBase)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j<jlong, unsigned long  >(
  ((FbxAnimCurveBase *) lpjFbxAnimCurveBase)->GetPostExtrapolationCount(
  ));
  return ret;
}
  /// virtual float  Evaluate (FbxTime pTime, int *pLast=NULL)=0
extern "C" JNIEXPORT jfloat JNICALL Java_fbxsdk_FbxAnimCurveBase_Evaluate(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveBase,jlong pTime,jintArray pLast)
{
  JNILocalConverter _lcvt(__env,__jc);
  jfloat ret=(jfloat)_lcvt.c2j<jfloat,  float  >(
  ((FbxAnimCurveBase *) lpjFbxAnimCurveBase)->Evaluate(
  ( FbxTime  )  _lcvt.j2c_object<jlong,FbxTime >(pTime)
  ,
  ( int  *)  _lcvt.j2c_int_pt<jintArray,int>(pLast)
  ));
  return ret;
}
  /// virtual float  EvaluateIndex (double pIndex)=0
extern "C" JNIEXPORT jfloat JNICALL Java_fbxsdk_FbxAnimCurveBase_EvaluateIndex(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveBase,jdouble pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jfloat ret=(jfloat)_lcvt.c2j<jfloat,  float  >(
  ((FbxAnimCurveBase *) lpjFbxAnimCurveBase)->EvaluateIndex(
  ( double  )  _lcvt.j2c<jdouble, double  >(pIndex)
  ));
  return ret;
}
  /// virtual bool  GetTimeInterval (FbxTimeSpan &pTimeInterval)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveBase_GetTimeInterval(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveBase,jobject pTimeInterval)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveBase *) lpjFbxAnimCurveBase)->GetTimeInterval(
  ( FbxTimeSpan  &) * _lcvt.j2c_object_ref<jobject,FbxTimeSpan >(pTimeInterval)
  ));
  return ret;
}
  /// FbxAnimCurveBase * Create( FbxManager* pContainer, const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimCurveBase_Create(JNIEnv * __env, jclass __jc,jlong pContainer,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAnimCurveBase>(
  FbxAnimCurveBase::Create(
  ( FbxManager  *)  _lcvt.j2c_object_pt<jlong, FbxManager>(pContainer)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
