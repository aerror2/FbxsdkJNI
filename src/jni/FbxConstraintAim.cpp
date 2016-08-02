//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// void  AddConstraintSource (FbxObject *pObject, double pWeight=100)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxConstraintAim_AddConstraintSource(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintAim,jlong pObject,jdouble pWeight)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxConstraintAim *) lpjFbxConstraintAim)->AddConstraintSource(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pObject)
  ,
  ( double  )  _lcvt.j2c<jdouble, double  >(pWeight)
  );
}
  /// int  GetConstraintSourceCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxConstraintAim_GetConstraintSourceCount(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintAim)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxConstraintAim *) lpjFbxConstraintAim)->GetConstraintSourceCount(
  ));
  return ret;
}
  /// FbxObject *  GetConstraintSource (int pIndex) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintAim_GetConstraintSource(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintAim,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxObject>(
  ((FbxConstraintAim *) lpjFbxConstraintAim)->GetConstraintSource(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// void  SetConstrainedObject (FbxObject *pObject)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxConstraintAim_SetConstrainedObject(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintAim,jlong pObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxConstraintAim *) lpjFbxConstraintAim)->SetConstrainedObject(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pObject)
  );
}
  /// FbxObject *  GetConstrainedObject () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintAim_GetConstrainedObject(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintAim)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxObject>(
  ((FbxConstraintAim *) lpjFbxConstraintAim)->GetConstrainedObject(
  ));
  return ret;
}
  /// void  SetWorldUpObject (FbxObject *pObject)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxConstraintAim_SetWorldUpObject(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintAim,jlong pObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxConstraintAim *) lpjFbxConstraintAim)->SetWorldUpObject(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pObject)
  );
}
  /// FbxObject *  GetWorldUpObject () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintAim_GetWorldUpObject(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintAim)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxObject>(
  ((FbxConstraintAim *) lpjFbxConstraintAim)->GetWorldUpObject(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  RotationOffset
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxConstraintAim_mepSetRotationOffset(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintAim,jlong lpFbxDouble3)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxConstraintAim *) lpjFbxConstraintAim)->RotationOffset.Set(
  ( FbxDouble3  )  _lcvt.j2c_object<jlong,FbxDouble3 >(lpFbxDouble3)
  );
}
  /// FbxPropertyT< FbxDouble3 >  RotationOffset
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintAim_mepGetRotationOffset(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintAim)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxDouble3>(
  ((FbxConstraintAim *) lpjFbxConstraintAim)->RotationOffset.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  RotationOffset
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintAim_mptGetRotationOffset(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintAim)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble3   >(
   (&((FbxConstraintAim *) lpjFbxConstraintAim)->RotationOffset
  ));
  return ret;
}
  /// FbxPropertyT< FbxReference >  AimAtObjects
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxConstraintAim_mepSetAimAtObjects(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintAim,jlong lpFbxReference)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxConstraintAim *) lpjFbxConstraintAim)->AimAtObjects.Set(
  ( FbxReference  )  _lcvt.j2c<jlong, FbxReference  >(lpFbxReference)
  );
}
  /// FbxPropertyT< FbxReference >  AimAtObjects
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintAim_mepGetAimAtObjects(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintAim)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j<jlong,  FbxReference  >(
  ((FbxConstraintAim *) lpjFbxConstraintAim)->AimAtObjects.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxReference >  AimAtObjects
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintAim_mptGetAimAtObjects(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintAim)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxReference   >(
   (&((FbxConstraintAim *) lpjFbxConstraintAim)->AimAtObjects
  ));
  return ret;
}
  /// FbxPropertyT< FbxReference >  ConstrainedObject
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxConstraintAim_mepSetConstrainedObject(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintAim,jlong lpFbxReference)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxConstraintAim *) lpjFbxConstraintAim)->ConstrainedObject.Set(
  ( FbxReference  )  _lcvt.j2c<jlong, FbxReference  >(lpFbxReference)
  );
}
  /// FbxPropertyT< FbxReference >  ConstrainedObject
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintAim_mepGetConstrainedObject(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintAim)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j<jlong,  FbxReference  >(
  ((FbxConstraintAim *) lpjFbxConstraintAim)->ConstrainedObject.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxReference >  ConstrainedObject
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintAim_mptGetConstrainedObject(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintAim)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxReference   >(
   (&((FbxConstraintAim *) lpjFbxConstraintAim)->ConstrainedObject
  ));
  return ret;
}
  /// FbxPropertyT< FbxEnum >  WorldUpType
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxConstraintAim_mepSetWorldUpType(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintAim,jint lpFbxEnum)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxConstraintAim *) lpjFbxConstraintAim)->WorldUpType.Set(
  ( FbxEnum  )  _lcvt.j2c<jint,int >(lpFbxEnum)
  );
}
  /// FbxPropertyT< FbxEnum >  WorldUpType
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxConstraintAim_mepGetWorldUpType(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintAim)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxEnum  >(
  ((FbxConstraintAim *) lpjFbxConstraintAim)->WorldUpType.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxEnum >  WorldUpType
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintAim_mptGetWorldUpType(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintAim)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxEnum   >(
   (&((FbxConstraintAim *) lpjFbxConstraintAim)->WorldUpType
  ));
  return ret;
}
  /// FbxPropertyT< FbxReference >  WorldUpObject
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxConstraintAim_mepSetWorldUpObject(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintAim,jlong lpFbxReference)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxConstraintAim *) lpjFbxConstraintAim)->WorldUpObject.Set(
  ( FbxReference  )  _lcvt.j2c<jlong, FbxReference  >(lpFbxReference)
  );
}
  /// FbxPropertyT< FbxReference >  WorldUpObject
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintAim_mepGetWorldUpObject(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintAim)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j<jlong,  FbxReference  >(
  ((FbxConstraintAim *) lpjFbxConstraintAim)->WorldUpObject.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxReference >  WorldUpObject
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintAim_mptGetWorldUpObject(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintAim)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxReference   >(
   (&((FbxConstraintAim *) lpjFbxConstraintAim)->WorldUpObject
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  WorldUpVector
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxConstraintAim_mepSetWorldUpVector(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintAim,jlong lpFbxDouble3)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxConstraintAim *) lpjFbxConstraintAim)->WorldUpVector.Set(
  ( FbxDouble3  )  _lcvt.j2c_object<jlong,FbxDouble3 >(lpFbxDouble3)
  );
}
  /// FbxPropertyT< FbxDouble3 >  WorldUpVector
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintAim_mepGetWorldUpVector(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintAim)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxDouble3>(
  ((FbxConstraintAim *) lpjFbxConstraintAim)->WorldUpVector.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  WorldUpVector
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintAim_mptGetWorldUpVector(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintAim)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble3   >(
   (&((FbxConstraintAim *) lpjFbxConstraintAim)->WorldUpVector
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  UpVector
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxConstraintAim_mepSetUpVector(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintAim,jlong lpFbxDouble3)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxConstraintAim *) lpjFbxConstraintAim)->UpVector.Set(
  ( FbxDouble3  )  _lcvt.j2c_object<jlong,FbxDouble3 >(lpFbxDouble3)
  );
}
  /// FbxPropertyT< FbxDouble3 >  UpVector
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintAim_mepGetUpVector(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintAim)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxDouble3>(
  ((FbxConstraintAim *) lpjFbxConstraintAim)->UpVector.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  UpVector
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintAim_mptGetUpVector(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintAim)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble3   >(
   (&((FbxConstraintAim *) lpjFbxConstraintAim)->UpVector
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  AimVector
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxConstraintAim_mepSetAimVector(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintAim,jlong lpFbxDouble3)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxConstraintAim *) lpjFbxConstraintAim)->AimVector.Set(
  ( FbxDouble3  )  _lcvt.j2c_object<jlong,FbxDouble3 >(lpFbxDouble3)
  );
}
  /// FbxPropertyT< FbxDouble3 >  AimVector
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintAim_mepGetAimVector(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintAim)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxDouble3>(
  ((FbxConstraintAim *) lpjFbxConstraintAim)->AimVector.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  AimVector
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintAim_mptGetAimVector(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintAim)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble3   >(
   (&((FbxConstraintAim *) lpjFbxConstraintAim)->AimVector
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  AffectX
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxConstraintAim_mepSetAffectX(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintAim,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxConstraintAim *) lpjFbxConstraintAim)->AffectX.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  AffectX
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxConstraintAim_mepGetAffectX(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintAim)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxConstraintAim *) lpjFbxConstraintAim)->AffectX.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  AffectX
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintAim_mptGetAffectX(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintAim)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxConstraintAim *) lpjFbxConstraintAim)->AffectX
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  AffectY
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxConstraintAim_mepSetAffectY(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintAim,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxConstraintAim *) lpjFbxConstraintAim)->AffectY.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  AffectY
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxConstraintAim_mepGetAffectY(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintAim)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxConstraintAim *) lpjFbxConstraintAim)->AffectY.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  AffectY
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintAim_mptGetAffectY(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintAim)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxConstraintAim *) lpjFbxConstraintAim)->AffectY
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  AffectZ
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxConstraintAim_mepSetAffectZ(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintAim,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxConstraintAim *) lpjFbxConstraintAim)->AffectZ.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  AffectZ
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxConstraintAim_mepGetAffectZ(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintAim)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxConstraintAim *) lpjFbxConstraintAim)->AffectZ.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  AffectZ
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintAim_mptGetAffectZ(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintAim)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxConstraintAim *) lpjFbxConstraintAim)->AffectZ
  ));
  return ret;
}
  /// FbxConstraintAim * Create( FbxConstraint* lpFbxConstraint,  const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintAim_Create(JNIEnv * __env, jclass __jc,jlong lpFbxConstraint,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxConstraintAim>(
  FbxConstraintAim::Create(
  ( FbxConstraint  *)  _lcvt.j2c_object_pt<jlong, FbxConstraint>(lpFbxConstraint)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
