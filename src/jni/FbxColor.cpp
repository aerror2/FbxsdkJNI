//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxColor ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxColor_meCreate(JNIEnv * __env, jclass __jc)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxColor>(
  new FbxColor(
  ));
  return ret;
}
  /// FbxColor (const double pRed, const double pGreen, const double pBlue, const double pAlpha=1.0)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxColor_meCreate1(JNIEnv * __env, jclass __jc,jdouble pRed,jdouble pGreen,jdouble pBlue,jdouble pAlpha)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxColor>(
  new FbxColor(
  (const double  )  _lcvt.j2c<jdouble,const double  >(pRed)
  ,
  (const double  )  _lcvt.j2c<jdouble,const double  >(pGreen)
  ,
  (const double  )  _lcvt.j2c<jdouble,const double  >(pBlue)
  ,
  (const double  )  _lcvt.j2c<jdouble,const double  >(pAlpha)
  ));
  return ret;
}
  /// FbxColor (const FbxDouble3 &pRGB, const double pAlpha=1.0)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxColor_meCreate2(JNIEnv * __env, jclass __jc,jobject pRGB,jdouble pAlpha)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxColor>(
  new FbxColor(
  (const FbxDouble3  &) * _lcvt.j2c_object_ref<jobject,FbxDouble3 >(pRGB)
  ,
  (const double  )  _lcvt.j2c<jdouble,const double  >(pAlpha)
  ));
  return ret;
}
  /// FbxColor (const FbxDouble4 &pRGBA)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxColor_meCreate3(JNIEnv * __env, jclass __jc,jobject pRGBA)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxColor>(
  new FbxColor(
  (const FbxDouble4  &) * _lcvt.j2c_object_ref<jobject,FbxDouble4 >(pRGBA)
  ));
  return ret;
}
  /// ~FbxColor ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxColor_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxColor)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxColor *) lpjFbxColor
  );
}
  /// void  Set (const double pRed, const double pGreen, const double pBlue, const double pAlpha=1.0)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxColor_Set(JNIEnv * __env, jclass __jc,jlong lpjFbxColor,jdouble pRed,jdouble pGreen,jdouble pBlue,jdouble pAlpha)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxColor *) lpjFbxColor)->Set(
  (const double  )  _lcvt.j2c<jdouble,const double  >(pRed)
  ,
  (const double  )  _lcvt.j2c<jdouble,const double  >(pGreen)
  ,
  (const double  )  _lcvt.j2c<jdouble,const double  >(pBlue)
  ,
  (const double  )  _lcvt.j2c<jdouble,const double  >(pAlpha)
  );
}
  /// bool  IsValid () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxColor_IsValid(JNIEnv * __env, jclass __jc,jlong lpjFbxColor)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxColor *) lpjFbxColor)->IsValid(
  ));
  return ret;
}
