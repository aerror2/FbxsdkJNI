
#include <jni.h>
#include <fbxsdk.h>
#include "JNILocalConverter.h"
  /// FbxString ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxString_meCreate(JNIEnv * __env, jclass __jc)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxString>(
  new FbxString(
  ));
  return ret;
}
  /// FbxString (const FbxString &pString)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxString_meCreate1(JNIEnv * __env, jclass __jc,jobject pString)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxString>(
  new FbxString(
  (const FbxString  &) * _lcvt.j2c_object_ref<jobject,FbxString >(pString)
  ));
  return ret;
}
  /// FbxString (const char *pString)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxString_meCreate2(JNIEnv * __env, jclass __jc,jstring pString)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxString>(
  new FbxString(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pString)
  ));
  return ret;
}
  /// FbxString (char pChar, size_t pNbRepeat=1)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxString_meCreate3(JNIEnv * __env, jclass __jc,jbyte pChar,jlong pNbRepeat)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxString>(
  new FbxString(
  ( char  )  _lcvt.j2c<jbyte, char  >(pChar)
  ,
  ( size_t  )  _lcvt.j2c<jlong, size_t  >(pNbRepeat)
  ));
  return ret;
}
  /// FbxString (const char *pCharPtr, size_t pLength)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxString_meCreate4(JNIEnv * __env, jclass __jc,jstring pCharPtr,jlong pLength)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxString>(
  new FbxString(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pCharPtr)
  ,
  ( size_t  )  _lcvt.j2c<jlong, size_t  >(pLength)
  ));
  return ret;
}
  /// FbxString (const int pValue)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxString_meCreate5(JNIEnv * __env, jclass __jc,jint pValue)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxString>(
  new FbxString(
  (const int  )  _lcvt.j2c<jint,const int  >(pValue)
  ));
  return ret;
}
  /// FbxString (const float pValue)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxString_meCreate6(JNIEnv * __env, jclass __jc,jfloat pValue)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxString>(
  new FbxString(
  (const float  )  _lcvt.j2c<jfloat,const float  >(pValue)
  ));
  return ret;
}
  /// FbxString (const double pValue)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxString_meCreate7(JNIEnv * __env, jclass __jc,jdouble pValue)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_pt<jlong, FbxString>(
  new FbxString(
  (const double  )  _lcvt.j2c<jdouble,const double  >(pValue)
  ));
  return ret;
}
  /// ~FbxString ()
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxString_meDestroy(JNIEnv * __env, jclass __jc,jlong lpjFbxString)
{
  JNILocalConverter _lcvt(__env,__jc);
  delete ((FbxString *) lpjFbxString
  );
}
  /// size_t  GetLen () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxString_GetLen(JNIEnv * __env, jclass __jc,jlong lpjFbxString)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j<jlong,  size_t  >(
  ((FbxString *) lpjFbxString)->GetLen(
  ));
  return ret;
}
  /// size_t  Size () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxString_Size(JNIEnv * __env, jclass __jc,jlong lpjFbxString)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j<jlong,  size_t  >(
  ((FbxString *) lpjFbxString)->Size(
  ));
  return ret;
}
  /// bool  IsEmpty () const
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxString_IsEmpty(JNIEnv * __env, jclass __jc,jlong lpjFbxString)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxString *) lpjFbxString)->IsEmpty(
  ));
  return ret;
}
  /// FbxString &  Clear ()
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxString_Clear(JNIEnv * __env, jclass __jc,jlong lpjFbxString)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_ref<jlong, FbxString>(
  ((FbxString *) lpjFbxString)->Clear(
  ));
  return ret;
}
  /// char *  Buffer ()
extern "C" JNIEXPORT jstring JNICALL Java_fbxsdk_FbxString_Buffer(JNIEnv * __env, jclass __jc,jlong lpjFbxString)
{
  JNILocalConverter _lcvt(__env,__jc);
  jstring ret=(jstring)_lcvt.c2j_string(
  ((FbxString *) lpjFbxString)->Buffer(
  ));
  return ret;
}
  /// const char *  Buffer () const
