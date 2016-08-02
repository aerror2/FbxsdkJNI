
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// void  AddConstraintSource (FbxObject *pObject, double pWeight=100)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxConstraintPosition_AddConstraintSource(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintPosition,jlong pObject,jdouble pWeight)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxConstraintPosition *) lpjFbxConstraintPosition)->AddConstraintSource(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pObject)
  ,
  ( double  )  _lcvt.j2c<jdouble, double  >(pWeight)
  );
}
  /// bool  RemoveConstraintSource (FbxObject *pObject)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxConstraintPosition_RemoveConstraintSource(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintPosition,jlong pObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxConstraintPosition *) lpjFbxConstraintPosition)->RemoveConstraintSource(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pObject)
  ));
  return ret;
}
  /// int  GetConstraintSourceCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxConstraintPosition_GetConstraintSourceCount(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintPosition)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxConstraintPosition *) lpjFbxConstraintPosition)->GetConstraintSourceCount(
  ));
  return ret;
}
  /// FbxObject *  GetConstraintSource (int pIndex) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintPosition_GetConstraintSource(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintPosition,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxObject>(
  ((FbxConstraintPosition *) lpjFbxConstraintPosition)->GetConstraintSource(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// void  SetConstrainedObject (FbxObject *pObject)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxConstraintPosition_SetConstrainedObject(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintPosition,jlong pObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxConstraintPosition *) lpjFbxConstraintPosition)->SetConstrainedObject(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pObject)
  );
}
  /// FbxObject *  GetConstrainedObject () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintPosition_GetConstrainedObject(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintPosition)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxObject>(
  ((FbxConstraintPosition *) lpjFbxConstraintPosition)->GetConstrainedObject(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  AffectX
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxConstraintPosition_mepSetAffectX(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintPosition,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxConstraintPosition *) lpjFbxConstraintPosition)->AffectX.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  AffectX
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxConstraintPosition_mepGetAffectX(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintPosition)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxConstraintPosition *) lpjFbxConstraintPosition)->AffectX.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  AffectX
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintPosition_mptGetAffectX(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintPosition)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxConstraintPosition *) lpjFbxConstraintPosition)->AffectX
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  AffectY
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxConstraintPosition_mepSetAffectY(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintPosition,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxConstraintPosition *) lpjFbxConstraintPosition)->AffectY.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  AffectY
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxConstraintPosition_mepGetAffectY(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintPosition)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxConstraintPosition *) lpjFbxConstraintPosition)->AffectY.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  AffectY
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintPosition_mptGetAffectY(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintPosition)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxConstraintPosition *) lpjFbxConstraintPosition)->AffectY
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  AffectZ
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxConstraintPosition_mepSetAffectZ(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintPosition,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxConstraintPosition *) lpjFbxConstraintPosition)->AffectZ.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  AffectZ
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxConstraintPosition_mepGetAffectZ(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintPosition)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxConstraintPosition *) lpjFbxConstraintPosition)->AffectZ.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  AffectZ
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintPosition_mptGetAffectZ(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintPosition)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxConstraintPosition *) lpjFbxConstraintPosition)->AffectZ
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  Translation
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxConstraintPosition_mepSetTranslation(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintPosition,jlong lpFbxDouble3)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxConstraintPosition *) lpjFbxConstraintPosition)->Translation.Set(
  ( FbxDouble3  )  _lcvt.j2c_object<jlong,FbxDouble3 >(lpFbxDouble3)
  );
}
  /// FbxPropertyT< FbxDouble3 >  Translation
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintPosition_mepGetTranslation(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintPosition)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxDouble3>(
  ((FbxConstraintPosition *) lpjFbxConstraintPosition)->Translation.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  Translation
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintPosition_mptGetTranslation(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintPosition)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble3   >(
   (&((FbxConstraintPosition *) lpjFbxConstraintPosition)->Translation
  ));
  return ret;
}
  /// FbxPropertyT< FbxReference >  ConstraintSources
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxConstraintPosition_mepSetConstraintSources(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintPosition,jlong lpFbxReference)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxConstraintPosition *) lpjFbxConstraintPosition)->ConstraintSources.Set(
  ( FbxReference  )  _lcvt.j2c<jlong, FbxReference  >(lpFbxReference)
  );
}
  /// FbxPropertyT< FbxReference >  ConstraintSources
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintPosition_mepGetConstraintSources(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintPosition)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j<jlong,  FbxReference  >(
  ((FbxConstraintPosition *) lpjFbxConstraintPosition)->ConstraintSources.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxReference >  ConstraintSources
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintPosition_mptGetConstraintSources(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintPosition)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxReference   >(
   (&((FbxConstraintPosition *) lpjFbxConstraintPosition)->ConstraintSources
  ));
  return ret;
}
  /// FbxPropertyT< FbxReference >  ConstrainedObject
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxConstraintPosition_mepSetConstrainedObject(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintPosition,jlong lpFbxReference)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxConstraintPosition *) lpjFbxConstraintPosition)->ConstrainedObject.Set(
  ( FbxReference  )  _lcvt.j2c<jlong, FbxReference  >(lpFbxReference)
  );
}
  /// FbxPropertyT< FbxReference >  ConstrainedObject
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintPosition_mepGetConstrainedObject(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintPosition)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j<jlong,  FbxReference  >(
  ((FbxConstraintPosition *) lpjFbxConstraintPosition)->ConstrainedObject.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxReference >  ConstrainedObject
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintPosition_mptGetConstrainedObject(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintPosition)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxReference   >(
   (&((FbxConstraintPosition *) lpjFbxConstraintPosition)->ConstrainedObject
  ));
  return ret;
}
  /// FbxConstraintPosition * Create( FbxConstraint* lpFbxConstraint,  const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintPosition_Create(JNIEnv * __env, jclass __jc,jlong lpFbxConstraint,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxConstraintPosition>(
  FbxConstraintPosition::Create(
  ( FbxConstraint  *)  _lcvt.j2c_object_pt<jlong, FbxConstraint>(lpFbxConstraint)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
