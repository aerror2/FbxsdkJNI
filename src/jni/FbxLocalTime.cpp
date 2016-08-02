
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxLocalTime ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLocalTime_meCreate(JNIEnv * __env, jclass __jc)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxLocalTime>(
  new FbxLocalTime(
  ));
  return ret;
}
  /// void meDestroy(FbxLocalTime * lpFbxLocalTime)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLocalTime_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxLocalTime)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxLocalTime *) lpjFbxLocalTime
  );
}
