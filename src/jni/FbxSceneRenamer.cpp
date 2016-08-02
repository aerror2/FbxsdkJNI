//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxSceneRenamer (FbxScene *pScene)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxSceneRenamer_meCreate(JNIEnv * __env, jclass __jc,jlong pScene)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxSceneRenamer>(
  new FbxSceneRenamer(
  ( FbxScene  *)  _lcvt.j2c_object_pt<jlong, FbxScene>(pScene)
  ));
  return ret;
}
  /// virtual  ~FbxSceneRenamer ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxSceneRenamer_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxSceneRenamer)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxSceneRenamer *) lpjFbxSceneRenamer
  );
}
  /// void  RenameFor (ERenamingMode pMode)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxSceneRenamer_RenameFor(JNIEnv * __env, jclass __jc,jlong lpjFbxSceneRenamer,jint pMode)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxSceneRenamer *) lpjFbxSceneRenamer)->RenameFor(
  ( FbxSceneRenamer::ERenamingMode  )  _lcvt.j2c<jint,FbxSceneRenamer::ERenamingMode >(pMode)
  );
}
