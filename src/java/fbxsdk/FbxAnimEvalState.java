//copyright by aerror 2016 
package fbxsdk;
//26 68 FbxAnimEvalState  --------------------
public class FbxAnimEvalState  {
  /// FbxTime  GetTime () const
  public static native long GetTime(long lpjFbxAnimEvalState);
  /// void  Reset ()
  public static native void Reset(long lpjFbxAnimEvalState);
  /// void  Begin (const FbxTime &pTime)
  public static native void Begin(long lpjFbxAnimEvalState, Long pTime);
  /// void  Flush (FbxNode *pNode)
  public static native void Flush(long lpjFbxAnimEvalState, long pNode);
  /// void  Flush (FbxProperty &pProperty)
  public static native void Flush1(long lpjFbxAnimEvalState, Long pProperty);
  /// FbxNodeEvalState *  GetNodeEvalState (FbxNode *pNode)
  public static native long GetNodeEvalState(long lpjFbxAnimEvalState, long pNode);
  /// FbxPropertyEvalState *  GetPropertyEvalState (FbxProperty &pProperty)
  public static native long GetPropertyEvalState(long lpjFbxAnimEvalState, Long pProperty);
  /// FbxAnimCurveNode *  GetPropertyCurveNode (FbxProperty &pProperty, FbxAnimLayer *pAnimLayer)
  public static native long GetPropertyCurveNode(long lpjFbxAnimEvalState, Long pProperty, long pAnimLayer);
//No Static CreateFunc
}
