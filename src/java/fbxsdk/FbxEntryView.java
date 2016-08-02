package fbxsdk;
//26 70 FbxEntryView  --------------------
public class FbxEntryView  {
  /// virtual bool  IsValid () const
  public static native boolean IsValid(long lpjFbxEntryView);
  /// virtual bool  Create ()
  public static native boolean Create(long lpjFbxEntryView);
  /// FbxEntryView (FbxBindingTableEntry *pEntry, bool pAsSource, bool pCreate=false)
  public static native long meCreate(   long pEntry, boolean pAsSource, boolean pCreate);
  /// virtual  ~FbxEntryView ()
  public static native void meDestroy(long lpjFbxEntryView);
}
