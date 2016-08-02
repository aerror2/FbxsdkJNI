
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxArrayBool ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxArrayBool_meCreate(JNIEnv * __env, jclass __jc)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxArrayBool>(
  new FbxArrayBool(
  ));
  return ret;
}
  /// FbxArrayBool (const FbxArrayBool &pArray)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxArrayBool_meCreate1(JNIEnv * __env, jclass __jc,jobject pArray)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxArrayBool>(
  new FbxArrayBool(
  (const FbxArrayBool  &) * _lcvt.j2c_object_ref<jobject,FbxArrayBool >(pArray)
  ));
  return ret;
}
  /// FbxArrayBool (int pCapacity)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxArrayBool_meCreate2(JNIEnv * __env, jclass __jc,jint pCapacity)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxArrayBool>(
  new FbxArrayBool(
  ( int  )  _lcvt.j2c<jint, int  >(pCapacity)
  ));
  return ret;
}
  /// ~FbxArrayBool ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxArrayBool_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxArrayBool *) lpjFbxArrayBool
  );
}
  /// int  InsertAt (const int pIndex, const bool pElement)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxArrayBool_InsertAt(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayBool,jint pIndex,jboolean pElement)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxArrayBool *) lpjFbxArrayBool)->InsertAt(
  (const int  )  _lcvt.j2c<jint,const int  >(pIndex)
  ,
  (const bool  )  _lcvt.j2c<jboolean,const bool  >(pElement)
  ));
  return ret;
}
  /// int  Add (const bool pElement)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxArrayBool_Add(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayBool,jboolean pElement)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxArrayBool *) lpjFbxArrayBool)->Add(
  (const bool  )  _lcvt.j2c<jboolean,const bool  >(pElement)
  ));
  return ret;
}
  /// int  AddUnique (const bool pElement)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxArrayBool_AddUnique(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayBool,jboolean pElement)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxArrayBool *) lpjFbxArrayBool)->AddUnique(
  (const bool  )  _lcvt.j2c<jboolean,const bool  >(pElement)
  ));
  return ret;
}
  /// int  Size () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxArrayBool_Size(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxArrayBool *) lpjFbxArrayBool)->Size(
  ));
  return ret;
}
  /// int  Capacity () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxArrayBool_Capacity(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxArrayBool *) lpjFbxArrayBool)->Capacity(
  ));
  return ret;
}
  /// bool  GetAt (const int pIndex) const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxArrayBool_GetAt(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayBool,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxArrayBool *) lpjFbxArrayBool)->GetAt(
  (const int  )  _lcvt.j2c<jint,const int  >(pIndex)
  ));
  return ret;
}
  /// bool  GetFirst () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxArrayBool_GetFirst(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxArrayBool *) lpjFbxArrayBool)->GetFirst(
  ));
  return ret;
}
  /// bool  GetLast () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxArrayBool_GetLast(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxArrayBool *) lpjFbxArrayBool)->GetLast(
  ));
  return ret;
}
  /// int  Find (const bool pElement, const int pStartIndex=0) const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxArrayBool_Find(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayBool,jboolean pElement,jint pStartIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxArrayBool *) lpjFbxArrayBool)->Find(
  (const bool  )  _lcvt.j2c<jboolean,const bool  >(pElement)
  ,
  (const int  )  _lcvt.j2c<jint,const int  >(pStartIndex)
  ));
  return ret;
}
  /// int  FindReverse (const bool pElement, const int pStartIndex=FBXSDK_INT_MAX) const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxArrayBool_FindReverse(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayBool,jboolean pElement,jint pStartIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxArrayBool *) lpjFbxArrayBool)->FindReverse(
  (const bool  )  _lcvt.j2c<jboolean,const bool  >(pElement)
  ,
  (const int  )  _lcvt.j2c<jint,const int  >(pStartIndex)
  ));
  return ret;
}
  /// bool  Reserve (const int pCapacity)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxArrayBool_Reserve(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayBool,jint pCapacity)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxArrayBool *) lpjFbxArrayBool)->Reserve(
  (const int  )  _lcvt.j2c<jint,const int  >(pCapacity)
  ));
  return ret;
}
  /// void  SetAt (const int pIndex, const bool pElement)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxArrayBool_SetAt(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayBool,jint pIndex,jboolean pElement)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxArrayBool *) lpjFbxArrayBool)->SetAt(
  (const int  )  _lcvt.j2c<jint,const int  >(pIndex)
  ,
  (const bool  )  _lcvt.j2c<jboolean,const bool  >(pElement)
  );
}
  /// void  SetFirst (const bool pElement)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxArrayBool_SetFirst(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayBool,jboolean pElement)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxArrayBool *) lpjFbxArrayBool)->SetFirst(
  (const bool  )  _lcvt.j2c<jboolean,const bool  >(pElement)
  );
}
  /// void  SetLast (const bool pElement)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxArrayBool_SetLast(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayBool,jboolean pElement)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxArrayBool *) lpjFbxArrayBool)->SetLast(
  (const bool  )  _lcvt.j2c<jboolean,const bool  >(pElement)
  );
}
  /// bool  RemoveAt (const int pIndex)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxArrayBool_RemoveAt(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayBool,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxArrayBool *) lpjFbxArrayBool)->RemoveAt(
  (const int  )  _lcvt.j2c<jint,const int  >(pIndex)
  ));
  return ret;
}
  /// bool  RemoveFirst ()
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxArrayBool_RemoveFirst(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxArrayBool *) lpjFbxArrayBool)->RemoveFirst(
  ));
  return ret;
}
  /// bool  RemoveLast ()
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxArrayBool_RemoveLast(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxArrayBool *) lpjFbxArrayBool)->RemoveLast(
  ));
  return ret;
}
  /// bool  RemoveIt (const bool pElement)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxArrayBool_RemoveIt(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayBool,jboolean pElement)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxArrayBool *) lpjFbxArrayBool)->RemoveIt(
  (const bool  )  _lcvt.j2c<jboolean,const bool  >(pElement)
  ));
  return ret;
}
  /// bool  Resize (const int pSize)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxArrayBool_Resize(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayBool,jint pSize)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxArrayBool *) lpjFbxArrayBool)->Resize(
  (const int  )  _lcvt.j2c<jint,const int  >(pSize)
  ));
  return ret;
}
  /// bool  Grow (const int pSize)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxArrayBool_Grow(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayBool,jint pSize)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxArrayBool *) lpjFbxArrayBool)->Grow(
  (const int  )  _lcvt.j2c<jint,const int  >(pSize)
  ));
  return ret;
}
  /// void  Clear ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxArrayBool_Clear(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxArrayBool *) lpjFbxArrayBool)->Clear(
  );
}
  /// bool *  GetArray () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxArrayBool_GetArray(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_pt<jlong,  bool  *>(
  ((FbxArrayBool *) lpjFbxArrayBool)->GetArray(
  ));
  return ret;
}
  /// void  AddArray (const FbxArray< bool > &pOther)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxArrayBool_AddArray(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayBool,jobject pOther)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxArrayBool *) lpjFbxArrayBool)->AddArray(
  (FbxArray<  bool   > &) * _lcvt.j2c_tmpl_FbxArray_obj_ref<jobject,  bool   >(pOther)
  );
}
  /// void  AddArrayNoDuplicate (const FbxArray< bool > &pOther)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxArrayBool_AddArrayNoDuplicate(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayBool,jobject pOther)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxArrayBool *) lpjFbxArrayBool)->AddArrayNoDuplicate(
  (FbxArray<  bool   > &) * _lcvt.j2c_tmpl_FbxArray_obj_ref<jobject,  bool   >(pOther)
  );
}
  /// void  RemoveArray (const FbxArray< bool > &pOther)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxArrayBool_RemoveArray(JNIEnv * __env, jclass __jc,jlong lpjFbxArrayBool,jobject pOther)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxArrayBool *) lpjFbxArrayBool)->RemoveArray(
  (FbxArray<  bool   > &) * _lcvt.j2c_tmpl_FbxArray_obj_ref<jobject,  bool   >(pOther)
  );
}
