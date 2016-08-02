//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxSystemUnit ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxSystemUnit_meCreate(JNIEnv * __env, jclass __jc)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxSystemUnit>(
  new FbxSystemUnit(
  ));
  return ret;
}
  /// FbxSystemUnit (double pScaleFactor, double pMultiplier=1.0)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxSystemUnit_meCreate1(JNIEnv * __env, jclass __jc,jdouble pScaleFactor,jdouble pMultiplier)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxSystemUnit>(
  new FbxSystemUnit(
  ( double  )  _lcvt.j2c<jdouble, double  >(pScaleFactor)
  ,
  ( double  )  _lcvt.j2c<jdouble, double  >(pMultiplier)
  ));
  return ret;
}
  /// ~FbxSystemUnit ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxSystemUnit_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxSystemUnit)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxSystemUnit *) lpjFbxSystemUnit
  );
}
  /// void  ConvertScene (FbxScene *pScene, const ConversionOptions &pOptions=DefaultConversionOptions) const
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxSystemUnit_ConvertScene(JNIEnv * __env, jclass __jc,jlong lpjFbxSystemUnit,jlong pScene,jobject pOptions)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxSystemUnit *) lpjFbxSystemUnit)->ConvertScene(
  ( FbxScene  *)  _lcvt.j2c_object_pt<jlong, FbxScene>(pScene)
  ,
  (const FbxSystemUnit::ConversionOptions  &) * _lcvt.j2c_object_ref<jobject,FbxSystemUnit::ConversionOptions >(pOptions)
  );
}
  /// void  ConvertChildren (FbxNode *pRoot, const FbxSystemUnit &pSrcUnit, const ConversionOptions &pOptions=DefaultConversionOptions) const
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxSystemUnit_ConvertChildren(JNIEnv * __env, jclass __jc,jlong lpjFbxSystemUnit,jlong pRoot,jobject pSrcUnit,jobject pOptions)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxSystemUnit *) lpjFbxSystemUnit)->ConvertChildren(
  ( FbxNode  *)  _lcvt.j2c_object_pt<jlong, FbxNode>(pRoot)
  ,
  (const FbxSystemUnit  &) * _lcvt.j2c_object_ref<jobject,FbxSystemUnit >(pSrcUnit)
  ,
  (const FbxSystemUnit::ConversionOptions  &) * _lcvt.j2c_object_ref<jobject,FbxSystemUnit::ConversionOptions >(pOptions)
  );
}
  /// void  ConvertScene (FbxScene *pScene, FbxNode *pFbxRoot, const ConversionOptions &pOptions=DefaultConversionOptions) const
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxSystemUnit_ConvertScene1(JNIEnv * __env, jclass __jc,jlong lpjFbxSystemUnit,jlong pScene,jlong pFbxRoot,jobject pOptions)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxSystemUnit *) lpjFbxSystemUnit)->ConvertScene(
  ( FbxScene  *)  _lcvt.j2c_object_pt<jlong, FbxScene>(pScene)
  ,
  ( FbxNode  *)  _lcvt.j2c_object_pt<jlong, FbxNode>(pFbxRoot)
  ,
  (const FbxSystemUnit::ConversionOptions  &) * _lcvt.j2c_object_ref<jobject,FbxSystemUnit::ConversionOptions >(pOptions)
  );
}
  /// double  GetScaleFactor () const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxSystemUnit_GetScaleFactor(JNIEnv * __env, jclass __jc,jlong lpjFbxSystemUnit)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxSystemUnit *) lpjFbxSystemUnit)->GetScaleFactor(
  ));
  return ret;
}
  /// FbxString  GetScaleFactorAsString (bool pAbbreviated=true) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxSystemUnit_GetScaleFactorAsString(JNIEnv * __env, jclass __jc,jlong lpjFbxSystemUnit,jboolean pAbbreviated)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxString>(
  ((FbxSystemUnit *) lpjFbxSystemUnit)->GetScaleFactorAsString(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pAbbreviated)
  ));
  return ret;
}
  /// FbxString  GetScaleFactorAsString_Plurial () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxSystemUnit_GetScaleFactorAsString_Plurial(JNIEnv * __env, jclass __jc,jlong lpjFbxSystemUnit)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxString>(
  ((FbxSystemUnit *) lpjFbxSystemUnit)->GetScaleFactorAsString_Plurial(
  ));
  return ret;
}
  /// double  GetMultiplier () const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxSystemUnit_GetMultiplier(JNIEnv * __env, jclass __jc,jlong lpjFbxSystemUnit)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxSystemUnit *) lpjFbxSystemUnit)->GetMultiplier(
  ));
  return ret;
}
  /// double  GetConversionFactorTo (const FbxSystemUnit &pTarget) const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxSystemUnit_GetConversionFactorTo(JNIEnv * __env, jclass __jc,jlong lpjFbxSystemUnit,jobject pTarget)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxSystemUnit *) lpjFbxSystemUnit)->GetConversionFactorTo(
  (const FbxSystemUnit  &) * _lcvt.j2c_object_ref<jobject,FbxSystemUnit >(pTarget)
  ));
  return ret;
}
  /// double  GetConversionFactorFrom (const FbxSystemUnit &pSource) const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxSystemUnit_GetConversionFactorFrom(JNIEnv * __env, jclass __jc,jlong lpjFbxSystemUnit,jobject pSource)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxSystemUnit *) lpjFbxSystemUnit)->GetConversionFactorFrom(
  (const FbxSystemUnit  &) * _lcvt.j2c_object_ref<jobject,FbxSystemUnit >(pSource)
  ));
  return ret;
}
