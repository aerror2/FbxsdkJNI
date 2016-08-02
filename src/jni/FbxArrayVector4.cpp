//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxArrayVector4 ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxArrayVector4_meCreate(JNIEnv * __env, jclass __jc)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxArrayVector4>(
  new FbxArrayVector4(
  ));
  return ret;
}
  /// FbxArrayVector4 (const FbxArrayVector4 &pArray)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxArrayVector4_meCreate1(JNIEnv * __env, jclass __jc,jobject pArray)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxArrayVector4>(
  new FbxArrayVector4(
  (const FbxArrayVector4  &) * _lcvt.j2c_object_ref<jobject,FbxArrayVector4 >(pArray)
  ));
  return ret;
}
  /// FbxArrayVector4 (int pCapacity)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxArrayVector4_meCreate2(JNIEnv * __env, jclass __jc,jint pCapacity)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxArrayVector4>(
  new FbxArrayVector4(
  ( int  )  _lcvt.j2c<jint, int  >(pCapacity)
  ));
  return ret;
}
  /// ~FbxArrayVector4 ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxArrayVector4_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayVector4)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxArrayVector4 *) lpjFbxArrayVector4
  );
}
  /// int  InsertAt (const int pIndex, const FbxVector4 pElement)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxArrayVector4_InsertAt(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayVector4,jint pIndex,jlong pElement)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxArrayVector4 *) lpjFbxArrayVector4)->InsertAt(
  (const int  )  _lcvt.j2c<jint,const int  >(pIndex)
  ,
  (const FbxVector4  )  _lcvt.j2c_object<jlong,FbxVector4 >(pElement)
  ));
  return ret;
}
  /// int  Add (const FbxVector4 pElement)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxArrayVector4_Add(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayVector4,jlong pElement)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxArrayVector4 *) lpjFbxArrayVector4)->Add(
  (const FbxVector4  )  _lcvt.j2c_object<jlong,FbxVector4 >(pElement)
  ));
  return ret;
}
  /// int  AddUnique (const FbxVector4 pElement)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxArrayVector4_AddUnique(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayVector4,jlong pElement)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxArrayVector4 *) lpjFbxArrayVector4)->AddUnique(
  (const FbxVector4  )  _lcvt.j2c_object<jlong,FbxVector4 >(pElement)
  ));
  return ret;
}
  /// int  Size () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxArrayVector4_Size(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayVector4)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxArrayVector4 *) lpjFbxArrayVector4)->Size(
  ));
  return ret;
}
  /// int  Capacity () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxArrayVector4_Capacity(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayVector4)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxArrayVector4 *) lpjFbxArrayVector4)->Capacity(
  ));
  return ret;
}
  /// FbxVector4  GetAt (const int pIndex) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxArrayVector4_GetAt(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayVector4,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxVector4>(
  ((FbxArrayVector4 *) lpjFbxArrayVector4)->GetAt(
  (const int  )  _lcvt.j2c<jint,const int  >(pIndex)
  ));
  return ret;
}
  /// FbxVector4  GetFirst () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxArrayVector4_GetFirst(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayVector4)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxVector4>(
  ((FbxArrayVector4 *) lpjFbxArrayVector4)->GetFirst(
  ));
  return ret;
}
  /// FbxVector4  GetLast () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxArrayVector4_GetLast(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayVector4)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxVector4>(
  ((FbxArrayVector4 *) lpjFbxArrayVector4)->GetLast(
  ));
  return ret;
}
  /// int  Find (const FbxVector4 pElement, const int pStartIndex=0) const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxArrayVector4_Find(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayVector4,jlong pElement,jint pStartIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxArrayVector4 *) lpjFbxArrayVector4)->Find(
  (const FbxVector4  )  _lcvt.j2c_object<jlong,FbxVector4 >(pElement)
  ,
  (const int  )  _lcvt.j2c<jint,const int  >(pStartIndex)
  ));
  return ret;
}
  /// int  FindReverse (const FbxVector4 pElement, const int pStartIndex=FBXSDK_INT_MAX) const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxArrayVector4_FindReverse(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayVector4,jlong pElement,jint pStartIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxArrayVector4 *) lpjFbxArrayVector4)->FindReverse(
  (const FbxVector4  )  _lcvt.j2c_object<jlong,FbxVector4 >(pElement)
  ,
  (const int  )  _lcvt.j2c<jint,const int  >(pStartIndex)
  ));
  return ret;
}
  /// bool  Reserve (const int pCapacity)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxArrayVector4_Reserve(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayVector4,jint pCapacity)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxArrayVector4 *) lpjFbxArrayVector4)->Reserve(
  (const int  )  _lcvt.j2c<jint,const int  >(pCapacity)
  ));
  return ret;
}
  /// void  SetAt (const int pIndex, const FbxVector4 pElement)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxArrayVector4_SetAt(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayVector4,jint pIndex,jlong pElement)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxArrayVector4 *) lpjFbxArrayVector4)->SetAt(
  (const int  )  _lcvt.j2c<jint,const int  >(pIndex)
  ,
  (const FbxVector4  )  _lcvt.j2c_object<jlong,FbxVector4 >(pElement)
  );
}
  /// void  SetFirst (const FbxVector4 pElement)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxArrayVector4_SetFirst(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayVector4,jlong pElement)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxArrayVector4 *) lpjFbxArrayVector4)->SetFirst(
  (const FbxVector4  )  _lcvt.j2c_object<jlong,FbxVector4 >(pElement)
  );
}
  /// void  SetLast (const FbxVector4 pElement)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxArrayVector4_SetLast(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayVector4,jlong pElement)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxArrayVector4 *) lpjFbxArrayVector4)->SetLast(
  (const FbxVector4  )  _lcvt.j2c_object<jlong,FbxVector4 >(pElement)
  );
}
  /// FbxVector4  RemoveAt (const int pIndex)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxArrayVector4_RemoveAt(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayVector4,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxVector4>(
  ((FbxArrayVector4 *) lpjFbxArrayVector4)->RemoveAt(
  (const int  )  _lcvt.j2c<jint,const int  >(pIndex)
  ));
  return ret;
}
  /// FbxVector4  RemoveFirst ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxArrayVector4_RemoveFirst(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayVector4)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxVector4>(
  ((FbxArrayVector4 *) lpjFbxArrayVector4)->RemoveFirst(
  ));
  return ret;
}
  /// FbxVector4  RemoveLast ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxArrayVector4_RemoveLast(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayVector4)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxVector4>(
  ((FbxArrayVector4 *) lpjFbxArrayVector4)->RemoveLast(
  ));
  return ret;
}
  /// bool  RemoveIt (const FbxVector4 pElement)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxArrayVector4_RemoveIt(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayVector4,jlong pElement)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxArrayVector4 *) lpjFbxArrayVector4)->RemoveIt(
  (const FbxVector4  )  _lcvt.j2c_object<jlong,FbxVector4 >(pElement)
  ));
  return ret;
}
  /// bool  Resize (const int pSize)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxArrayVector4_Resize(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayVector4,jint pSize)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxArrayVector4 *) lpjFbxArrayVector4)->Resize(
  (const int  )  _lcvt.j2c<jint,const int  >(pSize)
  ));
  return ret;
}
  /// bool  Grow (const int pSize)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxArrayVector4_Grow(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayVector4,jint pSize)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxArrayVector4 *) lpjFbxArrayVector4)->Grow(
  (const int  )  _lcvt.j2c<jint,const int  >(pSize)
  ));
  return ret;
}
  /// void  Clear ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxArrayVector4_Clear(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayVector4)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxArrayVector4 *) lpjFbxArrayVector4)->Clear(
  );
}
  /// FbxVector4 *  GetArray () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxArrayVector4_GetArray(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayVector4)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxVector4>(
  ((FbxArrayVector4 *) lpjFbxArrayVector4)->GetArray(
  ));
  return ret;
}
  /// void  AddArray (const FbxArray< FbxVector4 > &pOther)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxArrayVector4_AddArray(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayVector4,jobject pOther)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxArrayVector4 *) lpjFbxArrayVector4)->AddArray(
  (FbxArray<  FbxVector4   > &) * _lcvt.j2c_tmpl_FbxArray_obj_ref<jobject,  FbxVector4   >(pOther)
  );
}
  /// void  AddArrayNoDuplicate (const FbxArray< FbxVector4 > &pOther)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxArrayVector4_AddArrayNoDuplicate(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayVector4,jobject pOther)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxArrayVector4 *) lpjFbxArrayVector4)->AddArrayNoDuplicate(
  (FbxArray<  FbxVector4   > &) * _lcvt.j2c_tmpl_FbxArray_obj_ref<jobject,  FbxVector4   >(pOther)
  );
}
  /// void  RemoveArray (const FbxArray< FbxVector4 > &pOther)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxArrayVector4_RemoveArray(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayVector4,jobject pOther)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxArrayVector4 *) lpjFbxArrayVector4)->RemoveArray(
  (FbxArray<  FbxVector4   > &) * _lcvt.j2c_tmpl_FbxArray_obj_ref<jobject,  FbxVector4   >(pOther)
  );
}
