
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxLimits ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLimits_meCreate(JNIEnv * __env, jclass __jc)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxLimits>(
  new FbxLimits(
  ));
  return ret;
}
  /// bool  GetActive () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxLimits_GetActive(JNIEnv * __env, jclass __jc,jlong lpjFbxLimits)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxLimits *) lpjFbxLimits)->GetActive(
  ));
  return ret;
}
  /// void  SetActive (const bool pActive)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLimits_SetActive(JNIEnv * __env, jclass __jc,jlong lpjFbxLimits,jboolean pActive)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLimits *) lpjFbxLimits)->SetActive(
  (const bool  )  _lcvt.j2c<jboolean,const bool  >(pActive)
  );
}
  /// bool  GetMinXActive () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxLimits_GetMinXActive(JNIEnv * __env, jclass __jc,jlong lpjFbxLimits)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxLimits *) lpjFbxLimits)->GetMinXActive(
  ));
  return ret;
}
  /// bool  GetMinYActive () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxLimits_GetMinYActive(JNIEnv * __env, jclass __jc,jlong lpjFbxLimits)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxLimits *) lpjFbxLimits)->GetMinYActive(
  ));
  return ret;
}
  /// bool  GetMinZActive () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxLimits_GetMinZActive(JNIEnv * __env, jclass __jc,jlong lpjFbxLimits)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxLimits *) lpjFbxLimits)->GetMinZActive(
  ));
  return ret;
}
  /// void  GetMinActive (bool &pXActive, bool &pYActive, bool &pZActive) const
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLimits_GetMinActive(JNIEnv * __env, jclass __jc,jlong lpjFbxLimits,jobject pXActive,jobject pYActive,jobject pZActive)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLimits *) lpjFbxLimits)->GetMinActive(
  ( bool  &) * _lcvt.j2c_bool_ref<jobject,bool>(pXActive)
  ,
  ( bool  &) * _lcvt.j2c_bool_ref<jobject,bool>(pYActive)
  ,
  ( bool  &) * _lcvt.j2c_bool_ref<jobject,bool>(pZActive)
  );
}
  /// FbxDouble3  GetMin () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLimits_GetMin(JNIEnv * __env, jclass __jc,jlong lpjFbxLimits)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxDouble3>(
  ((FbxLimits *) lpjFbxLimits)->GetMin(
  ));
  return ret;
}
  /// void  SetMinXActive (const bool pActive)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLimits_SetMinXActive(JNIEnv * __env, jclass __jc,jlong lpjFbxLimits,jboolean pActive)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLimits *) lpjFbxLimits)->SetMinXActive(
  (const bool  )  _lcvt.j2c<jboolean,const bool  >(pActive)
  );
}
  /// void  SetMinYActive (const bool pActive)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLimits_SetMinYActive(JNIEnv * __env, jclass __jc,jlong lpjFbxLimits,jboolean pActive)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLimits *) lpjFbxLimits)->SetMinYActive(
  (const bool  )  _lcvt.j2c<jboolean,const bool  >(pActive)
  );
}
  /// void  SetMinZActive (const bool pActive)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLimits_SetMinZActive(JNIEnv * __env, jclass __jc,jlong lpjFbxLimits,jboolean pActive)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLimits *) lpjFbxLimits)->SetMinZActive(
  (const bool  )  _lcvt.j2c<jboolean,const bool  >(pActive)
  );
}
  /// void  SetMinActive (const bool pXActive, const bool pYActive, const bool pZActive)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLimits_SetMinActive(JNIEnv * __env, jclass __jc,jlong lpjFbxLimits,jboolean pXActive,jboolean pYActive,jboolean pZActive)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLimits *) lpjFbxLimits)->SetMinActive(
  (const bool  )  _lcvt.j2c<jboolean,const bool  >(pXActive)
  ,
  (const bool  )  _lcvt.j2c<jboolean,const bool  >(pYActive)
  ,
  (const bool  )  _lcvt.j2c<jboolean,const bool  >(pZActive)
  );
}
  /// void  SetMin (const FbxDouble3 &pMin)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLimits_SetMin(JNIEnv * __env, jclass __jc,jlong lpjFbxLimits,jobject pMin)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLimits *) lpjFbxLimits)->SetMin(
  (const FbxDouble3  &) * _lcvt.j2c_object_ref<jobject,FbxDouble3 >(pMin)
  );
}
  /// bool  GetMaxXActive () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxLimits_GetMaxXActive(JNIEnv * __env, jclass __jc,jlong lpjFbxLimits)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxLimits *) lpjFbxLimits)->GetMaxXActive(
  ));
  return ret;
}
  /// bool  GetMaxYActive () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxLimits_GetMaxYActive(JNIEnv * __env, jclass __jc,jlong lpjFbxLimits)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxLimits *) lpjFbxLimits)->GetMaxYActive(
  ));
  return ret;
}
  /// bool  GetMaxZActive () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxLimits_GetMaxZActive(JNIEnv * __env, jclass __jc,jlong lpjFbxLimits)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxLimits *) lpjFbxLimits)->GetMaxZActive(
  ));
  return ret;
}
  /// void  GetMaxActive (bool &pXActive, bool &pYActive, bool &pZActive) const
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLimits_GetMaxActive(JNIEnv * __env, jclass __jc,jlong lpjFbxLimits,jobject pXActive,jobject pYActive,jobject pZActive)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLimits *) lpjFbxLimits)->GetMaxActive(
  ( bool  &) * _lcvt.j2c_bool_ref<jobject,bool>(pXActive)
  ,
  ( bool  &) * _lcvt.j2c_bool_ref<jobject,bool>(pYActive)
  ,
  ( bool  &) * _lcvt.j2c_bool_ref<jobject,bool>(pZActive)
  );
}
  /// FbxDouble3  GetMax () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLimits_GetMax(JNIEnv * __env, jclass __jc,jlong lpjFbxLimits)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxDouble3>(
  ((FbxLimits *) lpjFbxLimits)->GetMax(
  ));
  return ret;
}
  /// void  SetMaxXActive (const bool pActive)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLimits_SetMaxXActive(JNIEnv * __env, jclass __jc,jlong lpjFbxLimits,jboolean pActive)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLimits *) lpjFbxLimits)->SetMaxXActive(
  (const bool  )  _lcvt.j2c<jboolean,const bool  >(pActive)
  );
}
  /// void  SetMaxYActive (const bool pActive)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLimits_SetMaxYActive(JNIEnv * __env, jclass __jc,jlong lpjFbxLimits,jboolean pActive)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLimits *) lpjFbxLimits)->SetMaxYActive(
  (const bool  )  _lcvt.j2c<jboolean,const bool  >(pActive)
  );
}
  /// void  SetMaxZActive (const bool pActive)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLimits_SetMaxZActive(JNIEnv * __env, jclass __jc,jlong lpjFbxLimits,jboolean pActive)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLimits *) lpjFbxLimits)->SetMaxZActive(
  (const bool  )  _lcvt.j2c<jboolean,const bool  >(pActive)
  );
}
  /// void  SetMaxActive (const bool pXActive, const bool pYActive, const bool pZActive)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLimits_SetMaxActive(JNIEnv * __env, jclass __jc,jlong lpjFbxLimits,jboolean pXActive,jboolean pYActive,jboolean pZActive)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLimits *) lpjFbxLimits)->SetMaxActive(
  (const bool  )  _lcvt.j2c<jboolean,const bool  >(pXActive)
  ,
  (const bool  )  _lcvt.j2c<jboolean,const bool  >(pYActive)
  ,
  (const bool  )  _lcvt.j2c<jboolean,const bool  >(pZActive)
  );
}
  /// void  SetMax (const FbxDouble3 &pMax)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLimits_SetMax(JNIEnv * __env, jclass __jc,jlong lpjFbxLimits,jobject pMax)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLimits *) lpjFbxLimits)->SetMax(
  (const FbxDouble3  &) * _lcvt.j2c_object_ref<jobject,FbxDouble3 >(pMax)
  );
}
  /// bool  GetAnyMinMaxActive () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxLimits_GetAnyMinMaxActive(JNIEnv * __env, jclass __jc,jlong lpjFbxLimits)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxLimits *) lpjFbxLimits)->GetAnyMinMaxActive(
  ));
  return ret;
}
  /// FbxDouble3  Apply (const FbxDouble3 &pVector)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLimits_Apply(JNIEnv * __env, jclass __jc,jlong lpjFbxLimits,jobject pVector)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxDouble3>(
  ((FbxLimits *) lpjFbxLimits)->Apply(
  (const FbxDouble3  &) * _lcvt.j2c_object_ref<jobject,FbxDouble3 >(pVector)
  ));
  return ret;
}
  /// void meDestroy(FbxLimits * lpFbxLimits)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLimits_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxLimits)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxLimits *) lpjFbxLimits
  );
}
