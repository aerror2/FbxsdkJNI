//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxLayerElementArrayTemplateDouble (EFbxType pDataType)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateDouble_meCreate(JNIEnv * __env, jclass __jc,jint pDataType)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxLayerElementArrayTemplateDouble>(
  new FbxLayerElementArrayTemplateDouble(
  ( EFbxType  )  _lcvt.j2c<jint,EFbxType >(pDataType)
  ));
  return ret;
}
  /// int  Add (double const &pItem)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateDouble_Add(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArrayTemplateDouble,jobject pItem)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxLayerElementArrayTemplateDouble *) lpjFbxLayerElementArrayTemplateDouble)->Add(
  ( double  &) * _lcvt.j2c_double_ref<jobject,double>(pItem)
  ));
  return ret;
}
  /// int  InsertAt (int pIndex, double const &pItem)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateDouble_InsertAt(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArrayTemplateDouble,jint pIndex,jobject pItem)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxLayerElementArrayTemplateDouble *) lpjFbxLayerElementArrayTemplateDouble)->InsertAt(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ,
  ( double  &) * _lcvt.j2c_double_ref<jobject,double>(pItem)
  ));
  return ret;
}
  /// void  SetAt (int pIndex, double const &pItem)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateDouble_SetAt(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArrayTemplateDouble,jint pIndex,jobject pItem)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLayerElementArrayTemplateDouble *) lpjFbxLayerElementArrayTemplateDouble)->SetAt(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ,
  ( double  &) * _lcvt.j2c_double_ref<jobject,double>(pItem)
  );
}
  /// void  SetLast (double const &pItem)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateDouble_SetLast(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArrayTemplateDouble,jobject pItem)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLayerElementArrayTemplateDouble *) lpjFbxLayerElementArrayTemplateDouble)->SetLast(
  ( double  &) * _lcvt.j2c_double_ref<jobject,double>(pItem)
  );
}
  /// double  RemoveAt (int pIndex)
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateDouble_RemoveAt(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArrayTemplateDouble,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxLayerElementArrayTemplateDouble *) lpjFbxLayerElementArrayTemplateDouble)->RemoveAt(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// double  RemoveLast ()
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateDouble_RemoveLast(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArrayTemplateDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxLayerElementArrayTemplateDouble *) lpjFbxLayerElementArrayTemplateDouble)->RemoveLast(
  ));
  return ret;
}
  /// bool  RemoveIt (double const &pItem)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateDouble_RemoveIt(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArrayTemplateDouble,jobject pItem)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxLayerElementArrayTemplateDouble *) lpjFbxLayerElementArrayTemplateDouble)->RemoveIt(
  ( double  &) * _lcvt.j2c_double_ref<jobject,double>(pItem)
  ));
  return ret;
}
  /// double  GetAt (int pIndex) const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateDouble_GetAt(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArrayTemplateDouble,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxLayerElementArrayTemplateDouble *) lpjFbxLayerElementArrayTemplateDouble)->GetAt(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// double  GetFirst () const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateDouble_GetFirst(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArrayTemplateDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxLayerElementArrayTemplateDouble *) lpjFbxLayerElementArrayTemplateDouble)->GetFirst(
  ));
  return ret;
}
  /// double  GetLast () const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateDouble_GetLast(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArrayTemplateDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxLayerElementArrayTemplateDouble *) lpjFbxLayerElementArrayTemplateDouble)->GetLast(
  ));
  return ret;
}
  /// int  Find (double const &pItem)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateDouble_Find(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArrayTemplateDouble,jobject pItem)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxLayerElementArrayTemplateDouble *) lpjFbxLayerElementArrayTemplateDouble)->Find(
  ( double  &) * _lcvt.j2c_double_ref<jobject,double>(pItem)
  ));
  return ret;
}
  /// int  FindAfter (int pAfterIndex, double const &pItem)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateDouble_FindAfter(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArrayTemplateDouble,jint pAfterIndex,jobject pItem)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxLayerElementArrayTemplateDouble *) lpjFbxLayerElementArrayTemplateDouble)->FindAfter(
  ( int  )  _lcvt.j2c<jint, int  >(pAfterIndex)
  ,
  ( double  &) * _lcvt.j2c_double_ref<jobject,double>(pItem)
  ));
  return ret;
}
  /// int  FindBefore (int pBeforeIndex, double const &pItem)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateDouble_FindBefore(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArrayTemplateDouble,jint pBeforeIndex,jobject pItem)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxLayerElementArrayTemplateDouble *) lpjFbxLayerElementArrayTemplateDouble)->FindBefore(
  ( int  )  _lcvt.j2c<jint, int  >(pBeforeIndex)
  ,
  ( double  &) * _lcvt.j2c_double_ref<jobject,double>(pItem)
  ));
  return ret;
}
  /// void meDestroy(FbxLayerElementArrayTemplateDouble * lpFbxLayerElementArrayTemplateDouble)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLayerElementArrayTemplateDouble_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxLayerElementArrayTemplateDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxLayerElementArrayTemplateDouble *) lpjFbxLayerElementArrayTemplateDouble
  );
}
