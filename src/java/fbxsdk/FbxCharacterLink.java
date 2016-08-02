package fbxsdk;
//26 95 FbxCharacterLink  --------------------
public class FbxCharacterLink  {
  public                 class   EType  {
   public static final int eCharacterLink = 0;
   public static final int eControlSetLink = 1;
   public static final int eControlSetEffector = 2;
   public static final int eControlSetEffectorAux = 3;
}
  /// FbxCharacterLink ()
  public static native long meCreate(  );
  /// FbxCharacterLink (const FbxCharacterLink &pCharacterLink)
  public static native long meCreate1(   Long pCharacterLink);
  /// void  Reset ()
  public static native void Reset(long lpjFbxCharacterLink);
  /// void meDestroy(FbxCharacterLink * lpFbxCharacterLink)
  public static native void meDestroy(long lpjFbxCharacterLink);
}
