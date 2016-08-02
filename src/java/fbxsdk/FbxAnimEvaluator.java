package fbxsdk;
//26 113 FbxAnimEvaluator  --------------------
public class FbxAnimEvaluator  {
  /// FbxAMatrix &  GetNodeGlobalTransform (FbxNode *pNode, const FbxTime &pTime=FBXSDK_TIME_INFINITE, FbxNode::EPivotSet pPivotSet=FbxNode::eSourcePivot, bool pApplyTarget=false, bool pForceEval=false)
  public static native long GetNodeGlobalTransform(long lpjFbxAnimEvaluator, long pNode, Long pTime, int pPivotSet, boolean pApplyTarget, boolean pForceEval);
  /// FbxAMatrix &  GetNodeLocalTransform (FbxNode *pNode, const FbxTime &pTime=FBXSDK_TIME_INFINITE, FbxNode::EPivotSet pPivotSet=FbxNode::eSourcePivot, bool pApplyTarget=false, bool pForceEval=false)
  public static native long GetNodeLocalTransform(long lpjFbxAnimEvaluator, long pNode, Long pTime, int pPivotSet, boolean pApplyTarget, boolean pForceEval);
  /// FbxVector4 &  GetNodeLocalTranslation (FbxNode *pNode, const FbxTime &pTime=FBXSDK_TIME_INFINITE, FbxNode::EPivotSet pPivotSet=FbxNode::eSourcePivot, bool pApplyTarget=false, bool pForceEval=false)
  public static native long GetNodeLocalTranslation(long lpjFbxAnimEvaluator, long pNode, Long pTime, int pPivotSet, boolean pApplyTarget, boolean pForceEval);
  /// FbxVector4 &  GetNodeLocalRotation (FbxNode *pNode, const FbxTime &pTime=FBXSDK_TIME_INFINITE, FbxNode::EPivotSet pPivotSet=FbxNode::eSourcePivot, bool pApplyTarget=false, bool pForceEval=false)
  public static native long GetNodeLocalRotation(long lpjFbxAnimEvaluator, long pNode, Long pTime, int pPivotSet, boolean pApplyTarget, boolean pForceEval);
  /// FbxVector4 &  GetNodeLocalScaling (FbxNode *pNode, const FbxTime &pTime=FBXSDK_TIME_INFINITE, FbxNode::EPivotSet pPivotSet=FbxNode::eSourcePivot, bool pApplyTarget=false, bool pForceEval=false)
  public static native long GetNodeLocalScaling(long lpjFbxAnimEvaluator, long pNode, Long pTime, int pPivotSet, boolean pApplyTarget, boolean pForceEval);
  /// FbxPropertyValue &  GetPropertyValue (FbxProperty &pProperty, const FbxTime &pTime, bool pForceEval=false)
  public static native long GetPropertyValue(long lpjFbxAnimEvaluator, Long pProperty, Long pTime, boolean pForceEval);
  /// FbxAnimCurveNode *  GetPropertyCurveNode (FbxProperty &pProperty, FbxAnimLayer *pAnimLayer)
  public static native long GetPropertyCurveNode(long lpjFbxAnimEvaluator, Long pProperty, long pAnimLayer);
  /// FbxTime  ValidateTime (const FbxTime &pTime)
  public static native long ValidateTime(long lpjFbxAnimEvaluator, Long pTime);
  /// void  Reset ()
  public static native void Reset(long lpjFbxAnimEvaluator);
  /// void  Flush (FbxNode *pNode)
  public static native void Flush(long lpjFbxAnimEvaluator, long pNode);
  /// void  Flush (FbxProperty &pProperty)
  public static native void Flush1(long lpjFbxAnimEvaluator, Long pProperty);
  /// void  ComputeLocalTRSFromGlobal (FbxVector4 &pRetLT, FbxVector4 &pRetLR, FbxVector4 &pRetLS, FbxNode *pNode, FbxAMatrix &pGX, const FbxTime &pTime=FBXSDK_TIME_INFINITE, FbxNode::EPivotSet pPivotSet=FbxNode::eSourcePivot, bool pApplyTarget=false, bool pForceEval=false)
  public static native void ComputeLocalTRSFromGlobal(long lpjFbxAnimEvaluator, Long pRetLT, Long pRetLR, Long pRetLS, long pNode, Long pGX, Long pTime, int pPivotSet, boolean pApplyTarget, boolean pForceEval);
  /// FbxAnimEvaluator * Create( FbxManager* lpFbxManager, const char* pName  )
  public static native long Create(   long lpFbxManager, String pName);
}
