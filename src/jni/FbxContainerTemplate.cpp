
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// void  ParseTemplateFile (const char *pTemplateFilePath, FbxArray< FbxString * > &pExtendTemplateNames)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxContainerTemplate_ParseTemplateFile(JNIEnv * __env, jclass __jc,jlong lpjFbxContainerTemplate,jstring pTemplateFilePath,jobject pExtendTemplateNames)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxContainerTemplate *) lpjFbxContainerTemplate)->ParseTemplateFile(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pTemplateFilePath)
  ,
  (FbxArray<  FbxString  * > &) * _lcvt.j2c_tmpl_FbxArray_obj_ref<jobject,  FbxString  * >(pExtendTemplateNames)
  );
}
  /// void  AddExtendTemplatePath (const char *pExtendTemplatePath)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxContainerTemplate_AddExtendTemplatePath(JNIEnv * __env, jclass __jc,jlong lpjFbxContainerTemplate,jstring pExtendTemplatePath)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxContainerTemplate *) lpjFbxContainerTemplate)->AddExtendTemplatePath(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pExtendTemplatePath)
  );
}
  /// char *  GetExtendTemplatePathAt (FbxUInt pIndex) const
extern "C" JNIEXPORT jstring JNICALL Java_fbxsdk_FbxContainerTemplate_GetExtendTemplatePathAt(JNIEnv * __env, jclass __jc,jlong lpjFbxContainerTemplate,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jstring ret=(jstring)_lcvt.c2j_string(
  ((FbxContainerTemplate *) lpjFbxContainerTemplate)->GetExtendTemplatePathAt(
  ( FbxUInt  )  _lcvt.j2c<jint, FbxUInt  >(pIndex)
  ));
  return ret;
}
  /// FbxUInt  GetExtendTemplateCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxContainerTemplate_GetExtendTemplateCount(JNIEnv * __env, jclass __jc,jlong lpjFbxContainerTemplate)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxUInt  >(
  ((FbxContainerTemplate *) lpjFbxContainerTemplate)->GetExtendTemplateCount(
  ));
  return ret;
}
  /// void  ClearExtendTemplatePath ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxContainerTemplate_ClearExtendTemplatePath(JNIEnv * __env, jclass __jc,jlong lpjFbxContainerTemplate)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxContainerTemplate *) lpjFbxContainerTemplate)->ClearExtendTemplatePath(
  );
}
  /// FbxPropertyT< FbxString >  ContainerTemplateName
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxContainerTemplate_mepSetContainerTemplateName(JNIEnv * __env, jclass __jc,jlong lpjFbxContainerTemplate,jlong lpFbxString)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxContainerTemplate *) lpjFbxContainerTemplate)->ContainerTemplateName.Set(
  ( FbxString  )  _lcvt.j2c_object<jlong,FbxString >(lpFbxString)
  );
}
  /// FbxPropertyT< FbxString >  ContainerTemplateName
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxContainerTemplate_mepGetContainerTemplateName(JNIEnv * __env, jclass __jc,jlong lpjFbxContainerTemplate)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxString>(
  ((FbxContainerTemplate *) lpjFbxContainerTemplate)->ContainerTemplateName.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxString >  ContainerTemplateName
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxContainerTemplate_mptGetContainerTemplateName(JNIEnv * __env, jclass __jc,jlong lpjFbxContainerTemplate)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxString   >(
   (&((FbxContainerTemplate *) lpjFbxContainerTemplate)->ContainerTemplateName
  ));
  return ret;
}
  /// FbxPropertyT< FbxString >  ContainerTemplatePath
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxContainerTemplate_mepSetContainerTemplatePath(JNIEnv * __env, jclass __jc,jlong lpjFbxContainerTemplate,jlong lpFbxString)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxContainerTemplate *) lpjFbxContainerTemplate)->ContainerTemplatePath.Set(
  ( FbxString  )  _lcvt.j2c_object<jlong,FbxString >(lpFbxString)
  );
}
  /// FbxPropertyT< FbxString >  ContainerTemplatePath
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxContainerTemplate_mepGetContainerTemplatePath(JNIEnv * __env, jclass __jc,jlong lpjFbxContainerTemplate)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxString>(
  ((FbxContainerTemplate *) lpjFbxContainerTemplate)->ContainerTemplatePath.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxString >  ContainerTemplatePath
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxContainerTemplate_mptGetContainerTemplatePath(JNIEnv * __env, jclass __jc,jlong lpjFbxContainerTemplate)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxString   >(
   (&((FbxContainerTemplate *) lpjFbxContainerTemplate)->ContainerTemplatePath
  ));
  return ret;
}
  /// FbxPropertyT< FbxString >  ContainerTemplatePackageName
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxContainerTemplate_mepSetContainerTemplatePackageName(JNIEnv * __env, jclass __jc,jlong lpjFbxContainerTemplate,jlong lpFbxString)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxContainerTemplate *) lpjFbxContainerTemplate)->ContainerTemplatePackageName.Set(
  ( FbxString  )  _lcvt.j2c_object<jlong,FbxString >(lpFbxString)
  );
}
  /// FbxPropertyT< FbxString >  ContainerTemplatePackageName
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxContainerTemplate_mepGetContainerTemplatePackageName(JNIEnv * __env, jclass __jc,jlong lpjFbxContainerTemplate)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxString>(
  ((FbxContainerTemplate *) lpjFbxContainerTemplate)->ContainerTemplatePackageName.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxString >  ContainerTemplatePackageName
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxContainerTemplate_mptGetContainerTemplatePackageName(JNIEnv * __env, jclass __jc,jlong lpjFbxContainerTemplate)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxString   >(
   (&((FbxContainerTemplate *) lpjFbxContainerTemplate)->ContainerTemplatePackageName
  ));
  return ret;
}
  /// FbxPropertyT< FbxString >  ContainerTemplateVersion
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxContainerTemplate_mepSetContainerTemplateVersion(JNIEnv * __env, jclass __jc,jlong lpjFbxContainerTemplate,jlong lpFbxString)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxContainerTemplate *) lpjFbxContainerTemplate)->ContainerTemplateVersion.Set(
  ( FbxString  )  _lcvt.j2c_object<jlong,FbxString >(lpFbxString)
  );
}
  /// FbxPropertyT< FbxString >  ContainerTemplateVersion
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxContainerTemplate_mepGetContainerTemplateVersion(JNIEnv * __env, jclass __jc,jlong lpjFbxContainerTemplate)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxString>(
  ((FbxContainerTemplate *) lpjFbxContainerTemplate)->ContainerTemplateVersion.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxString >  ContainerTemplateVersion
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxContainerTemplate_mptGetContainerTemplateVersion(JNIEnv * __env, jclass __jc,jlong lpjFbxContainerTemplate)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxString   >(
   (&((FbxContainerTemplate *) lpjFbxContainerTemplate)->ContainerTemplateVersion
  ));
  return ret;
}
  /// FbxContainerTemplate * Create( FbxObject* lpFbxObject,  const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxContainerTemplate_Create(JNIEnv * __env, jclass __jc,jlong lpFbxObject,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxContainerTemplate>(
  FbxContainerTemplate::Create(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(lpFbxObject)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
