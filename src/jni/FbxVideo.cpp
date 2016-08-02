
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// double  GetFrameRate () const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxVideo_GetFrameRate(JNIEnv * __env, jclass __jc,jlong lpjFbxVideo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxVideo *) lpjFbxVideo)->GetFrameRate(
  ));
  return ret;
}
  /// int  GetLastFrame () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxVideo_GetLastFrame(JNIEnv * __env, jclass __jc,jlong lpjFbxVideo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxVideo *) lpjFbxVideo)->GetLastFrame(
  ));
  return ret;
}
  /// int  GetWidth () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxVideo_GetWidth(JNIEnv * __env, jclass __jc,jlong lpjFbxVideo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxVideo *) lpjFbxVideo)->GetWidth(
  ));
  return ret;
}
  /// int  GetHeight () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxVideo_GetHeight(JNIEnv * __env, jclass __jc,jlong lpjFbxVideo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxVideo *) lpjFbxVideo)->GetHeight(
  ));
  return ret;
}
  /// void  SetStartFrame (int pStartFrame)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxVideo_SetStartFrame(JNIEnv * __env, jclass __jc,jlong lpjFbxVideo,jint pStartFrame)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxVideo *) lpjFbxVideo)->SetStartFrame(
  ( int  )  _lcvt.j2c<jint, int  >(pStartFrame)
  );
}
  /// int  GetStartFrame () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxVideo_GetStartFrame(JNIEnv * __env, jclass __jc,jlong lpjFbxVideo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxVideo *) lpjFbxVideo)->GetStartFrame(
  ));
  return ret;
}
  /// void  SetStopFrame (int pStopFrame)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxVideo_SetStopFrame(JNIEnv * __env, jclass __jc,jlong lpjFbxVideo,jint pStopFrame)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxVideo *) lpjFbxVideo)->SetStopFrame(
  ( int  )  _lcvt.j2c<jint, int  >(pStopFrame)
  );
}
  /// int  GetStopFrame () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxVideo_GetStopFrame(JNIEnv * __env, jclass __jc,jlong lpjFbxVideo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxVideo *) lpjFbxVideo)->GetStopFrame(
  ));
  return ret;
}
  /// void  SetPlaySpeed (double pPlaySpeed)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxVideo_SetPlaySpeed(JNIEnv * __env, jclass __jc,jlong lpjFbxVideo,jdouble pPlaySpeed)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxVideo *) lpjFbxVideo)->SetPlaySpeed(
  ( double  )  _lcvt.j2c<jdouble, double  >(pPlaySpeed)
  );
}
  /// double  GetPlaySpeed () const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxVideo_GetPlaySpeed(JNIEnv * __env, jclass __jc,jlong lpjFbxVideo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxVideo *) lpjFbxVideo)->GetPlaySpeed(
  ));
  return ret;
}
  /// void  SetOffset (FbxTime pTime)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxVideo_SetOffset(JNIEnv * __env, jclass __jc,jlong lpjFbxVideo,jlong pTime)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxVideo *) lpjFbxVideo)->SetOffset(
  ( FbxTime  )  _lcvt.j2c_object<jlong,FbxTime >(pTime)
  );
}
  /// FbxTime  GetOffset () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxVideo_GetOffset(JNIEnv * __env, jclass __jc,jlong lpjFbxVideo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxTime>(
  ((FbxVideo *) lpjFbxVideo)->GetOffset(
  ));
  return ret;
}
  /// void  SetFreeRunning (bool pState)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxVideo_SetFreeRunning(JNIEnv * __env, jclass __jc,jlong lpjFbxVideo,jboolean pState)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxVideo *) lpjFbxVideo)->SetFreeRunning(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pState)
  );
}
  /// bool  GetFreeRunning () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxVideo_GetFreeRunning(JNIEnv * __env, jclass __jc,jlong lpjFbxVideo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxVideo *) lpjFbxVideo)->GetFreeRunning(
  ));
  return ret;
}
  /// void  SetLoop (bool pLoop)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxVideo_SetLoop(JNIEnv * __env, jclass __jc,jlong lpjFbxVideo,jboolean pLoop)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxVideo *) lpjFbxVideo)->SetLoop(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pLoop)
  );
}
  /// bool  GetLoop () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxVideo_GetLoop(JNIEnv * __env, jclass __jc,jlong lpjFbxVideo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxVideo *) lpjFbxVideo)->GetLoop(
  ));
  return ret;
}
  /// void  SetInterlaceMode (EInterlaceMode pInterlaceMode)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxVideo_SetInterlaceMode(JNIEnv * __env, jclass __jc,jlong lpjFbxVideo,jint pInterlaceMode)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxVideo *) lpjFbxVideo)->SetInterlaceMode(
  ( FbxVideo::EInterlaceMode  )  _lcvt.j2c<jint,FbxVideo::EInterlaceMode >(pInterlaceMode)
  );
}
  /// EInterlaceMode  GetInterlaceMode () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxVideo_GetInterlaceMode(JNIEnv * __env, jclass __jc,jlong lpjFbxVideo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxVideo::EInterlaceMode  >(
  ((FbxVideo *) lpjFbxVideo)->GetInterlaceMode(
  ));
  return ret;
}
  /// void  SetAccessMode (EAccessMode pAccessMode)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxVideo_SetAccessMode(JNIEnv * __env, jclass __jc,jlong lpjFbxVideo,jint pAccessMode)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxVideo *) lpjFbxVideo)->SetAccessMode(
  ( FbxVideo::EAccessMode  )  _lcvt.j2c<jint,FbxVideo::EAccessMode >(pAccessMode)
  );
}
  /// EAccessMode  GetAccessMode () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxVideo_GetAccessMode(JNIEnv * __env, jclass __jc,jlong lpjFbxVideo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxVideo::EAccessMode  >(
  ((FbxVideo *) lpjFbxVideo)->GetAccessMode(
  ));
  return ret;
}
  /// void  Reset ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxVideo_Reset(JNIEnv * __env, jclass __jc,jlong lpjFbxVideo)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxVideo *) lpjFbxVideo)->Reset(
  );
}
  /// void  ImageTextureSetMipMap (bool pUseMipMap)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxVideo_ImageTextureSetMipMap(JNIEnv * __env, jclass __jc,jlong lpjFbxVideo,jboolean pUseMipMap)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxVideo *) lpjFbxVideo)->ImageTextureSetMipMap(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pUseMipMap)
  );
}
  /// bool  ImageTextureGetMipMap () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxVideo_ImageTextureGetMipMap(JNIEnv * __env, jclass __jc,jlong lpjFbxVideo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxVideo *) lpjFbxVideo)->ImageTextureGetMipMap(
  ));
  return ret;
}
  /// bool  SetFileName (const char *pName)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxVideo_SetFileName(JNIEnv * __env, jclass __jc,jlong lpjFbxVideo,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxVideo *) lpjFbxVideo)->SetFileName(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
  /// FbxString  GetFileName () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxVideo_GetFileName(JNIEnv * __env, jclass __jc,jlong lpjFbxVideo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxString>(
  ((FbxVideo *) lpjFbxVideo)->GetFileName(
  ));
  return ret;
}
  /// bool  SetRelativeFileName (const char *pName)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxVideo_SetRelativeFileName(JNIEnv * __env, jclass __jc,jlong lpjFbxVideo,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxVideo *) lpjFbxVideo)->SetRelativeFileName(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
  /// const char *  GetRelativeFileName () const
