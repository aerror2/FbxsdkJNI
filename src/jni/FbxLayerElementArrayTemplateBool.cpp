//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxLayerElementArrayTemplateBool (EFbxType pDataType)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateBool_meCreate(JNIEnv * __env, jclass __jc,jint pDataType)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxLayerElementArrayTemplateBool>(
  new FbxLayerElementArrayTemplateBool(
  ( EFbxType  )  _lcvt.j2c<jint,EFbxType >(pDataType)
  ));
  return ret;
}
  /// int  Add (bool const &pItem)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateBool_Add(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArrayTemplateBool,jobject pItem)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxLayerElementArrayTemplateBool *) lpjFbxLayerElementArrayTemplateBool)->Add(
  ( bool  &) * _lcvt.j2c_bool_ref<jobject,bool>(pItem)
  ));
  return ret;
}
  /// int  InsertAt (int pIndex, bool const &pItem)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateBool_InsertAt(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArrayTemplateBool,jint pIndex,jobject pItem)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxLayerElementArrayTemplateBool *) lpjFbxLayerElementArrayTemplateBool)->InsertAt(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ,
  ( bool  &) * _lcvt.j2c_bool_ref<jobject,bool>(pItem)
  ));
  return ret;
}
  /// void  SetAt (int pIndex, bool const &pItem)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateBool_SetAt(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArrayTemplateBool,jint pIndex,jobject pItem)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLayerElementArrayTemplateBool *) lpjFbxLayerElementArrayTemplateBool)->SetAt(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ,
  ( bool  &) * _lcvt.j2c_bool_ref<jobject,bool>(pItem)
  );
}
  /// void  SetLast (bool const &pItem)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateBool_SetLast(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArrayTemplateBool,jobject pItem)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLayerElementArrayTemplateBool *) lpjFbxLayerElementArrayTemplateBool)->SetLast(
  ( bool  &) * _lcvt.j2c_bool_ref<jobject,bool>(pItem)
  );
}
  /// bool  RemoveAt (int pIndex)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateBool_RemoveAt(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArrayTemplateBool,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxLayerElementArrayTemplateBool *) lpjFbxLayerElementArrayTemplateBool)->RemoveAt(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// bool  RemoveLast ()
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateBool_RemoveLast(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArrayTemplateBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxLayerElementArrayTemplateBool *) lpjFbxLayerElementArrayTemplateBool)->RemoveLast(
  ));
  return ret;
}
  /// bool  RemoveIt (bool const &pItem)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateBool_RemoveIt(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArrayTemplateBool,jobject pItem)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxLayerElementArrayTemplateBool *) lpjFbxLayerElementArrayTemplateBool)->RemoveIt(
  ( bool  &) * _lcvt.j2c_bool_ref<jobject,bool>(pItem)
  ));
  return ret;
}
  /// bool  GetAt (int pIndex) const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateBool_GetAt(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArrayTemplateBool,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxLayerElementArrayTemplateBool *) lpjFbxLayerElementArrayTemplateBool)->GetAt(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// bool  GetFirst () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateBool_GetFirst(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArrayTemplateBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxLayerElementArrayTemplateBool *) lpjFbxLayerElementArrayTemplateBool)->GetFirst(
  ));
  return ret;
}
  /// bool  GetLast () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateBool_GetLast(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArrayTemplateBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxLayerElementArrayTemplateBool *) lpjFbxLayerElementArrayTemplateBool)->GetLast(
  ));
  return ret;
}
  /// int  Find (bool const &pItem)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateBool_Find(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArrayTemplateBool,jobject pItem)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxLayerElementArrayTemplateBool *) lpjFbxLayerElementArrayTemplateBool)->Find(
  ( bool  &) * _lcvt.j2c_bool_ref<jobject,bool>(pItem)
  ));
  return ret;
}
  /// int  FindAfter (int pAfterIndex, bool const &pItem)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateBool_FindAfter(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArrayTemplateBool,jint pAfterIndex,jobject pItem)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxLayerElementArrayTemplateBool *) lpjFbxLayerElementArrayTemplateBool)->FindAfter(
  ( int  )  _lcvt.j2c<jint, int  >(pAfterIndex)
  ,
  ( bool  &) * _lcvt.j2c_bool_ref<jobject,bool>(pItem)
  ));
  return ret;
}
  /// int  FindBefore (int pBeforeIndex, bool const &pItem)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateBool_FindBefore(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArrayTemplateBool,jint pBeforeIndex,jobject pItem)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxLayerElementArrayTemplateBool *) lpjFbxLayerElementArrayTemplateBool)->FindBefore(
  ( int  )  _lcvt.j2c<jint, int  >(pBeforeIndex)
  ,
  ( bool  &) * _lcvt.j2c_bool_ref<jobject,bool>(pItem)
  ));
  return ret;
}
  /// void meDestroy(FbxLayerElementArrayTemplateBool * lpFbxLayerElementArrayTemplateBool)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateBool_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArrayTemplateBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxLayerElementArrayTemplateBool *) lpjFbxLayerElementArrayTemplateBool
  );
}