extern "C" JNIEXPORT jstring JNICALL Java_fbxsdk_FbxString_Buffer1(JNIEnv * __env, jclass __jc,jlong lpjFbxString)
{
  JNILocalConverter _lcvt(__env,__jc);
  jstring ret=(jstring)_lcvt.c2j_string(
  ((FbxString *) lpjFbxString)->Buffer(
  ));
  return ret;
}
  /// const FbxString &  Copy (const char *pString, size_t pLength)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxString_Copy(JNIEnv * __env, jclass __jc,jlong lpjFbxString,jstring pString,jlong pLength)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_ref<jlong, FbxString>(
  ((FbxString *) lpjFbxString)->Copy(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pString)
  ,
  ( size_t  )  _lcvt.j2c<jlong, size_t  >(pLength)
  ));
  return ret;
}
  /// const FbxString &  Append (const char *pString, size_t pLength)
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxString_Append(JNIEnv * __env, jclass __jc,jlong lpjFbxString,jstring pString,jlong pLength)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj_ref<jlong, FbxString>(
  ((FbxString *) lpjFbxString)->Append(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pString)
  ,
  ( size_t  )  _lcvt.j2c<jlong, size_t  >(pLength)
  ));
  return ret;
}
  /// int  Compare (const char *pString) const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxString_Compare(JNIEnv * __env, jclass __jc,jlong lpjFbxString,jstring pString)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxString *) lpjFbxString)->Compare(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pString)
  ));
  return ret;
}
  /// int  CompareNoCase (const char *pString) const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxString_CompareNoCase(JNIEnv * __env, jclass __jc,jlong lpjFbxString,jstring pString)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxString *) lpjFbxString)->CompareNoCase(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pString)
  ));
  return ret;
}
  /// void  Swap (FbxString &pString)
extern "C" JNIEXPORT void JNICALL Java_fbxsdk_FbxString_Swap(JNIEnv * __env, jclass __jc,jlong lpjFbxString,jobject pString)
{
  JNILocalConverter _lcvt(__env,__jc);
  ((FbxString *) lpjFbxString)->Swap(
  ( FbxString  &) * _lcvt.j2c_object_ref<jobject,FbxString >(pString)
  );
}
  /// FbxString  Upper () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxString_Upper(JNIEnv * __env, jclass __jc,jlong lpjFbxString)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxString>(
  ((FbxString *) lpjFbxString)->Upper(
  ));
  return ret;
}
  /// FbxString  Lower () const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxString_Lower(JNIEnv * __env, jclass __jc,jlong lpjFbxString)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxString>(
  ((FbxString *) lpjFbxString)->Lower(
  ));
  return ret;
}
  /// FbxString  Mid (size_t pFirst, size_t pCount) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxString_Mid(JNIEnv * __env, jclass __jc,jlong lpjFbxString,jlong pFirst,jlong pCount)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxString>(
  ((FbxString *) lpjFbxString)->Mid(
  ( size_t  )  _lcvt.j2c<jlong, size_t  >(pFirst)
  ,
  ( size_t  )  _lcvt.j2c<jlong, size_t  >(pCount)
  ));
  return ret;
}
  /// FbxString  Mid (size_t pFirst) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxString_Mid1(JNIEnv * __env, jclass __jc,jlong lpjFbxString,jlong pFirst)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxString>(
  ((FbxString *) lpjFbxString)->Mid(
  ( size_t  )  _lcvt.j2c<jlong, size_t  >(pFirst)
  ));
  return ret;
}
  /// FbxString  Left (size_t pCount) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxString_Left(JNIEnv * __env, jclass __jc,jlong lpjFbxString,jlong pCount)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxString>(
  ((FbxString *) lpjFbxString)->Left(
  ( size_t  )  _lcvt.j2c<jlong, size_t  >(pCount)
  ));
  return ret;
}
  /// FbxString  Right (size_t pCount) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxString_Right(JNIEnv * __env, jclass __jc,jlong lpjFbxString,jlong pCount)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxString>(
  ((FbxString *) lpjFbxString)->Right(
  ( size_t  )  _lcvt.j2c<jlong, size_t  >(pCount)
  ));
  return ret;
}
  /// FbxString  Pad (EPaddingType pPadding, size_t pLen, char pCar=' ') const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxString_Pad(JNIEnv * __env, jclass __jc,jlong lpjFbxString,jint pPadding,jlong pLen,jbyte pCar)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxString>(
  ((FbxString *) lpjFbxString)->Pad(
  ( FbxString::EPaddingType  )  _lcvt.j2c<jint,FbxString::EPaddingType >(pPadding)
  ,
  ( size_t  )  _lcvt.j2c<jlong, size_t  >(pLen)
  ,
  ( char  )  _lcvt.j2c<jbyte, char  >(pCar)
  ));
  return ret;
}
  /// FbxString  UnPad (EPaddingType pPadding) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxString_UnPad(JNIEnv * __env, jclass __jc,jlong lpjFbxString,jint pPadding)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxString>(
  ((FbxString *) lpjFbxString)->UnPad(
  ( FbxString::EPaddingType  )  _lcvt.j2c<jint,FbxString::EPaddingType >(pPadding)
  ));
  return ret;
}
  /// int  Find (char pChar, size_t pStartPosition=0) const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxString_Find(JNIEnv * __env, jclass __jc,jlong lpjFbxString,jbyte pChar,jlong pStartPosition)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxString *) lpjFbxString)->Find(
  ( char  )  _lcvt.j2c<jbyte, char  >(pChar)
  ,
  ( size_t  )  _lcvt.j2c<jlong, size_t  >(pStartPosition)
  ));
  return ret;
}
  /// int  Find (const char *pStrSub, size_t pStartPosition=0) const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxString_Find1(JNIEnv * __env, jclass __jc,jlong lpjFbxString,jstring pStrSub,jlong pStartPosition)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxString *) lpjFbxString)->Find(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pStrSub)
  ,
  ( size_t  )  _lcvt.j2c<jlong, size_t  >(pStartPosition)
  ));
  return ret;
}
  /// int  ReverseFind (char pChar) const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxString_ReverseFind(JNIEnv * __env, jclass __jc,jlong lpjFbxString,jbyte pChar)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxString *) lpjFbxString)->ReverseFind(
  ( char  )  _lcvt.j2c<jbyte, char  >(pChar)
  ));
  return ret;
}
  /// int  FindOneOf (const char *pStrCharSet, size_t pStartPosition=0) const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxString_FindOneOf(JNIEnv * __env, jclass __jc,jlong lpjFbxString,jstring pStrCharSet,jlong pStartPosition)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxString *) lpjFbxString)->FindOneOf(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pStrCharSet)
  ,
  ( size_t  )  _lcvt.j2c<jlong, size_t  >(pStartPosition)
  ));
  return ret;
}
  /// bool  FindAndReplace (const char *pFind, const char *pReplaceBy, size_t pStartPosition=0)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxString_FindAndReplace(JNIEnv * __env, jclass __jc,jlong lpjFbxString,jstring pFind,jstring pReplaceBy,jlong pStartPosition)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxString *) lpjFbxString)->FindAndReplace(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pFind)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pReplaceBy)
  ,
  ( size_t  )  _lcvt.j2c<jlong, size_t  >(pStartPosition)
  ));
  return ret;
}
  /// bool  ReplaceAll (const char *pFind, const char *pReplaceBy)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxString_ReplaceAll(JNIEnv * __env, jclass __jc,jlong lpjFbxString,jstring pFind,jstring pReplaceBy)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxString *) lpjFbxString)->ReplaceAll(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pFind)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pReplaceBy)
  ));
  return ret;
}
  /// bool  ReplaceAll (char pFind, char pReplaceBy)
