//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// void  Reset (int pSourceSize, int pDestinationSize)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxWeightedMapping_Reset(JNIEnv * __env, jclass __jc,jlong lpjFbxWeightedMapping,jint pSourceSize,jint pDestinationSize)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxWeightedMapping *) lpjFbxWeightedMapping)->Reset(
  ( int  )  _lcvt.j2c<jint, int  >(pSourceSize)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pDestinationSize)
  );
}
  /// void  Add (int pSourceIndex, int pDestinationIndex, double pWeight)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxWeightedMapping_Add(JNIEnv * __env, jclass __jc,jlong lpjFbxWeightedMapping,jint pSourceIndex,jint pDestinationIndex,jdouble pWeight)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxWeightedMapping *) lpjFbxWeightedMapping)->Add(
  ( int  )  _lcvt.j2c<jint, int  >(pSourceIndex)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pDestinationIndex)
  ,
  ( double  )  _lcvt.j2c<jdouble, double  >(pWeight)
  );
}
  /// int  GetElementCount (ESet pSet) const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxWeightedMapping_GetElementCount(JNIEnv * __env, jclass __jc,jlong lpjFbxWeightedMapping,jint pSet)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxWeightedMapping *) lpjFbxWeightedMapping)->GetElementCount(
  ( FbxWeightedMapping::ESet  )  _lcvt.j2c<jint,FbxWeightedMapping::ESet >(pSet)
  ));
  return ret;
}
  /// int  GetRelationCount (ESet pSet, int pElement) const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxWeightedMapping_GetRelationCount(JNIEnv * __env, jclass __jc,jlong lpjFbxWeightedMapping,jint pSet,jint pElement)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxWeightedMapping *) lpjFbxWeightedMapping)->GetRelationCount(
  ( FbxWeightedMapping::ESet  )  _lcvt.j2c<jint,FbxWeightedMapping::ESet >(pSet)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pElement)
  ));
  return ret;
}
  /// Element &  GetRelation (ESet pSet, int pElement, int pIndex)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxWeightedMapping_GetRelation(JNIEnv * __env, jclass __jc,jlong lpjFbxWeightedMapping,jint pSet,jint pElement,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
    jlong ret=(jlong)_lcvt.c2j_obj_ref<jlong, FbxWeightedMapping::Element>(
  ((FbxWeightedMapping *) lpjFbxWeightedMapping)->GetRelation(
  ( FbxWeightedMapping::ESet  )  _lcvt.j2c<jint,FbxWeightedMapping::ESet >(pSet)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pElement)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// int  GetRelationIndex (ESet pSet, int pElementInSet, int pElementInOtherSet) const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxWeightedMapping_GetRelationIndex(JNIEnv * __env, jclass __jc,jlong lpjFbxWeightedMapping,jint pSet,jint pElementInSet,jint pElementInOtherSet)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxWeightedMapping *) lpjFbxWeightedMapping)->GetRelationIndex(
  ( FbxWeightedMapping::ESet  )  _lcvt.j2c<jint,FbxWeightedMapping::ESet >(pSet)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pElementInSet)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pElementInOtherSet)
  ));
  return ret;
}
  /// double  GetRelationSum (ESet pSet, int pElement, bool pAbsoluteValue) const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxWeightedMapping_GetRelationSum(JNIEnv * __env, jclass __jc,jlong lpjFbxWeightedMapping,jint pSet,jint pElement,jboolean pAbsoluteValue)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxWeightedMapping *) lpjFbxWeightedMapping)->GetRelationSum(
  ( FbxWeightedMapping::ESet  )  _lcvt.j2c<jint,FbxWeightedMapping::ESet >(pSet)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pElement)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pAbsoluteValue)
  ));
  return ret;
}
  /// void  Normalize (ESet pSet, bool pAbsoluteValue)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxWeightedMapping_Normalize(JNIEnv * __env, jclass __jc,jlong lpjFbxWeightedMapping,jint pSet,jboolean pAbsoluteValue)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxWeightedMapping *) lpjFbxWeightedMapping)->Normalize(
  ( FbxWeightedMapping::ESet  )  _lcvt.j2c<jint,FbxWeightedMapping::ESet >(pSet)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pAbsoluteValue)
  );
}
  /// FbxWeightedMapping (int pSourceSize, int pDestinationSize)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxWeightedMapping_meCreate(JNIEnv * __env, jclass __jc,jint pSourceSize,jint pDestinationSize)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxWeightedMapping>(
  new FbxWeightedMapping(
  ( int  )  _lcvt.j2c<jint, int  >(pSourceSize)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pDestinationSize)
  ));
  return ret;
}
  /// ~FbxWeightedMapping ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxWeightedMapping_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxWeightedMapping)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxWeightedMapping *) lpjFbxWeightedMapping
  );
}
