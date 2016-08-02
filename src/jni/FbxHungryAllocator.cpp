//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxHungryAllocator (size_t pRecordSize)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxHungryAllocator_meCreate(JNIEnv * __env, jclass __jc,jlong pRecordSize)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxHungryAllocator>(
  new FbxHungryAllocator(
  ( size_t  )  _lcvt.j2c<jlong, size_t  >(pRecordSize)
  ));
  return ret;
}
  /// FbxHungryAllocator (const FbxHungryAllocator &pOther)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxHungryAllocator_meCreate1(JNIEnv * __env, jclass __jc,jobject pOther)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxHungryAllocator>(
  new FbxHungryAllocator(
  (const FbxHungryAllocator  &) * _lcvt.j2c_object_ref<jobject,FbxHungryAllocator >(pOther)
  ));
  return ret;
}
  /// ~FbxHungryAllocator ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxHungryAllocator_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxHungryAllocator)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxHungryAllocator *) lpjFbxHungryAllocator
  );
}
  /// void  Reserve (const size_t pRecordCount)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxHungryAllocator_Reserve(JNIEnv * __env, jclass __jc,jlong lpjFbxHungryAllocator,jlong pRecordCount)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxHungryAllocator *) lpjFbxHungryAllocator)->Reserve(
  (const size_t  )  _lcvt.j2c<jlong,const size_t  >(pRecordCount)
  );
}
  /// void *  AllocateRecords (const size_t pRecordCount=1)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxHungryAllocator_AllocateRecords(JNIEnv * __env, jclass __jc,jlong lpjFbxHungryAllocator,jlong pRecordCount)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_void_pt(
  ((FbxHungryAllocator *) lpjFbxHungryAllocator)->AllocateRecords(
  (const size_t  )  _lcvt.j2c<jlong,const size_t  >(pRecordCount)
  ));
  return ret;
}
  /// void  FreeMemory (void *pRecord)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxHungryAllocator_FreeMemory(JNIEnv * __env, jclass __jc,jlong lpjFbxHungryAllocator,jlong pRecord)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxHungryAllocator *) lpjFbxHungryAllocator)->FreeMemory(
  ( void  *)  _lcvt.j2c_void_pt(pRecord)
  );
}
  /// size_t  GetRecordSize () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxHungryAllocator_GetRecordSize(JNIEnv * __env, jclass __jc,jlong lpjFbxHungryAllocator)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j<jlong,  size_t  >(
  ((FbxHungryAllocator *) lpjFbxHungryAllocator)->GetRecordSize(
  ));
  return ret;
}
