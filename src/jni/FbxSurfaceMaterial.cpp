
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxPropertyT< FbxString >  ShadingModel
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxSurfaceMaterial_mepSetShadingModel(JNIEnv * __env, jclass __jc,jlong lpjFbxSurfaceMaterial,jlong lpFbxString)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxSurfaceMaterial *) lpjFbxSurfaceMaterial)->ShadingModel.Set(
  ( FbxString  )  _lcvt.j2c_object<jlong,FbxString >(lpFbxString)
  );
}
  /// FbxPropertyT< FbxString >  ShadingModel
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxSurfaceMaterial_mepGetShadingModel(JNIEnv * __env, jclass __jc,jlong lpjFbxSurfaceMaterial)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxString>(
  ((FbxSurfaceMaterial *) lpjFbxSurfaceMaterial)->ShadingModel.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxString >  ShadingModel
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxSurfaceMaterial_mptGetShadingModel(JNIEnv * __env, jclass __jc,jlong lpjFbxSurfaceMaterial)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxString   >(
   (&((FbxSurfaceMaterial *) lpjFbxSurfaceMaterial)->ShadingModel
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  MultiLayer
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxSurfaceMaterial_mepSetMultiLayer(JNIEnv * __env, jclass __jc,jlong lpjFbxSurfaceMaterial,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxSurfaceMaterial *) lpjFbxSurfaceMaterial)->MultiLayer.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  MultiLayer
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxSurfaceMaterial_mepGetMultiLayer(JNIEnv * __env, jclass __jc,jlong lpjFbxSurfaceMaterial)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxSurfaceMaterial *) lpjFbxSurfaceMaterial)->MultiLayer.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  MultiLayer
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxSurfaceMaterial_mptGetMultiLayer(JNIEnv * __env, jclass __jc,jlong lpjFbxSurfaceMaterial)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxSurfaceMaterial *) lpjFbxSurfaceMaterial)->MultiLayer
  ));
  return ret;
}
  /// FbxSurfaceMaterial * Create( FbxObject* lpFbxObject,  const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxSurfaceMaterial_Create(JNIEnv * __env, jclass __jc,jlong lpFbxObject,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxSurfaceMaterial>(
  FbxSurfaceMaterial::Create(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(lpFbxObject)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
