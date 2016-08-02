
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxProperty  CreateProperty (FbxString pName, FbxDataType &pType, FbxString pLabel)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxContainer_CreateProperty(JNIEnv * __env, jclass __jc,jlong lpjFbxContainer,jlong pName,jobject pType,jlong pLabel)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxProperty>(
  ((FbxContainer *) lpjFbxContainer)->CreateProperty(
  ( FbxString  )  _lcvt.j2c_object<jlong,FbxString >(pName)
  ,
  ( FbxDataType  &) * _lcvt.j2c_object_ref<jobject,FbxDataType >(pType)
  ,
  ( FbxString  )  _lcvt.j2c_object<jlong,FbxString >(pLabel)
  ));
  return ret;
}
  /// FbxPropertyT< FbxString >  TemplateName
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxContainer_mepSetTemplateName(JNIEnv * __env, jclass __jc,jlong lpjFbxContainer,jlong lpFbxString)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxContainer *) lpjFbxContainer)->TemplateName.Set(
  ( FbxString  )  _lcvt.j2c_object<jlong,FbxString >(lpFbxString)
  );
}
  /// FbxPropertyT< FbxString >  TemplateName
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxContainer_mepGetTemplateName(JNIEnv * __env, jclass __jc,jlong lpjFbxContainer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxString>(
  ((FbxContainer *) lpjFbxContainer)->TemplateName.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxString >  TemplateName
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxContainer_mptGetTemplateName(JNIEnv * __env, jclass __jc,jlong lpjFbxContainer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxString   >(
   (&((FbxContainer *) lpjFbxContainer)->TemplateName
  ));
  return ret;
}
  /// FbxPropertyT< FbxString >  TemplatePath
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxContainer_mepSetTemplatePath(JNIEnv * __env, jclass __jc,jlong lpjFbxContainer,jlong lpFbxString)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxContainer *) lpjFbxContainer)->TemplatePath.Set(
  ( FbxString  )  _lcvt.j2c_object<jlong,FbxString >(lpFbxString)
  );
}
  /// FbxPropertyT< FbxString >  TemplatePath
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxContainer_mepGetTemplatePath(JNIEnv * __env, jclass __jc,jlong lpjFbxContainer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxString>(
  ((FbxContainer *) lpjFbxContainer)->TemplatePath.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxString >  TemplatePath
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxContainer_mptGetTemplatePath(JNIEnv * __env, jclass __jc,jlong lpjFbxContainer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxString   >(
   (&((FbxContainer *) lpjFbxContainer)->TemplatePath
  ));
  return ret;
}
  /// FbxPropertyT< FbxString >  TemplateVersion
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxContainer_mepSetTemplateVersion(JNIEnv * __env, jclass __jc,jlong lpjFbxContainer,jlong lpFbxString)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxContainer *) lpjFbxContainer)->TemplateVersion.Set(
  ( FbxString  )  _lcvt.j2c_object<jlong,FbxString >(lpFbxString)
  );
}
  /// FbxPropertyT< FbxString >  TemplateVersion
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxContainer_mepGetTemplateVersion(JNIEnv * __env, jclass __jc,jlong lpjFbxContainer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxString>(
  ((FbxContainer *) lpjFbxContainer)->TemplateVersion.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxString >  TemplateVersion
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxContainer_mptGetTemplateVersion(JNIEnv * __env, jclass __jc,jlong lpjFbxContainer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxString   >(
   (&((FbxContainer *) lpjFbxContainer)->TemplateVersion
  ));
  return ret;
}
  /// FbxPropertyT< FbxString >  ViewName
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxContainer_mepSetViewName(JNIEnv * __env, jclass __jc,jlong lpjFbxContainer,jlong lpFbxString)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxContainer *) lpjFbxContainer)->ViewName.Set(
  ( FbxString  )  _lcvt.j2c_object<jlong,FbxString >(lpFbxString)
  );
}
  /// FbxPropertyT< FbxString >  ViewName
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxContainer_mepGetViewName(JNIEnv * __env, jclass __jc,jlong lpjFbxContainer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxString>(
  ((FbxContainer *) lpjFbxContainer)->ViewName.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxString >  ViewName
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxContainer_mptGetViewName(JNIEnv * __env, jclass __jc,jlong lpjFbxContainer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxString   >(
   (&((FbxContainer *) lpjFbxContainer)->ViewName
  ));
  return ret;
}
  /// FbxContainer * Create( FbxObject* lpFbxObject,  const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxContainer_Create(JNIEnv * __env, jclass __jc,jlong lpFbxObject,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxContainer>(
  FbxContainer::Create(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(lpFbxObject)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
