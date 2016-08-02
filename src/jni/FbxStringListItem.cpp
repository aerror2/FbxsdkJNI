//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxStringListItem ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxStringListItem_meCreate(JNIEnv * __env, jclass __jc)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxStringListItem>(
  new FbxStringListItem(
  ));
  return ret;
}
  /// FbxStringListItem (const char *pString, FbxHandle pRef=0)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxStringListItem_meCreate1(JNIEnv * __env, jclass __jc,jstring pString,jlong pRef)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxStringListItem>(
  new FbxStringListItem(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pString)
  ,
  ( FbxHandle  )  _lcvt.j2c<jlong, FbxHandle  >(pRef)
  ));
  return ret;
}
  /// void meDestroy(FbxStringListItem * lpFbxStringListItem)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxStringListItem_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxStringListItem)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxStringListItem *) lpjFbxStringListItem
  );
}