extern "C" JNIEXPORT jstring JNICALL Java_fbxsdk_FbxVideo_GetRelativeFileName(JNIEnv * __env, jclass __jc,jlong lpjFbxVideo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jstring ret=(jstring)_lcvt.c2j_string(
  ((FbxVideo *) lpjFbxVideo)->GetRelativeFileName(
  ));
  return ret;
}
  /// void  SetImageSequence (bool pImageSequence)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxVideo_SetImageSequence(JNIEnv * __env, jclass __jc,jlong lpjFbxVideo,jboolean pImageSequence)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxVideo *) lpjFbxVideo)->SetImageSequence(
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pImageSequence)
  );
}
  /// bool  GetImageSequence () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxVideo_GetImageSequence(JNIEnv * __env, jclass __jc,jlong lpjFbxVideo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxVideo *) lpjFbxVideo)->GetImageSequence(
  ));
  return ret;
}
  /// void  SetImageSequenceOffset (int pOffset)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxVideo_SetImageSequenceOffset(JNIEnv * __env, jclass __jc,jlong lpjFbxVideo,jint pOffset)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxVideo *) lpjFbxVideo)->SetImageSequenceOffset(
  ( int  )  _lcvt.j2c<jint, int  >(pOffset)
  );
}
  /// int  GetImageSequenceOffset () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxVideo_GetImageSequenceOffset(JNIEnv * __env, jclass __jc,jlong lpjFbxVideo)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxVideo *) lpjFbxVideo)->GetImageSequenceOffset(
  ));
  return ret;
}
  /// FbxVideo * Create( FbxObject* lpFbxObject,  const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxVideo_Create(JNIEnv * __env, jclass __jc,jlong lpFbxObject,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxVideo>(
  FbxVideo::Create(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(lpFbxObject)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
