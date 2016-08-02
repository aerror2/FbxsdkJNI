//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxArrayDouble ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxArrayDouble_meCreate(JNIEnv * __env, jclass __jc)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxArrayDouble>(
  new FbxArrayDouble(
  ));
  return ret;
}
  /// FbxArrayDouble (const FbxArrayDouble &pArray)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxArrayDouble_meCreate1(JNIEnv * __env, jclass __jc,jobject pArray)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxArrayDouble>(
  new FbxArrayDouble(
  (const FbxArrayDouble  &) * _lcvt.j2c_object_ref<jobject,FbxArrayDouble >(pArray)
  ));
  return ret;
}
  /// FbxArrayDouble (int pCapacity)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxArrayDouble_meCreate2(JNIEnv * __env, jclass __jc,jint pCapacity)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxArrayDouble>(
  new FbxArrayDouble(
  ( int  )  _lcvt.j2c<jint, int  >(pCapacity)
  ));
  return ret;
}
  /// ~FbxArrayDouble ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxArrayDouble_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxArrayDouble *) lpjFbxArrayDouble
  );
}
  /// int  InsertAt (const int pIndex, const double pElement)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxArrayDouble_InsertAt(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayDouble,jint pIndex,jdouble pElement)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxArrayDouble *) lpjFbxArrayDouble)->InsertAt(
  (const int  )  _lcvt.j2c<jint,const int  >(pIndex)
  ,
  (const double  )  _lcvt.j2c<jdouble,const double  >(pElement)
  ));
  return ret;
}
  /// int  Add (const double pElement)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxArrayDouble_Add(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayDouble,jdouble pElement)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxArrayDouble *) lpjFbxArrayDouble)->Add(
  (const double  )  _lcvt.j2c<jdouble,const double  >(pElement)
  ));
  return ret;
}
  /// int  AddUnique (const double pElement)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxArrayDouble_AddUnique(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayDouble,jdouble pElement)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxArrayDouble *) lpjFbxArrayDouble)->AddUnique(
  (const double  )  _lcvt.j2c<jdouble,const double  >(pElement)
  ));
  return ret;
}
  /// int  Size () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxArrayDouble_Size(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxArrayDouble *) lpjFbxArrayDouble)->Size(
  ));
  return ret;
}
  /// int  Capacity () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxArrayDouble_Capacity(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxArrayDouble *) lpjFbxArrayDouble)->Capacity(
  ));
  return ret;
}
  /// double  GetAt (const int pIndex) const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxArrayDouble_GetAt(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayDouble,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxArrayDouble *) lpjFbxArrayDouble)->GetAt(
  (const int  )  _lcvt.j2c<jint,const int  >(pIndex)
  ));
  return ret;
}
  /// double  GetFirst () const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxArrayDouble_GetFirst(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxArrayDouble *) lpjFbxArrayDouble)->GetFirst(
  ));
  return ret;
}
  /// double  GetLast () const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxArrayDouble_GetLast(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxArrayDouble *) lpjFbxArrayDouble)->GetLast(
  ));
  return ret;
}
  /// int  Find (const double pElement, const int pStartIndex=0) const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxArrayDouble_Find(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayDouble,jdouble pElement,jint pStartIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxArrayDouble *) lpjFbxArrayDouble)->Find(
  (const double  )  _lcvt.j2c<jdouble,const double  >(pElement)
  ,
  (const int  )  _lcvt.j2c<jint,const int  >(pStartIndex)
  ));
  return ret;
}
  /// int  FindReverse (const double pElement, const int pStartIndex=FBXSDK_INT_MAX) const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxArrayDouble_FindReverse(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayDouble,jdouble pElement,jint pStartIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxArrayDouble *) lpjFbxArrayDouble)->FindReverse(
  (const double  )  _lcvt.j2c<jdouble,const double  >(pElement)
  ,
  (const int  )  _lcvt.j2c<jint,const int  >(pStartIndex)
  ));
  return ret;
}
  /// bool  Reserve (const int pCapacity)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxArrayDouble_Reserve(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayDouble,jint pCapacity)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxArrayDouble *) lpjFbxArrayDouble)->Reserve(
  (const int  )  _lcvt.j2c<jint,const int  >(pCapacity)
  ));
  return ret;
}
  /// void  SetAt (const int pIndex, const double pElement)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxArrayDouble_SetAt(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayDouble,jint pIndex,jdouble pElement)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxArrayDouble *) lpjFbxArrayDouble)->SetAt(
  (const int  )  _lcvt.j2c<jint,const int  >(pIndex)
  ,
  (const double  )  _lcvt.j2c<jdouble,const double  >(pElement)
  );
}
  /// void  SetFirst (const double pElement)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxArrayDouble_SetFirst(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayDouble,jdouble pElement)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxArrayDouble *) lpjFbxArrayDouble)->SetFirst(
  (const double  )  _lcvt.j2c<jdouble,const double  >(pElement)
  );
}
  /// void  SetLast (const double pElement)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxArrayDouble_SetLast(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayDouble,jdouble pElement)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxArrayDouble *) lpjFbxArrayDouble)->SetLast(
  (const double  )  _lcvt.j2c<jdouble,const double  >(pElement)
  );
}
  /// double  RemoveAt (const int pIndex)
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxArrayDouble_RemoveAt(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayDouble,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxArrayDouble *) lpjFbxArrayDouble)->RemoveAt(
  (const int  )  _lcvt.j2c<jint,const int  >(pIndex)
  ));
  return ret;
}
  /// double  RemoveFirst ()
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxArrayDouble_RemoveFirst(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxArrayDouble *) lpjFbxArrayDouble)->RemoveFirst(
  ));
  return ret;
}
  /// double  RemoveLast ()
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxArrayDouble_RemoveLast(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxArrayDouble *) lpjFbxArrayDouble)->RemoveLast(
  ));
  return ret;
}
  /// bool  RemoveIt (const double pElement)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxArrayDouble_RemoveIt(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayDouble,jdouble pElement)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxArrayDouble *) lpjFbxArrayDouble)->RemoveIt(
  (const double  )  _lcvt.j2c<jdouble,const double  >(pElement)
  ));
  return ret;
}
  /// bool  Resize (const int pSize)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxArrayDouble_Resize(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayDouble,jint pSize)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxArrayDouble *) lpjFbxArrayDouble)->Resize(
  (const int  )  _lcvt.j2c<jint,const int  >(pSize)
  ));
  return ret;
}
  /// bool  Grow (const int pSize)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxArrayDouble_Grow(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayDouble,jint pSize)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxArrayDouble *) lpjFbxArrayDouble)->Grow(
  (const int  )  _lcvt.j2c<jint,const int  >(pSize)
  ));
  return ret;
}
  /// void  Clear ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxArrayDouble_Clear(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxArrayDouble *) lpjFbxArrayDouble)->Clear(
  );
}
  /// double *  GetArray () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxArrayDouble_GetArray(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_pt<jlong,  double  *>(
  ((FbxArrayDouble *) lpjFbxArrayDouble)->GetArray(
  ));
  return ret;
}
  /// void  AddArray (const FbxArray< double > &pOther)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxArrayDouble_AddArray(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayDouble,jobject pOther)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxArrayDouble *) lpjFbxArrayDouble)->AddArray(
  (FbxArray<  double   > &) * _lcvt.j2c_tmpl_FbxArray_obj_ref<jobject,  double   >(pOther)
  );
}
  /// void  AddArrayNoDuplicate (const FbxArray< double > &pOther)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxArrayDouble_AddArrayNoDuplicate(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayDouble,jobject pOther)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxArrayDouble *) lpjFbxArrayDouble)->AddArrayNoDuplicate(
  (FbxArray<  double   > &) * _lcvt.j2c_tmpl_FbxArray_obj_ref<jobject,  double   >(pOther)
  );
}
  /// void  RemoveArray (const FbxArray< double > &pOther)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxArrayDouble_RemoveArray(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayDouble,jobject pOther)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxArrayDouble *) lpjFbxArrayDouble)->RemoveArray(
  (FbxArray<  double   > &) * _lcvt.j2c_tmpl_FbxArray_obj_ref<jobject,  double   >(pOther)
  );
}
