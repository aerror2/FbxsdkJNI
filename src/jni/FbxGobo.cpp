//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxGobo (char *pName)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxGobo_meCreate(JNIEnv * __env, jclass __jc,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxGobo>(
  new FbxGobo(
  ( char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
  /// void meDestroy(FbxGobo * lpFbxGobo)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxGobo_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxGobo)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxGobo *) lpjFbxGobo
  );
}
