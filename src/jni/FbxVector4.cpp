//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// bool  IsZero (int pSize=4) const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxVector4_IsZero(JNIEnv * __env, jclass __jc,jlong lpjFbxVector4,jint pSize)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxVector4 *) lpjFbxVector4)->IsZero(
  ( int  )  _lcvt.j2c<jint, int  >(pSize)
  ));
  return ret;
}
  /// void  FixIncorrectValue ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxVector4_FixIncorrectValue(JNIEnv * __env, jclass __jc,jlong lpjFbxVector4)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxVector4 *) lpjFbxVector4)->FixIncorrectValue(
  );
}
  /// FbxVector4 ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxVector4_meCreate(JNIEnv * __env, jclass __jc)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxVector4>(
  new FbxVector4(
  ));
  return ret;
}
  /// FbxVector4 (const FbxVector4 &pVector4)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxVector4_meCreate1(JNIEnv * __env, jclass __jc,jobject pVector4)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxVector4>(
  new FbxVector4(
  (const FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pVector4)
  ));
  return ret;
}
  /// FbxVector4 (double pX, double pY, double pZ, double pW=1.0)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxVector4_meCreate2(JNIEnv * __env, jclass __jc,jdouble pX,jdouble pY,jdouble pZ,jdouble pW)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxVector4>(
  new FbxVector4(
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
  /// FbxVector4 (const double pValue[4])
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxVector4_meCreate3(JNIEnv * __env, jclass __jc,jdoubleArray pValue)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxVector4>(
  new FbxVector4(
  (const double  *)  _lcvt.j2c_double_pt<jdoubleArray,double>(pValue)
  ));
  return ret;
}
  /// FbxVector4 (const FbxDouble3 &pValue)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxVector4_meCreate4(JNIEnv * __env, jclass __jc,jobject pValue)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxVector4>(
  new FbxVector4(
  (const FbxDouble3  &) * _lcvt.j2c_object_ref<jobject,FbxDouble3 >(pValue)
  ));
  return ret;
}
  /// void  Set (double pX, double pY, double pZ, double pW=1.0)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxVector4_Set(JNIEnv * __env, jclass __jc,jlong lpjFbxVector4,jdouble pX,jdouble pY,jdouble pZ,jdouble pW)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxVector4 *) lpjFbxVector4)->Set(
  ( double  )  _lcvt.j2c<jdouble, double  >(pX)
  ,
  ( double  )  _lcvt.j2c<jdouble, double  >(pY)
  ,
  ( double  )  _lcvt.j2c<jdouble, double  >(pZ)
  ,
  ( double  )  _lcvt.j2c<jdouble, double  >(pW)
  );
}
  /// double  DotProduct (const FbxVector4 &pVector) const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxVector4_DotProduct(JNIEnv * __env, jclass __jc,jlong lpjFbxVector4,jobject pVector)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxVector4 *) lpjFbxVector4)->DotProduct(
  (const FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pVector)
  ));
  return ret;
}
  /// FbxVector4  CrossProduct (const FbxVector4 &pVector) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxVector4_CrossProduct(JNIEnv * __env, jclass __jc,jlong lpjFbxVector4,jobject pVector)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxVector4>(
  ((FbxVector4 *) lpjFbxVector4)->CrossProduct(
  (const FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pVector)
  ));
  return ret;
}
  /// double  Length () const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxVector4_Length(JNIEnv * __env, jclass __jc,jlong lpjFbxVector4)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxVector4 *) lpjFbxVector4)->Length(
  ));
  return ret;
}
  /// double  SquareLength () const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxVector4_SquareLength(JNIEnv * __env, jclass __jc,jlong lpjFbxVector4)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxVector4 *) lpjFbxVector4)->SquareLength(
  ));
  return ret;
}
  /// double  Distance (const FbxVector4 &pVector) const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxVector4_Distance(JNIEnv * __env, jclass __jc,jlong lpjFbxVector4,jobject pVector)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxVector4 *) lpjFbxVector4)->Distance(
  (const FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pVector)
  ));
  return ret;
}
  /// void  Normalize ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxVector4_Normalize(JNIEnv * __env, jclass __jc,jlong lpjFbxVector4)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxVector4 *) lpjFbxVector4)->Normalize(
  );
}
  /// void  SetXYZ (const FbxQuaternion pQuat)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxVector4_SetXYZ(JNIEnv * __env, jclass __jc,jlong lpjFbxVector4,jlong pQuat)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxVector4 *) lpjFbxVector4)->SetXYZ(
  (const FbxQuaternion  )  _lcvt.j2c_object<jlong,FbxQuaternion >(pQuat)
  );
}
  /// void meDestroy(FbxVector4 * lpFbxVector4)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxVector4_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxVector4)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxVector4 *) lpjFbxVector4
  );
}
