//copyright by aerror 2016 
package fbxsdk;
//26 91 FbxStatus  --------------------
public class FbxStatus  {
  public    class   EStatusCode  {
   public static final int eSuccess  =  0;
   public static final int eFailure = eSuccess  + 1;
   public static final int eInsufficientMemory = eSuccess  + 2;
   public static final int eInvalidParameter = eSuccess  + 3;
   public static final int eIndexOutOfRange = eSuccess  + 4;
   public static final int ePasswordError = eSuccess  + 5;
   public static final int eInvalidFileVersion = eSuccess  + 6;
   public static final int eInvalidFile = eSuccess  + 7;
}
  /// FbxStatus ()
  public static native long meCreate(  );
  /// FbxStatus (EStatusCode pCode)
  public static native long meCreate1(   int pCode);
  /// FbxStatus (const FbxStatus &rhs)
  public static native long meCreate2(   Long rhs);
  /// bool  Error () const
  public static native boolean Error(long lpjFbxStatus);
  /// void  Clear ()
  public static native void Clear(long lpjFbxStatus);
  /// EStatusCode  GetCode () const
  public static native int GetCode(long lpjFbxStatus);
  /// void  SetCode (const EStatusCode rhs)
  public static native void SetCode(long lpjFbxStatus, int rhs);
  /// const char *  GetErrorString () const
  public static native String GetErrorString(long lpjFbxStatus);
  /// void meDestroy(FbxStatus * lpFbxStatus)
  public static native void meDestroy(long lpjFbxStatus);
}
