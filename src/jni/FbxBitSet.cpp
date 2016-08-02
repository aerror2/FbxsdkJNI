
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxBitSet (const FbxUInt pInitialSize=0)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxBitSet_meCreate(JNIEnv * __env, jclass __jc,jint pInitialSize)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxBitSet>(
  new FbxBitSet(
  (const FbxUInt  )  _lcvt.j2c<jint,const FbxUInt  >(pInitialSize)
  ));
  return ret;
}
  /// virtual  ~FbxBitSet ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxBitSet_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxBitSet)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxBitSet *) lpjFbxBitSet
  );
}
  /// void  SetBit (const FbxUInt pBitIndex)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxBitSet_SetBit(JNIEnv * __env, jclass __jc,jlong lpjFbxBitSet,jint pBitIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxBitSet *) lpjFbxBitSet)->SetBit(
  (const FbxUInt  )  _lcvt.j2c<jint,const FbxUInt  >(pBitIndex)
  );
}
  /// void  SetAllBits (const bool pValue)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxBitSet_SetAllBits(JNIEnv * __env, jclass __jc,jlong lpjFbxBitSet,jboolean pValue)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxBitSet *) lpjFbxBitSet)->SetAllBits(
  (const bool  )  _lcvt.j2c<jboolean,const bool  >(pValue)
  );
}
  /// void  UnsetBit (const FbxUInt pBitIndex)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxBitSet_UnsetBit(JNIEnv * __env, jclass __jc,jlong lpjFbxBitSet,jint pBitIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxBitSet *) lpjFbxBitSet)->UnsetBit(
  (const FbxUInt  )  _lcvt.j2c<jint,const FbxUInt  >(pBitIndex)
  );
}
  /// bool  GetBit (const FbxUInt pBitIndex) const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxBitSet_GetBit(JNIEnv * __env, jclass __jc,jlong lpjFbxBitSet,jint pBitIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxBitSet *) lpjFbxBitSet)->GetBit(
  (const FbxUInt  )  _lcvt.j2c<jint,const FbxUInt  >(pBitIndex)
  ));
  return ret;
}
  /// FbxUInt  GetFirstSetBitIndex () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxBitSet_GetFirstSetBitIndex(JNIEnv * __env, jclass __jc,jlong lpjFbxBitSet)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxUInt  >(
  ((FbxBitSet *) lpjFbxBitSet)->GetFirstSetBitIndex(
  ));
  return ret;
}
  /// FbxUInt  GetLastSetBitIndex () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxBitSet_GetLastSetBitIndex(JNIEnv * __env, jclass __jc,jlong lpjFbxBitSet)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxUInt  >(
  ((FbxBitSet *) lpjFbxBitSet)->GetLastSetBitIndex(
  ));
  return ret;
}
  /// FbxUInt  GetNextSetBitIndex (const FbxUInt pBitIndex) const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxBitSet_GetNextSetBitIndex(JNIEnv * __env, jclass __jc,jlong lpjFbxBitSet,jint pBitIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxUInt  >(
  ((FbxBitSet *) lpjFbxBitSet)->GetNextSetBitIndex(
  (const FbxUInt  )  _lcvt.j2c<jint,const FbxUInt  >(pBitIndex)
  ));
  return ret;
}
  /// FbxUInt  GetPreviousSetBitIndex (const FbxUInt pBitIndex) const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxBitSet_GetPreviousSetBitIndex(JNIEnv * __env, jclass __jc,jlong lpjFbxBitSet,jint pBitIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxUInt  >(
  ((FbxBitSet *) lpjFbxBitSet)->GetPreviousSetBitIndex(
  (const FbxUInt  )  _lcvt.j2c<jint,const FbxUInt  >(pBitIndex)
  ));
  return ret;
}
