
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// void  SetTranslationOffset (FbxObject *pObject, FbxVector4 pTranslation)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxConstraintParent_SetTranslationOffset(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintParent,jlong pObject,jlong pTranslation)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxConstraintParent *) lpjFbxConstraintParent)->SetTranslationOffset(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pObject)
  ,
  ( FbxVector4  )  _lcvt.j2c_object<jlong,FbxVector4 >(pTranslation)
  );
}
  /// FbxVector4  GetTranslationOffset (const FbxObject *pObject) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintParent_GetTranslationOffset(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintParent,jlong pObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxVector4>(
  ((FbxConstraintParent *) lpjFbxConstraintParent)->GetTranslationOffset(
  (const FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pObject)
  ));
  return ret;
}
  /// virtual void  SetRotationOffset (const FbxObject *pObject, FbxVector4 pRotation)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxConstraintParent_SetRotationOffset(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintParent,jlong pObject,jlong pRotation)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxConstraintParent *) lpjFbxConstraintParent)->SetRotationOffset(
  (const FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pObject)
  ,
  ( FbxVector4  )  _lcvt.j2c_object<jlong,FbxVector4 >(pRotation)
  );
}
  /// FbxVector4  GetRotationOffset (const FbxObject *pObject) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintParent_GetRotationOffset(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintParent,jlong pObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxVector4>(
  ((FbxConstraintParent *) lpjFbxConstraintParent)->GetRotationOffset(
  (const FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pObject)
  ));
  return ret;
}
  /// void  AddConstraintSource (FbxObject *pObject, double pWeight=100)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxConstraintParent_AddConstraintSource(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintParent,jlong pObject,jdouble pWeight)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxConstraintParent *) lpjFbxConstraintParent)->AddConstraintSource(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pObject)
  ,
  ( double  )  _lcvt.j2c<jdouble, double  >(pWeight)
  );
}
  /// int  GetConstraintSourceCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxConstraintParent_GetConstraintSourceCount(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintParent)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxConstraintParent *) lpjFbxConstraintParent)->GetConstraintSourceCount(
  ));
  return ret;
}
  /// FbxObject *  GetConstraintSource (int pIndex) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintParent_GetConstraintSource(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintParent,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxObject>(
  ((FbxConstraintParent *) lpjFbxConstraintParent)->GetConstraintSource(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// void  SetConstrainedObject (FbxObject *pObject)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxConstraintParent_SetConstrainedObject(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintParent,jlong pObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxConstraintParent *) lpjFbxConstraintParent)->SetConstrainedObject(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pObject)
  );
}
  /// FbxObject *  GetConstrainedObject () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintParent_GetConstrainedObject(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintParent)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxObject>(
  ((FbxConstraintParent *) lpjFbxConstraintParent)->GetConstrainedObject(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  AffectTranslationX
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxConstraintParent_mepSetAffectTranslationX(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintParent,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxConstraintParent *) lpjFbxConstraintParent)->AffectTranslationX.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  AffectTranslationX
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxConstraintParent_mepGetAffectTranslationX(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintParent)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxConstraintParent *) lpjFbxConstraintParent)->AffectTranslationX.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  AffectTranslationX
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintParent_mptGetAffectTranslationX(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintParent)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxConstraintParent *) lpjFbxConstraintParent)->AffectTranslationX
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  AffectTranslationY
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxConstraintParent_mepSetAffectTranslationY(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintParent,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxConstraintParent *) lpjFbxConstraintParent)->AffectTranslationY.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  AffectTranslationY
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxConstraintParent_mepGetAffectTranslationY(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintParent)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxConstraintParent *) lpjFbxConstraintParent)->AffectTranslationY.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  AffectTranslationY
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintParent_mptGetAffectTranslationY(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintParent)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxConstraintParent *) lpjFbxConstraintParent)->AffectTranslationY
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  AffectTranslationZ
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxConstraintParent_mepSetAffectTranslationZ(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintParent,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxConstraintParent *) lpjFbxConstraintParent)->AffectTranslationZ.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  AffectTranslationZ
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxConstraintParent_mepGetAffectTranslationZ(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintParent)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxConstraintParent *) lpjFbxConstraintParent)->AffectTranslationZ.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  AffectTranslationZ
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintParent_mptGetAffectTranslationZ(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintParent)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxConstraintParent *) lpjFbxConstraintParent)->AffectTranslationZ
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  AffectRotationX
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxConstraintParent_mepSetAffectRotationX(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintParent,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxConstraintParent *) lpjFbxConstraintParent)->AffectRotationX.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  AffectRotationX
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxConstraintParent_mepGetAffectRotationX(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintParent)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxConstraintParent *) lpjFbxConstraintParent)->AffectRotationX.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  AffectRotationX
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintParent_mptGetAffectRotationX(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintParent)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxConstraintParent *) lpjFbxConstraintParent)->AffectRotationX
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  AffectRotationY
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxConstraintParent_mepSetAffectRotationY(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintParent,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxConstraintParent *) lpjFbxConstraintParent)->AffectRotationY.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  AffectRotationY
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxConstraintParent_mepGetAffectRotationY(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintParent)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxConstraintParent *) lpjFbxConstraintParent)->AffectRotationY.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  AffectRotationY
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintParent_mptGetAffectRotationY(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintParent)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxConstraintParent *) lpjFbxConstraintParent)->AffectRotationY
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  AffectRotationZ
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxConstraintParent_mepSetAffectRotationZ(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintParent,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxConstraintParent *) lpjFbxConstraintParent)->AffectRotationZ.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  AffectRotationZ
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxConstraintParent_mepGetAffectRotationZ(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintParent)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxConstraintParent *) lpjFbxConstraintParent)->AffectRotationZ.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  AffectRotationZ
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintParent_mptGetAffectRotationZ(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintParent)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxConstraintParent *) lpjFbxConstraintParent)->AffectRotationZ
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  AffectScalingX
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxConstraintParent_mepSetAffectScalingX(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintParent,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxConstraintParent *) lpjFbxConstraintParent)->AffectScalingX.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  AffectScalingX
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxConstraintParent_mepGetAffectScalingX(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintParent)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxConstraintParent *) lpjFbxConstraintParent)->AffectScalingX.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  AffectScalingX
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintParent_mptGetAffectScalingX(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintParent)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxConstraintParent *) lpjFbxConstraintParent)->AffectScalingX
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  AffectScalingY
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxConstraintParent_mepSetAffectScalingY(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintParent,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxConstraintParent *) lpjFbxConstraintParent)->AffectScalingY.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  AffectScalingY
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxConstraintParent_mepGetAffectScalingY(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintParent)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxConstraintParent *) lpjFbxConstraintParent)->AffectScalingY.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  AffectScalingY
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintParent_mptGetAffectScalingY(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintParent)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxConstraintParent *) lpjFbxConstraintParent)->AffectScalingY
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  AffectScalingZ
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxConstraintParent_mepSetAffectScalingZ(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintParent,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxConstraintParent *) lpjFbxConstraintParent)->AffectScalingZ.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  AffectScalingZ
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxConstraintParent_mepGetAffectScalingZ(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintParent)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxConstraintParent *) lpjFbxConstraintParent)->AffectScalingZ.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  AffectScalingZ
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintParent_mptGetAffectScalingZ(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintParent)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxConstraintParent *) lpjFbxConstraintParent)->AffectScalingZ
  ));
  return ret;
}
  /// FbxPropertyT< FbxReference >  ConstraintSources
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxConstraintParent_mepSetConstraintSources(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintParent,jlong lpFbxReference)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxConstraintParent *) lpjFbxConstraintParent)->ConstraintSources.Set(
  ( FbxReference  )  _lcvt.j2c<jlong, FbxReference  >(lpFbxReference)
  );
}
  /// FbxPropertyT< FbxReference >  ConstraintSources
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintParent_mepGetConstraintSources(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintParent)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j<jlong,  FbxReference  >(
  ((FbxConstraintParent *) lpjFbxConstraintParent)->ConstraintSources.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxReference >  ConstraintSources
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintParent_mptGetConstraintSources(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintParent)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxReference   >(
   (&((FbxConstraintParent *) lpjFbxConstraintParent)->ConstraintSources
  ));
  return ret;
}
  /// FbxPropertyT< FbxReference >  ConstrainedObject
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxConstraintParent_mepSetConstrainedObject(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintParent,jlong lpFbxReference)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxConstraintParent *) lpjFbxConstraintParent)->ConstrainedObject.Set(
  ( FbxReference  )  _lcvt.j2c<jlong, FbxReference  >(lpFbxReference)
  );
}
  /// FbxPropertyT< FbxReference >  ConstrainedObject
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintParent_mepGetConstrainedObject(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintParent)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j<jlong,  FbxReference  >(
  ((FbxConstraintParent *) lpjFbxConstraintParent)->ConstrainedObject.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxReference >  ConstrainedObject
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintParent_mptGetConstrainedObject(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintParent)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxReference   >(
   (&((FbxConstraintParent *) lpjFbxConstraintParent)->ConstrainedObject
  ));
  return ret;
}
  /// FbxConstraintParent * Create( FbxConstraint* lpFbxConstraint,  const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintParent_Create(JNIEnv * __env, jclass __jc,jlong lpFbxConstraint,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxConstraintParent>(
  FbxConstraintParent::Create(
  ( FbxConstraint  *)  _lcvt.j2c_object_pt<jlong, FbxConstraint>(lpFbxConstraint)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
