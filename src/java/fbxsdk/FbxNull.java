//copyright by aerror 2016 
package fbxsdk;
//26 81 FbxNull  --------------------
public class FbxNull  {
  public                              class   ELook  {
   public static final int eNone = 0;
   public static final int eCross = 1;
}
  /// virtual FbxNodeAttribute::EType  GetAttributeType () const
  public static native int GetAttributeType(long lpjFbxNull);
  /// void  Reset ()
  public static native void Reset(long lpjFbxNull);
  /// double  GetSizeDefaultValue () const
  public static native double GetSizeDefaultValue(long lpjFbxNull);
  /// FbxPropertyT< FbxDouble >  Size
  public static native void mepSetSize(long lpjFbxNull, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  Size
  public static native double mepGetSize(long lpjFbxNull);
  /// FbxPropertyT< FbxDouble >  Size
  public static native long mptGetSize(long lpjFbxNull);
  /// FbxPropertyT< ELook >  Look
  public static native void mepSetLook(long lpjFbxNull, int lpELook);
  /// FbxPropertyT< ELook >  Look
  public static native int mepGetLook(long lpjFbxNull);
  /// FbxPropertyT< ELook >  Look
  public static native long mptGetLook(long lpjFbxNull);
  /// FbxNull * Create( FbxNodeAttribute* lpFbxNodeAttribute,  const char* pName )
  public static native long Create(   long lpFbxNodeAttribute, String pName);
}
