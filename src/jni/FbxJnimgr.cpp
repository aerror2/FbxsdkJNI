
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
#include "FbxJnimgr.h"

  /// FbxJnimgr()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxJnimgr_meCreate(JNIEnv * __env, jclass __jc)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxJnimgr>(
  new FbxJnimgr(
  ));
  return ret;
}
  /// ~FbxJnimgr()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxJnimgr_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxJnimgr)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxJnimgr *) lpjFbxJnimgr
  );
}
  /// FbxScene*   GetScene () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxJnimgr_GetScene(JNIEnv * __env, jclass __jc,jlong lpjFbxJnimgr)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxScene>(
  ((FbxJnimgr *) lpjFbxJnimgr)->GetScene(
  ));
  return ret;
}
  /// FbxManager* GetFbxManager()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxJnimgr_GetFbxManager(JNIEnv * __env, jclass __jc,jlong lpjFbxJnimgr)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxManager>(
  ((FbxJnimgr *) lpjFbxJnimgr)->GetFbxManager(
  ));
  return ret;
}
  /// int           SaveScene (FbxScene* lpScene, const char * lpSzFileName )
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxJnimgr_SaveScene(JNIEnv * __env, jclass __jc,jlong lpjFbxJnimgr,jlong lpScene,jstring lpSzFileName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxJnimgr *) lpjFbxJnimgr)->SaveScene(
  ( FbxScene  *)  _lcvt.j2c_object_pt<jlong, FbxScene>(lpScene)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(lpSzFileName)
  ));
  return ret;
}
  /// FbxAMatrix*  msmMultiplyFbxAMatrix(FbxAMatrix *lpA, FbxAMatrix *lpB)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxJnimgr_msmMultiplyFbxAMatrix(JNIEnv * __env, jclass __jc,jlong lpA,jlong lpB)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAMatrix>(
  FbxJnimgr::msmMultiplyFbxAMatrix(
  ( FbxAMatrix  *)  _lcvt.j2c_object_pt<jlong, FbxAMatrix>(lpA)
  ,
  ( FbxAMatrix  *)  _lcvt.j2c_object_pt<jlong, FbxAMatrix>(lpB)
  ));
  return ret;
}
  /// FbxAMatrix* msmCreateFbxAMatrix(double * lpDoubleArray)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxJnimgr_msmCreateFbxAMatrix(JNIEnv * __env, jclass __jc,jdoubleArray lpDoubleArray)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAMatrix>(
  FbxJnimgr::msmCreateFbxAMatrix(
  ( double  *)  _lcvt.j2c_double_pt<jdoubleArray,double>(lpDoubleArray)
  ));
  return ret;
}
  /// void    msmFillFbxAMatrix(FbxAMatrix *lpA ,  double * lpDoubleArray)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxJnimgr_msmFillFbxAMatrix(JNIEnv * __env, jclass __jc,jlong lpA,jdoubleArray lpDoubleArray)
{
  JNILocalConverter _lcvt(__env,__jc);
  FbxJnimgr::msmFillFbxAMatrix(
  ( FbxAMatrix  *)  _lcvt.j2c_object_pt<jlong, FbxAMatrix>(lpA)
  ,
  ( double  *)  _lcvt.j2c_double_pt<jdoubleArray,double>(lpDoubleArray)
  );
}
