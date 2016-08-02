//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxMatrix ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxMatrix_meCreate(JNIEnv * __env, jclass __jc)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxMatrix>(
  new FbxMatrix(
  ));
  return ret;
}
  /// FbxMatrix (const FbxMatrix &pM)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxMatrix_meCreate1(JNIEnv * __env, jclass __jc,jobject pM)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxMatrix>(
  new FbxMatrix(
  (const FbxMatrix  &) * _lcvt.j2c_object_ref<jobject,FbxMatrix >(pM)
  ));
  return ret;
}
  /// FbxMatrix (const FbxVector4 &pT, const FbxVector4 &pR, const FbxVector4 &pS)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxMatrix_meCreate2(JNIEnv * __env, jclass __jc,jobject pT,jobject pR,jobject pS)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxMatrix>(
  new FbxMatrix(
  (const FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pT)
  ,
  (const FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pR)
  ,
  (const FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pS)
  ));
  return ret;
}
  /// FbxMatrix (const FbxVector4 &pT, const FbxQuaternion &pQ, const FbxVector4 &pS)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxMatrix_meCreate3(JNIEnv * __env, jclass __jc,jobject pT,jobject pQ,jobject pS)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxMatrix>(
  new FbxMatrix(
  (const FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pT)
  ,
  (const FbxQuaternion  &) * _lcvt.j2c_object_ref<jobject,FbxQuaternion >(pQ)
  ,
  (const FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pS)
  ));
  return ret;
}
  /// FbxMatrix (const double p00, const double p10, const double p20, const double p30, const double p01, const double p11, const double p21, const double p31, const double p02, const double p12, const double p22, const double p32, const double p03, const double p13, const double p23, const double p33)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxMatrix_meCreate4(JNIEnv * __env, jclass __jc,jdouble p00,jdouble p10,jdouble p20,jdouble p30,jdouble p01,jdouble p11,jdouble p21,jdouble p31,jdouble p02,jdouble p12,jdouble p22,jdouble p32,jdouble p03,jdouble p13,jdouble p23,jdouble p33)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxMatrix>(
  new FbxMatrix(
  (const double  )  _lcvt.j2c<jdouble,const double  >(p00)
  ,
  (const double  )  _lcvt.j2c<jdouble,const double  >(p10)
  ,
  (const double  )  _lcvt.j2c<jdouble,const double  >(p20)
  ,
  (const double  )  _lcvt.j2c<jdouble,const double  >(p30)
  ,
  (const double  )  _lcvt.j2c<jdouble,const double  >(p01)
  ,
  (const double  )  _lcvt.j2c<jdouble,const double  >(p11)
  ,
  (const double  )  _lcvt.j2c<jdouble,const double  >(p21)
  ,
  (const double  )  _lcvt.j2c<jdouble,const double  >(p31)
  ,
  (const double  )  _lcvt.j2c<jdouble,const double  >(p02)
  ,
  (const double  )  _lcvt.j2c<jdouble,const double  >(p12)
  ,
  (const double  )  _lcvt.j2c<jdouble,const double  >(p22)
  ,
  (const double  )  _lcvt.j2c<jdouble,const double  >(p32)
  ,
  (const double  )  _lcvt.j2c<jdouble,const double  >(p03)
  ,
  (const double  )  _lcvt.j2c<jdouble,const double  >(p13)
  ,
  (const double  )  _lcvt.j2c<jdouble,const double  >(p23)
  ,
  (const double  )  _lcvt.j2c<jdouble,const double  >(p33)
  ));
  return ret;
}
  /// FbxMatrix (const FbxAMatrix &pM)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxMatrix_meCreate5(JNIEnv * __env, jclass __jc,jobject pM)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxMatrix>(
  new FbxMatrix(
  (const FbxAMatrix  &) * _lcvt.j2c_object_ref<jobject,FbxAMatrix >(pM)
  ));
  return ret;
}
  /// ~FbxMatrix ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxMatrix_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxMatrix)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxMatrix *) lpjFbxMatrix
  );
}
  /// double  Get (int pY, int pX) const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxMatrix_Get(JNIEnv * __env, jclass __jc,jlong lpjFbxMatrix,jint pY,jint pX)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxMatrix *) lpjFbxMatrix)->Get(
  ( int  )  _lcvt.j2c<jint, int  >(pY)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pX)
  ));
  return ret;
}
  /// FbxVector4  GetRow (int pY) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxMatrix_GetRow(JNIEnv * __env, jclass __jc,jlong lpjFbxMatrix,jint pY)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxVector4>(
  ((FbxMatrix *) lpjFbxMatrix)->GetRow(
  ( int  )  _lcvt.j2c<jint, int  >(pY)
  ));
  return ret;
}
  /// FbxVector4  GetColumn (int pX) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxMatrix_GetColumn(JNIEnv * __env, jclass __jc,jlong lpjFbxMatrix,jint pX)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxVector4>(
  ((FbxMatrix *) lpjFbxMatrix)->GetColumn(
  ( int  )  _lcvt.j2c<jint, int  >(pX)
  ));
  return ret;
}
  /// void  Set (int pY, int pX, double pValue)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxMatrix_Set(JNIEnv * __env, jclass __jc,jlong lpjFbxMatrix,jint pY,jint pX,jdouble pValue)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxMatrix *) lpjFbxMatrix)->Set(
  ( int  )  _lcvt.j2c<jint, int  >(pY)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(pX)
  ,
  ( double  )  _lcvt.j2c<jdouble, double  >(pValue)
  );
}
  /// void  SetIdentity ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxMatrix_SetIdentity(JNIEnv * __env, jclass __jc,jlong lpjFbxMatrix)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxMatrix *) lpjFbxMatrix)->SetIdentity(
  );
}
  /// void  SetTRS (const FbxVector4 &pT, const FbxVector4 &pR, const FbxVector4 &pS)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxMatrix_SetTRS(JNIEnv * __env, jclass __jc,jlong lpjFbxMatrix,jobject pT,jobject pR,jobject pS)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxMatrix *) lpjFbxMatrix)->SetTRS(
  (const FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pT)
  ,
  (const FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pR)
  ,
  (const FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pS)
  );
}
  /// void  SetTQS (const FbxVector4 &pT, const FbxQuaternion &pQ, const FbxVector4 &pS)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxMatrix_SetTQS(JNIEnv * __env, jclass __jc,jlong lpjFbxMatrix,jobject pT,jobject pQ,jobject pS)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxMatrix *) lpjFbxMatrix)->SetTQS(
  (const FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pT)
  ,
  (const FbxQuaternion  &) * _lcvt.j2c_object_ref<jobject,FbxQuaternion >(pQ)
  ,
  (const FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pS)
  );
}
  /// void  SetRow (int pY, const FbxVector4 &pRow)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxMatrix_SetRow(JNIEnv * __env, jclass __jc,jlong lpjFbxMatrix,jint pY,jobject pRow)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxMatrix *) lpjFbxMatrix)->SetRow(
  ( int  )  _lcvt.j2c<jint, int  >(pY)
  ,
  (const FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pRow)
  );
}
  /// void  SetColumn (int pX, const FbxVector4 &pColumn)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxMatrix_SetColumn(JNIEnv * __env, jclass __jc,jlong lpjFbxMatrix,jint pX,jobject pColumn)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxMatrix *) lpjFbxMatrix)->SetColumn(
  ( int  )  _lcvt.j2c<jint, int  >(pX)
  ,
  (const FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pColumn)
  );
}
  /// void  GetElements (FbxVector4 &pTranslation, FbxQuaternion &pRotation, FbxVector4 &pShearing, FbxVector4 &pScaling, double &pSign) const
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxMatrix_GetElements(JNIEnv * __env, jclass __jc,jlong lpjFbxMatrix,jobject pTranslation,jobject pRotation,jobject pShearing,jobject pScaling,jobject pSign)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxMatrix *) lpjFbxMatrix)->GetElements(
  ( FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pTranslation)
  ,
  ( FbxQuaternion  &) * _lcvt.j2c_object_ref<jobject,FbxQuaternion >(pRotation)
  ,
  ( FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pShearing)
  ,
  ( FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pScaling)
  ,
  ( double  &) * _lcvt.j2c_double_ref<jobject,double>(pSign)
  );
}
  /// FbxMatrix  Inverse () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxMatrix_Inverse(JNIEnv * __env, jclass __jc,jlong lpjFbxMatrix)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxMatrix>(
  ((FbxMatrix *) lpjFbxMatrix)->Inverse(
  ));
  return ret;
}
  /// FbxMatrix  Transpose () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxMatrix_Transpose(JNIEnv * __env, jclass __jc,jlong lpjFbxMatrix)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxMatrix>(
  ((FbxMatrix *) lpjFbxMatrix)->Transpose(
  ));
  return ret;
}
  /// FbxVector4  MultNormalize (const FbxVector4 &pVector) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxMatrix_MultNormalize(JNIEnv * __env, jclass __jc,jlong lpjFbxMatrix,jobject pVector)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxVector4>(
  ((FbxMatrix *) lpjFbxMatrix)->MultNormalize(
  (const FbxVector4  &) * _lcvt.j2c_object_ref<jobject,FbxVector4 >(pVector)
  ));
  return ret;
}
  /// kDouble44 &  Double44 () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxMatrix_Double44(JNIEnv * __env, jclass __jc,jlong lpjFbxMatrix)
{
  JNILocalConverter _lcvt(__env,__jc);
    jlong ret=(jlong)_lcvt.c2j_obj_ref<jlong, FbxMatrix::kDouble44>(
  ((FbxMatrix *) lpjFbxMatrix)->Double44(
  ));
  return ret;
}
