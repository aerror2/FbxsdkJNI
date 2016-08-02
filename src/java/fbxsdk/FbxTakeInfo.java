package fbxsdk;
//26 106 FbxTakeInfo  --------------------
public class FbxTakeInfo  {
  public                             class   EImportOffsetType  {
   public static final int eAbsolute = 0;
   public static final int eRelative = 1;
}
  /// FbxTakeInfo ()
  public static native long meCreate(  );
  /// virtual  ~FbxTakeInfo ()
  public static native void meDestroy(long lpjFbxTakeInfo);
  /// FbxTakeInfo (const FbxTakeInfo &pTakeInfo)
  public static native long meCreate1(   Long pTakeInfo);
  /// void  CopyLayers (const FbxTakeInfo &pTakeInfo)
  public static native void CopyLayers(long lpjFbxTakeInfo, Long pTakeInfo);
}
