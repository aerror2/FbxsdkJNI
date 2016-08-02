//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// bool  Open (const char *pFolderPath_UTF8)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxFolder_Open(JNIEnv * __env, jclass __jc,jlong lpjFbxFolder,jstring pFolderPath_UTF8)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxFolder *) lpjFbxFolder)->Open(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pFolderPath_UTF8)
  ));
  return ret;
}
  /// bool  Next ()
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxFolder_Next(JNIEnv * __env, jclass __jc,jlong lpjFbxFolder)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxFolder *) lpjFbxFolder)->Next(
  ));
  return ret;
}
  /// EEntryType  GetEntryType () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxFolder_GetEntryType(JNIEnv * __env, jclass __jc,jlong lpjFbxFolder)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxFolder::EEntryType  >(
  ((FbxFolder *) lpjFbxFolder)->GetEntryType(
  ));
  return ret;
}
  /// FbxString  GetEntryName () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxFolder_GetEntryName(JNIEnv * __env, jclass __jc,jlong lpjFbxFolder)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxString>(
  ((FbxFolder *) lpjFbxFolder)->GetEntryName(
  ));
  return ret;
}
  /// char *  GetEntryExtension () const
extern "C" JNIEXPORT jstring JNICALL Java_fbxsdk_FbxFolder_GetEntryExtension(JNIEnv * __env, jclass __jc,jlong lpjFbxFolder)
{
  JNILocalConverter _lcvt(__env,__jc);
  jstring ret=(jstring)_lcvt.c2j_string(
  ((FbxFolder *) lpjFbxFolder)->GetEntryExtension(
  ));
  return ret;
}
  /// void  Close ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxFolder_Close(JNIEnv * __env, jclass __jc,jlong lpjFbxFolder)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxFolder *) lpjFbxFolder)->Close(
  );
}
  /// bool  IsOpen () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxFolder_IsOpen(JNIEnv * __env, jclass __jc,jlong lpjFbxFolder)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxFolder *) lpjFbxFolder)->IsOpen(
  ));
  return ret;
}
