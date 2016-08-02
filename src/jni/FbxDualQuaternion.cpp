
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxDualQuaternion ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxDualQuaternion_meCreate(JNIEnv * __env, jclass __jc)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxDualQuaternion>(
  new FbxDualQuaternion(
  ));
  return ret;
}
  /// FbxDualQuaternion (const FbxQuaternion &pV1, const FbxQuaternion &pV2)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxDualQuaternion_meCreate1(JNIEnv * __env, jclass __jc,jobject pV1,jobject pV2)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxDualQuaternion>(
  new FbxDualQuaternion(
  (const FbxQuaternion  &) * _lcvt.j2c_object_ref<jobject,FbxQuaternion >(pV1)
  ,
  (const FbxQuaternion  &) * _lcvt.j2c_object_ref<jobject,FbxQuaternion >(pV2)
  ));
  return ret;
}
  /// FbxDualQuaternion (const FbxDualQuaternion &pV)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxDualQuaternion_meCreate2(JNIEnv * __env, jclass __jc,jobject pV)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxDualQuaternion>(
  new FbxDualQuaternion(
  (const FbxDualQuaternion  &) * _lcvt.j2c_object_ref<jobject,FbxDualQuaternion >(pV)
  ));
  return ret;
}
  /// FbxDualQuaternion (const FbxQuaternion &pRotation, const FbxVector4 &pTranslation)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxDualQuaternion_meCreate3(JNIEnv * __env, jclass __jc,jobject pRotation,jobject pTranslation)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxDualQuaternion>(
  new FbxDualQuaternion(
  (const FbxQuaternion  &) * _lcvt.j2c_object_ref<jobject,FbxQuaternion >(pRotation)
  ,
  (const FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pTranslation)
  ));
  return ret;
}
  /// FbxDualQuaternion (double pX1, double pY1, double pZ1, double pW1, double pX2, double pY2, double pZ2, double pW2)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxDualQuaternion_meCreate4(JNIEnv * __env, jclass __jc,jdouble pX1,jdouble pY1,jdouble pZ1,jdouble pW1,jdouble pX2,jdouble pY2,jdouble pZ2,jdouble pW2)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxDualQuaternion>(
  new FbxDualQuaternion(
  ( double  )  _lcvt.j2c<jdouble, double  >(pX1)
  ,
  ( double  )  _lcvt.j2c<jdouble, double  >(pY1)
  ,
  ( double  )  _lcvt.j2c<jdouble, double  >(pZ1)
  ,
  ( double  )  _lcvt.j2c<jdouble, double  >(pW1)
  ,
  ( double  )  _lcvt.j2c<jdouble, double  >(pX2)
  ,
  ( double  )  _lcvt.j2c<jdouble, double  >(pY2)
  ,
  ( double  )  _lcvt.j2c<jdouble, double  >(pZ2)
  ,
  ( double  )  _lcvt.j2c<jdouble, double  >(pW2)
  ));
  return ret;
}
  /// ~FbxDualQuaternion ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxDualQuaternion_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxDualQuaternion)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxDualQuaternion *) lpjFbxDualQuaternion
  );
}
  /// void  Set (double pX1, double pY1, double pZ1, double pW1, double pX2, double pY2, double pZ2, double pW2)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxDualQuaternion_Set(JNIEnv * __env, jclass __jc,jlong lpjFbxDualQuaternion,jdouble pX1,jdouble pY1,jdouble pZ1,jdouble pW1,jdouble pX2,jdouble pY2,jdouble pZ2,jdouble pW2)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxDualQuaternion *) lpjFbxDualQuaternion)->Set(
  ( double  )  _lcvt.j2c<jdouble, double  >(pX1)
  ,
  ( double  )  _lcvt.j2c<jdouble, double  >(pY1)
  ,
  ( double  )  _lcvt.j2c<jdouble, double  >(pZ1)
  ,
  ( double  )  _lcvt.j2c<jdouble, double  >(pW1)
  ,
  ( double  )  _lcvt.j2c<jdouble, double  >(pX2)
  ,
  ( double  )  _lcvt.j2c<jdouble, double  >(pY2)
  ,
  ( double  )  _lcvt.j2c<jdouble, double  >(pZ2)
  ,
  ( double  )  _lcvt.j2c<jdouble, double  >(pW2)
  );
}
  /// FbxQuaternion &  GetFirstQuaternion ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxDualQuaternion_GetFirstQuaternion(JNIEnv * __env, jclass __jc,jlong lpjFbxDualQuaternion)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_ref<jlong, FbxQuaternion>(
  ((FbxDualQuaternion *) lpjFbxDualQuaternion)->GetFirstQuaternion(
  ));
  return ret;
}
  /// FbxQuaternion &  GetSecondQuaternion ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxDualQuaternion_GetSecondQuaternion(JNIEnv * __env, jclass __jc,jlong lpjFbxDualQuaternion)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_ref<jlong, FbxQuaternion>(
  ((FbxDualQuaternion *) lpjFbxDualQuaternion)->GetSecondQuaternion(
  ));
  return ret;
}
  /// const FbxQuaternion &  GetFirstQuaternion () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxDualQuaternion_GetFirstQuaternion1(JNIEnv * __env, jclass __jc,jlong lpjFbxDualQuaternion)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_ref<jlong, FbxQuaternion>(
  ((FbxDualQuaternion *) lpjFbxDualQuaternion)->GetFirstQuaternion(
  ));
  return ret;
}
  /// const FbxQuaternion &  GetSecondQuaternion () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxDualQuaternion_GetSecondQuaternion1(JNIEnv * __env, jclass __jc,jlong lpjFbxDualQuaternion)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_ref<jlong, FbxQuaternion>(
  ((FbxDualQuaternion *) lpjFbxDualQuaternion)->GetSecondQuaternion(
  ));
  return ret;
}
  /// FbxQuaternion  GetRotation () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxDualQuaternion_GetRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxDualQuaternion)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxQuaternion>(
  ((FbxDualQuaternion *) lpjFbxDualQuaternion)->GetRotation(
  ));
  return ret;
}
  /// FbxVector4  GetTranslation () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxDualQuaternion_GetTranslation(JNIEnv * __env, jclass __jc,jlong lpjFbxDualQuaternion)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxVector4>(
  ((FbxDualQuaternion *) lpjFbxDualQuaternion)->GetTranslation(
  ));
  return ret;
}
  /// FbxDualQuaternion  Product (const FbxDualQuaternion &pDualQuaternion) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxDualQuaternion_Product(JNIEnv * __env, jclass __jc,jlong lpjFbxDualQuaternion,jobject pDualQuaternion)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxDualQuaternion>(
  ((FbxDualQuaternion *) lpjFbxDualQuaternion)->Product(
  (const FbxDualQuaternion  &) * _lcvt.j2c_object_ref<jobject,FbxDualQuaternion >(pDualQuaternion)
  ));
  return ret;
}
  /// void  Normalize ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxDualQuaternion_Normalize(JNIEnv * __env, jclass __jc,jlong lpjFbxDualQuaternion)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxDualQuaternion *) lpjFbxDualQuaternion)->Normalize(
  );
}
  /// void  Inverse ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxDualQuaternion_Inverse(JNIEnv * __env, jclass __jc,jlong lpjFbxDualQuaternion)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxDualQuaternion *) lpjFbxDualQuaternion)->Inverse(
  );
}
  /// FbxVector4  Deform (FbxVector4 &pPoint)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxDualQuaternion_Deform(JNIEnv * __env, jclass __jc,jlong lpjFbxDualQuaternion,jobject pPoint)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxVector4>(
  ((FbxDualQuaternion *) lpjFbxDualQuaternion)->Deform(
  ( FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pPoint)
  ));
  return ret;
}
  /// void  Conjugate ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxDualQuaternion_Conjugate(JNIEnv * __env, jclass __jc,jlong lpjFbxDualQuaternion)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxDualQuaternion *) lpjFbxDualQuaternion)->Conjugate(
  );
}
  /// void  Dual ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxDualQuaternion_Dual(JNIEnv * __env, jclass __jc,jlong lpjFbxDualQuaternion)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxDualQuaternion *) lpjFbxDualQuaternion)->Dual(
  );
}
  /// void  DualConjugate ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxDualQuaternion_DualConjugate(JNIEnv * __env, jclass __jc,jlong lpjFbxDualQuaternion)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxDualQuaternion *) lpjFbxDualQuaternion)->DualConjugate(
  );
}
