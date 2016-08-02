//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// bool  IsIdentity (const double pThreshold=FBXSDK_TOLERANCE)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxAMatrix_IsIdentity(JNIEnv * __env, jclass __jc,jlong lpjFbxAMatrix,jdouble pThreshold)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxAMatrix *) lpjFbxAMatrix)->IsIdentity(
  (const double  )  _lcvt.j2c<jdouble,const double  >(pThreshold)
  ));
  return ret;
}
  /// FbxAMatrix ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAMatrix_meCreate(JNIEnv * __env, jclass __jc)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAMatrix>(
  new FbxAMatrix(
  ));
  return ret;
}
  /// FbxAMatrix (const FbxAMatrix &pOther)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAMatrix_meCreate1(JNIEnv * __env, jclass __jc,jobject pOther)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAMatrix>(
  new FbxAMatrix(
  (const FbxAMatrix  &) * _lcvt.j2c_object_ref<jobject,FbxAMatrix >(pOther)
  ));
  return ret;
}
  /// FbxAMatrix (const FbxVector4 &pT, const FbxVector4 &pR, const FbxVector4 &pS)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAMatrix_meCreate2(JNIEnv * __env, jclass __jc,jobject pT,jobject pR,jobject pS)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxAMatrix>(
  new FbxAMatrix(
  (const FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pT)
  ,
  (const FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pR)
  ,
  (const FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pS)
  ));
  return ret;
}
  /// ~FbxAMatrix ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAMatrix_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxAMatrix)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxAMatrix *) lpjFbxAMatrix
  );
}
  /// double  Get (int pY, int pX) const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxAMatrix_Get(JNIEnv * __env, jclass __jc,jlong lpjFbxAMatrix,jint pY,jint pX)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxAMatrix *) lpjFbxAMatrix)->Get(
  ( int  )  _lcvt.j2c<jint, int  >(pY)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pX)
  ));
  return ret;
}
  /// FbxVector4  GetT () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAMatrix_GetT(JNIEnv * __env, jclass __jc,jlong lpjFbxAMatrix)
{
  JNILocalConverter _lcvt(__env,__jc);
    FbxVector4 t =((FbxAMatrix *) lpjFbxAMatrix)->GetT(
    );
    
    
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxVector4>(t);
  return ret;
}
  /// FbxVector4  GetR () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAMatrix_GetR(JNIEnv * __env, jclass __jc,jlong lpjFbxAMatrix)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxVector4>(
  ((FbxAMatrix *) lpjFbxAMatrix)->GetR(
  ));
  return ret;
}
  /// FbxQuaternion  GetQ () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAMatrix_GetQ(JNIEnv * __env, jclass __jc,jlong lpjFbxAMatrix)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxQuaternion>(
  ((FbxAMatrix *) lpjFbxAMatrix)->GetQ(
  ));
  return ret;
}
  /// FbxVector4  GetS () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAMatrix_GetS(JNIEnv * __env, jclass __jc,jlong lpjFbxAMatrix)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxVector4>(
  ((FbxAMatrix *) lpjFbxAMatrix)->GetS(
  ));
  return ret;
}
  /// FbxVector4  GetRow (int pY) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAMatrix_GetRow(JNIEnv * __env, jclass __jc,jlong lpjFbxAMatrix,jint pY)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxVector4>(
  ((FbxAMatrix *) lpjFbxAMatrix)->GetRow(
  ( int  )  _lcvt.j2c<jint, int  >(pY)
  ));
  return ret;
}
  /// FbxVector4  GetColumn (int pX) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAMatrix_GetColumn(JNIEnv * __env, jclass __jc,jlong lpjFbxAMatrix,jint pX)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxVector4>(
  ((FbxAMatrix *) lpjFbxAMatrix)->GetColumn(
  ( int  )  _lcvt.j2c<jint, int  >(pX)
  ));
  return ret;
}
  /// void  SetIdentity ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAMatrix_SetIdentity(JNIEnv * __env, jclass __jc,jlong lpjFbxAMatrix)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAMatrix *) lpjFbxAMatrix)->SetIdentity(
  );
}
  /// void  SetT (const FbxVector4 &pT)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAMatrix_SetT(JNIEnv * __env, jclass __jc,jlong lpjFbxAMatrix,jobject pT)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAMatrix *) lpjFbxAMatrix)->SetT(
  (const FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pT)
  );
}
  /// void  SetR (const FbxVector4 &pR)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAMatrix_SetR(JNIEnv * __env, jclass __jc,jlong lpjFbxAMatrix,jobject pR)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAMatrix *) lpjFbxAMatrix)->SetR(
  (const FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pR)
  );
}
  /// void  SetQ (const FbxQuaternion &pQ)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAMatrix_SetQ(JNIEnv * __env, jclass __jc,jlong lpjFbxAMatrix,jobject pQ)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAMatrix *) lpjFbxAMatrix)->SetQ(
  (const FbxQuaternion  &) * _lcvt.j2c_object_ref<jobject,FbxQuaternion >(pQ)
  );
}
  /// void  SetS (const FbxVector4 &pS)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAMatrix_SetS(JNIEnv * __env, jclass __jc,jlong lpjFbxAMatrix,jobject pS)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAMatrix *) lpjFbxAMatrix)->SetS(
  (const FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pS)
  );
}
  /// void  SetTRS (const FbxVector4 &pT, const FbxVector4 &pR, const FbxVector4 &pS)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAMatrix_SetTRS(JNIEnv * __env, jclass __jc,jlong lpjFbxAMatrix,jobject pT,jobject pR,jobject pS)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAMatrix *) lpjFbxAMatrix)->SetTRS(
  (const FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pT)
  ,
  (const FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pR)
  ,
  (const FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pS)
  );
}
  /// void  SetTQS (const FbxVector4 &pT, const FbxQuaternion &pQ, const FbxVector4 &pS)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxAMatrix_SetTQS(JNIEnv * __env, jclass __jc,jlong lpjFbxAMatrix,jobject pT,jobject pQ,jobject pS)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxAMatrix *) lpjFbxAMatrix)->SetTQS(
  (const FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pT)
  ,
  (const FbxQuaternion  &) * _lcvt.j2c_object_ref<jobject,FbxQuaternion >(pQ)
  ,
  (const FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pS)
  );
}
  /// FbxVector4  MultT (const FbxVector4 &pVector4) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAMatrix_MultT(JNIEnv * __env, jclass __jc,jlong lpjFbxAMatrix,jobject pVector4)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxVector4>(
  ((FbxAMatrix *) lpjFbxAMatrix)->MultT(
  (const FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pVector4)
  ));
  return ret;
}
  /// FbxVector4  MultR (const FbxVector4 &pVector4) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAMatrix_MultR(JNIEnv * __env, jclass __jc,jlong lpjFbxAMatrix,jobject pVector4)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxVector4>(
  ((FbxAMatrix *) lpjFbxAMatrix)->MultR(
  (const FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pVector4)
  ));
  return ret;
}
  /// FbxQuaternion  MultQ (const FbxQuaternion &pQuaternion) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAMatrix_MultQ(JNIEnv * __env, jclass __jc,jlong lpjFbxAMatrix,jobject pQuaternion)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxQuaternion>(
  ((FbxAMatrix *) lpjFbxAMatrix)->MultQ(
  (const FbxQuaternion  &) * _lcvt.j2c_object_ref<jobject,FbxQuaternion >(pQuaternion)
  ));
  return ret;
}
  /// FbxVector4  MultS (const FbxVector4 &pVector4) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAMatrix_MultS(JNIEnv * __env, jclass __jc,jlong lpjFbxAMatrix,jobject pVector4)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxVector4>(
  ((FbxAMatrix *) lpjFbxAMatrix)->MultS(
  (const FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pVector4)
  ));
  return ret;
}
  /// FbxAMatrix  Inverse () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAMatrix_Inverse(JNIEnv * __env, jclass __jc,jlong lpjFbxAMatrix)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxAMatrix>(
  ((FbxAMatrix *) lpjFbxAMatrix)->Inverse(
  ));
  return ret;
}
  /// FbxAMatrix  Transpose () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAMatrix_Transpose(JNIEnv * __env, jclass __jc,jlong lpjFbxAMatrix)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxAMatrix>(
  ((FbxAMatrix *) lpjFbxAMatrix)->Transpose(
  ));
  return ret;
}
  /// kDouble44 &  Double44 () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxAMatrix_Double44(JNIEnv * __env, jclass __jc,jlong lpjFbxAMatrix)
{
  JNILocalConverter _lcvt(__env,__jc);
    jlong ret=(jlong)_lcvt.c2j_obj_ref<jlong, FbxAMatrix::kDouble44>(
  ((FbxAMatrix *) lpjFbxAMatrix)->Double44(
  ));
  return ret;
}
