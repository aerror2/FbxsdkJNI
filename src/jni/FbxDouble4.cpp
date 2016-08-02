
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxDouble4(double x, double y, double z, double w)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxDouble4_meCreate(JNIEnv * __env, jclass __jc,jdouble x,jdouble y,jdouble z,jdouble w)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxDouble4>(
  new FbxDouble4(
  ( double  )  _lcvt.j2c<jdouble, double  >(x)
  ,
  ( double  )  _lcvt.j2c<jdouble, double  >(y)
  ,
  ( double  )  _lcvt.j2c<jdouble, double  >(z)
  ,
  ( double  )  _lcvt.j2c<jdouble, double  >(w)
  ));
  return ret;
}
  /// ~FbxDouble4()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxDouble4_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxDouble4)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxDouble4 *) lpjFbxDouble4
  );
}
  /// double GetAt(int idx)
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxDouble4_GetAt(JNIEnv * __env, jclass __jc,jlong lpjFbxDouble4,jint idx)
{
    return (* ((FbxDouble4 *) lpjFbxDouble4))[idx];
}
  /// void   SetAt(int idx, double v)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxDouble4_SetAt(JNIEnv * __env, jclass __jc,jlong lpjFbxDouble4,jint idx,jdouble v)
{
    (* ((FbxDouble4 *) lpjFbxDouble4))[idx]=v;
}
