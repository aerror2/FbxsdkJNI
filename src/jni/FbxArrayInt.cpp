//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxArrayInt ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxArrayInt_meCreate(JNIEnv * __env, jclass __jc)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxArrayInt>(
  new FbxArrayInt(
  ));
  return ret;
}
  /// FbxArrayInt (const FbxArrayInt &pArray)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxArrayInt_meCreate1(JNIEnv * __env, jclass __jc,jobject pArray)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxArrayInt>(
  new FbxArrayInt(
  (const FbxArrayInt  &) * _lcvt.j2c_object_ref<jobject,FbxArrayInt >(pArray)
  ));
  return ret;
}
  /// FbxArrayInt (int pCapacity)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxArrayInt_meCreate2(JNIEnv * __env, jclass __jc,jint pCapacity)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxArrayInt>(
  new FbxArrayInt(
  ( int  )  _lcvt.j2c<jint, int  >(pCapacity)
  ));
  return ret;
}
  /// ~FbxArrayInt ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxArrayInt_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayInt)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxArrayInt *) lpjFbxArrayInt
  );
}
  /// int  InsertAt (const int pIndex, const int pElement)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxArrayInt_InsertAt(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayInt,jint pIndex,jint pElement)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxArrayInt *) lpjFbxArrayInt)->InsertAt(
  (const int  )  _lcvt.j2c<jint,const int  >(pIndex)
  ,
  (const int  )  _lcvt.j2c<jint,const int  >(pElement)
  ));
  return ret;
}
  /// int  Add (const int pElement)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxArrayInt_Add(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayInt,jint pElement)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxArrayInt *) lpjFbxArrayInt)->Add(
  (const int  )  _lcvt.j2c<jint,const int  >(pElement)
  ));
  return ret;
}
  /// int  AddUnique (const int pElement)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxArrayInt_AddUnique(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayInt,jint pElement)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxArrayInt *) lpjFbxArrayInt)->AddUnique(
  (const int  )  _lcvt.j2c<jint,const int  >(pElement)
  ));
  return ret;
}
  /// int  Size () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxArrayInt_Size(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayInt)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxArrayInt *) lpjFbxArrayInt)->Size(
  ));
  return ret;
}
  /// int  Capacity () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxArrayInt_Capacity(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayInt)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxArrayInt *) lpjFbxArrayInt)->Capacity(
  ));
  return ret;
}
  /// int  GetAt (const int pIndex) const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxArrayInt_GetAt(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayInt,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxArrayInt *) lpjFbxArrayInt)->GetAt(
  (const int  )  _lcvt.j2c<jint,const int  >(pIndex)
  ));
  return ret;
}
  /// int  GetFirst () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxArrayInt_GetFirst(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayInt)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxArrayInt *) lpjFbxArrayInt)->GetFirst(
  ));
  return ret;
}
  /// int  GetLast () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxArrayInt_GetLast(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayInt)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxArrayInt *) lpjFbxArrayInt)->GetLast(
  ));
  return ret;
}
  /// int  Find (const int pElement, const int pStartIndex=0) const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxArrayInt_Find(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayInt,jint pElement,jint pStartIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxArrayInt *) lpjFbxArrayInt)->Find(
  (const int  )  _lcvt.j2c<jint,const int  >(pElement)
  ,
  (const int  )  _lcvt.j2c<jint,const int  >(pStartIndex)
  ));
  return ret;
}
  /// int  FindReverse (const int pElement, const int pStartIndex=FBXSDK_INT_MAX) const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxArrayInt_FindReverse(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayInt,jint pElement,jint pStartIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxArrayInt *) lpjFbxArrayInt)->FindReverse(
  (const int  )  _lcvt.j2c<jint,const int  >(pElement)
  ,
  (const int  )  _lcvt.j2c<jint,const int  >(pStartIndex)
  ));
  return ret;
}
  /// bool  Reserve (const int pCapacity)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxArrayInt_Reserve(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayInt,jint pCapacity)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxArrayInt *) lpjFbxArrayInt)->Reserve(
  (const int  )  _lcvt.j2c<jint,const int  >(pCapacity)
  ));
  return ret;
}
  /// void  SetAt (const int pIndex, const int pElement)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxArrayInt_SetAt(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayInt,jint pIndex,jint pElement)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxArrayInt *) lpjFbxArrayInt)->SetAt(
  (const int  )  _lcvt.j2c<jint,const int  >(pIndex)
  ,
  (const int  )  _lcvt.j2c<jint,const int  >(pElement)
  );
}
  /// void  SetFirst (const int pElement)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxArrayInt_SetFirst(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayInt,jint pElement)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxArrayInt *) lpjFbxArrayInt)->SetFirst(
  (const int  )  _lcvt.j2c<jint,const int  >(pElement)
  );
}
  /// void  SetLast (const int pElement)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxArrayInt_SetLast(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayInt,jint pElement)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxArrayInt *) lpjFbxArrayInt)->SetLast(
  (const int  )  _lcvt.j2c<jint,const int  >(pElement)
  );
}
  /// int  RemoveAt (const int pIndex)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxArrayInt_RemoveAt(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayInt,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxArrayInt *) lpjFbxArrayInt)->RemoveAt(
  (const int  )  _lcvt.j2c<jint,const int  >(pIndex)
  ));
  return ret;
}
  /// int  RemoveFirst ()
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxArrayInt_RemoveFirst(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayInt)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxArrayInt *) lpjFbxArrayInt)->RemoveFirst(
  ));
  return ret;
}
  /// int  RemoveLast ()
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxArrayInt_RemoveLast(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayInt)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxArrayInt *) lpjFbxArrayInt)->RemoveLast(
  ));
  return ret;
}
  /// bool  RemoveIt (const int pElement)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxArrayInt_RemoveIt(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayInt,jint pElement)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxArrayInt *) lpjFbxArrayInt)->RemoveIt(
  (const int  )  _lcvt.j2c<jint,const int  >(pElement)
  ));
  return ret;
}
  /// bool  Resize (const int pSize)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxArrayInt_Resize(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayInt,jint pSize)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxArrayInt *) lpjFbxArrayInt)->Resize(
  (const int  )  _lcvt.j2c<jint,const int  >(pSize)
  ));
  return ret;
}
  /// bool  Grow (const int pSize)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxArrayInt_Grow(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayInt,jint pSize)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxArrayInt *) lpjFbxArrayInt)->Grow(
  (const int  )  _lcvt.j2c<jint,const int  >(pSize)
  ));
  return ret;
}
  /// void  Clear ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxArrayInt_Clear(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayInt)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxArrayInt *) lpjFbxArrayInt)->Clear(
  );
}
  /// int *  GetArray () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxArrayInt_GetArray(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayInt)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_pt<jlong,  int  *>(
  ((FbxArrayInt *) lpjFbxArrayInt)->GetArray(
  ));
  return ret;
}
  /// void  AddArray (const FbxArray< int > &pOther)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxArrayInt_AddArray(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayInt,jobject pOther)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxArrayInt *) lpjFbxArrayInt)->AddArray(
  (FbxArray<  int   > &) * _lcvt.j2c_tmpl_FbxArray_obj_ref<jobject,  int   >(pOther)
  );
}
  /// void  AddArrayNoDuplicate (const FbxArray< int > &pOther)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxArrayInt_AddArrayNoDuplicate(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayInt,jobject pOther)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxArrayInt *) lpjFbxArrayInt)->AddArrayNoDuplicate(
  (FbxArray<  int   > &) * _lcvt.j2c_tmpl_FbxArray_obj_ref<jobject,  int   >(pOther)
  );
}
  /// void  RemoveArray (const FbxArray< int > &pOther)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxArrayInt_RemoveArray(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayInt,jobject pOther)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxArrayInt *) lpjFbxArrayInt)->RemoveArray(
  (FbxArray<  int   > &) * _lcvt.j2c_tmpl_FbxArray_obj_ref<jobject,  int   >(pOther)
  );
}
