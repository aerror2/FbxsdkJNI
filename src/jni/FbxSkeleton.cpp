
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// virtual FbxNodeAttribute::EType  GetAttributeType () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxSkeleton_GetAttributeType(JNIEnv * __env, jclass __jc,jlong lpjFbxSkeleton)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxNodeAttribute::EType  >(
  ((FbxSkeleton *) lpjFbxSkeleton)->GetAttributeType(
  ));
  return ret;
}
  /// void  Reset ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxSkeleton_Reset(JNIEnv * __env, jclass __jc,jlong lpjFbxSkeleton)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxSkeleton *) lpjFbxSkeleton)->Reset(
  );
}
  /// void  SetSkeletonType (EType pSkeletonType)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxSkeleton_SetSkeletonType(JNIEnv * __env, jclass __jc,jlong lpjFbxSkeleton,jint pSkeletonType)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxSkeleton *) lpjFbxSkeleton)->SetSkeletonType(
  ( FbxSkeleton::EType  )  _lcvt.j2c<jint,FbxSkeleton::EType >(pSkeletonType)
  );
}
  /// EType  GetSkeletonType () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxSkeleton_GetSkeletonType(JNIEnv * __env, jclass __jc,jlong lpjFbxSkeleton)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxSkeleton::EType  >(
  ((FbxSkeleton *) lpjFbxSkeleton)->GetSkeletonType(
  ));
  return ret;
}
  /// bool  GetSkeletonTypeIsSet () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxSkeleton_GetSkeletonTypeIsSet(JNIEnv * __env, jclass __jc,jlong lpjFbxSkeleton)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxSkeleton *) lpjFbxSkeleton)->GetSkeletonTypeIsSet(
  ));
  return ret;
}
  /// EType  GetSkeletonTypeDefaultValue () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxSkeleton_GetSkeletonTypeDefaultValue(JNIEnv * __env, jclass __jc,jlong lpjFbxSkeleton)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxSkeleton::EType  >(
  ((FbxSkeleton *) lpjFbxSkeleton)->GetSkeletonTypeDefaultValue(
  ));
  return ret;
}
  /// double  GetLimbLengthDefaultValue () const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxSkeleton_GetLimbLengthDefaultValue(JNIEnv * __env, jclass __jc,jlong lpjFbxSkeleton)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxSkeleton *) lpjFbxSkeleton)->GetLimbLengthDefaultValue(
  ));
  return ret;
}
  /// double  GetLimbNodeSizeDefaultValue () const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxSkeleton_GetLimbNodeSizeDefaultValue(JNIEnv * __env, jclass __jc,jlong lpjFbxSkeleton)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxSkeleton *) lpjFbxSkeleton)->GetLimbNodeSizeDefaultValue(
  ));
  return ret;
}
  /// bool  SetLimbNodeColor (const FbxColor &pColor)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxSkeleton_SetLimbNodeColor(JNIEnv * __env, jclass __jc,jlong lpjFbxSkeleton,jobject pColor)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxSkeleton *) lpjFbxSkeleton)->SetLimbNodeColor(
  (const FbxColor  &) * _lcvt.j2c_object_ref<jobject,FbxColor >(pColor)
  ));
  return ret;
}
  /// FbxColor  GetLimbNodeColor () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxSkeleton_GetLimbNodeColor(JNIEnv * __env, jclass __jc,jlong lpjFbxSkeleton)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxColor>(
  ((FbxSkeleton *) lpjFbxSkeleton)->GetLimbNodeColor(
  ));
  return ret;
}
  /// bool  GetLimbNodeColorIsSet () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxSkeleton_GetLimbNodeColorIsSet(JNIEnv * __env, jclass __jc,jlong lpjFbxSkeleton)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxSkeleton *) lpjFbxSkeleton)->GetLimbNodeColorIsSet(
  ));
  return ret;
}
  /// FbxColor  GetLimbNodeColorDefaultValue () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxSkeleton_GetLimbNodeColorDefaultValue(JNIEnv * __env, jclass __jc,jlong lpjFbxSkeleton)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxColor>(
  ((FbxSkeleton *) lpjFbxSkeleton)->GetLimbNodeColorDefaultValue(
  ));
  return ret;
}
  /// bool  IsSkeletonRoot () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxSkeleton_IsSkeletonRoot(JNIEnv * __env, jclass __jc,jlong lpjFbxSkeleton)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxSkeleton *) lpjFbxSkeleton)->IsSkeletonRoot(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  Size
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxSkeleton_mepSetSize(JNIEnv * __env, jclass __jc,jlong lpjFbxSkeleton,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxSkeleton *) lpjFbxSkeleton)->Size.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  Size
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxSkeleton_mepGetSize(JNIEnv * __env, jclass __jc,jlong lpjFbxSkeleton)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxSkeleton *) lpjFbxSkeleton)->Size.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  Size
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxSkeleton_mptGetSize(JNIEnv * __env, jclass __jc,jlong lpjFbxSkeleton)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxSkeleton *) lpjFbxSkeleton)->Size
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  LimbLength
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxSkeleton_mepSetLimbLength(JNIEnv * __env, jclass __jc,jlong lpjFbxSkeleton,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxSkeleton *) lpjFbxSkeleton)->LimbLength.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  LimbLength
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxSkeleton_mepGetLimbLength(JNIEnv * __env, jclass __jc,jlong lpjFbxSkeleton)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxSkeleton *) lpjFbxSkeleton)->LimbLength.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  LimbLength
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxSkeleton_mptGetLimbLength(JNIEnv * __env, jclass __jc,jlong lpjFbxSkeleton)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxSkeleton *) lpjFbxSkeleton)->LimbLength
  ));
  return ret;
}
  /// FbxSkeleton * Create( FbxNodeAttribute* lpFbxNodeAttribute,  const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxSkeleton_Create(JNIEnv * __env, jclass __jc,jlong lpFbxNodeAttribute,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxSkeleton>(
  FbxSkeleton::Create(
  ( FbxNodeAttribute  *)  _lcvt.j2c_object_pt<jlong, FbxNodeAttribute>(lpFbxNodeAttribute)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
