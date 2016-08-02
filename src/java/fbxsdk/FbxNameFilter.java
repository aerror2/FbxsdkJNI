//copyright by aerror 2016 
package fbxsdk;
//26 62 FbxNameFilter  --------------------
public class FbxNameFilter  {
  /// virtual bool  Match (const FbxObject *pObjectPtr) const
  public static native boolean Match(long lpjFbxNameFilter, long pObjectPtr);
  /// FbxNameFilter (const char *pTargetName)
  public static native long meCreate(   String pTargetName);
  /// virtual  ~FbxNameFilter ()
  public static native void meDestroy(long lpjFbxNameFilter);
}
