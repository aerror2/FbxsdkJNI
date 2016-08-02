//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// void  AddConstraintSource (FbxObject *pObject, double pWeight=100)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxConstraintScale_AddConstraintSource(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintScale,jlong pObject,jdouble pWeight)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxConstraintScale *) lpjFbxConstraintScale)->AddConstraintSource(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pObject)
  ,
  ( double  )  _lcvt.j2c<jdouble, double  >(pWeight)
  );
}
  /// int  GetConstraintSourceCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxConstraintScale_GetConstraintSourceCount(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintScale)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxConstraintScale *) lpjFbxConstraintScale)->GetConstraintSourceCount(
  ));
  return ret;
}
  /// FbxObject *  GetConstraintSource (int pIndex) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintScale_GetConstraintSource(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintScale,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxObject>(
  ((FbxConstraintScale *) lpjFbxConstraintScale)->GetConstraintSource(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// void  SetConstrainedObject (FbxObject *pObject)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxConstraintScale_SetConstrainedObject(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintScale,jlong pObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxConstraintScale *) lpjFbxConstraintScale)->SetConstrainedObject(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pObject)
  );
}
  /// FbxObject *  GetConstrainedObject () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintScale_GetConstrainedObject(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintScale)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxObject>(
  ((FbxConstraintScale *) lpjFbxConstraintScale)->GetConstrainedObject(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  AffectX
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxConstraintScale_mepSetAffectX(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintScale,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxConstraintScale *) lpjFbxConstraintScale)->AffectX.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  AffectX
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxConstraintScale_mepGetAffectX(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintScale)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxConstraintScale *) lpjFbxConstraintScale)->AffectX.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  AffectX
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintScale_mptGetAffectX(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintScale)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxConstraintScale *) lpjFbxConstraintScale)->AffectX
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  AffectY
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxConstraintScale_mepSetAffectY(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintScale,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxConstraintScale *) lpjFbxConstraintScale)->AffectY.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  AffectY
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxConstraintScale_mepGetAffectY(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintScale)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxConstraintScale *) lpjFbxConstraintScale)->AffectY.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  AffectY
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintScale_mptGetAffectY(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintScale)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxConstraintScale *) lpjFbxConstraintScale)->AffectY
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  AffectZ
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxConstraintScale_mepSetAffectZ(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintScale,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxConstraintScale *) lpjFbxConstraintScale)->AffectZ.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  AffectZ
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxConstraintScale_mepGetAffectZ(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintScale)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxConstraintScale *) lpjFbxConstraintScale)->AffectZ.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  AffectZ
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintScale_mptGetAffectZ(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintScale)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxConstraintScale *) lpjFbxConstraintScale)->AffectZ
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  Scaling
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxConstraintScale_mepSetScaling(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintScale,jlong lpFbxDouble3)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxConstraintScale *) lpjFbxConstraintScale)->Scaling.Set(
  ( FbxDouble3  )  _lcvt.j2c_object<jlong,FbxDouble3 >(lpFbxDouble3)
  );
}
  /// FbxPropertyT< FbxDouble3 >  Scaling
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintScale_mepGetScaling(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintScale)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxDouble3>(
  ((FbxConstraintScale *) lpjFbxConstraintScale)->Scaling.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  Scaling
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintScale_mptGetScaling(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintScale)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble3   >(
   (&((FbxConstraintScale *) lpjFbxConstraintScale)->Scaling
  ));
  return ret;
}
  /// FbxPropertyT< FbxReference >  ConstraintSources
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxConstraintScale_mepSetConstraintSources(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintScale,jlong lpFbxReference)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxConstraintScale *) lpjFbxConstraintScale)->ConstraintSources.Set(
  ( FbxReference  )  _lcvt.j2c<jlong, FbxReference  >(lpFbxReference)
  );
}
  /// FbxPropertyT< FbxReference >  ConstraintSources
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintScale_mepGetConstraintSources(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintScale)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j<jlong,  FbxReference  >(
  ((FbxConstraintScale *) lpjFbxConstraintScale)->ConstraintSources.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxReference >  ConstraintSources
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintScale_mptGetConstraintSources(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintScale)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxReference   >(
   (&((FbxConstraintScale *) lpjFbxConstraintScale)->ConstraintSources
  ));
  return ret;
}
  /// FbxPropertyT< FbxReference >  ConstrainedObject
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxConstraintScale_mepSetConstrainedObject(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintScale,jlong lpFbxReference)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxConstraintScale *) lpjFbxConstraintScale)->ConstrainedObject.Set(
  ( FbxReference  )  _lcvt.j2c<jlong, FbxReference  >(lpFbxReference)
  );
}
  /// FbxPropertyT< FbxReference >  ConstrainedObject
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintScale_mepGetConstrainedObject(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintScale)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j<jlong,  FbxReference  >(
  ((FbxConstraintScale *) lpjFbxConstraintScale)->ConstrainedObject.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxReference >  ConstrainedObject
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintScale_mptGetConstrainedObject(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintScale)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxReference   >(
   (&((FbxConstraintScale *) lpjFbxConstraintScale)->ConstrainedObject
  ));
  return ret;
}
  /// FbxConstraintScale * Create( FbxConstraint* lpFbxConstraint,  const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintScale_Create(JNIEnv * __env, jclass __jc,jlong lpFbxConstraint,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxConstraintScale>(
  FbxConstraintScale::Create(
  ( FbxConstraint  *)  _lcvt.j2c_object_pt<jlong, FbxConstraint>(lpFbxConstraint)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
