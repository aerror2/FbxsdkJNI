
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// void  SetReferenceMode (FbxLayerElement::EReferenceMode pMode)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLayerElementCrease_SetReferenceMode(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementCrease,jint pMode)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLayerElementCrease *) lpjFbxLayerElementCrease)->SetReferenceMode(
  ( FbxLayerElement::EReferenceMode  )  _lcvt.j2c<jint,FbxLayerElement::EReferenceMode >(pMode)
  );
}
  /// FbxLayerElementCrease * Create( FbxLayerContainer* pOwner, const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLayerElementCrease_Create(JNIEnv * __env, jclass __jc,jlong pOwner,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxLayerElementCrease>(
  FbxLayerElementCrease::Create(
  ( FbxLayerContainer  *)  _lcvt.j2c_object_pt<jlong, FbxLayerContainer>(pOwner)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
