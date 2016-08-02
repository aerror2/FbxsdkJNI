//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// void  ConvertScene (FbxScene *pScene) const
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAxisSystem_ConvertScene(JNIEnv * __env, jclass __jc,jlong lpjFbxAxisSystem,jlong pScene)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAxisSystem *) lpjFbxAxisSystem)->ConvertScene(
  ( FbxScene  *)  _lcvt.j2c_object_pt<jlong, FbxScene>(pScene)
  );
}
  /// void  ConvertScene (FbxScene *pScene, FbxNode *pFbxRoot) const
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAxisSystem_ConvertScene1(JNIEnv * __env, jclass __jc,jlong lpjFbxAxisSystem,jlong pScene,jlong pFbxRoot)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAxisSystem *) lpjFbxAxisSystem)->ConvertScene(
  ( FbxScene  *)  _lcvt.j2c_object_pt<jlong, FbxScene>(pScene)
  ,
  ( FbxNode  *)  _lcvt.j2c_object_pt<jlong, FbxNode>(pFbxRoot)
  );
}
  /// EFrontVector  GetFrontVector (int &pSign) const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxAxisSystem_GetFrontVector(JNIEnv * __env, jclass __jc,jlong lpjFbxAxisSystem,jobject pSign)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxAxisSystem::EFrontVector  >(
  ((FbxAxisSystem *) lpjFbxAxisSystem)->GetFrontVector(
  ( int  &) * _lcvt.j2c_int_ref<jobject,int>(pSign)
  ));
  return ret;
}
  /// EUpVector  GetUpVector (int &pSign) const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxAxisSystem_GetUpVector(JNIEnv * __env, jclass __jc,jlong lpjFbxAxisSystem,jobject pSign)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxAxisSystem::EUpVector  >(
  ((FbxAxisSystem *) lpjFbxAxisSystem)->GetUpVector(
  ( int  &) * _lcvt.j2c_int_ref<jobject,int>(pSign)
  ));
  return ret;
}
  /// ECoordSystem  GetCoorSystem () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxAxisSystem_GetCoorSystem(JNIEnv * __env, jclass __jc,jlong lpjFbxAxisSystem)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxAxisSystem::ECoordSystem  >(
  ((FbxAxisSystem *) lpjFbxAxisSystem)->GetCoorSystem(
  ));
  return ret;
}
  /// void  ConvertChildren (FbxNode *pRoot, const FbxAxisSystem &pSrcSystem) const
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAxisSystem_ConvertChildren(JNIEnv * __env, jclass __jc,jlong lpjFbxAxisSystem,jlong pRoot,jobject pSrcSystem)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAxisSystem *) lpjFbxAxisSystem)->ConvertChildren(
  ( FbxNode  *)  _lcvt.j2c_object_pt<jlong, FbxNode>(pRoot)
  ,
  (const FbxAxisSystem  &) * _lcvt.j2c_object_ref<jobject,FbxAxisSystem >(pSrcSystem)
  );
}
  /// FbxAxisSystem ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAxisSystem_meCreate(JNIEnv * __env, jclass __jc)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAxisSystem>(
  new FbxAxisSystem(
  ));
  return ret;
}
  /// FbxAxisSystem (EUpVector pUpVector, EFrontVector pFrontVector, ECoordSystem pCoorSystem)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAxisSystem_meCreate1(JNIEnv * __env, jclass __jc,jint pUpVector,jint pFrontVector,jint pCoorSystem)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAxisSystem>(
  new FbxAxisSystem(
  ( FbxAxisSystem::EUpVector  )  _lcvt.j2c<jint,FbxAxisSystem::EUpVector >(pUpVector)
  ,
  ( FbxAxisSystem::EFrontVector  )  _lcvt.j2c<jint,FbxAxisSystem::EFrontVector >(pFrontVector)
  ,
  ( FbxAxisSystem::ECoordSystem  )  _lcvt.j2c<jint,FbxAxisSystem::ECoordSystem >(pCoorSystem)
  ));
  return ret;
}
  /// FbxAxisSystem (const FbxAxisSystem &pAxisSystem)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAxisSystem_meCreate2(JNIEnv * __env, jclass __jc,jobject pAxisSystem)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAxisSystem>(
  new FbxAxisSystem(
  (const FbxAxisSystem  &) * _lcvt.j2c_object_ref<jobject,FbxAxisSystem >(pAxisSystem)
  ));
  return ret;
}
  /// FbxAxisSystem (const EPreDefinedAxisSystem pAxisSystem)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAxisSystem_meCreate3(JNIEnv * __env, jclass __jc,jint pAxisSystem)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAxisSystem>(
  new FbxAxisSystem(
  (const FbxAxisSystem::EPreDefinedAxisSystem  )  _lcvt.j2c<jint,FbxAxisSystem::EPreDefinedAxisSystem >(pAxisSystem)
  ));
  return ret;
}
  /// virtual  ~FbxAxisSystem ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAxisSystem_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxAxisSystem)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxAxisSystem *) lpjFbxAxisSystem
  );
}
