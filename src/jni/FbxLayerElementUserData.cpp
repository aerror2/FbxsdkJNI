//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxDataType  GetDataType (int pIndex) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLayerElementUserData_GetDataType(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementUserData,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxDataType>(
  ((FbxLayerElementUserData *) lpjFbxLayerElementUserData)->GetDataType(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// FbxDataType  GetDataType (const char *pName) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLayerElementUserData_GetDataType1(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementUserData,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxDataType>(
  ((FbxLayerElementUserData *) lpjFbxLayerElementUserData)->GetDataType(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
  /// const char *  GetDataName (int pIndex) const
extern "C" JNIEXPORT jstring JNICALL Java_fbxsdk_FbxLayerElementUserData_GetDataName(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementUserData,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jstring ret=(jstring)_lcvt.c2j_string(
  ((FbxLayerElementUserData *) lpjFbxLayerElementUserData)->GetDataName(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// void  ResizeAllDirectArrays (int pSize)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLayerElementUserData_ResizeAllDirectArrays(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementUserData,jint pSize)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLayerElementUserData *) lpjFbxLayerElementUserData)->ResizeAllDirectArrays(
  ( int  )  _lcvt.j2c<jint, int  >(pSize)
  );
}
  /// void  RemoveFromAllDirectArrays (int pIndex)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLayerElementUserData_RemoveFromAllDirectArrays(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementUserData,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLayerElementUserData *) lpjFbxLayerElementUserData)->RemoveFromAllDirectArrays(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  );
}
  /// int  GetArrayCount (int pIndex) const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLayerElementUserData_GetArrayCount(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementUserData,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxLayerElementUserData *) lpjFbxLayerElementUserData)->GetArrayCount(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// int  GetId () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLayerElementUserData_GetId(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementUserData)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxLayerElementUserData *) lpjFbxLayerElementUserData)->GetId(
  ));
  return ret;
}
  /// int  GetDirectArrayCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLayerElementUserData_GetDirectArrayCount(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementUserData)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxLayerElementUserData *) lpjFbxLayerElementUserData)->GetDirectArrayCount(
  ));
  return ret;
}
  /// bool  Clear ()
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxLayerElementUserData_Clear(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementUserData)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxLayerElementUserData *) lpjFbxLayerElementUserData)->Clear(
  ));
  return ret;
}
  /// virtual int  MemorySize () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLayerElementUserData_MemorySize(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementUserData)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxLayerElementUserData *) lpjFbxLayerElementUserData)->MemorySize(
  ));
  return ret;
}
