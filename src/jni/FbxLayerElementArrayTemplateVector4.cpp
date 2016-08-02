
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxLayerElementArrayTemplateVector4 (EFbxType pDataType)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateVector4_meCreate(JNIEnv * __env, jclass __jc,jint pDataType)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxLayerElementArrayTemplateVector4>(
  new FbxLayerElementArrayTemplateVector4(
  ( EFbxType  )  _lcvt.j2c<jint,EFbxType >(pDataType)
  ));
  return ret;
}
  /// int  Add (FbxVector4 const &pItem)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateVector4_Add(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArrayTemplateVector4,jobject pItem)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxLayerElementArrayTemplateVector4 *) lpjFbxLayerElementArrayTemplateVector4)->Add(
  ( FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pItem)
  ));
  return ret;
}
  /// int  InsertAt (int pIndex, FbxVector4 const &pItem)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateVector4_InsertAt(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArrayTemplateVector4,jint pIndex,jobject pItem)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxLayerElementArrayTemplateVector4 *) lpjFbxLayerElementArrayTemplateVector4)->InsertAt(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ,
  ( FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pItem)
  ));
  return ret;
}
  /// void  SetAt (int pIndex, FbxVector4 const &pItem)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateVector4_SetAt(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArrayTemplateVector4,jint pIndex,jobject pItem)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLayerElementArrayTemplateVector4 *) lpjFbxLayerElementArrayTemplateVector4)->SetAt(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ,
  ( FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pItem)
  );
}
  /// void  SetLast (FbxVector4 const &pItem)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateVector4_SetLast(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArrayTemplateVector4,jobject pItem)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLayerElementArrayTemplateVector4 *) lpjFbxLayerElementArrayTemplateVector4)->SetLast(
  ( FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pItem)
  );
}
  /// FbxVector4  RemoveAt (int pIndex)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateVector4_RemoveAt(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArrayTemplateVector4,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxVector4>(
  ((FbxLayerElementArrayTemplateVector4 *) lpjFbxLayerElementArrayTemplateVector4)->RemoveAt(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// FbxVector4  RemoveLast ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateVector4_RemoveLast(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArrayTemplateVector4)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxVector4>(
  ((FbxLayerElementArrayTemplateVector4 *) lpjFbxLayerElementArrayTemplateVector4)->RemoveLast(
  ));
  return ret;
}
  /// bool  RemoveIt (FbxVector4 const &pItem)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateVector4_RemoveIt(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArrayTemplateVector4,jobject pItem)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxLayerElementArrayTemplateVector4 *) lpjFbxLayerElementArrayTemplateVector4)->RemoveIt(
  ( FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pItem)
  ));
  return ret;
}
  /// FbxVector4  GetAt (int pIndex) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateVector4_GetAt(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArrayTemplateVector4,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxVector4>(
  ((FbxLayerElementArrayTemplateVector4 *) lpjFbxLayerElementArrayTemplateVector4)->GetAt(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// FbxVector4  GetFirst () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateVector4_GetFirst(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArrayTemplateVector4)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxVector4>(
  ((FbxLayerElementArrayTemplateVector4 *) lpjFbxLayerElementArrayTemplateVector4)->GetFirst(
  ));
  return ret;
}
  /// FbxVector4  GetLast () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateVector4_GetLast(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArrayTemplateVector4)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxVector4>(
  ((FbxLayerElementArrayTemplateVector4 *) lpjFbxLayerElementArrayTemplateVector4)->GetLast(
  ));
  return ret;
}
  /// int  Find (FbxVector4 const &pItem)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateVector4_Find(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArrayTemplateVector4,jobject pItem)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxLayerElementArrayTemplateVector4 *) lpjFbxLayerElementArrayTemplateVector4)->Find(
  ( FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pItem)
  ));
  return ret;
}
  /// int  FindAfter (int pAfterIndex, FbxVector4 const &pItem)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateVector4_FindAfter(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArrayTemplateVector4,jint pAfterIndex,jobject pItem)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxLayerElementArrayTemplateVector4 *) lpjFbxLayerElementArrayTemplateVector4)->FindAfter(
  ( int  )  _lcvt.j2c<jint, int  >(pAfterIndex)
  ,
  ( FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pItem)
  ));
  return ret;
}
  /// int  FindBefore (int pBeforeIndex, FbxVector4 const &pItem)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateVector4_FindBefore(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArrayTemplateVector4,jint pBeforeIndex,jobject pItem)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxLayerElementArrayTemplateVector4 *) lpjFbxLayerElementArrayTemplateVector4)->FindBefore(
  ( int  )  _lcvt.j2c<jint, int  >(pBeforeIndex)
  ,
  ( FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pItem)
  ));
  return ret;
}
  /// void meDestroy(FbxLayerElementArrayTemplateVector4 * lpFbxLayerElementArrayTemplateVector4)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateVector4_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArrayTemplateVector4)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxLayerElementArrayTemplateVector4 *) lpjFbxLayerElementArrayTemplateVector4
  );
}
