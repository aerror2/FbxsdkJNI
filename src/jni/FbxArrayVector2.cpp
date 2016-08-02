//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxArrayVector2 ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxArrayVector2_meCreate(JNIEnv * __env, jclass __jc)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxArrayVector2>(
  new FbxArrayVector2(
  ));
  return ret;
}
  /// FbxArrayVector2 (const FbxArrayVector2 &pArray)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxArrayVector2_meCreate1(JNIEnv * __env, jclass __jc,jobject pArray)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxArrayVector2>(
  new FbxArrayVector2(
  (const FbxArrayVector2  &) * _lcvt.j2c_object_ref<jobject,FbxArrayVector2 >(pArray)
  ));
  return ret;
}
  /// FbxArrayVector2 (int pCapacity)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxArrayVector2_meCreate2(JNIEnv * __env, jclass __jc,jint pCapacity)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxArrayVector2>(
  new FbxArrayVector2(
  ( int  )  _lcvt.j2c<jint, int  >(pCapacity)
  ));
  return ret;
}
  /// ~FbxArrayVector2 ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxArrayVector2_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayVector2)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxArrayVector2 *) lpjFbxArrayVector2
  );
}
  /// int  InsertAt (const int pIndex, const FbxVector2 pElement)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxArrayVector2_InsertAt(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayVector2,jint pIndex,jlong pElement)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxArrayVector2 *) lpjFbxArrayVector2)->InsertAt(
  (const int  )  _lcvt.j2c<jint,const int  >(pIndex)
  ,
  (const FbxVector2  )  _lcvt.j2c_object<jlong,FbxVector2 >(pElement)
  ));
  return ret;
}
  /// int  Add (const FbxVector2 pElement)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxArrayVector2_Add(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayVector2,jlong pElement)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxArrayVector2 *) lpjFbxArrayVector2)->Add(
  (const FbxVector2  )  _lcvt.j2c_object<jlong,FbxVector2 >(pElement)
  ));
  return ret;
}
  /// int  AddUnique (const FbxVector2 pElement)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxArrayVector2_AddUnique(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayVector2,jlong pElement)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxArrayVector2 *) lpjFbxArrayVector2)->AddUnique(
  (const FbxVector2  )  _lcvt.j2c_object<jlong,FbxVector2 >(pElement)
  ));
  return ret;
}
  /// int  Size () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxArrayVector2_Size(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayVector2)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxArrayVector2 *) lpjFbxArrayVector2)->Size(
  ));
  return ret;
}
  /// int  Capacity () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxArrayVector2_Capacity(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayVector2)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxArrayVector2 *) lpjFbxArrayVector2)->Capacity(
  ));
  return ret;
}
  /// FbxVector2  GetAt (const int pIndex) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxArrayVector2_GetAt(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayVector2,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxVector2>(
  ((FbxArrayVector2 *) lpjFbxArrayVector2)->GetAt(
  (const int  )  _lcvt.j2c<jint,const int  >(pIndex)
  ));
  return ret;
}
  /// FbxVector2  GetFirst () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxArrayVector2_GetFirst(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayVector2)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxVector2>(
  ((FbxArrayVector2 *) lpjFbxArrayVector2)->GetFirst(
  ));
  return ret;
}
  /// FbxVector2  GetLast () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxArrayVector2_GetLast(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayVector2)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxVector2>(
  ((FbxArrayVector2 *) lpjFbxArrayVector2)->GetLast(
  ));
  return ret;
}
  /// int  Find (const FbxVector2 pElement, const int pStartIndex=0) const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxArrayVector2_Find(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayVector2,jlong pElement,jint pStartIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxArrayVector2 *) lpjFbxArrayVector2)->Find(
  (const FbxVector2  )  _lcvt.j2c_object<jlong,FbxVector2 >(pElement)
  ,
  (const int  )  _lcvt.j2c<jint,const int  >(pStartIndex)
  ));
  return ret;
}
  /// int  FindReverse (const FbxVector2 pElement, const int pStartIndex=FBXSDK_INT_MAX) const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxArrayVector2_FindReverse(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayVector2,jlong pElement,jint pStartIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxArrayVector2 *) lpjFbxArrayVector2)->FindReverse(
  (const FbxVector2  )  _lcvt.j2c_object<jlong,FbxVector2 >(pElement)
  ,
  (const int  )  _lcvt.j2c<jint,const int  >(pStartIndex)
  ));
  return ret;
}
  /// bool  Reserve (const int pCapacity)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxArrayVector2_Reserve(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayVector2,jint pCapacity)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxArrayVector2 *) lpjFbxArrayVector2)->Reserve(
  (const int  )  _lcvt.j2c<jint,const int  >(pCapacity)
  ));
  return ret;
}
  /// void  SetAt (const int pIndex, const FbxVector2 pElement)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxArrayVector2_SetAt(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayVector2,jint pIndex,jlong pElement)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxArrayVector2 *) lpjFbxArrayVector2)->SetAt(
  (const int  )  _lcvt.j2c<jint,const int  >(pIndex)
  ,
  (const FbxVector2  )  _lcvt.j2c_object<jlong,FbxVector2 >(pElement)
  );
}
  /// void  SetFirst (const FbxVector2 pElement)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxArrayVector2_SetFirst(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayVector2,jlong pElement)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxArrayVector2 *) lpjFbxArrayVector2)->SetFirst(
  (const FbxVector2  )  _lcvt.j2c_object<jlong,FbxVector2 >(pElement)
  );
}
  /// void  SetLast (const FbxVector2 pElement)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxArrayVector2_SetLast(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayVector2,jlong pElement)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxArrayVector2 *) lpjFbxArrayVector2)->SetLast(
  (const FbxVector2  )  _lcvt.j2c_object<jlong,FbxVector2 >(pElement)
  );
}
  /// FbxVector2  RemoveAt (const int pIndex)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxArrayVector2_RemoveAt(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayVector2,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxVector2>(
  ((FbxArrayVector2 *) lpjFbxArrayVector2)->RemoveAt(
  (const int  )  _lcvt.j2c<jint,const int  >(pIndex)
  ));
  return ret;
}
  /// FbxVector2  RemoveFirst ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxArrayVector2_RemoveFirst(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayVector2)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxVector2>(
  ((FbxArrayVector2 *) lpjFbxArrayVector2)->RemoveFirst(
  ));
  return ret;
}
  /// FbxVector2  RemoveLast ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxArrayVector2_RemoveLast(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayVector2)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxVector2>(
  ((FbxArrayVector2 *) lpjFbxArrayVector2)->RemoveLast(
  ));
  return ret;
}
  /// bool  RemoveIt (const FbxVector2 pElement)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxArrayVector2_RemoveIt(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayVector2,jlong pElement)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxArrayVector2 *) lpjFbxArrayVector2)->RemoveIt(
  (const FbxVector2  )  _lcvt.j2c_object<jlong,FbxVector2 >(pElement)
  ));
  return ret;
}
  /// bool  Resize (const int pSize)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxArrayVector2_Resize(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayVector2,jint pSize)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxArrayVector2 *) lpjFbxArrayVector2)->Resize(
  (const int  )  _lcvt.j2c<jint,const int  >(pSize)
  ));
  return ret;
}
  /// bool  Grow (const int pSize)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxArrayVector2_Grow(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayVector2,jint pSize)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxArrayVector2 *) lpjFbxArrayVector2)->Grow(
  (const int  )  _lcvt.j2c<jint,const int  >(pSize)
  ));
  return ret;
}
  /// void  Clear ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxArrayVector2_Clear(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayVector2)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxArrayVector2 *) lpjFbxArrayVector2)->Clear(
  );
}
  /// FbxVector2 *  GetArray () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxArrayVector2_GetArray(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayVector2)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxVector2>(
  ((FbxArrayVector2 *) lpjFbxArrayVector2)->GetArray(
  ));
  return ret;
}
  /// void  AddArray (const FbxArray< FbxVector2 > &pOther)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxArrayVector2_AddArray(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayVector2,jobject pOther)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxArrayVector2 *) lpjFbxArrayVector2)->AddArray(
  (FbxArray<  FbxVector2   > &) * _lcvt.j2c_tmpl_FbxArray_obj_ref<jobject,  FbxVector2   >(pOther)
  );
}
  /// void  AddArrayNoDuplicate (const FbxArray< FbxVector2 > &pOther)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxArrayVector2_AddArrayNoDuplicate(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayVector2,jobject pOther)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxArrayVector2 *) lpjFbxArrayVector2)->AddArrayNoDuplicate(
  (FbxArray<  FbxVector2   > &) * _lcvt.j2c_tmpl_FbxArray_obj_ref<jobject,  FbxVector2   >(pOther)
  );
}
  /// void  RemoveArray (const FbxArray< FbxVector2 > &pOther)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxArrayVector2_RemoveArray(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayVector2,jobject pOther)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxArrayVector2 *) lpjFbxArrayVector2)->RemoveArray(
  (FbxArray<  FbxVector2   > &) * _lcvt.j2c_tmpl_FbxArray_obj_ref<jobject,  FbxVector2   >(pOther)
  );
}
