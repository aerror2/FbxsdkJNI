//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxAMatrix &  GetNodeGlobalTransform (FbxNode *pNode, const FbxTime &pTime=FBXSDK_TIME_INFINITE, FbxNode::EPivotSet pPivotSet=FbxNode::eSourcePivot, bool pApplyTarget=false, bool pForceEval=false)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimEvaluator_GetNodeGlobalTransform(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimEvaluator,jlong pNode,jobject pTime,jint pPivotSet,jboolean pApplyTarget,jboolean pForceEval)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_ref<jlong, FbxAMatrix>(
  ((FbxAnimEvaluator *) lpjFbxAnimEvaluator)->GetNodeGlobalTransform(
  ( FbxNode  *)  _lcvt.j2c_object_pt<jlong, FbxNode>(pNode)
  ,
  (const FbxTime  &) * _lcvt.j2c_object_ref<jobject,FbxTime >(pTime)
  ,
  ( FbxNode::EPivotSet  )  _lcvt.j2c<jint,FbxNode::EPivotSet >(pPivotSet)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pApplyTarget)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pForceEval)
  ));
  return ret;
}
  /// FbxAMatrix &  GetNodeLocalTransform (FbxNode *pNode, const FbxTime &pTime=FBXSDK_TIME_INFINITE, FbxNode::EPivotSet pPivotSet=FbxNode::eSourcePivot, bool pApplyTarget=false, bool pForceEval=false)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimEvaluator_GetNodeLocalTransform(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimEvaluator,jlong pNode,jobject pTime,jint pPivotSet,jboolean pApplyTarget,jboolean pForceEval)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_ref<jlong, FbxAMatrix>(
  ((FbxAnimEvaluator *) lpjFbxAnimEvaluator)->GetNodeLocalTransform(
  ( FbxNode  *)  _lcvt.j2c_object_pt<jlong, FbxNode>(pNode)
  ,
  (const FbxTime  &) * _lcvt.j2c_object_ref<jobject,FbxTime >(pTime)
  ,
  ( FbxNode::EPivotSet  )  _lcvt.j2c<jint,FbxNode::EPivotSet >(pPivotSet)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pApplyTarget)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pForceEval)
  ));
  return ret;
}
  /// FbxVector4 &  GetNodeLocalTranslation (FbxNode *pNode, const FbxTime &pTime=FBXSDK_TIME_INFINITE, FbxNode::EPivotSet pPivotSet=FbxNode::eSourcePivot, bool pApplyTarget=false, bool pForceEval=false)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimEvaluator_GetNodeLocalTranslation(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimEvaluator,jlong pNode,jobject pTime,jint pPivotSet,jboolean pApplyTarget,jboolean pForceEval)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_ref<jlong, FbxVector4>(
  ((FbxAnimEvaluator *) lpjFbxAnimEvaluator)->GetNodeLocalTranslation(
  ( FbxNode  *)  _lcvt.j2c_object_pt<jlong, FbxNode>(pNode)
  ,
  (const FbxTime  &) * _lcvt.j2c_object_ref<jobject,FbxTime >(pTime)
  ,
  ( FbxNode::EPivotSet  )  _lcvt.j2c<jint,FbxNode::EPivotSet >(pPivotSet)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pApplyTarget)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pForceEval)
  ));
  return ret;
}
  /// FbxVector4 &  GetNodeLocalRotation (FbxNode *pNode, const FbxTime &pTime=FBXSDK_TIME_INFINITE, FbxNode::EPivotSet pPivotSet=FbxNode::eSourcePivot, bool pApplyTarget=false, bool pForceEval=false)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimEvaluator_GetNodeLocalRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimEvaluator,jlong pNode,jobject pTime,jint pPivotSet,jboolean pApplyTarget,jboolean pForceEval)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_ref<jlong, FbxVector4>(
  ((FbxAnimEvaluator *) lpjFbxAnimEvaluator)->GetNodeLocalRotation(
  ( FbxNode  *)  _lcvt.j2c_object_pt<jlong, FbxNode>(pNode)
  ,
  (const FbxTime  &) * _lcvt.j2c_object_ref<jobject,FbxTime >(pTime)
  ,
  ( FbxNode::EPivotSet  )  _lcvt.j2c<jint,FbxNode::EPivotSet >(pPivotSet)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pApplyTarget)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pForceEval)
  ));
  return ret;
}
  /// FbxVector4 &  GetNodeLocalScaling (FbxNode *pNode, const FbxTime &pTime=FBXSDK_TIME_INFINITE, FbxNode::EPivotSet pPivotSet=FbxNode::eSourcePivot, bool pApplyTarget=false, bool pForceEval=false)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimEvaluator_GetNodeLocalScaling(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimEvaluator,jlong pNode,jobject pTime,jint pPivotSet,jboolean pApplyTarget,jboolean pForceEval)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_ref<jlong, FbxVector4>(
  ((FbxAnimEvaluator *) lpjFbxAnimEvaluator)->GetNodeLocalScaling(
  ( FbxNode  *)  _lcvt.j2c_object_pt<jlong, FbxNode>(pNode)
  ,
  (const FbxTime  &) * _lcvt.j2c_object_ref<jobject,FbxTime >(pTime)
  ,
  ( FbxNode::EPivotSet  )  _lcvt.j2c<jint,FbxNode::EPivotSet >(pPivotSet)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pApplyTarget)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pForceEval)
  ));
  return ret;
}
  /// FbxPropertyValue &  GetPropertyValue (FbxProperty &pProperty, const FbxTime &pTime, bool pForceEval=false)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimEvaluator_GetPropertyValue(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimEvaluator,jobject pProperty,jobject pTime,jboolean pForceEval)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_ref<jlong, FbxPropertyValue>(
  ((FbxAnimEvaluator *) lpjFbxAnimEvaluator)->GetPropertyValue(
  ( FbxProperty  &) * _lcvt.j2c_object_ref<jobject,FbxProperty >(pProperty)
  ,
  (const FbxTime  &) * _lcvt.j2c_object_ref<jobject,FbxTime >(pTime)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pForceEval)
  ));
  return ret;
}
  /// FbxAnimCurveNode *  GetPropertyCurveNode (FbxProperty &pProperty, FbxAnimLayer *pAnimLayer)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimEvaluator_GetPropertyCurveNode(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimEvaluator,jobject pProperty,jlong pAnimLayer)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAnimCurveNode>(
  ((FbxAnimEvaluator *) lpjFbxAnimEvaluator)->GetPropertyCurveNode(
  ( FbxProperty  &) * _lcvt.j2c_object_ref<jobject,FbxProperty >(pProperty)
  ,
  ( FbxAnimLayer  *)  _lcvt.j2c_object_pt<jlong, FbxAnimLayer>(pAnimLayer)
  ));
  return ret;
}
  /// FbxTime  ValidateTime (const FbxTime &pTime)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimEvaluator_ValidateTime(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimEvaluator,jobject pTime)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxTime>(
  ((FbxAnimEvaluator *) lpjFbxAnimEvaluator)->ValidateTime(
  (const FbxTime  &) * _lcvt.j2c_object_ref<jobject,FbxTime >(pTime)
  ));
  return ret;
}
  /// void  Reset ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimEvaluator_Reset(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimEvaluator)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimEvaluator *) lpjFbxAnimEvaluator)->Reset(
  );
}
  /// void  Flush (FbxNode *pNode)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimEvaluator_Flush(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimEvaluator,jlong pNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimEvaluator *) lpjFbxAnimEvaluator)->Flush(
  ( FbxNode  *)  _lcvt.j2c_object_pt<jlong, FbxNode>(pNode)
  );
}
  /// void  Flush (FbxProperty &pProperty)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimEvaluator_Flush1(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimEvaluator,jobject pProperty)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimEvaluator *) lpjFbxAnimEvaluator)->Flush(
  ( FbxProperty  &) * _lcvt.j2c_object_ref<jobject,FbxProperty >(pProperty)
  );
}
  /// void  ComputeLocalTRSFromGlobal (FbxVector4 &pRetLT, FbxVector4 &pRetLR, FbxVector4 &pRetLS, FbxNode *pNode, FbxAMatrix &pGX, const FbxTime &pTime=FBXSDK_TIME_INFINITE, FbxNode::EPivotSet pPivotSet=FbxNode::eSourcePivot, bool pApplyTarget=false, bool pForceEval=false)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimEvaluator_ComputeLocalTRSFromGlobal(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimEvaluator,jobject pRetLT,jobject pRetLR,jobject pRetLS,jlong pNode,jobject pGX,jobject pTime,jint pPivotSet,jboolean pApplyTarget,jboolean pForceEval)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimEvaluator *) lpjFbxAnimEvaluator)->ComputeLocalTRSFromGlobal(
  ( FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pRetLT)
  ,
  ( FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pRetLR)
  ,
  ( FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pRetLS)
  ,
  ( FbxNode  *)  _lcvt.j2c_object_pt<jlong, FbxNode>(pNode)
  ,
  ( FbxAMatrix  &) * _lcvt.j2c_object_ref<jobject,FbxAMatrix >(pGX)
  ,
  (const FbxTime  &) * _lcvt.j2c_object_ref<jobject,FbxTime >(pTime)
  ,
  ( FbxNode::EPivotSet  )  _lcvt.j2c<jint,FbxNode::EPivotSet >(pPivotSet)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pApplyTarget)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pForceEval)
  );
}
  /// FbxAnimEvaluator * Create( FbxManager* lpFbxManager, const char* pName  )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimEvaluator_Create(JNIEnv * __env, jclass __jc,jlong lpFbxManager,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAnimEvaluator>(
  FbxAnimEvaluator::Create(
  ( FbxManager  *)  _lcvt.j2c_object_pt<jlong, FbxManager>(lpFbxManager)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
