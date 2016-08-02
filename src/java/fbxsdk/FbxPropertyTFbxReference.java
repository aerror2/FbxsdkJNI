//copyright by aerror 2016 
package fbxsdk;
//26 86 FbxPropertyTFbxReference  --------------------
public class FbxPropertyTFbxReference  {
  /// FbxProperty &  StaticInit (FbxObject *pObject, const char *pName, const FbxReference &pValue, bool pForceSet, FbxPropertyFlags::EFlags pFlags=FbxPropertyFlags::eNone)
  public static native long StaticInit(long lpjFbxPropertyTFbxReference, long pObject, String pName, Long pValue, boolean pForceSet, int pFlags);
  /// FbxProperty &  StaticInit (FbxObject *pObject, const char *pName, const FbxDataType &pDataType, const FbxReference &pValue, bool pForceSet, FbxPropertyFlags::EFlags pFlags=FbxPropertyFlags::eNone)
  public static native long StaticInit1(long lpjFbxPropertyTFbxReference, long pObject, String pName, Long pDataType, Long pValue, boolean pForceSet, int pFlags);
  /// FbxProperty &  StaticInit (FbxProperty pCompound, const char *pName, const FbxDataType &pDataType, const FbxReference &pValue, bool pForceSet=true, FbxPropertyFlags::EFlags pFlags=FbxPropertyFlags::eNone)
  public static native long StaticInit2(long lpjFbxPropertyTFbxReference, long pCompound, String pName, Long pDataType, Long pValue, boolean pForceSet, int pFlags);
  /// void  Set (const FbxReference &pValue)
  public static native void Set(long lpjFbxPropertyTFbxReference, Long pValue);
  /// FbxReference  Get () const
  public static native long Get(long lpjFbxPropertyTFbxReference);
  /// FbxReference  EvaluateValue (const FbxTime &pTime=FBXSDK_TIME_INFINITE, bool pForceEval=false)
  public static native long EvaluateValue(long lpjFbxPropertyTFbxReference, Long pTime, boolean pForceEval);
  /// FbxAnimCurveNode *  CreateCurveNode (FbxAnimLayer *pAnimLayer)
  public static native long CreateCurveNode(long lpjFbxPropertyTFbxReference, long pAnimLayer);
  /// FbxAnimCurveNode *  GetCurveNode (bool pCreate=false)
  public static native long GetCurveNode(long lpjFbxPropertyTFbxReference, boolean pCreate);
  /// FbxAnimCurveNode *  GetCurveNode (FbxAnimStack *pAnimStack, bool pCreate=false)
  public static native long GetCurveNode1(long lpjFbxPropertyTFbxReference, long pAnimStack, boolean pCreate);
  /// FbxAnimCurveNode *  GetCurveNode (FbxAnimLayer *pAnimLayer, bool pCreate=false)
  public static native long GetCurveNode2(long lpjFbxPropertyTFbxReference, long pAnimLayer, boolean pCreate);
  /// FbxAnimCurve *  GetCurve (FbxAnimLayer *pAnimLayer, bool pCreate=false)
  public static native long GetCurve(long lpjFbxPropertyTFbxReference, long pAnimLayer, boolean pCreate);
  /// FbxAnimCurve *  GetCurve (FbxAnimLayer *pAnimLayer, const char *pChannel, bool pCreate=false)
  public static native long GetCurve1(long lpjFbxPropertyTFbxReference, long pAnimLayer, String pChannel, boolean pCreate);
  /// FbxAnimCurve *  GetCurve (FbxAnimLayer *pAnimLayer, const char *pName, const char *pChannel, bool pCreate)
  public static native long GetCurve2(long lpjFbxPropertyTFbxReference, long pAnimLayer, String pName, String pChannel, boolean pCreate);
//No Static CreateFunc
}
