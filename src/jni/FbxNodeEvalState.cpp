//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxNodeEvalState (FbxNode *pNode)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNodeEvalState_meCreate(JNIEnv * __env, jclass __jc,jlong pNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxNodeEvalState>(
  new FbxNodeEvalState(
  ( FbxNode  *)  _lcvt.j2c_object_pt<jlong, FbxNode>(pNode)
  ));
  return ret;
}
  /// void meDestroy(FbxNodeEvalState * lpFbxNodeEvalState)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNodeEvalState_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxNodeEvalState)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxNodeEvalState *) lpjFbxNodeEvalState
  );
}
