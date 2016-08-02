//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxLayerElementArrayTemplateVector2 (EFbxType pDataType)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateVector2_meCreate(JNIEnv * __env, jclass __jc,jint pDataType)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxLayerElementArrayTemplateVector2>(
  new FbxLayerElementArrayTemplateVector2(
  ( EFbxType  )  _lcvt.j2c<jint,EFbxType >(pDataType)
  ));
  return ret;
}
  /// int  Add (FbxVector2 const &pItem)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateVector2_Add(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArrayTemplateVector2,jobject pItem)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxLayerElementArrayTemplateVector2 *) lpjFbxLayerElementArrayTemplateVector2)->Add(
  ( FbxVector2  &) * _lcvt.j2c_object_ref<jobject,FbxVector2 >(pItem)
  ));
  return ret;
}
  /// int  InsertAt (int pIndex, FbxVector2 const &pItem)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateVector2_InsertAt(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArrayTemplateVector2,jint pIndex,jobject pItem)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxLayerElementArrayTemplateVector2 *) lpjFbxLayerElementArrayTemplateVector2)->InsertAt(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ,
  ( FbxVector2  &) * _lcvt.j2c_object_ref<jobject,FbxVector2 >(pItem)
  ));
  return ret;
}
  /// void  SetAt (int pIndex, FbxVector2 const &pItem)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateVector2_SetAt(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArrayTemplateVector2,jint pIndex,jobject pItem)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLayerElementArrayTemplateVector2 *) lpjFbxLayerElementArrayTemplateVector2)->SetAt(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ,
  ( FbxVector2  &) * _lcvt.j2c_object_ref<jobject,FbxVector2 >(pItem)
  );
}
  /// void  SetLast (FbxVector2 const &pItem)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateVector2_SetLast(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArrayTemplateVector2,jobject pItem)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLayerElementArrayTemplateVector2 *) lpjFbxLayerElementArrayTemplateVector2)->SetLast(
  ( FbxVector2  &) * _lcvt.j2c_object_ref<jobject,FbxVector2 >(pItem)
  );
}
  /// FbxVector2  RemoveAt (int pIndex)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateVector2_RemoveAt(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArrayTemplateVector2,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxVector2>(
  ((FbxLayerElementArrayTemplateVector2 *) lpjFbxLayerElementArrayTemplateVector2)->RemoveAt(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// FbxVector2  RemoveLast ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateVector2_RemoveLast(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArrayTemplateVector2)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxVector2>(
  ((FbxLayerElementArrayTemplateVector2 *) lpjFbxLayerElementArrayTemplateVector2)->RemoveLast(
  ));
  return ret;
}
  /// bool  RemoveIt (FbxVector2 const &pItem)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateVector2_RemoveIt(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArrayTemplateVector2,jobject pItem)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxLayerElementArrayTemplateVector2 *) lpjFbxLayerElementArrayTemplateVector2)->RemoveIt(
  ( FbxVector2  &) * _lcvt.j2c_object_ref<jobject,FbxVector2 >(pItem)
  ));
  return ret;
}
  /// FbxVector2  GetAt (int pIndex) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateVector2_GetAt(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArrayTemplateVector2,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxVector2>(
  ((FbxLayerElementArrayTemplateVector2 *) lpjFbxLayerElementArrayTemplateVector2)->GetAt(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// FbxVector2  GetFirst () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateVector2_GetFirst(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArrayTemplateVector2)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxVector2>(
  ((FbxLayerElementArrayTemplateVector2 *) lpjFbxLayerElementArrayTemplateVector2)->GetFirst(
  ));
  return ret;
}
  /// FbxVector2  GetLast () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateVector2_GetLast(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArrayTemplateVector2)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxVector2>(
  ((FbxLayerElementArrayTemplateVector2 *) lpjFbxLayerElementArrayTemplateVector2)->GetLast(
  ));
  return ret;
}
  /// int  Find (FbxVector2 const &pItem)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateVector2_Find(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArrayTemplateVector2,jobject pItem)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxLayerElementArrayTemplateVector2 *) lpjFbxLayerElementArrayTemplateVector2)->Find(
  ( FbxVector2  &) * _lcvt.j2c_object_ref<jobject,FbxVector2 >(pItem)
  ));
  return ret;
}
  /// int  FindAfter (int pAfterIndex, FbxVector2 const &pItem)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateVector2_FindAfter(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArrayTemplateVector2,jint pAfterIndex,jobject pItem)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxLayerElementArrayTemplateVector2 *) lpjFbxLayerElementArrayTemplateVector2)->FindAfter(
  ( int  )  _lcvt.j2c<jint, int  >(pAfterIndex)
  ,
  ( FbxVector2  &) * _lcvt.j2c_object_ref<jobject,FbxVector2 >(pItem)
  ));
  return ret;
}
  /// int  FindBefore (int pBeforeIndex, FbxVector2 const &pItem)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateVector2_FindBefore(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArrayTemplateVector2,jint pBeforeIndex,jobject pItem)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxLayerElementArrayTemplateVector2 *) lpjFbxLayerElementArrayTemplateVector2)->FindBefore(
  ( int  )  _lcvt.j2c<jint, int  >(pBeforeIndex)
  ,
  ( FbxVector2  &) * _lcvt.j2c_object_ref<jobject,FbxVector2 >(pItem)
  ));
  return ret;
}
  /// void meDestroy(FbxLayerElementArrayTemplateVector2 * lpFbxLayerElementArrayTemplateVector2)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateVector2_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArrayTemplateVector2)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxLayerElementArrayTemplateVector2 *) lpjFbxLayerElementArrayTemplateVector2
  );
}
