package fbxsdk;
//26 61 FbxGate  --------------------
public class FbxGate  {
  /// FbxGate ()
  public static native long meCreate(  );
  /// virtual  ~FbxGate ()
  public static native void meDestroy(long lpjFbxGate);
  /// void  Open ()
  public static native void Open(long lpjFbxGate);
  /// void  Close ()
  public static native void Close(long lpjFbxGate);
  /// bool  IsOpen ()
  public static native boolean IsOpen(long lpjFbxGate);
  /// bool  Wait ()
  public static native boolean Wait(long lpjFbxGate);
}
