//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// void  Begin (EAction pAction, float pX, float pY)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCameraManipulator_Begin(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraManipulator,jint pAction,jfloat pX,jfloat pY)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCameraManipulator *) lpjFbxCameraManipulator)->Begin(
  ( FbxCameraManipulator::EAction  )  _lcvt.j2c<jint,FbxCameraManipulator::EAction >(pAction)
  ,
  ( float  )  _lcvt.j2c<jfloat, float  >(pX)
  ,
  ( float  )  _lcvt.j2c<jfloat, float  >(pY)
  );
}
  /// void  Notify (float pX, float pY, float pZ=0)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCameraManipulator_Notify(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraManipulator,jfloat pX,jfloat pY,jfloat pZ)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCameraManipulator *) lpjFbxCameraManipulator)->Notify(
  ( float  )  _lcvt.j2c<jfloat, float  >(pX)
  ,
  ( float  )  _lcvt.j2c<jfloat, float  >(pY)
  ,
  ( float  )  _lcvt.j2c<jfloat, float  >(pZ)
  );
}
  /// void  End ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCameraManipulator_End(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraManipulator)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCameraManipulator *) lpjFbxCameraManipulator)->End(
  );
}
  /// void  FrameAll (const FbxTime &pTime=FBXSDK_TIME_INFINITE)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCameraManipulator_FrameAll(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraManipulator,jobject pTime)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCameraManipulator *) lpjFbxCameraManipulator)->FrameAll(
  (const FbxTime  &) * _lcvt.j2c_object_ref<jobject,FbxTime >(pTime)
  );
}
  /// void  FrameSelected (const FbxTime &pTime=FBXSDK_TIME_INFINITE)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCameraManipulator_FrameSelected(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraManipulator,jobject pTime)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCameraManipulator *) lpjFbxCameraManipulator)->FrameSelected(
  (const FbxTime  &) * _lcvt.j2c_object_ref<jobject,FbxTime >(pTime)
  );
}
  /// EAction  GetCurrentAction () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxCameraManipulator_GetCurrentAction(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraManipulator)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxCameraManipulator::EAction  >(
  ((FbxCameraManipulator *) lpjFbxCameraManipulator)->GetCurrentAction(
  ));
  return ret;
}
  /// FbxPropertyT< FbxReference >  Camera
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCameraManipulator_mepSetCamera(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraManipulator,jlong lpFbxReference)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCameraManipulator *) lpjFbxCameraManipulator)->Camera.Set(
  ( FbxReference  )  _lcvt.j2c<jlong, FbxReference  >(lpFbxReference)
  );
}
  /// FbxPropertyT< FbxReference >  Camera
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCameraManipulator_mepGetCamera(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraManipulator)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j<jlong,  FbxReference  >(
  ((FbxCameraManipulator *) lpjFbxCameraManipulator)->Camera.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxReference >  Camera
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCameraManipulator_mptGetCamera(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraManipulator)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxReference   >(
   (&((FbxCameraManipulator *) lpjFbxCameraManipulator)->Camera
  ));
  return ret;
}
  /// FbxPropertyT< FbxFloat >  ViewportWidth
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCameraManipulator_mepSetViewportWidth(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraManipulator,jfloat lpFbxFloat)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCameraManipulator *) lpjFbxCameraManipulator)->ViewportWidth.Set(
  ( FbxFloat  )  _lcvt.j2c<jfloat, FbxFloat  >(lpFbxFloat)
  );
}
  /// FbxPropertyT< FbxFloat >  ViewportWidth
extern "C" JNIEXPORT jfloat JNICALL Java_fbxsdk_FbxCameraManipulator_mepGetViewportWidth(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraManipulator)
{
  JNILocalConverter _lcvt(__env,__jc);
  jfloat ret=(jfloat)_lcvt.c2j<jfloat,  FbxFloat  >(
  ((FbxCameraManipulator *) lpjFbxCameraManipulator)->ViewportWidth.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxFloat >  ViewportWidth
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCameraManipulator_mptGetViewportWidth(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraManipulator)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxFloat   >(
   (&((FbxCameraManipulator *) lpjFbxCameraManipulator)->ViewportWidth
  ));
  return ret;
}
  /// FbxPropertyT< FbxFloat >  ViewportHeight
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCameraManipulator_mepSetViewportHeight(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraManipulator,jfloat lpFbxFloat)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCameraManipulator *) lpjFbxCameraManipulator)->ViewportHeight.Set(
  ( FbxFloat  )  _lcvt.j2c<jfloat, FbxFloat  >(lpFbxFloat)
  );
}
  /// FbxPropertyT< FbxFloat >  ViewportHeight
extern "C" JNIEXPORT jfloat JNICALL Java_fbxsdk_FbxCameraManipulator_mepGetViewportHeight(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraManipulator)
{
  JNILocalConverter _lcvt(__env,__jc);
  jfloat ret=(jfloat)_lcvt.c2j<jfloat,  FbxFloat  >(
  ((FbxCameraManipulator *) lpjFbxCameraManipulator)->ViewportHeight.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxFloat >  ViewportHeight
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCameraManipulator_mptGetViewportHeight(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraManipulator)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxFloat   >(
   (&((FbxCameraManipulator *) lpjFbxCameraManipulator)->ViewportHeight
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  InvertX
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCameraManipulator_mepSetInvertX(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraManipulator,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCameraManipulator *) lpjFbxCameraManipulator)->InvertX.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  InvertX
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCameraManipulator_mepGetInvertX(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraManipulator)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxCameraManipulator *) lpjFbxCameraManipulator)->InvertX.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  InvertX
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCameraManipulator_mptGetInvertX(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraManipulator)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxCameraManipulator *) lpjFbxCameraManipulator)->InvertX
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  InvertY
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCameraManipulator_mepSetInvertY(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraManipulator,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCameraManipulator *) lpjFbxCameraManipulator)->InvertY.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  InvertY
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCameraManipulator_mepGetInvertY(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraManipulator)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxCameraManipulator *) lpjFbxCameraManipulator)->InvertY.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  InvertY
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCameraManipulator_mptGetInvertY(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraManipulator)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxCameraManipulator *) lpjFbxCameraManipulator)->InvertY
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  Restore
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCameraManipulator_mepSetRestore(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraManipulator,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCameraManipulator *) lpjFbxCameraManipulator)->Restore.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  Restore
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCameraManipulator_mepGetRestore(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraManipulator)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxCameraManipulator *) lpjFbxCameraManipulator)->Restore.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  Restore
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCameraManipulator_mptGetRestore(JNIEnv * __env, jclass __jc,jlong lpjFbxCameraManipulator)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxCameraManipulator *) lpjFbxCameraManipulator)->Restore
  ));
  return ret;
}
  /// FbxCameraManipulator * Create( FbxObject* lpFbxObject,  const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCameraManipulator_Create(JNIEnv * __env, jclass __jc,jlong lpFbxObject,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxCameraManipulator>(
  FbxCameraManipulator::Create(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(lpFbxObject)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
