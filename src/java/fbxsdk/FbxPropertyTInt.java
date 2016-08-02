package fbxsdk;
//26 86 FbxPropertyTInt  --------------------
public class FbxPropertyTInt  {
  /// FbxProperty &  StaticInit (FbxObject *pObject, const char *pName, const int &pValue, bool pForceSet, FbxPropertyFlags::EFlags pFlags=FbxPropertyFlags::eNone)
  public static native long StaticInit(long lpjFbxPropertyTInt, long pObject, String pName, Integer pValue, boolean pForceSet, int pFlags);
  /// FbxProperty &  StaticInit (FbxObject *pObject, const char *pName, const FbxDataType &pDataType, const int &pValue, bool pForceSet, FbxPropertyFlags::EFlags pFlags=FbxPropertyFlags::eNone)
  public static native long StaticInit1(long lpjFbxPropertyTInt, long pObject, String pName, Long pDataType, Integer pValue, boolean pForceSet, int pFlags);
  /// FbxProperty &  StaticInit (FbxProperty pCompound, const char *pName, const FbxDataType &pDataType, const int &pValue, bool pForceSet=true, FbxPropertyFlags::EFlags pFlags=FbxPropertyFlags::eNone)
  public static native long StaticInit2(long lpjFbxPropertyTInt, long pCompound, String pName, Long pDataType, Integer pValue, boolean pForceSet, int pFlags);
  /// void       Set (const int &pValue)
  public static native void Set(long lpjFbxPropertyTInt, Integer pValue);
  /// int  Get () const
  public static native int Get(long lpjFbxPropertyTInt);
  /// int  EvaluateValue (const FbxTime &pTime=FBXSDK_TIME_INFINITE, bool pForceEval=false)
  public static native int EvaluateValue(long lpjFbxPropertyTInt, Long pTime, boolean pForceEval);
  /// FbxAnimCurveNode *  CreateCurveNode (FbxAnimLayer *pAnimLayer)
  public static native long CreateCurveNode(long lpjFbxPropertyTInt, long pAnimLayer);
  /// FbxAnimCurveNode *  GetCurveNode (bool pCreate=false)
  public static native long GetCurveNode(long lpjFbxPropertyTInt, boolean pCreate);
  /// FbxAnimCurveNode *  GetCurveNode (FbxAnimStack *pAnimStack, bool pCreate=false)
  public static native long GetCurveNode1(long lpjFbxPropertyTInt, long pAnimStack, boolean pCreate);
  /// FbxAnimCurveNode *  GetCurveNode (FbxAnimLayer *pAnimLayer, bool pCreate=false)
  public static native long GetCurveNode2(long lpjFbxPropertyTInt, long pAnimLayer, boolean pCreate);
  /// FbxAnimCurve *  GetCurve (FbxAnimLayer *pAnimLayer, bool pCreate=false)
  public static native long GetCurve(long lpjFbxPropertyTInt, long pAnimLayer, boolean pCreate);
  /// FbxAnimCurve *  GetCurve (FbxAnimLayer *pAnimLayer, const char *pChannel, bool pCreate=false)
  public static native long GetCurve1(long lpjFbxPropertyTInt, long pAnimLayer, String pChannel, boolean pCreate);
  /// FbxAnimCurve *  GetCurve (FbxAnimLayer *pAnimLayer, const char *pName, const char *pChannel, bool pCreate)
  public static native long GetCurve2(long lpjFbxPropertyTInt, long pAnimLayer, String pName, String pChannel, boolean pCreate);
//No Static CreateFunc
}
