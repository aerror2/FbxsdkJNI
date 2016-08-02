//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// bool  IsInUse () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxLayerElementArray_IsInUse(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArray)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxLayerElementArray *) lpjFbxLayerElementArray)->IsInUse(
  ));
  return ret;
}
  /// int  ReadLock () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLayerElementArray_ReadLock(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArray)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxLayerElementArray *) lpjFbxLayerElementArray)->ReadLock(
  ));
  return ret;
}
  /// int  ReadUnlock () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLayerElementArray_ReadUnlock(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArray)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxLayerElementArray *) lpjFbxLayerElementArray)->ReadUnlock(
  ));
  return ret;
}
  /// bool  WriteLock () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxLayerElementArray_WriteLock(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArray)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxLayerElementArray *) lpjFbxLayerElementArray)->WriteLock(
  ));
  return ret;
}
  /// void  WriteUnlock () const
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLayerElementArray_WriteUnlock(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArray)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLayerElementArray *) lpjFbxLayerElementArray)->WriteUnlock(
  );
}
  /// bool  ReadWriteLock () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxLayerElementArray_ReadWriteLock(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArray)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxLayerElementArray *) lpjFbxLayerElementArray)->ReadWriteLock(
  ));
  return ret;
}
  /// void  ReadWriteUnlock () const
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLayerElementArray_ReadWriteUnlock(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArray)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLayerElementArray *) lpjFbxLayerElementArray)->ReadWriteUnlock(
  );
}
  /// virtual void *  GetLocked (ELockMode pLockMode, EFbxType pDataType)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLayerElementArray_GetLocked(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArray,jint pLockMode,jint pDataType)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_void_pt(
  ((FbxLayerElementArray *) lpjFbxLayerElementArray)->GetLocked(
  ( FbxLayerElementArray::ELockMode  )  _lcvt.j2c<jint,FbxLayerElementArray::ELockMode >(pLockMode)
  ,
  ( EFbxType  )  _lcvt.j2c<jint,EFbxType >(pDataType)
  ));
  return ret;
}
  /// void *  GetLocked (ELockMode pLockMode=eReadWriteLock)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLayerElementArray_GetLocked1(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArray,jint pLockMode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_void_pt(
  ((FbxLayerElementArray *) lpjFbxLayerElementArray)->GetLocked(
  ( FbxLayerElementArray::ELockMode  )  _lcvt.j2c<jint,FbxLayerElementArray::ELockMode >(pLockMode)
  ));
  return ret;
}
  /// virtual void  Release (void **pDataPtr, EFbxType pDataType)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLayerElementArray_Release(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArray,jlongArray pDataPtr,jint pDataType)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLayerElementArray *) lpjFbxLayerElementArray)->Release(
  ( void  **)  _lcvt.j2c_void_ppt(pDataPtr)
  ,
  ( EFbxType  )  _lcvt.j2c<jint,EFbxType >(pDataType)
  );
}
  /// void  Release (void **pDataPtr)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLayerElementArray_Release1(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArray,jlongArray pDataPtr)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLayerElementArray *) lpjFbxLayerElementArray)->Release(
  ( void  **)  _lcvt.j2c_void_ppt(pDataPtr)
  );
}
  /// void  Release (long **pDataPtr, long *dummy)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLayerElementArray_Release2(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArray,jobjectArray pDataPtr,jlongArray dummy)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLayerElementArray *) lpjFbxLayerElementArray)->Release(
  ( long  **)  _lcvt.j2c_long_ppt<jobjectArray,long>(pDataPtr)
  ,
  ( long  *)  _lcvt.j2c_long_pt<jlongArray,long>(dummy)
  );
}
  /// virtual size_t  GetStride () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLayerElementArray_GetStride(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArray)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j<jlong,  size_t  >(
  ((FbxLayerElementArray *) lpjFbxLayerElementArray)->GetStride(
  ));
  return ret;
}
  /// FbxLayerElementArray (EFbxType pDataType)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLayerElementArray_meCreate(JNIEnv * __env, jclass __jc,jint pDataType)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxLayerElementArray>(
  new FbxLayerElementArray(
  ( EFbxType  )  _lcvt.j2c<jint,EFbxType >(pDataType)
  ));
  return ret;
}
  /// virtual  ~FbxLayerElementArray ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLayerElementArray_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArray)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxLayerElementArray *) lpjFbxLayerElementArray
  );
}
  /// void  ClearStatus ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLayerElementArray_ClearStatus(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArray)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLayerElementArray *) lpjFbxLayerElementArray)->ClearStatus(
  );
}
  /// LockAccessStatus::ELockAccessStatus  GetStatus () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLayerElementArray_GetStatus(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArray)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  LockAccessStatus::ELockAccessStatus  >(
  ((FbxLayerElementArray *) lpjFbxLayerElementArray)->GetStatus(
  ));
  return ret;
}
  /// bool  IsWriteLocked () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxLayerElementArray_IsWriteLocked(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArray)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxLayerElementArray *) lpjFbxLayerElementArray)->IsWriteLocked(
  ));
  return ret;
}
  /// int  GetReadLockCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLayerElementArray_GetReadLockCount(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArray)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxLayerElementArray *) lpjFbxLayerElementArray)->GetReadLockCount(
  ));
  return ret;
}
  /// int  GetCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLayerElementArray_GetCount(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArray)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxLayerElementArray *) lpjFbxLayerElementArray)->GetCount(
  ));
  return ret;
}
  /// void  SetCount (int pCount)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLayerElementArray_SetCount(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArray,jint pCount)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLayerElementArray *) lpjFbxLayerElementArray)->SetCount(
  ( int  )  _lcvt.j2c<jint, int  >(pCount)
  );
}
  /// void  Clear ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLayerElementArray_Clear(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArray)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLayerElementArray *) lpjFbxLayerElementArray)->Clear(
  );
}
  /// void  Resize (int pItemCount)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLayerElementArray_Resize(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArray,jint pItemCount)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLayerElementArray *) lpjFbxLayerElementArray)->Resize(
  ( int  )  _lcvt.j2c<jint, int  >(pItemCount)
  );
}
  /// void  AddMultiple (int pItemCount)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLayerElementArray_AddMultiple(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArray,jint pItemCount)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLayerElementArray *) lpjFbxLayerElementArray)->AddMultiple(
  ( int  )  _lcvt.j2c<jint, int  >(pItemCount)
  );
}
  /// int  Add (const void *pItem, EFbxType pValueType)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLayerElementArray_Add(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArray,jlong pItem,jint pValueType)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxLayerElementArray *) lpjFbxLayerElementArray)->Add(
  (const void  *)  _lcvt.j2c_void_pt(pItem)
  ,
  ( EFbxType  )  _lcvt.j2c<jint,EFbxType >(pValueType)
  ));
  return ret;
}
  /// int  InsertAt (int pIndex, const void *pItem, EFbxType pValueType)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLayerElementArray_InsertAt(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArray,jint pIndex,jlong pItem,jint pValueType)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxLayerElementArray *) lpjFbxLayerElementArray)->InsertAt(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ,
  (const void  *)  _lcvt.j2c_void_pt(pItem)
  ,
  ( EFbxType  )  _lcvt.j2c<jint,EFbxType >(pValueType)
  ));
  return ret;
}
  /// void  SetAt (int pIndex, const void *pItem, EFbxType pValueType)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLayerElementArray_SetAt(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArray,jint pIndex,jlong pItem,jint pValueType)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLayerElementArray *) lpjFbxLayerElementArray)->SetAt(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ,
  (const void  *)  _lcvt.j2c_void_pt(pItem)
  ,
  ( EFbxType  )  _lcvt.j2c<jint,EFbxType >(pValueType)
  );
}
  /// void  SetLast (const void *pItem, EFbxType pValueType)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLayerElementArray_SetLast(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArray,jlong pItem,jint pValueType)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLayerElementArray *) lpjFbxLayerElementArray)->SetLast(
  (const void  *)  _lcvt.j2c_void_pt(pItem)
  ,
  ( EFbxType  )  _lcvt.j2c<jint,EFbxType >(pValueType)
  );
}
  /// void  RemoveAt (int pIndex, void **pItem, EFbxType pValueType)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLayerElementArray_RemoveAt(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArray,jint pIndex,jlongArray pItem,jint pValueType)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLayerElementArray *) lpjFbxLayerElementArray)->RemoveAt(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ,
  ( void  **)  _lcvt.j2c_void_ppt(pItem)
  ,
  ( EFbxType  )  _lcvt.j2c<jint,EFbxType >(pValueType)
  );
}
  /// void  RemoveLast (void **pItem, EFbxType pValueType)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLayerElementArray_RemoveLast(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArray,jlongArray pItem,jint pValueType)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLayerElementArray *) lpjFbxLayerElementArray)->RemoveLast(
  ( void  **)  _lcvt.j2c_void_ppt(pItem)
  ,
  ( EFbxType  )  _lcvt.j2c<jint,EFbxType >(pValueType)
  );
}
  /// bool  RemoveIt (void **pItem, EFbxType pValueType)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxLayerElementArray_RemoveIt(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArray,jlongArray pItem,jint pValueType)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxLayerElementArray *) lpjFbxLayerElementArray)->RemoveIt(
  ( void  **)  _lcvt.j2c_void_ppt(pItem)
  ,
  ( EFbxType  )  _lcvt.j2c<jint,EFbxType >(pValueType)
  ));
  return ret;
}
  /// bool  GetAt (int pIndex, void **pItem, EFbxType pValueType) const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxLayerElementArray_GetAt(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArray,jint pIndex,jlongArray pItem,jint pValueType)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxLayerElementArray *) lpjFbxLayerElementArray)->GetAt(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ,
  ( void  **)  _lcvt.j2c_void_ppt(pItem)
  ,
  ( EFbxType  )  _lcvt.j2c<jint,EFbxType >(pValueType)
  ));
  return ret;
}
  /// bool  GetFirst (void **pItem, EFbxType pValueType) const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxLayerElementArray_GetFirst(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArray,jlongArray pItem,jint pValueType)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxLayerElementArray *) lpjFbxLayerElementArray)->GetFirst(
  ( void  **)  _lcvt.j2c_void_ppt(pItem)
  ,
  ( EFbxType  )  _lcvt.j2c<jint,EFbxType >(pValueType)
  ));
  return ret;
}
  /// bool  GetLast (void **pItem, EFbxType pValueType) const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxLayerElementArray_GetLast(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArray,jlongArray pItem,jint pValueType)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxLayerElementArray *) lpjFbxLayerElementArray)->GetLast(
  ( void  **)  _lcvt.j2c_void_ppt(pItem)
  ,
  ( EFbxType  )  _lcvt.j2c<jint,EFbxType >(pValueType)
  ));
  return ret;
}
  /// int  Find (const void *pItem, EFbxType pValueType) const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLayerElementArray_Find(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArray,jlong pItem,jint pValueType)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxLayerElementArray *) lpjFbxLayerElementArray)->Find(
  (const void  *)  _lcvt.j2c_void_pt(pItem)
  ,
  ( EFbxType  )  _lcvt.j2c<jint,EFbxType >(pValueType)
  ));
  return ret;
}
  /// int  FindAfter (int pAfterIndex, const void *pItem, EFbxType pValueType) const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLayerElementArray_FindAfter(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArray,jint pAfterIndex,jlong pItem,jint pValueType)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxLayerElementArray *) lpjFbxLayerElementArray)->FindAfter(
  ( int  )  _lcvt.j2c<jint, int  >(pAfterIndex)
  ,
  (const void  *)  _lcvt.j2c_void_pt(pItem)
  ,
  ( EFbxType  )  _lcvt.j2c<jint,EFbxType >(pValueType)
  ));
  return ret;
}
  /// int  FindBefore (int pBeforeIndex, const void *pItem, EFbxType pValueType) const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLayerElementArray_FindBefore(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArray,jint pBeforeIndex,jlong pItem,jint pValueType)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxLayerElementArray *) lpjFbxLayerElementArray)->FindBefore(
  ( int  )  _lcvt.j2c<jint, int  >(pBeforeIndex)
  ,
  (const void  *)  _lcvt.j2c_void_pt(pItem)
  ,
  ( EFbxType  )  _lcvt.j2c<jint,EFbxType >(pValueType)
  ));
  return ret;
}
  /// bool  IsEqual (const FbxLayerElementArray &pArray) const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxLayerElementArray_IsEqual(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArray,jobject pArray)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxLayerElementArray *) lpjFbxLayerElementArray)->IsEqual(
  (const FbxLayerElementArray  &) * _lcvt.j2c_object_ref<jobject,FbxLayerElementArray >(pArray)
  ));
  return ret;
}
  /// int  Add (long const &pItem)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLayerElementArray_Add1(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArray,jobject pItem)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxLayerElementArray *) lpjFbxLayerElementArray)->Add(
  ( long  &) * _lcvt.j2c_long_ref<jobject,long>(pItem)
  ));
  return ret;
}
  /// int  InsertAt (int pIndex, long const &pItem)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLayerElementArray_InsertAt1(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArray,jint pIndex,jobject pItem)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxLayerElementArray *) lpjFbxLayerElementArray)->InsertAt(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ,
  ( long  &) * _lcvt.j2c_long_ref<jobject,long>(pItem)
  ));
  return ret;
}
  /// void  SetAt (int pIndex, long const &pItem)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLayerElementArray_SetAt1(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArray,jint pIndex,jobject pItem)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLayerElementArray *) lpjFbxLayerElementArray)->SetAt(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ,
  ( long  &) * _lcvt.j2c_long_ref<jobject,long>(pItem)
  );
}
  /// void  SetLast (long const &pItem)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLayerElementArray_SetLast1(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArray,jobject pItem)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLayerElementArray *) lpjFbxLayerElementArray)->SetLast(
  ( long  &) * _lcvt.j2c_long_ref<jobject,long>(pItem)
  );
}
  /// void  RemoveAt (int pIndex, long *pItem)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLayerElementArray_RemoveAt1(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArray,jint pIndex,jlongArray pItem)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLayerElementArray *) lpjFbxLayerElementArray)->RemoveAt(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ,
  ( long  *)  _lcvt.j2c_long_pt<jlongArray,long>(pItem)
  );
}
  /// void  RemoveLast (long *pItem)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLayerElementArray_RemoveLast1(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArray,jlongArray pItem)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLayerElementArray *) lpjFbxLayerElementArray)->RemoveLast(
  ( long  *)  _lcvt.j2c_long_pt<jlongArray,long>(pItem)
  );
}
  /// bool  RemoveIt (long *pItem)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxLayerElementArray_RemoveIt1(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArray,jlongArray pItem)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxLayerElementArray *) lpjFbxLayerElementArray)->RemoveIt(
  ( long  *)  _lcvt.j2c_long_pt<jlongArray,long>(pItem)
  ));
  return ret;
}
  /// bool  GetAt (int pIndex, long *pItem) const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxLayerElementArray_GetAt1(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArray,jint pIndex,jlongArray pItem)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxLayerElementArray *) lpjFbxLayerElementArray)->GetAt(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ,
  ( long  *)  _lcvt.j2c_long_pt<jlongArray,long>(pItem)
  ));
  return ret;
}
  /// bool  GetFirst (long *pItem) const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxLayerElementArray_GetFirst1(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArray,jlongArray pItem)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxLayerElementArray *) lpjFbxLayerElementArray)->GetFirst(
  ( long  *)  _lcvt.j2c_long_pt<jlongArray,long>(pItem)
  ));
  return ret;
}
  /// bool  GetLast (long *pItem) const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxLayerElementArray_GetLast1(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArray,jlongArray pItem)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxLayerElementArray *) lpjFbxLayerElementArray)->GetLast(
  ( long  *)  _lcvt.j2c_long_pt<jlongArray,long>(pItem)
  ));
  return ret;
}
  /// int  Find (long const &pItem) const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLayerElementArray_Find1(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArray,jobject pItem)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxLayerElementArray *) lpjFbxLayerElementArray)->Find(
  ( long  &) * _lcvt.j2c_long_ref<jobject,long>(pItem)
  ));
  return ret;
}
  /// int  FindAfter (int pAfterIndex, long const &pItem) const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLayerElementArray_FindAfter1(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArray,jint pAfterIndex,jobject pItem)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxLayerElementArray *) lpjFbxLayerElementArray)->FindAfter(
  ( int  )  _lcvt.j2c<jint, int  >(pAfterIndex)
  ,
  ( long  &) * _lcvt.j2c_long_ref<jobject,long>(pItem)
  ));
  return ret;
}
  /// int  FindBefore (int pBeforeIndex, long const &pItem) const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLayerElementArray_FindBefore1(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArray,jint pBeforeIndex,jobject pItem)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxLayerElementArray *) lpjFbxLayerElementArray)->FindBefore(
  ( int  )  _lcvt.j2c<jint, int  >(pBeforeIndex)
  ,
  ( long  &) * _lcvt.j2c_long_ref<jobject,long>(pItem)
  ));
  return ret;
}
  /// void  CopyTo (FbxArray< long > &pDst)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLayerElementArray_CopyTo(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArray,jobject pDst)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLayerElementArray *) lpjFbxLayerElementArray)->CopyTo(
  (FbxArray<  long   > &) * _lcvt.j2c_tmpl_FbxArray_obj_ref<jobject,  long   >(pDst)
  );
}
