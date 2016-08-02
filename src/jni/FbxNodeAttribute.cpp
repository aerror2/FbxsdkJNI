
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// virtual FbxNodeAttribute::EType  GetAttributeType () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxNodeAttribute_GetAttributeType(JNIEnv * __env, jclass __jc,jlong lpjFbxNodeAttribute)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxNodeAttribute::EType  >(
  ((FbxNodeAttribute *) lpjFbxNodeAttribute)->GetAttributeType(
  ));
  return ret;
}
  /// int  GetNodeCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxNodeAttribute_GetNodeCount(JNIEnv * __env, jclass __jc,jlong lpjFbxNodeAttribute)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxNodeAttribute *) lpjFbxNodeAttribute)->GetNodeCount(
  ));
  return ret;
}
  /// FbxNode *  GetNode (int pIndex=0) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNodeAttribute_GetNode(JNIEnv * __env, jclass __jc,jlong lpjFbxNodeAttribute,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxNode>(
  ((FbxNodeAttribute *) lpjFbxNodeAttribute)->GetNode(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  Color
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNodeAttribute_mepSetColor(JNIEnv * __env, jclass __jc,jlong lpjFbxNodeAttribute,jlong lpFbxDouble3)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNodeAttribute *) lpjFbxNodeAttribute)->Color.Set(
  ( FbxDouble3  )  _lcvt.j2c_object<jlong,FbxDouble3 >(lpFbxDouble3)
  );
}
  /// FbxPropertyT< FbxDouble3 >  Color
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNodeAttribute_mepGetColor(JNIEnv * __env, jclass __jc,jlong lpjFbxNodeAttribute)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxDouble3>(
  ((FbxNodeAttribute *) lpjFbxNodeAttribute)->Color.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  Color
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNodeAttribute_mptGetColor(JNIEnv * __env, jclass __jc,jlong lpjFbxNodeAttribute)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble3   >(
   (&((FbxNodeAttribute *) lpjFbxNodeAttribute)->Color
  ));
  return ret;
}
  /// FbxNodeAttribute * Create( FbxObject* lpFbxObject,  const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNodeAttribute_Create(JNIEnv * __env, jclass __jc,jlong lpFbxObject,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxNodeAttribute>(
  FbxNodeAttribute::Create(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(lpFbxObject)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
