//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxCharPtrSet (int pItemPerBlock=20)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharPtrSet_meCreate(JNIEnv * __env, jclass __jc,jint pItemPerBlock)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxCharPtrSet>(
  new FbxCharPtrSet(
  ( int  )  _lcvt.j2c<jint, int  >(pItemPerBlock)
  ));
  return ret;
}
  /// ~FbxCharPtrSet ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharPtrSet_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxCharPtrSet)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxCharPtrSet *) lpjFbxCharPtrSet
  );
}
  /// void  Add (const char *pReference, FbxHandle pItem)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharPtrSet_Add(JNIEnv * __env, jclass __jc,jlong lpjFbxCharPtrSet,jstring pReference,jlong pItem)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharPtrSet *) lpjFbxCharPtrSet)->Add(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pReference)
  ,
  ( FbxHandle  )  _lcvt.j2c<jlong, FbxHandle  >(pItem)
  );
}
  /// bool  Remove (const char *pReference)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCharPtrSet_Remove(JNIEnv * __env, jclass __jc,jlong lpjFbxCharPtrSet,jstring pReference)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxCharPtrSet *) lpjFbxCharPtrSet)->Remove(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pReference)
  ));
  return ret;
}
  /// FbxHandle  Get (const char *pReference, int *PIndex=NULL)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharPtrSet_Get(JNIEnv * __env, jclass __jc,jlong lpjFbxCharPtrSet,jstring pReference,jintArray PIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j<jlong,  FbxHandle  >(
  ((FbxCharPtrSet *) lpjFbxCharPtrSet)->Get(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pReference)
  ,
  ( int  *)  _lcvt.j2c_int_pt<jintArray,int>(PIndex)
  ));
  return ret;
}
  /// FbxHandle  GetFromIndex (int pIndex, const char **pReference=NULL)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharPtrSet_GetFromIndex(JNIEnv * __env, jclass __jc,jlong lpjFbxCharPtrSet,jint pIndex,jobjectArray pReference)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j<jlong,  FbxHandle  >(
  ((FbxCharPtrSet *) lpjFbxCharPtrSet)->GetFromIndex(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ,
  (const char  **)  _lcvt.j2c_string_pt<jobjectArray,char>(pReference)
  ));
  return ret;
}
  /// void  RemoveFromIndex (int pIndex)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharPtrSet_RemoveFromIndex(JNIEnv * __env, jclass __jc,jlong lpjFbxCharPtrSet,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharPtrSet *) lpjFbxCharPtrSet)->RemoveFromIndex(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  );
}
  /// int  GetCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxCharPtrSet_GetCount(JNIEnv * __env, jclass __jc,jlong lpjFbxCharPtrSet)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxCharPtrSet *) lpjFbxCharPtrSet)->GetCount(
  ));
  return ret;
}
  /// void  Sort ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharPtrSet_Sort(JNIEnv * __env, jclass __jc,jlong lpjFbxCharPtrSet)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharPtrSet *) lpjFbxCharPtrSet)->Sort(
  );
}
  /// void  Clear ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharPtrSet_Clear(JNIEnv * __env, jclass __jc,jlong lpjFbxCharPtrSet)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharPtrSet *) lpjFbxCharPtrSet)->Clear(
  );
}
