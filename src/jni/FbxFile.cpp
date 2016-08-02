//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxFile ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxFile_meCreate(JNIEnv * __env, jclass __jc)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxFile>(
  new FbxFile(
  ));
  return ret;
}
  /// virtual  ~FbxFile ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxFile_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxFile)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxFile *) lpjFbxFile
  );
}
  /// virtual bool  Open (const char *pFileName_UTF8, const EMode pMode=eCreateReadWrite, const bool pBinary=true)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxFile_Open(JNIEnv * __env, jclass __jc,jlong lpjFbxFile,jstring pFileName_UTF8,jint pMode,jboolean pBinary)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxFile *) lpjFbxFile)->Open(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pFileName_UTF8)
  ,
  (const FbxFile::EMode  )  _lcvt.j2c<jint,FbxFile::EMode >(pMode)
  ,
  (const bool  )  _lcvt.j2c<jboolean,const bool  >(pBinary)
  ));
  return ret;
}
  /// virtual bool  Open (FbxStream *pStream, void *pStreamData, const char *pMode)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxFile_Open1(JNIEnv * __env, jclass __jc,jlong lpjFbxFile,jlong pStream,jlong pStreamData,jstring pMode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxFile *) lpjFbxFile)->Open(
  ( FbxStream  *)  _lcvt.j2c_object_pt<jlong, FbxStream>(pStream)
  ,
  ( void  *)  _lcvt.j2c_void_pt(pStreamData)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pMode)
  ));
  return ret;
}
  /// virtual bool  Close ()
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxFile_Close(JNIEnv * __env, jclass __jc,jlong lpjFbxFile)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxFile *) lpjFbxFile)->Close(
  ));
  return ret;
}
  /// virtual void  Seek (const FbxInt64 pOffset, const ESeekPos pSeekPos=eBegin)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxFile_Seek(JNIEnv * __env, jclass __jc,jlong lpjFbxFile,jlong pOffset,jint pSeekPos)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxFile *) lpjFbxFile)->Seek(
  (const FbxInt64  )  _lcvt.j2c<jlong,const FbxInt64  >(pOffset)
  ,
  (const FbxFile::ESeekPos  )  _lcvt.j2c<jint,FbxFile::ESeekPos >(pSeekPos)
  );
}
  /// virtual FbxInt64  Tell () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxFile_Tell(JNIEnv * __env, jclass __jc,jlong lpjFbxFile)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j<jlong,  FbxInt64  >(
  ((FbxFile *) lpjFbxFile)->Tell(
  ));
  return ret;
}
  /// virtual size_t  Read (void *pDstBuf, const size_t pSize)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxFile_Read(JNIEnv * __env, jclass __jc,jlong lpjFbxFile,jlong pDstBuf,jlong pSize)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j<jlong,  size_t  >(
  ((FbxFile *) lpjFbxFile)->Read(
  ( void  *)  _lcvt.j2c_void_pt(pDstBuf)
  ,
  (const size_t  )  _lcvt.j2c<jlong,const size_t  >(pSize)
  ));
  return ret;
}
  /// virtual char *  ReadString (char *pDstBuf, const size_t pDstSize, bool pStopAtFirstWhiteSpace=false)
extern "C" JNIEXPORT jstring JNICALL Java_fbxsdk_FbxFile_ReadString(JNIEnv * __env, jclass __jc,jlong lpjFbxFile,jstring pDstBuf,jlong pDstSize,jboolean pStopAtFirstWhiteSpace)
{
  JNILocalConverter _lcvt(__env,__jc);
  jstring ret=(jstring)_lcvt.c2j_string(
  ((FbxFile *) lpjFbxFile)->ReadString(
  ( char  *)  _lcvt.j2c_string<jstring,char>(pDstBuf)
  ,
  (const size_t  )  _lcvt.j2c<jlong,const size_t  >(pDstSize)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pStopAtFirstWhiteSpace)
  ));
  return ret;
}
  /// virtual size_t  Write (const void *pSrcBuf, const size_t pSize)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxFile_Write(JNIEnv * __env, jclass __jc,jlong lpjFbxFile,jlong pSrcBuf,jlong pSize)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j<jlong,  size_t  >(
  ((FbxFile *) lpjFbxFile)->Write(
  (const void  *)  _lcvt.j2c_void_pt(pSrcBuf)
  ,
  (const size_t  )  _lcvt.j2c<jlong,const size_t  >(pSize)
  ));
  return ret;
}
  /// virtual bool  Truncate (const FbxInt64 pSize)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxFile_Truncate(JNIEnv * __env, jclass __jc,jlong lpjFbxFile,jlong pSize)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxFile *) lpjFbxFile)->Truncate(
  (const FbxInt64  )  _lcvt.j2c<jlong,const FbxInt64  >(pSize)
  ));
  return ret;
}
  /// virtual bool  EndOfFile () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxFile_EndOfFile(JNIEnv * __env, jclass __jc,jlong lpjFbxFile)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxFile *) lpjFbxFile)->EndOfFile(
  ));
  return ret;
}
  /// virtual FbxInt64  GetSize ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxFile_GetSize(JNIEnv * __env, jclass __jc,jlong lpjFbxFile)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j<jlong,  FbxInt64  >(
  ((FbxFile *) lpjFbxFile)->GetSize(
  ));
  return ret;
}
  /// virtual void  GetMemoryFileInfo (void **pMemPtr, size_t pSize)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxFile_GetMemoryFileInfo(JNIEnv * __env, jclass __jc,jlong lpjFbxFile,jlongArray pMemPtr,jlong pSize)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxFile *) lpjFbxFile)->GetMemoryFileInfo(
  ( void  **)  _lcvt.j2c_void_ppt(pMemPtr)
  ,
  ( size_t  )  _lcvt.j2c<jlong, size_t  >(pSize)
  );
}
  /// bool  IsOpen () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxFile_IsOpen(JNIEnv * __env, jclass __jc,jlong lpjFbxFile)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxFile *) lpjFbxFile)->IsOpen(
  ));
  return ret;
}
  /// bool  IsStream () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxFile_IsStream(JNIEnv * __env, jclass __jc,jlong lpjFbxFile)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxFile *) lpjFbxFile)->IsStream(
  ));
  return ret;
}
  /// const char *  GetFilePathName () const
extern "C" JNIEXPORT jstring JNICALL Java_fbxsdk_FbxFile_GetFilePathName(JNIEnv * __env, jclass __jc,jlong lpjFbxFile)
{
  JNILocalConverter _lcvt(__env,__jc);
  jstring ret=(jstring)_lcvt.c2j_string(
  ((FbxFile *) lpjFbxFile)->GetFilePathName(
  ));
  return ret;
}
  /// EMode  GetFileMode () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxFile_GetFileMode(JNIEnv * __env, jclass __jc,jlong lpjFbxFile)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxFile::EMode  >(
  ((FbxFile *) lpjFbxFile)->GetFileMode(
  ));
  return ret;
}
  /// int  GetLastError ()
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxFile_GetLastError(JNIEnv * __env, jclass __jc,jlong lpjFbxFile)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxFile *) lpjFbxFile)->GetLastError(
  ));
  return ret;
}
  /// void  ClearError ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxFile_ClearError(JNIEnv * __env, jclass __jc,jlong lpjFbxFile)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxFile *) lpjFbxFile)->ClearError(
  );
}
