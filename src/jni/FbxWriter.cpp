
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxWriter (FbxManager &pManager, int pID, FbxStatus &pStatus)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxWriter_meCreate(JNIEnv * __env, jclass __jc,jobject pManager,jint pID,jobject pStatus)
{
  return 0;
}
  /// virtual  ~FbxWriter ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxWriter_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxWriter)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxWriter *) lpjFbxWriter
  );
}
  /// virtual bool  FileCreate (char *pFileName)=0
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxWriter_FileCreate(JNIEnv * __env, jclass __jc,jlong lpjFbxWriter,jstring pFileName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxWriter *) lpjFbxWriter)->FileCreate(
  ( char  *)  _lcvt.j2c_string<jstring,char>(pFileName)
  ));
  return ret;
}
  /// virtual bool  FileCreate (FbxStream *pStream, void *pStreamData)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxWriter_FileCreate1(JNIEnv * __env, jclass __jc,jlong lpjFbxWriter,jlong pStream,jlong pStreamData)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxWriter *) lpjFbxWriter)->FileCreate(
  ( FbxStream  *)  _lcvt.j2c_object_pt<jlong, FbxStream>(pStream)
  ,
  ( void  *)  _lcvt.j2c_void_pt(pStreamData)
  ));
  return ret;
}
  /// virtual bool  FileClose ()=0
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxWriter_FileClose(JNIEnv * __env, jclass __jc,jlong lpjFbxWriter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxWriter *) lpjFbxWriter)->FileClose(
  ));
  return ret;
}
  /// virtual bool  IsFileOpen ()=0
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxWriter_IsFileOpen(JNIEnv * __env, jclass __jc,jlong lpjFbxWriter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxWriter *) lpjFbxWriter)->IsFileOpen(
  ));
  return ret;
}
  /// virtual void  GetWriteOptions ()=0
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxWriter_GetWriteOptions(JNIEnv * __env, jclass __jc,jlong lpjFbxWriter)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxWriter *) lpjFbxWriter)->GetWriteOptions(
  );
}
  /// virtual bool  Write (FbxDocument *pDocument)=0
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxWriter_Write(JNIEnv * __env, jclass __jc,jlong lpjFbxWriter,jlong pDocument)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxWriter *) lpjFbxWriter)->Write(
  ( FbxDocument  *)  _lcvt.j2c_object_pt<jlong, FbxDocument>(pDocument)
  ));
  return ret;
}
  /// virtual bool  PreprocessScene (FbxScene &pScene)=0
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxWriter_PreprocessScene(JNIEnv * __env, jclass __jc,jlong lpjFbxWriter,jobject pScene)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxWriter *) lpjFbxWriter)->PreprocessScene(
  ( FbxScene  &) * _lcvt.j2c_object_ref<jobject,FbxScene >(pScene)
  ));
  return ret;
}
  /// virtual bool  PostprocessScene (FbxScene &pScene)=0
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxWriter_PostprocessScene(JNIEnv * __env, jclass __jc,jlong lpjFbxWriter,jobject pScene)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxWriter *) lpjFbxWriter)->PostprocessScene(
  ( FbxScene  &) * _lcvt.j2c_object_ref<jobject,FbxScene >(pScene)
  ));
  return ret;
}
  /// virtual void  PluginWriteParameters (FbxObject &pParams)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxWriter_PluginWriteParameters(JNIEnv * __env, jclass __jc,jlong lpjFbxWriter,jobject pParams)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxWriter *) lpjFbxWriter)->PluginWriteParameters(
  ( FbxObject  &) * _lcvt.j2c_object_ref<jobject,FbxObject >(pParams)
  );
}
  /// virtual FbxNode *  FindRootNode (FbxScene &pScene)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxWriter_FindRootNode(JNIEnv * __env, jclass __jc,jlong lpjFbxWriter,jobject pScene)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxNode>(
  ((FbxWriter *) lpjFbxWriter)->FindRootNode(
  ( FbxScene  &) * _lcvt.j2c_object_ref<jobject,FbxScene >(pScene)
  ));
  return ret;
}
  /// virtual bool  CheckSpaceInNodeNameRecursive (FbxNode *pNode, FbxString &pNodeNameList)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxWriter_CheckSpaceInNodeNameRecursive(JNIEnv * __env, jclass __jc,jlong lpjFbxWriter,jlong pNode,jobject pNodeNameList)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxWriter *) lpjFbxWriter)->CheckSpaceInNodeNameRecursive(
  ( FbxNode  *)  _lcvt.j2c_object_pt<jlong, FbxNode>(pNode)
  ,
  ( FbxString  &) * _lcvt.j2c_object_ref<jobject,FbxString >(pNodeNameList)
  ));
  return ret;
}
  /// bool  SetFileExportVersion (FbxString pVersion)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxWriter_SetFileExportVersion(JNIEnv * __env, jclass __jc,jlong lpjFbxWriter,jlong pVersion)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxWriter *) lpjFbxWriter)->SetFileExportVersion(
  ( FbxString  )  _lcvt.j2c_object<jlong,FbxString >(pVersion)
  ));
  return ret;
}
  /// void  SetRenamingMode (FbxSceneRenamer::ERenamingMode pRenamingMode)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxWriter_SetRenamingMode(JNIEnv * __env, jclass __jc,jlong lpjFbxWriter,jint pRenamingMode)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxWriter *) lpjFbxWriter)->SetRenamingMode(
  ( FbxSceneRenamer::ERenamingMode  )  _lcvt.j2c<jint,FbxSceneRenamer::ERenamingMode >(pRenamingMode)
  );
}
  /// void  SetResamplingRate (double pResamplingRate)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxWriter_SetResamplingRate(JNIEnv * __env, jclass __jc,jlong lpjFbxWriter,jdouble pResamplingRate)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxWriter *) lpjFbxWriter)->SetResamplingRate(
  ( double  )  _lcvt.j2c<jdouble, double  >(pResamplingRate)
  );
}
  /// bool  IsGenuine ()
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxWriter_IsGenuine(JNIEnv * __env, jclass __jc,jlong lpjFbxWriter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxWriter *) lpjFbxWriter)->IsGenuine(
  ));
  return ret;
}
  /// virtual FbxIOSettings *  GetIOSettings ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxWriter_GetIOSettings(JNIEnv * __env, jclass __jc,jlong lpjFbxWriter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxIOSettings>(
  ((FbxWriter *) lpjFbxWriter)->GetIOSettings(
  ));
  return ret;
}
  /// virtual void  SetIOSettings (FbxIOSettings *pIOSettings)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxWriter_SetIOSettings(JNIEnv * __env, jclass __jc,jlong lpjFbxWriter,jlong pIOSettings)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxWriter *) lpjFbxWriter)->SetIOSettings(
  ( FbxIOSettings  *)  _lcvt.j2c_object_pt<jlong, FbxIOSettings>(pIOSettings)
  );
}
  /// virtual void  SetProgressHandler (FbxProgress *pProgress)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxWriter_SetProgressHandler(JNIEnv * __env, jclass __jc,jlong lpjFbxWriter,jlong pProgress)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxWriter *) lpjFbxWriter)->SetProgressHandler(
  ( FbxProgress  *)  _lcvt.j2c_object_pt<jlong, FbxProgress>(pProgress)
  );
}
  /// virtual bool  SupportsStreams () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxWriter_SupportsStreams(JNIEnv * __env, jclass __jc,jlong lpjFbxWriter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxWriter *) lpjFbxWriter)->SupportsStreams(
  ));
  return ret;
}
