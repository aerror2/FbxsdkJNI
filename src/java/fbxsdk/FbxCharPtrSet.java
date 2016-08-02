//copyright by aerror 2016 
package fbxsdk;
//26 69 FbxCharPtrSet  --------------------
public class FbxCharPtrSet  {
  /// FbxCharPtrSet (int pItemPerBlock=20)
  public static native long meCreate(   int pItemPerBlock);
  /// ~FbxCharPtrSet ()
  public static native void meDestroy(long lpjFbxCharPtrSet);
  /// void  Add (const char *pReference, FbxHandle pItem)
  public static native void Add(long lpjFbxCharPtrSet, String pReference, long pItem);
  /// bool  Remove (const char *pReference)
  public static native boolean Remove(long lpjFbxCharPtrSet, String pReference);
  /// FbxHandle  Get (const char *pReference, int *PIndex=NULL)
  public static native long Get(long lpjFbxCharPtrSet, String pReference, int [] PIndex);
  /// FbxHandle  GetFromIndex (int pIndex, const char **pReference=NULL)
  public static native long GetFromIndex(long lpjFbxCharPtrSet, int pIndex, String [] pReference);
  /// void  RemoveFromIndex (int pIndex)
  public static native void RemoveFromIndex(long lpjFbxCharPtrSet, int pIndex);
  /// int  GetCount () const
  public static native int GetCount(long lpjFbxCharPtrSet);
  /// void  Sort ()
  public static native void Sort(long lpjFbxCharPtrSet);
  /// void  Clear ()
  public static native void Clear(long lpjFbxCharPtrSet);
}
