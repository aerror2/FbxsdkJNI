
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxNameHandler (const char *pInitialName="")
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNameHandler_meCreate(JNIEnv * __env, jclass __jc,jstring pInitialName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxNameHandler>(
  new FbxNameHandler(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pInitialName)
  ));
  return ret;
}
  /// FbxNameHandler (FbxNameHandler const &pName)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNameHandler_meCreate1(JNIEnv * __env, jclass __jc,jobject pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxNameHandler>(
  new FbxNameHandler(
  ( FbxNameHandler  &) * _lcvt.j2c_object_ref<jobject,FbxNameHandler >(pName)
  ));
  return ret;
}
  /// ~FbxNameHandler ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNameHandler_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxNameHandler)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxNameHandler *) lpjFbxNameHandler
  );
}
  /// void  SetInitialName (const char *pInitialName)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNameHandler_SetInitialName(JNIEnv * __env, jclass __jc,jlong lpjFbxNameHandler,jstring pInitialName)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNameHandler *) lpjFbxNameHandler)->SetInitialName(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pInitialName)
  );
}
  /// const char *  GetInitialName () const
extern "C" JNIEXPORT jstring JNICALL Java_fbxsdk_FbxNameHandler_GetInitialName(JNIEnv * __env, jclass __jc,jlong lpjFbxNameHandler)
{
  JNILocalConverter _lcvt(__env,__jc);
  jstring ret=(jstring)_lcvt.c2j_string(
  ((FbxNameHandler *) lpjFbxNameHandler)->GetInitialName(
  ));
  return ret;
}
  /// void  SetCurrentName (const char *pNewName)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNameHandler_SetCurrentName(JNIEnv * __env, jclass __jc,jlong lpjFbxNameHandler,jstring pNewName)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNameHandler *) lpjFbxNameHandler)->SetCurrentName(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pNewName)
  );
}
  /// const char *  GetCurrentName () const
extern "C" JNIEXPORT jstring JNICALL Java_fbxsdk_FbxNameHandler_GetCurrentName(JNIEnv * __env, jclass __jc,jlong lpjFbxNameHandler)
{
  JNILocalConverter _lcvt(__env,__jc);
  jstring ret=(jstring)_lcvt.c2j_string(
  ((FbxNameHandler *) lpjFbxNameHandler)->GetCurrentName(
  ));
  return ret;
}
  /// void  SetNameSpace (const char *pNameSpace)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNameHandler_SetNameSpace(JNIEnv * __env, jclass __jc,jlong lpjFbxNameHandler,jstring pNameSpace)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNameHandler *) lpjFbxNameHandler)->SetNameSpace(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pNameSpace)
  );
}
  /// const char *  GetNameSpace () const
extern "C" JNIEXPORT jstring JNICALL Java_fbxsdk_FbxNameHandler_GetNameSpace(JNIEnv * __env, jclass __jc,jlong lpjFbxNameHandler)
{
  JNILocalConverter _lcvt(__env,__jc);
  jstring ret=(jstring)_lcvt.c2j_string(
  ((FbxNameHandler *) lpjFbxNameHandler)->GetNameSpace(
  ));
  return ret;
}
  /// bool  IsRenamed () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxNameHandler_IsRenamed(JNIEnv * __env, jclass __jc,jlong lpjFbxNameHandler)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxNameHandler *) lpjFbxNameHandler)->IsRenamed(
  ));
  return ret;
}
  /// FbxArray< FbxString * >  GetNameSpaceArray (char identifier)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNameHandler_GetNameSpaceArray(JNIEnv * __env, jclass __jc,jlong lpjFbxNameHandler,jbyte identifier)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxArray<jlong,  FbxString  * >(
  ((FbxNameHandler *) lpjFbxNameHandler)->GetNameSpaceArray(
  ( char  )  _lcvt.j2c<jbyte, char  >(identifier)
  ));
  return ret;
}
  /// void  SetParentName (const char *pParentName)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNameHandler_SetParentName(JNIEnv * __env, jclass __jc,jlong lpjFbxNameHandler,jstring pParentName)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNameHandler *) lpjFbxNameHandler)->SetParentName(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pParentName)
  );
}
  /// const char *  GetParentName () const
extern "C" JNIEXPORT jstring JNICALL Java_fbxsdk_FbxNameHandler_GetParentName(JNIEnv * __env, jclass __jc,jlong lpjFbxNameHandler)
{
  JNILocalConverter _lcvt(__env,__jc);
  jstring ret=(jstring)_lcvt.c2j_string(
  ((FbxNameHandler *) lpjFbxNameHandler)->GetParentName(
  ));
  return ret;
}
