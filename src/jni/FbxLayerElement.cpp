
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// void  SetMappingMode (EMappingMode pMappingMode)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLayerElement_SetMappingMode(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElement,jint pMappingMode)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLayerElement *) lpjFbxLayerElement)->SetMappingMode(
  ( FbxLayerElement::EMappingMode  )  _lcvt.j2c<jint,FbxLayerElement::EMappingMode >(pMappingMode)
  );
}
  /// void  SetReferenceMode (EReferenceMode pReferenceMode)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLayerElement_SetReferenceMode(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElement,jint pReferenceMode)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLayerElement *) lpjFbxLayerElement)->SetReferenceMode(
  ( FbxLayerElement::EReferenceMode  )  _lcvt.j2c<jint,FbxLayerElement::EReferenceMode >(pReferenceMode)
  );
}
  /// EMappingMode  GetMappingMode () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLayerElement_GetMappingMode(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElement)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxLayerElement::EMappingMode  >(
  ((FbxLayerElement *) lpjFbxLayerElement)->GetMappingMode(
  ));
  return ret;
}
  /// EReferenceMode  GetReferenceMode () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLayerElement_GetReferenceMode(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElement)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxLayerElement::EReferenceMode  >(
  ((FbxLayerElement *) lpjFbxLayerElement)->GetReferenceMode(
  ));
  return ret;
}
  /// void  SetName (const char *pName)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLayerElement_SetName(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElement,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLayerElement *) lpjFbxLayerElement)->SetName(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  );
}
  /// const char *  GetName () const
extern "C" JNIEXPORT jstring JNICALL Java_fbxsdk_FbxLayerElement_GetName(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElement)
{
  JNILocalConverter _lcvt(__env,__jc);
  jstring ret=(jstring)_lcvt.c2j_string(
  ((FbxLayerElement *) lpjFbxLayerElement)->GetName(
  ));
  return ret;
}
  /// void  Destroy ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLayerElement_Destroy(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElement)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLayerElement *) lpjFbxLayerElement)->Destroy(
  );
}
  /// virtual bool  Clear ()
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxLayerElement_Clear(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElement)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxLayerElement *) lpjFbxLayerElement)->Clear(
  ));
  return ret;
}
