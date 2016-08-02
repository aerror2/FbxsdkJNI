package fbxsdk;
//26 65 FbxStringList  --------------------
public class FbxStringList  {
  /// FbxStringList ()
  public static native long meCreate(  );
  /// FbxStringList (const FbxStringList &pOriginal)
  public static native long meCreate1(   Long pOriginal);
  /// void  CopyFrom (const FbxStringList *pOriginal)
  public static native void CopyFrom(long lpjFbxStringList, long pOriginal);
  /// void meDestroy(FbxStringList * lpFbxStringList)
  public static native void meDestroy(long lpjFbxStringList);
}
