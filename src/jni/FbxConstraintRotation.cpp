//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// void  AddConstraintSource (FbxObject *pObject, double pWeight=100)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxConstraintRotation_AddConstraintSource(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintRotation,jlong pObject,jdouble pWeight)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxConstraintRotation *) lpjFbxConstraintRotation)->AddConstraintSource(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pObject)
  ,
  ( double  )  _lcvt.j2c<jdouble, double  >(pWeight)
  );
}
  /// int  GetConstraintSourceCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxConstraintRotation_GetConstraintSourceCount(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintRotation)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxConstraintRotation *) lpjFbxConstraintRotation)->GetConstraintSourceCount(
  ));
  return ret;
}
  /// FbxObject *  GetConstraintSource (int pIndex) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintRotation_GetConstraintSource(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintRotation,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxObject>(
  ((FbxConstraintRotation *) lpjFbxConstraintRotation)->GetConstraintSource(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// void  SetConstrainedObject (FbxObject *pObject)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxConstraintRotation_SetConstrainedObject(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintRotation,jlong pObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxConstraintRotation *) lpjFbxConstraintRotation)->SetConstrainedObject(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pObject)
  );
}
  /// FbxObject *  GetConstrainedObject () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintRotation_GetConstrainedObject(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintRotation)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxObject>(
  ((FbxConstraintRotation *) lpjFbxConstraintRotation)->GetConstrainedObject(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  AffectX
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxConstraintRotation_mepSetAffectX(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintRotation,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxConstraintRotation *) lpjFbxConstraintRotation)->AffectX.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  AffectX
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxConstraintRotation_mepGetAffectX(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintRotation)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxConstraintRotation *) lpjFbxConstraintRotation)->AffectX.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  AffectX
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintRotation_mptGetAffectX(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintRotation)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxConstraintRotation *) lpjFbxConstraintRotation)->AffectX
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  AffectY
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxConstraintRotation_mepSetAffectY(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintRotation,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxConstraintRotation *) lpjFbxConstraintRotation)->AffectY.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  AffectY
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxConstraintRotation_mepGetAffectY(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintRotation)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxConstraintRotation *) lpjFbxConstraintRotation)->AffectY.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  AffectY
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintRotation_mptGetAffectY(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintRotation)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxConstraintRotation *) lpjFbxConstraintRotation)->AffectY
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  AffectZ
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxConstraintRotation_mepSetAffectZ(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintRotation,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxConstraintRotation *) lpjFbxConstraintRotation)->AffectZ.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  AffectZ
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxConstraintRotation_mepGetAffectZ(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintRotation)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxConstraintRotation *) lpjFbxConstraintRotation)->AffectZ.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  AffectZ
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintRotation_mptGetAffectZ(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintRotation)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxConstraintRotation *) lpjFbxConstraintRotation)->AffectZ
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  Rotation
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxConstraintRotation_mepSetRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintRotation,jlong lpFbxDouble3)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxConstraintRotation *) lpjFbxConstraintRotation)->Rotation.Set(
  ( FbxDouble3  )  _lcvt.j2c_object<jlong,FbxDouble3 >(lpFbxDouble3)
  );
}
  /// FbxPropertyT< FbxDouble3 >  Rotation
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintRotation_mepGetRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintRotation)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxDouble3>(
  ((FbxConstraintRotation *) lpjFbxConstraintRotation)->Rotation.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  Rotation
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintRotation_mptGetRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintRotation)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble3   >(
   (&((FbxConstraintRotation *) lpjFbxConstraintRotation)->Rotation
  ));
  return ret;
}
  /// FbxPropertyT< FbxReference >  ConstraintSources
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxConstraintRotation_mepSetConstraintSources(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintRotation,jlong lpFbxReference)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxConstraintRotation *) lpjFbxConstraintRotation)->ConstraintSources.Set(
  ( FbxReference  )  _lcvt.j2c<jlong, FbxReference  >(lpFbxReference)
  );
}
  /// FbxPropertyT< FbxReference >  ConstraintSources
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintRotation_mepGetConstraintSources(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintRotation)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j<jlong,  FbxReference  >(
  ((FbxConstraintRotation *) lpjFbxConstraintRotation)->ConstraintSources.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxReference >  ConstraintSources
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintRotation_mptGetConstraintSources(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintRotation)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxReference   >(
   (&((FbxConstraintRotation *) lpjFbxConstraintRotation)->ConstraintSources
  ));
  return ret;
}
  /// FbxPropertyT< FbxReference >  ConstrainedObject
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxConstraintRotation_mepSetConstrainedObject(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintRotation,jlong lpFbxReference)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxConstraintRotation *) lpjFbxConstraintRotation)->ConstrainedObject.Set(
  ( FbxReference  )  _lcvt.j2c<jlong, FbxReference  >(lpFbxReference)
  );
}
  /// FbxPropertyT< FbxReference >  ConstrainedObject
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintRotation_mepGetConstrainedObject(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintRotation)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j<jlong,  FbxReference  >(
  ((FbxConstraintRotation *) lpjFbxConstraintRotation)->ConstrainedObject.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxReference >  ConstrainedObject
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintRotation_mptGetConstrainedObject(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintRotation)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxReference   >(
   (&((FbxConstraintRotation *) lpjFbxConstraintRotation)->ConstrainedObject
  ));
  return ret;
}
  /// FbxConstraintRotation * Create( FbxConstraint* lpFbxConstraint,  const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintRotation_Create(JNIEnv * __env, jclass __jc,jlong lpFbxConstraint,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxConstraintRotation>(
  FbxConstraintRotation::Create(
  ( FbxConstraint  *)  _lcvt.j2c_object_pt<jlong, FbxConstraint>(lpFbxConstraint)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
