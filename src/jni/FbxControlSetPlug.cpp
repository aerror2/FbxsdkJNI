
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxPropertyT< FbxBool >  UseAxis
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxControlSetPlug_mepSetUseAxis(JNIEnv * __env, jclass __jc,jlong lpjFbxControlSetPlug,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxControlSetPlug *) lpjFbxControlSetPlug)->UseAxis.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  UseAxis
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxControlSetPlug_mepGetUseAxis(JNIEnv * __env, jclass __jc,jlong lpjFbxControlSetPlug)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxControlSetPlug *) lpjFbxControlSetPlug)->UseAxis.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  UseAxis
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxControlSetPlug_mptGetUseAxis(JNIEnv * __env, jclass __jc,jlong lpjFbxControlSetPlug)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxControlSetPlug *) lpjFbxControlSetPlug)->UseAxis
  ));
  return ret;
}
  /// FbxPropertyT< FbxReference >  Character
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxControlSetPlug_mepSetCharacter(JNIEnv * __env, jclass __jc,jlong lpjFbxControlSetPlug,jlong lpFbxReference)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxControlSetPlug *) lpjFbxControlSetPlug)->Character.Set(
  ( FbxReference  )  _lcvt.j2c<jlong, FbxReference  >(lpFbxReference)
  );
}
  /// FbxPropertyT< FbxReference >  Character
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxControlSetPlug_mepGetCharacter(JNIEnv * __env, jclass __jc,jlong lpjFbxControlSetPlug)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j<jlong,  FbxReference  >(
  ((FbxControlSetPlug *) lpjFbxControlSetPlug)->Character.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxReference >  Character
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxControlSetPlug_mptGetCharacter(JNIEnv * __env, jclass __jc,jlong lpjFbxControlSetPlug)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxReference   >(
   (&((FbxControlSetPlug *) lpjFbxControlSetPlug)->Character
  ));
  return ret;
}
  /// FbxControlSetPlug * Create( FbxObject* lpFbxObject,  const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxControlSetPlug_Create(JNIEnv * __env, jclass __jc,jlong lpFbxObject,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxControlSetPlug>(
  FbxControlSetPlug::Create(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(lpFbxObject)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
