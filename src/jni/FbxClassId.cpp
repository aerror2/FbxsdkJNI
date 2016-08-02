
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxClassId ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxClassId_meCreate(JNIEnv * __env, jclass __jc)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxClassId>(
  new FbxClassId(
  ));
  return ret;
}
  /// FbxClassId (const char *pClassName, const FbxClassId &pParentClassId, FbxObjectCreateProc pConstructor=0, const char *pFBXType=NULL, const char *pFBXSubType=NULL)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxClassId_meCreate1(JNIEnv * __env, jclass __jc,jstring pClassName,jobject pParentClassId,jlong pConstructor,jstring pFBXType,jstring pFBXSubType)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxClassId>(
  new FbxClassId(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pClassName)
  ,
  (const FbxClassId  &) * _lcvt.j2c_object_ref<jobject,FbxClassId >(pParentClassId)
  ,
  ( FbxObjectCreateProc  )  _lcvt.j2c_object<jlong,FbxObjectCreateProc >(pConstructor)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pFBXType)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pFBXSubType)
  ));
  return ret;
}
  /// void  Destroy ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxClassId_Destroy(JNIEnv * __env, jclass __jc,jlong lpjFbxClassId)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxClassId *) lpjFbxClassId)->Destroy(
  );
}
  /// const char *  GetName () const
extern "C" JNIEXPORT jstring JNICALL Java_fbxsdk_FbxClassId_GetName(JNIEnv * __env, jclass __jc,jlong lpjFbxClassId)
{
  JNILocalConverter _lcvt(__env,__jc);
  jstring ret=(jstring)_lcvt.c2j_string(
  ((FbxClassId *) lpjFbxClassId)->GetName(
  ));
  return ret;
}
  /// FbxClassId  GetParent () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxClassId_GetParent(JNIEnv * __env, jclass __jc,jlong lpjFbxClassId)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxClassId>(
  ((FbxClassId *) lpjFbxClassId)->GetParent(
  ));
  return ret;
}
  /// FbxObject *  Create (FbxManager &pManager, const char *pName, const FbxObject *pFrom)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxClassId_Create(JNIEnv * __env, jclass __jc,jlong lpjFbxClassId,jobject pManager,jstring pName,jlong pFrom)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxObject>(
  ((FbxClassId *) lpjFbxClassId)->Create(
  ( FbxManager  &) * _lcvt.j2c_object_ref<jobject,FbxManager >(pManager)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ,
  (const FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pFrom)
  ));
  return ret;
}
  /// bool  Override (FbxObjectCreateProc pConstructor)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxClassId_Override(JNIEnv * __env, jclass __jc,jlong lpjFbxClassId,jlong pConstructor)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxClassId *) lpjFbxClassId)->Override(
  ( FbxObjectCreateProc  )  _lcvt.j2c_object<jlong,FbxObjectCreateProc >(pConstructor)
  ));
  return ret;
}
  /// bool  Is (const FbxClassId &pId) const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxClassId_Is(JNIEnv * __env, jclass __jc,jlong lpjFbxClassId,jobject pId)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxClassId *) lpjFbxClassId)->Is(
  (const FbxClassId  &) * _lcvt.j2c_object_ref<jobject,FbxClassId >(pId)
  ));
  return ret;
}
  /// const char *  GetFbxFileTypeName (bool pAskParent=false) const
extern "C" JNIEXPORT jstring JNICALL Java_fbxsdk_FbxClassId_GetFbxFileTypeName(JNIEnv * __env, jclass __jc,jlong lpjFbxClassId,jboolean pAskParent)
{
  JNILocalConverter _lcvt(__env,__jc);
  jstring ret=(jstring)_lcvt.c2j_string(
  ((FbxClassId *) lpjFbxClassId)->GetFbxFileTypeName(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pAskParent)
  ));
  return ret;
}
  /// const char *  GetFbxFileSubTypeName () const
extern "C" JNIEXPORT jstring JNICALL Java_fbxsdk_FbxClassId_GetFbxFileSubTypeName(JNIEnv * __env, jclass __jc,jlong lpjFbxClassId)
{
  JNILocalConverter _lcvt(__env,__jc);
  jstring ret=(jstring)_lcvt.c2j_string(
  ((FbxClassId *) lpjFbxClassId)->GetFbxFileSubTypeName(
  ));
  return ret;
}
  /// bool  IsValid () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxClassId_IsValid(JNIEnv * __env, jclass __jc,jlong lpjFbxClassId)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxClassId *) lpjFbxClassId)->IsValid(
  ));
  return ret;
}
  /// void  SetObjectTypePrefix (const char *pObjectTypePrefix)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxClassId_SetObjectTypePrefix(JNIEnv * __env, jclass __jc,jlong lpjFbxClassId,jstring pObjectTypePrefix)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxClassId *) lpjFbxClassId)->SetObjectTypePrefix(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pObjectTypePrefix)
  );
}
  /// const char *  GetObjectTypePrefix ()
extern "C" JNIEXPORT jstring JNICALL Java_fbxsdk_FbxClassId_GetObjectTypePrefix(JNIEnv * __env, jclass __jc,jlong lpjFbxClassId)
{
  JNILocalConverter _lcvt(__env,__jc);
  jstring ret=(jstring)_lcvt.c2j_string(
  ((FbxClassId *) lpjFbxClassId)->GetObjectTypePrefix(
  ));
  return ret;
}
  /// FbxPropertyHandle *  GetRootClassDefaultPropertyHandle ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxClassId_GetRootClassDefaultPropertyHandle(JNIEnv * __env, jclass __jc,jlong lpjFbxClassId)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxPropertyHandle>(
  ((FbxClassId *) lpjFbxClassId)->GetRootClassDefaultPropertyHandle(
  ));
  return ret;
}
  /// int  ClassInstanceIncRef ()
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxClassId_ClassInstanceIncRef(JNIEnv * __env, jclass __jc,jlong lpjFbxClassId)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxClassId *) lpjFbxClassId)->ClassInstanceIncRef(
  ));
  return ret;
}
  /// int  ClassInstanceDecRef ()
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxClassId_ClassInstanceDecRef(JNIEnv * __env, jclass __jc,jlong lpjFbxClassId)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxClassId *) lpjFbxClassId)->ClassInstanceDecRef(
  ));
  return ret;
}
  /// int  GetInstanceRef ()
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxClassId_GetInstanceRef(JNIEnv * __env, jclass __jc,jlong lpjFbxClassId)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxClassId *) lpjFbxClassId)->GetInstanceRef(
  ));
  return ret;
}
  /// void meDestroy(FbxClassId * lpFbxClassId)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxClassId_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxClassId)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxClassId *) lpjFbxClassId
  );
}
