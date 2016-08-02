
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// bool  IsEmpty () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxStringSymbol_IsEmpty(JNIEnv * __env, jclass __jc,jlong lpjFbxStringSymbol)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxStringSymbol *) lpjFbxStringSymbol)->IsEmpty(
  ));
  return ret;
}
  /// FbxStringSymbol ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxStringSymbol_meCreate(JNIEnv * __env, jclass __jc)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxStringSymbol>(
  new FbxStringSymbol(
  ));
  return ret;
}
  /// FbxStringSymbol (const char *pName)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxStringSymbol_meCreate1(JNIEnv * __env, jclass __jc,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxStringSymbol>(
  new FbxStringSymbol(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
  /// FbxStringSymbol (const FbxStringSymbol &pOther)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxStringSymbol_meCreate2(JNIEnv * __env, jclass __jc,jobject pOther)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxStringSymbol>(
  new FbxStringSymbol(
  (const FbxStringSymbol  &) * _lcvt.j2c_object_ref<jobject,FbxStringSymbol >(pOther)
  ));
  return ret;
}
  /// ~FbxStringSymbol ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxStringSymbol_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxStringSymbol)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxStringSymbol *) lpjFbxStringSymbol
  );
}
