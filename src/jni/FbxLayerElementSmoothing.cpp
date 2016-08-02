//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// void  SetReferenceMode (FbxLayerElement::EReferenceMode pMode)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLayerElementSmoothing_SetReferenceMode(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementSmoothing,jint pMode)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLayerElementSmoothing *) lpjFbxLayerElementSmoothing)->SetReferenceMode(
  ( FbxLayerElement::EReferenceMode  )  _lcvt.j2c<jint,FbxLayerElement::EReferenceMode >(pMode)
  );
}
  /// FbxLayerElementSmoothing * Create( FbxLayerContainer* pOwner, const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLayerElementSmoothing_Create(JNIEnv * __env, jclass __jc,jlong pOwner,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxLayerElementSmoothing>(
  FbxLayerElementSmoothing::Create(
  ( FbxLayerContainer  *)  _lcvt.j2c_object_pt<jlong, FbxLayerContainer>(pOwner)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
