//copyright by aerror 2016 
package fbxsdk;
//26 59 FbxObjectFilter  --------------------
public class FbxObjectFilter  {
  /// virtual  ~FbxObjectFilter ()
  public static native void meDestroy(long lpjFbxObjectFilter);
  /// virtual bool  Match (const FbxObject *pObjectPtr) const =0
  public static native boolean Match(long lpjFbxObjectFilter, long pObjectPtr);
  /// virtual bool  NotMatch (const FbxObject *pObjectPtr) const
  public static native boolean NotMatch(long lpjFbxObjectFilter, long pObjectPtr);
  /// FbxObjectFilter * meCreate()
  public static native long meCreate(  );
}
