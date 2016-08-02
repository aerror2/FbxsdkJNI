//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// virtual FbxNodeAttribute::EType  GetAttributeType () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxMarker_GetAttributeType(JNIEnv * __env, jclass __jc,jlong lpjFbxMarker)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxNodeAttribute::EType  >(
  ((FbxMarker *) lpjFbxMarker)->GetAttributeType(
  ));
  return ret;
}
  /// void  Reset ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxMarker_Reset(JNIEnv * __env, jclass __jc,jlong lpjFbxMarker)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxMarker *) lpjFbxMarker)->Reset(
  );
}
  /// void  SetType (EType pType)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxMarker_SetType(JNIEnv * __env, jclass __jc,jlong lpjFbxMarker,jint pType)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxMarker *) lpjFbxMarker)->SetType(
  ( FbxMarker::EType  )  _lcvt.j2c<jint,FbxMarker::EType >(pType)
  );
}
  /// EType  GetType () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxMarker_GetType(JNIEnv * __env, jclass __jc,jlong lpjFbxMarker)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxMarker::EType  >(
  ((FbxMarker *) lpjFbxMarker)->GetType(
  ));
  return ret;
}
  /// FbxProperty  GetOcclusion () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxMarker_GetOcclusion(JNIEnv * __env, jclass __jc,jlong lpjFbxMarker)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxProperty>(
  ((FbxMarker *) lpjFbxMarker)->GetOcclusion(
  ));
  return ret;
}
  /// FbxProperty  GetIKReachTranslation () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxMarker_GetIKReachTranslation(JNIEnv * __env, jclass __jc,jlong lpjFbxMarker)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxProperty>(
  ((FbxMarker *) lpjFbxMarker)->GetIKReachTranslation(
  ));
  return ret;
}
  /// FbxProperty  GetIKReachRotation () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxMarker_GetIKReachRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxMarker)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxProperty>(
  ((FbxMarker *) lpjFbxMarker)->GetIKReachRotation(
  ));
  return ret;
}
  /// FbxProperty  GetIKPull () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxMarker_GetIKPull(JNIEnv * __env, jclass __jc,jlong lpjFbxMarker)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxProperty>(
  ((FbxMarker *) lpjFbxMarker)->GetIKPull(
  ));
  return ret;
}
  /// FbxProperty  GetIKPullHips () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxMarker_GetIKPullHips(JNIEnv * __env, jclass __jc,jlong lpjFbxMarker)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxProperty>(
  ((FbxMarker *) lpjFbxMarker)->GetIKPullHips(
  ));
  return ret;
}
  /// double  GetDefaultOcclusion () const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxMarker_GetDefaultOcclusion(JNIEnv * __env, jclass __jc,jlong lpjFbxMarker)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxMarker *) lpjFbxMarker)->GetDefaultOcclusion(
  ));
  return ret;
}
  /// void  SetDefaultOcclusion (double pOcclusion)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxMarker_SetDefaultOcclusion(JNIEnv * __env, jclass __jc,jlong lpjFbxMarker,jdouble pOcclusion)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxMarker *) lpjFbxMarker)->SetDefaultOcclusion(
  ( double  )  _lcvt.j2c<jdouble, double  >(pOcclusion)
  );
}
  /// double  GetDefaultIKReachTranslation () const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxMarker_GetDefaultIKReachTranslation(JNIEnv * __env, jclass __jc,jlong lpjFbxMarker)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxMarker *) lpjFbxMarker)->GetDefaultIKReachTranslation(
  ));
  return ret;
}
  /// void  SetDefaultIKReachTranslation (double pIKReachTranslation)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxMarker_SetDefaultIKReachTranslation(JNIEnv * __env, jclass __jc,jlong lpjFbxMarker,jdouble pIKReachTranslation)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxMarker *) lpjFbxMarker)->SetDefaultIKReachTranslation(
  ( double  )  _lcvt.j2c<jdouble, double  >(pIKReachTranslation)
  );
}
  /// double  GetDefaultIKReachRotation () const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxMarker_GetDefaultIKReachRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxMarker)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxMarker *) lpjFbxMarker)->GetDefaultIKReachRotation(
  ));
  return ret;
}
  /// void  SetDefaultIKReachRotation (double pIKReachRotation)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxMarker_SetDefaultIKReachRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxMarker,jdouble pIKReachRotation)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxMarker *) lpjFbxMarker)->SetDefaultIKReachRotation(
  ( double  )  _lcvt.j2c<jdouble, double  >(pIKReachRotation)
  );
}
  /// double  GetDefaultIKPull () const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxMarker_GetDefaultIKPull(JNIEnv * __env, jclass __jc,jlong lpjFbxMarker)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxMarker *) lpjFbxMarker)->GetDefaultIKPull(
  ));
  return ret;
}
  /// void  SetDefaultIKPull (double pIKPull)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxMarker_SetDefaultIKPull(JNIEnv * __env, jclass __jc,jlong lpjFbxMarker,jdouble pIKPull)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxMarker *) lpjFbxMarker)->SetDefaultIKPull(
  ( double  )  _lcvt.j2c<jdouble, double  >(pIKPull)
  );
}
  /// double  GetDefaultIKPullHips () const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxMarker_GetDefaultIKPullHips(JNIEnv * __env, jclass __jc,jlong lpjFbxMarker)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxMarker *) lpjFbxMarker)->GetDefaultIKPullHips(
  ));
  return ret;
}
  /// void  SetDefaultIKPullHips (double pIKPullHips)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxMarker_SetDefaultIKPullHips(JNIEnv * __env, jclass __jc,jlong lpjFbxMarker,jdouble pIKPullHips)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxMarker *) lpjFbxMarker)->SetDefaultIKPullHips(
  ( double  )  _lcvt.j2c<jdouble, double  >(pIKPullHips)
  );
}
  /// FbxColor &  GetDefaultColor (FbxColor &pColor) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxMarker_GetDefaultColor(JNIEnv * __env, jclass __jc,jlong lpjFbxMarker,jobject pColor)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_ref<jlong, FbxColor>(
  ((FbxMarker *) lpjFbxMarker)->GetDefaultColor(
  ( FbxColor  &) * _lcvt.j2c_object_ref<jobject,FbxColor >(pColor)
  ));
  return ret;
}
  /// void  SetDefaultColor (FbxColor &pColor)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxMarker_SetDefaultColor(JNIEnv * __env, jclass __jc,jlong lpjFbxMarker,jobject pColor)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxMarker *) lpjFbxMarker)->SetDefaultColor(
  ( FbxColor  &) * _lcvt.j2c_object_ref<jobject,FbxColor >(pColor)
  );
}
  /// FbxPropertyT< ELook >  Look
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxMarker_mepSetLook(JNIEnv * __env, jclass __jc,jlong lpjFbxMarker,jint lpELook)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxMarker *) lpjFbxMarker)->Look.Set(
  ( FbxMarker::ELook  )  _lcvt.j2c<jint,FbxMarker::ELook >(lpELook)
  );
}
  /// FbxPropertyT< ELook >  Look
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxMarker_mepGetLook(JNIEnv * __env, jclass __jc,jlong lpjFbxMarker)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxMarker::ELook  >(
  ((FbxMarker *) lpjFbxMarker)->Look.Get(
  ));
  return ret;
}
  /// FbxPropertyT< ELook >  Look
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxMarker_mptGetLook(JNIEnv * __env, jclass __jc,jlong lpjFbxMarker)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxMarker::ELook   >(
   (&((FbxMarker *) lpjFbxMarker)->Look
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  DrawLink
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxMarker_mepSetDrawLink(JNIEnv * __env, jclass __jc,jlong lpjFbxMarker,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxMarker *) lpjFbxMarker)->DrawLink.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  DrawLink
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxMarker_mepGetDrawLink(JNIEnv * __env, jclass __jc,jlong lpjFbxMarker)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxMarker *) lpjFbxMarker)->DrawLink.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  DrawLink
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxMarker_mptGetDrawLink(JNIEnv * __env, jclass __jc,jlong lpjFbxMarker)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxMarker *) lpjFbxMarker)->DrawLink
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  Size
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxMarker_mepSetSize(JNIEnv * __env, jclass __jc,jlong lpjFbxMarker,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxMarker *) lpjFbxMarker)->Size.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  Size
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxMarker_mepGetSize(JNIEnv * __env, jclass __jc,jlong lpjFbxMarker)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxMarker *) lpjFbxMarker)->Size.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  Size
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxMarker_mptGetSize(JNIEnv * __env, jclass __jc,jlong lpjFbxMarker)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxMarker *) lpjFbxMarker)->Size
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  ShowLabel
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxMarker_mepSetShowLabel(JNIEnv * __env, jclass __jc,jlong lpjFbxMarker,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxMarker *) lpjFbxMarker)->ShowLabel.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  ShowLabel
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxMarker_mepGetShowLabel(JNIEnv * __env, jclass __jc,jlong lpjFbxMarker)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxMarker *) lpjFbxMarker)->ShowLabel.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  ShowLabel
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxMarker_mptGetShowLabel(JNIEnv * __env, jclass __jc,jlong lpjFbxMarker)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxMarker *) lpjFbxMarker)->ShowLabel
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  IKPivot
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxMarker_mepSetIKPivot(JNIEnv * __env, jclass __jc,jlong lpjFbxMarker,jlong lpFbxDouble3)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxMarker *) lpjFbxMarker)->IKPivot.Set(
  ( FbxDouble3  )  _lcvt.j2c_object<jlong,FbxDouble3 >(lpFbxDouble3)
  );
}
  /// FbxPropertyT< FbxDouble3 >  IKPivot
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxMarker_mepGetIKPivot(JNIEnv * __env, jclass __jc,jlong lpjFbxMarker)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxDouble3>(
  ((FbxMarker *) lpjFbxMarker)->IKPivot.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  IKPivot
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxMarker_mptGetIKPivot(JNIEnv * __env, jclass __jc,jlong lpjFbxMarker)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble3   >(
   (&((FbxMarker *) lpjFbxMarker)->IKPivot
  ));
  return ret;
}
  /// FbxMarker * Create( FbxNodeAttribute* lpFbxNodeAttribute,  const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxMarker_Create(JNIEnv * __env, jclass __jc,jlong lpFbxNodeAttribute,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxMarker>(
  FbxMarker::Create(
  ( FbxNodeAttribute  *)  _lcvt.j2c_object_pt<jlong, FbxNodeAttribute>(lpFbxNodeAttribute)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
