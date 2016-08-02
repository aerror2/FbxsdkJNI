
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// virtual EType  GetConstraintType () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxConstraint_GetConstraintType(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraint)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxConstraint::EType  >(
  ((FbxConstraint *) lpjFbxConstraint)->GetConstraintType(
  ));
  return ret;
}
  /// virtual FbxObject *  GetConstrainedObject () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraint_GetConstrainedObject(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraint)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxObject>(
  ((FbxConstraint *) lpjFbxConstraint)->GetConstrainedObject(
  ));
  return ret;
}
  /// virtual int  GetConstraintSourceCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxConstraint_GetConstraintSourceCount(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraint)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxConstraint *) lpjFbxConstraint)->GetConstraintSourceCount(
  ));
  return ret;
}
  /// virtual FbxObject *  GetConstraintSource (int pIndex) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraint_GetConstraintSource(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraint,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxObject>(
  ((FbxConstraint *) lpjFbxConstraint)->GetConstraintSource(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// double  GetSourceWeight (const FbxObject *pObject) const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxConstraint_GetSourceWeight(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraint,jlong pObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxConstraint *) lpjFbxConstraint)->GetSourceWeight(
  (const FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pObject)
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  Weight
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxConstraint_mepSetWeight(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraint,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxConstraint *) lpjFbxConstraint)->Weight.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  Weight
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxConstraint_mepGetWeight(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraint)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxConstraint *) lpjFbxConstraint)->Weight.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  Weight
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraint_mptGetWeight(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraint)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxConstraint *) lpjFbxConstraint)->Weight
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  Active
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxConstraint_mepSetActive(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraint,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxConstraint *) lpjFbxConstraint)->Active.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  Active
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxConstraint_mepGetActive(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraint)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxConstraint *) lpjFbxConstraint)->Active.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  Active
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraint_mptGetActive(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraint)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxConstraint *) lpjFbxConstraint)->Active
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  Lock
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxConstraint_mepSetLock(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraint,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxConstraint *) lpjFbxConstraint)->Lock.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  Lock
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxConstraint_mepGetLock(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraint)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxConstraint *) lpjFbxConstraint)->Lock.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  Lock
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraint_mptGetLock(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraint)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxConstraint *) lpjFbxConstraint)->Lock
  ));
  return ret;
}
  /// FbxConstraint * Create( FbxObject* lpFbxObject,  const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraint_Create(JNIEnv * __env, jclass __jc,jlong lpFbxObject,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxConstraint>(
  FbxConstraint::Create(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(lpFbxObject)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
