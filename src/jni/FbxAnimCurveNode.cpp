//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// bool  IsAnimated (bool pRecurse=false) const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveNode_IsAnimated(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveNode,jboolean pRecurse)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveNode *) lpjFbxAnimCurveNode)->IsAnimated(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pRecurse)
  ));
  return ret;
}
  /// bool  GetAnimationInterval (FbxTimeSpan &pTimeInterval) const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveNode_GetAnimationInterval(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveNode,jobject pTimeInterval)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveNode *) lpjFbxAnimCurveNode)->GetAnimationInterval(
  ( FbxTimeSpan  &) * _lcvt.j2c_object_ref<jobject,FbxTimeSpan >(pTimeInterval)
  ));
  return ret;
}
  /// bool  IsComposite () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveNode_IsComposite(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveNode *) lpjFbxAnimCurveNode)->IsComposite(
  ));
  return ret;
}
  /// FbxAnimCurveNode *  Find (const char *pName)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimCurveNode_Find(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveNode,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAnimCurveNode>(
  ((FbxAnimCurveNode *) lpjFbxAnimCurveNode)->Find(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
  /// unsigned int  GetChannelsCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxAnimCurveNode_GetChannelsCount(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint, unsigned int  >(
  ((FbxAnimCurveNode *) lpjFbxAnimCurveNode)->GetChannelsCount(
  ));
  return ret;
}
  /// int  GetChannelIndex (const char *pChannelName) const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxAnimCurveNode_GetChannelIndex(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveNode,jstring pChannelName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxAnimCurveNode *) lpjFbxAnimCurveNode)->GetChannelIndex(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pChannelName)
  ));
  return ret;
}
  /// FbxString  GetChannelName (int pChannelId) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimCurveNode_GetChannelName(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveNode,jint pChannelId)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxString>(
  ((FbxAnimCurveNode *) lpjFbxAnimCurveNode)->GetChannelName(
  ( int  )  _lcvt.j2c<jint, int  >(pChannelId)
  ));
  return ret;
}
  /// void  ResetChannels ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAnimCurveNode_ResetChannels(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAnimCurveNode *) lpjFbxAnimCurveNode)->ResetChannels(
  );
}
  /// bool  DisconnectFromChannel (FbxAnimCurve *pCurve, unsigned int pChnlId)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveNode_DisconnectFromChannel(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveNode,jlong pCurve,jint pChnlId)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveNode *) lpjFbxAnimCurveNode)->DisconnectFromChannel(
  ( FbxAnimCurve  *)  _lcvt.j2c_object_pt<jlong, FbxAnimCurve>(pCurve)
  ,
  (unsigned int  )  _lcvt.j2c<jint,unsigned int  >(pChnlId)
  ));
  return ret;
}
  /// bool  ConnectToChannel (FbxAnimCurve *pCurve, const char *pChnl, bool pInFront=false)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveNode_ConnectToChannel(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveNode,jlong pCurve,jstring pChnl,jboolean pInFront)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveNode *) lpjFbxAnimCurveNode)->ConnectToChannel(
  ( FbxAnimCurve  *)  _lcvt.j2c_object_pt<jlong, FbxAnimCurve>(pCurve)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pChnl)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pInFront)
  ));
  return ret;
}
  /// bool  ConnectToChannel (FbxAnimCurve *pCurve, unsigned int pChnlId, bool pInFront=false)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAnimCurveNode_ConnectToChannel1(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveNode,jlong pCurve,jint pChnlId,jboolean pInFront)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAnimCurveNode *) lpjFbxAnimCurveNode)->ConnectToChannel(
  ( FbxAnimCurve  *)  _lcvt.j2c_object_pt<jlong, FbxAnimCurve>(pCurve)
  ,
  (unsigned int  )  _lcvt.j2c<jint,unsigned int  >(pChnlId)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pInFront)
  ));
  return ret;
}
  /// FbxAnimCurve *  CreateCurve (const char *pCurveNodeName, const char *pChannel)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimCurveNode_CreateCurve(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveNode,jstring pCurveNodeName,jstring pChannel)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAnimCurve>(
  ((FbxAnimCurveNode *) lpjFbxAnimCurveNode)->CreateCurve(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pCurveNodeName)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pChannel)
  ));
  return ret;
}
  /// FbxAnimCurve *  CreateCurve (const char *pCurveNodeName, unsigned int pChannelId=0)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimCurveNode_CreateCurve1(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveNode,jstring pCurveNodeName,jint pChannelId)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAnimCurve>(
  ((FbxAnimCurveNode *) lpjFbxAnimCurveNode)->CreateCurve(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pCurveNodeName)
  ,
  (unsigned int  )  _lcvt.j2c<jint,unsigned int  >(pChannelId)
  ));
  return ret;
}
  /// int  GetCurveCount (unsigned int pChannelId, const char *pCurveNodeName=NULL)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxAnimCurveNode_GetCurveCount(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveNode,jint pChannelId,jstring pCurveNodeName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxAnimCurveNode *) lpjFbxAnimCurveNode)->GetCurveCount(
  (unsigned int  )  _lcvt.j2c<jint,unsigned int  >(pChannelId)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pCurveNodeName)
  ));
  return ret;
}
  /// FbxAnimCurve *  GetCurve (unsigned int pChannelId, unsigned int pId=0, const char *pCurveNodeName=NULL)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimCurveNode_GetCurve(JNIEnv * __env, jclass __jc,jlong lpjFbxAnimCurveNode,jint pChannelId,jint pId,jstring pCurveNodeName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAnimCurve>(
  ((FbxAnimCurveNode *) lpjFbxAnimCurveNode)->GetCurve(
  (unsigned int  )  _lcvt.j2c<jint,unsigned int  >(pChannelId)
  ,
  (unsigned int  )  _lcvt.j2c<jint,unsigned int  >(pId)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pCurveNodeName)
  ));
  return ret;
}
  /// FbxAnimCurveNode * Create( FbxObject* lpFbxObject,  const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAnimCurveNode_Create(JNIEnv * __env, jclass __jc,jlong lpFbxObject,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAnimCurveNode>(
  FbxAnimCurveNode::Create(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(lpFbxObject)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
