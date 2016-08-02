//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// void  SetSemantic (const char *pSemantic)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxSemanticEntryView_SetSemantic(JNIEnv * __env, jclass __jc,jlong lpjFbxSemanticEntryView,jstring pSemantic)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxSemanticEntryView *) lpjFbxSemanticEntryView)->SetSemantic(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pSemantic)
  );
}
  /// FbxString  GetSemantic (bool pAppendIndex=true) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxSemanticEntryView_GetSemantic(JNIEnv * __env, jclass __jc,jlong lpjFbxSemanticEntryView,jboolean pAppendIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxString>(
  ((FbxSemanticEntryView *) lpjFbxSemanticEntryView)->GetSemantic(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pAppendIndex)
  ));
  return ret;
}
  /// int  GetIndex () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxSemanticEntryView_GetIndex(JNIEnv * __env, jclass __jc,jlong lpjFbxSemanticEntryView)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxSemanticEntryView *) lpjFbxSemanticEntryView)->GetIndex(
  ));
  return ret;
}
  /// FbxSemanticEntryView (FbxBindingTableEntry *pEntry, bool pAsSource, bool pCreate=false)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxSemanticEntryView_meCreate(JNIEnv * __env, jclass __jc,jlong pEntry,jboolean pAsSource,jboolean pCreate)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxSemanticEntryView>(
  new FbxSemanticEntryView(
  ( FbxBindingTableEntry  *)  _lcvt.j2c_object_pt<jlong, FbxBindingTableEntry>(pEntry)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pAsSource)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pCreate)
  ));
  return ret;
}
  /// virtual  ~FbxSemanticEntryView ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxSemanticEntryView_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxSemanticEntryView)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxSemanticEntryView *) lpjFbxSemanticEntryView
  );
}
