//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxDouble3(double x, double y, double z)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxDouble3_meCreate(JNIEnv * __env, jclass __jc,jdouble x,jdouble y,jdouble z)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxDouble3>(
  new FbxDouble3(
  ( double  )  _lcvt.j2c<jdouble, double  >(x)
  ,
  ( double  )  _lcvt.j2c<jdouble, double  >(y)
  ,
  ( double  )  _lcvt.j2c<jdouble, double  >(z)
  ));
  return ret;
}
  /// ~FbxDouble3()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxDouble3_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxDouble3)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxDouble3 *) lpjFbxDouble3
  );
}
  /// double GetAt(int idx)
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxDouble3_GetAt(JNIEnv * __env, jclass __jc,jlong lpjFbxDouble3,jint idx)
{
    return (* ((FbxDouble3 *) lpjFbxDouble3))[idx];

}
  /// void   SetAt(int idx, double v)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxDouble3_SetAt(JNIEnv * __env, jclass __jc,jlong lpjFbxDouble3,jint idx,jdouble v)
{
     (* ((FbxDouble3 *) lpjFbxDouble3))[idx]=v;
}
