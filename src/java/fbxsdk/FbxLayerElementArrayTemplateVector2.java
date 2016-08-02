//copyright by aerror 2016 
package fbxsdk;
//26 99 FbxLayerElementArrayTemplateVector2  --------------------
public class FbxLayerElementArrayTemplateVector2  {
  /// FbxLayerElementArrayTemplateVector2 (EFbxType pDataType)
  public static native long meCreate(   int pDataType);
  /// int  Add (FbxVector2 const &pItem)
  public static native int Add(long lpjFbxLayerElementArrayTemplateVector2, Long pItem);
  /// int  InsertAt (int pIndex, FbxVector2 const &pItem)
  public static native int InsertAt(long lpjFbxLayerElementArrayTemplateVector2, int pIndex, Long pItem);
  /// void  SetAt (int pIndex, FbxVector2 const &pItem)
  public static native void SetAt(long lpjFbxLayerElementArrayTemplateVector2, int pIndex, Long pItem);
  /// void  SetLast (FbxVector2 const &pItem)
  public static native void SetLast(long lpjFbxLayerElementArrayTemplateVector2, Long pItem);
  /// FbxVector2  RemoveAt (int pIndex)
  public static native long RemoveAt(long lpjFbxLayerElementArrayTemplateVector2, int pIndex);
  /// FbxVector2  RemoveLast ()
  public static native long RemoveLast(long lpjFbxLayerElementArrayTemplateVector2);
  /// bool  RemoveIt (FbxVector2 const &pItem)
  public static native boolean RemoveIt(long lpjFbxLayerElementArrayTemplateVector2, Long pItem);
  /// FbxVector2  GetAt (int pIndex) const
  public static native long GetAt(long lpjFbxLayerElementArrayTemplateVector2, int pIndex);
  /// FbxVector2  GetFirst () const
  public static native long GetFirst(long lpjFbxLayerElementArrayTemplateVector2);
  /// FbxVector2  GetLast () const
  public static native long GetLast(long lpjFbxLayerElementArrayTemplateVector2);
  /// int  Find (FbxVector2 const &pItem)
  public static native int Find(long lpjFbxLayerElementArrayTemplateVector2, Long pItem);
  /// int  FindAfter (int pAfterIndex, FbxVector2 const &pItem)
  public static native int FindAfter(long lpjFbxLayerElementArrayTemplateVector2, int pAfterIndex, Long pItem);
  /// int  FindBefore (int pBeforeIndex, FbxVector2 const &pItem)
  public static native int FindBefore(long lpjFbxLayerElementArrayTemplateVector2, int pBeforeIndex, Long pItem);
  /// void meDestroy(FbxLayerElementArrayTemplateVector2 * lpFbxLayerElementArrayTemplateVector2)
  public static native void meDestroy(long lpjFbxLayerElementArrayTemplateVector2);
}
