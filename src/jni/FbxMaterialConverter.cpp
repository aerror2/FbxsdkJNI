
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxMaterialConverter (FbxManager &mManager, FbxSurfaceMaterial *pDefaultMaterial=NULL)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxMaterialConverter_meCreate(JNIEnv * __env, jclass __jc,jobject mManager,jlong pDefaultMaterial)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxMaterialConverter>(
  new FbxMaterialConverter(
  ( FbxManager  &) * _lcvt.j2c_object_ref<jobject,FbxManager >(mManager)
  ,
  ( FbxSurfaceMaterial  *)  _lcvt.j2c_object_pt<jlong, FbxSurfaceMaterial>(pDefaultMaterial)
  ));
  return ret;
}
  /// ~FbxMaterialConverter ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxMaterialConverter_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxMaterialConverter)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxMaterialConverter *) lpjFbxMaterialConverter
  );
}
  /// bool  ConnectTexturesToMaterials (FbxScene &pScene)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxMaterialConverter_ConnectTexturesToMaterials(JNIEnv * __env, jclass __jc,jlong lpjFbxMaterialConverter,jobject pScene)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxMaterialConverter *) lpjFbxMaterialConverter)->ConnectTexturesToMaterials(
  ( FbxScene  &) * _lcvt.j2c_object_ref<jobject,FbxScene >(pScene)
  ));
  return ret;
}
  /// bool  ConnectTexturesToMaterials (FbxNode *pNode)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxMaterialConverter_ConnectTexturesToMaterials1(JNIEnv * __env, jclass __jc,jlong lpjFbxMaterialConverter,jlong pNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxMaterialConverter *) lpjFbxMaterialConverter)->ConnectTexturesToMaterials(
  ( FbxNode  *)  _lcvt.j2c_object_pt<jlong, FbxNode>(pNode)
  ));
  return ret;
}
  /// bool  AssignTexturesToLayerElements (FbxScene &pScene)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxMaterialConverter_AssignTexturesToLayerElements(JNIEnv * __env, jclass __jc,jlong lpjFbxMaterialConverter,jobject pScene)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxMaterialConverter *) lpjFbxMaterialConverter)->AssignTexturesToLayerElements(
  ( FbxScene  &) * _lcvt.j2c_object_ref<jobject,FbxScene >(pScene)
  ));
  return ret;
}
