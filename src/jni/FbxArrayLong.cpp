//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxArrayLong ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxArrayLong_meCreate(JNIEnv * __env, jclass __jc)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxArrayLong>(
  new FbxArrayLong(
  ));
  return ret;
}
  /// FbxArrayLong (const FbxArrayLong &pArray)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxArrayLong_meCreate1(JNIEnv * __env, jclass __jc,jobject pArray)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxArrayLong>(
  new FbxArrayLong(
  (const FbxArrayLong  &) * _lcvt.j2c_object_ref<jobject,FbxArrayLong >(pArray)
  ));
  return ret;
}
  /// FbxArrayLong (int pCapacity)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxArrayLong_meCreate2(JNIEnv * __env, jclass __jc,jint pCapacity)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxArrayLong>(
  new FbxArrayLong(
  ( int  )  _lcvt.j2c<jint, int  >(pCapacity)
  ));
  return ret;
}
  /// ~FbxArrayLong ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxArrayLong_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayLong)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxArrayLong *) lpjFbxArrayLong
  );
}
  /// int  InsertAt (const int pIndex, const long pElement)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxArrayLong_InsertAt(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayLong,jint pIndex,jlong pElement)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxArrayLong *) lpjFbxArrayLong)->InsertAt(
  (const int  )  _lcvt.j2c<jint,const int  >(pIndex)
  ,
  (const long  )  _lcvt.j2c<jlong,const long  >(pElement)
  ));
  return ret;
}
  /// int  Add (const long pElement)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxArrayLong_Add(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayLong,jlong pElement)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxArrayLong *) lpjFbxArrayLong)->Add(
  (const long  )  _lcvt.j2c<jlong,const long  >(pElement)
  ));
  return ret;
}
  /// int  AddUnique (const long pElement)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxArrayLong_AddUnique(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayLong,jlong pElement)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxArrayLong *) lpjFbxArrayLong)->AddUnique(
  (const long  )  _lcvt.j2c<jlong,const long  >(pElement)
  ));
  return ret;
}
  /// int  Size () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxArrayLong_Size(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayLong)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxArrayLong *) lpjFbxArrayLong)->Size(
  ));
  return ret;
}
  /// int  Capacity () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxArrayLong_Capacity(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayLong)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxArrayLong *) lpjFbxArrayLong)->Capacity(
  ));
  return ret;
}
  /// long  GetAt (const int pIndex) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxArrayLong_GetAt(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayLong,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j<jlong,  long  >(
  ((FbxArrayLong *) lpjFbxArrayLong)->GetAt(
  (const int  )  _lcvt.j2c<jint,const int  >(pIndex)
  ));
  return ret;
}
  /// long  GetFirst () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxArrayLong_GetFirst(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayLong)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j<jlong,  long  >(
  ((FbxArrayLong *) lpjFbxArrayLong)->GetFirst(
  ));
  return ret;
}
  /// long  GetLast () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxArrayLong_GetLast(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayLong)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j<jlong,  long  >(
  ((FbxArrayLong *) lpjFbxArrayLong)->GetLast(
  ));
  return ret;
}
  /// int  Find (const long pElement, const int pStartIndex=0) const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxArrayLong_Find(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayLong,jlong pElement,jint pStartIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxArrayLong *) lpjFbxArrayLong)->Find(
  (const long  )  _lcvt.j2c<jlong,const long  >(pElement)
  ,
  (const int  )  _lcvt.j2c<jint,const int  >(pStartIndex)
  ));
  return ret;
}
  /// int  FindReverse (const long pElement, const int pStartIndex=FBXSDK_INT_MAX) const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxArrayLong_FindReverse(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayLong,jlong pElement,jint pStartIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxArrayLong *) lpjFbxArrayLong)->FindReverse(
  (const long  )  _lcvt.j2c<jlong,const long  >(pElement)
  ,
  (const int  )  _lcvt.j2c<jint,const int  >(pStartIndex)
  ));
  return ret;
}
  /// bool  Reserve (const int pCapacity)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxArrayLong_Reserve(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayLong,jint pCapacity)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxArrayLong *) lpjFbxArrayLong)->Reserve(
  (const int  )  _lcvt.j2c<jint,const int  >(pCapacity)
  ));
  return ret;
}
  /// void  SetAt (const int pIndex, const long pElement)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxArrayLong_SetAt(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayLong,jint pIndex,jlong pElement)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxArrayLong *) lpjFbxArrayLong)->SetAt(
  (const int  )  _lcvt.j2c<jint,const int  >(pIndex)
  ,
  (const long  )  _lcvt.j2c<jlong,const long  >(pElement)
  );
}
  /// void  SetFirst (const long pElement)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxArrayLong_SetFirst(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayLong,jlong pElement)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxArrayLong *) lpjFbxArrayLong)->SetFirst(
  (const long  )  _lcvt.j2c<jlong,const long  >(pElement)
  );
}
  /// void  SetLast (const long pElement)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxArrayLong_SetLast(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayLong,jlong pElement)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxArrayLong *) lpjFbxArrayLong)->SetLast(
  (const long  )  _lcvt.j2c<jlong,const long  >(pElement)
  );
}
  /// long  RemoveAt (const int pIndex)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxArrayLong_RemoveAt(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayLong,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j<jlong,  long  >(
  ((FbxArrayLong *) lpjFbxArrayLong)->RemoveAt(
  (const int  )  _lcvt.j2c<jint,const int  >(pIndex)
  ));
  return ret;
}
  /// long  RemoveFirst ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxArrayLong_RemoveFirst(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayLong)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j<jlong,  long  >(
  ((FbxArrayLong *) lpjFbxArrayLong)->RemoveFirst(
  ));
  return ret;
}
  /// long  RemoveLast ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxArrayLong_RemoveLast(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayLong)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j<jlong,  long  >(
  ((FbxArrayLong *) lpjFbxArrayLong)->RemoveLast(
  ));
  return ret;
}
  /// bool  RemoveIt (const long pElement)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxArrayLong_RemoveIt(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayLong,jlong pElement)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxArrayLong *) lpjFbxArrayLong)->RemoveIt(
  (const long  )  _lcvt.j2c<jlong,const long  >(pElement)
  ));
  return ret;
}
  /// bool  Resize (const int pSize)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxArrayLong_Resize(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayLong,jint pSize)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxArrayLong *) lpjFbxArrayLong)->Resize(
  (const int  )  _lcvt.j2c<jint,const int  >(pSize)
  ));
  return ret;
}
  /// bool  Grow (const int pSize)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxArrayLong_Grow(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayLong,jint pSize)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxArrayLong *) lpjFbxArrayLong)->Grow(
  (const int  )  _lcvt.j2c<jint,const int  >(pSize)
  ));
  return ret;
}
  /// void  Clear ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxArrayLong_Clear(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayLong)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxArrayLong *) lpjFbxArrayLong)->Clear(
  );
}
  /// long *  GetArray () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxArrayLong_GetArray(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayLong)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_pt<jlong,  long  *>(
  ((FbxArrayLong *) lpjFbxArrayLong)->GetArray(
  ));
  return ret;
}
  /// void  AddArray (const FbxArray< long > &pOther)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxArrayLong_AddArray(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayLong,jobject pOther)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxArrayLong *) lpjFbxArrayLong)->AddArray(
  (FbxArray<  long   > &) * _lcvt.j2c_tmpl_FbxArray_obj_ref<jobject,  long   >(pOther)
  );
}
  /// void  AddArrayNoDuplicate (const FbxArray< long > &pOther)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxArrayLong_AddArrayNoDuplicate(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayLong,jobject pOther)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxArrayLong *) lpjFbxArrayLong)->AddArrayNoDuplicate(
  (FbxArray<  long   > &) * _lcvt.j2c_tmpl_FbxArray_obj_ref<jobject,  long   >(pOther)
  );
}
  /// void  RemoveArray (const FbxArray< long > &pOther)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxArrayLong_RemoveArray(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayLong,jobject pOther)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxArrayLong *) lpjFbxArrayLong)->RemoveArray(
  (FbxArray<  long   > &) * _lcvt.j2c_tmpl_FbxArray_obj_ref<jobject,  long   >(pOther)
  );
}
