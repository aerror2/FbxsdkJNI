//copyright by aerror 2016 
package fbxsdk;
//26 67 FbxGobo  --------------------
public class FbxGobo  {
  /// FbxGobo (char *pName)
  public static native long meCreate(   String pName);
  /// void meDestroy(FbxGobo * lpFbxGobo)
  public static native void meDestroy(long lpjFbxGobo);
}
