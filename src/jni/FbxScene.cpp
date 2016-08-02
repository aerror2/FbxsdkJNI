//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// void  FillPoseArray (FbxArray< FbxPose * > &pPoseArray)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxScene_FillPoseArray(JNIEnv * __env, jclass __jc,jlong lpjFbxScene,jobject pPoseArray)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxScene *) lpjFbxScene)->FillPoseArray(
  (FbxArray<  FbxPose  * > &) * _lcvt.j2c_tmpl_FbxArray_obj_ref<jobject,  FbxPose  * >(pPoseArray)
  );
}
  /// void  Clear ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxScene_Clear(JNIEnv * __env, jclass __jc,jlong lpjFbxScene)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxScene *) lpjFbxScene)->Clear(
  );
}
  /// FbxNode *  GetRootNode () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxScene_GetRootNode(JNIEnv * __env, jclass __jc,jlong lpjFbxScene)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxNode>(
  ((FbxScene *) lpjFbxScene)->GetRootNode(
  ));
  return ret;
}
  /// void  FillTextureArray (FbxArray< FbxTexture * > &pTextureArray)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxScene_FillTextureArray(JNIEnv * __env, jclass __jc,jlong lpjFbxScene,jobject pTextureArray)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxScene *) lpjFbxScene)->FillTextureArray(
  (FbxArray<  FbxTexture  * > &) * _lcvt.j2c_tmpl_FbxArray_obj_ref<jobject,  FbxTexture  * >(pTextureArray)
  );
}
  /// void  FillMaterialArray (FbxArray< FbxSurfaceMaterial * > &pMaterialArray)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxScene_FillMaterialArray(JNIEnv * __env, jclass __jc,jlong lpjFbxScene,jobject pMaterialArray)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxScene *) lpjFbxScene)->FillMaterialArray(
  (FbxArray<  FbxSurfaceMaterial  * > &) * _lcvt.j2c_tmpl_FbxArray_obj_ref<jobject,  FbxSurfaceMaterial  * >(pMaterialArray)
  );
}
  /// int  GetGenericNodeCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxScene_GetGenericNodeCount(JNIEnv * __env, jclass __jc,jlong lpjFbxScene)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxScene *) lpjFbxScene)->GetGenericNodeCount(
  ));
  return ret;
}
  /// FbxGenericNode *  GetGenericNode (int pIndex)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxScene_GetGenericNode(JNIEnv * __env, jclass __jc,jlong lpjFbxScene,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxGenericNode>(
  ((FbxScene *) lpjFbxScene)->GetGenericNode(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// FbxGenericNode *  GetGenericNode (char *pName)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxScene_GetGenericNode1(JNIEnv * __env, jclass __jc,jlong lpjFbxScene,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxGenericNode>(
  ((FbxScene *) lpjFbxScene)->GetGenericNode(
  ( char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
  /// bool  AddGenericNode (FbxGenericNode *pGenericNode)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxScene_AddGenericNode(JNIEnv * __env, jclass __jc,jlong lpjFbxScene,jlong pGenericNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxScene *) lpjFbxScene)->AddGenericNode(
  ( FbxGenericNode  *)  _lcvt.j2c_object_pt<jlong, FbxGenericNode>(pGenericNode)
  ));
  return ret;
}
  /// bool  RemoveGenericNode (FbxGenericNode *pGenericNode)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxScene_RemoveGenericNode(JNIEnv * __env, jclass __jc,jlong lpjFbxScene,jlong pGenericNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxScene *) lpjFbxScene)->RemoveGenericNode(
  ( FbxGenericNode  *)  _lcvt.j2c_object_pt<jlong, FbxGenericNode>(pGenericNode)
  ));
  return ret;
}
  /// int  GetCharacterCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxScene_GetCharacterCount(JNIEnv * __env, jclass __jc,jlong lpjFbxScene)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxScene *) lpjFbxScene)->GetCharacterCount(
  ));
  return ret;
}
  /// FbxCharacter *  GetCharacter (int pIndex)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxScene_GetCharacter(JNIEnv * __env, jclass __jc,jlong lpjFbxScene,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxCharacter>(
  ((FbxScene *) lpjFbxScene)->GetCharacter(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// int  CreateCharacter (const char *pName)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxScene_CreateCharacter(JNIEnv * __env, jclass __jc,jlong lpjFbxScene,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxScene *) lpjFbxScene)->CreateCharacter(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
  /// void  DestroyCharacter (int pIndex)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxScene_DestroyCharacter(JNIEnv * __env, jclass __jc,jlong lpjFbxScene,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxScene *) lpjFbxScene)->DestroyCharacter(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  );
}
  /// int  GetControlSetPlugCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxScene_GetControlSetPlugCount(JNIEnv * __env, jclass __jc,jlong lpjFbxScene)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxScene *) lpjFbxScene)->GetControlSetPlugCount(
  ));
  return ret;
}
  /// FbxControlSetPlug *  GetControlSetPlug (int pIndex)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxScene_GetControlSetPlug(JNIEnv * __env, jclass __jc,jlong lpjFbxScene,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxControlSetPlug>(
  ((FbxScene *) lpjFbxScene)->GetControlSetPlug(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// int  CreateControlSetPlug (char *pName)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxScene_CreateControlSetPlug(JNIEnv * __env, jclass __jc,jlong lpjFbxScene,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxScene *) lpjFbxScene)->CreateControlSetPlug(
  ( char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
  /// void  DestroyControlSetPlug (int pIndex)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxScene_DestroyControlSetPlug(JNIEnv * __env, jclass __jc,jlong lpjFbxScene,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxScene *) lpjFbxScene)->DestroyControlSetPlug(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  );
}
  /// int  GetCharacterPoseCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxScene_GetCharacterPoseCount(JNIEnv * __env, jclass __jc,jlong lpjFbxScene)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxScene *) lpjFbxScene)->GetCharacterPoseCount(
  ));
  return ret;
}
  /// FbxCharacterPose *  GetCharacterPose (int pIndex)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxScene_GetCharacterPose(JNIEnv * __env, jclass __jc,jlong lpjFbxScene,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxCharacterPose>(
  ((FbxScene *) lpjFbxScene)->GetCharacterPose(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// int  CreateCharacterPose (char *pName)
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxScene_CreateCharacterPose(JNIEnv * __env, jclass __jc,jlong lpjFbxScene,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxScene *) lpjFbxScene)->CreateCharacterPose(
  ( char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
  /// void  DestroyCharacterPose (int pIndex)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxScene_DestroyCharacterPose(JNIEnv * __env, jclass __jc,jlong lpjFbxScene,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxScene *) lpjFbxScene)->DestroyCharacterPose(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  );
}
  /// int  GetPoseCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxScene_GetPoseCount(JNIEnv * __env, jclass __jc,jlong lpjFbxScene)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxScene *) lpjFbxScene)->GetPoseCount(
  ));
  return ret;
}
  /// FbxPose *  GetPose (int pIndex)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxScene_GetPose(JNIEnv * __env, jclass __jc,jlong lpjFbxScene,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxPose>(
  ((FbxScene *) lpjFbxScene)->GetPose(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// bool  AddPose (FbxPose *pPose)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxScene_AddPose(JNIEnv * __env, jclass __jc,jlong lpjFbxScene,jlong pPose)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxScene *) lpjFbxScene)->AddPose(
  ( FbxPose  *)  _lcvt.j2c_object_pt<jlong, FbxPose>(pPose)
  ));
  return ret;
}
  /// bool  RemovePose (FbxPose *pPose)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxScene_RemovePose(JNIEnv * __env, jclass __jc,jlong lpjFbxScene,jlong pPose)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxScene *) lpjFbxScene)->RemovePose(
  ( FbxPose  *)  _lcvt.j2c_object_pt<jlong, FbxPose>(pPose)
  ));
  return ret;
}
  /// bool  RemovePose (int pIndex)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxScene_RemovePose1(JNIEnv * __env, jclass __jc,jlong lpjFbxScene,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxScene *) lpjFbxScene)->RemovePose(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// FbxDocumentInfo *  GetSceneInfo ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxScene_GetSceneInfo(JNIEnv * __env, jclass __jc,jlong lpjFbxScene)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxDocumentInfo>(
  ((FbxScene *) lpjFbxScene)->GetSceneInfo(
  ));
  return ret;
}
  /// void  SetSceneInfo (FbxDocumentInfo *pSceneInfo)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxScene_SetSceneInfo(JNIEnv * __env, jclass __jc,jlong lpjFbxScene,jlong pSceneInfo)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxScene *) lpjFbxScene)->SetSceneInfo(
  ( FbxDocumentInfo  *)  _lcvt.j2c_object_pt<jlong, FbxDocumentInfo>(pSceneInfo)
  );
}
  /// FbxGlobalSettings &  GetGlobalSettings ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxScene_GetGlobalSettings(JNIEnv * __env, jclass __jc,jlong lpjFbxScene)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_ref<jlong, FbxGlobalSettings>(
  ((FbxScene *) lpjFbxScene)->GetGlobalSettings(
  ));
  return ret;
}
  /// const FbxGlobalSettings &  GetGlobalSettings () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxScene_GetGlobalSettings1(JNIEnv * __env, jclass __jc,jlong lpjFbxScene)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_ref<jlong, FbxGlobalSettings>(
  ((FbxScene *) lpjFbxScene)->GetGlobalSettings(
  ));
  return ret;
}
  /// int  GetMaterialCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxScene_GetMaterialCount(JNIEnv * __env, jclass __jc,jlong lpjFbxScene)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxScene *) lpjFbxScene)->GetMaterialCount(
  ));
  return ret;
}
  /// FbxSurfaceMaterial *  GetMaterial (int pIndex)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxScene_GetMaterial(JNIEnv * __env, jclass __jc,jlong lpjFbxScene,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxSurfaceMaterial>(
  ((FbxScene *) lpjFbxScene)->GetMaterial(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// FbxSurfaceMaterial *  GetMaterial (char *pName)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxScene_GetMaterial1(JNIEnv * __env, jclass __jc,jlong lpjFbxScene,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxSurfaceMaterial>(
  ((FbxScene *) lpjFbxScene)->GetMaterial(
  ( char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
  /// bool  AddMaterial (FbxSurfaceMaterial *pMaterial)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxScene_AddMaterial(JNIEnv * __env, jclass __jc,jlong lpjFbxScene,jlong pMaterial)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxScene *) lpjFbxScene)->AddMaterial(
  ( FbxSurfaceMaterial  *)  _lcvt.j2c_object_pt<jlong, FbxSurfaceMaterial>(pMaterial)
  ));
  return ret;
}
  /// bool  RemoveMaterial (FbxSurfaceMaterial *pMaterial)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxScene_RemoveMaterial(JNIEnv * __env, jclass __jc,jlong lpjFbxScene,jlong pMaterial)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxScene *) lpjFbxScene)->RemoveMaterial(
  ( FbxSurfaceMaterial  *)  _lcvt.j2c_object_pt<jlong, FbxSurfaceMaterial>(pMaterial)
  ));
  return ret;
}
  /// int  GetTextureCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxScene_GetTextureCount(JNIEnv * __env, jclass __jc,jlong lpjFbxScene)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxScene *) lpjFbxScene)->GetTextureCount(
  ));
  return ret;
}
  /// FbxTexture *  GetTexture (int pIndex)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxScene_GetTexture(JNIEnv * __env, jclass __jc,jlong lpjFbxScene,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxTexture>(
  ((FbxScene *) lpjFbxScene)->GetTexture(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// FbxTexture *  GetTexture (char *pName)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxScene_GetTexture1(JNIEnv * __env, jclass __jc,jlong lpjFbxScene,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxTexture>(
  ((FbxScene *) lpjFbxScene)->GetTexture(
  ( char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
  /// bool  AddTexture (FbxTexture *pTexture)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxScene_AddTexture(JNIEnv * __env, jclass __jc,jlong lpjFbxScene,jlong pTexture)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxScene *) lpjFbxScene)->AddTexture(
  ( FbxTexture  *)  _lcvt.j2c_object_pt<jlong, FbxTexture>(pTexture)
  ));
  return ret;
}
  /// bool  RemoveTexture (FbxTexture *pTexture)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxScene_RemoveTexture(JNIEnv * __env, jclass __jc,jlong lpjFbxScene,jlong pTexture)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxScene *) lpjFbxScene)->RemoveTexture(
  ( FbxTexture  *)  _lcvt.j2c_object_pt<jlong, FbxTexture>(pTexture)
  ));
  return ret;
}
  /// int  GetNodeCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxScene_GetNodeCount(JNIEnv * __env, jclass __jc,jlong lpjFbxScene)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxScene *) lpjFbxScene)->GetNodeCount(
  ));
  return ret;
}
  /// FbxNode *  GetNode (int pIndex)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxScene_GetNode(JNIEnv * __env, jclass __jc,jlong lpjFbxScene,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxNode>(
  ((FbxScene *) lpjFbxScene)->GetNode(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// bool  AddNode (FbxNode *pNode)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxScene_AddNode(JNIEnv * __env, jclass __jc,jlong lpjFbxScene,jlong pNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxScene *) lpjFbxScene)->AddNode(
  ( FbxNode  *)  _lcvt.j2c_object_pt<jlong, FbxNode>(pNode)
  ));
  return ret;
}
  /// bool  RemoveNode (FbxNode *pNode)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxScene_RemoveNode(JNIEnv * __env, jclass __jc,jlong lpjFbxScene,jlong pNode)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxScene *) lpjFbxScene)->RemoveNode(
  ( FbxNode  *)  _lcvt.j2c_object_pt<jlong, FbxNode>(pNode)
  ));
  return ret;
}
  /// int  GetCurveOnSurfaceCount ()
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxScene_GetCurveOnSurfaceCount(JNIEnv * __env, jclass __jc,jlong lpjFbxScene)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxScene *) lpjFbxScene)->GetCurveOnSurfaceCount(
  ));
  return ret;
}
  /// FbxNode *  FindNodeByName (const FbxString &pName)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxScene_FindNodeByName(JNIEnv * __env, jclass __jc,jlong lpjFbxScene,jobject pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxNode>(
  ((FbxScene *) lpjFbxScene)->FindNodeByName(
  (const FbxString  &) * _lcvt.j2c_object_ref<jobject,FbxString >(pName)
  ));
  return ret;
}
  /// int  GetGeometryCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxScene_GetGeometryCount(JNIEnv * __env, jclass __jc,jlong lpjFbxScene)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxScene *) lpjFbxScene)->GetGeometryCount(
  ));
  return ret;
}
  /// FbxGeometry *  GetGeometry (int pIndex)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxScene_GetGeometry(JNIEnv * __env, jclass __jc,jlong lpjFbxScene,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxGeometry>(
  ((FbxScene *) lpjFbxScene)->GetGeometry(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// bool  AddGeometry (FbxGeometry *pGeometry)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxScene_AddGeometry(JNIEnv * __env, jclass __jc,jlong lpjFbxScene,jlong pGeometry)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxScene *) lpjFbxScene)->AddGeometry(
  ( FbxGeometry  *)  _lcvt.j2c_object_pt<jlong, FbxGeometry>(pGeometry)
  ));
  return ret;
}
  /// bool  RemoveGeometry (FbxGeometry *pGeometry)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxScene_RemoveGeometry(JNIEnv * __env, jclass __jc,jlong lpjFbxScene,jlong pGeometry)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxScene *) lpjFbxScene)->RemoveGeometry(
  ( FbxGeometry  *)  _lcvt.j2c_object_pt<jlong, FbxGeometry>(pGeometry)
  ));
  return ret;
}
  /// int  GetVideoCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxScene_GetVideoCount(JNIEnv * __env, jclass __jc,jlong lpjFbxScene)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxScene *) lpjFbxScene)->GetVideoCount(
  ));
  return ret;
}
  /// FbxVideo *  GetVideo (int pIndex)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxScene_GetVideo(JNIEnv * __env, jclass __jc,jlong lpjFbxScene,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxVideo>(
  ((FbxScene *) lpjFbxScene)->GetVideo(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// bool  AddVideo (FbxVideo *pVideo)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxScene_AddVideo(JNIEnv * __env, jclass __jc,jlong lpjFbxScene,jlong pVideo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxScene *) lpjFbxScene)->AddVideo(
  ( FbxVideo  *)  _lcvt.j2c_object_pt<jlong, FbxVideo>(pVideo)
  ));
  return ret;
}
  /// bool  RemoveVideo (FbxVideo *pVideo)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxScene_RemoveVideo(JNIEnv * __env, jclass __jc,jlong lpjFbxScene,jlong pVideo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxScene *) lpjFbxScene)->RemoveVideo(
  ( FbxVideo  *)  _lcvt.j2c_object_pt<jlong, FbxVideo>(pVideo)
  ));
  return ret;
}
  /// void  SyncShowPropertyForInstance ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxScene_SyncShowPropertyForInstance(JNIEnv * __env, jclass __jc,jlong lpjFbxScene)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxScene *) lpjFbxScene)->SyncShowPropertyForInstance(
  );
}
  /// bool  ComputeBoundingBoxMinMaxCenter (FbxVector4 &pBBoxMin, FbxVector4 &pBBoxMax, FbxVector4 &pBBoxCenter, bool pSelected=false, const FbxTime &pTime=FBXSDK_TIME_INFINITE)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxScene_ComputeBoundingBoxMinMaxCenter(JNIEnv * __env, jclass __jc,jlong lpjFbxScene,jobject pBBoxMin,jobject pBBoxMax,jobject pBBoxCenter,jboolean pSelected,jobject pTime)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxScene *) lpjFbxScene)->ComputeBoundingBoxMinMaxCenter(
  ( FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pBBoxMin)
  ,
  ( FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pBBoxMax)
  ,
  ( FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pBBoxCenter)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pSelected)
  ,
  (const FbxTime  &) * _lcvt.j2c_object_ref<jobject,FbxTime >(pTime)
  ));
  return ret;
}
  /// FbxScene * Create( FbxDocument* lpFbxDocument,  const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxScene_Create(JNIEnv * __env, jclass __jc,jlong lpFbxDocument,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxScene>(
  FbxScene::Create(
  ( FbxDocument  *)  _lcvt.j2c_object_pt<jlong, FbxDocument>(lpFbxDocument)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
