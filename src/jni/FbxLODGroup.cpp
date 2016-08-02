
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// virtual FbxNodeAttribute::EType  GetAttributeType () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLODGroup_GetAttributeType(JNIEnv * __env, jclass __jc,jlong lpjFbxLODGroup)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxNodeAttribute::EType  >(
  ((FbxLODGroup *) lpjFbxLODGroup)->GetAttributeType(
  ));
  return ret;
}
  /// int  GetNumThresholds () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLODGroup_GetNumThresholds(JNIEnv * __env, jclass __jc,jlong lpjFbxLODGroup)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxLODGroup *) lpjFbxLODGroup)->GetNumThresholds(
  ));
  return ret;
}
  /// bool  AddThreshold (FbxDistance pThreshValue)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxLODGroup_AddThreshold(JNIEnv * __env, jclass __jc,jlong lpjFbxLODGroup,jlong pThreshValue)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxLODGroup *) lpjFbxLODGroup)->AddThreshold(
  ( FbxDistance  )  _lcvt.j2c_object<jlong,FbxDistance >(pThreshValue)
  ));
  return ret;
}
  /// bool  SetThreshold (int pEl, FbxDistance pThreshValue)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxLODGroup_SetThreshold(JNIEnv * __env, jclass __jc,jlong lpjFbxLODGroup,jint pEl,jlong pThreshValue)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxLODGroup *) lpjFbxLODGroup)->SetThreshold(
  ( int  )  _lcvt.j2c<jint, int  >(pEl)
  ,
  ( FbxDistance  )  _lcvt.j2c_object<jlong,FbxDistance >(pThreshValue)
  ));
  return ret;
}
  /// bool  GetThreshold (int pEl, FbxDistance &pThreshValue) const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxLODGroup_GetThreshold(JNIEnv * __env, jclass __jc,jlong lpjFbxLODGroup,jint pEl,jobject pThreshValue)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxLODGroup *) lpjFbxLODGroup)->GetThreshold(
  ( int  )  _lcvt.j2c<jint, int  >(pEl)
  ,
  ( FbxDistance  &) * _lcvt.j2c_object_ref<jobject,FbxDistance >(pThreshValue)
  ));
  return ret;
}
  /// int  GetNumDisplayLevels () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLODGroup_GetNumDisplayLevels(JNIEnv * __env, jclass __jc,jlong lpjFbxLODGroup)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxLODGroup *) lpjFbxLODGroup)->GetNumDisplayLevels(
  ));
  return ret;
}
  /// bool  AddDisplayLevel (FbxLODGroup::EDisplayLevel pValue)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxLODGroup_AddDisplayLevel(JNIEnv * __env, jclass __jc,jlong lpjFbxLODGroup,jint pValue)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxLODGroup *) lpjFbxLODGroup)->AddDisplayLevel(
  ( FbxLODGroup::EDisplayLevel  )  _lcvt.j2c<jint,FbxLODGroup::EDisplayLevel >(pValue)
  ));
  return ret;
}
  /// bool  SetDisplayLevel (int pEl, FbxLODGroup::EDisplayLevel pValue)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxLODGroup_SetDisplayLevel(JNIEnv * __env, jclass __jc,jlong lpjFbxLODGroup,jint pEl,jint pValue)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxLODGroup *) lpjFbxLODGroup)->SetDisplayLevel(
  ( int  )  _lcvt.j2c<jint, int  >(pEl)
  ,
  ( FbxLODGroup::EDisplayLevel  )  _lcvt.j2c<jint,FbxLODGroup::EDisplayLevel >(pValue)
  ));
  return ret;
}
  /// bool  GetDisplayLevel (int pEl, FbxLODGroup::EDisplayLevel &pValue) const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxLODGroup_GetDisplayLevel(JNIEnv * __env, jclass __jc,jlong lpjFbxLODGroup,jint pEl,jobject pValue)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxLODGroup *) lpjFbxLODGroup)->GetDisplayLevel(
  ( int  )  _lcvt.j2c<jint, int  >(pEl)
  ,
  ( FbxLODGroup::EDisplayLevel  &) * _lcvt.j2c_int_ref<jobject,FbxLODGroup::EDisplayLevel>(pValue)
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  MinMaxDistance
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLODGroup_mepSetMinMaxDistance(JNIEnv * __env, jclass __jc,jlong lpjFbxLODGroup,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLODGroup *) lpjFbxLODGroup)->MinMaxDistance.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  MinMaxDistance
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxLODGroup_mepGetMinMaxDistance(JNIEnv * __env, jclass __jc,jlong lpjFbxLODGroup)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxLODGroup *) lpjFbxLODGroup)->MinMaxDistance.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  MinMaxDistance
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLODGroup_mptGetMinMaxDistance(JNIEnv * __env, jclass __jc,jlong lpjFbxLODGroup)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxLODGroup *) lpjFbxLODGroup)->MinMaxDistance
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  MinDistance
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLODGroup_mepSetMinDistance(JNIEnv * __env, jclass __jc,jlong lpjFbxLODGroup,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLODGroup *) lpjFbxLODGroup)->MinDistance.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  MinDistance
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxLODGroup_mepGetMinDistance(JNIEnv * __env, jclass __jc,jlong lpjFbxLODGroup)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxLODGroup *) lpjFbxLODGroup)->MinDistance.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  MinDistance
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLODGroup_mptGetMinDistance(JNIEnv * __env, jclass __jc,jlong lpjFbxLODGroup)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxLODGroup *) lpjFbxLODGroup)->MinDistance
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  MaxDistance
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLODGroup_mepSetMaxDistance(JNIEnv * __env, jclass __jc,jlong lpjFbxLODGroup,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLODGroup *) lpjFbxLODGroup)->MaxDistance.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  MaxDistance
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxLODGroup_mepGetMaxDistance(JNIEnv * __env, jclass __jc,jlong lpjFbxLODGroup)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxLODGroup *) lpjFbxLODGroup)->MaxDistance.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  MaxDistance
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLODGroup_mptGetMaxDistance(JNIEnv * __env, jclass __jc,jlong lpjFbxLODGroup)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxLODGroup *) lpjFbxLODGroup)->MaxDistance
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  WorldSpace
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLODGroup_mepSetWorldSpace(JNIEnv * __env, jclass __jc,jlong lpjFbxLODGroup,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLODGroup *) lpjFbxLODGroup)->WorldSpace.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  WorldSpace
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxLODGroup_mepGetWorldSpace(JNIEnv * __env, jclass __jc,jlong lpjFbxLODGroup)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxLODGroup *) lpjFbxLODGroup)->WorldSpace.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  WorldSpace
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLODGroup_mptGetWorldSpace(JNIEnv * __env, jclass __jc,jlong lpjFbxLODGroup)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxLODGroup *) lpjFbxLODGroup)->WorldSpace
  ));
  return ret;
}
  /// FbxLODGroup * Create( FbxNodeAttribute* lpFbxNodeAttribute,  const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLODGroup_Create(JNIEnv * __env, jclass __jc,jlong lpFbxNodeAttribute,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxLODGroup>(
  FbxLODGroup::Create(
  ( FbxNodeAttribute  *)  _lcvt.j2c_object_pt<jlong, FbxNodeAttribute>(lpFbxNodeAttribute)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
