
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxEffector ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxEffector_meCreate(JNIEnv * __env, jclass __jc)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxEffector>(
  new FbxEffector(
  ));
  return ret;
}
  /// void  Reset ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxEffector_Reset(JNIEnv * __env, jclass __jc,jlong lpjFbxEffector)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxEffector *) lpjFbxEffector)->Reset(
  );
}
  /// void meDestroy(FbxEffector * lpFbxEffector)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxEffector_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxEffector)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxEffector *) lpjFbxEffector
  );
}
