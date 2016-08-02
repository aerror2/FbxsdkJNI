
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// double  GetPoleVectorObjectWeight (const FbxObject *pObject) const
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxConstraintSingleChainIK_GetPoleVectorObjectWeight(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintSingleChainIK,jlong pObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  double  >(
  ((FbxConstraintSingleChainIK *) lpjFbxConstraintSingleChainIK)->GetPoleVectorObjectWeight(
  (const FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pObject)
  ));
  return ret;
}
  /// void  AddPoleVectorObject (FbxObject *pObject, double pWeight=100)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxConstraintSingleChainIK_AddPoleVectorObject(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintSingleChainIK,jlong pObject,jdouble pWeight)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxConstraintSingleChainIK *) lpjFbxConstraintSingleChainIK)->AddPoleVectorObject(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pObject)
  ,
  ( double  )  _lcvt.j2c<jdouble, double  >(pWeight)
  );
}
  /// int  GetConstraintPoleVectorCount () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxConstraintSingleChainIK_GetConstraintPoleVectorCount(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintSingleChainIK)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxConstraintSingleChainIK *) lpjFbxConstraintSingleChainIK)->GetConstraintPoleVectorCount(
  ));
  return ret;
}
  /// FbxObject *  GetPoleVectorObject (int pIndex) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintSingleChainIK_GetPoleVectorObject(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintSingleChainIK,jint pIndex)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxObject>(
  ((FbxConstraintSingleChainIK *) lpjFbxConstraintSingleChainIK)->GetPoleVectorObject(
  ( int  )  _lcvt.j2c<jint, int  >(pIndex)
  ));
  return ret;
}
  /// void  SetFirstJointObject (FbxObject *pObject)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxConstraintSingleChainIK_SetFirstJointObject(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintSingleChainIK,jlong pObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxConstraintSingleChainIK *) lpjFbxConstraintSingleChainIK)->SetFirstJointObject(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pObject)
  );
}
  /// FbxObject *  GetFirstJointObject () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintSingleChainIK_GetFirstJointObject(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintSingleChainIK)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxObject>(
  ((FbxConstraintSingleChainIK *) lpjFbxConstraintSingleChainIK)->GetFirstJointObject(
  ));
  return ret;
}
  /// void  SetEndJointObject (FbxObject *pObject)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxConstraintSingleChainIK_SetEndJointObject(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintSingleChainIK,jlong pObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxConstraintSingleChainIK *) lpjFbxConstraintSingleChainIK)->SetEndJointObject(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pObject)
  );
}
  /// FbxObject *  GetEndJointObject () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintSingleChainIK_GetEndJointObject(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintSingleChainIK)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxObject>(
  ((FbxConstraintSingleChainIK *) lpjFbxConstraintSingleChainIK)->GetEndJointObject(
  ));
  return ret;
}
  /// void  SetEffectorObject (FbxObject *pObject)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxConstraintSingleChainIK_SetEffectorObject(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintSingleChainIK,jlong pObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxConstraintSingleChainIK *) lpjFbxConstraintSingleChainIK)->SetEffectorObject(
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pObject)
  );
}
  /// FbxObject *  GetEffectorObject () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintSingleChainIK_GetEffectorObject(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintSingleChainIK)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxObject>(
  ((FbxConstraintSingleChainIK *) lpjFbxConstraintSingleChainIK)->GetEffectorObject(
  ));
  return ret;
}
  /// FbxPropertyT< FbxEnum >  PoleVectorType
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxConstraintSingleChainIK_mepSetPoleVectorType(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintSingleChainIK,jint lpFbxEnum)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxConstraintSingleChainIK *) lpjFbxConstraintSingleChainIK)->PoleVectorType.Set(
  ( FbxEnum  )  _lcvt.j2c<jint,int >(lpFbxEnum)
  );
}
  /// FbxPropertyT< FbxEnum >  PoleVectorType
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxConstraintSingleChainIK_mepGetPoleVectorType(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintSingleChainIK)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxEnum  >(
  ((FbxConstraintSingleChainIK *) lpjFbxConstraintSingleChainIK)->PoleVectorType.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxEnum >  PoleVectorType
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintSingleChainIK_mptGetPoleVectorType(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintSingleChainIK)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxEnum   >(
   (&((FbxConstraintSingleChainIK *) lpjFbxConstraintSingleChainIK)->PoleVectorType
  ));
  return ret;
}
  /// FbxPropertyT< FbxEnum >  SolverType
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxConstraintSingleChainIK_mepSetSolverType(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintSingleChainIK,jint lpFbxEnum)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxConstraintSingleChainIK *) lpjFbxConstraintSingleChainIK)->SolverType.Set(
  ( FbxEnum  )  _lcvt.j2c<jint,int >(lpFbxEnum)
  );
}
  /// FbxPropertyT< FbxEnum >  SolverType
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxConstraintSingleChainIK_mepGetSolverType(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintSingleChainIK)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxEnum  >(
  ((FbxConstraintSingleChainIK *) lpjFbxConstraintSingleChainIK)->SolverType.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxEnum >  SolverType
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintSingleChainIK_mptGetSolverType(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintSingleChainIK)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxEnum   >(
   (&((FbxConstraintSingleChainIK *) lpjFbxConstraintSingleChainIK)->SolverType
  ));
  return ret;
}
  /// FbxPropertyT< FbxEnum >  EvaluateTSAnim
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxConstraintSingleChainIK_mepSetEvaluateTSAnim(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintSingleChainIK,jint lpFbxEnum)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxConstraintSingleChainIK *) lpjFbxConstraintSingleChainIK)->EvaluateTSAnim.Set(
  ( FbxEnum  )  _lcvt.j2c<jint,int >(lpFbxEnum)
  );
}
  /// FbxPropertyT< FbxEnum >  EvaluateTSAnim
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxConstraintSingleChainIK_mepGetEvaluateTSAnim(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintSingleChainIK)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxEnum  >(
  ((FbxConstraintSingleChainIK *) lpjFbxConstraintSingleChainIK)->EvaluateTSAnim.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxEnum >  EvaluateTSAnim
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintSingleChainIK_mptGetEvaluateTSAnim(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintSingleChainIK)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxEnum   >(
   (&((FbxConstraintSingleChainIK *) lpjFbxConstraintSingleChainIK)->EvaluateTSAnim
  ));
  return ret;
}
  /// FbxPropertyT< FbxReference >  PoleVectorObjects
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxConstraintSingleChainIK_mepSetPoleVectorObjects(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintSingleChainIK,jlong lpFbxReference)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxConstraintSingleChainIK *) lpjFbxConstraintSingleChainIK)->PoleVectorObjects.Set(
  ( FbxReference  )  _lcvt.j2c<jlong, FbxReference  >(lpFbxReference)
  );
}
  /// FbxPropertyT< FbxReference >  PoleVectorObjects
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintSingleChainIK_mepGetPoleVectorObjects(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintSingleChainIK)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j<jlong,  FbxReference  >(
  ((FbxConstraintSingleChainIK *) lpjFbxConstraintSingleChainIK)->PoleVectorObjects.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxReference >  PoleVectorObjects
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintSingleChainIK_mptGetPoleVectorObjects(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintSingleChainIK)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxReference   >(
   (&((FbxConstraintSingleChainIK *) lpjFbxConstraintSingleChainIK)->PoleVectorObjects
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  PoleVector
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxConstraintSingleChainIK_mepSetPoleVector(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintSingleChainIK,jlong lpFbxDouble3)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxConstraintSingleChainIK *) lpjFbxConstraintSingleChainIK)->PoleVector.Set(
  ( FbxDouble3  )  _lcvt.j2c_object<jlong,FbxDouble3 >(lpFbxDouble3)
  );
}
  /// FbxPropertyT< FbxDouble3 >  PoleVector
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintSingleChainIK_mepGetPoleVector(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintSingleChainIK)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxDouble3>(
  ((FbxConstraintSingleChainIK *) lpjFbxConstraintSingleChainIK)->PoleVector.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  PoleVector
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintSingleChainIK_mptGetPoleVector(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintSingleChainIK)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble3   >(
   (&((FbxConstraintSingleChainIK *) lpjFbxConstraintSingleChainIK)->PoleVector
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  Twist
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxConstraintSingleChainIK_mepSetTwist(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintSingleChainIK,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxConstraintSingleChainIK *) lpjFbxConstraintSingleChainIK)->Twist.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  Twist
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxConstraintSingleChainIK_mepGetTwist(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintSingleChainIK)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxConstraintSingleChainIK *) lpjFbxConstraintSingleChainIK)->Twist.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  Twist
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintSingleChainIK_mptGetTwist(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintSingleChainIK)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxConstraintSingleChainIK *) lpjFbxConstraintSingleChainIK)->Twist
  ));
  return ret;
}
  /// FbxPropertyT< FbxReference >  FirstJointObject
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxConstraintSingleChainIK_mepSetFirstJointObject(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintSingleChainIK,jlong lpFbxReference)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxConstraintSingleChainIK *) lpjFbxConstraintSingleChainIK)->FirstJointObject.Set(
  ( FbxReference  )  _lcvt.j2c<jlong, FbxReference  >(lpFbxReference)
  );
}
  /// FbxPropertyT< FbxReference >  FirstJointObject
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintSingleChainIK_mepGetFirstJointObject(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintSingleChainIK)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j<jlong,  FbxReference  >(
  ((FbxConstraintSingleChainIK *) lpjFbxConstraintSingleChainIK)->FirstJointObject.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxReference >  FirstJointObject
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintSingleChainIK_mptGetFirstJointObject(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintSingleChainIK)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxReference   >(
   (&((FbxConstraintSingleChainIK *) lpjFbxConstraintSingleChainIK)->FirstJointObject
  ));
  return ret;
}
  /// FbxPropertyT< FbxReference >  EndJointObject
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxConstraintSingleChainIK_mepSetEndJointObject(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintSingleChainIK,jlong lpFbxReference)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxConstraintSingleChainIK *) lpjFbxConstraintSingleChainIK)->EndJointObject.Set(
  ( FbxReference  )  _lcvt.j2c<jlong, FbxReference  >(lpFbxReference)
  );
}
  /// FbxPropertyT< FbxReference >  EndJointObject
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintSingleChainIK_mepGetEndJointObject(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintSingleChainIK)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j<jlong,  FbxReference  >(
  ((FbxConstraintSingleChainIK *) lpjFbxConstraintSingleChainIK)->EndJointObject.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxReference >  EndJointObject
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintSingleChainIK_mptGetEndJointObject(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintSingleChainIK)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxReference   >(
   (&((FbxConstraintSingleChainIK *) lpjFbxConstraintSingleChainIK)->EndJointObject
  ));
  return ret;
}
  /// FbxPropertyT< FbxReference >  EffectorObject
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxConstraintSingleChainIK_mepSetEffectorObject(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintSingleChainIK,jlong lpFbxReference)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxConstraintSingleChainIK *) lpjFbxConstraintSingleChainIK)->EffectorObject.Set(
  ( FbxReference  )  _lcvt.j2c<jlong, FbxReference  >(lpFbxReference)
  );
}
  /// FbxPropertyT< FbxReference >  EffectorObject
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintSingleChainIK_mepGetEffectorObject(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintSingleChainIK)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j<jlong,  FbxReference  >(
  ((FbxConstraintSingleChainIK *) lpjFbxConstraintSingleChainIK)->EffectorObject.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxReference >  EffectorObject
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintSingleChainIK_mptGetEffectorObject(JNIEnv * __env, jclass __jc,jlong lpjFbxConstraintSingleChainIK)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxReference   >(
   (&((FbxConstraintSingleChainIK *) lpjFbxConstraintSingleChainIK)->EffectorObject
  ));
  return ret;
}
  /// FbxConstraintSingleChainIK * Create( FbxConstraint* lpFbxConstraint,  const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxConstraintSingleChainIK_Create(JNIEnv * __env, jclass __jc,jlong lpFbxConstraint,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxConstraintSingleChainIK>(
  FbxConstraintSingleChainIK::Create(
  ( FbxConstraint  *)  _lcvt.j2c_object_pt<jlong, FbxConstraint>(lpFbxConstraint)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
