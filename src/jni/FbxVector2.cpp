//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// bool  IsZero (int pSize=2) const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxVector2_IsZero(JNIEnv * __env, jclass __jc,jlong lpjFbxVector2,jint pSize)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxVector2 *) lpjFbxVector2)->IsZero(
  ( int  )  _lcvt.j2c<jint, int  >(pSize)
  ));
  return ret;
}
  /// void  FixIncorrectValue ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxVector2_FixIncorrectValue(JNIEnv * __env, jclass __jc,jlong lpjFbxVector2)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxVector2 *) lpjFbxVector2)->FixIncorrectValue(
  );
}
  /// FbxVector2 ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxVector2_meCreate(JNIEnv * __env, jclass __jc)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxVector2>(
  new FbxVector2(
  ));
  return ret;
}
  /// FbxVector2 (const FbxVector2 &pVector2)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxVector2_meCreate1(JNIEnv * __env, jclass __jc,jobject pVector2)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxVector2>(
  new FbxVector2(
  (const FbxVector2  &) * _lcvt.j2c_object_ref<jobject,FbxVector2 >(pVector2)
  ));
  return ret;
}
  /// FbxVector2 (double pX, double pY)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxVector2_meCreate2(JNIEnv * __env, jclass __jc,jdouble pX,jdouble pY)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxVector2>(
  new FbxVector2(
  ( double  )  _lcvt.j2c<jdouble, double  >(pX)
  ,
  ( double  )  _lcvt.j2c<jdouble, double  >(pY)
  ));
  return ret;
}
  /// void  Set (double pX, double pY)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxVector2_Set(JNIEnv * __env, jclass __jc,jlong lpjFbxVector2,jdouble pX,jdouble pY)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxVector2 *) lpjFbxVector2)->Set(
  ( double  )  _lcvt.j2c<jdouble, double  >(pX)
  ,
  ( double  )  _lcvt.j2c<jdouble, double  >(pY)
  );
}
  /// double  DotProduct (const FbxVector2 &pVector) const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxVector2_DotProduct(JNIEnv * __env, jclass __jc,jlong lpjFbxVector2,jobject pVector)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxVector2 *) lpjFbxVector2)->DotProduct(
  (const FbxVector2  &) * _lcvt.j2c_object_ref<jobject,FbxVector2 >(pVector)
  ));
  return ret;
}
  /// double  Length () const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxVector2_Length(JNIEnv * __env, jclass __jc,jlong lpjFbxVector2)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxVector2 *) lpjFbxVector2)->Length(
  ));
  return ret;
}
  /// double  SquareLength () const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxVector2_SquareLength(JNIEnv * __env, jclass __jc,jlong lpjFbxVector2)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxVector2 *) lpjFbxVector2)->SquareLength(
  ));
  return ret;
}
  /// double  Distance (const FbxVector2 &pVector) const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxVector2_Distance(JNIEnv * __env, jclass __jc,jlong lpjFbxVector2,jobject pVector)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxVector2 *) lpjFbxVector2)->Distance(
  (const FbxVector2  &) * _lcvt.j2c_object_ref<jobject,FbxVector2 >(pVector)
  ));
  return ret;
}
  /// void  Normalize ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxVector2_Normalize(JNIEnv * __env, jclass __jc,jlong lpjFbxVector2)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxVector2 *) lpjFbxVector2)->Normalize(
  );
}
  /// void meDestroy(FbxVector2 * lpFbxVector2)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxVector2_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxVector2)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxVector2 *) lpjFbxVector2
  );
}
