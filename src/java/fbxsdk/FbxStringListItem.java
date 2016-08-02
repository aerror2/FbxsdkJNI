//copyright by aerror 2016 
package fbxsdk;
//26 54 FbxStringListItem  --------------------
public class FbxStringListItem  {
  /// FbxStringListItem ()
  public static native long meCreate(  );
  /// FbxStringListItem (const char *pString, FbxHandle pRef=0)
  public static native long meCreate1(   String pString, long pRef);
  /// void meDestroy(FbxStringListItem * lpFbxStringListItem)
  public static native void meDestroy(long lpjFbxStringListItem);
}
