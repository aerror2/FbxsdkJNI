
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxQuaternion ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxQuaternion_meCreate(JNIEnv * __env, jclass __jc)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxQuaternion>(
  new FbxQuaternion(
  ));
  return ret;
}
  /// FbxQuaternion (const FbxQuaternion &pV)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxQuaternion_meCreate1(JNIEnv * __env, jclass __jc,jobject pV)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxQuaternion>(
  new FbxQuaternion(
  (const FbxQuaternion  &) * _lcvt.j2c_object_ref<jobject,FbxQuaternion >(pV)
  ));
  return ret;
}
  /// FbxQuaternion (double pX, double pY, double pZ, double pW=1.0)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxQuaternion_meCreate2(JNIEnv * __env, jclass __jc,jdouble pX,jdouble pY,jdouble pZ,jdouble pW)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxQuaternion>(
  new FbxQuaternion(
  ( double  )  _lcvt.j2c<jdouble, double  >(pX)
  ,
  ( double  )  _lcvt.j2c<jdouble, double  >(pY)
  ,
  ( double  )  _lcvt.j2c<jdouble, double  >(pZ)
  ,
  ( double  )  _lcvt.j2c<jdouble, double  >(pW)
  ));
  return ret;
}
  /// ~FbxQuaternion ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxQuaternion_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxQuaternion)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxQuaternion *) lpjFbxQuaternion
  );
}
  /// double  GetAt (int pIndex) const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxQuaternion_GetAt(JNIEnv * __env, jclass __jc,jlong lpjFbxQuaternion,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxQuaternion *) lpjFbxQuaternion)->GetAt(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// void  SetAt (int pIndex, double pValue)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxQuaternion_SetAt(JNIEnv * __env, jclass __jc,jlong lpjFbxQuaternion,jint pIndex,jdouble pValue)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxQuaternion *) lpjFbxQuaternion)->SetAt(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ,
  ( double  )  _lcvt.j2c<jdouble, double  >(pValue)
  );
}
  /// void  Set (double pX, double pY, double pZ, double pW=1.0)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxQuaternion_Set(JNIEnv * __env, jclass __jc,jlong lpjFbxQuaternion,jdouble pX,jdouble pY,jdouble pZ,jdouble pW)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxQuaternion *) lpjFbxQuaternion)->Set(
  ( double  )  _lcvt.j2c<jdouble, double  >(pX)
  ,
  ( double  )  _lcvt.j2c<jdouble, double  >(pY)
  ,
  ( double  )  _lcvt.j2c<jdouble, double  >(pZ)
  ,
  ( double  )  _lcvt.j2c<jdouble, double  >(pW)
  );
}
  /// FbxQuaternion  Product (const FbxQuaternion &pOther) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxQuaternion_Product(JNIEnv * __env, jclass __jc,jlong lpjFbxQuaternion,jobject pOther)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxQuaternion>(
  ((FbxQuaternion *) lpjFbxQuaternion)->Product(
  (const FbxQuaternion  &) * _lcvt.j2c_object_ref<jobject,FbxQuaternion >(pOther)
  ));
  return ret;
}
  /// double  DotProduct (const FbxQuaternion &pQuaternion) const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxQuaternion_DotProduct(JNIEnv * __env, jclass __jc,jlong lpjFbxQuaternion,jobject pQuaternion)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxQuaternion *) lpjFbxQuaternion)->DotProduct(
  (const FbxQuaternion  &) * _lcvt.j2c_object_ref<jobject,FbxQuaternion >(pQuaternion)
  ));
  return ret;
}
  /// void  Normalize ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxQuaternion_Normalize(JNIEnv * __env, jclass __jc,jlong lpjFbxQuaternion)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxQuaternion *) lpjFbxQuaternion)->Normalize(
  );
}
  /// void  Conjugate ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxQuaternion_Conjugate(JNIEnv * __env, jclass __jc,jlong lpjFbxQuaternion)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxQuaternion *) lpjFbxQuaternion)->Conjugate(
  );
}
  /// double  Length ()
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxQuaternion_Length(JNIEnv * __env, jclass __jc,jlong lpjFbxQuaternion)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxQuaternion *) lpjFbxQuaternion)->Length(
  ));
  return ret;
}
  /// void  Inverse ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxQuaternion_Inverse(JNIEnv * __env, jclass __jc,jlong lpjFbxQuaternion)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxQuaternion *) lpjFbxQuaternion)->Inverse(
  );
}
  /// void  ComposeSphericalXYZ (const FbxVector4 pEuler)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxQuaternion_ComposeSphericalXYZ(JNIEnv * __env, jclass __jc,jlong lpjFbxQuaternion,jlong pEuler)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxQuaternion *) lpjFbxQuaternion)->ComposeSphericalXYZ(
  (const FbxVector4  )  _lcvt.j2c_object<jlong,FbxVector4 >(pEuler)
  );
}
  /// FbxVector4  DecomposeSphericalXYZ () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxQuaternion_DecomposeSphericalXYZ(JNIEnv * __env, jclass __jc,jlong lpjFbxQuaternion)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxVector4>(
  ((FbxQuaternion *) lpjFbxQuaternion)->DecomposeSphericalXYZ(
  ));
  return ret;
}
  /// int  Compare (const FbxQuaternion &pQ2, const double pThreshold=FBXSDK_TOLERANCE) const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxQuaternion_Compare(JNIEnv * __env, jclass __jc,jlong lpjFbxQuaternion,jobject pQ2,jdouble pThreshold)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxQuaternion *) lpjFbxQuaternion)->Compare(
  (const FbxQuaternion  &) * _lcvt.j2c_object_ref<jobject,FbxQuaternion >(pQ2)
  ,
  (const double  )  _lcvt.j2c<jdouble,const double  >(pThreshold)
  ));
  return ret;
}
