package fbxsdk;
//26 87 FbxPropertyTDouble  --------------------
public class FbxPropertyTDouble  {
  /// FbxProperty &  StaticInit (FbxObject *pObject, const char *pName, const double &pValue, bool pForceSet, FbxPropertyFlags::EFlags pFlags=FbxPropertyFlags::eNone)
  public static native long StaticInit(long lpjFbxPropertyTDouble, long pObject, String pName, Double pValue, boolean pForceSet, int pFlags);
  /// FbxProperty &  StaticInit (FbxObject *pObject, const char *pName, const FbxDataType &pDataType, const double &pValue, bool pForceSet, FbxPropertyFlags::EFlags pFlags=FbxPropertyFlags::eNone)
  public static native long StaticInit1(long lpjFbxPropertyTDouble, long pObject, String pName, Long pDataType, Double pValue, boolean pForceSet, int pFlags);
  /// FbxProperty &  StaticInit (FbxProperty pCompound, const char *pName, const FbxDataType &pDataType, const double &pValue, bool pForceSet=true, FbxPropertyFlags::EFlags pFlags=FbxPropertyFlags::eNone)
  public static native long StaticInit2(long lpjFbxPropertyTDouble, long pCompound, String pName, Long pDataType, Double pValue, boolean pForceSet, int pFlags);
  /// void  Set (const double &pValue)
  public static native void Set(long lpjFbxPropertyTDouble, Double pValue);
  /// double  Get () const
  public static native double Get(long lpjFbxPropertyTDouble);
  /// double  EvaluateValue (const FbxTime &pTime=FBXSDK_TIME_INFINITE, bool pForceEval=false)
  public static native double EvaluateValue(long lpjFbxPropertyTDouble, Long pTime, boolean pForceEval);
  /// FbxAnimCurveNode *  CreateCurveNode (FbxAnimLayer *pAnimLayer)
  public static native long CreateCurveNode(long lpjFbxPropertyTDouble, long pAnimLayer);
  /// FbxAnimCurveNode *  GetCurveNode (bool pCreate=false)
  public static native long GetCurveNode(long lpjFbxPropertyTDouble, boolean pCreate);
  /// FbxAnimCurveNode *  GetCurveNode (FbxAnimStack *pAnimStack, bool pCreate=false)
  public static native long GetCurveNode1(long lpjFbxPropertyTDouble, long pAnimStack, boolean pCreate);
  /// FbxAnimCurveNode *  GetCurveNode (FbxAnimLayer *pAnimLayer, bool pCreate=false)
  public static native long GetCurveNode2(long lpjFbxPropertyTDouble, long pAnimLayer, boolean pCreate);
  /// FbxAnimCurve *  GetCurve (FbxAnimLayer *pAnimLayer, bool pCreate=false)
  public static native long GetCurve(long lpjFbxPropertyTDouble, long pAnimLayer, boolean pCreate);
  /// FbxAnimCurve *  GetCurve (FbxAnimLayer *pAnimLayer, const char *pChannel, bool pCreate=false)
  public static native long GetCurve1(long lpjFbxPropertyTDouble, long pAnimLayer, String pChannel, boolean pCreate);
  /// FbxAnimCurve *  GetCurve (FbxAnimLayer *pAnimLayer, const char *pName, const char *pChannel, bool pCreate)
  public static native long GetCurve2(long lpjFbxPropertyTDouble, long pAnimLayer, String pName, String pChannel, boolean pCreate);
//No Static CreateFunc
}
