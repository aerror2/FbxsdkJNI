//copyright by aerror 2016 
package fbxsdk;
//26 86 FbxSemanticEntryView  --------------------
public class FbxSemanticEntryView  {
  /// void  SetSemantic (const char *pSemantic)
  public static native void SetSemantic(long lpjFbxSemanticEntryView, String pSemantic);
  /// FbxString  GetSemantic (bool pAppendIndex=true) const
  public static native long GetSemantic(long lpjFbxSemanticEntryView, boolean pAppendIndex);
  /// int  GetIndex () const
  public static native int GetIndex(long lpjFbxSemanticEntryView);
  /// FbxSemanticEntryView (FbxBindingTableEntry *pEntry, bool pAsSource, bool pCreate=false)
  public static native long meCreate(   long pEntry, boolean pAsSource, boolean pCreate);
  /// virtual  ~FbxSemanticEntryView ()
  public static native void meDestroy(long lpjFbxSemanticEntryView);
}
