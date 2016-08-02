package fbxsdk;
//26 73 FbxStringSymbol  --------------------
public class FbxStringSymbol  {
  /// bool  IsEmpty () const
  public static native boolean IsEmpty(long lpjFbxStringSymbol);
  /// FbxStringSymbol ()
  public static native long meCreate(  );
  /// FbxStringSymbol (const char *pName)
  public static native long meCreate1(   String pName);
  /// FbxStringSymbol (const FbxStringSymbol &pOther)
  public static native long meCreate2(   Long pOther);
  /// ~FbxStringSymbol ()
  public static native void meDestroy(long lpjFbxStringSymbol);
}
