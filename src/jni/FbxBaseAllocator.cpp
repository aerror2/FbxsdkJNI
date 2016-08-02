//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxBaseAllocator (const size_t pRecordSize)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxBaseAllocator_meCreate(JNIEnv * __env, jclass __jc,jlong pRecordSize)
{
  return 0;
}
  /// void  Reserve (const size_t pRecordCount)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxBaseAllocator_Reserve(JNIEnv * __env, jclass __jc,jlong lpjFbxBaseAllocator,jlong pRecordCount)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxBaseAllocator *) lpjFbxBaseAllocator)->Reserve(
  (const size_t  )  _lcvt.j2c<jlong,const size_t  >(pRecordCount)
  );
}
  /// void *  AllocateRecords (const size_t pRecordCount=1)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxBaseAllocator_AllocateRecords(JNIEnv * __env, jclass __jc,jlong lpjFbxBaseAllocator,jlong pRecordCount)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_void_pt(
  ((FbxBaseAllocator *) lpjFbxBaseAllocator)->AllocateRecords(
  (const size_t  )  _lcvt.j2c<jlong,const size_t  >(pRecordCount)
  ));
  return ret;
}
  /// void  FreeMemory (void *pRecord)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxBaseAllocator_FreeMemory(JNIEnv * __env, jclass __jc,jlong lpjFbxBaseAllocator,jlong pRecord)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxBaseAllocator *) lpjFbxBaseAllocator)->FreeMemory(
  ( void  *)  _lcvt.j2c_void_pt(pRecord)
  );
}
  /// size_t  GetRecordSize () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxBaseAllocator_GetRecordSize(JNIEnv * __env, jclass __jc,jlong lpjFbxBaseAllocator)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j<jlong,  size_t  >(
  ((FbxBaseAllocator *) lpjFbxBaseAllocator)->GetRecordSize(
  ));
  return ret;
}
  /// void meDestroy(FbxBaseAllocator * lpFbxBaseAllocator)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxBaseAllocator_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxBaseAllocator)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxBaseAllocator *) lpjFbxBaseAllocator
  );
}
