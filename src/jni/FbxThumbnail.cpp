
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// void  SetDataFormat (EDataFormat pDataFormat)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxThumbnail_SetDataFormat(JNIEnv * __env, jclass __jc,jlong lpjFbxThumbnail,jint pDataFormat)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxThumbnail *) lpjFbxThumbnail)->SetDataFormat(
  ( FbxThumbnail::EDataFormat  )  _lcvt.j2c<jint,FbxThumbnail::EDataFormat >(pDataFormat)
  );
}
  /// EDataFormat  GetDataFormat () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxThumbnail_GetDataFormat(JNIEnv * __env, jclass __jc,jlong lpjFbxThumbnail)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxThumbnail::EDataFormat  >(
  ((FbxThumbnail *) lpjFbxThumbnail)->GetDataFormat(
  ));
  return ret;
}
  /// void  SetSize (EImageSize pImageSize)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxThumbnail_SetSize(JNIEnv * __env, jclass __jc,jlong lpjFbxThumbnail,jint pImageSize)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxThumbnail *) lpjFbxThumbnail)->SetSize(
  ( FbxThumbnail::EImageSize  )  _lcvt.j2c<jint,FbxThumbnail::EImageSize >(pImageSize)
  );
}
  /// EImageSize  GetSize () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxThumbnail_GetSize(JNIEnv * __env, jclass __jc,jlong lpjFbxThumbnail)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxThumbnail::EImageSize  >(
  ((FbxThumbnail *) lpjFbxThumbnail)->GetSize(
  ));
  return ret;
}
  /// unsigned long  GetSizeInBytes () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxThumbnail_GetSizeInBytes(JNIEnv * __env, jclass __jc,jlong lpjFbxThumbnail)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j<jlong, unsigned long  >(
  ((FbxThumbnail *) lpjFbxThumbnail)->GetSizeInBytes(
  ));
  return ret;
}
  /// bool  SetThumbnailImage (const FbxUChar *pImage)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxThumbnail_SetThumbnailImage(JNIEnv * __env, jclass __jc,jlong lpjFbxThumbnail,jbyteArray pImage)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxThumbnail *) lpjFbxThumbnail)->SetThumbnailImage(
  (const FbxUChar  *)  _lcvt.j2c_FbxUChar_pt<jbyteArray,FbxUChar>(pImage)
  ));
  return ret;
}
  /// FbxUChar *  GetThumbnailImage () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxThumbnail_GetThumbnailImage(JNIEnv * __env, jclass __jc,jlong lpjFbxThumbnail)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_pt<jlong,  FbxUChar  *>(
  ((FbxThumbnail *) lpjFbxThumbnail)->GetThumbnailImage(
  ));
  return ret;
}
  /// FbxPropertyT< FbxInt >  CustomHeight
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxThumbnail_mepSetCustomHeight(JNIEnv * __env, jclass __jc,jlong lpjFbxThumbnail,jint lpFbxInt)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxThumbnail *) lpjFbxThumbnail)->CustomHeight.Set(
  ( FbxInt  )  _lcvt.j2c<jint, FbxInt  >(lpFbxInt)
  );
}
  /// FbxPropertyT< FbxInt >  CustomHeight
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxThumbnail_mepGetCustomHeight(JNIEnv * __env, jclass __jc,jlong lpjFbxThumbnail)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxInt  >(
  ((FbxThumbnail *) lpjFbxThumbnail)->CustomHeight.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxInt >  CustomHeight
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxThumbnail_mptGetCustomHeight(JNIEnv * __env, jclass __jc,jlong lpjFbxThumbnail)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxInt   >(
   (&((FbxThumbnail *) lpjFbxThumbnail)->CustomHeight
  ));
  return ret;
}
  /// FbxPropertyT< FbxInt >  CustomWidth
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxThumbnail_mepSetCustomWidth(JNIEnv * __env, jclass __jc,jlong lpjFbxThumbnail,jint lpFbxInt)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxThumbnail *) lpjFbxThumbnail)->CustomWidth.Set(
  ( FbxInt  )  _lcvt.j2c<jint, FbxInt  >(lpFbxInt)
  );
}
  /// FbxPropertyT< FbxInt >  CustomWidth
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxThumbnail_mepGetCustomWidth(JNIEnv * __env, jclass __jc,jlong lpjFbxThumbnail)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxInt  >(
  ((FbxThumbnail *) lpjFbxThumbnail)->CustomWidth.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxInt >  CustomWidth
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxThumbnail_mptGetCustomWidth(JNIEnv * __env, jclass __jc,jlong lpjFbxThumbnail)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxInt   >(
   (&((FbxThumbnail *) lpjFbxThumbnail)->CustomWidth
  ));
  return ret;
}
  /// FbxThumbnail * Create( FbxObject* lpFbxObject,  const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxThumbnail_Create(JNIEnv * __env, jclass __jc,jlong lpFbxObject,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxThumbnail>(
  FbxThumbnail::Create(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(lpFbxObject)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
