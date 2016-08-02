//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxReader (FbxManager &pManager, int pID, FbxStatus &pStatus)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxReader_meCreate(JNIEnv * __env, jclass __jc,jobject pManager,jint pID,jobject pStatus)
{
  return 0;
}
  /// virtual  ~FbxReader ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxReader_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxReader)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxReader *) lpjFbxReader
  );
}
  /// virtual void  GetVersion (int &pMajor, int &pMinor, int &pRevision)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxReader_GetVersion(JNIEnv * __env, jclass __jc,jlong lpjFbxReader,jobject pMajor,jobject pMinor,jobject pRevision)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxReader *) lpjFbxReader)->GetVersion(
  ( int  &) * _lcvt.j2c_int_ref<jobject,int>(pMajor)
  ,
  ( int  &) * _lcvt.j2c_int_ref<jobject,int>(pMinor)
  ,
  ( int  &) * _lcvt.j2c_int_ref<jobject,int>(pRevision)
  );
}
  /// virtual bool  FileOpen (char *pFileName)=0
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxReader_FileOpen(JNIEnv * __env, jclass __jc,jlong lpjFbxReader,jstring pFileName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxReader *) lpjFbxReader)->FileOpen(
  ( char  *)  _lcvt.j2c_string<jstring,char>(pFileName)
  ));
  return ret;
}
  /// virtual bool  FileOpen (FbxStream *pStream, void *pStreamData)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxReader_FileOpen1(JNIEnv * __env, jclass __jc,jlong lpjFbxReader,jlong pStream,jlong pStreamData)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxReader *) lpjFbxReader)->FileOpen(
  ( FbxStream  *)  _lcvt.j2c_object_pt<jlong, FbxStream>(pStream)
  ,
  ( void  *)  _lcvt.j2c_void_pt(pStreamData)
  ));
  return ret;
}
  /// virtual bool  FileClose ()=0
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxReader_FileClose(JNIEnv * __env, jclass __jc,jlong lpjFbxReader)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxReader *) lpjFbxReader)->FileClose(
  ));
  return ret;
}
  /// virtual bool  IsFileOpen ()=0
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxReader_IsFileOpen(JNIEnv * __env, jclass __jc,jlong lpjFbxReader)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxReader *) lpjFbxReader)->IsFileOpen(
  ));
  return ret;
}
  /// virtual bool  GetReadOptions (bool pParseFileAsNeeded=true)=0
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxReader_GetReadOptions(JNIEnv * __env, jclass __jc,jlong lpjFbxReader,jboolean pParseFileAsNeeded)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxReader *) lpjFbxReader)->GetReadOptions(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pParseFileAsNeeded)
  ));
  return ret;
}
  /// virtual bool  Read (FbxDocument *pDocument)=0
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxReader_Read(JNIEnv * __env, jclass __jc,jlong lpjFbxReader,jlong pDocument)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxReader *) lpjFbxReader)->Read(
  ( FbxDocument  *)  _lcvt.j2c_object_pt<jlong, FbxDocument>(pDocument)
  ));
  return ret;
}
  /// virtual void  PluginReadParameters (FbxObject &pParams)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxReader_PluginReadParameters(JNIEnv * __env, jclass __jc,jlong lpjFbxReader,jobject pParams)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxReader *) lpjFbxReader)->PluginReadParameters(
  ( FbxObject  &) * _lcvt.j2c_object_ref<jobject,FbxObject >(pParams)
  );
}
  /// virtual bool  FileOpen (char *pFileName, EFileOpenSpecialFlags pFlags)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxReader_FileOpen2(JNIEnv * __env, jclass __jc,jlong lpjFbxReader,jstring pFileName,jint pFlags)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxReader *) lpjFbxReader)->FileOpen(
  ( char  *)  _lcvt.j2c_string<jstring,char>(pFileName)
  ,
  ( FbxReader::EFileOpenSpecialFlags  )  _lcvt.j2c<jint,FbxReader::EFileOpenSpecialFlags >(pFlags)
  ));
  return ret;
}
  /// virtual bool  GetAxisInfo (FbxAxisSystem *pAxisSystem, FbxSystemUnit *pSystemUnits)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxReader_GetAxisInfo(JNIEnv * __env, jclass __jc,jlong lpjFbxReader,jlong pAxisSystem,jlong pSystemUnits)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxReader *) lpjFbxReader)->GetAxisInfo(
  ( FbxAxisSystem  *)  _lcvt.j2c_object_pt<jlong, FbxAxisSystem>(pAxisSystem)
  ,
  ( FbxSystemUnit  *)  _lcvt.j2c_object_pt<jlong, FbxSystemUnit>(pSystemUnits)
  ));
  return ret;
}
  /// virtual bool  GetStatistics (FbxStatistics *pStats)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxReader_GetStatistics(JNIEnv * __env, jclass __jc,jlong lpjFbxReader,jlong pStats)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxReader *) lpjFbxReader)->GetStatistics(
  ( FbxStatistics  *)  _lcvt.j2c_object_pt<jlong, FbxStatistics>(pStats)
  ));
  return ret;
}
  /// virtual bool  GetFrameRate (FbxTime::EMode &pTimeMode)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxReader_GetFrameRate(JNIEnv * __env, jclass __jc,jlong lpjFbxReader,jobject pTimeMode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxReader *) lpjFbxReader)->GetFrameRate(
  ( FbxTime::EMode  &) * _lcvt.j2c_int_ref<jobject,FbxTime::EMode>(pTimeMode)
  ));
  return ret;
}
  /// virtual FbxDocumentInfo *  GetSceneInfo ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxReader_GetSceneInfo(JNIEnv * __env, jclass __jc,jlong lpjFbxReader)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxDocumentInfo>(
  ((FbxReader *) lpjFbxReader)->GetSceneInfo(
  ));
  return ret;
}
  /// virtual FbxArray< FbxTakeInfo * > *  GetTakeInfo ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxReader_GetTakeInfo(JNIEnv * __env, jclass __jc,jlong lpjFbxReader)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxArray_pt<jlong,  FbxTakeInfo  * >(
  ((FbxReader *) lpjFbxReader)->GetTakeInfo(
  ));
  return ret;
}
  /// virtual bool  GetDefaultRenderResolution (FbxString &pCamName, FbxString &pResolutionMode, double &pW, double &pH)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxReader_GetDefaultRenderResolution(JNIEnv * __env, jclass __jc,jlong lpjFbxReader,jobject pCamName,jobject pResolutionMode,jobject pW,jobject pH)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxReader *) lpjFbxReader)->GetDefaultRenderResolution(
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
  /// bool  IsGenuine ()
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxReader_IsGenuine(JNIEnv * __env, jclass __jc,jlong lpjFbxReader)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxReader *) lpjFbxReader)->IsGenuine(
  ));
  return ret;
}
  /// virtual FbxIOSettings *  GetIOSettings ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxReader_GetIOSettings(JNIEnv * __env, jclass __jc,jlong lpjFbxReader)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxIOSettings>(
  ((FbxReader *) lpjFbxReader)->GetIOSettings(
  ));
  return ret;
}
  /// virtual void  SetIOSettings (FbxIOSettings *pIOSettings)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxReader_SetIOSettings(JNIEnv * __env, jclass __jc,jlong lpjFbxReader,jlong pIOSettings)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxReader *) lpjFbxReader)->SetIOSettings(
  ( FbxIOSettings  *)  _lcvt.j2c_object_pt<jlong, FbxIOSettings>(pIOSettings)
  );
}
  /// virtual void  SetProgressHandler (FbxProgress *pProgress)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxReader_SetProgressHandler(JNIEnv * __env, jclass __jc,jlong lpjFbxReader,jlong pProgress)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxReader *) lpjFbxReader)->SetProgressHandler(
  ( FbxProgress  *)  _lcvt.j2c_object_pt<jlong, FbxProgress>(pProgress)
  );
}
  /// virtual void  SetEmbeddingExtractionFolder (const char *pExtractFolder)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxReader_SetEmbeddingExtractionFolder(JNIEnv * __env, jclass __jc,jlong lpjFbxReader,jstring pExtractFolder)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxReader *) lpjFbxReader)->SetEmbeddingExtractionFolder(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pExtractFolder)
  );
}
  /// virtual bool  SupportsStreams () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxReader_SupportsStreams(JNIEnv * __env, jclass __jc,jlong lpjFbxReader)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxReader *) lpjFbxReader)->SupportsStreams(
  ));
  return ret;
}
