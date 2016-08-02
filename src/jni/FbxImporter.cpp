//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// virtual bool  Initialize (const char *pFileName, int pFileFormat=-1, FbxIOSettings *pIOSettings=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxImporter_Initialize(JNIEnv * __env, jclass __jc,jlong lpjFbxImporter,jstring pFileName,jint pFileFormat,jlong pIOSettings)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxImporter *) lpjFbxImporter)->Initialize(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pFileName)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pFileFormat)
  ,
  ( FbxIOSettings  *)  _lcvt.j2c_object_pt<jlong, FbxIOSettings>(pIOSettings)
  ));
  return ret;
}
  /// virtual bool  Initialize (FbxStream *pStream, void *pStreamData=NULL, const int pFileFormat=-1, FbxIOSettings *pIOSettings=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxImporter_Initialize1(JNIEnv * __env, jclass __jc,jlong lpjFbxImporter,jlong pStream,jlong pStreamData,jint pFileFormat,jlong pIOSettings)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxImporter *) lpjFbxImporter)->Initialize(
  ( FbxStream  *)  _lcvt.j2c_object_pt<jlong, FbxStream>(pStream)
  ,
  ( void  *)  _lcvt.j2c_void_pt(pStreamData)
  ,
  (const int  )  _lcvt.j2c<jint,const int  >(pFileFormat)
  ,
  ( FbxIOSettings  *)  _lcvt.j2c_object_pt<jlong, FbxIOSettings>(pIOSettings)
  ));
  return ret;
}
  /// void  GetFileVersion (int &pMajor, int &pMinor, int &pRevision)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxImporter_GetFileVersion(JNIEnv * __env, jclass __jc,jlong lpjFbxImporter,jobject pMajor,jobject pMinor,jobject pRevision)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxImporter *) lpjFbxImporter)->GetFileVersion(
  ( int  &) * _lcvt.j2c_int_ref<jobject,int>(pMajor)
  ,
  ( int  &) * _lcvt.j2c_int_ref<jobject,int>(pMinor)
  ,
  ( int  &) * _lcvt.j2c_int_ref<jobject,int>(pRevision)
  );
}
  /// bool  GetDefaultRenderResolution (FbxString &pCamName, FbxString &pResolutionMode, double &pW, double &pH)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxImporter_GetDefaultRenderResolution(JNIEnv * __env, jclass __jc,jlong lpjFbxImporter,jobject pCamName,jobject pResolutionMode,jobject pW,jobject pH)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxImporter *) lpjFbxImporter)->GetDefaultRenderResolution(
  ( FbxString  &) * _lcvt.j2c_object_ref<jobject,FbxString >(pCamName)
  ,
  ( FbxString  &) * _lcvt.j2c_object_ref<jobject,FbxString >(pResolutionMode)
  ,
  ( double  &) * _lcvt.j2c_double_ref<jobject,double>(pW)
  ,
  ( double  &) * _lcvt.j2c_double_ref<jobject,double>(pH)
  ));
  return ret;
}
  /// FbxIOFileHeaderInfo *  GetFileHeaderInfo ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxImporter_GetFileHeaderInfo(JNIEnv * __env, jclass __jc,jlong lpjFbxImporter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxIOFileHeaderInfo>(
  ((FbxImporter *) lpjFbxImporter)->GetFileHeaderInfo(
  ));
  return ret;
}
  /// bool  GetImportOptions (EStreamOptionsGeneration pStreamOptionsGeneration=eParseFile)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxImporter_GetImportOptions(JNIEnv * __env, jclass __jc,jlong lpjFbxImporter,jint pStreamOptionsGeneration)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxImporter *) lpjFbxImporter)->GetImportOptions(
  ( FbxImporter::EStreamOptionsGeneration  )  _lcvt.j2c<jint,FbxImporter::EStreamOptionsGeneration >(pStreamOptionsGeneration)
  ));
  return ret;
}
  /// bool  GetImportOptions (FbxIO *pFbxObject)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxImporter_GetImportOptions1(JNIEnv * __env, jclass __jc,jlong lpjFbxImporter,jlong pFbxObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxImporter *) lpjFbxImporter)->GetImportOptions(
  ( FbxIO  *)  _lcvt.j2c_object_pt<jlong, FbxIO>(pFbxObject)
  ));
  return ret;
}
  /// bool  Import (FbxDocument *pDocument, bool pNonBlocking=false)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxImporter_Import(JNIEnv * __env, jclass __jc,jlong lpjFbxImporter,jlong pDocument,jboolean pNonBlocking)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxImporter *) lpjFbxImporter)->Import(
  ( FbxDocument  *)  _lcvt.j2c_object_pt<jlong, FbxDocument>(pDocument)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pNonBlocking)
  ));
  return ret;
}
  /// bool  IsImporting (bool &pImportResult)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxImporter_IsImporting(JNIEnv * __env, jclass __jc,jlong lpjFbxImporter,jobject pImportResult)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxImporter *) lpjFbxImporter)->IsImporting(
  ( bool  &) * _lcvt.j2c_bool_ref<jobject,bool>(pImportResult)
  ));
  return ret;
}
  /// float  GetProgress (FbxString *pStatus=NULL)
