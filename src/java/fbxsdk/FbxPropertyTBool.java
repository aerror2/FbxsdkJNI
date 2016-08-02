package fbxsdk;
//26 85 FbxPropertyTBool  --------------------
public class FbxPropertyTBool  {
  /// FbxProperty &  StaticInit (FbxObject *pObject, const char *pName, const bool &pValue, bool pForceSet, FbxPropertyFlags::EFlags pFlags=FbxPropertyFlags::eNone)
  public static native long StaticInit(long lpjFbxPropertyTBool, long pObject, String pName, Boolean pValue, boolean pForceSet, int pFlags);
  /// FbxProperty &  StaticInit (FbxObject *pObject, const char *pName, const FbxDataType &pDataType, const bool &pValue, bool pForceSet, FbxPropertyFlags::EFlags pFlags=FbxPropertyFlags::eNone)
  public static native long StaticInit1(long lpjFbxPropertyTBool, long pObject, String pName, Long pDataType, Boolean pValue, boolean pForceSet, int pFlags);
  /// FbxProperty &  StaticInit (FbxProperty pCompound, const char *pName, const FbxDataType &pDataType, const bool &pValue, bool pForceSet=true, FbxPropertyFlags::EFlags pFlags=FbxPropertyFlags::eNone)
  public static native long StaticInit2(long lpjFbxPropertyTBool, long pCompound, String pName, Long pDataType, Boolean pValue, boolean pForceSet, int pFlags);
  /// void  Set (const bool &pValue)
  public static native void Set(long lpjFbxPropertyTBool, Boolean pValue);
  /// bool  Get () const
  public static native boolean Get(long lpjFbxPropertyTBool);
  /// bool  EvaluateValue (const FbxTime &pTime=FBXSDK_TIME_INFINITE, bool pForceEval=false)
  public static native boolean EvaluateValue(long lpjFbxPropertyTBool, Long pTime, boolean pForceEval);
  /// FbxAnimCurveNode *  CreateCurveNode (FbxAnimLayer *pAnimLayer)
  public static native long CreateCurveNode(long lpjFbxPropertyTBool, long pAnimLayer);
  /// FbxAnimCurveNode *  GetCurveNode (bool pCreate=false)
  public static native long GetCurveNode(long lpjFbxPropertyTBool, boolean pCreate);
  /// FbxAnimCurveNode *  GetCurveNode (FbxAnimStack *pAnimStack, bool pCreate=false)
  public static native long GetCurveNode1(long lpjFbxPropertyTBool, long pAnimStack, boolean pCreate);
  /// FbxAnimCurveNode *  GetCurveNode (FbxAnimLayer *pAnimLayer, bool pCreate=false)
  public static native long GetCurveNode2(long lpjFbxPropertyTBool, long pAnimLayer, boolean pCreate);
  /// FbxAnimCurve *  GetCurve (FbxAnimLayer *pAnimLayer, bool pCreate=false)
  public static native long GetCurve(long lpjFbxPropertyTBool, long pAnimLayer, boolean pCreate);
  /// FbxAnimCurve *  GetCurve (FbxAnimLayer *pAnimLayer, const char *pChannel, bool pCreate=false)
  public static native long GetCurve1(long lpjFbxPropertyTBool, long pAnimLayer, String pChannel, boolean pCreate);
  /// FbxAnimCurve *  GetCurve (FbxAnimLayer *pAnimLayer, const char *pName, const char *pChannel, bool pCreate)
  public static native long GetCurve2(long lpjFbxPropertyTBool, long pAnimLayer, String pName, String pChannel, boolean pCreate);
//No Static CreateFunc
}
