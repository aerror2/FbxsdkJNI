//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// virtual FbxNodeAttribute::EType  GetAttributeType () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLine_GetAttributeType(JNIEnv * __env, jclass __jc,jlong lpjFbxLine)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxNodeAttribute::EType  >(
  ((FbxLine *) lpjFbxLine)->GetAttributeType(
  ));
  return ret;
}
  /// void  Reset ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLine_Reset(JNIEnv * __env, jclass __jc,jlong lpjFbxLine)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLine *) lpjFbxLine)->Reset(
  );
}
  /// void  SetIndexArraySize (int pCount)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLine_SetIndexArraySize(JNIEnv * __env, jclass __jc,jlong lpjFbxLine,jint pCount)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLine *) lpjFbxLine)->SetIndexArraySize(
  ( int  )  _lcvt.j2c<jint, int  >(pCount)
  );
}
  /// int  GetIndexArraySize () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLine_GetIndexArraySize(JNIEnv * __env, jclass __jc,jlong lpjFbxLine)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxLine *) lpjFbxLine)->GetIndexArraySize(
  ));
  return ret;
}
  /// FbxArray< int > *  GetIndexArray ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLine_GetIndexArray(JNIEnv * __env, jclass __jc,jlong lpjFbxLine)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxArray_pt<jlong,  int   >(
  ((FbxLine *) lpjFbxLine)->GetIndexArray(
  ));
  return ret;
}
  /// bool  SetPointIndexAt (int pValue, int pIndex, bool pAsEndPoint=false)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxLine_SetPointIndexAt(JNIEnv * __env, jclass __jc,jlong lpjFbxLine,jint pValue,jint pIndex,jboolean pAsEndPoint)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxLine *) lpjFbxLine)->SetPointIndexAt(
  ( int  )  _lcvt.j2c<jint, int  >(pValue)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pAsEndPoint)
  ));
  return ret;
}
  /// int  GetPointIndexAt (int pIndex) const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLine_GetPointIndexAt(JNIEnv * __env, jclass __jc,jlong lpjFbxLine,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxLine *) lpjFbxLine)->GetPointIndexAt(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// bool  AddPointIndex (int pValue, bool pAsEndPoint=false)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxLine_AddPointIndex(JNIEnv * __env, jclass __jc,jlong lpjFbxLine,jint pValue,jboolean pAsEndPoint)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxLine *) lpjFbxLine)->AddPointIndex(
  ( int  )  _lcvt.j2c<jint, int  >(pValue)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pAsEndPoint)
  ));
  return ret;
}
  /// FbxArray< int > *  GetEndPointArray ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLine_GetEndPointArray(JNIEnv * __env, jclass __jc,jlong lpjFbxLine)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxArray_pt<jlong,  int   >(
  ((FbxLine *) lpjFbxLine)->GetEndPointArray(
  ));
  return ret;
}
  /// bool  AddEndPoint (int pPointIndex)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxLine_AddEndPoint(JNIEnv * __env, jclass __jc,jlong lpjFbxLine,jint pPointIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxLine *) lpjFbxLine)->AddEndPoint(
  ( int  )  _lcvt.j2c<jint, int  >(pPointIndex)
  ));
  return ret;
}
  /// int  GetEndPointAt (int pEndPointIndex) const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLine_GetEndPointAt(JNIEnv * __env, jclass __jc,jlong lpjFbxLine,jint pEndPointIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxLine *) lpjFbxLine)->GetEndPointAt(
  ( int  )  _lcvt.j2c<jint, int  >(pEndPointIndex)
  ));
  return ret;
}
  /// int  GetEndPointCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxLine_GetEndPointCount(JNIEnv * __env, jclass __jc,jlong lpjFbxLine)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxLine *) lpjFbxLine)->GetEndPointCount(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  Renderable
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxLine_mepSetRenderable(JNIEnv * __env, jclass __jc,jlong lpjFbxLine,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxLine *) lpjFbxLine)->Renderable.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  Renderable
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxLine_mepGetRenderable(JNIEnv * __env, jclass __jc,jlong lpjFbxLine)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxLine *) lpjFbxLine)->Renderable.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  Renderable
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLine_mptGetRenderable(JNIEnv * __env, jclass __jc,jlong lpjFbxLine)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxLine *) lpjFbxLine)->Renderable
  ));
  return ret;
}
  /// FbxLine * Create( FbxGeometry* lpFbxGeometry,  const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxLine_Create(JNIEnv * __env, jclass __jc,jlong lpFbxGeometry,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxLine>(
  FbxLine::Create(
  ( FbxGeometry  *)  _lcvt.j2c_object_pt<jlong, FbxGeometry>(lpFbxGeometry)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
