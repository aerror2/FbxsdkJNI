//copyright by aerror 2016 
package fbxsdk;
//26 86 FbxPropertyTFbxDouble3  --------------------
public class FbxPropertyTFbxDouble3  {
  /// FbxProperty &  StaticInit (FbxObject *pObject, const char *pName, const FbxDouble3  &pValue, bool pForceSet, FbxPropertyFlags::EFlags pFlags=FbxPropertyFlags::eNone)
  public static native long StaticInit(long lpjFbxPropertyTFbxDouble3, long pObject, String pName, Long pValue, boolean pForceSet, int pFlags);
  /// FbxProperty &  StaticInit (FbxObject *pObject, const char *pName, const FbxDataType &pDataType, const FbxDouble3  &pValue, bool pForceSet, FbxPropertyFlags::EFlags pFlags=FbxPropertyFlags::eNone)
  public static native long StaticInit1(long lpjFbxPropertyTFbxDouble3, long pObject, String pName, Long pDataType, Long pValue, boolean pForceSet, int pFlags);
  /// FbxProperty &  StaticInit (FbxProperty pCompound, const char *pName, const FbxDataType &pDataType, const FbxDouble3  &pValue, bool pForceSet=true, FbxPropertyFlags::EFlags pFlags=FbxPropertyFlags::eNone)
  public static native long StaticInit2(long lpjFbxPropertyTFbxDouble3, long pCompound, String pName, Long pDataType, Long pValue, boolean pForceSet, int pFlags);
  /// void  Set (const FbxDouble3  &pValue)
  public static native void Set(long lpjFbxPropertyTFbxDouble3, Long pValue);
  /// FbxDouble3   Get () const
  public static native long Get(long lpjFbxPropertyTFbxDouble3);
  /// FbxDouble3   EvaluateValue (const FbxTime &pTime=FBXSDK_TIME_INFINITE, bool pForceEval=false)
  public static native long EvaluateValue(long lpjFbxPropertyTFbxDouble3, Long pTime, boolean pForceEval);
  /// FbxAnimCurveNode *  CreateCurveNode (FbxAnimLayer *pAnimLayer)
  public static native long CreateCurveNode(long lpjFbxPropertyTFbxDouble3, long pAnimLayer);
  /// FbxAnimCurveNode *  GetCurveNode (bool pCreate=false)
  public static native long GetCurveNode(long lpjFbxPropertyTFbxDouble3, boolean pCreate);
  /// FbxAnimCurveNode *  GetCurveNode (FbxAnimStack *pAnimStack, bool pCreate=false)
  public static native long GetCurveNode1(long lpjFbxPropertyTFbxDouble3, long pAnimStack, boolean pCreate);
  /// FbxAnimCurveNode *  GetCurveNode (FbxAnimLayer *pAnimLayer, bool pCreate=false)
  public static native long GetCurveNode2(long lpjFbxPropertyTFbxDouble3, long pAnimLayer, boolean pCreate);
  /// FbxAnimCurve *  GetCurve (FbxAnimLayer *pAnimLayer, bool pCreate=false)
  public static native long GetCurve(long lpjFbxPropertyTFbxDouble3, long pAnimLayer, boolean pCreate);
  /// FbxAnimCurve *  GetCurve (FbxAnimLayer *pAnimLayer, const char *pChannel, bool pCreate=false)
  public static native long GetCurve1(long lpjFbxPropertyTFbxDouble3, long pAnimLayer, String pChannel, boolean pCreate);
  /// FbxAnimCurve *  GetCurve (FbxAnimLayer *pAnimLayer, const char *pName, const char *pChannel, bool pCreate)
  public static native long GetCurve2(long lpjFbxPropertyTFbxDouble3, long pAnimLayer, String pName, String pChannel, boolean pCreate);
//No Static CreateFunc
}
