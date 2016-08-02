//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// void  Reset ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxStatistics_Reset(JNIEnv * __env, jclass __jc,jlong lpjFbxStatistics)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxStatistics *) lpjFbxStatistics)->Reset(
  );
}
  /// int  GetNbItems () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxStatistics_GetNbItems(JNIEnv * __env, jclass __jc,jlong lpjFbxStatistics)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxStatistics *) lpjFbxStatistics)->GetNbItems(
  ));
  return ret;
}
  /// bool  GetItemPair (int pNum, FbxString &pItemName, int &pItemCount) const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxStatistics_GetItemPair(JNIEnv * __env, jclass __jc,jlong lpjFbxStatistics,jint pNum,jobject pItemName,jobject pItemCount)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxStatistics *) lpjFbxStatistics)->GetItemPair(
  ( int  )  _lcvt.j2c<jint, int  >(pNum)
  ,
  ( FbxString  &) * _lcvt.j2c_object_ref<jobject,FbxString >(pItemName)
  ,
  ( int  &) * _lcvt.j2c_int_ref<jobject,int>(pItemCount)
  ));
  return ret;
}
  /// FbxStatistics ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxStatistics_meCreate(JNIEnv * __env, jclass __jc)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxStatistics>(
  new FbxStatistics(
  ));
  return ret;
}
  /// virtual  ~FbxStatistics ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxStatistics_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxStatistics)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxStatistics *) lpjFbxStatistics
  );
}
