//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// virtual bool  Evaluate (const FbxBindingOperator *pOperator, const FbxObject *pObject, EFbxType *pResultType, void **pResult) const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxDegreeToRadianBOF_Evaluate(JNIEnv * __env, jclass __jc,jlong lpjFbxDegreeToRadianBOF,jlong pOperator,jlong pObject,jintArray pResultType,jlongArray pResult)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxDegreeToRadianBOF *) lpjFbxDegreeToRadianBOF)->Evaluate(
  (const FbxBindingOperator  *)  _lcvt.j2c_object_pt<jlong, FbxBindingOperator>(pOperator)
  ,
  (const FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pObject)
  ,
  ( EFbxType  *)  _lcvt.j2c_int_pt<jintArray,EFbxType >(pResultType)
  ,
  ( void  **)  _lcvt.j2c_void_ppt(pResult)
  ));
  return ret;
}
  /// virtual bool  ReverseEvaluate (const FbxBindingOperator *pOperator, const FbxObject *pTarget, const void *pIn, void **pOut, EFbxType *pOutType, bool setObj, int index) const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxDegreeToRadianBOF_ReverseEvaluate(JNIEnv * __env, jclass __jc,jlong lpjFbxDegreeToRadianBOF,jlong pOperator,jlong pTarget,jlong pIn,jlongArray pOut,jintArray pOutType,jboolean setObj,jint index)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxDegreeToRadianBOF *) lpjFbxDegreeToRadianBOF)->ReverseEvaluate(
  (const FbxBindingOperator  *)  _lcvt.j2c_object_pt<jlong, FbxBindingOperator>(pOperator)
  ,
  (const FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pTarget)
  ,
  (const void  *)  _lcvt.j2c_void_pt(pIn)
  ,
  ( void  **)  _lcvt.j2c_void_ppt(pOut)
  ,
  ( EFbxType  *)  _lcvt.j2c_int_pt<jintArray,EFbxType >(pOutType)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(setObj)
  ,
  ( int  )  _lcvt.j2c<jint, int  >(index)
  ));
  return ret;
}
