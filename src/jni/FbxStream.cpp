//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// virtual EState  GetState ()=0
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxStream_GetState(JNIEnv * __env, jclass __jc,jlong lpjFbxStream)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxStream::EState  >(
  ((FbxStream *) lpjFbxStream)->GetState(
  ));
  return ret;
}
  /// virtual bool  Open (void *pStreamData)=0
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxStream_Open(JNIEnv * __env, jclass __jc,jlong lpjFbxStream,jlong pStreamData)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxStream *) lpjFbxStream)->Open(
  ( void  *)  _lcvt.j2c_void_pt(pStreamData)
  ));
  return ret;
}
  /// virtual bool  Close ()=0
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxStream_Close(JNIEnv * __env, jclass __jc,jlong lpjFbxStream)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxStream *) lpjFbxStream)->Close(
  ));
  return ret;
}
  /// virtual bool  Flush ()=0
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxStream_Flush(JNIEnv * __env, jclass __jc,jlong lpjFbxStream)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxStream *) lpjFbxStream)->Flush(
  ));
  return ret;
}
  /// virtual int  Write (const void *pData, int pSize)=0
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxStream_Write(JNIEnv * __env, jclass __jc,jlong lpjFbxStream,jlong pData,jint pSize)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxStream *) lpjFbxStream)->Write(
  (const void  *)  _lcvt.j2c_void_pt(pData)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pSize)
  ));
  return ret;
}
  /// virtual int  Read (void *pData, int pSize) const =0
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxStream_Read(JNIEnv * __env, jclass __jc,jlong lpjFbxStream,jlong pData,jint pSize)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxStream *) lpjFbxStream)->Read(
  ( void  *)  _lcvt.j2c_void_pt(pData)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pSize)
  ));
  return ret;
}
  /// virtual char *  ReadString (char *pBuffer, int pMaxSize, bool pStopAtFirstWhiteSpace=false)
extern "C" JNIEXPORT jstring JNICALL Java_fbxsdk_FbxStream_ReadString(JNIEnv * __env, jclass __jc,jlong lpjFbxStream,jstring pBuffer,jint pMaxSize,jboolean pStopAtFirstWhiteSpace)
{
  JNILocalConverter _lcvt(__env,__jc);
  jstring ret=(jstring)_lcvt.c2j_string(
  ((FbxStream *) lpjFbxStream)->ReadString(
  ( char  *)  _lcvt.j2c_string<jstring,char>(pBuffer)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pMaxSize)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pStopAtFirstWhiteSpace)
  ));
  return ret;
}
  /// virtual int  GetReaderID () const =0
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxStream_GetReaderID(JNIEnv * __env, jclass __jc,jlong lpjFbxStream)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxStream *) lpjFbxStream)->GetReaderID(
  ));
  return ret;
}
  /// virtual int  GetWriterID () const =0
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxStream_GetWriterID(JNIEnv * __env, jclass __jc,jlong lpjFbxStream)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxStream *) lpjFbxStream)->GetWriterID(
  ));
  return ret;
}
  /// virtual void  Seek (const FbxInt64 &pOffset, const FbxFile::ESeekPos &pSeekPos)=0
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxStream_Seek(JNIEnv * __env, jclass __jc,jlong lpjFbxStream,jobject pOffset,jobject pSeekPos)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxStream *) lpjFbxStream)->Seek(
  (const FbxInt64  &) * _lcvt.j2c_FbxInt64_ref<jobject,FbxInt64>(pOffset)
  ,
  (const FbxFile::ESeekPos  &) * _lcvt.j2c_int_ref<jobject,FbxFile::ESeekPos>(pSeekPos)
  );
}
  /// virtual long  GetPosition () const =0
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxStream_GetPosition(JNIEnv * __env, jclass __jc,jlong lpjFbxStream)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j<jlong,  long  >(
  ((FbxStream *) lpjFbxStream)->GetPosition(
  ));
  return ret;
}
  /// virtual void  SetPosition (long pPosition)=0
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxStream_SetPosition(JNIEnv * __env, jclass __jc,jlong lpjFbxStream,jlong pPosition)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxStream *) lpjFbxStream)->SetPosition(
  ( long  )  _lcvt.j2c<jlong, long  >(pPosition)
  );
}
  /// virtual int  GetError () const =0
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxStream_GetError(JNIEnv * __env, jclass __jc,jlong lpjFbxStream)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxStream *) lpjFbxStream)->GetError(
  ));
  return ret;
}
  /// virtual void  ClearError ()=0
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxStream_ClearError(JNIEnv * __env, jclass __jc,jlong lpjFbxStream)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxStream *) lpjFbxStream)->ClearError(
  );
}
