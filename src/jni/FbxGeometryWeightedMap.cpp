//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// void  SetValues (const FbxWeightedMapping *pWeightedMappingTable)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxGeometryWeightedMap_SetValues(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryWeightedMap,jlong pWeightedMappingTable)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxGeometryWeightedMap *) lpjFbxGeometryWeightedMap)->SetValues(
  (const FbxWeightedMapping  *)  _lcvt.j2c_object_pt<jlong, FbxWeightedMapping>(pWeightedMappingTable)
  );
}
  /// FbxWeightedMapping *  GetValues () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometryWeightedMap_GetValues(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryWeightedMap)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxWeightedMapping>(
  ((FbxGeometryWeightedMap *) lpjFbxGeometryWeightedMap)->GetValues(
  ));
  return ret;
}
  /// FbxGeometry *  GetSourceGeometry ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometryWeightedMap_GetSourceGeometry(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryWeightedMap)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxGeometry>(
  ((FbxGeometryWeightedMap *) lpjFbxGeometryWeightedMap)->GetSourceGeometry(
  ));
  return ret;
}
  /// FbxGeometry *  GetDestinationGeometry ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometryWeightedMap_GetDestinationGeometry(JNIEnv * __env, jclass __jc,jlong lpjFbxGeometryWeightedMap)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxGeometry>(
  ((FbxGeometryWeightedMap *) lpjFbxGeometryWeightedMap)->GetDestinationGeometry(
  ));
  return ret;
}
  /// FbxGeometryWeightedMap * Create( FbxObject* lpFbxObject,  const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGeometryWeightedMap_Create(JNIEnv * __env, jclass __jc,jlong lpFbxObject,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxGeometryWeightedMap>(
  FbxGeometryWeightedMap::Create(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(lpFbxObject)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
