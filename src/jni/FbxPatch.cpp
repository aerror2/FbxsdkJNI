//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// virtual FbxNodeAttribute::EType  GetAttributeType () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxPatch_GetAttributeType(JNIEnv * __env, jclass __jc,jlong lpjFbxPatch)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxNodeAttribute::EType  >(
  ((FbxPatch *) lpjFbxPatch)->GetAttributeType(
  ));
  return ret;
}
  /// void  Reset ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxPatch_Reset(JNIEnv * __env, jclass __jc,jlong lpjFbxPatch)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxPatch *) lpjFbxPatch)->Reset(
  );
}
  /// void  SetSurfaceMode (FbxGeometry::ESurfaceMode pMode)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxPatch_SetSurfaceMode(JNIEnv * __env, jclass __jc,jlong lpjFbxPatch,jint pMode)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxPatch *) lpjFbxPatch)->SetSurfaceMode(
  ( FbxGeometry::ESurfaceMode  )  _lcvt.j2c<jint,FbxGeometry::ESurfaceMode >(pMode)
  );
}
  /// FbxGeometry::ESurfaceMode  GetSurfaceMode () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxPatch_GetSurfaceMode(JNIEnv * __env, jclass __jc,jlong lpjFbxPatch)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxGeometry::ESurfaceMode  >(
  ((FbxPatch *) lpjFbxPatch)->GetSurfaceMode(
  ));
  return ret;
}
  /// void  InitControlPoints (int pUCount, EType pUType, int pVCount, EType pVType)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxPatch_InitControlPoints(JNIEnv * __env, jclass __jc,jlong lpjFbxPatch,jint pUCount,jint pUType,jint pVCount,jint pVType)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxPatch *) lpjFbxPatch)->InitControlPoints(
  ( int  )  _lcvt.j2c<jint, int  >(pUCount)
  ,
  ( FbxPatch::EType  )  _lcvt.j2c<jint,FbxPatch::EType >(pUType)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pVCount)
  ,
  ( FbxPatch::EType  )  _lcvt.j2c<jint,FbxPatch::EType >(pVType)
  );
}
  /// int  GetUCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxPatch_GetUCount(JNIEnv * __env, jclass __jc,jlong lpjFbxPatch)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxPatch *) lpjFbxPatch)->GetUCount(
  ));
  return ret;
}
  /// int  GetVCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxPatch_GetVCount(JNIEnv * __env, jclass __jc,jlong lpjFbxPatch)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxPatch *) lpjFbxPatch)->GetVCount(
  ));
  return ret;
}
  /// EType  GetPatchUType () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxPatch_GetPatchUType(JNIEnv * __env, jclass __jc,jlong lpjFbxPatch)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxPatch::EType  >(
  ((FbxPatch *) lpjFbxPatch)->GetPatchUType(
  ));
  return ret;
}
  /// EType  GetPatchVType () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxPatch_GetPatchVType(JNIEnv * __env, jclass __jc,jlong lpjFbxPatch)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxPatch::EType  >(
  ((FbxPatch *) lpjFbxPatch)->GetPatchVType(
  ));
  return ret;
}
  /// void  SetStep (int pUStep, int pVStep)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxPatch_SetStep(JNIEnv * __env, jclass __jc,jlong lpjFbxPatch,jint pUStep,jint pVStep)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxPatch *) lpjFbxPatch)->SetStep(
  ( int  )  _lcvt.j2c<jint, int  >(pUStep)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pVStep)
  );
}
  /// int  GetUStep () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxPatch_GetUStep(JNIEnv * __env, jclass __jc,jlong lpjFbxPatch)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxPatch *) lpjFbxPatch)->GetUStep(
  ));
  return ret;
}
  /// int  GetVStep () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxPatch_GetVStep(JNIEnv * __env, jclass __jc,jlong lpjFbxPatch)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxPatch *) lpjFbxPatch)->GetVStep(
  ));
  return ret;
}
  /// void  SetClosed (bool pU, bool pV)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxPatch_SetClosed(JNIEnv * __env, jclass __jc,jlong lpjFbxPatch,jboolean pU,jboolean pV)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxPatch *) lpjFbxPatch)->SetClosed(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pU)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pV)
  );
}
  /// bool  GetUClosed () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxPatch_GetUClosed(JNIEnv * __env, jclass __jc,jlong lpjFbxPatch)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxPatch *) lpjFbxPatch)->GetUClosed(
  ));
  return ret;
}
  /// bool  GetVClosed () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxPatch_GetVClosed(JNIEnv * __env, jclass __jc,jlong lpjFbxPatch)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxPatch *) lpjFbxPatch)->GetVClosed(
  ));
  return ret;
}
  /// void  SetUCapped (bool pUBottom, bool pUTop)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxPatch_SetUCapped(JNIEnv * __env, jclass __jc,jlong lpjFbxPatch,jboolean pUBottom,jboolean pUTop)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxPatch *) lpjFbxPatch)->SetUCapped(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pUBottom)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pUTop)
  );
}
  /// bool  GetUCappedBottom () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxPatch_GetUCappedBottom(JNIEnv * __env, jclass __jc,jlong lpjFbxPatch)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxPatch *) lpjFbxPatch)->GetUCappedBottom(
  ));
  return ret;
}
  /// bool  GetUCappedTop () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxPatch_GetUCappedTop(JNIEnv * __env, jclass __jc,jlong lpjFbxPatch)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxPatch *) lpjFbxPatch)->GetUCappedTop(
  ));
  return ret;
}
  /// void  SetVCapped (bool pVBottom, bool pVTop)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxPatch_SetVCapped(JNIEnv * __env, jclass __jc,jlong lpjFbxPatch,jboolean pVBottom,jboolean pVTop)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxPatch *) lpjFbxPatch)->SetVCapped(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pVBottom)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pVTop)
  );
}
  /// bool  GetVCappedBottom () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxPatch_GetVCappedBottom(JNIEnv * __env, jclass __jc,jlong lpjFbxPatch)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxPatch *) lpjFbxPatch)->GetVCappedBottom(
  ));
  return ret;
}
  /// bool  GetVCappedTop () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxPatch_GetVCappedTop(JNIEnv * __env, jclass __jc,jlong lpjFbxPatch)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxPatch *) lpjFbxPatch)->GetVCappedTop(
  ));
  return ret;
}
  /// virtual bool  ContentWriteTo (FbxStream &pStream) const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxPatch_ContentWriteTo(JNIEnv * __env, jclass __jc,jlong lpjFbxPatch,jobject pStream)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxPatch *) lpjFbxPatch)->ContentWriteTo(
  ( FbxStream  &) * _lcvt.j2c_object_ref<jobject,FbxStream >(pStream)
  ));
  return ret;
}
  /// virtual bool  ContentReadFrom (const FbxStream &pStream)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxPatch_ContentReadFrom(JNIEnv * __env, jclass __jc,jlong lpjFbxPatch,jobject pStream)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxPatch *) lpjFbxPatch)->ContentReadFrom(
  (const FbxStream  &) * _lcvt.j2c_object_ref<jobject,FbxStream >(pStream)
  ));
  return ret;
}
  /// FbxPatch * Create( FbxGeometry* lpFbxGeometry,  const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxPatch_Create(JNIEnv * __env, jclass __jc,jlong lpFbxGeometry,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxPatch>(
  FbxPatch::Create(
  ( FbxGeometry  *)  _lcvt.j2c_object_pt<jlong, FbxGeometry>(lpFbxGeometry)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