extern "C" JNIEXPORT jfloat JNICALL Java_fbxsdk_FbxImporter_GetProgress(JNIEnv * __env, jclass __jc,jlong lpjFbxImporter,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jfloat ret=(jfloat)_lcvt.c2j<jfloat,  float  >(
  ((FbxImporter *) lpjFbxImporter)->GetProgress(
  ( FbxString  *)  _lcvt.j2c_object_pt<jlong, FbxString>(pStatus)
  ));
  return ret;
}
  /// void  SetProgressCallback (FbxProgressCallback pCallback, void *pArgs=NULL)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxImporter_SetProgressCallback(JNIEnv * __env, jclass __jc,jlong lpjFbxImporter,jlong pCallback,jlong pArgs)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxImporter *) lpjFbxImporter)->SetProgressCallback(
  ( FbxProgressCallback  )  _lcvt.j2c_object<jlong,FbxProgressCallback >(pCallback)
  ,
  ( void  *)  _lcvt.j2c_void_pt(pArgs)
  );
}
  /// void  SetEmbeddingExtractionFolder (const char *pExtractFolder)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxImporter_SetEmbeddingExtractionFolder(JNIEnv * __env, jclass __jc,jlong lpjFbxImporter,jstring pExtractFolder)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxImporter *) lpjFbxImporter)->SetEmbeddingExtractionFolder(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pExtractFolder)
  );
}
  /// const char *  GetEmbeddingExtractionFolder ()
extern "C" JNIEXPORT jstring JNICALL Java_fbxsdk_FbxImporter_GetEmbeddingExtractionFolder(JNIEnv * __env, jclass __jc,jlong lpjFbxImporter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jstring ret=(jstring)_lcvt.c2j_string(
  ((FbxImporter *) lpjFbxImporter)->GetEmbeddingExtractionFolder(
  ));
  return ret;
}
  /// FbxIOSettings *  GetIOSettings ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxImporter_GetIOSettings(JNIEnv * __env, jclass __jc,jlong lpjFbxImporter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxIOSettings>(
  ((FbxImporter *) lpjFbxImporter)->GetIOSettings(
  ));
  return ret;
}
  /// void  SetIOSettings (FbxIOSettings *pIOSettings)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxImporter_SetIOSettings(JNIEnv * __env, jclass __jc,jlong lpjFbxImporter,jlong pIOSettings)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxImporter *) lpjFbxImporter)->SetIOSettings(
  ( FbxIOSettings  *)  _lcvt.j2c_object_pt<jlong, FbxIOSettings>(pIOSettings)
  );
}
  /// int  GetAnimStackCount ()
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxImporter_GetAnimStackCount(JNIEnv * __env, jclass __jc,jlong lpjFbxImporter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxImporter *) lpjFbxImporter)->GetAnimStackCount(
  ));
  return ret;
}
  /// FbxTakeInfo *  GetTakeInfo (int pIndex)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxImporter_GetTakeInfo(JNIEnv * __env, jclass __jc,jlong lpjFbxImporter,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxTakeInfo>(
  ((FbxImporter *) lpjFbxImporter)->GetTakeInfo(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// FbxString  GetActiveAnimStackName ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxImporter_GetActiveAnimStackName(JNIEnv * __env, jclass __jc,jlong lpjFbxImporter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxString>(
  ((FbxImporter *) lpjFbxImporter)->GetActiveAnimStackName(
  ));
  return ret;
}
  /// FbxDocumentInfo *  GetSceneInfo ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxImporter_GetSceneInfo(JNIEnv * __env, jclass __jc,jlong lpjFbxImporter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxDocumentInfo>(
  ((FbxImporter *) lpjFbxImporter)->GetSceneInfo(
  ));
  return ret;
}
  /// int  GetFileFormat ()
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxImporter_GetFileFormat(JNIEnv * __env, jclass __jc,jlong lpjFbxImporter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxImporter *) lpjFbxImporter)->GetFileFormat(
  ));
  return ret;
}
  /// bool  IsFBX ()
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxImporter_IsFBX(JNIEnv * __env, jclass __jc,jlong lpjFbxImporter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxImporter *) lpjFbxImporter)->IsFBX(
  ));
  return ret;
}
  /// FbxImporter * Create( FbxIOBase* lpFbxIOBase,  const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxImporter_Create(JNIEnv * __env, jclass __jc,jlong lpFbxIOBase,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxImporter>(
  FbxImporter::Create(
  ( FbxIOBase  *)  _lcvt.j2c_object_pt<jlong, FbxIOBase>(lpFbxIOBase)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
