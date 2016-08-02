//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxTime  GetTime () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimEvalState_GetTime(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimEvalState)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxTime>(
  ((FbxAnimEvalState *) lpjFbxAnimEvalState)->GetTime(
  ));
  return ret;
}
  /// void  Reset ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimEvalState_Reset(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimEvalState)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimEvalState *) lpjFbxAnimEvalState)->Reset(
  );
}
  /// void  Begin (const FbxTime &pTime)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimEvalState_Begin(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimEvalState,jobject pTime)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimEvalState *) lpjFbxAnimEvalState)->Begin(
  (const FbxTime  &) * _lcvt.j2c_object_ref<jobject,FbxTime >(pTime)
  );
}
  /// void  Flush (FbxNode *pNode)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimEvalState_Flush(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimEvalState,jlong pNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimEvalState *) lpjFbxAnimEvalState)->Flush(
  ( FbxNode  *)  _lcvt.j2c_object_pt<jlong, FbxNode>(pNode)
  );
}
  /// void  Flush (FbxProperty &pProperty)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimEvalState_Flush1(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimEvalState,jobject pProperty)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimEvalState *) lpjFbxAnimEvalState)->Flush(
  ( FbxProperty  &) * _lcvt.j2c_object_ref<jobject,FbxProperty >(pProperty)
  );
}
  /// FbxNodeEvalState *  GetNodeEvalState (FbxNode *pNode)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimEvalState_GetNodeEvalState(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimEvalState,jlong pNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxNodeEvalState>(
  ((FbxAnimEvalState *) lpjFbxAnimEvalState)->GetNodeEvalState(
  ( FbxNode  *)  _lcvt.j2c_object_pt<jlong, FbxNode>(pNode)
  ));
  return ret;
}
  /// FbxPropertyEvalState *  GetPropertyEvalState (FbxProperty &pProperty)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimEvalState_GetPropertyEvalState(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimEvalState,jobject pProperty)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxPropertyEvalState>(
  ((FbxAnimEvalState *) lpjFbxAnimEvalState)->GetPropertyEvalState(
  ( FbxProperty  &) * _lcvt.j2c_object_ref<jobject,FbxProperty >(pProperty)
  ));
  return ret;
}
  /// FbxAnimCurveNode *  GetPropertyCurveNode (FbxProperty &pProperty, FbxAnimLayer *pAnimLayer)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimEvalState_GetPropertyCurveNode(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimEvalState,jobject pProperty,jlong pAnimLayer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAnimCurveNode>(
  ((FbxAnimEvalState *) lpjFbxAnimEvalState)->GetPropertyCurveNode(
  ( FbxProperty  &) * _lcvt.j2c_object_ref<jobject,FbxProperty >(pProperty)
  ,
  ( FbxAnimLayer  *)  _lcvt.j2c_object_pt<jlong, FbxAnimLayer>(pAnimLayer)
  ));
  return ret;
}
