//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// bool  GetAnimationInterval (FbxTimeSpan &pInterval, FbxAnimStack *pAnimStack=NULL, int pAnimLayerId=0)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxNode_GetAnimationInterval(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jobject pInterval,jlong pAnimStack,jint pAnimLayerId)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxNode *) lpjFbxNode)->GetAnimationInterval(
  ( FbxTimeSpan  &) * _lcvt.j2c_object_ref<jobject,FbxTimeSpan >(pInterval)
  ,
  ( FbxAnimStack  *)  _lcvt.j2c_object_pt<jlong, FbxAnimStack>(pAnimStack)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pAnimLayerId)
  ));
  return ret;
}
  /// FbxNode *  GetParent ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_GetParent(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxNode>(
  ((FbxNode *) lpjFbxNode)->GetParent(
  ));
  return ret;
}
  /// const FbxNode *  GetParent () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_GetParent1(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxNode>(
  ((FbxNode *) lpjFbxNode)->GetParent(
  ));
  return ret;
}
  /// bool  AddChild (FbxNode *pNode)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxNode_AddChild(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jlong pNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxNode *) lpjFbxNode)->AddChild(
  ( FbxNode  *)  _lcvt.j2c_object_pt<jlong, FbxNode>(pNode)
  ));
  return ret;
}
  /// FbxNode *  RemoveChild (FbxNode *pNode)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_RemoveChild(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jlong pNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxNode>(
  ((FbxNode *) lpjFbxNode)->RemoveChild(
  ( FbxNode  *)  _lcvt.j2c_object_pt<jlong, FbxNode>(pNode)
  ));
  return ret;
}
  /// int  GetChildCount (bool pRecursive=false) const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxNode_GetChildCount(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jboolean pRecursive)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxNode *) lpjFbxNode)->GetChildCount(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pRecursive)
  ));
  return ret;
}
  /// FbxNode *  GetChild (int pIndex)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_GetChild(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxNode>(
  ((FbxNode *) lpjFbxNode)->GetChild(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// const FbxNode *  GetChild (int pIndex) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_GetChild1(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxNode>(
  ((FbxNode *) lpjFbxNode)->GetChild(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// FbxNode *  FindChild (const char *pName, bool pRecursive=true, bool pInitial=false)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_FindChild(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jstring pName,jboolean pRecursive,jboolean pInitial)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxNode>(
  ((FbxNode *) lpjFbxNode)->FindChild(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pRecursive)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pInitial)
  ));
  return ret;
}
  /// void  SetTarget (FbxNode *pNode)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_SetTarget(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jlong pNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->SetTarget(
  ( FbxNode  *)  _lcvt.j2c_object_pt<jlong, FbxNode>(pNode)
  );
}
  /// FbxNode *  GetTarget () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_GetTarget(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxNode>(
  ((FbxNode *) lpjFbxNode)->GetTarget(
  ));
  return ret;
}
  /// void  SetPostTargetRotation (FbxVector4 pVector)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_SetPostTargetRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jlong pVector)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->SetPostTargetRotation(
  ( FbxVector4  )  _lcvt.j2c_object<jlong,FbxVector4 >(pVector)
  );
}
  /// FbxVector4  GetPostTargetRotation () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_GetPostTargetRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxVector4>(
  ((FbxNode *) lpjFbxNode)->GetPostTargetRotation(
  ));
  return ret;
}
  /// void  SetTargetUp (FbxNode *pNode)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_SetTargetUp(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jlong pNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->SetTargetUp(
  ( FbxNode  *)  _lcvt.j2c_object_pt<jlong, FbxNode>(pNode)
  );
}
  /// FbxNode *  GetTargetUp () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_GetTargetUp(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxNode>(
  ((FbxNode *) lpjFbxNode)->GetTargetUp(
  ));
  return ret;
}
  /// void  SetTargetUpVector (FbxVector4 pVector)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_SetTargetUpVector(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jlong pVector)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->SetTargetUpVector(
  ( FbxVector4  )  _lcvt.j2c_object<jlong,FbxVector4 >(pVector)
  );
}
  /// FbxVector4  GetTargetUpVector () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_GetTargetUpVector(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxVector4>(
  ((FbxNode *) lpjFbxNode)->GetTargetUpVector(
  ));
  return ret;
}
  /// FbxNodeAttribute *  SetNodeAttribute (FbxNodeAttribute *pNodeAttribute)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_SetNodeAttribute(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jlong pNodeAttribute)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxNodeAttribute>(
  ((FbxNode *) lpjFbxNode)->SetNodeAttribute(
  ( FbxNodeAttribute  *)  _lcvt.j2c_object_pt<jlong, FbxNodeAttribute>(pNodeAttribute)
  ));
  return ret;
}
  /// FbxNodeAttribute *  GetNodeAttribute ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_GetNodeAttribute(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxNodeAttribute>(
  ((FbxNode *) lpjFbxNode)->GetNodeAttribute(
  ));
  return ret;
}
  /// const FbxNodeAttribute *  GetNodeAttribute () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_GetNodeAttribute1(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxNodeAttribute>(
  ((FbxNode *) lpjFbxNode)->GetNodeAttribute(
  ));
  return ret;
}
  /// int  GetNodeAttributeCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxNode_GetNodeAttributeCount(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxNode *) lpjFbxNode)->GetNodeAttributeCount(
  ));
  return ret;
}
  /// int  GetDefaultNodeAttributeIndex () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxNode_GetDefaultNodeAttributeIndex(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxNode *) lpjFbxNode)->GetDefaultNodeAttributeIndex(
  ));
  return ret;
}
  /// bool  SetDefaultNodeAttributeIndex (int pIndex, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxNode_SetDefaultNodeAttributeIndex(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jint pIndex,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxNode *) lpjFbxNode)->SetDefaultNodeAttributeIndex(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// FbxNodeAttribute *  GetNodeAttributeByIndex (int pIndex)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_GetNodeAttributeByIndex(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxNodeAttribute>(
  ((FbxNode *) lpjFbxNode)->GetNodeAttributeByIndex(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// const FbxNodeAttribute *  GetNodeAttributeByIndex (int pIndex) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_GetNodeAttributeByIndex1(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxNodeAttribute>(
  ((FbxNode *) lpjFbxNode)->GetNodeAttributeByIndex(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// int  GetNodeAttributeIndex (FbxNodeAttribute *pNodeAttribute, FbxStatus *pStatus=NULL) const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxNode_GetNodeAttributeIndex(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jlong pNodeAttribute,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxNode *) lpjFbxNode)->GetNodeAttributeIndex(
  ( FbxNodeAttribute  *)  _lcvt.j2c_object_pt<jlong, FbxNodeAttribute>(pNodeAttribute)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// bool  AddNodeAttribute (FbxNodeAttribute *pNodeAttribute, FbxStatus *pStatus=NULL)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxNode_AddNodeAttribute(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jlong pNodeAttribute,jlong pStatus)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxNode *) lpjFbxNode)->AddNodeAttribute(
  ( FbxNodeAttribute  *)  _lcvt.j2c_object_pt<jlong, FbxNodeAttribute>(pNodeAttribute)
  ,
  ( FbxStatus  *)  _lcvt.j2c_object_pt<jlong, FbxStatus>(pStatus)
  ));
  return ret;
}
  /// FbxNodeAttribute *  RemoveNodeAttribute (FbxNodeAttribute *pNodeAttribute)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_RemoveNodeAttribute(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jlong pNodeAttribute)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxNodeAttribute>(
  ((FbxNode *) lpjFbxNode)->RemoveNodeAttribute(
  ( FbxNodeAttribute  *)  _lcvt.j2c_object_pt<jlong, FbxNodeAttribute>(pNodeAttribute)
  ));
  return ret;
}
  /// FbxNodeAttribute *  RemoveNodeAttributeByIndex (int pIndex)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_RemoveNodeAttributeByIndex(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxNodeAttribute>(
  ((FbxNode *) lpjFbxNode)->RemoveNodeAttributeByIndex(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// FbxCachedEffect *  GetCachedEffect ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_GetCachedEffect(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxCachedEffect>(
  ((FbxNode *) lpjFbxNode)->GetCachedEffect(
  ));
  return ret;
}
  /// FbxLODGroup *  GetLodGroup ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_GetLodGroup(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxLODGroup>(
  ((FbxNode *) lpjFbxNode)->GetLodGroup(
  ));
  return ret;
}
  /// FbxNull *  GetNull ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_GetNull(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxNull>(
  ((FbxNode *) lpjFbxNode)->GetNull(
  ));
  return ret;
}
  /// FbxMarker *  GetMarker ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_GetMarker(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxMarker>(
  ((FbxNode *) lpjFbxNode)->GetMarker(
  ));
  return ret;
}
  /// FbxSkeleton *  GetSkeleton ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_GetSkeleton(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxSkeleton>(
  ((FbxNode *) lpjFbxNode)->GetSkeleton(
  ));
  return ret;
}
  /// FbxGeometry *  GetGeometry ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_GetGeometry(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxGeometry>(
  ((FbxNode *) lpjFbxNode)->GetGeometry(
  ));
  return ret;
}
  /// FbxMesh *  GetMesh ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_GetMesh(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxMesh>(
  ((FbxNode *) lpjFbxNode)->GetMesh(
  ));
  return ret;
}
  /// FbxNurbs *  GetNurbs ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_GetNurbs(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxNurbs>(
  ((FbxNode *) lpjFbxNode)->GetNurbs(
  ));
  return ret;
}
  /// FbxNurbsSurface *  GetNurbsSurface ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_GetNurbsSurface(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxNurbsSurface>(
  ((FbxNode *) lpjFbxNode)->GetNurbsSurface(
  ));
  return ret;
}
  /// FbxNurbsCurve *  GetNurbsCurve ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_GetNurbsCurve(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxNurbsCurve>(
  ((FbxNode *) lpjFbxNode)->GetNurbsCurve(
  ));
  return ret;
}
  /// FbxLine *  GetLine ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_GetLine(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxLine>(
  ((FbxNode *) lpjFbxNode)->GetLine(
  ));
  return ret;
}
  /// FbxTrimNurbsSurface *  GetTrimNurbsSurface ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_GetTrimNurbsSurface(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxTrimNurbsSurface>(
  ((FbxNode *) lpjFbxNode)->GetTrimNurbsSurface(
  ));
  return ret;
}
  /// FbxSubDiv *  GetSubdiv ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_GetSubdiv(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxSubDiv>(
  ((FbxNode *) lpjFbxNode)->GetSubdiv(
  ));
  return ret;
}
  /// FbxPatch *  GetPatch ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_GetPatch(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxPatch>(
  ((FbxNode *) lpjFbxNode)->GetPatch(
  ));
  return ret;
}
  /// FbxCamera *  GetCamera ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_GetCamera(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxCamera>(
  ((FbxNode *) lpjFbxNode)->GetCamera(
  ));
  return ret;
}
  /// const FbxCamera *  GetCamera () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_GetCamera1(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxCamera>(
  ((FbxNode *) lpjFbxNode)->GetCamera(
  ));
  return ret;
}
  /// FbxCameraStereo *  GetCameraStereo ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_GetCameraStereo(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxCameraStereo>(
  ((FbxNode *) lpjFbxNode)->GetCameraStereo(
  ));
  return ret;
}
  /// FbxCameraSwitcher *  GetCameraSwitcher ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_GetCameraSwitcher(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxCameraSwitcher>(
  ((FbxNode *) lpjFbxNode)->GetCameraSwitcher(
  ));
  return ret;
}
  /// FbxLight *  GetLight ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_GetLight(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxLight>(
  ((FbxNode *) lpjFbxNode)->GetLight(
  ));
  return ret;
}
  /// const FbxLight *  GetLight () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_GetLight1(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxLight>(
  ((FbxNode *) lpjFbxNode)->GetLight(
  ));
  return ret;
}
  /// FbxOpticalReference *  GetOpticalReference ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_GetOpticalReference(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxOpticalReference>(
  ((FbxNode *) lpjFbxNode)->GetOpticalReference(
  ));
  return ret;
}
  /// void  SetTransformationInheritType (FbxTransform::EInheritType pInheritType)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_SetTransformationInheritType(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jint pInheritType)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->SetTransformationInheritType(
  ( FbxTransform::EInheritType  )  _lcvt.j2c<jint,FbxTransform::EInheritType >(pInheritType)
  );
}
  /// void  GetTransformationInheritType (FbxTransform::EInheritType &pInheritType) const
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_GetTransformationInheritType(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jobject pInheritType)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->GetTransformationInheritType(
  ( FbxTransform::EInheritType  &) * _lcvt.j2c_int_ref<jobject,FbxTransform::EInheritType>(pInheritType)
  );
}
  /// FbxAMatrix &  EvaluateGlobalTransform (FbxTime pTime=FBXSDK_TIME_INFINITE, FbxNode::EPivotSet pPivotSet=FbxNode::eSourcePivot, bool pApplyTarget=false, bool pForceEval=false)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_EvaluateGlobalTransform(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jlong pTime,jint pPivotSet,jboolean pApplyTarget,jboolean pForceEval)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_ref<jlong, FbxAMatrix>(
  ((FbxNode *) lpjFbxNode)->EvaluateGlobalTransform(
  ( FbxTime  )  _lcvt.j2c_object<jlong,FbxTime >(pTime)
  ,
  ( FbxNode::EPivotSet  )  _lcvt.j2c<jint,FbxNode::EPivotSet >(pPivotSet)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pApplyTarget)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pForceEval)
  ));
  return ret;
}
  /// FbxAMatrix &  EvaluateLocalTransform (FbxTime pTime=FBXSDK_TIME_INFINITE, FbxNode::EPivotSet pPivotSet=FbxNode::eSourcePivot, bool pApplyTarget=false, bool pForceEval=false)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_EvaluateLocalTransform(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jlong pTime,jint pPivotSet,jboolean pApplyTarget,jboolean pForceEval)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_ref<jlong, FbxAMatrix>(
  ((FbxNode *) lpjFbxNode)->EvaluateLocalTransform(
  ( FbxTime  )  _lcvt.j2c_object<jlong,FbxTime >(pTime)
  ,
  ( FbxNode::EPivotSet  )  _lcvt.j2c<jint,FbxNode::EPivotSet >(pPivotSet)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pApplyTarget)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pForceEval)
  ));
  return ret;
}
  /// FbxVector4 &  EvaluateLocalTranslation (FbxTime pTime=FBXSDK_TIME_INFINITE, FbxNode::EPivotSet pPivotSet=FbxNode::eSourcePivot, bool pApplyTarget=false, bool pForceEval=false)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_EvaluateLocalTranslation(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jlong pTime,jint pPivotSet,jboolean pApplyTarget,jboolean pForceEval)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_ref<jlong, FbxVector4>(
  ((FbxNode *) lpjFbxNode)->EvaluateLocalTranslation(
  ( FbxTime  )  _lcvt.j2c_object<jlong,FbxTime >(pTime)
  ,
  ( FbxNode::EPivotSet  )  _lcvt.j2c<jint,FbxNode::EPivotSet >(pPivotSet)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pApplyTarget)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pForceEval)
  ));
  return ret;
}
  /// FbxVector4 &  EvaluateLocalRotation (FbxTime pTime=FBXSDK_TIME_INFINITE, FbxNode::EPivotSet pPivotSet=FbxNode::eSourcePivot, bool pApplyTarget=false, bool pForceEval=false)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_EvaluateLocalRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jlong pTime,jint pPivotSet,jboolean pApplyTarget,jboolean pForceEval)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_ref<jlong, FbxVector4>(
  ((FbxNode *) lpjFbxNode)->EvaluateLocalRotation(
  ( FbxTime  )  _lcvt.j2c_object<jlong,FbxTime >(pTime)
  ,
  ( FbxNode::EPivotSet  )  _lcvt.j2c<jint,FbxNode::EPivotSet >(pPivotSet)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pApplyTarget)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pForceEval)
  ));
  return ret;
}
  /// FbxVector4 &  EvaluateLocalScaling (FbxTime pTime=FBXSDK_TIME_INFINITE, FbxNode::EPivotSet pPivotSet=FbxNode::eSourcePivot, bool pApplyTarget=false, bool pForceEval=false)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_EvaluateLocalScaling(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jlong pTime,jint pPivotSet,jboolean pApplyTarget,jboolean pForceEval)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_ref<jlong, FbxVector4>(
  ((FbxNode *) lpjFbxNode)->EvaluateLocalScaling(
  ( FbxTime  )  _lcvt.j2c_object<jlong,FbxTime >(pTime)
  ,
  ( FbxNode::EPivotSet  )  _lcvt.j2c<jint,FbxNode::EPivotSet >(pPivotSet)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pApplyTarget)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pForceEval)
  ));
  return ret;
}
  /// bool  EvaluateGlobalBoundingBoxMinMaxCenter (FbxVector4 &pBBoxMin, FbxVector4 &pBBoxMax, FbxVector4 &pBBoxCenter, const FbxTime &pTime=FBXSDK_TIME_INFINITE)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxNode_EvaluateGlobalBoundingBoxMinMaxCenter(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jobject pBBoxMin,jobject pBBoxMax,jobject pBBoxCenter,jobject pTime)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxNode *) lpjFbxNode)->EvaluateGlobalBoundingBoxMinMaxCenter(
  ( FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pBBoxMin)
  ,
  ( FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pBBoxMax)
  ,
  ( FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pBBoxCenter)
  ,
  (const FbxTime  &) * _lcvt.j2c_object_ref<jobject,FbxTime >(pTime)
  ));
  return ret;
}
  /// int  GetCharacterLinkCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxNode_GetCharacterLinkCount(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxNode *) lpjFbxNode)->GetCharacterLinkCount(
  ));
  return ret;
}
  /// bool  GetCharacterLink (int pIndex, FbxCharacter **pCharacter, int *pCharacterLinkType, int *pNodeId, int *pNodeSubId)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxNode_GetCharacterLink(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jint pIndex,jlongArray pCharacter,jintArray pCharacterLinkType,jintArray pNodeId,jintArray pNodeSubId)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxNode *) lpjFbxNode)->GetCharacterLink(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ,
  ( FbxCharacter  **)  _lcvt.j2c_object_ppt<jlongArray,FbxCharacter>(pCharacter)
  ,
  ( int  *)  _lcvt.j2c_int_pt<jintArray,int>(pCharacterLinkType)
  ,
  ( int  *)  _lcvt.j2c_int_pt<jintArray,int>(pNodeId)
  ,
  ( int  *)  _lcvt.j2c_int_pt<jintArray,int>(pNodeSubId)
  ));
  return ret;
}
  /// int  FindCharacterLink (FbxCharacter *pCharacter, int pCharacterLinkType, int pNodeId, int pNodeSubId) const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxNode_FindCharacterLink(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jlong pCharacter,jint pCharacterLinkType,jint pNodeId,jint pNodeSubId)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxNode *) lpjFbxNode)->FindCharacterLink(
  ( FbxCharacter  *)  _lcvt.j2c_object_pt<jlong, FbxCharacter>(pCharacter)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pCharacterLinkType)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pNodeId)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pNodeSubId)
  ));
  return ret;
}
  /// int  AddMaterial (FbxSurfaceMaterial *pMaterial)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxNode_AddMaterial(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jlong pMaterial)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxNode *) lpjFbxNode)->AddMaterial(
  ( FbxSurfaceMaterial  *)  _lcvt.j2c_object_pt<jlong, FbxSurfaceMaterial>(pMaterial)
  ));
  return ret;
}
  /// bool  RemoveMaterial (FbxSurfaceMaterial *pMaterial)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxNode_RemoveMaterial(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jlong pMaterial)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxNode *) lpjFbxNode)->RemoveMaterial(
  ( FbxSurfaceMaterial  *)  _lcvt.j2c_object_pt<jlong, FbxSurfaceMaterial>(pMaterial)
  ));
  return ret;
}
  /// int  GetMaterialCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxNode_GetMaterialCount(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxNode *) lpjFbxNode)->GetMaterialCount(
  ));
  return ret;
}
  /// FbxSurfaceMaterial *  GetMaterial (int pIndex) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_GetMaterial(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxSurfaceMaterial>(
  ((FbxNode *) lpjFbxNode)->GetMaterial(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// void  RemoveAllMaterials ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_RemoveAllMaterials(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->RemoveAllMaterials(
  );
}
  /// int  GetMaterialIndex (const char *pName) const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxNode_GetMaterialIndex(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxNode *) lpjFbxNode)->GetMaterialIndex(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
  /// void  SetVisibility (bool pIsVisible)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_SetVisibility(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jboolean pIsVisible)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->SetVisibility(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pIsVisible)
  );
}
  /// bool  GetVisibility () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxNode_GetVisibility(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxNode *) lpjFbxNode)->GetVisibility(
  ));
  return ret;
}
  /// void  SetShadingMode (EShadingMode pShadingMode)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_SetShadingMode(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jint pShadingMode)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->SetShadingMode(
  ( FbxNode::EShadingMode  )  _lcvt.j2c<jint,FbxNode::EShadingMode >(pShadingMode)
  );
}
  /// EShadingMode  GetShadingMode () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxNode_GetShadingMode(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxNode::EShadingMode  >(
  ((FbxNode *) lpjFbxNode)->GetShadingMode(
  ));
  return ret;
}
  /// void  SetPivotState (EPivotSet pPivotSet, EPivotState pPivotState)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_SetPivotState(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jint pPivotSet,jint pPivotState)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->SetPivotState(
  ( FbxNode::EPivotSet  )  _lcvt.j2c<jint,FbxNode::EPivotSet >(pPivotSet)
  ,
  ( FbxNode::EPivotState  )  _lcvt.j2c<jint,FbxNode::EPivotState >(pPivotState)
  );
}
  /// void  GetPivotState (EPivotSet pPivotSet, EPivotState &pPivotState) const
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_GetPivotState(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jint pPivotSet,jobject pPivotState)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->GetPivotState(
  ( FbxNode::EPivotSet  )  _lcvt.j2c<jint,FbxNode::EPivotSet >(pPivotSet)
  ,
  ( FbxNode::EPivotState  &) * _lcvt.j2c_int_ref<jobject,FbxNode::EPivotState>(pPivotState)
  );
}
  /// void  SetRotationOrder (EPivotSet pPivotSet, EFbxRotationOrder pRotationOrder)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_SetRotationOrder(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jint pPivotSet,jint pRotationOrder)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->SetRotationOrder(
  ( FbxNode::EPivotSet  )  _lcvt.j2c<jint,FbxNode::EPivotSet >(pPivotSet)
  ,
  ( EFbxRotationOrder  )  _lcvt.j2c<jint,EFbxRotationOrder >(pRotationOrder)
  );
}
  /// void  GetRotationOrder (EPivotSet pPivotSet, EFbxRotationOrder &pRotationOrder) const
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_GetRotationOrder(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jint pPivotSet,jobject pRotationOrder)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->GetRotationOrder(
  ( FbxNode::EPivotSet  )  _lcvt.j2c<jint,FbxNode::EPivotSet >(pPivotSet)
  ,
  ( EFbxRotationOrder  &) * _lcvt.j2c_int_ref<jobject,EFbxRotationOrder>(pRotationOrder)
  );
}
  /// void  SetUseRotationSpaceForLimitOnly (EPivotSet pPivotSet, bool pUseForLimitOnly)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_SetUseRotationSpaceForLimitOnly(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jint pPivotSet,jboolean pUseForLimitOnly)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->SetUseRotationSpaceForLimitOnly(
  ( FbxNode::EPivotSet  )  _lcvt.j2c<jint,FbxNode::EPivotSet >(pPivotSet)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pUseForLimitOnly)
  );
}
  /// bool  GetUseRotationSpaceForLimitOnly (EPivotSet pPivotSet) const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxNode_GetUseRotationSpaceForLimitOnly(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jint pPivotSet)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxNode *) lpjFbxNode)->GetUseRotationSpaceForLimitOnly(
  ( FbxNode::EPivotSet  )  _lcvt.j2c<jint,FbxNode::EPivotSet >(pPivotSet)
  ));
  return ret;
}
  /// void  SetRotationActive (bool pVal)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_SetRotationActive(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jboolean pVal)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->SetRotationActive(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pVal)
  );
}
  /// bool  GetRotationActive () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxNode_GetRotationActive(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxNode *) lpjFbxNode)->GetRotationActive(
  ));
  return ret;
}
  /// void  SetQuaternionInterpolation (EPivotSet pPivotSet, EFbxQuatInterpMode pQuatIterp)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_SetQuaternionInterpolation(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jint pPivotSet,jint pQuatIterp)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->SetQuaternionInterpolation(
  ( FbxNode::EPivotSet  )  _lcvt.j2c<jint,FbxNode::EPivotSet >(pPivotSet)
  ,
  ( EFbxQuatInterpMode  )  _lcvt.j2c<jint,EFbxQuatInterpMode >(pQuatIterp)
  );
}
  /// EFbxQuatInterpMode  GetQuaternionInterpolation (EPivotSet pPivotSet) const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxNode_GetQuaternionInterpolation(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jint pPivotSet)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  EFbxQuatInterpMode  >(
  ((FbxNode *) lpjFbxNode)->GetQuaternionInterpolation(
  ( FbxNode::EPivotSet  )  _lcvt.j2c<jint,FbxNode::EPivotSet >(pPivotSet)
  ));
  return ret;
}
  /// void  SetRotationStiffness (FbxVector4 pRotationStiffness)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_SetRotationStiffness(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jlong pRotationStiffness)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->SetRotationStiffness(
  ( FbxVector4  )  _lcvt.j2c_object<jlong,FbxVector4 >(pRotationStiffness)
  );
}
  /// FbxVector4  GetRotationStiffness () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_GetRotationStiffness(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxVector4>(
  ((FbxNode *) lpjFbxNode)->GetRotationStiffness(
  ));
  return ret;
}
  /// void  SetMinDampRange (FbxVector4 pMinDampRange)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_SetMinDampRange(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jlong pMinDampRange)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->SetMinDampRange(
  ( FbxVector4  )  _lcvt.j2c_object<jlong,FbxVector4 >(pMinDampRange)
  );
}
  /// FbxVector4  GetMinDampRange () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_GetMinDampRange(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxVector4>(
  ((FbxNode *) lpjFbxNode)->GetMinDampRange(
  ));
  return ret;
}
  /// void  SetMaxDampRange (FbxVector4 pMaxDampRange)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_SetMaxDampRange(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jlong pMaxDampRange)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->SetMaxDampRange(
  ( FbxVector4  )  _lcvt.j2c_object<jlong,FbxVector4 >(pMaxDampRange)
  );
}
  /// FbxVector4  GetMaxDampRange () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_GetMaxDampRange(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxVector4>(
  ((FbxNode *) lpjFbxNode)->GetMaxDampRange(
  ));
  return ret;
}
  /// void  SetMinDampStrength (FbxVector4 pMinDampStrength)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_SetMinDampStrength(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jlong pMinDampStrength)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->SetMinDampStrength(
  ( FbxVector4  )  _lcvt.j2c_object<jlong,FbxVector4 >(pMinDampStrength)
  );
}
  /// FbxVector4  GetMinDampStrength () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_GetMinDampStrength(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxVector4>(
  ((FbxNode *) lpjFbxNode)->GetMinDampStrength(
  ));
  return ret;
}
  /// void  SetMaxDampStrength (FbxVector4 pMaxDampStrength)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_SetMaxDampStrength(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jlong pMaxDampStrength)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->SetMaxDampStrength(
  ( FbxVector4  )  _lcvt.j2c_object<jlong,FbxVector4 >(pMaxDampStrength)
  );
}
  /// FbxVector4  GetMaxDampStrength () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_GetMaxDampStrength(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxVector4>(
  ((FbxNode *) lpjFbxNode)->GetMaxDampStrength(
  ));
  return ret;
}
  /// void  SetPreferedAngle (FbxVector4 pPreferedAngle)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_SetPreferedAngle(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jlong pPreferedAngle)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->SetPreferedAngle(
  ( FbxVector4  )  _lcvt.j2c_object<jlong,FbxVector4 >(pPreferedAngle)
  );
}
  /// FbxVector4  GetPreferedAngle () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_GetPreferedAngle(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxVector4>(
  ((FbxNode *) lpjFbxNode)->GetPreferedAngle(
  ));
  return ret;
}
  /// void  SetRotationOffset (EPivotSet pPivotSet, FbxVector4 pVector)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_SetRotationOffset(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jint pPivotSet,jlong pVector)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->SetRotationOffset(
  ( FbxNode::EPivotSet  )  _lcvt.j2c<jint,FbxNode::EPivotSet >(pPivotSet)
  ,
  ( FbxVector4  )  _lcvt.j2c_object<jlong,FbxVector4 >(pVector)
  );
}
  /// const FbxVector4 &  GetRotationOffset (EPivotSet pPivotSet) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_GetRotationOffset(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jint pPivotSet)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_ref<jlong, FbxVector4>(
  ((FbxNode *) lpjFbxNode)->GetRotationOffset(
  ( FbxNode::EPivotSet  )  _lcvt.j2c<jint,FbxNode::EPivotSet >(pPivotSet)
  ));
  return ret;
}
  /// void  SetRotationPivot (EPivotSet pPivotSet, FbxVector4 pVector)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_SetRotationPivot(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jint pPivotSet,jlong pVector)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->SetRotationPivot(
  ( FbxNode::EPivotSet  )  _lcvt.j2c<jint,FbxNode::EPivotSet >(pPivotSet)
  ,
  ( FbxVector4  )  _lcvt.j2c_object<jlong,FbxVector4 >(pVector)
  );
}
  /// const FbxVector4 &  GetRotationPivot (EPivotSet pPivotSet) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_GetRotationPivot(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jint pPivotSet)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_ref<jlong, FbxVector4>(
  ((FbxNode *) lpjFbxNode)->GetRotationPivot(
  ( FbxNode::EPivotSet  )  _lcvt.j2c<jint,FbxNode::EPivotSet >(pPivotSet)
  ));
  return ret;
}
  /// void  SetPreRotation (EPivotSet pPivotSet, FbxVector4 pVector)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_SetPreRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jint pPivotSet,jlong pVector)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->SetPreRotation(
  ( FbxNode::EPivotSet  )  _lcvt.j2c<jint,FbxNode::EPivotSet >(pPivotSet)
  ,
  ( FbxVector4  )  _lcvt.j2c_object<jlong,FbxVector4 >(pVector)
  );
}
  /// const FbxVector4 &  GetPreRotation (EPivotSet pPivotSet) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_GetPreRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jint pPivotSet)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_ref<jlong, FbxVector4>(
  ((FbxNode *) lpjFbxNode)->GetPreRotation(
  ( FbxNode::EPivotSet  )  _lcvt.j2c<jint,FbxNode::EPivotSet >(pPivotSet)
  ));
  return ret;
}
  /// void  SetPostRotation (EPivotSet pPivotSet, FbxVector4 pVector)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_SetPostRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jint pPivotSet,jlong pVector)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->SetPostRotation(
  ( FbxNode::EPivotSet  )  _lcvt.j2c<jint,FbxNode::EPivotSet >(pPivotSet)
  ,
  ( FbxVector4  )  _lcvt.j2c_object<jlong,FbxVector4 >(pVector)
  );
}
  /// const FbxVector4 &  GetPostRotation (EPivotSet pPivotSet) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_GetPostRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jint pPivotSet)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_ref<jlong, FbxVector4>(
  ((FbxNode *) lpjFbxNode)->GetPostRotation(
  ( FbxNode::EPivotSet  )  _lcvt.j2c<jint,FbxNode::EPivotSet >(pPivotSet)
  ));
  return ret;
}
  /// void  SetScalingOffset (EPivotSet pPivotSet, FbxVector4 pVector)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_SetScalingOffset(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jint pPivotSet,jlong pVector)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->SetScalingOffset(
  ( FbxNode::EPivotSet  )  _lcvt.j2c<jint,FbxNode::EPivotSet >(pPivotSet)
  ,
  ( FbxVector4  )  _lcvt.j2c_object<jlong,FbxVector4 >(pVector)
  );
}
  /// const FbxVector4 &  GetScalingOffset (EPivotSet pPivotSet) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_GetScalingOffset(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jint pPivotSet)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_ref<jlong, FbxVector4>(
  ((FbxNode *) lpjFbxNode)->GetScalingOffset(
  ( FbxNode::EPivotSet  )  _lcvt.j2c<jint,FbxNode::EPivotSet >(pPivotSet)
  ));
  return ret;
}
  /// void  SetScalingPivot (EPivotSet pPivotSet, FbxVector4 pVector)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_SetScalingPivot(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jint pPivotSet,jlong pVector)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->SetScalingPivot(
  ( FbxNode::EPivotSet  )  _lcvt.j2c<jint,FbxNode::EPivotSet >(pPivotSet)
  ,
  ( FbxVector4  )  _lcvt.j2c_object<jlong,FbxVector4 >(pVector)
  );
}
  /// const FbxVector4 &  GetScalingPivot (EPivotSet pPivotSet) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_GetScalingPivot(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jint pPivotSet)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_ref<jlong, FbxVector4>(
  ((FbxNode *) lpjFbxNode)->GetScalingPivot(
  ( FbxNode::EPivotSet  )  _lcvt.j2c<jint,FbxNode::EPivotSet >(pPivotSet)
  ));
  return ret;
}
  /// void  SetGeometricTranslation (EPivotSet pPivotSet, FbxVector4 pVector)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_SetGeometricTranslation(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jint pPivotSet,jlong pVector)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->SetGeometricTranslation(
  ( FbxNode::EPivotSet  )  _lcvt.j2c<jint,FbxNode::EPivotSet >(pPivotSet)
  ,
  ( FbxVector4  )  _lcvt.j2c_object<jlong,FbxVector4 >(pVector)
  );
}
  /// FbxVector4  GetGeometricTranslation (EPivotSet pPivotSet) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_GetGeometricTranslation(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jint pPivotSet)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxVector4>(
  ((FbxNode *) lpjFbxNode)->GetGeometricTranslation(
  ( FbxNode::EPivotSet  )  _lcvt.j2c<jint,FbxNode::EPivotSet >(pPivotSet)
  ));
  return ret;
}
  /// void  SetGeometricRotation (EPivotSet pPivotSet, FbxVector4 pVector)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_SetGeometricRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jint pPivotSet,jlong pVector)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->SetGeometricRotation(
  ( FbxNode::EPivotSet  )  _lcvt.j2c<jint,FbxNode::EPivotSet >(pPivotSet)
  ,
  ( FbxVector4  )  _lcvt.j2c_object<jlong,FbxVector4 >(pVector)
  );
}
  /// FbxVector4  GetGeometricRotation (EPivotSet pPivotSet) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_GetGeometricRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jint pPivotSet)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxVector4>(
  ((FbxNode *) lpjFbxNode)->GetGeometricRotation(
  ( FbxNode::EPivotSet  )  _lcvt.j2c<jint,FbxNode::EPivotSet >(pPivotSet)
  ));
  return ret;
}
  /// void  SetGeometricScaling (EPivotSet pPivotSet, FbxVector4 pVector)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_SetGeometricScaling(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jint pPivotSet,jlong pVector)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->SetGeometricScaling(
  ( FbxNode::EPivotSet  )  _lcvt.j2c<jint,FbxNode::EPivotSet >(pPivotSet)
  ,
  ( FbxVector4  )  _lcvt.j2c_object<jlong,FbxVector4 >(pVector)
  );
}
  /// FbxVector4  GetGeometricScaling (EPivotSet pPivotSet) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_GetGeometricScaling(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jint pPivotSet)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxVector4>(
  ((FbxNode *) lpjFbxNode)->GetGeometricScaling(
  ( FbxNode::EPivotSet  )  _lcvt.j2c<jint,FbxNode::EPivotSet >(pPivotSet)
  ));
  return ret;
}
  /// void  ResetPivotSet (FbxNode::EPivotSet pPivotSet)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_ResetPivotSet(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jint pPivotSet)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->ResetPivotSet(
  ( FbxNode::EPivotSet  )  _lcvt.j2c<jint,FbxNode::EPivotSet >(pPivotSet)
  );
}
  /// void  ConvertPivotAnimationRecursive (FbxAnimStack *pAnimStack, EPivotSet pConversionTarget, double pFrameRate, bool pKeyReduce=true)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_ConvertPivotAnimationRecursive(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jlong pAnimStack,jint pConversionTarget,jdouble pFrameRate,jboolean pKeyReduce)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->ConvertPivotAnimationRecursive(
  ( FbxAnimStack  *)  _lcvt.j2c_object_pt<jlong, FbxAnimStack>(pAnimStack)
  ,
  ( FbxNode::EPivotSet  )  _lcvt.j2c<jint,FbxNode::EPivotSet >(pConversionTarget)
  ,
  ( double  )  _lcvt.j2c<jdouble, double  >(pFrameRate)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pKeyReduce)
  );
}
  /// void  ResetPivotSetAndConvertAnimation (double pFrameRate=30.0, bool pKeyReduce=false, bool pToNodeCenter=true, bool pForceResetLimits=false)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_ResetPivotSetAndConvertAnimation(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jdouble pFrameRate,jboolean pKeyReduce,jboolean pToNodeCenter,jboolean pForceResetLimits)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->ResetPivotSetAndConvertAnimation(
  ( double  )  _lcvt.j2c<jdouble, double  >(pFrameRate)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pKeyReduce)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pToNodeCenter)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pForceResetLimits)
  );
}
  /// void  SetRotationPivotAsCenterRecursive (FbxVector4 pParentGeometricOffset=FbxVector4())
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_SetRotationPivotAsCenterRecursive(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jlong pParentGeometricOffset)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->SetRotationPivotAsCenterRecursive(
  ( FbxVector4  )  _lcvt.j2c_object<jlong,FbxVector4 >(pParentGeometricOffset)
  );
}
  /// FbxPropertyT< FbxDouble3 >  LclTranslation
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_mepSetLclTranslation(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jlong lpFbxDouble3)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->LclTranslation.Set(
  ( FbxDouble3  )  _lcvt.j2c_object<jlong,FbxDouble3 >(lpFbxDouble3)
  );
}
  /// FbxPropertyT< FbxDouble3 >  LclTranslation
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mepGetLclTranslation(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxDouble3>(
  ((FbxNode *) lpjFbxNode)->LclTranslation.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  LclTranslation
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mptGetLclTranslation(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble3   >(
   (&((FbxNode *) lpjFbxNode)->LclTranslation
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  LclRotation
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_mepSetLclRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jlong lpFbxDouble3)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->LclRotation.Set(
  ( FbxDouble3  )  _lcvt.j2c_object<jlong,FbxDouble3 >(lpFbxDouble3)
  );
}
  /// FbxPropertyT< FbxDouble3 >  LclRotation
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mepGetLclRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxDouble3>(
  ((FbxNode *) lpjFbxNode)->LclRotation.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  LclRotation
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mptGetLclRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble3   >(
   (&((FbxNode *) lpjFbxNode)->LclRotation
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  LclScaling
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_mepSetLclScaling(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jlong lpFbxDouble3)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->LclScaling.Set(
  ( FbxDouble3  )  _lcvt.j2c_object<jlong,FbxDouble3 >(lpFbxDouble3)
  );
}
  /// FbxPropertyT< FbxDouble3 >  LclScaling
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mepGetLclScaling(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxDouble3>(
  ((FbxNode *) lpjFbxNode)->LclScaling.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  LclScaling
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mptGetLclScaling(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble3   >(
   (&((FbxNode *) lpjFbxNode)->LclScaling
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  Visibility
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_mepSetVisibility(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->Visibility.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  Visibility
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxNode_mepGetVisibility(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxNode *) lpjFbxNode)->Visibility.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  Visibility
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mptGetVisibility(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxNode *) lpjFbxNode)->Visibility
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  VisibilityInheritance
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_mepSetVisibilityInheritance(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->VisibilityInheritance.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  VisibilityInheritance
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxNode_mepGetVisibilityInheritance(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxNode *) lpjFbxNode)->VisibilityInheritance.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  VisibilityInheritance
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mptGetVisibilityInheritance(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxNode *) lpjFbxNode)->VisibilityInheritance
  ));
  return ret;
}
  /// FbxPropertyT< EFbxQuatInterpMode >  QuaternionInterpolate
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_mepSetQuaternionInterpolate(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jint lpEFbxQuatInterpMode)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->QuaternionInterpolate.Set(
  ( EFbxQuatInterpMode  )  _lcvt.j2c<jint,EFbxQuatInterpMode >(lpEFbxQuatInterpMode)
  );
}
  /// FbxPropertyT< EFbxQuatInterpMode >  QuaternionInterpolate
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxNode_mepGetQuaternionInterpolate(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  EFbxQuatInterpMode  >(
  ((FbxNode *) lpjFbxNode)->QuaternionInterpolate.Get(
  ));
  return ret;
}
  /// FbxPropertyT< EFbxQuatInterpMode >  QuaternionInterpolate
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mptGetQuaternionInterpolate(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  EFbxQuatInterpMode   >(
   (&((FbxNode *) lpjFbxNode)->QuaternionInterpolate
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  RotationOffset
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_mepSetRotationOffset(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jlong lpFbxDouble3)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->RotationOffset.Set(
  ( FbxDouble3  )  _lcvt.j2c_object<jlong,FbxDouble3 >(lpFbxDouble3)
  );
}
  /// FbxPropertyT< FbxDouble3 >  RotationOffset
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mepGetRotationOffset(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxDouble3>(
  ((FbxNode *) lpjFbxNode)->RotationOffset.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  RotationOffset
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mptGetRotationOffset(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble3   >(
   (&((FbxNode *) lpjFbxNode)->RotationOffset
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  RotationPivot
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_mepSetRotationPivot(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jlong lpFbxDouble3)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->RotationPivot.Set(
  ( FbxDouble3  )  _lcvt.j2c_object<jlong,FbxDouble3 >(lpFbxDouble3)
  );
}
  /// FbxPropertyT< FbxDouble3 >  RotationPivot
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mepGetRotationPivot(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxDouble3>(
  ((FbxNode *) lpjFbxNode)->RotationPivot.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  RotationPivot
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mptGetRotationPivot(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble3   >(
   (&((FbxNode *) lpjFbxNode)->RotationPivot
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  ScalingOffset
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_mepSetScalingOffset(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jlong lpFbxDouble3)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->ScalingOffset.Set(
  ( FbxDouble3  )  _lcvt.j2c_object<jlong,FbxDouble3 >(lpFbxDouble3)
  );
}
  /// FbxPropertyT< FbxDouble3 >  ScalingOffset
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mepGetScalingOffset(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxDouble3>(
  ((FbxNode *) lpjFbxNode)->ScalingOffset.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  ScalingOffset
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mptGetScalingOffset(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble3   >(
   (&((FbxNode *) lpjFbxNode)->ScalingOffset
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  ScalingPivot
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_mepSetScalingPivot(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jlong lpFbxDouble3)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->ScalingPivot.Set(
  ( FbxDouble3  )  _lcvt.j2c_object<jlong,FbxDouble3 >(lpFbxDouble3)
  );
}
  /// FbxPropertyT< FbxDouble3 >  ScalingPivot
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mepGetScalingPivot(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxDouble3>(
  ((FbxNode *) lpjFbxNode)->ScalingPivot.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  ScalingPivot
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mptGetScalingPivot(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble3   >(
   (&((FbxNode *) lpjFbxNode)->ScalingPivot
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  TranslationActive
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_mepSetTranslationActive(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->TranslationActive.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  TranslationActive
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxNode_mepGetTranslationActive(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxNode *) lpjFbxNode)->TranslationActive.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  TranslationActive
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mptGetTranslationActive(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxNode *) lpjFbxNode)->TranslationActive
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  TranslationMin
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_mepSetTranslationMin(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jlong lpFbxDouble3)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->TranslationMin.Set(
  ( FbxDouble3  )  _lcvt.j2c_object<jlong,FbxDouble3 >(lpFbxDouble3)
  );
}
  /// FbxPropertyT< FbxDouble3 >  TranslationMin
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mepGetTranslationMin(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxDouble3>(
  ((FbxNode *) lpjFbxNode)->TranslationMin.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  TranslationMin
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mptGetTranslationMin(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble3   >(
   (&((FbxNode *) lpjFbxNode)->TranslationMin
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  TranslationMax
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_mepSetTranslationMax(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jlong lpFbxDouble3)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->TranslationMax.Set(
  ( FbxDouble3  )  _lcvt.j2c_object<jlong,FbxDouble3 >(lpFbxDouble3)
  );
}
  /// FbxPropertyT< FbxDouble3 >  TranslationMax
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mepGetTranslationMax(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxDouble3>(
  ((FbxNode *) lpjFbxNode)->TranslationMax.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  TranslationMax
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mptGetTranslationMax(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble3   >(
   (&((FbxNode *) lpjFbxNode)->TranslationMax
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  TranslationMinX
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_mepSetTranslationMinX(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->TranslationMinX.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  TranslationMinX
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxNode_mepGetTranslationMinX(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxNode *) lpjFbxNode)->TranslationMinX.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  TranslationMinX
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mptGetTranslationMinX(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxNode *) lpjFbxNode)->TranslationMinX
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  TranslationMinY
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_mepSetTranslationMinY(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->TranslationMinY.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  TranslationMinY
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxNode_mepGetTranslationMinY(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxNode *) lpjFbxNode)->TranslationMinY.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  TranslationMinY
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mptGetTranslationMinY(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxNode *) lpjFbxNode)->TranslationMinY
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  TranslationMinZ
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_mepSetTranslationMinZ(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->TranslationMinZ.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  TranslationMinZ
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxNode_mepGetTranslationMinZ(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxNode *) lpjFbxNode)->TranslationMinZ.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  TranslationMinZ
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mptGetTranslationMinZ(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxNode *) lpjFbxNode)->TranslationMinZ
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  TranslationMaxX
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_mepSetTranslationMaxX(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->TranslationMaxX.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  TranslationMaxX
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxNode_mepGetTranslationMaxX(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxNode *) lpjFbxNode)->TranslationMaxX.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  TranslationMaxX
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mptGetTranslationMaxX(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxNode *) lpjFbxNode)->TranslationMaxX
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  TranslationMaxY
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_mepSetTranslationMaxY(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->TranslationMaxY.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  TranslationMaxY
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxNode_mepGetTranslationMaxY(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxNode *) lpjFbxNode)->TranslationMaxY.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  TranslationMaxY
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mptGetTranslationMaxY(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxNode *) lpjFbxNode)->TranslationMaxY
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  TranslationMaxZ
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_mepSetTranslationMaxZ(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->TranslationMaxZ.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  TranslationMaxZ
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxNode_mepGetTranslationMaxZ(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxNode *) lpjFbxNode)->TranslationMaxZ.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  TranslationMaxZ
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mptGetTranslationMaxZ(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxNode *) lpjFbxNode)->TranslationMaxZ
  ));
  return ret;
}
  /// FbxPropertyT< EFbxRotationOrder >  RotationOrder
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_mepSetRotationOrder(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jint lpEFbxRotationOrder)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->RotationOrder.Set(
  ( EFbxRotationOrder  )  _lcvt.j2c<jint,EFbxRotationOrder >(lpEFbxRotationOrder)
  );
}
  /// FbxPropertyT< EFbxRotationOrder >  RotationOrder
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxNode_mepGetRotationOrder(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  EFbxRotationOrder  >(
  ((FbxNode *) lpjFbxNode)->RotationOrder.Get(
  ));
  return ret;
}
  /// FbxPropertyT< EFbxRotationOrder >  RotationOrder
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mptGetRotationOrder(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  EFbxRotationOrder   >(
   (&((FbxNode *) lpjFbxNode)->RotationOrder
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  RotationSpaceForLimitOnly
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_mepSetRotationSpaceForLimitOnly(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->RotationSpaceForLimitOnly.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  RotationSpaceForLimitOnly
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxNode_mepGetRotationSpaceForLimitOnly(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxNode *) lpjFbxNode)->RotationSpaceForLimitOnly.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  RotationSpaceForLimitOnly
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mptGetRotationSpaceForLimitOnly(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxNode *) lpjFbxNode)->RotationSpaceForLimitOnly
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  RotationStiffnessX
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_mepSetRotationStiffnessX(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->RotationStiffnessX.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  RotationStiffnessX
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxNode_mepGetRotationStiffnessX(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxNode *) lpjFbxNode)->RotationStiffnessX.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  RotationStiffnessX
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mptGetRotationStiffnessX(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxNode *) lpjFbxNode)->RotationStiffnessX
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  RotationStiffnessY
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_mepSetRotationStiffnessY(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->RotationStiffnessY.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  RotationStiffnessY
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxNode_mepGetRotationStiffnessY(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxNode *) lpjFbxNode)->RotationStiffnessY.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  RotationStiffnessY
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mptGetRotationStiffnessY(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxNode *) lpjFbxNode)->RotationStiffnessY
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  RotationStiffnessZ
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_mepSetRotationStiffnessZ(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->RotationStiffnessZ.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  RotationStiffnessZ
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxNode_mepGetRotationStiffnessZ(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxNode *) lpjFbxNode)->RotationStiffnessZ.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  RotationStiffnessZ
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mptGetRotationStiffnessZ(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxNode *) lpjFbxNode)->RotationStiffnessZ
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  AxisLen
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_mepSetAxisLen(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->AxisLen.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  AxisLen
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxNode_mepGetAxisLen(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxNode *) lpjFbxNode)->AxisLen.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  AxisLen
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mptGetAxisLen(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxNode *) lpjFbxNode)->AxisLen
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  PreRotation
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_mepSetPreRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jlong lpFbxDouble3)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->PreRotation.Set(
  ( FbxDouble3  )  _lcvt.j2c_object<jlong,FbxDouble3 >(lpFbxDouble3)
  );
}
  /// FbxPropertyT< FbxDouble3 >  PreRotation
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mepGetPreRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxDouble3>(
  ((FbxNode *) lpjFbxNode)->PreRotation.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  PreRotation
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mptGetPreRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble3   >(
   (&((FbxNode *) lpjFbxNode)->PreRotation
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  PostRotation
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_mepSetPostRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jlong lpFbxDouble3)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->PostRotation.Set(
  ( FbxDouble3  )  _lcvt.j2c_object<jlong,FbxDouble3 >(lpFbxDouble3)
  );
}
  /// FbxPropertyT< FbxDouble3 >  PostRotation
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mepGetPostRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxDouble3>(
  ((FbxNode *) lpjFbxNode)->PostRotation.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  PostRotation
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mptGetPostRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble3   >(
   (&((FbxNode *) lpjFbxNode)->PostRotation
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  RotationActive
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_mepSetRotationActive(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->RotationActive.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  RotationActive
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxNode_mepGetRotationActive(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxNode *) lpjFbxNode)->RotationActive.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  RotationActive
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mptGetRotationActive(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxNode *) lpjFbxNode)->RotationActive
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  RotationMin
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_mepSetRotationMin(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jlong lpFbxDouble3)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->RotationMin.Set(
  ( FbxDouble3  )  _lcvt.j2c_object<jlong,FbxDouble3 >(lpFbxDouble3)
  );
}
  /// FbxPropertyT< FbxDouble3 >  RotationMin
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mepGetRotationMin(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxDouble3>(
  ((FbxNode *) lpjFbxNode)->RotationMin.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  RotationMin
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mptGetRotationMin(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble3   >(
   (&((FbxNode *) lpjFbxNode)->RotationMin
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  RotationMax
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_mepSetRotationMax(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jlong lpFbxDouble3)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->RotationMax.Set(
  ( FbxDouble3  )  _lcvt.j2c_object<jlong,FbxDouble3 >(lpFbxDouble3)
  );
}
  /// FbxPropertyT< FbxDouble3 >  RotationMax
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mepGetRotationMax(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxDouble3>(
  ((FbxNode *) lpjFbxNode)->RotationMax.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  RotationMax
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mptGetRotationMax(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble3   >(
   (&((FbxNode *) lpjFbxNode)->RotationMax
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  RotationMinX
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_mepSetRotationMinX(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->RotationMinX.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  RotationMinX
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxNode_mepGetRotationMinX(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxNode *) lpjFbxNode)->RotationMinX.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  RotationMinX
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mptGetRotationMinX(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxNode *) lpjFbxNode)->RotationMinX
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  RotationMinY
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_mepSetRotationMinY(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->RotationMinY.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  RotationMinY
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxNode_mepGetRotationMinY(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxNode *) lpjFbxNode)->RotationMinY.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  RotationMinY
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mptGetRotationMinY(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxNode *) lpjFbxNode)->RotationMinY
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  RotationMinZ
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_mepSetRotationMinZ(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->RotationMinZ.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  RotationMinZ
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxNode_mepGetRotationMinZ(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxNode *) lpjFbxNode)->RotationMinZ.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  RotationMinZ
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mptGetRotationMinZ(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxNode *) lpjFbxNode)->RotationMinZ
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  RotationMaxX
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_mepSetRotationMaxX(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->RotationMaxX.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  RotationMaxX
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxNode_mepGetRotationMaxX(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxNode *) lpjFbxNode)->RotationMaxX.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  RotationMaxX
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mptGetRotationMaxX(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxNode *) lpjFbxNode)->RotationMaxX
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  RotationMaxY
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_mepSetRotationMaxY(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->RotationMaxY.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  RotationMaxY
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxNode_mepGetRotationMaxY(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxNode *) lpjFbxNode)->RotationMaxY.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  RotationMaxY
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mptGetRotationMaxY(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxNode *) lpjFbxNode)->RotationMaxY
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  RotationMaxZ
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_mepSetRotationMaxZ(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->RotationMaxZ.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  RotationMaxZ
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxNode_mepGetRotationMaxZ(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxNode *) lpjFbxNode)->RotationMaxZ.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  RotationMaxZ
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mptGetRotationMaxZ(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxNode *) lpjFbxNode)->RotationMaxZ
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  ScalingActive
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_mepSetScalingActive(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->ScalingActive.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  ScalingActive
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxNode_mepGetScalingActive(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxNode *) lpjFbxNode)->ScalingActive.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  ScalingActive
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mptGetScalingActive(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxNode *) lpjFbxNode)->ScalingActive
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  ScalingMin
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_mepSetScalingMin(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jlong lpFbxDouble3)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->ScalingMin.Set(
  ( FbxDouble3  )  _lcvt.j2c_object<jlong,FbxDouble3 >(lpFbxDouble3)
  );
}
  /// FbxPropertyT< FbxDouble3 >  ScalingMin
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mepGetScalingMin(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxDouble3>(
  ((FbxNode *) lpjFbxNode)->ScalingMin.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  ScalingMin
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mptGetScalingMin(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble3   >(
   (&((FbxNode *) lpjFbxNode)->ScalingMin
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  ScalingMax
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_mepSetScalingMax(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jlong lpFbxDouble3)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->ScalingMax.Set(
  ( FbxDouble3  )  _lcvt.j2c_object<jlong,FbxDouble3 >(lpFbxDouble3)
  );
}
  /// FbxPropertyT< FbxDouble3 >  ScalingMax
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mepGetScalingMax(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxDouble3>(
  ((FbxNode *) lpjFbxNode)->ScalingMax.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  ScalingMax
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mptGetScalingMax(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble3   >(
   (&((FbxNode *) lpjFbxNode)->ScalingMax
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  ScalingMinX
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_mepSetScalingMinX(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->ScalingMinX.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  ScalingMinX
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxNode_mepGetScalingMinX(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxNode *) lpjFbxNode)->ScalingMinX.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  ScalingMinX
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mptGetScalingMinX(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxNode *) lpjFbxNode)->ScalingMinX
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  ScalingMinY
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_mepSetScalingMinY(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->ScalingMinY.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  ScalingMinY
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxNode_mepGetScalingMinY(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxNode *) lpjFbxNode)->ScalingMinY.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  ScalingMinY
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mptGetScalingMinY(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxNode *) lpjFbxNode)->ScalingMinY
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  ScalingMinZ
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_mepSetScalingMinZ(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->ScalingMinZ.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  ScalingMinZ
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxNode_mepGetScalingMinZ(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxNode *) lpjFbxNode)->ScalingMinZ.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  ScalingMinZ
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mptGetScalingMinZ(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxNode *) lpjFbxNode)->ScalingMinZ
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  ScalingMaxX
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_mepSetScalingMaxX(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->ScalingMaxX.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  ScalingMaxX
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxNode_mepGetScalingMaxX(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxNode *) lpjFbxNode)->ScalingMaxX.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  ScalingMaxX
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mptGetScalingMaxX(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxNode *) lpjFbxNode)->ScalingMaxX
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  ScalingMaxY
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_mepSetScalingMaxY(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->ScalingMaxY.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  ScalingMaxY
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxNode_mepGetScalingMaxY(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxNode *) lpjFbxNode)->ScalingMaxY.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  ScalingMaxY
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mptGetScalingMaxY(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxNode *) lpjFbxNode)->ScalingMaxY
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  ScalingMaxZ
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_mepSetScalingMaxZ(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->ScalingMaxZ.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  ScalingMaxZ
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxNode_mepGetScalingMaxZ(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxNode *) lpjFbxNode)->ScalingMaxZ.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  ScalingMaxZ
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mptGetScalingMaxZ(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxNode *) lpjFbxNode)->ScalingMaxZ
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  GeometricTranslation
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_mepSetGeometricTranslation(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jlong lpFbxDouble3)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->GeometricTranslation.Set(
  ( FbxDouble3  )  _lcvt.j2c_object<jlong,FbxDouble3 >(lpFbxDouble3)
  );
}
  /// FbxPropertyT< FbxDouble3 >  GeometricTranslation
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mepGetGeometricTranslation(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxDouble3>(
  ((FbxNode *) lpjFbxNode)->GeometricTranslation.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  GeometricTranslation
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mptGetGeometricTranslation(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble3   >(
   (&((FbxNode *) lpjFbxNode)->GeometricTranslation
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  GeometricRotation
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_mepSetGeometricRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jlong lpFbxDouble3)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->GeometricRotation.Set(
  ( FbxDouble3  )  _lcvt.j2c_object<jlong,FbxDouble3 >(lpFbxDouble3)
  );
}
  /// FbxPropertyT< FbxDouble3 >  GeometricRotation
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mepGetGeometricRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxDouble3>(
  ((FbxNode *) lpjFbxNode)->GeometricRotation.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  GeometricRotation
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mptGetGeometricRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble3   >(
   (&((FbxNode *) lpjFbxNode)->GeometricRotation
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  GeometricScaling
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_mepSetGeometricScaling(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jlong lpFbxDouble3)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->GeometricScaling.Set(
  ( FbxDouble3  )  _lcvt.j2c_object<jlong,FbxDouble3 >(lpFbxDouble3)
  );
}
  /// FbxPropertyT< FbxDouble3 >  GeometricScaling
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mepGetGeometricScaling(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxDouble3>(
  ((FbxNode *) lpjFbxNode)->GeometricScaling.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  GeometricScaling
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mptGetGeometricScaling(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble3   >(
   (&((FbxNode *) lpjFbxNode)->GeometricScaling
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  MinDampRangeX
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_mepSetMinDampRangeX(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->MinDampRangeX.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  MinDampRangeX
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxNode_mepGetMinDampRangeX(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxNode *) lpjFbxNode)->MinDampRangeX.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  MinDampRangeX
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mptGetMinDampRangeX(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxNode *) lpjFbxNode)->MinDampRangeX
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  MinDampRangeY
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_mepSetMinDampRangeY(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->MinDampRangeY.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  MinDampRangeY
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxNode_mepGetMinDampRangeY(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxNode *) lpjFbxNode)->MinDampRangeY.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  MinDampRangeY
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mptGetMinDampRangeY(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxNode *) lpjFbxNode)->MinDampRangeY
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  MinDampRangeZ
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_mepSetMinDampRangeZ(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->MinDampRangeZ.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  MinDampRangeZ
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxNode_mepGetMinDampRangeZ(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxNode *) lpjFbxNode)->MinDampRangeZ.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  MinDampRangeZ
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mptGetMinDampRangeZ(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxNode *) lpjFbxNode)->MinDampRangeZ
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  MaxDampRangeX
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_mepSetMaxDampRangeX(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->MaxDampRangeX.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  MaxDampRangeX
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxNode_mepGetMaxDampRangeX(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxNode *) lpjFbxNode)->MaxDampRangeX.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  MaxDampRangeX
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mptGetMaxDampRangeX(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxNode *) lpjFbxNode)->MaxDampRangeX
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  MaxDampRangeY
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_mepSetMaxDampRangeY(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->MaxDampRangeY.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  MaxDampRangeY
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxNode_mepGetMaxDampRangeY(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxNode *) lpjFbxNode)->MaxDampRangeY.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  MaxDampRangeY
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mptGetMaxDampRangeY(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxNode *) lpjFbxNode)->MaxDampRangeY
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  MaxDampRangeZ
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_mepSetMaxDampRangeZ(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->MaxDampRangeZ.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  MaxDampRangeZ
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxNode_mepGetMaxDampRangeZ(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxNode *) lpjFbxNode)->MaxDampRangeZ.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  MaxDampRangeZ
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mptGetMaxDampRangeZ(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxNode *) lpjFbxNode)->MaxDampRangeZ
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  MinDampStrengthX
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_mepSetMinDampStrengthX(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->MinDampStrengthX.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  MinDampStrengthX
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxNode_mepGetMinDampStrengthX(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxNode *) lpjFbxNode)->MinDampStrengthX.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  MinDampStrengthX
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mptGetMinDampStrengthX(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxNode *) lpjFbxNode)->MinDampStrengthX
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  MinDampStrengthY
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_mepSetMinDampStrengthY(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->MinDampStrengthY.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  MinDampStrengthY
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxNode_mepGetMinDampStrengthY(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxNode *) lpjFbxNode)->MinDampStrengthY.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  MinDampStrengthY
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mptGetMinDampStrengthY(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxNode *) lpjFbxNode)->MinDampStrengthY
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  MinDampStrengthZ
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_mepSetMinDampStrengthZ(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->MinDampStrengthZ.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  MinDampStrengthZ
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxNode_mepGetMinDampStrengthZ(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxNode *) lpjFbxNode)->MinDampStrengthZ.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  MinDampStrengthZ
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mptGetMinDampStrengthZ(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxNode *) lpjFbxNode)->MinDampStrengthZ
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  MaxDampStrengthX
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_mepSetMaxDampStrengthX(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->MaxDampStrengthX.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  MaxDampStrengthX
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxNode_mepGetMaxDampStrengthX(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxNode *) lpjFbxNode)->MaxDampStrengthX.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  MaxDampStrengthX
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mptGetMaxDampStrengthX(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxNode *) lpjFbxNode)->MaxDampStrengthX
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  MaxDampStrengthY
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_mepSetMaxDampStrengthY(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->MaxDampStrengthY.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  MaxDampStrengthY
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxNode_mepGetMaxDampStrengthY(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxNode *) lpjFbxNode)->MaxDampStrengthY.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  MaxDampStrengthY
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mptGetMaxDampStrengthY(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxNode *) lpjFbxNode)->MaxDampStrengthY
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  MaxDampStrengthZ
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_mepSetMaxDampStrengthZ(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->MaxDampStrengthZ.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  MaxDampStrengthZ
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxNode_mepGetMaxDampStrengthZ(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxNode *) lpjFbxNode)->MaxDampStrengthZ.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  MaxDampStrengthZ
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mptGetMaxDampStrengthZ(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxNode *) lpjFbxNode)->MaxDampStrengthZ
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  PreferedAngleX
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_mepSetPreferedAngleX(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->PreferedAngleX.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  PreferedAngleX
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxNode_mepGetPreferedAngleX(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxNode *) lpjFbxNode)->PreferedAngleX.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  PreferedAngleX
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mptGetPreferedAngleX(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxNode *) lpjFbxNode)->PreferedAngleX
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  PreferedAngleY
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_mepSetPreferedAngleY(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->PreferedAngleY.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  PreferedAngleY
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxNode_mepGetPreferedAngleY(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxNode *) lpjFbxNode)->PreferedAngleY.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  PreferedAngleY
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mptGetPreferedAngleY(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxNode *) lpjFbxNode)->PreferedAngleY
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  PreferedAngleZ
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_mepSetPreferedAngleZ(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->PreferedAngleZ.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  PreferedAngleZ
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxNode_mepGetPreferedAngleZ(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxNode *) lpjFbxNode)->PreferedAngleZ.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  PreferedAngleZ
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mptGetPreferedAngleZ(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxNode *) lpjFbxNode)->PreferedAngleZ
  ));
  return ret;
}
  /// FbxPropertyT< FbxReference >  LookAtProperty
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_mepSetLookAtProperty(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jlong lpFbxReference)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->LookAtProperty.Set(
  ( FbxReference  )  _lcvt.j2c<jlong, FbxReference  >(lpFbxReference)
  );
}
  /// FbxPropertyT< FbxReference >  LookAtProperty
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mepGetLookAtProperty(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j<jlong,  FbxReference  >(
  ((FbxNode *) lpjFbxNode)->LookAtProperty.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxReference >  LookAtProperty
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mptGetLookAtProperty(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxReference   >(
   (&((FbxNode *) lpjFbxNode)->LookAtProperty
  ));
  return ret;
}
  /// FbxPropertyT< FbxReference >  UpVectorProperty
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_mepSetUpVectorProperty(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jlong lpFbxReference)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->UpVectorProperty.Set(
  ( FbxReference  )  _lcvt.j2c<jlong, FbxReference  >(lpFbxReference)
  );
}
  /// FbxPropertyT< FbxReference >  UpVectorProperty
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mepGetUpVectorProperty(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j<jlong,  FbxReference  >(
  ((FbxNode *) lpjFbxNode)->UpVectorProperty.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxReference >  UpVectorProperty
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mptGetUpVectorProperty(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxReference   >(
   (&((FbxNode *) lpjFbxNode)->UpVectorProperty
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  Show
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_mepSetShow(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->Show.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  Show
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxNode_mepGetShow(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxNode *) lpjFbxNode)->Show.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  Show
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mptGetShow(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxNode *) lpjFbxNode)->Show
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  NegativePercentShapeSupport
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_mepSetNegativePercentShapeSupport(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->NegativePercentShapeSupport.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  NegativePercentShapeSupport
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxNode_mepGetNegativePercentShapeSupport(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxNode *) lpjFbxNode)->NegativePercentShapeSupport.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  NegativePercentShapeSupport
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mptGetNegativePercentShapeSupport(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxNode *) lpjFbxNode)->NegativePercentShapeSupport
  ));
  return ret;
}
  /// FbxPropertyT< FbxInt >  DefaultAttributeIndex
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_mepSetDefaultAttributeIndex(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jint lpFbxInt)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->DefaultAttributeIndex.Set(
  ( FbxInt  )  _lcvt.j2c<jint, FbxInt  >(lpFbxInt)
  );
}
  /// FbxPropertyT< FbxInt >  DefaultAttributeIndex
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxNode_mepGetDefaultAttributeIndex(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxInt  >(
  ((FbxNode *) lpjFbxNode)->DefaultAttributeIndex.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxInt >  DefaultAttributeIndex
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mptGetDefaultAttributeIndex(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxInt   >(
   (&((FbxNode *) lpjFbxNode)->DefaultAttributeIndex
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  Freeze
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_mepSetFreeze(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->Freeze.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  Freeze
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxNode_mepGetFreeze(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxNode *) lpjFbxNode)->Freeze.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  Freeze
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mptGetFreeze(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxNode *) lpjFbxNode)->Freeze
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  LODBox
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxNode_mepSetLODBox(JNIEnv * __env, jclass __jc,jlong lpjFbxNode,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxNode *) lpjFbxNode)->LODBox.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  LODBox
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxNode_mepGetLODBox(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxNode *) lpjFbxNode)->LODBox.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  LODBox
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_mptGetLODBox(JNIEnv * __env, jclass __jc,jlong lpjFbxNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxNode *) lpjFbxNode)->LODBox
  ));
  return ret;
}
  /// FbxNode * Create( FbxObject* lpFbxObject,  const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxNode_Create(JNIEnv * __env, jclass __jc,jlong lpFbxObject,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxNode>(
  FbxNode::Create(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(lpFbxObject)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
