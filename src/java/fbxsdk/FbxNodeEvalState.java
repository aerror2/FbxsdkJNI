package fbxsdk;
//26 65 FbxNodeEvalState  --------------------
public class FbxNodeEvalState  {
  /// FbxNodeEvalState (FbxNode *pNode)
  public static native long meCreate(   long pNode);
  /// void meDestroy(FbxNodeEvalState * lpFbxNodeEvalState)
  public static native void meDestroy(long lpjFbxNodeEvalState);
}
