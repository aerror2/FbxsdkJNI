
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// virtual bool  IsValid () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxEntryView_IsValid(JNIEnv * __env, jclass __jc,jlong lpjFbxEntryView)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxEntryView *) lpjFbxEntryView)->IsValid(
  ));
  return ret;
}
  /// virtual bool  Create ()
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxEntryView_Create(JNIEnv * __env, jclass __jc,jlong lpjFbxEntryView)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxEntryView *) lpjFbxEntryView)->Create(
  ));
  return ret;
}
  /// FbxEntryView (FbxBindingTableEntry *pEntry, bool pAsSource, bool pCreate=false)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxEntryView_meCreate(JNIEnv * __env, jclass __jc,jlong pEntry,jboolean pAsSource,jboolean pCreate)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxEntryView>(
  new FbxEntryView(
  ( FbxBindingTableEntry  *)  _lcvt.j2c_object_pt<jlong, FbxBindingTableEntry>(pEntry)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pAsSource)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pCreate)
  ));
  return ret;
}
  /// virtual  ~FbxEntryView ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxEntryView_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxEntryView)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxEntryView *) lpjFbxEntryView
  );
}
