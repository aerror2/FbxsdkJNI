//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// virtual bool  Initialize (const char *pFileName, int pFileFormat=-1, FbxIOSettings *pIOSettings=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxExporter_Initialize(JNIEnv * __env, jclass __jc,jlong lpjFbxExporter,jstring pFileName,jint pFileFormat,jlong pIOSettings)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxExporter *) lpjFbxExporter)->Initialize(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pFileName)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pFileFormat)
  ,
  ( FbxIOSettings  *)  _lcvt.j2c_object_pt<jlong, FbxIOSettings>(pIOSettings)
  ));
  return ret;
}
  /// virtual bool  Initialize (FbxStream *pStream, void *pStreamData=NULL, int pFileFormat=-1, FbxIOSettings *pIOSettings=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxExporter_Initialize1(JNIEnv * __env, jclass __jc,jlong lpjFbxExporter,jlong pStream,jlong pStreamData,jint pFileFormat,jlong pIOSettings)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxExporter *) lpjFbxExporter)->Initialize(
  ( FbxStream  *)  _lcvt.j2c_object_pt<jlong, FbxStream>(pStream)
  ,
  ( void  *)  _lcvt.j2c_void_pt(pStreamData)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pFileFormat)
  ,
  ( FbxIOSettings  *)  _lcvt.j2c_object_pt<jlong, FbxIOSettings>(pIOSettings)
  ));
  return ret;
}
  /// bool  GetExportOptions ()
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxExporter_GetExportOptions(JNIEnv * __env, jclass __jc,jlong lpjFbxExporter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxExporter *) lpjFbxExporter)->GetExportOptions(
  ));
  return ret;
}
  /// FbxIOSettings *  GetIOSettings ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxExporter_GetIOSettings(JNIEnv * __env, jclass __jc,jlong lpjFbxExporter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxIOSettings>(
  ((FbxExporter *) lpjFbxExporter)->GetIOSettings(
  ));
  return ret;
}
  /// void  SetIOSettings (FbxIOSettings *pIOSettings)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxExporter_SetIOSettings(JNIEnv * __env, jclass __jc,jlong lpjFbxExporter,jlong pIOSettings)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxExporter *) lpjFbxExporter)->SetIOSettings(
  ( FbxIOSettings  *)  _lcvt.j2c_object_pt<jlong, FbxIOSettings>(pIOSettings)
  );
}
  /// bool  Export (FbxDocument *pDocument, bool pNonBlocking=false)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxExporter_Export(JNIEnv * __env, jclass __jc,jlong lpjFbxExporter,jlong pDocument,jboolean pNonBlocking)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxExporter *) lpjFbxExporter)->Export(
  ( FbxDocument  *)  _lcvt.j2c_object_pt<jlong, FbxDocument>(pDocument)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pNonBlocking)
  ));
  return ret;
}
  /// bool  IsExporting (bool &pExportResult)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxExporter_IsExporting(JNIEnv * __env, jclass __jc,jlong lpjFbxExporter,jobject pExportResult)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxExporter *) lpjFbxExporter)->IsExporting(
  ( bool  &) * _lcvt.j2c_bool_ref<jobject,bool>(pExportResult)
  ));
  return ret;
}
  /// float  GetProgress (FbxString *pStatus=NULL)
extern "C" JNIEXPORT jfloat JNICALL Java_fbxsdk_FbxExporter_GetProgress(JNIEnv * __env, jclass __jc,jlong lpjFbxExporter,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jfloat ret=(jfloat)_lcvt.c2j<jfloat,  float  >(
  ((FbxExporter *) lpjFbxExporter)->GetProgress(
  ( FbxString  *)  _lcvt.j2c_object_pt<jlong, FbxString>(pStatus)
  ));
  return ret;
}
  /// void  SetProgressCallback (FbxProgressCallback pCallback, void *pArgs=NULL)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxExporter_SetProgressCallback(JNIEnv * __env, jclass __jc,jlong lpjFbxExporter,jlong pCallback,jlong pArgs)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxExporter *) lpjFbxExporter)->SetProgressCallback(
  ( FbxProgressCallback  )  _lcvt.j2c_object<jlong,FbxProgressCallback >(pCallback)
  ,
  ( void  *)  _lcvt.j2c_void_pt(pArgs)
  );
}
  /// int  GetFileFormat ()
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxExporter_GetFileFormat(JNIEnv * __env, jclass __jc,jlong lpjFbxExporter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxExporter *) lpjFbxExporter)->GetFileFormat(
  ));
  return ret;
}
  /// bool  IsFBX ()
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxExporter_IsFBX(JNIEnv * __env, jclass __jc,jlong lpjFbxExporter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxExporter *) lpjFbxExporter)->IsFBX(
  ));
  return ret;
}
  /// bool  SetFileExportVersion (FbxString pVersion, FbxSceneRenamer::ERenamingMode pRenamingMode)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxExporter_SetFileExportVersion(JNIEnv * __env, jclass __jc,jlong lpjFbxExporter,jlong pVersion,jint pRenamingMode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxExporter *) lpjFbxExporter)->SetFileExportVersion(
  ( FbxString  )  _lcvt.j2c_object<jlong,FbxString >(pVersion)
  ,
  ( FbxSceneRenamer::ERenamingMode  )  _lcvt.j2c<jint,FbxSceneRenamer::ERenamingMode >(pRenamingMode)
  ));
  return ret;
}
  /// void  SetResamplingRate (double pResamplingRate)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxExporter_SetResamplingRate(JNIEnv * __env, jclass __jc,jlong lpjFbxExporter,jdouble pResamplingRate)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxExporter *) lpjFbxExporter)->SetResamplingRate(
  ( double  )  _lcvt.j2c<jdouble, double  >(pResamplingRate)
  );
}
  /// void  SetDefaultRenderResolution (FbxString pCamName, FbxString pResolutionMode, double pW, double pH)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxExporter_SetDefaultRenderResolution(JNIEnv * __env, jclass __jc,jlong lpjFbxExporter,jlong pCamName,jlong pResolutionMode,jdouble pW,jdouble pH)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxExporter *) lpjFbxExporter)->SetDefaultRenderResolution(
  ( FbxString  )  _lcvt.j2c_object<jlong,FbxString >(pCamName)
  ,
  ( FbxString  )  _lcvt.j2c_object<jlong,FbxString >(pResolutionMode)
  ,
  ( double  )  _lcvt.j2c<jdouble, double  >(pW)
  ,
  ( double  )  _lcvt.j2c<jdouble, double  >(pH)
  );
}
  /// FbxIOFileHeaderInfo *  GetFileHeaderInfo ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxExporter_GetFileHeaderInfo(JNIEnv * __env, jclass __jc,jlong lpjFbxExporter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxIOFileHeaderInfo>(
  ((FbxExporter *) lpjFbxExporter)->GetFileHeaderInfo(
  ));
  return ret;
}
  /// FbxExporter * Create( FbxIOBase* lpFbxIOBase,  const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxExporter_Create(JNIEnv * __env, jclass __jc,jlong lpFbxIOBase,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxExporter>(
  FbxExporter::Create(
  ( FbxIOBase  *)  _lcvt.j2c_object_pt<jlong, FbxIOBase>(lpFbxIOBase)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
