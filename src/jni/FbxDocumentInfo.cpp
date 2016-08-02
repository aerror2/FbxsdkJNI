
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// void  Clear ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxDocumentInfo_Clear(JNIEnv * __env, jclass __jc,jlong lpjFbxDocumentInfo)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxDocumentInfo *) lpjFbxDocumentInfo)->Clear(
  );
}
  /// FbxThumbnail *  GetSceneThumbnail ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxDocumentInfo_GetSceneThumbnail(JNIEnv * __env, jclass __jc,jlong lpjFbxDocumentInfo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxThumbnail>(
  ((FbxDocumentInfo *) lpjFbxDocumentInfo)->GetSceneThumbnail(
  ));
  return ret;
}
  /// void  SetSceneThumbnail (FbxThumbnail *pSceneThumbnail)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxDocumentInfo_SetSceneThumbnail(JNIEnv * __env, jclass __jc,jlong lpjFbxDocumentInfo,jlong pSceneThumbnail)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxDocumentInfo *) lpjFbxDocumentInfo)->SetSceneThumbnail(
  ( FbxThumbnail  *)  _lcvt.j2c_object_pt<jlong, FbxThumbnail>(pSceneThumbnail)
  );
}
  /// FbxPropertyT< FbxString >  LastSavedUrl
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxDocumentInfo_mepSetLastSavedUrl(JNIEnv * __env, jclass __jc,jlong lpjFbxDocumentInfo,jlong lpFbxString)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxDocumentInfo *) lpjFbxDocumentInfo)->LastSavedUrl.Set(
  ( FbxString  )  _lcvt.j2c_object<jlong,FbxString >(lpFbxString)
  );
}
  /// FbxPropertyT< FbxString >  LastSavedUrl
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxDocumentInfo_mepGetLastSavedUrl(JNIEnv * __env, jclass __jc,jlong lpjFbxDocumentInfo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxString>(
  ((FbxDocumentInfo *) lpjFbxDocumentInfo)->LastSavedUrl.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxString >  LastSavedUrl
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxDocumentInfo_mptGetLastSavedUrl(JNIEnv * __env, jclass __jc,jlong lpjFbxDocumentInfo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxString   >(
   (&((FbxDocumentInfo *) lpjFbxDocumentInfo)->LastSavedUrl
  ));
  return ret;
}
  /// FbxPropertyT< FbxString >  Url
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxDocumentInfo_mepSetUrl(JNIEnv * __env, jclass __jc,jlong lpjFbxDocumentInfo,jlong lpFbxString)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxDocumentInfo *) lpjFbxDocumentInfo)->Url.Set(
  ( FbxString  )  _lcvt.j2c_object<jlong,FbxString >(lpFbxString)
  );
}
  /// FbxPropertyT< FbxString >  Url
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxDocumentInfo_mepGetUrl(JNIEnv * __env, jclass __jc,jlong lpjFbxDocumentInfo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxString>(
  ((FbxDocumentInfo *) lpjFbxDocumentInfo)->Url.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxString >  Url
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxDocumentInfo_mptGetUrl(JNIEnv * __env, jclass __jc,jlong lpjFbxDocumentInfo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxString   >(
   (&((FbxDocumentInfo *) lpjFbxDocumentInfo)->Url
  ));
  return ret;
}
  /// FbxPropertyT< FbxString >  Original_ApplicationVendor
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxDocumentInfo_mepSetOriginal_ApplicationVendor(JNIEnv * __env, jclass __jc,jlong lpjFbxDocumentInfo,jlong lpFbxString)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxDocumentInfo *) lpjFbxDocumentInfo)->Original_ApplicationVendor.Set(
  ( FbxString  )  _lcvt.j2c_object<jlong,FbxString >(lpFbxString)
  );
}
  /// FbxPropertyT< FbxString >  Original_ApplicationVendor
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxDocumentInfo_mepGetOriginal_ApplicationVendor(JNIEnv * __env, jclass __jc,jlong lpjFbxDocumentInfo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxString>(
  ((FbxDocumentInfo *) lpjFbxDocumentInfo)->Original_ApplicationVendor.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxString >  Original_ApplicationVendor
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxDocumentInfo_mptGetOriginal_ApplicationVendor(JNIEnv * __env, jclass __jc,jlong lpjFbxDocumentInfo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxString   >(
   (&((FbxDocumentInfo *) lpjFbxDocumentInfo)->Original_ApplicationVendor
  ));
  return ret;
}
  /// FbxPropertyT< FbxString >  Original_ApplicationName
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxDocumentInfo_mepSetOriginal_ApplicationName(JNIEnv * __env, jclass __jc,jlong lpjFbxDocumentInfo,jlong lpFbxString)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxDocumentInfo *) lpjFbxDocumentInfo)->Original_ApplicationName.Set(
  ( FbxString  )  _lcvt.j2c_object<jlong,FbxString >(lpFbxString)
  );
}
  /// FbxPropertyT< FbxString >  Original_ApplicationName
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxDocumentInfo_mepGetOriginal_ApplicationName(JNIEnv * __env, jclass __jc,jlong lpjFbxDocumentInfo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxString>(
  ((FbxDocumentInfo *) lpjFbxDocumentInfo)->Original_ApplicationName.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxString >  Original_ApplicationName
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxDocumentInfo_mptGetOriginal_ApplicationName(JNIEnv * __env, jclass __jc,jlong lpjFbxDocumentInfo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxString   >(
   (&((FbxDocumentInfo *) lpjFbxDocumentInfo)->Original_ApplicationName
  ));
  return ret;
}
  /// FbxPropertyT< FbxString >  Original_ApplicationVersion
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxDocumentInfo_mepSetOriginal_ApplicationVersion(JNIEnv * __env, jclass __jc,jlong lpjFbxDocumentInfo,jlong lpFbxString)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxDocumentInfo *) lpjFbxDocumentInfo)->Original_ApplicationVersion.Set(
  ( FbxString  )  _lcvt.j2c_object<jlong,FbxString >(lpFbxString)
  );
}
  /// FbxPropertyT< FbxString >  Original_ApplicationVersion
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxDocumentInfo_mepGetOriginal_ApplicationVersion(JNIEnv * __env, jclass __jc,jlong lpjFbxDocumentInfo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxString>(
  ((FbxDocumentInfo *) lpjFbxDocumentInfo)->Original_ApplicationVersion.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxString >  Original_ApplicationVersion
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxDocumentInfo_mptGetOriginal_ApplicationVersion(JNIEnv * __env, jclass __jc,jlong lpjFbxDocumentInfo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxString   >(
   (&((FbxDocumentInfo *) lpjFbxDocumentInfo)->Original_ApplicationVersion
  ));
  return ret;
}
  /// FbxPropertyT< FbxString >  Original_FileName
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxDocumentInfo_mepSetOriginal_FileName(JNIEnv * __env, jclass __jc,jlong lpjFbxDocumentInfo,jlong lpFbxString)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxDocumentInfo *) lpjFbxDocumentInfo)->Original_FileName.Set(
  ( FbxString  )  _lcvt.j2c_object<jlong,FbxString >(lpFbxString)
  );
}
  /// FbxPropertyT< FbxString >  Original_FileName
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxDocumentInfo_mepGetOriginal_FileName(JNIEnv * __env, jclass __jc,jlong lpjFbxDocumentInfo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxString>(
  ((FbxDocumentInfo *) lpjFbxDocumentInfo)->Original_FileName.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxString >  Original_FileName
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxDocumentInfo_mptGetOriginal_FileName(JNIEnv * __env, jclass __jc,jlong lpjFbxDocumentInfo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxString   >(
   (&((FbxDocumentInfo *) lpjFbxDocumentInfo)->Original_FileName
  ));
  return ret;
}
  /// FbxPropertyT< FbxDateTime >  Original_DateTime_GMT
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxDocumentInfo_mepSetOriginal_DateTime_GMT(JNIEnv * __env, jclass __jc,jlong lpjFbxDocumentInfo,jlong lpFbxDateTime)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxDocumentInfo *) lpjFbxDocumentInfo)->Original_DateTime_GMT.Set(
  ( FbxDateTime  )  _lcvt.j2c_object<jlong,FbxDateTime >(lpFbxDateTime)
  );
}
  /// FbxPropertyT< FbxDateTime >  Original_DateTime_GMT
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxDocumentInfo_mepGetOriginal_DateTime_GMT(JNIEnv * __env, jclass __jc,jlong lpjFbxDocumentInfo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxDateTime>(
  ((FbxDocumentInfo *) lpjFbxDocumentInfo)->Original_DateTime_GMT.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDateTime >  Original_DateTime_GMT
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxDocumentInfo_mptGetOriginal_DateTime_GMT(JNIEnv * __env, jclass __jc,jlong lpjFbxDocumentInfo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDateTime   >(
   (&((FbxDocumentInfo *) lpjFbxDocumentInfo)->Original_DateTime_GMT
  ));
  return ret;
}
  /// FbxPropertyT< FbxString >  LastSaved_ApplicationVendor
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxDocumentInfo_mepSetLastSaved_ApplicationVendor(JNIEnv * __env, jclass __jc,jlong lpjFbxDocumentInfo,jlong lpFbxString)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxDocumentInfo *) lpjFbxDocumentInfo)->LastSaved_ApplicationVendor.Set(
  ( FbxString  )  _lcvt.j2c_object<jlong,FbxString >(lpFbxString)
  );
}
  /// FbxPropertyT< FbxString >  LastSaved_ApplicationVendor
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxDocumentInfo_mepGetLastSaved_ApplicationVendor(JNIEnv * __env, jclass __jc,jlong lpjFbxDocumentInfo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxString>(
  ((FbxDocumentInfo *) lpjFbxDocumentInfo)->LastSaved_ApplicationVendor.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxString >  LastSaved_ApplicationVendor
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxDocumentInfo_mptGetLastSaved_ApplicationVendor(JNIEnv * __env, jclass __jc,jlong lpjFbxDocumentInfo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxString   >(
   (&((FbxDocumentInfo *) lpjFbxDocumentInfo)->LastSaved_ApplicationVendor
  ));
  return ret;
}
  /// FbxPropertyT< FbxString >  LastSaved_ApplicationName
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxDocumentInfo_mepSetLastSaved_ApplicationName(JNIEnv * __env, jclass __jc,jlong lpjFbxDocumentInfo,jlong lpFbxString)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxDocumentInfo *) lpjFbxDocumentInfo)->LastSaved_ApplicationName.Set(
  ( FbxString  )  _lcvt.j2c_object<jlong,FbxString >(lpFbxString)
  );
}
  /// FbxPropertyT< FbxString >  LastSaved_ApplicationName
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxDocumentInfo_mepGetLastSaved_ApplicationName(JNIEnv * __env, jclass __jc,jlong lpjFbxDocumentInfo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxString>(
  ((FbxDocumentInfo *) lpjFbxDocumentInfo)->LastSaved_ApplicationName.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxString >  LastSaved_ApplicationName
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxDocumentInfo_mptGetLastSaved_ApplicationName(JNIEnv * __env, jclass __jc,jlong lpjFbxDocumentInfo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxString   >(
   (&((FbxDocumentInfo *) lpjFbxDocumentInfo)->LastSaved_ApplicationName
  ));
  return ret;
}
  /// FbxPropertyT< FbxString >  LastSaved_ApplicationVersion
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxDocumentInfo_mepSetLastSaved_ApplicationVersion(JNIEnv * __env, jclass __jc,jlong lpjFbxDocumentInfo,jlong lpFbxString)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxDocumentInfo *) lpjFbxDocumentInfo)->LastSaved_ApplicationVersion.Set(
  ( FbxString  )  _lcvt.j2c_object<jlong,FbxString >(lpFbxString)
  );
}
  /// FbxPropertyT< FbxString >  LastSaved_ApplicationVersion
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxDocumentInfo_mepGetLastSaved_ApplicationVersion(JNIEnv * __env, jclass __jc,jlong lpjFbxDocumentInfo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxString>(
  ((FbxDocumentInfo *) lpjFbxDocumentInfo)->LastSaved_ApplicationVersion.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxString >  LastSaved_ApplicationVersion
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxDocumentInfo_mptGetLastSaved_ApplicationVersion(JNIEnv * __env, jclass __jc,jlong lpjFbxDocumentInfo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxString   >(
   (&((FbxDocumentInfo *) lpjFbxDocumentInfo)->LastSaved_ApplicationVersion
  ));
  return ret;
}
  /// FbxPropertyT< FbxDateTime >  LastSaved_DateTime_GMT
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxDocumentInfo_mepSetLastSaved_DateTime_GMT(JNIEnv * __env, jclass __jc,jlong lpjFbxDocumentInfo,jlong lpFbxDateTime)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxDocumentInfo *) lpjFbxDocumentInfo)->LastSaved_DateTime_GMT.Set(
  ( FbxDateTime  )  _lcvt.j2c_object<jlong,FbxDateTime >(lpFbxDateTime)
  );
}
  /// FbxPropertyT< FbxDateTime >  LastSaved_DateTime_GMT
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxDocumentInfo_mepGetLastSaved_DateTime_GMT(JNIEnv * __env, jclass __jc,jlong lpjFbxDocumentInfo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxDateTime>(
  ((FbxDocumentInfo *) lpjFbxDocumentInfo)->LastSaved_DateTime_GMT.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDateTime >  LastSaved_DateTime_GMT
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxDocumentInfo_mptGetLastSaved_DateTime_GMT(JNIEnv * __env, jclass __jc,jlong lpjFbxDocumentInfo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDateTime   >(
   (&((FbxDocumentInfo *) lpjFbxDocumentInfo)->LastSaved_DateTime_GMT
  ));
  return ret;
}
  /// FbxPropertyT< FbxString >  EmbeddedUrl
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxDocumentInfo_mepSetEmbeddedUrl(JNIEnv * __env, jclass __jc,jlong lpjFbxDocumentInfo,jlong lpFbxString)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxDocumentInfo *) lpjFbxDocumentInfo)->EmbeddedUrl.Set(
  ( FbxString  )  _lcvt.j2c_object<jlong,FbxString >(lpFbxString)
  );
}
  /// FbxPropertyT< FbxString >  EmbeddedUrl
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxDocumentInfo_mepGetEmbeddedUrl(JNIEnv * __env, jclass __jc,jlong lpjFbxDocumentInfo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxString>(
  ((FbxDocumentInfo *) lpjFbxDocumentInfo)->EmbeddedUrl.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxString >  EmbeddedUrl
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxDocumentInfo_mptGetEmbeddedUrl(JNIEnv * __env, jclass __jc,jlong lpjFbxDocumentInfo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxString   >(
   (&((FbxDocumentInfo *) lpjFbxDocumentInfo)->EmbeddedUrl
  ));
  return ret;
}
  /// FbxDocumentInfo * Create( FbxObject* lpFbxObject,  const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxDocumentInfo_Create(JNIEnv * __env, jclass __jc,jlong lpFbxObject,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxDocumentInfo>(
  FbxDocumentInfo::Create(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(lpFbxObject)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
