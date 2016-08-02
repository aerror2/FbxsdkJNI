//copyright by  aerror  2016 

#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// void  Reset ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_Reset(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->Reset(
  );
}
  /// void  SetInput (EInputType pInputType, FbxObject *pInputObject=NULL)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_SetInput(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jint pInputType,jlong pInputObject)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->SetInput(
  ( FbxCharacter::EInputType  )  _lcvt.j2c<jint,FbxCharacter::EInputType >(pInputType)
  ,
  ( FbxObject  *)  _lcvt.j2c_object_pt<jlong, FbxObject>(pInputObject)
  );
}
  /// EInputType  GetInputType () const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxCharacter_GetInputType(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxCharacter::EInputType  >(
  ((FbxCharacter *) lpjFbxCharacter)->GetInputType(
  ));
  return ret;
}
  /// FbxObject *  GetInputObject () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_GetInputObject(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxObject>(
  ((FbxCharacter *) lpjFbxCharacter)->GetInputObject(
  ));
  return ret;
}
  /// bool  SetCharacterLink (ENodeId pCharacterNodeId, const FbxCharacterLink &pCharacterLink, bool pUpdateObjectList=true)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCharacter_SetCharacterLink(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jint pCharacterNodeId,jobject pCharacterLink,jboolean pUpdateObjectList)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxCharacter *) lpjFbxCharacter)->SetCharacterLink(
  ( FbxCharacter::ENodeId  )  _lcvt.j2c<jint,FbxCharacter::ENodeId >(pCharacterNodeId)
  ,
  (const FbxCharacterLink  &) * _lcvt.j2c_object_ref<jobject,FbxCharacterLink >(pCharacterLink)
  ,
  ( bool  )  _lcvt.j2c<jboolean, bool  >(pUpdateObjectList)
  ));
  return ret;
}
  /// bool  GetCharacterLink (ENodeId pCharacterNodeId, FbxCharacterLink *pCharacterLink=NULL) const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCharacter_GetCharacterLink(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jint pCharacterNodeId,jlong pCharacterLink)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxCharacter *) lpjFbxCharacter)->GetCharacterLink(
  ( FbxCharacter::ENodeId  )  _lcvt.j2c<jint,FbxCharacter::ENodeId >(pCharacterNodeId)
  ,
  ( FbxCharacterLink  *)  _lcvt.j2c_object_pt<jlong, FbxCharacterLink>(pCharacterLink)
  ));
  return ret;
}
  /// FbxControlSet &  GetControlSet () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_GetControlSet(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_ref<jlong, FbxControlSet>(
  ((FbxCharacter *) lpjFbxCharacter)->GetControlSet(
  ));
  return ret;
}
  /// FbxPropertyT< FbxInt >  PullIterationCount
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetPullIterationCount(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jint lpFbxInt)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->PullIterationCount.Set(
  ( FbxInt  )  _lcvt.j2c<jint, FbxInt  >(lpFbxInt)
  );
}
  /// FbxPropertyT< FbxInt >  PullIterationCount
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxCharacter_mepGetPullIterationCount(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxInt  >(
  ((FbxCharacter *) lpjFbxCharacter)->PullIterationCount.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxInt >  PullIterationCount
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetPullIterationCount(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxInt   >(
   (&((FbxCharacter *) lpjFbxCharacter)->PullIterationCount
  ));
  return ret;
}
  /// FbxPropertyT< EPostureMode >  Posture
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetPosture(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jint lpEPostureMode)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->Posture.Set(
  ( FbxCharacter::EPostureMode  )  _lcvt.j2c<jint,FbxCharacter::EPostureMode >(lpEPostureMode)
  );
}
  /// FbxPropertyT< EPostureMode >  Posture
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxCharacter_mepGetPosture(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxCharacter::EPostureMode  >(
  ((FbxCharacter *) lpjFbxCharacter)->Posture.Get(
  ));
  return ret;
}
  /// FbxPropertyT< EPostureMode >  Posture
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetPosture(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxCharacter::EPostureMode   >(
   (&((FbxCharacter *) lpjFbxCharacter)->Posture
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  ForceActorSpace
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetForceActorSpace(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->ForceActorSpace.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  ForceActorSpace
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCharacter_mepGetForceActorSpace(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxCharacter *) lpjFbxCharacter)->ForceActorSpace.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  ForceActorSpace
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetForceActorSpace(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxCharacter *) lpjFbxCharacter)->ForceActorSpace
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  ScaleCompensation
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetScaleCompensation(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->ScaleCompensation.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  ScaleCompensation
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetScaleCompensation(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->ScaleCompensation.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  ScaleCompensation
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetScaleCompensation(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->ScaleCompensation
  ));
  return ret;
}
  /// FbxPropertyT< EOffAutoUser >  ScaleCompensationMode
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetScaleCompensationMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jint lpEOffAutoUser)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->ScaleCompensationMode.Set(
  ( FbxCharacter::EOffAutoUser  )  _lcvt.j2c<jint,FbxCharacter::EOffAutoUser >(lpEOffAutoUser)
  );
}
  /// FbxPropertyT< EOffAutoUser >  ScaleCompensationMode
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxCharacter_mepGetScaleCompensationMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxCharacter::EOffAutoUser  >(
  ((FbxCharacter *) lpjFbxCharacter)->ScaleCompensationMode.Get(
  ));
  return ret;
}
  /// FbxPropertyT< EOffAutoUser >  ScaleCompensationMode
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetScaleCompensationMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxCharacter::EOffAutoUser   >(
   (&((FbxCharacter *) lpjFbxCharacter)->ScaleCompensationMode
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  HipsHeightCompensation
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetHipsHeightCompensation(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->HipsHeightCompensation.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  HipsHeightCompensation
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetHipsHeightCompensation(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->HipsHeightCompensation.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  HipsHeightCompensation
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetHipsHeightCompensation(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->HipsHeightCompensation
  ));
  return ret;
}
  /// FbxPropertyT< EOffAutoUser >  HipsHeightCompensationMode
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetHipsHeightCompensationMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jint lpEOffAutoUser)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->HipsHeightCompensationMode.Set(
  ( FbxCharacter::EOffAutoUser  )  _lcvt.j2c<jint,FbxCharacter::EOffAutoUser >(lpEOffAutoUser)
  );
}
  /// FbxPropertyT< EOffAutoUser >  HipsHeightCompensationMode
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxCharacter_mepGetHipsHeightCompensationMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxCharacter::EOffAutoUser  >(
  ((FbxCharacter *) lpjFbxCharacter)->HipsHeightCompensationMode.Get(
  ));
  return ret;
}
  /// FbxPropertyT< EOffAutoUser >  HipsHeightCompensationMode
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetHipsHeightCompensationMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxCharacter::EOffAutoUser   >(
   (&((FbxCharacter *) lpjFbxCharacter)->HipsHeightCompensationMode
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  AnkleHeightCompensation
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetAnkleHeightCompensation(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->AnkleHeightCompensation.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  AnkleHeightCompensation
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetAnkleHeightCompensation(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->AnkleHeightCompensation.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  AnkleHeightCompensation
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetAnkleHeightCompensation(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->AnkleHeightCompensation
  ));
  return ret;
}
  /// FbxPropertyT< EOffAutoUser >  AnkleHeightCompensationMode
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetAnkleHeightCompensationMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jint lpEOffAutoUser)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->AnkleHeightCompensationMode.Set(
  ( FbxCharacter::EOffAutoUser  )  _lcvt.j2c<jint,FbxCharacter::EOffAutoUser >(lpEOffAutoUser)
  );
}
  /// FbxPropertyT< EOffAutoUser >  AnkleHeightCompensationMode
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxCharacter_mepGetAnkleHeightCompensationMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxCharacter::EOffAutoUser  >(
  ((FbxCharacter *) lpjFbxCharacter)->AnkleHeightCompensationMode.Get(
  ));
  return ret;
}
  /// FbxPropertyT< EOffAutoUser >  AnkleHeightCompensationMode
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetAnkleHeightCompensationMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxCharacter::EOffAutoUser   >(
   (&((FbxCharacter *) lpjFbxCharacter)->AnkleHeightCompensationMode
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  AnkleProximityCompensation
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetAnkleProximityCompensation(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->AnkleProximityCompensation.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  AnkleProximityCompensation
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetAnkleProximityCompensation(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->AnkleProximityCompensation.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  AnkleProximityCompensation
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetAnkleProximityCompensation(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->AnkleProximityCompensation
  ));
  return ret;
}
  /// FbxPropertyT< EOffAutoUser >  AnkleProximityCompensationMode
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetAnkleProximityCompensationMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jint lpEOffAutoUser)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->AnkleProximityCompensationMode.Set(
  ( FbxCharacter::EOffAutoUser  )  _lcvt.j2c<jint,FbxCharacter::EOffAutoUser >(lpEOffAutoUser)
  );
}
  /// FbxPropertyT< EOffAutoUser >  AnkleProximityCompensationMode
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxCharacter_mepGetAnkleProximityCompensationMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxCharacter::EOffAutoUser  >(
  ((FbxCharacter *) lpjFbxCharacter)->AnkleProximityCompensationMode.Get(
  ));
  return ret;
}
  /// FbxPropertyT< EOffAutoUser >  AnkleProximityCompensationMode
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetAnkleProximityCompensationMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxCharacter::EOffAutoUser   >(
   (&((FbxCharacter *) lpjFbxCharacter)->AnkleProximityCompensationMode
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  MassCenterCompensation
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetMassCenterCompensation(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->MassCenterCompensation.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  MassCenterCompensation
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetMassCenterCompensation(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->MassCenterCompensation.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  MassCenterCompensation
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetMassCenterCompensation(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->MassCenterCompensation
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  ApplyLimits
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetApplyLimits(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->ApplyLimits.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  ApplyLimits
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCharacter_mepGetApplyLimits(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxCharacter *) lpjFbxCharacter)->ApplyLimits.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  ApplyLimits
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetApplyLimits(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxCharacter *) lpjFbxCharacter)->ApplyLimits
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  ChestReduction
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetChestReduction(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->ChestReduction.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  ChestReduction
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetChestReduction(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->ChestReduction.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  ChestReduction
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetChestReduction(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->ChestReduction
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CollarReduction
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetCollarReduction(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->CollarReduction.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  CollarReduction
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetCollarReduction(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->CollarReduction.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CollarReduction
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetCollarReduction(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->CollarReduction
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  NeckReduction
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetNeckReduction(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->NeckReduction.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  NeckReduction
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetNeckReduction(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->NeckReduction.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  NeckReduction
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetNeckReduction(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->NeckReduction
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  HeadReduction
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetHeadReduction(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->HeadReduction.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  HeadReduction
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetHeadReduction(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->HeadReduction.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  HeadReduction
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetHeadReduction(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->HeadReduction
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  ReachActorLeftAnkle
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetReachActorLeftAnkle(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->ReachActorLeftAnkle.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  ReachActorLeftAnkle
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetReachActorLeftAnkle(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->ReachActorLeftAnkle.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  ReachActorLeftAnkle
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetReachActorLeftAnkle(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->ReachActorLeftAnkle
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  ReachActorRightAnkle
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetReachActorRightAnkle(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->ReachActorRightAnkle.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  ReachActorRightAnkle
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetReachActorRightAnkle(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->ReachActorRightAnkle.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  ReachActorRightAnkle
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetReachActorRightAnkle(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->ReachActorRightAnkle
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  ReachActorLeftKnee
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetReachActorLeftKnee(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->ReachActorLeftKnee.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  ReachActorLeftKnee
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetReachActorLeftKnee(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->ReachActorLeftKnee.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  ReachActorLeftKnee
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetReachActorLeftKnee(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->ReachActorLeftKnee
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  ReachActorRightKnee
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetReachActorRightKnee(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->ReachActorRightKnee.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  ReachActorRightKnee
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetReachActorRightKnee(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->ReachActorRightKnee.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  ReachActorRightKnee
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetReachActorRightKnee(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->ReachActorRightKnee
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  ReachActorChest
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetReachActorChest(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->ReachActorChest.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  ReachActorChest
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetReachActorChest(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->ReachActorChest.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  ReachActorChest
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetReachActorChest(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->ReachActorChest
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  ReachActorHead
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetReachActorHead(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->ReachActorHead.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  ReachActorHead
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetReachActorHead(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->ReachActorHead.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  ReachActorHead
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetReachActorHead(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->ReachActorHead
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  ReachActorLeftWrist
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetReachActorLeftWrist(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->ReachActorLeftWrist.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  ReachActorLeftWrist
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetReachActorLeftWrist(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->ReachActorLeftWrist.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  ReachActorLeftWrist
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetReachActorLeftWrist(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->ReachActorLeftWrist
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  ReachActorRightWrist
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetReachActorRightWrist(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->ReachActorRightWrist.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  ReachActorRightWrist
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetReachActorRightWrist(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->ReachActorRightWrist.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  ReachActorRightWrist
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetReachActorRightWrist(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->ReachActorRightWrist
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  ReachActorLeftElbow
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetReachActorLeftElbow(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->ReachActorLeftElbow.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  ReachActorLeftElbow
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetReachActorLeftElbow(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->ReachActorLeftElbow.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  ReachActorLeftElbow
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetReachActorLeftElbow(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->ReachActorLeftElbow
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  ReachActorRightElbow
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetReachActorRightElbow(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->ReachActorRightElbow.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  ReachActorRightElbow
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetReachActorRightElbow(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->ReachActorRightElbow.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  ReachActorRightElbow
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetReachActorRightElbow(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->ReachActorRightElbow
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  ReachActorLeftFingerBase
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetReachActorLeftFingerBase(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->ReachActorLeftFingerBase.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  ReachActorLeftFingerBase
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetReachActorLeftFingerBase(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->ReachActorLeftFingerBase.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  ReachActorLeftFingerBase
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetReachActorLeftFingerBase(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->ReachActorLeftFingerBase
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  ReachActorRightFingerBase
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetReachActorRightFingerBase(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->ReachActorRightFingerBase.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  ReachActorRightFingerBase
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetReachActorRightFingerBase(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->ReachActorRightFingerBase.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  ReachActorRightFingerBase
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetReachActorRightFingerBase(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->ReachActorRightFingerBase
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  ReachActorLeftToesBase
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetReachActorLeftToesBase(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->ReachActorLeftToesBase.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  ReachActorLeftToesBase
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetReachActorLeftToesBase(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->ReachActorLeftToesBase.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  ReachActorLeftToesBase
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetReachActorLeftToesBase(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->ReachActorLeftToesBase
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  ReachActorRightToesBase
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetReachActorRightToesBase(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->ReachActorRightToesBase.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  ReachActorRightToesBase
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetReachActorRightToesBase(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->ReachActorRightToesBase.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  ReachActorRightToesBase
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetReachActorRightToesBase(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->ReachActorRightToesBase
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  ReachActorLeftFingerBaseRotation
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetReachActorLeftFingerBaseRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->ReachActorLeftFingerBaseRotation.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  ReachActorLeftFingerBaseRotation
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetReachActorLeftFingerBaseRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->ReachActorLeftFingerBaseRotation.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  ReachActorLeftFingerBaseRotation
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetReachActorLeftFingerBaseRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->ReachActorLeftFingerBaseRotation
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  ReachActorRightFingerBaseRotation
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetReachActorRightFingerBaseRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->ReachActorRightFingerBaseRotation.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  ReachActorRightFingerBaseRotation
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetReachActorRightFingerBaseRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->ReachActorRightFingerBaseRotation.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  ReachActorRightFingerBaseRotation
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetReachActorRightFingerBaseRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->ReachActorRightFingerBaseRotation
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  ReachActorLeftToesBaseRotation
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetReachActorLeftToesBaseRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->ReachActorLeftToesBaseRotation.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  ReachActorLeftToesBaseRotation
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetReachActorLeftToesBaseRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->ReachActorLeftToesBaseRotation.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  ReachActorLeftToesBaseRotation
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetReachActorLeftToesBaseRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->ReachActorLeftToesBaseRotation
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  ReachActorRightToesBaseRotation
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetReachActorRightToesBaseRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->ReachActorRightToesBaseRotation.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  ReachActorRightToesBaseRotation
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetReachActorRightToesBaseRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->ReachActorRightToesBaseRotation.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  ReachActorRightToesBaseRotation
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetReachActorRightToesBaseRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->ReachActorRightToesBaseRotation
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  ReachActorLeftAnkleRotation
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetReachActorLeftAnkleRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->ReachActorLeftAnkleRotation.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  ReachActorLeftAnkleRotation
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetReachActorLeftAnkleRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->ReachActorLeftAnkleRotation.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  ReachActorLeftAnkleRotation
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetReachActorLeftAnkleRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->ReachActorLeftAnkleRotation
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  ReachActorRightAnkleRotation
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetReachActorRightAnkleRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->ReachActorRightAnkleRotation.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  ReachActorRightAnkleRotation
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetReachActorRightAnkleRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->ReachActorRightAnkleRotation.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  ReachActorRightAnkleRotation
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetReachActorRightAnkleRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->ReachActorRightAnkleRotation
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  ReachActorHeadRotation
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetReachActorHeadRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->ReachActorHeadRotation.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  ReachActorHeadRotation
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetReachActorHeadRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->ReachActorHeadRotation.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  ReachActorHeadRotation
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetReachActorHeadRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->ReachActorHeadRotation
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  ReachActorLeftWristRotation
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetReachActorLeftWristRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->ReachActorLeftWristRotation.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  ReachActorLeftWristRotation
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetReachActorLeftWristRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->ReachActorLeftWristRotation.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  ReachActorLeftWristRotation
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetReachActorLeftWristRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->ReachActorLeftWristRotation
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  ReachActorRightWristRotation
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetReachActorRightWristRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->ReachActorRightWristRotation.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  ReachActorRightWristRotation
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetReachActorRightWristRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->ReachActorRightWristRotation.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  ReachActorRightWristRotation
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetReachActorRightWristRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->ReachActorRightWristRotation
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  ReachActorChestRotation
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetReachActorChestRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->ReachActorChestRotation.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  ReachActorChestRotation
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetReachActorChestRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->ReachActorChestRotation.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  ReachActorChestRotation
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetReachActorChestRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->ReachActorChestRotation
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  ReachActorLowerChestRotation
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetReachActorLowerChestRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->ReachActorLowerChestRotation.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  ReachActorLowerChestRotation
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetReachActorLowerChestRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->ReachActorLowerChestRotation.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  ReachActorLowerChestRotation
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetReachActorLowerChestRotation(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->ReachActorLowerChestRotation
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  HipsTOffset
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetHipsTOffset(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jlong lpFbxDouble3)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->HipsTOffset.Set(
  ( FbxDouble3  )  _lcvt.j2c_object<jlong,FbxDouble3 >(lpFbxDouble3)
  );
}
  /// FbxPropertyT< FbxDouble3 >  HipsTOffset
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mepGetHipsTOffset(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxDouble3>(
  ((FbxCharacter *) lpjFbxCharacter)->HipsTOffset.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  HipsTOffset
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetHipsTOffset(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble3   >(
   (&((FbxCharacter *) lpjFbxCharacter)->HipsTOffset
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  ChestTOffset
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetChestTOffset(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jlong lpFbxDouble3)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->ChestTOffset.Set(
  ( FbxDouble3  )  _lcvt.j2c_object<jlong,FbxDouble3 >(lpFbxDouble3)
  );
}
  /// FbxPropertyT< FbxDouble3 >  ChestTOffset
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mepGetChestTOffset(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxDouble3>(
  ((FbxCharacter *) lpjFbxCharacter)->ChestTOffset.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble3 >  ChestTOffset
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetChestTOffset(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble3   >(
   (&((FbxCharacter *) lpjFbxCharacter)->ChestTOffset
  ));
  return ret;
}
  /// FbxPropertyT< ERollExtractionMode >  RollExtractionMode
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetRollExtractionMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jint lpERollExtractionMode)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->RollExtractionMode.Set(
  ( FbxCharacter::ERollExtractionMode  )  _lcvt.j2c<jint,FbxCharacter::ERollExtractionMode >(lpERollExtractionMode)
  );
}
  /// FbxPropertyT< ERollExtractionMode >  RollExtractionMode
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxCharacter_mepGetRollExtractionMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxCharacter::ERollExtractionMode  >(
  ((FbxCharacter *) lpjFbxCharacter)->RollExtractionMode.Get(
  ));
  return ret;
}
  /// FbxPropertyT< ERollExtractionMode >  RollExtractionMode
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetRollExtractionMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxCharacter::ERollExtractionMode   >(
   (&((FbxCharacter *) lpjFbxCharacter)->RollExtractionMode
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  LeftUpLegRoll
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetLeftUpLegRoll(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->LeftUpLegRoll.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  LeftUpLegRoll
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetLeftUpLegRoll(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->LeftUpLegRoll.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  LeftUpLegRoll
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetLeftUpLegRoll(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->LeftUpLegRoll
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  LeftUpLegRollMode
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetLeftUpLegRollMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->LeftUpLegRollMode.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  LeftUpLegRollMode
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCharacter_mepGetLeftUpLegRollMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxCharacter *) lpjFbxCharacter)->LeftUpLegRollMode.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  LeftUpLegRollMode
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetLeftUpLegRollMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxCharacter *) lpjFbxCharacter)->LeftUpLegRollMode
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  LeftLegRoll
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetLeftLegRoll(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->LeftLegRoll.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  LeftLegRoll
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetLeftLegRoll(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->LeftLegRoll.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  LeftLegRoll
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetLeftLegRoll(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->LeftLegRoll
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  LeftLegRollMode
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetLeftLegRollMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->LeftLegRollMode.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  LeftLegRollMode
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCharacter_mepGetLeftLegRollMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxCharacter *) lpjFbxCharacter)->LeftLegRollMode.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  LeftLegRollMode
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetLeftLegRollMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxCharacter *) lpjFbxCharacter)->LeftLegRollMode
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  RightUpLegRoll
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetRightUpLegRoll(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->RightUpLegRoll.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  RightUpLegRoll
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetRightUpLegRoll(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->RightUpLegRoll.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  RightUpLegRoll
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetRightUpLegRoll(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->RightUpLegRoll
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  RightUpLegRollMode
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetRightUpLegRollMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->RightUpLegRollMode.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  RightUpLegRollMode
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCharacter_mepGetRightUpLegRollMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxCharacter *) lpjFbxCharacter)->RightUpLegRollMode.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  RightUpLegRollMode
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetRightUpLegRollMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxCharacter *) lpjFbxCharacter)->RightUpLegRollMode
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  RightLegRoll
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetRightLegRoll(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->RightLegRoll.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  RightLegRoll
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetRightLegRoll(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->RightLegRoll.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  RightLegRoll
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetRightLegRoll(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->RightLegRoll
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  RightLegRollMode
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetRightLegRollMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->RightLegRollMode.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  RightLegRollMode
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCharacter_mepGetRightLegRollMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxCharacter *) lpjFbxCharacter)->RightLegRollMode.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  RightLegRollMode
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetRightLegRollMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxCharacter *) lpjFbxCharacter)->RightLegRollMode
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  LeftArmRoll
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetLeftArmRoll(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->LeftArmRoll.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  LeftArmRoll
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetLeftArmRoll(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->LeftArmRoll.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  LeftArmRoll
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetLeftArmRoll(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->LeftArmRoll
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  LeftArmRollMode
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetLeftArmRollMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->LeftArmRollMode.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  LeftArmRollMode
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCharacter_mepGetLeftArmRollMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxCharacter *) lpjFbxCharacter)->LeftArmRollMode.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  LeftArmRollMode
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetLeftArmRollMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxCharacter *) lpjFbxCharacter)->LeftArmRollMode
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  LeftForeArmRoll
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetLeftForeArmRoll(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->LeftForeArmRoll.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  LeftForeArmRoll
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetLeftForeArmRoll(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->LeftForeArmRoll.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  LeftForeArmRoll
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetLeftForeArmRoll(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->LeftForeArmRoll
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  LeftForeArmRollMode
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetLeftForeArmRollMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->LeftForeArmRollMode.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  LeftForeArmRollMode
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCharacter_mepGetLeftForeArmRollMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxCharacter *) lpjFbxCharacter)->LeftForeArmRollMode.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  LeftForeArmRollMode
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetLeftForeArmRollMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxCharacter *) lpjFbxCharacter)->LeftForeArmRollMode
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  RightArmRoll
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetRightArmRoll(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->RightArmRoll.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  RightArmRoll
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetRightArmRoll(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->RightArmRoll.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  RightArmRoll
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetRightArmRoll(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->RightArmRoll
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  RightArmRollMode
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetRightArmRollMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->RightArmRollMode.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  RightArmRollMode
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCharacter_mepGetRightArmRollMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxCharacter *) lpjFbxCharacter)->RightArmRollMode.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  RightArmRollMode
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetRightArmRollMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxCharacter *) lpjFbxCharacter)->RightArmRollMode
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  RightForeArmRoll
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetRightForeArmRoll(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->RightForeArmRoll.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  RightForeArmRoll
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetRightForeArmRoll(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->RightForeArmRoll.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  RightForeArmRoll
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetRightForeArmRoll(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->RightForeArmRoll
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  RightForeArmRollMode
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetRightForeArmRollMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->RightForeArmRollMode.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  RightForeArmRollMode
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCharacter_mepGetRightForeArmRollMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxCharacter *) lpjFbxCharacter)->RightForeArmRollMode.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  RightForeArmRollMode
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetRightForeArmRollMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxCharacter *) lpjFbxCharacter)->RightForeArmRollMode
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  LeftUpLegRollEx
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetLeftUpLegRollEx(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->LeftUpLegRollEx.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  LeftUpLegRollEx
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetLeftUpLegRollEx(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->LeftUpLegRollEx.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  LeftUpLegRollEx
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetLeftUpLegRollEx(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->LeftUpLegRollEx
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  LeftUpLegRollExMode
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetLeftUpLegRollExMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->LeftUpLegRollExMode.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  LeftUpLegRollExMode
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCharacter_mepGetLeftUpLegRollExMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxCharacter *) lpjFbxCharacter)->LeftUpLegRollExMode.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  LeftUpLegRollExMode
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetLeftUpLegRollExMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxCharacter *) lpjFbxCharacter)->LeftUpLegRollExMode
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  LeftLegRollEx
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetLeftLegRollEx(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->LeftLegRollEx.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  LeftLegRollEx
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetLeftLegRollEx(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->LeftLegRollEx.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  LeftLegRollEx
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetLeftLegRollEx(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->LeftLegRollEx
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  LeftLegRollExMode
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetLeftLegRollExMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->LeftLegRollExMode.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  LeftLegRollExMode
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCharacter_mepGetLeftLegRollExMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxCharacter *) lpjFbxCharacter)->LeftLegRollExMode.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  LeftLegRollExMode
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetLeftLegRollExMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxCharacter *) lpjFbxCharacter)->LeftLegRollExMode
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  RightUpLegRollEx
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetRightUpLegRollEx(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->RightUpLegRollEx.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  RightUpLegRollEx
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetRightUpLegRollEx(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->RightUpLegRollEx.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  RightUpLegRollEx
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetRightUpLegRollEx(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->RightUpLegRollEx
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  RightUpLegRollExMode
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetRightUpLegRollExMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->RightUpLegRollExMode.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  RightUpLegRollExMode
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCharacter_mepGetRightUpLegRollExMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxCharacter *) lpjFbxCharacter)->RightUpLegRollExMode.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  RightUpLegRollExMode
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetRightUpLegRollExMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxCharacter *) lpjFbxCharacter)->RightUpLegRollExMode
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  RightLegRollEx
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetRightLegRollEx(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->RightLegRollEx.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  RightLegRollEx
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetRightLegRollEx(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->RightLegRollEx.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  RightLegRollEx
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetRightLegRollEx(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->RightLegRollEx
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  RightLegRollExMode
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetRightLegRollExMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->RightLegRollExMode.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  RightLegRollExMode
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCharacter_mepGetRightLegRollExMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxCharacter *) lpjFbxCharacter)->RightLegRollExMode.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  RightLegRollExMode
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetRightLegRollExMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxCharacter *) lpjFbxCharacter)->RightLegRollExMode
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  LeftArmRollEx
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetLeftArmRollEx(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->LeftArmRollEx.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  LeftArmRollEx
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetLeftArmRollEx(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->LeftArmRollEx.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  LeftArmRollEx
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetLeftArmRollEx(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->LeftArmRollEx
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  LeftArmRollExMode
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetLeftArmRollExMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->LeftArmRollExMode.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  LeftArmRollExMode
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCharacter_mepGetLeftArmRollExMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxCharacter *) lpjFbxCharacter)->LeftArmRollExMode.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  LeftArmRollExMode
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetLeftArmRollExMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxCharacter *) lpjFbxCharacter)->LeftArmRollExMode
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  LeftForeArmRollEx
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetLeftForeArmRollEx(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->LeftForeArmRollEx.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  LeftForeArmRollEx
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetLeftForeArmRollEx(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->LeftForeArmRollEx.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  LeftForeArmRollEx
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetLeftForeArmRollEx(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->LeftForeArmRollEx
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  LeftForeArmRollExMode
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetLeftForeArmRollExMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->LeftForeArmRollExMode.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  LeftForeArmRollExMode
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCharacter_mepGetLeftForeArmRollExMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxCharacter *) lpjFbxCharacter)->LeftForeArmRollExMode.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  LeftForeArmRollExMode
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetLeftForeArmRollExMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxCharacter *) lpjFbxCharacter)->LeftForeArmRollExMode
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  RightArmRollEx
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetRightArmRollEx(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->RightArmRollEx.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  RightArmRollEx
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetRightArmRollEx(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->RightArmRollEx.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  RightArmRollEx
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetRightArmRollEx(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->RightArmRollEx
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  RightArmRollExMode
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetRightArmRollExMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->RightArmRollExMode.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  RightArmRollExMode
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCharacter_mepGetRightArmRollExMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxCharacter *) lpjFbxCharacter)->RightArmRollExMode.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  RightArmRollExMode
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetRightArmRollExMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxCharacter *) lpjFbxCharacter)->RightArmRollExMode
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  RightForeArmExRoll
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetRightForeArmExRoll(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->RightForeArmExRoll.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  RightForeArmExRoll
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetRightForeArmExRoll(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->RightForeArmExRoll.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  RightForeArmExRoll
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetRightForeArmExRoll(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->RightForeArmExRoll
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  RightForeArmRollExMode
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetRightForeArmRollExMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->RightForeArmRollExMode.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  RightForeArmRollExMode
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCharacter_mepGetRightForeArmRollExMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxCharacter *) lpjFbxCharacter)->RightForeArmRollExMode.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  RightForeArmRollExMode
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetRightForeArmRollExMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxCharacter *) lpjFbxCharacter)->RightForeArmRollExMode
  ));
  return ret;
}
  /// FbxPropertyT< EContactBehaviour >  ContactBehaviour
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetContactBehaviour(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jint lpEContactBehaviour)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->ContactBehaviour.Set(
  ( FbxCharacter::EContactBehaviour  )  _lcvt.j2c<jint,FbxCharacter::EContactBehaviour >(lpEContactBehaviour)
  );
}
  /// FbxPropertyT< EContactBehaviour >  ContactBehaviour
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxCharacter_mepGetContactBehaviour(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxCharacter::EContactBehaviour  >(
  ((FbxCharacter *) lpjFbxCharacter)->ContactBehaviour.Get(
  ));
  return ret;
}
  /// FbxPropertyT< EContactBehaviour >  ContactBehaviour
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetContactBehaviour(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxCharacter::EContactBehaviour   >(
   (&((FbxCharacter *) lpjFbxCharacter)->ContactBehaviour
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  FootFloorContact
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetFootFloorContact(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->FootFloorContact.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  FootFloorContact
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCharacter_mepGetFootFloorContact(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxCharacter *) lpjFbxCharacter)->FootFloorContact.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  FootFloorContact
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetFootFloorContact(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxCharacter *) lpjFbxCharacter)->FootFloorContact
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  FootAutomaticToes
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetFootAutomaticToes(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->FootAutomaticToes.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  FootAutomaticToes
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCharacter_mepGetFootAutomaticToes(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxCharacter *) lpjFbxCharacter)->FootAutomaticToes.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  FootAutomaticToes
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetFootAutomaticToes(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxCharacter *) lpjFbxCharacter)->FootAutomaticToes
  ));
  return ret;
}
  /// FbxPropertyT< EFloorPivot >  FootFloorPivot
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetFootFloorPivot(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jint lpEFloorPivot)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->FootFloorPivot.Set(
  ( FbxCharacter::EFloorPivot  )  _lcvt.j2c<jint,FbxCharacter::EFloorPivot >(lpEFloorPivot)
  );
}
  /// FbxPropertyT< EFloorPivot >  FootFloorPivot
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxCharacter_mepGetFootFloorPivot(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxCharacter::EFloorPivot  >(
  ((FbxCharacter *) lpjFbxCharacter)->FootFloorPivot.Get(
  ));
  return ret;
}
  /// FbxPropertyT< EFloorPivot >  FootFloorPivot
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetFootFloorPivot(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxCharacter::EFloorPivot   >(
   (&((FbxCharacter *) lpjFbxCharacter)->FootFloorPivot
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FootBottomToAnkle
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetFootBottomToAnkle(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->FootBottomToAnkle.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  FootBottomToAnkle
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetFootBottomToAnkle(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->FootBottomToAnkle.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FootBottomToAnkle
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetFootBottomToAnkle(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->FootBottomToAnkle
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FootBackToAnkle
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetFootBackToAnkle(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->FootBackToAnkle.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  FootBackToAnkle
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetFootBackToAnkle(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->FootBackToAnkle.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FootBackToAnkle
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetFootBackToAnkle(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->FootBackToAnkle
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FootMiddleToAnkle
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetFootMiddleToAnkle(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->FootMiddleToAnkle.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  FootMiddleToAnkle
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetFootMiddleToAnkle(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->FootMiddleToAnkle.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FootMiddleToAnkle
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetFootMiddleToAnkle(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->FootMiddleToAnkle
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FootFrontToMiddle
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetFootFrontToMiddle(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->FootFrontToMiddle.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  FootFrontToMiddle
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetFootFrontToMiddle(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->FootFrontToMiddle.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FootFrontToMiddle
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetFootFrontToMiddle(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->FootFrontToMiddle
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FootInToAnkle
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetFootInToAnkle(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->FootInToAnkle.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  FootInToAnkle
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetFootInToAnkle(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->FootInToAnkle.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FootInToAnkle
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetFootInToAnkle(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->FootInToAnkle
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FootOutToAnkle
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetFootOutToAnkle(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->FootOutToAnkle.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  FootOutToAnkle
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetFootOutToAnkle(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->FootOutToAnkle.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FootOutToAnkle
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetFootOutToAnkle(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->FootOutToAnkle
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FootContactSize
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetFootContactSize(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->FootContactSize.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  FootContactSize
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetFootContactSize(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->FootContactSize.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FootContactSize
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetFootContactSize(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->FootContactSize
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  FootFingerContact
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetFootFingerContact(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->FootFingerContact.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  FootFingerContact
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCharacter_mepGetFootFingerContact(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxCharacter *) lpjFbxCharacter)->FootFingerContact.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  FootFingerContact
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetFootFingerContact(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxCharacter *) lpjFbxCharacter)->FootFingerContact
  ));
  return ret;
}
  /// FbxPropertyT< EFootContactType >  FootContactType
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetFootContactType(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jint lpEFootContactType)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->FootContactType.Set(
  ( FbxCharacter::EFootContactType  )  _lcvt.j2c<jint,FbxCharacter::EFootContactType >(lpEFootContactType)
  );
}
  /// FbxPropertyT< EFootContactType >  FootContactType
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxCharacter_mepGetFootContactType(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxCharacter::EFootContactType  >(
  ((FbxCharacter *) lpjFbxCharacter)->FootContactType.Get(
  ));
  return ret;
}
  /// FbxPropertyT< EFootContactType >  FootContactType
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetFootContactType(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxCharacter::EFootContactType   >(
   (&((FbxCharacter *) lpjFbxCharacter)->FootContactType
  ));
  return ret;
}
  /// FbxPropertyT< EFingerContactMode >  FootFingerContactMode
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetFootFingerContactMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jint lpEFingerContactMode)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->FootFingerContactMode.Set(
  ( FbxCharacter::EFingerContactMode  )  _lcvt.j2c<jint,FbxCharacter::EFingerContactMode >(lpEFingerContactMode)
  );
}
  /// FbxPropertyT< EFingerContactMode >  FootFingerContactMode
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxCharacter_mepGetFootFingerContactMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxCharacter::EFingerContactMode  >(
  ((FbxCharacter *) lpjFbxCharacter)->FootFingerContactMode.Get(
  ));
  return ret;
}
  /// FbxPropertyT< EFingerContactMode >  FootFingerContactMode
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetFootFingerContactMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxCharacter::EFingerContactMode   >(
   (&((FbxCharacter *) lpjFbxCharacter)->FootFingerContactMode
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FootContactStiffness
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetFootContactStiffness(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->FootContactStiffness.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  FootContactStiffness
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetFootContactStiffness(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->FootContactStiffness.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FootContactStiffness
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetFootContactStiffness(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->FootContactStiffness
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FootFingerContactRollStiffness
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetFootFingerContactRollStiffness(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->FootFingerContactRollStiffness.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  FootFingerContactRollStiffness
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetFootFingerContactRollStiffness(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->FootFingerContactRollStiffness.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  FootFingerContactRollStiffness
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetFootFingerContactRollStiffness(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->FootFingerContactRollStiffness
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  HandFloorContact
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetHandFloorContact(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->HandFloorContact.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  HandFloorContact
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCharacter_mepGetHandFloorContact(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxCharacter *) lpjFbxCharacter)->HandFloorContact.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  HandFloorContact
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetHandFloorContact(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxCharacter *) lpjFbxCharacter)->HandFloorContact
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  HandAutomaticFingers
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetHandAutomaticFingers(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->HandAutomaticFingers.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  HandAutomaticFingers
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCharacter_mepGetHandAutomaticFingers(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxCharacter *) lpjFbxCharacter)->HandAutomaticFingers.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  HandAutomaticFingers
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetHandAutomaticFingers(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxCharacter *) lpjFbxCharacter)->HandAutomaticFingers
  ));
  return ret;
}
  /// FbxPropertyT< EFloorPivot >  HandFloorPivot
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetHandFloorPivot(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jint lpEFloorPivot)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->HandFloorPivot.Set(
  ( FbxCharacter::EFloorPivot  )  _lcvt.j2c<jint,FbxCharacter::EFloorPivot >(lpEFloorPivot)
  );
}
  /// FbxPropertyT< EFloorPivot >  HandFloorPivot
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxCharacter_mepGetHandFloorPivot(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxCharacter::EFloorPivot  >(
  ((FbxCharacter *) lpjFbxCharacter)->HandFloorPivot.Get(
  ));
  return ret;
}
  /// FbxPropertyT< EFloorPivot >  HandFloorPivot
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetHandFloorPivot(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxCharacter::EFloorPivot   >(
   (&((FbxCharacter *) lpjFbxCharacter)->HandFloorPivot
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  HandBottomToWrist
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetHandBottomToWrist(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->HandBottomToWrist.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  HandBottomToWrist
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetHandBottomToWrist(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->HandBottomToWrist.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  HandBottomToWrist
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetHandBottomToWrist(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->HandBottomToWrist
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  HandBackToWrist
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetHandBackToWrist(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->HandBackToWrist.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  HandBackToWrist
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetHandBackToWrist(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->HandBackToWrist.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  HandBackToWrist
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetHandBackToWrist(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->HandBackToWrist
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  HandMiddleToWrist
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetHandMiddleToWrist(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->HandMiddleToWrist.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  HandMiddleToWrist
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetHandMiddleToWrist(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->HandMiddleToWrist.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  HandMiddleToWrist
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetHandMiddleToWrist(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->HandMiddleToWrist
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  HandFrontToMiddle
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetHandFrontToMiddle(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->HandFrontToMiddle.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  HandFrontToMiddle
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetHandFrontToMiddle(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->HandFrontToMiddle.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  HandFrontToMiddle
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetHandFrontToMiddle(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->HandFrontToMiddle
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  HandInToWrist
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetHandInToWrist(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->HandInToWrist.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  HandInToWrist
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetHandInToWrist(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->HandInToWrist.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  HandInToWrist
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetHandInToWrist(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->HandInToWrist
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  HandOutToWrist
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetHandOutToWrist(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->HandOutToWrist.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  HandOutToWrist
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetHandOutToWrist(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->HandOutToWrist.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  HandOutToWrist
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetHandOutToWrist(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->HandOutToWrist
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  HandContactSize
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetHandContactSize(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->HandContactSize.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  HandContactSize
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetHandContactSize(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->HandContactSize.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  HandContactSize
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetHandContactSize(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->HandContactSize
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  HandFingerContact
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetHandFingerContact(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->HandFingerContact.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  HandFingerContact
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCharacter_mepGetHandFingerContact(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxCharacter *) lpjFbxCharacter)->HandFingerContact.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  HandFingerContact
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetHandFingerContact(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxCharacter *) lpjFbxCharacter)->HandFingerContact
  ));
  return ret;
}
  /// FbxPropertyT< EHandContactType >  HandContactType
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetHandContactType(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jint lpEHandContactType)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->HandContactType.Set(
  ( FbxCharacter::EHandContactType  )  _lcvt.j2c<jint,FbxCharacter::EHandContactType >(lpEHandContactType)
  );
}
  /// FbxPropertyT< EHandContactType >  HandContactType
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxCharacter_mepGetHandContactType(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxCharacter::EHandContactType  >(
  ((FbxCharacter *) lpjFbxCharacter)->HandContactType.Get(
  ));
  return ret;
}
  /// FbxPropertyT< EHandContactType >  HandContactType
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetHandContactType(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxCharacter::EHandContactType   >(
   (&((FbxCharacter *) lpjFbxCharacter)->HandContactType
  ));
  return ret;
}
  /// FbxPropertyT< EFingerContactMode >  HandFingerContactMode
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetHandFingerContactMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jint lpEFingerContactMode)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->HandFingerContactMode.Set(
  ( FbxCharacter::EFingerContactMode  )  _lcvt.j2c<jint,FbxCharacter::EFingerContactMode >(lpEFingerContactMode)
  );
}
  /// FbxPropertyT< EFingerContactMode >  HandFingerContactMode
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxCharacter_mepGetHandFingerContactMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxCharacter::EFingerContactMode  >(
  ((FbxCharacter *) lpjFbxCharacter)->HandFingerContactMode.Get(
  ));
  return ret;
}
  /// FbxPropertyT< EFingerContactMode >  HandFingerContactMode
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetHandFingerContactMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxCharacter::EFingerContactMode   >(
   (&((FbxCharacter *) lpjFbxCharacter)->HandFingerContactMode
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  HandContactStiffness
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetHandContactStiffness(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->HandContactStiffness.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  HandContactStiffness
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetHandContactStiffness(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->HandContactStiffness.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  HandContactStiffness
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetHandContactStiffness(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->HandContactStiffness
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  HandFingerContactRollStiffness
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetHandFingerContactRollStiffness(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->HandFingerContactRollStiffness.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  HandFingerContactRollStiffness
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetHandFingerContactRollStiffness(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->HandFingerContactRollStiffness.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  HandFingerContactRollStiffness
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetHandFingerContactRollStiffness(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->HandFingerContactRollStiffness
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  LeftHandThumbTip
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetLeftHandThumbTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->LeftHandThumbTip.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  LeftHandThumbTip
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetLeftHandThumbTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->LeftHandThumbTip.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  LeftHandThumbTip
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetLeftHandThumbTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->LeftHandThumbTip
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  LeftHandIndexTip
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetLeftHandIndexTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->LeftHandIndexTip.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  LeftHandIndexTip
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetLeftHandIndexTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->LeftHandIndexTip.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  LeftHandIndexTip
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetLeftHandIndexTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->LeftHandIndexTip
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  LeftHandMiddleTip
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetLeftHandMiddleTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->LeftHandMiddleTip.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  LeftHandMiddleTip
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetLeftHandMiddleTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->LeftHandMiddleTip.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  LeftHandMiddleTip
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetLeftHandMiddleTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->LeftHandMiddleTip
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  LeftHandRingTip
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetLeftHandRingTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->LeftHandRingTip.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  LeftHandRingTip
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetLeftHandRingTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->LeftHandRingTip.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  LeftHandRingTip
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetLeftHandRingTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->LeftHandRingTip
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  LeftHandPinkyTip
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetLeftHandPinkyTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->LeftHandPinkyTip.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  LeftHandPinkyTip
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetLeftHandPinkyTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->LeftHandPinkyTip.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  LeftHandPinkyTip
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetLeftHandPinkyTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->LeftHandPinkyTip
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  LeftHandExtraFingerTip
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetLeftHandExtraFingerTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->LeftHandExtraFingerTip.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  LeftHandExtraFingerTip
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetLeftHandExtraFingerTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->LeftHandExtraFingerTip.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  LeftHandExtraFingerTip
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetLeftHandExtraFingerTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->LeftHandExtraFingerTip
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  RightHandThumbTip
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetRightHandThumbTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->RightHandThumbTip.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  RightHandThumbTip
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetRightHandThumbTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->RightHandThumbTip.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  RightHandThumbTip
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetRightHandThumbTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->RightHandThumbTip
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  RightHandIndexTip
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetRightHandIndexTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->RightHandIndexTip.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  RightHandIndexTip
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetRightHandIndexTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->RightHandIndexTip.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  RightHandIndexTip
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetRightHandIndexTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->RightHandIndexTip
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  RightHandMiddleTip
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetRightHandMiddleTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->RightHandMiddleTip.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  RightHandMiddleTip
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetRightHandMiddleTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->RightHandMiddleTip.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  RightHandMiddleTip
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetRightHandMiddleTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->RightHandMiddleTip
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  RightHandRingTip
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetRightHandRingTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->RightHandRingTip.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  RightHandRingTip
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetRightHandRingTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->RightHandRingTip.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  RightHandRingTip
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetRightHandRingTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->RightHandRingTip
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  RightHandPinkyTip
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetRightHandPinkyTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->RightHandPinkyTip.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  RightHandPinkyTip
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetRightHandPinkyTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->RightHandPinkyTip.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  RightHandPinkyTip
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetRightHandPinkyTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->RightHandPinkyTip
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  RightHandExtraFingerTip
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetRightHandExtraFingerTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->RightHandExtraFingerTip.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  RightHandExtraFingerTip
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetRightHandExtraFingerTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->RightHandExtraFingerTip.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  RightHandExtraFingerTip
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetRightHandExtraFingerTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->RightHandExtraFingerTip
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  LeftFootThumbTip
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetLeftFootThumbTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->LeftFootThumbTip.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  LeftFootThumbTip
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetLeftFootThumbTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->LeftFootThumbTip.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  LeftFootThumbTip
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetLeftFootThumbTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->LeftFootThumbTip
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  LeftFootIndexTip
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetLeftFootIndexTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->LeftFootIndexTip.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  LeftFootIndexTip
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetLeftFootIndexTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->LeftFootIndexTip.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  LeftFootIndexTip
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetLeftFootIndexTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->LeftFootIndexTip
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  LeftFootMiddleTip
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetLeftFootMiddleTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->LeftFootMiddleTip.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  LeftFootMiddleTip
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetLeftFootMiddleTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->LeftFootMiddleTip.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  LeftFootMiddleTip
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetLeftFootMiddleTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->LeftFootMiddleTip
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  LeftFootRingTip
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetLeftFootRingTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->LeftFootRingTip.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  LeftFootRingTip
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetLeftFootRingTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->LeftFootRingTip.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  LeftFootRingTip
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetLeftFootRingTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->LeftFootRingTip
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  LeftFootPinkyTip
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetLeftFootPinkyTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->LeftFootPinkyTip.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  LeftFootPinkyTip
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetLeftFootPinkyTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->LeftFootPinkyTip.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  LeftFootPinkyTip
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetLeftFootPinkyTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->LeftFootPinkyTip
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  LeftFootExtraFingerTip
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetLeftFootExtraFingerTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->LeftFootExtraFingerTip.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  LeftFootExtraFingerTip
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetLeftFootExtraFingerTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->LeftFootExtraFingerTip.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  LeftFootExtraFingerTip
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetLeftFootExtraFingerTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->LeftFootExtraFingerTip
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  RightFootThumbTip
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetRightFootThumbTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->RightFootThumbTip.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  RightFootThumbTip
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetRightFootThumbTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->RightFootThumbTip.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  RightFootThumbTip
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetRightFootThumbTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->RightFootThumbTip
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  RightFootIndexTip
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetRightFootIndexTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->RightFootIndexTip.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  RightFootIndexTip
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetRightFootIndexTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->RightFootIndexTip.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  RightFootIndexTip
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetRightFootIndexTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->RightFootIndexTip
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  RightFootMiddleTip
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetRightFootMiddleTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->RightFootMiddleTip.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  RightFootMiddleTip
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetRightFootMiddleTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->RightFootMiddleTip.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  RightFootMiddleTip
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetRightFootMiddleTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->RightFootMiddleTip
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  RightFootRingTip
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetRightFootRingTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->RightFootRingTip.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  RightFootRingTip
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetRightFootRingTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->RightFootRingTip.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  RightFootRingTip
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetRightFootRingTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->RightFootRingTip
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  RightFootPinkyTip
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetRightFootPinkyTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->RightFootPinkyTip.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  RightFootPinkyTip
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetRightFootPinkyTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->RightFootPinkyTip.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  RightFootPinkyTip
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetRightFootPinkyTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->RightFootPinkyTip
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  RightFootExtraFingerTip
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetRightFootExtraFingerTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->RightFootExtraFingerTip.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  RightFootExtraFingerTip
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetRightFootExtraFingerTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->RightFootExtraFingerTip.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  RightFootExtraFingerTip
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetRightFootExtraFingerTip(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->RightFootExtraFingerTip
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  FingerSolving
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetFingerSolving(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->FingerSolving.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  FingerSolving
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCharacter_mepGetFingerSolving(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxCharacter *) lpjFbxCharacter)->FingerSolving.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  FingerSolving
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetFingerSolving(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxCharacter *) lpjFbxCharacter)->FingerSolving
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlPullLeftToeBase
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetCtrlPullLeftToeBase(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->CtrlPullLeftToeBase.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  CtrlPullLeftToeBase
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetCtrlPullLeftToeBase(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->CtrlPullLeftToeBase.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlPullLeftToeBase
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetCtrlPullLeftToeBase(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->CtrlPullLeftToeBase
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlPullLeftFoot
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetCtrlPullLeftFoot(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->CtrlPullLeftFoot.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  CtrlPullLeftFoot
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetCtrlPullLeftFoot(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->CtrlPullLeftFoot.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlPullLeftFoot
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetCtrlPullLeftFoot(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->CtrlPullLeftFoot
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlPullLeftKnee
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetCtrlPullLeftKnee(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->CtrlPullLeftKnee.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  CtrlPullLeftKnee
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetCtrlPullLeftKnee(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->CtrlPullLeftKnee.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlPullLeftKnee
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetCtrlPullLeftKnee(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->CtrlPullLeftKnee
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlPullRightToeBase
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetCtrlPullRightToeBase(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->CtrlPullRightToeBase.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  CtrlPullRightToeBase
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetCtrlPullRightToeBase(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->CtrlPullRightToeBase.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlPullRightToeBase
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetCtrlPullRightToeBase(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->CtrlPullRightToeBase
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlPullRightFoot
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetCtrlPullRightFoot(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->CtrlPullRightFoot.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  CtrlPullRightFoot
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetCtrlPullRightFoot(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->CtrlPullRightFoot.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlPullRightFoot
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetCtrlPullRightFoot(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->CtrlPullRightFoot
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlPullRightKnee
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetCtrlPullRightKnee(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->CtrlPullRightKnee.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  CtrlPullRightKnee
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetCtrlPullRightKnee(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->CtrlPullRightKnee.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlPullRightKnee
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetCtrlPullRightKnee(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->CtrlPullRightKnee
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlPullLeftFingerBase
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetCtrlPullLeftFingerBase(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->CtrlPullLeftFingerBase.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  CtrlPullLeftFingerBase
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetCtrlPullLeftFingerBase(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->CtrlPullLeftFingerBase.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlPullLeftFingerBase
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetCtrlPullLeftFingerBase(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->CtrlPullLeftFingerBase
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlPullLeftHand
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetCtrlPullLeftHand(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->CtrlPullLeftHand.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  CtrlPullLeftHand
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetCtrlPullLeftHand(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->CtrlPullLeftHand.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlPullLeftHand
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetCtrlPullLeftHand(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->CtrlPullLeftHand
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlPullLeftElbow
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetCtrlPullLeftElbow(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->CtrlPullLeftElbow.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  CtrlPullLeftElbow
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetCtrlPullLeftElbow(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->CtrlPullLeftElbow.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlPullLeftElbow
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetCtrlPullLeftElbow(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->CtrlPullLeftElbow
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlPullRightFingerBase
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetCtrlPullRightFingerBase(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->CtrlPullRightFingerBase.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  CtrlPullRightFingerBase
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetCtrlPullRightFingerBase(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->CtrlPullRightFingerBase.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlPullRightFingerBase
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetCtrlPullRightFingerBase(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->CtrlPullRightFingerBase
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlPullRightHand
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetCtrlPullRightHand(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->CtrlPullRightHand.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  CtrlPullRightHand
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetCtrlPullRightHand(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->CtrlPullRightHand.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlPullRightHand
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetCtrlPullRightHand(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->CtrlPullRightHand
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlPullRightElbow
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetCtrlPullRightElbow(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->CtrlPullRightElbow.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  CtrlPullRightElbow
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetCtrlPullRightElbow(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->CtrlPullRightElbow.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlPullRightElbow
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetCtrlPullRightElbow(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->CtrlPullRightElbow
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlChestPullLeftHand
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetCtrlChestPullLeftHand(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->CtrlChestPullLeftHand.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  CtrlChestPullLeftHand
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetCtrlChestPullLeftHand(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->CtrlChestPullLeftHand.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlChestPullLeftHand
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetCtrlChestPullLeftHand(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->CtrlChestPullLeftHand
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlChestPullRightHand
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetCtrlChestPullRightHand(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->CtrlChestPullRightHand.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  CtrlChestPullRightHand
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetCtrlChestPullRightHand(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->CtrlChestPullRightHand.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlChestPullRightHand
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetCtrlChestPullRightHand(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->CtrlChestPullRightHand
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlPullHead
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetCtrlPullHead(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->CtrlPullHead.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  CtrlPullHead
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetCtrlPullHead(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->CtrlPullHead.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlPullHead
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetCtrlPullHead(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->CtrlPullHead
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlResistHipsPosition
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetCtrlResistHipsPosition(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->CtrlResistHipsPosition.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  CtrlResistHipsPosition
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetCtrlResistHipsPosition(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->CtrlResistHipsPosition.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlResistHipsPosition
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetCtrlResistHipsPosition(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->CtrlResistHipsPosition
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlEnforceGravity
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetCtrlEnforceGravity(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->CtrlEnforceGravity.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  CtrlEnforceGravity
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetCtrlEnforceGravity(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->CtrlEnforceGravity.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlEnforceGravity
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetCtrlEnforceGravity(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->CtrlEnforceGravity
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlResistHipsOrientation
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetCtrlResistHipsOrientation(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->CtrlResistHipsOrientation.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  CtrlResistHipsOrientation
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetCtrlResistHipsOrientation(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->CtrlResistHipsOrientation.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlResistHipsOrientation
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetCtrlResistHipsOrientation(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->CtrlResistHipsOrientation
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlResistChestPosition
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetCtrlResistChestPosition(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->CtrlResistChestPosition.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  CtrlResistChestPosition
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetCtrlResistChestPosition(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->CtrlResistChestPosition.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlResistChestPosition
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetCtrlResistChestPosition(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->CtrlResistChestPosition
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlResistChestOrientation
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetCtrlResistChestOrientation(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->CtrlResistChestOrientation.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  CtrlResistChestOrientation
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetCtrlResistChestOrientation(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->CtrlResistChestOrientation.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlResistChestOrientation
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetCtrlResistChestOrientation(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->CtrlResistChestOrientation
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlResistLeftCollar
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetCtrlResistLeftCollar(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->CtrlResistLeftCollar.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  CtrlResistLeftCollar
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetCtrlResistLeftCollar(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->CtrlResistLeftCollar.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlResistLeftCollar
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetCtrlResistLeftCollar(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->CtrlResistLeftCollar
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlResistRightCollar
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetCtrlResistRightCollar(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->CtrlResistRightCollar.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  CtrlResistRightCollar
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetCtrlResistRightCollar(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->CtrlResistRightCollar.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlResistRightCollar
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetCtrlResistRightCollar(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->CtrlResistRightCollar
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlResistLeftKnee
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetCtrlResistLeftKnee(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->CtrlResistLeftKnee.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  CtrlResistLeftKnee
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetCtrlResistLeftKnee(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->CtrlResistLeftKnee.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlResistLeftKnee
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetCtrlResistLeftKnee(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->CtrlResistLeftKnee
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlResistMaximumExtensionLeftKnee
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetCtrlResistMaximumExtensionLeftKnee(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->CtrlResistMaximumExtensionLeftKnee.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  CtrlResistMaximumExtensionLeftKnee
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetCtrlResistMaximumExtensionLeftKnee(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->CtrlResistMaximumExtensionLeftKnee.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlResistMaximumExtensionLeftKnee
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetCtrlResistMaximumExtensionLeftKnee(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->CtrlResistMaximumExtensionLeftKnee
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlResistCompressionFactorLeftKnee
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetCtrlResistCompressionFactorLeftKnee(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->CtrlResistCompressionFactorLeftKnee.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  CtrlResistCompressionFactorLeftKnee
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetCtrlResistCompressionFactorLeftKnee(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->CtrlResistCompressionFactorLeftKnee.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlResistCompressionFactorLeftKnee
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetCtrlResistCompressionFactorLeftKnee(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->CtrlResistCompressionFactorLeftKnee
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlResistRightKnee
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetCtrlResistRightKnee(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->CtrlResistRightKnee.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  CtrlResistRightKnee
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetCtrlResistRightKnee(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->CtrlResistRightKnee.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlResistRightKnee
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetCtrlResistRightKnee(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->CtrlResistRightKnee
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlResistMaximumExtensionRightKnee
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetCtrlResistMaximumExtensionRightKnee(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->CtrlResistMaximumExtensionRightKnee.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  CtrlResistMaximumExtensionRightKnee
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetCtrlResistMaximumExtensionRightKnee(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->CtrlResistMaximumExtensionRightKnee.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlResistMaximumExtensionRightKnee
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetCtrlResistMaximumExtensionRightKnee(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->CtrlResistMaximumExtensionRightKnee
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlResistCompressionFactorRightKnee
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetCtrlResistCompressionFactorRightKnee(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->CtrlResistCompressionFactorRightKnee.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  CtrlResistCompressionFactorRightKnee
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetCtrlResistCompressionFactorRightKnee(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->CtrlResistCompressionFactorRightKnee.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlResistCompressionFactorRightKnee
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetCtrlResistCompressionFactorRightKnee(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->CtrlResistCompressionFactorRightKnee
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlResistLeftElbow
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetCtrlResistLeftElbow(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->CtrlResistLeftElbow.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  CtrlResistLeftElbow
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetCtrlResistLeftElbow(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->CtrlResistLeftElbow.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlResistLeftElbow
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetCtrlResistLeftElbow(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->CtrlResistLeftElbow
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlResistMaximumExtensionLeftElbow
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetCtrlResistMaximumExtensionLeftElbow(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->CtrlResistMaximumExtensionLeftElbow.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  CtrlResistMaximumExtensionLeftElbow
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetCtrlResistMaximumExtensionLeftElbow(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->CtrlResistMaximumExtensionLeftElbow.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlResistMaximumExtensionLeftElbow
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetCtrlResistMaximumExtensionLeftElbow(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->CtrlResistMaximumExtensionLeftElbow
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlResistCompressionFactorLeftElbow
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetCtrlResistCompressionFactorLeftElbow(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->CtrlResistCompressionFactorLeftElbow.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  CtrlResistCompressionFactorLeftElbow
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetCtrlResistCompressionFactorLeftElbow(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->CtrlResistCompressionFactorLeftElbow.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlResistCompressionFactorLeftElbow
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetCtrlResistCompressionFactorLeftElbow(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->CtrlResistCompressionFactorLeftElbow
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlResistRightElbow
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetCtrlResistRightElbow(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->CtrlResistRightElbow.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  CtrlResistRightElbow
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetCtrlResistRightElbow(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->CtrlResistRightElbow.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlResistRightElbow
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetCtrlResistRightElbow(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->CtrlResistRightElbow
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlResistMaximumExtensionRightElbow
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetCtrlResistMaximumExtensionRightElbow(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->CtrlResistMaximumExtensionRightElbow.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  CtrlResistMaximumExtensionRightElbow
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetCtrlResistMaximumExtensionRightElbow(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->CtrlResistMaximumExtensionRightElbow.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlResistMaximumExtensionRightElbow
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetCtrlResistMaximumExtensionRightElbow(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->CtrlResistMaximumExtensionRightElbow
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlResistCompressionFactorRightElbow
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetCtrlResistCompressionFactorRightElbow(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->CtrlResistCompressionFactorRightElbow.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  CtrlResistCompressionFactorRightElbow
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetCtrlResistCompressionFactorRightElbow(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->CtrlResistCompressionFactorRightElbow.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlResistCompressionFactorRightElbow
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetCtrlResistCompressionFactorRightElbow(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->CtrlResistCompressionFactorRightElbow
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlSpineStiffness
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetCtrlSpineStiffness(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->CtrlSpineStiffness.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  CtrlSpineStiffness
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetCtrlSpineStiffness(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->CtrlSpineStiffness.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlSpineStiffness
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetCtrlSpineStiffness(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->CtrlSpineStiffness
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlNeckStiffness
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetCtrlNeckStiffness(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->CtrlNeckStiffness.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  CtrlNeckStiffness
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetCtrlNeckStiffness(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->CtrlNeckStiffness.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CtrlNeckStiffness
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetCtrlNeckStiffness(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->CtrlNeckStiffness
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  MirrorMode
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetMirrorMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->MirrorMode.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  MirrorMode
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCharacter_mepGetMirrorMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxCharacter *) lpjFbxCharacter)->MirrorMode.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  MirrorMode
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetMirrorMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxCharacter *) lpjFbxCharacter)->MirrorMode
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  ShoulderCorrection
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetShoulderCorrection(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->ShoulderCorrection.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  ShoulderCorrection
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetShoulderCorrection(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->ShoulderCorrection.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  ShoulderCorrection
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetShoulderCorrection(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->ShoulderCorrection
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  LeftKneeKillPitch
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetLeftKneeKillPitch(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->LeftKneeKillPitch.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  LeftKneeKillPitch
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCharacter_mepGetLeftKneeKillPitch(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxCharacter *) lpjFbxCharacter)->LeftKneeKillPitch.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  LeftKneeKillPitch
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetLeftKneeKillPitch(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxCharacter *) lpjFbxCharacter)->LeftKneeKillPitch
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  RightKneeKillPitch
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetRightKneeKillPitch(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->RightKneeKillPitch.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  RightKneeKillPitch
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCharacter_mepGetRightKneeKillPitch(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxCharacter *) lpjFbxCharacter)->RightKneeKillPitch.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  RightKneeKillPitch
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetRightKneeKillPitch(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxCharacter *) lpjFbxCharacter)->RightKneeKillPitch
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  LeftElbowKillPitch
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetLeftElbowKillPitch(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->LeftElbowKillPitch.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  LeftElbowKillPitch
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCharacter_mepGetLeftElbowKillPitch(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxCharacter *) lpjFbxCharacter)->LeftElbowKillPitch.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  LeftElbowKillPitch
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetLeftElbowKillPitch(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxCharacter *) lpjFbxCharacter)->LeftElbowKillPitch
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  RightElbowKillPitch
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetRightElbowKillPitch(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->RightElbowKillPitch.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  RightElbowKillPitch
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCharacter_mepGetRightElbowKillPitch(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxCharacter *) lpjFbxCharacter)->RightElbowKillPitch.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  RightElbowKillPitch
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetRightElbowKillPitch(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxCharacter *) lpjFbxCharacter)->RightElbowKillPitch
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  WriteReference
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetWriteReference(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->WriteReference.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  WriteReference
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCharacter_mepGetWriteReference(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxCharacter *) lpjFbxCharacter)->WriteReference.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  WriteReference
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetWriteReference(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxCharacter *) lpjFbxCharacter)->WriteReference
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  SyncMode
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetSyncMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->SyncMode.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  SyncMode
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCharacter_mepGetSyncMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxCharacter *) lpjFbxCharacter)->SyncMode.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  SyncMode
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetSyncMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxCharacter *) lpjFbxCharacter)->SyncMode
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  Damping
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetDamping(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->Damping.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  Damping
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetDamping(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->Damping.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  Damping
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetDamping(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->Damping
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  OrientationDamping
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetOrientationDamping(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->OrientationDamping.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  OrientationDamping
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetOrientationDamping(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->OrientationDamping.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  OrientationDamping
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetOrientationDamping(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->OrientationDamping
  ));
  return ret;
}
  /// FbxPropertyT< EOffAutoUser >  OrientationDampingMode
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetOrientationDampingMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jint lpEOffAutoUser)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->OrientationDampingMode.Set(
  ( FbxCharacter::EOffAutoUser  )  _lcvt.j2c<jint,FbxCharacter::EOffAutoUser >(lpEOffAutoUser)
  );
}
  /// FbxPropertyT< EOffAutoUser >  OrientationDampingMode
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxCharacter_mepGetOrientationDampingMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxCharacter::EOffAutoUser  >(
  ((FbxCharacter *) lpjFbxCharacter)->OrientationDampingMode.Get(
  ));
  return ret;
}
  /// FbxPropertyT< EOffAutoUser >  OrientationDampingMode
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetOrientationDampingMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxCharacter::EOffAutoUser   >(
   (&((FbxCharacter *) lpjFbxCharacter)->OrientationDampingMode
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  DisplacementDamping
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetDisplacementDamping(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->DisplacementDamping.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  DisplacementDamping
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetDisplacementDamping(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->DisplacementDamping.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  DisplacementDamping
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetDisplacementDamping(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->DisplacementDamping
  ));
  return ret;
}
  /// FbxPropertyT< EOffAutoUser >  DisplacementDampingMode
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetDisplacementDampingMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jint lpEOffAutoUser)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->DisplacementDampingMode.Set(
  ( FbxCharacter::EOffAutoUser  )  _lcvt.j2c<jint,FbxCharacter::EOffAutoUser >(lpEOffAutoUser)
  );
}
  /// FbxPropertyT< EOffAutoUser >  DisplacementDampingMode
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxCharacter_mepGetDisplacementDampingMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxCharacter::EOffAutoUser  >(
  ((FbxCharacter *) lpjFbxCharacter)->DisplacementDampingMode.Get(
  ));
  return ret;
}
  /// FbxPropertyT< EOffAutoUser >  DisplacementDampingMode
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetDisplacementDampingMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxCharacter::EOffAutoUser   >(
   (&((FbxCharacter *) lpjFbxCharacter)->DisplacementDampingMode
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  DisplacementMemory
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetDisplacementMemory(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->DisplacementMemory.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  DisplacementMemory
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetDisplacementMemory(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->DisplacementMemory.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  DisplacementMemory
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetDisplacementMemory(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->DisplacementMemory
  ));
  return ret;
}
  /// FbxPropertyT< EAutoUser >  DisplacementMemoryMode
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetDisplacementMemoryMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jint lpEAutoUser)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->DisplacementMemoryMode.Set(
  ( FbxCharacter::EAutoUser  )  _lcvt.j2c<jint,FbxCharacter::EAutoUser >(lpEAutoUser)
  );
}
  /// FbxPropertyT< EAutoUser >  DisplacementMemoryMode
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxCharacter_mepGetDisplacementMemoryMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxCharacter::EAutoUser  >(
  ((FbxCharacter *) lpjFbxCharacter)->DisplacementMemoryMode.Get(
  ));
  return ret;
}
  /// FbxPropertyT< EAutoUser >  DisplacementMemoryMode
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetDisplacementMemoryMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxCharacter::EAutoUser   >(
   (&((FbxCharacter *) lpjFbxCharacter)->DisplacementMemoryMode
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  HipsDisplacementDamping
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetHipsDisplacementDamping(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->HipsDisplacementDamping.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  HipsDisplacementDamping
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetHipsDisplacementDamping(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->HipsDisplacementDamping.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  HipsDisplacementDamping
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetHipsDisplacementDamping(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->HipsDisplacementDamping
  ));
  return ret;
}
  /// FbxPropertyT< EAutoUser >  HipsDisplacementDampingMode
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetHipsDisplacementDampingMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jint lpEAutoUser)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->HipsDisplacementDampingMode.Set(
  ( FbxCharacter::EAutoUser  )  _lcvt.j2c<jint,FbxCharacter::EAutoUser >(lpEAutoUser)
  );
}
  /// FbxPropertyT< EAutoUser >  HipsDisplacementDampingMode
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxCharacter_mepGetHipsDisplacementDampingMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxCharacter::EAutoUser  >(
  ((FbxCharacter *) lpjFbxCharacter)->HipsDisplacementDampingMode.Get(
  ));
  return ret;
}
  /// FbxPropertyT< EAutoUser >  HipsDisplacementDampingMode
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetHipsDisplacementDampingMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxCharacter::EAutoUser   >(
   (&((FbxCharacter *) lpjFbxCharacter)->HipsDisplacementDampingMode
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  AnkleDisplacementDamping
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetAnkleDisplacementDamping(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->AnkleDisplacementDamping.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  AnkleDisplacementDamping
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetAnkleDisplacementDamping(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->AnkleDisplacementDamping.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  AnkleDisplacementDamping
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetAnkleDisplacementDamping(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->AnkleDisplacementDamping
  ));
  return ret;
}
  /// FbxPropertyT< EAutoUser >  AnkleDisplacementDampingMode
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetAnkleDisplacementDampingMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jint lpEAutoUser)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->AnkleDisplacementDampingMode.Set(
  ( FbxCharacter::EAutoUser  )  _lcvt.j2c<jint,FbxCharacter::EAutoUser >(lpEAutoUser)
  );
}
  /// FbxPropertyT< EAutoUser >  AnkleDisplacementDampingMode
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxCharacter_mepGetAnkleDisplacementDampingMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxCharacter::EAutoUser  >(
  ((FbxCharacter *) lpjFbxCharacter)->AnkleDisplacementDampingMode.Get(
  ));
  return ret;
}
  /// FbxPropertyT< EAutoUser >  AnkleDisplacementDampingMode
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetAnkleDisplacementDampingMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxCharacter::EAutoUser   >(
   (&((FbxCharacter *) lpjFbxCharacter)->AnkleDisplacementDampingMode
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  WristDisplacementDamping
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetWristDisplacementDamping(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->WristDisplacementDamping.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  WristDisplacementDamping
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetWristDisplacementDamping(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->WristDisplacementDamping.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  WristDisplacementDamping
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetWristDisplacementDamping(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->WristDisplacementDamping
  ));
  return ret;
}
  /// FbxPropertyT< EAutoUser >  WristDisplacementDampingMode
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetWristDisplacementDampingMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jint lpEAutoUser)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->WristDisplacementDampingMode.Set(
  ( FbxCharacter::EAutoUser  )  _lcvt.j2c<jint,FbxCharacter::EAutoUser >(lpEAutoUser)
  );
}
  /// FbxPropertyT< EAutoUser >  WristDisplacementDampingMode
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxCharacter_mepGetWristDisplacementDampingMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxCharacter::EAutoUser  >(
  ((FbxCharacter *) lpjFbxCharacter)->WristDisplacementDampingMode.Get(
  ));
  return ret;
}
  /// FbxPropertyT< EAutoUser >  WristDisplacementDampingMode
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetWristDisplacementDampingMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxCharacter::EAutoUser   >(
   (&((FbxCharacter *) lpjFbxCharacter)->WristDisplacementDampingMode
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  Stabilization
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetStabilization(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->Stabilization.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  Stabilization
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetStabilization(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->Stabilization.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  Stabilization
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetStabilization(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->Stabilization
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  AnkleStabilizationTime
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetAnkleStabilizationTime(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->AnkleStabilizationTime.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  AnkleStabilizationTime
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetAnkleStabilizationTime(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->AnkleStabilizationTime.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  AnkleStabilizationTime
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetAnkleStabilizationTime(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->AnkleStabilizationTime
  ));
  return ret;
}
  /// FbxPropertyT< EAutoUser >  AnkleStabilizationTimeMode
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetAnkleStabilizationTimeMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jint lpEAutoUser)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->AnkleStabilizationTimeMode.Set(
  ( FbxCharacter::EAutoUser  )  _lcvt.j2c<jint,FbxCharacter::EAutoUser >(lpEAutoUser)
  );
}
  /// FbxPropertyT< EAutoUser >  AnkleStabilizationTimeMode
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxCharacter_mepGetAnkleStabilizationTimeMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxCharacter::EAutoUser  >(
  ((FbxCharacter *) lpjFbxCharacter)->AnkleStabilizationTimeMode.Get(
  ));
  return ret;
}
  /// FbxPropertyT< EAutoUser >  AnkleStabilizationTimeMode
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetAnkleStabilizationTimeMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxCharacter::EAutoUser   >(
   (&((FbxCharacter *) lpjFbxCharacter)->AnkleStabilizationTimeMode
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  AnkleStabilizationPerimeter
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetAnkleStabilizationPerimeter(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->AnkleStabilizationPerimeter.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  AnkleStabilizationPerimeter
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetAnkleStabilizationPerimeter(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->AnkleStabilizationPerimeter.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  AnkleStabilizationPerimeter
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetAnkleStabilizationPerimeter(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->AnkleStabilizationPerimeter
  ));
  return ret;
}
  /// FbxPropertyT< EAutoUser >  AnkleStabilizationPerimeterMode
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetAnkleStabilizationPerimeterMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jint lpEAutoUser)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->AnkleStabilizationPerimeterMode.Set(
  ( FbxCharacter::EAutoUser  )  _lcvt.j2c<jint,FbxCharacter::EAutoUser >(lpEAutoUser)
  );
}
  /// FbxPropertyT< EAutoUser >  AnkleStabilizationPerimeterMode
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxCharacter_mepGetAnkleStabilizationPerimeterMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxCharacter::EAutoUser  >(
  ((FbxCharacter *) lpjFbxCharacter)->AnkleStabilizationPerimeterMode.Get(
  ));
  return ret;
}
  /// FbxPropertyT< EAutoUser >  AnkleStabilizationPerimeterMode
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetAnkleStabilizationPerimeterMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxCharacter::EAutoUser   >(
   (&((FbxCharacter *) lpjFbxCharacter)->AnkleStabilizationPerimeterMode
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  AnkleStabilizationAngularPerimeter
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetAnkleStabilizationAngularPerimeter(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->AnkleStabilizationAngularPerimeter.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  AnkleStabilizationAngularPerimeter
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetAnkleStabilizationAngularPerimeter(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->AnkleStabilizationAngularPerimeter.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  AnkleStabilizationAngularPerimeter
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetAnkleStabilizationAngularPerimeter(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->AnkleStabilizationAngularPerimeter
  ));
  return ret;
}
  /// FbxPropertyT< EOffAutoUser >  AnkleStabilizationAngularPerimeterMode
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetAnkleStabilizationAngularPerimeterMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jint lpEOffAutoUser)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->AnkleStabilizationAngularPerimeterMode.Set(
  ( FbxCharacter::EOffAutoUser  )  _lcvt.j2c<jint,FbxCharacter::EOffAutoUser >(lpEOffAutoUser)
  );
}
  /// FbxPropertyT< EOffAutoUser >  AnkleStabilizationAngularPerimeterMode
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxCharacter_mepGetAnkleStabilizationAngularPerimeterMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxCharacter::EOffAutoUser  >(
  ((FbxCharacter *) lpjFbxCharacter)->AnkleStabilizationAngularPerimeterMode.Get(
  ));
  return ret;
}
  /// FbxPropertyT< EOffAutoUser >  AnkleStabilizationAngularPerimeterMode
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetAnkleStabilizationAngularPerimeterMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxCharacter::EOffAutoUser   >(
   (&((FbxCharacter *) lpjFbxCharacter)->AnkleStabilizationAngularPerimeterMode
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  AnkleStabilizationFloorProximity
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetAnkleStabilizationFloorProximity(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->AnkleStabilizationFloorProximity.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  AnkleStabilizationFloorProximity
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetAnkleStabilizationFloorProximity(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->AnkleStabilizationFloorProximity.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  AnkleStabilizationFloorProximity
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetAnkleStabilizationFloorProximity(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->AnkleStabilizationFloorProximity
  ));
  return ret;
}
  /// FbxPropertyT< EOffAutoUser >  AnkleStabilizationFloorProximityMode
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetAnkleStabilizationFloorProximityMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jint lpEOffAutoUser)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->AnkleStabilizationFloorProximityMode.Set(
  ( FbxCharacter::EOffAutoUser  )  _lcvt.j2c<jint,FbxCharacter::EOffAutoUser >(lpEOffAutoUser)
  );
}
  /// FbxPropertyT< EOffAutoUser >  AnkleStabilizationFloorProximityMode
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxCharacter_mepGetAnkleStabilizationFloorProximityMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxCharacter::EOffAutoUser  >(
  ((FbxCharacter *) lpjFbxCharacter)->AnkleStabilizationFloorProximityMode.Get(
  ));
  return ret;
}
  /// FbxPropertyT< EOffAutoUser >  AnkleStabilizationFloorProximityMode
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetAnkleStabilizationFloorProximityMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxCharacter::EOffAutoUser   >(
   (&((FbxCharacter *) lpjFbxCharacter)->AnkleStabilizationFloorProximityMode
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  AnkleStabilizationDamping
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetAnkleStabilizationDamping(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->AnkleStabilizationDamping.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  AnkleStabilizationDamping
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetAnkleStabilizationDamping(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->AnkleStabilizationDamping.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  AnkleStabilizationDamping
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetAnkleStabilizationDamping(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->AnkleStabilizationDamping
  ));
  return ret;
}
  /// FbxPropertyT< EOffAutoUser >  AnkleStabilizationDampingMode
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetAnkleStabilizationDampingMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jint lpEOffAutoUser)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->AnkleStabilizationDampingMode.Set(
  ( FbxCharacter::EOffAutoUser  )  _lcvt.j2c<jint,FbxCharacter::EOffAutoUser >(lpEOffAutoUser)
  );
}
  /// FbxPropertyT< EOffAutoUser >  AnkleStabilizationDampingMode
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxCharacter_mepGetAnkleStabilizationDampingMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxCharacter::EOffAutoUser  >(
  ((FbxCharacter *) lpjFbxCharacter)->AnkleStabilizationDampingMode.Get(
  ));
  return ret;
}
  /// FbxPropertyT< EOffAutoUser >  AnkleStabilizationDampingMode
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetAnkleStabilizationDampingMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxCharacter::EOffAutoUser   >(
   (&((FbxCharacter *) lpjFbxCharacter)->AnkleStabilizationDampingMode
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  AnkleStabilizationRecoveryTime
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetAnkleStabilizationRecoveryTime(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->AnkleStabilizationRecoveryTime.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  AnkleStabilizationRecoveryTime
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetAnkleStabilizationRecoveryTime(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->AnkleStabilizationRecoveryTime.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  AnkleStabilizationRecoveryTime
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetAnkleStabilizationRecoveryTime(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->AnkleStabilizationRecoveryTime
  ));
  return ret;
}
  /// FbxPropertyT< EOffAutoUser >  AnkleStabilizationRecoveryTimeMode
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetAnkleStabilizationRecoveryTimeMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jint lpEOffAutoUser)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->AnkleStabilizationRecoveryTimeMode.Set(
  ( FbxCharacter::EOffAutoUser  )  _lcvt.j2c<jint,FbxCharacter::EOffAutoUser >(lpEOffAutoUser)
  );
}
  /// FbxPropertyT< EOffAutoUser >  AnkleStabilizationRecoveryTimeMode
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxCharacter_mepGetAnkleStabilizationRecoveryTimeMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  FbxCharacter::EOffAutoUser  >(
  ((FbxCharacter *) lpjFbxCharacter)->AnkleStabilizationRecoveryTimeMode.Get(
  ));
  return ret;
}
  /// FbxPropertyT< EOffAutoUser >  AnkleStabilizationRecoveryTimeMode
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetAnkleStabilizationRecoveryTimeMode(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxCharacter::EOffAutoUser   >(
   (&((FbxCharacter *) lpjFbxCharacter)->AnkleStabilizationRecoveryTimeMode
  ));
  return ret;
}
  /// FbxPropertyT< FbxReference >  SourceObject
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetSourceObject(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jlong lpFbxReference)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->SourceObject.Set(
  ( FbxReference  )  _lcvt.j2c<jlong, FbxReference  >(lpFbxReference)
  );
}
  /// FbxPropertyT< FbxReference >  SourceObject
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mepGetSourceObject(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j<jlong,  FbxReference  >(
  ((FbxCharacter *) lpjFbxCharacter)->SourceObject.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxReference >  SourceObject
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetSourceObject(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxReference   >(
   (&((FbxCharacter *) lpjFbxCharacter)->SourceObject
  ));
  return ret;
}
  /// FbxPropertyT< FbxReference >  DestinationObject
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetDestinationObject(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jlong lpFbxReference)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->DestinationObject.Set(
  ( FbxReference  )  _lcvt.j2c<jlong, FbxReference  >(lpFbxReference)
  );
}
  /// FbxPropertyT< FbxReference >  DestinationObject
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mepGetDestinationObject(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j<jlong,  FbxReference  >(
  ((FbxCharacter *) lpjFbxCharacter)->DestinationObject.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxReference >  DestinationObject
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetDestinationObject(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxReference   >(
   (&((FbxCharacter *) lpjFbxCharacter)->DestinationObject
  ));
  return ret;
}
  /// FbxPropertyT< FbxReference >  Actor
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetActor(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jlong lpFbxReference)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->Actor.Set(
  ( FbxReference  )  _lcvt.j2c<jlong, FbxReference  >(lpFbxReference)
  );
}
  /// FbxPropertyT< FbxReference >  Actor
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mepGetActor(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j<jlong,  FbxReference  >(
  ((FbxCharacter *) lpjFbxCharacter)->Actor.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxReference >  Actor
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetActor(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxReference   >(
   (&((FbxCharacter *) lpjFbxCharacter)->Actor
  ));
  return ret;
}
  /// FbxPropertyT< FbxReference >  Character
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetCharacter(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jlong lpFbxReference)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->Character.Set(
  ( FbxReference  )  _lcvt.j2c<jlong, FbxReference  >(lpFbxReference)
  );
}
  /// FbxPropertyT< FbxReference >  Character
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mepGetCharacter(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j<jlong,  FbxReference  >(
  ((FbxCharacter *) lpjFbxCharacter)->Character.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxReference >  Character
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetCharacter(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxReference   >(
   (&((FbxCharacter *) lpjFbxCharacter)->Character
  ));
  return ret;
}
  /// FbxPropertyT< FbxReference >  ControlSet
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetControlSet(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jlong lpFbxReference)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->ControlSet.Set(
  ( FbxReference  )  _lcvt.j2c<jlong, FbxReference  >(lpFbxReference)
  );
}
  /// FbxPropertyT< FbxReference >  ControlSet
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mepGetControlSet(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j<jlong,  FbxReference  >(
  ((FbxCharacter *) lpjFbxCharacter)->ControlSet.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxReference >  ControlSet
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetControlSet(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxReference   >(
   (&((FbxCharacter *) lpjFbxCharacter)->ControlSet
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  HikVersion
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetHikVersion(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->HikVersion.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  HikVersion
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetHikVersion(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->HikVersion.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  HikVersion
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetHikVersion(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->HikVersion
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  Characterize
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetCharacterize(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->Characterize.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  Characterize
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCharacter_mepGetCharacterize(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxCharacter *) lpjFbxCharacter)->Characterize.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  Characterize
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetCharacterize(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxCharacter *) lpjFbxCharacter)->Characterize
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  LockXForm
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetLockXForm(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->LockXForm.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  LockXForm
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCharacter_mepGetLockXForm(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxCharacter *) lpjFbxCharacter)->LockXForm.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  LockXForm
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetLockXForm(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxCharacter *) lpjFbxCharacter)->LockXForm
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  LockPick
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetLockPick(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jboolean lpFbxBool)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->LockPick.Set(
  ( FbxBool  )  _lcvt.j2c<jboolean, FbxBool  >(lpFbxBool)
  );
}
  /// FbxPropertyT< FbxBool >  LockPick
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxCharacter_mepGetLockPick(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  FbxBool  >(
  ((FbxCharacter *) lpjFbxCharacter)->LockPick.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxBool >  LockPick
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetLockPick(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxBool   >(
   (&((FbxCharacter *) lpjFbxCharacter)->LockPick
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  RealisticShoulder
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetRealisticShoulder(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->RealisticShoulder.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  RealisticShoulder
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetRealisticShoulder(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->RealisticShoulder.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  RealisticShoulder
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetRealisticShoulder(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->RealisticShoulder
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CollarStiffnessX
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetCollarStiffnessX(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->CollarStiffnessX.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  CollarStiffnessX
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetCollarStiffnessX(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->CollarStiffnessX.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CollarStiffnessX
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetCollarStiffnessX(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->CollarStiffnessX
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CollarStiffnessY
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetCollarStiffnessY(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->CollarStiffnessY.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  CollarStiffnessY
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetCollarStiffnessY(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->CollarStiffnessY.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CollarStiffnessY
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetCollarStiffnessY(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->CollarStiffnessY
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CollarStiffnessZ
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetCollarStiffnessZ(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->CollarStiffnessZ.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  CollarStiffnessZ
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetCollarStiffnessZ(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->CollarStiffnessZ.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  CollarStiffnessZ
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetCollarStiffnessZ(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->CollarStiffnessZ
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  ExtraCollarRatio
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetExtraCollarRatio(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->ExtraCollarRatio.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  ExtraCollarRatio
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetExtraCollarRatio(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->ExtraCollarRatio.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  ExtraCollarRatio
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetExtraCollarRatio(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->ExtraCollarRatio
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  LeftLegMaxExtensionAngle
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetLeftLegMaxExtensionAngle(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->LeftLegMaxExtensionAngle.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  LeftLegMaxExtensionAngle
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetLeftLegMaxExtensionAngle(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->LeftLegMaxExtensionAngle.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  LeftLegMaxExtensionAngle
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetLeftLegMaxExtensionAngle(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->LeftLegMaxExtensionAngle
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  RightLegMaxExtensionAngle
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetRightLegMaxExtensionAngle(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->RightLegMaxExtensionAngle.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  RightLegMaxExtensionAngle
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetRightLegMaxExtensionAngle(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->RightLegMaxExtensionAngle.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  RightLegMaxExtensionAngle
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetRightLegMaxExtensionAngle(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->RightLegMaxExtensionAngle
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  LeftArmMaxExtensionAngle
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetLeftArmMaxExtensionAngle(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->LeftArmMaxExtensionAngle.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  LeftArmMaxExtensionAngle
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetLeftArmMaxExtensionAngle(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->LeftArmMaxExtensionAngle.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  LeftArmMaxExtensionAngle
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetLeftArmMaxExtensionAngle(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->LeftArmMaxExtensionAngle
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  RightArmMaxExtensionAngle
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetRightArmMaxExtensionAngle(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->RightArmMaxExtensionAngle.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  RightArmMaxExtensionAngle
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetRightArmMaxExtensionAngle(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->RightArmMaxExtensionAngle.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  RightArmMaxExtensionAngle
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetRightArmMaxExtensionAngle(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->RightArmMaxExtensionAngle
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  StretchStartArmsAndLegs
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetStretchStartArmsAndLegs(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->StretchStartArmsAndLegs.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  StretchStartArmsAndLegs
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetStretchStartArmsAndLegs(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->StretchStartArmsAndLegs.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  StretchStartArmsAndLegs
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetStretchStartArmsAndLegs(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->StretchStartArmsAndLegs
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  StretchStopArmsAndLegs
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetStretchStopArmsAndLegs(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->StretchStopArmsAndLegs.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  StretchStopArmsAndLegs
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetStretchStopArmsAndLegs(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->StretchStopArmsAndLegs.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  StretchStopArmsAndLegs
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetStretchStopArmsAndLegs(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->StretchStopArmsAndLegs
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  SnSScaleArmsAndLegs
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetSnSScaleArmsAndLegs(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->SnSScaleArmsAndLegs.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  SnSScaleArmsAndLegs
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetSnSScaleArmsAndLegs(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->SnSScaleArmsAndLegs.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  SnSScaleArmsAndLegs
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetSnSScaleArmsAndLegs(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->SnSScaleArmsAndLegs
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  SnSReachLeftWrist
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetSnSReachLeftWrist(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->SnSReachLeftWrist.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  SnSReachLeftWrist
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetSnSReachLeftWrist(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->SnSReachLeftWrist.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  SnSReachLeftWrist
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetSnSReachLeftWrist(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->SnSReachLeftWrist
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  SnSReachRightWrist
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetSnSReachRightWrist(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->SnSReachRightWrist.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  SnSReachRightWrist
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetSnSReachRightWrist(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->SnSReachRightWrist.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  SnSReachRightWrist
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetSnSReachRightWrist(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->SnSReachRightWrist
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  SnSReachLeftAnkle
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetSnSReachLeftAnkle(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->SnSReachLeftAnkle.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  SnSReachLeftAnkle
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetSnSReachLeftAnkle(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->SnSReachLeftAnkle.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  SnSReachLeftAnkle
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetSnSReachLeftAnkle(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->SnSReachLeftAnkle
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  SnSReachRightAnkle
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetSnSReachRightAnkle(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->SnSReachRightAnkle.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  SnSReachRightAnkle
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetSnSReachRightAnkle(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->SnSReachRightAnkle.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  SnSReachRightAnkle
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetSnSReachRightAnkle(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->SnSReachRightAnkle
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  SnSScaleSpine
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetSnSScaleSpine(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->SnSScaleSpine.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  SnSScaleSpine
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetSnSScaleSpine(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->SnSScaleSpine.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  SnSScaleSpine
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetSnSScaleSpine(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->SnSScaleSpine
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  SnSScaleSpineChildren
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetSnSScaleSpineChildren(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->SnSScaleSpineChildren.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  SnSScaleSpineChildren
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetSnSScaleSpineChildren(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->SnSScaleSpineChildren.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  SnSScaleSpineChildren
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetSnSScaleSpineChildren(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->SnSScaleSpineChildren
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  SnSSpineFreedom
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetSnSSpineFreedom(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->SnSSpineFreedom.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  SnSSpineFreedom
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetSnSSpineFreedom(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->SnSSpineFreedom.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  SnSSpineFreedom
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetSnSSpineFreedom(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->SnSSpineFreedom
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  SnSReachChestEnd
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetSnSReachChestEnd(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->SnSReachChestEnd.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  SnSReachChestEnd
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetSnSReachChestEnd(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->SnSReachChestEnd.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  SnSReachChestEnd
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetSnSReachChestEnd(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->SnSReachChestEnd
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  SnSScaleNeck
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetSnSScaleNeck(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->SnSScaleNeck.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  SnSScaleNeck
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetSnSScaleNeck(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->SnSScaleNeck.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  SnSScaleNeck
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetSnSScaleNeck(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->SnSScaleNeck
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  SnSNeckFreedom
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetSnSNeckFreedom(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->SnSNeckFreedom.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  SnSNeckFreedom
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetSnSNeckFreedom(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->SnSNeckFreedom.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  SnSNeckFreedom
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetSnSNeckFreedom(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->SnSNeckFreedom
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  SnSReachHead
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxCharacter_mepSetSnSReachHead(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter,jdouble lpFbxDouble)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxCharacter *) lpjFbxCharacter)->SnSReachHead.Set(
  ( FbxDouble  )  _lcvt.j2c<jdouble, FbxDouble  >(lpFbxDouble)
  );
}
  /// FbxPropertyT< FbxDouble >  SnSReachHead
extern "C" JNIEXPORT jdouble JNICALL Java_fbxsdk_FbxCharacter_mepGetSnSReachHead(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jdouble ret=(jdouble)_lcvt.c2j<jdouble,  FbxDouble  >(
  ((FbxCharacter *) lpjFbxCharacter)->SnSReachHead.Get(
  ));
  return ret;
}
  /// FbxPropertyT< FbxDouble >  SnSReachHead
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_mptGetSnSReachHead(JNIEnv * __env, jclass __jc,jlong lpjFbxCharacter)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_tmpl_FbxPropertyT_pt<jlong,  FbxDouble   >(
   (&((FbxCharacter *) lpjFbxCharacter)->SnSReachHead
  ));
  return ret;
}
  /// FbxCharacter * Create( FbxConstraint* lpFbxConstraint,  const char* pName )
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxCharacter_Create(JNIEnv * __env, jclass __jc,jlong lpFbxConstraint,jstring pName)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxCharacter>(
  FbxCharacter::Create(
  ( FbxConstraint  *)  _lcvt.j2c_object_pt<jlong, FbxConstraint>(lpFbxConstraint)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pName)
  ));
  return ret;
}
