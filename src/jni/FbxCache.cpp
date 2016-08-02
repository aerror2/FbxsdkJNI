
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// bool  OpenFileForWrite (double pFrameStartOffset, double pSamplingFrameRate, unsigned int pSampleCount, unsigned int pPointCount, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCache_OpenFileForWrite(JNIEnv * __env, jclass __jc,jlong lpjFbxCache,jdouble pFrameStartOffset,jdouble pSamplingFrameRate,jint pSampleCount,jint pPointCount,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxCache *) lpjFbxCache)->OpenFileForWrite(
  ( double  )  _lcvt.j2c<jdouble, double  >(pFrameStartOffset)
  ,
  ( double  )  _lcvt.j2c<jdouble, double  >(pSamplingFrameRate)
  ,
  (unsigned int  )  _lcvt.j2c<jint,unsigned int  >(pSampleCount)
  ,
  (unsigned int  )  _lcvt.j2c<jint,unsigned int  >(pPointCount)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// unsigned int  GetSampleCount (FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxCache_GetSampleCount(JNIEnv * __env, jclass __jc,jlong lpjFbxCache,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint, unsigned int  >(
  ((FbxCache *) lpjFbxCache)->GetSampleCount(
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// unsigned int  GetPointCount (FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxCache_GetPointCount(JNIEnv * __env, jclass __jc,jlong lpjFbxCache,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint, unsigned int  >(
  ((FbxCache *) lpjFbxCache)->GetPointCount(
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// double  GetFrameStartOffset (FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCache_GetFrameStartOffset(JNIEnv * __env, jclass __jc,jlong lpjFbxCache,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxCache *) lpjFbxCache)->GetFrameStartOffset(
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// bool  Read (unsigned int pFrameIndex, double *pBuffer, unsigned int pPointCount, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCache_Read(JNIEnv * __env, jclass __jc,jlong lpjFbxCache,jint pFrameIndex,jdoubleArray pBuffer,jint pPointCount,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxCache *) lpjFbxCache)->Read(
  (unsigned int  )  _lcvt.j2c<jint,unsigned int  >(pFrameIndex)
  ,
  ( double  *)  _lcvt.j2c_double_pt<jdoubleArray,double>(pBuffer)
  ,
  (unsigned int  )  _lcvt.j2c<jint,unsigned int  >(pPointCount)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// bool  Write (unsigned int pFrameIndex, double *pBuffer, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCache_Write(JNIEnv * __env, jclass __jc,jlong lpjFbxCache,jint pFrameIndex,jdoubleArray pBuffer,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxCache *) lpjFbxCache)->Write(
  (unsigned int  )  _lcvt.j2c<jint,unsigned int  >(pFrameIndex)
  ,
  ( double  *)  _lcvt.j2c_double_pt<jdoubleArray,double>(pBuffer)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// bool  ConvertFromPC2ToMC (EMCFileCount pFileCount, double pSamplingFrameRate, EMCBinaryFormat pBinaryFormat, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCache_ConvertFromPC2ToMC(JNIEnv * __env, jclass __jc,jlong lpjFbxCache,jint pFileCount,jdouble pSamplingFrameRate,jint pBinaryFormat,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxCache *) lpjFbxCache)->ConvertFromPC2ToMC(
  ( FbxCache::EMCFileCount  )  _lcvt.j2c<jint,FbxCache::EMCFileCount >(pFileCount)
  ,
  ( double  )  _lcvt.j2c<jdouble, double  >(pSamplingFrameRate)
  ,
  ( FbxCache::EMCBinaryFormat  )  _lcvt.j2c<jint,FbxCache::EMCBinaryFormat >(pBinaryFormat)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// bool  ConvertFromMCToPC2 (double pSamplingFrameRate, unsigned int pChannelIndex, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCache_ConvertFromMCToPC2(JNIEnv * __env, jclass __jc,jlong lpjFbxCache,jdouble pSamplingFrameRate,jint pChannelIndex,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxCache *) lpjFbxCache)->ConvertFromMCToPC2(
  ( double  )  _lcvt.j2c<jdouble, double  >(pSamplingFrameRate)
  ,
  (unsigned int  )  _lcvt.j2c<jint,unsigned int  >(pChannelIndex)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// void  SetCacheFileFormat (EFileFormat pFileFormat, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCache_SetCacheFileFormat(JNIEnv * __env, jclass __jc,jlong lpjFbxCache,jint pFileFormat,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCache *) lpjFbxCache)->SetCacheFileFormat(
  ( FbxCache::EFileFormat  )  _lcvt.j2c<jint,FbxCache::EFileFormat >(pFileFormat)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  );
}
  /// EFileFormat  GetCacheFileFormat () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxCache_GetCacheFileFormat(JNIEnv * __env, jclass __jc,jlong lpjFbxCache)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxCache::EFileFormat  >(
  ((FbxCache *) lpjFbxCache)->GetCacheFileFormat(
  ));
  return ret;
}
  /// void  SetCacheFileName (const char *pRelativeFileName_UTF8, const char *pAbsoluteFileName_UTF8, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCache_SetCacheFileName(JNIEnv * __env, jclass __jc,jlong lpjFbxCache,jstring pRelativeFileName_UTF8,jstring pAbsoluteFileName_UTF8,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCache *) lpjFbxCache)->SetCacheFileName(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pRelativeFileName_UTF8)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pAbsoluteFileName_UTF8)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  );
}
  /// void  GetCacheFileName (FbxString &pRelativeFileName_UTF8, FbxString &pAbsoluteFileName_UTF8) const
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCache_GetCacheFileName(JNIEnv * __env, jclass __jc,jlong lpjFbxCache,jobject pRelativeFileName_UTF8,jobject pAbsoluteFileName_UTF8)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCache *) lpjFbxCache)->GetCacheFileName(
  ( FbxString  &) * _lcvt.j2c_object_ref<jobject,FbxString >(pRelativeFileName_UTF8)
  ,
  ( FbxString  &) * _lcvt.j2c_object_ref<jobject,FbxString >(pAbsoluteFileName_UTF8)
  );
}
  /// bool  OpenFileForRead (FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCache_OpenFileForRead(JNIEnv * __env, jclass __jc,jlong lpjFbxCache,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxCache *) lpjFbxCache)->OpenFileForRead(
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// bool  IsOpen (FbxStatus *pStatus=NULL) const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCache_IsOpen(JNIEnv * __env, jclass __jc,jlong lpjFbxCache,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxCache *) lpjFbxCache)->IsOpen(
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// bool  CloseFile (FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCache_CloseFile(JNIEnv * __env, jclass __jc,jlong lpjFbxCache,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxCache *) lpjFbxCache)->CloseFile(
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// double  GetSamplingFrameRate (FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCache_GetSamplingFrameRate(JNIEnv * __env, jclass __jc,jlong lpjFbxCache,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxCache *) lpjFbxCache)->GetSamplingFrameRate(
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// FbxTime  GetCacheTimePerFrame (FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCache_GetCacheTimePerFrame(JNIEnv * __env, jclass __jc,jlong lpjFbxCache,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxTime>(
  ((FbxCache *) lpjFbxCache)->GetCacheTimePerFrame(
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// bool  OpenFileForWrite (EMCFileCount pFileCount, double pSamplingFrameRate, const char *pChannelName, EMCBinaryFormat pBinaryFormat, EMCDataType pMCDataType=eDoubleVectorArray, const char *pInterpretation="Points", FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCache_OpenFileForWrite1(JNIEnv * __env, jclass __jc,jlong lpjFbxCache,jint pFileCount,jdouble pSamplingFrameRate,jstring pChannelName,jint pBinaryFormat,jint pMCDataType,jstring pInterpretation,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxCache *) lpjFbxCache)->OpenFileForWrite(
  ( FbxCache::EMCFileCount  )  _lcvt.j2c<jint,FbxCache::EMCFileCount >(pFileCount)
  ,
  ( double  )  _lcvt.j2c<jdouble, double  >(pSamplingFrameRate)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pChannelName)
  ,
  ( FbxCache::EMCBinaryFormat  )  _lcvt.j2c<jint,FbxCache::EMCBinaryFormat >(pBinaryFormat)
  ,
  ( FbxCache::EMCDataType  )  _lcvt.j2c<jint,FbxCache::EMCDataType >(pMCDataType)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pInterpretation)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// bool  AddChannel (const char *pChannelName, EMCDataType pMCDataType, const char *pInterpretation, unsigned int &pChannelIndex, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCache_AddChannel(JNIEnv * __env, jclass __jc,jlong lpjFbxCache,jstring pChannelName,jint pMCDataType,jstring pInterpretation,jobject pChannelIndex,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxCache *) lpjFbxCache)->AddChannel(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pChannelName)
  ,
  ( FbxCache::EMCDataType  )  _lcvt.j2c<jint,FbxCache::EMCDataType >(pMCDataType)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pInterpretation)
  ,
  (unsigned int  &) * _lcvt.j2c_int_ref<jobject,int>(pChannelIndex)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// int  GetChannelCount (FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxCache_GetChannelCount(JNIEnv * __env, jclass __jc,jlong lpjFbxCache,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxCache *) lpjFbxCache)->GetChannelCount(
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// bool  GetChannelName (int pChannelIndex, FbxString &pChannelName, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCache_GetChannelName(JNIEnv * __env, jclass __jc,jlong lpjFbxCache,jint pChannelIndex,jobject pChannelName,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxCache *) lpjFbxCache)->GetChannelName(
  ( int  )  _lcvt.j2c<jint, int  >(pChannelIndex)
  ,
  ( FbxString  &) * _lcvt.j2c_object_ref<jobject,FbxString >(pChannelName)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// bool  GetChannelDataType (int pChannelIndex, EMCDataType &pChannelType, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCache_GetChannelDataType(JNIEnv * __env, jclass __jc,jlong lpjFbxCache,jint pChannelIndex,jobject pChannelType,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxCache *) lpjFbxCache)->GetChannelDataType(
  ( int  )  _lcvt.j2c<jint, int  >(pChannelIndex)
  ,
  ( FbxCache::EMCDataType  &) * _lcvt.j2c_int_ref<jobject,FbxCache::EMCDataType>(pChannelType)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// int  GetChannelIndex (const char *pChannelName, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxCache_GetChannelIndex(JNIEnv * __env, jclass __jc,jlong lpjFbxCache,jstring pChannelName,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxCache *) lpjFbxCache)->GetChannelIndex(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pChannelName)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// bool  Read (int pChannelIndex, FbxTime &pTime, double *pBuffer, unsigned int pPointCount, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCache_Read1(JNIEnv * __env, jclass __jc,jlong lpjFbxCache,jint pChannelIndex,jobject pTime,jdoubleArray pBuffer,jint pPointCount,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxCache *) lpjFbxCache)->Read(
  ( int  )  _lcvt.j2c<jint, int  >(pChannelIndex)
  ,
  ( FbxTime  &) * _lcvt.j2c_object_ref<jobject,FbxTime >(pTime)
  ,
  ( double  *)  _lcvt.j2c_double_pt<jdoubleArray,double>(pBuffer)
  ,
  (unsigned int  )  _lcvt.j2c<jint,unsigned int  >(pPointCount)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// bool  Read (int pChannelIndex, FbxTime &pTime, float *pBuffer, unsigned int pPointCount, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCache_Read2(JNIEnv * __env, jclass __jc,jlong lpjFbxCache,jint pChannelIndex,jobject pTime,jfloatArray pBuffer,jint pPointCount,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxCache *) lpjFbxCache)->Read(
  ( int  )  _lcvt.j2c<jint, int  >(pChannelIndex)
  ,
  ( FbxTime  &) * _lcvt.j2c_object_ref<jobject,FbxTime >(pTime)
  ,
  ( float  *)  _lcvt.j2c_float_pt<jfloatArray,float>(pBuffer)
  ,
  (unsigned int  )  _lcvt.j2c<jint,unsigned int  >(pPointCount)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// bool  Read (int pChannelIndex, FbxTime &pTime, int *pBuffer, unsigned int pPointCount, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCache_Read3(JNIEnv * __env, jclass __jc,jlong lpjFbxCache,jint pChannelIndex,jobject pTime,jintArray pBuffer,jint pPointCount,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxCache *) lpjFbxCache)->Read(
  ( int  )  _lcvt.j2c<jint, int  >(pChannelIndex)
  ,
  ( FbxTime  &) * _lcvt.j2c_object_ref<jobject,FbxTime >(pTime)
  ,
  ( int  *)  _lcvt.j2c_int_pt<jintArray,int>(pBuffer)
  ,
  (unsigned int  )  _lcvt.j2c<jint,unsigned int  >(pPointCount)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// bool  BeginWriteAt (FbxTime &pTime, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCache_BeginWriteAt(JNIEnv * __env, jclass __jc,jlong lpjFbxCache,jobject pTime,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxCache *) lpjFbxCache)->BeginWriteAt(
  ( FbxTime  &) * _lcvt.j2c_object_ref<jobject,FbxTime >(pTime)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// bool  Write (int pChannelIndex, FbxTime &pTime, double *pBuffer, unsigned int pPointCount, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCache_Write1(JNIEnv * __env, jclass __jc,jlong lpjFbxCache,jint pChannelIndex,jobject pTime,jdoubleArray pBuffer,jint pPointCount,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxCache *) lpjFbxCache)->Write(
  ( int  )  _lcvt.j2c<jint, int  >(pChannelIndex)
  ,
  ( FbxTime  &) * _lcvt.j2c_object_ref<jobject,FbxTime >(pTime)
  ,
  ( double  *)  _lcvt.j2c_double_pt<jdoubleArray,double>(pBuffer)
  ,
  (unsigned int  )  _lcvt.j2c<jint,unsigned int  >(pPointCount)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// bool  Write (int pChannelIndex, FbxTime &pTime, float *pBuffer, unsigned int pPointCount, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCache_Write2(JNIEnv * __env, jclass __jc,jlong lpjFbxCache,jint pChannelIndex,jobject pTime,jfloatArray pBuffer,jint pPointCount,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxCache *) lpjFbxCache)->Write(
  ( int  )  _lcvt.j2c<jint, int  >(pChannelIndex)
  ,
  ( FbxTime  &) * _lcvt.j2c_object_ref<jobject,FbxTime >(pTime)
  ,
  ( float  *)  _lcvt.j2c_float_pt<jfloatArray,float>(pBuffer)
  ,
  (unsigned int  )  _lcvt.j2c<jint,unsigned int  >(pPointCount)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// bool  Write (int pChannelIndex, FbxTime &pTime, int *pBuffer, unsigned int pPointCount, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCache_Write3(JNIEnv * __env, jclass __jc,jlong lpjFbxCache,jint pChannelIndex,jobject pTime,jintArray pBuffer,jint pPointCount,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxCache *) lpjFbxCache)->Write(
  ( int  )  _lcvt.j2c<jint, int  >(pChannelIndex)
  ,
  ( FbxTime  &) * _lcvt.j2c_object_ref<jobject,FbxTime >(pTime)
  ,
  ( int  *)  _lcvt.j2c_int_pt<jintArray,int>(pBuffer)
  ,
  (unsigned int  )  _lcvt.j2c<jint,unsigned int  >(pPointCount)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// bool  EndWriteAt (FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCache_EndWriteAt(JNIEnv * __env, jclass __jc,jlong lpjFbxCache,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxCache *) lpjFbxCache)->EndWriteAt(
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// bool  GetAnimationRange (int pChannelIndex, FbxTime &pTimeStart, FbxTime &pTimeEnd, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCache_GetAnimationRange(JNIEnv * __env, jclass __jc,jlong lpjFbxCache,jint pChannelIndex,jobject pTimeStart,jobject pTimeEnd,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxCache *) lpjFbxCache)->GetAnimationRange(
  ( int  )  _lcvt.j2c<jint, int  >(pChannelIndex)
  ,
  ( FbxTime  &) * _lcvt.j2c_object_ref<jobject,FbxTime >(pTimeStart)
  ,
  ( FbxTime  &) * _lcvt.j2c_object_ref<jobject,FbxTime >(pTimeEnd)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// bool  GetCacheType (EMCFileCount &pFileCount, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCache_GetCacheType(JNIEnv * __env, jclass __jc,jlong lpjFbxCache,jobject pFileCount,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxCache *) lpjFbxCache)->GetCacheType(
  ( FbxCache::EMCFileCount  &) * _lcvt.j2c_int_ref<jobject,FbxCache::EMCFileCount>(pFileCount)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// bool  GetChannelInterpretation (int pChannelIndex, FbxString &pInterpretation, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCache_GetChannelInterpretation(JNIEnv * __env, jclass __jc,jlong lpjFbxCache,jint pChannelIndex,jobject pInterpretation,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxCache *) lpjFbxCache)->GetChannelInterpretation(
  ( int  )  _lcvt.j2c<jint, int  >(pChannelIndex)
  ,
  ( FbxString  &) * _lcvt.j2c_object_ref<jobject,FbxString >(pInterpretation)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// bool  GetChannelSamplingType (int pChannelIndex, EMCSamplingType &pSamplingType, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCache_GetChannelSamplingType(JNIEnv * __env, jclass __jc,jlong lpjFbxCache,jint pChannelIndex,jobject pSamplingType,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxCache *) lpjFbxCache)->GetChannelSamplingType(
  ( int  )  _lcvt.j2c<jint, int  >(pChannelIndex)
  ,
  ( FbxCache::EMCSamplingType  &) * _lcvt.j2c_int_ref<jobject,FbxCache::EMCSamplingType>(pSamplingType)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// bool  GetChannelSamplingRate (int pChannelIndex, FbxTime &pSamplingRate, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCache_GetChannelSamplingRate(JNIEnv * __env, jclass __jc,jlong lpjFbxCache,jint pChannelIndex,jobject pSamplingRate,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxCache *) lpjFbxCache)->GetChannelSamplingRate(
  ( int  )  _lcvt.j2c<jint, int  >(pChannelIndex)
  ,
  ( FbxTime  &) * _lcvt.j2c_object_ref<jobject,FbxTime >(pSamplingRate)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// bool  GetChannelSampleCount (int pChannelIndex, unsigned int &pSampleCount, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCache_GetChannelSampleCount(JNIEnv * __env, jclass __jc,jlong lpjFbxCache,jint pChannelIndex,jobject pSampleCount,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxCache *) lpjFbxCache)->GetChannelSampleCount(
  ( int  )  _lcvt.j2c<jint, int  >(pChannelIndex)
  ,
  (unsigned int  &) * _lcvt.j2c_int_ref<jobject,int>(pSampleCount)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// bool  GetChannelPointCount (int pChannelIndex, FbxTime pTime, unsigned int &pPointCount, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCache_GetChannelPointCount(JNIEnv * __env, jclass __jc,jlong lpjFbxCache,jint pChannelIndex,jlong pTime,jobject pPointCount,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxCache *) lpjFbxCache)->GetChannelPointCount(
  ( int  )  _lcvt.j2c<jint, int  >(pChannelIndex)
  ,
  ( FbxTime  )  _lcvt.j2c_object<jlong,FbxTime >(pTime)
  ,
  (unsigned int  &) * _lcvt.j2c_int_ref<jobject,int>(pPointCount)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// int  GetCacheDataFileCount (FbxStatus *pStatus=NULL) const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxCache_GetCacheDataFileCount(JNIEnv * __env, jclass __jc,jlong lpjFbxCache,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxCache *) lpjFbxCache)->GetCacheDataFileCount(
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// bool  GetCacheDataFileName (int pIndex, FbxString &pRelativeFileName, FbxString &pAbsoluteFileName, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCache_GetCacheDataFileName(JNIEnv * __env, jclass __jc,jlong lpjFbxCache,jint pIndex,jobject pRelativeFileName,jobject pAbsoluteFileName,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxCache *) lpjFbxCache)->GetCacheDataFileName(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ,
  ( FbxString  &) * _lcvt.j2c_object_ref<jobject,FbxString >(pRelativeFileName)
  ,
  ( FbxString  &) * _lcvt.j2c_object_ref<jobject,FbxString >(pAbsoluteFileName)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// bool  EnableMultiChannelFetching (bool pMultiChannelFetching, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCache_EnableMultiChannelFetching(JNIEnv * __env, jclass __jc,jlong lpjFbxCache,jboolean pMultiChannelFetching,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxCache *) lpjFbxCache)->EnableMultiChannelFetching(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pMultiChannelFetching)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// bool  GetNextTimeWithData (FbxTime pCurTime, FbxTime &pNextTime, int pChannelIndex=-1, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCache_GetNextTimeWithData(JNIEnv * __env, jclass __jc,jlong lpjFbxCache,jlong pCurTime,jobject pNextTime,jint pChannelIndex,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxCache *) lpjFbxCache)->GetNextTimeWithData(
  ( FbxTime  )  _lcvt.j2c_object<jlong,FbxTime >(pCurTime)
  ,
  ( FbxTime  &) * _lcvt.j2c_object_ref<jobject,FbxTime >(pNextTime)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pChannelIndex)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// int  GetDataCount (int pChannelIndex, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxCache_GetDataCount(JNIEnv * __env, jclass __jc,jlong lpjFbxCache,jint pChannelIndex,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxCache *) lpjFbxCache)->GetDataCount(
  ( int  )  _lcvt.j2c<jint, int  >(pChannelIndex)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// bool  GetDataTime (int pChannelIndex, unsigned int pDataIndex, FbxTime &pTime, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCache_GetDataTime(JNIEnv * __env, jclass __jc,jlong lpjFbxCache,jint pChannelIndex,jint pDataIndex,jobject pTime,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxCache *) lpjFbxCache)->GetDataTime(
  ( int  )  _lcvt.j2c<jint, int  >(pChannelIndex)
  ,
  (unsigned int  )  _lcvt.j2c<jint,unsigned int  >(pDataIndex)
  ,
  ( FbxTime  &) * _lcvt.j2c_object_ref<jobject,FbxTime >(pTime)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// FbxCache * Create( FbxObject* lpFbxObject,  const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCache_Create(JNIEnv * __env, jclass __jc,jlong lpFbxObject,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxCache>(
  FbxCache::Create(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(lpFbxObject)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
