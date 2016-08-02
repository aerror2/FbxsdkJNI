package fbxsdk;
//26 80 FbxEmitter  --------------------
public class FbxEmitter  {
  /// void  AddListener (FbxEventHandler &pHandler)
  public static native void AddListener(long lpjFbxEmitter, Long pHandler);
  /// void  RemoveListener (FbxEventHandler &pHandler)
  public static native void RemoveListener(long lpjFbxEmitter, Long pHandler);
//No Static CreateFunc
}
