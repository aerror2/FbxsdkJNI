//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// virtual FbxNodeAttribute::EType  GetAttributeType () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLayerContainer_GetAttributeType(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerContainer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxNodeAttribute::EType  >(
  ((FbxLayerContainer *) lpjFbxLayerContainer)->GetAttributeType(
  ));
  return ret;
}
  /// bool  ConvertDirectToIndexToDirect (int pLayer)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxLayerContainer_ConvertDirectToIndexToDirect(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerContainer,jint pLayer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxLayerContainer *) lpjFbxLayerContainer)->ConvertDirectToIndexToDirect(
  ( int  )  _lcvt.j2c<jint, int  >(pLayer)
  ));
  return ret;
}
  /// int  CreateLayer ()
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLayerContainer_CreateLayer(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerContainer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxLayerContainer *) lpjFbxLayerContainer)->CreateLayer(
  ));
  return ret;
}
  /// void  ClearLayers ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLayerContainer_ClearLayers(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerContainer)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLayerContainer *) lpjFbxLayerContainer)->ClearLayers(
  );
}
  /// int  GetLayerCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLayerContainer_GetLayerCount(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerContainer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxLayerContainer *) lpjFbxLayerContainer)->GetLayerCount(
  ));
  return ret;
}
  /// int  GetLayerCount (FbxLayerElement::EType pType, bool pUVCount=false) const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLayerContainer_GetLayerCount1(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerContainer,jint pType,jboolean pUVCount)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxLayerContainer *) lpjFbxLayerContainer)->GetLayerCount(
  ( FbxLayerElement::EType  )  _lcvt.j2c<jint,FbxLayerElement::EType >(pType)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pUVCount)
  ));
  return ret;
}
  /// FbxLayer *  GetLayer (int pIndex)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLayerContainer_GetLayer(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerContainer,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxLayer>(
  ((FbxLayerContainer *) lpjFbxLayerContainer)->GetLayer(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// const FbxLayer *  GetLayer (int pIndex) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLayerContainer_GetLayer1(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerContainer,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxLayer>(
  ((FbxLayerContainer *) lpjFbxLayerContainer)->GetLayer(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// FbxLayer *  GetLayer (int pIndex, FbxLayerElement::EType pType, bool pIsUV=false)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLayerContainer_GetLayer2(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerContainer,jint pIndex,jint pType,jboolean pIsUV)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxLayer>(
  ((FbxLayerContainer *) lpjFbxLayerContainer)->GetLayer(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ,
  ( FbxLayerElement::EType  )  _lcvt.j2c<jint,FbxLayerElement::EType >(pType)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pIsUV)
  ));
  return ret;
}
  /// const FbxLayer *  GetLayer (int pIndex, FbxLayerElement::EType pType, bool pIsUV=false) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLayerContainer_GetLayer3(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerContainer,jint pIndex,jint pType,jboolean pIsUV)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxLayer>(
  ((FbxLayerContainer *) lpjFbxLayerContainer)->GetLayer(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ,
  ( FbxLayerElement::EType  )  _lcvt.j2c<jint,FbxLayerElement::EType >(pType)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pIsUV)
  ));
  return ret;
}
  /// int  GetLayerIndex (int pIndex, FbxLayerElement::EType pType, bool pIsUV=false) const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLayerContainer_GetLayerIndex(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerContainer,jint pIndex,jint pType,jboolean pIsUV)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxLayerContainer *) lpjFbxLayerContainer)->GetLayerIndex(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ,
  ( FbxLayerElement::EType  )  _lcvt.j2c<jint,FbxLayerElement::EType >(pType)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pIsUV)
  ));
  return ret;
}
  /// int  GetLayerTypedIndex (int pGlobalIndex, FbxLayerElement::EType pType, bool pIsUV=false) const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLayerContainer_GetLayerTypedIndex(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerContainer,jint pGlobalIndex,jint pType,jboolean pIsUV)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxLayerContainer *) lpjFbxLayerContainer)->GetLayerTypedIndex(
  ( int  )  _lcvt.j2c<jint, int  >(pGlobalIndex)
  ,
  ( FbxLayerElement::EType  )  _lcvt.j2c<jint,FbxLayerElement::EType >(pType)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pIsUV)
  ));
  return ret;
}
  /// FbxLayerContainer * Create( FbxLayerContainer* pOwner, const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLayerContainer_Create(JNIEnv * __env, jclass __jc,jlong pOwner,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxLayerContainer>(
  FbxLayerContainer::Create(
  ( FbxLayerContainer  *)  _lcvt.j2c_object_pt<jlong, FbxLayerContainer>(pOwner)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
