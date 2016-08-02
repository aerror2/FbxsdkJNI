
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxLayerElementArrayTemplateInt (EFbxType pDataType)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateInt_meCreate(JNIEnv * __env, jclass __jc,jint pDataType)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxLayerElementArrayTemplateInt>(
  new FbxLayerElementArrayTemplateInt(
  ( EFbxType  )  _lcvt.j2c<jint,EFbxType >(pDataType)
  ));
  return ret;
}
  /// int  Add (int const &pItem)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateInt_Add(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArrayTemplateInt,jobject pItem)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxLayerElementArrayTemplateInt *) lpjFbxLayerElementArrayTemplateInt)->Add(
  ( int  &) * _lcvt.j2c_int_ref<jobject,int>(pItem)
  ));
  return ret;
}
  /// int  InsertAt (int pIndex, int const &pItem)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateInt_InsertAt(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArrayTemplateInt,jint pIndex,jobject pItem)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxLayerElementArrayTemplateInt *) lpjFbxLayerElementArrayTemplateInt)->InsertAt(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ,
  ( int  &) * _lcvt.j2c_int_ref<jobject,int>(pItem)
  ));
  return ret;
}
  /// void  SetAt (int pIndex, int const &pItem)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateInt_SetAt(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArrayTemplateInt,jint pIndex,jobject pItem)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLayerElementArrayTemplateInt *) lpjFbxLayerElementArrayTemplateInt)->SetAt(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ,
  ( int  &) * _lcvt.j2c_int_ref<jobject,int>(pItem)
  );
}
  /// void  SetLast (int const &pItem)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateInt_SetLast(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArrayTemplateInt,jobject pItem)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLayerElementArrayTemplateInt *) lpjFbxLayerElementArrayTemplateInt)->SetLast(
  ( int  &) * _lcvt.j2c_int_ref<jobject,int>(pItem)
  );
}
  /// int  RemoveAt (int pIndex)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateInt_RemoveAt(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArrayTemplateInt,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxLayerElementArrayTemplateInt *) lpjFbxLayerElementArrayTemplateInt)->RemoveAt(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// int  RemoveLast ()
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateInt_RemoveLast(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArrayTemplateInt)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxLayerElementArrayTemplateInt *) lpjFbxLayerElementArrayTemplateInt)->RemoveLast(
  ));
  return ret;
}
  /// bool  RemoveIt (int const &pItem)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateInt_RemoveIt(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArrayTemplateInt,jobject pItem)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxLayerElementArrayTemplateInt *) lpjFbxLayerElementArrayTemplateInt)->RemoveIt(
  ( int  &) * _lcvt.j2c_int_ref<jobject,int>(pItem)
  ));
  return ret;
}
  /// int  GetAt (int pIndex) const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateInt_GetAt(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArrayTemplateInt,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxLayerElementArrayTemplateInt *) lpjFbxLayerElementArrayTemplateInt)->GetAt(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// int  GetFirst () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateInt_GetFirst(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArrayTemplateInt)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxLayerElementArrayTemplateInt *) lpjFbxLayerElementArrayTemplateInt)->GetFirst(
  ));
  return ret;
}
  /// int  GetLast () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateInt_GetLast(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArrayTemplateInt)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxLayerElementArrayTemplateInt *) lpjFbxLayerElementArrayTemplateInt)->GetLast(
  ));
  return ret;
}
  /// int  Find (int const &pItem)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateInt_Find(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArrayTemplateInt,jobject pItem)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxLayerElementArrayTemplateInt *) lpjFbxLayerElementArrayTemplateInt)->Find(
  ( int  &) * _lcvt.j2c_int_ref<jobject,int>(pItem)
  ));
  return ret;
}
  /// int  FindAfter (int pAfterIndex, int const &pItem)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateInt_FindAfter(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArrayTemplateInt,jint pAfterIndex,jobject pItem)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxLayerElementArrayTemplateInt *) lpjFbxLayerElementArrayTemplateInt)->FindAfter(
  ( int  )  _lcvt.j2c<jint, int  >(pAfterIndex)
  ,
  ( int  &) * _lcvt.j2c_int_ref<jobject,int>(pItem)
  ));
  return ret;
}
  /// int  FindBefore (int pBeforeIndex, int const &pItem)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateInt_FindBefore(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArrayTemplateInt,jint pBeforeIndex,jobject pItem)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxLayerElementArrayTemplateInt *) lpjFbxLayerElementArrayTemplateInt)->FindBefore(
  ( int  )  _lcvt.j2c<jint, int  >(pBeforeIndex)
  ,
  ( int  &) * _lcvt.j2c_int_ref<jobject,int>(pItem)
  ));
  return ret;
}
  /// void meDestroy(FbxLayerElementArrayTemplateInt * lpFbxLayerElementArrayTemplateInt)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateInt_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArrayTemplateInt)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxLayerElementArrayTemplateInt *) lpjFbxLayerElementArrayTemplateInt
  );
}