extern "C" JNIEXPORT jboolean JNICALL Java_fbxsdk_FbxString_ReplaceAll1(JNIEnv * __env, jclass __jc,jlong lpjFbxString,jbyte pFind,jbyte pReplaceBy)
{
  JNILocalConverter _lcvt(__env,__jc);
  jboolean ret=(jboolean)_lcvt.c2j<jboolean,  bool  >(
  ((FbxString *) lpjFbxString)->ReplaceAll(
  ( char  )  _lcvt.j2c<jbyte, char  >(pFind)
  ,
  ( char  )  _lcvt.j2c<jbyte, char  >(pReplaceBy)
  ));
  return ret;
}
  /// int  GetTokenCount (const char *pSpans) const
extern "C" JNIEXPORT jint JNICALL Java_fbxsdk_FbxString_GetTokenCount(JNIEnv * __env, jclass __jc,jlong lpjFbxString,jstring pSpans)
{
  JNILocalConverter _lcvt(__env,__jc);
  jint ret=(jint)_lcvt.c2j<jint,  int  >(
  ((FbxString *) lpjFbxString)->GetTokenCount(
  (const char  *)  _lcvt.j2c_string<jstring,char>(pSpans)
  ));
  return ret;
}
  /// FbxString  GetToken (int pTokenIndex, const char *pSpans) const
extern "C" JNIEXPORT jlong JNICALL Java_fbxsdk_FbxString_GetToken(JNIEnv * __env, jclass __jc,jlong lpjFbxString,jint pTokenIndex,jstring pSpans)
{
  JNILocalConverter _lcvt(__env,__jc);
  jlong ret=(jlong)_lcvt.c2j_obj<jlong, FbxString>(
  ((FbxString *) lpjFbxString)->GetToken(
  ( int  )  _lcvt.j2c<jint, int  >(pTokenIndex)
  ,
  (const char  *)  _lcvt.j2c_string<jstring,char>(pSpans)
  ));
  return ret;
}
