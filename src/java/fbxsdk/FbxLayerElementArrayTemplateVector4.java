package fbxsdk;
//26 99 FbxLayerElementArrayTemplateVector4  --------------------
public class FbxLayerElementArrayTemplateVector4  {
  /// FbxLayerElementArrayTemplateVector4 (EFbxType pDataType)
  public static native long meCreate(   int pDataType);
  /// int  Add (FbxVector4 const &pItem)
  public static native int Add(long lpjFbxLayerElementArrayTemplateVector4, Long pItem);
  /// int  InsertAt (int pIndex, FbxVector4 const &pItem)
  public static native int InsertAt(long lpjFbxLayerElementArrayTemplateVector4, int pIndex, Long pItem);
  /// void  SetAt (int pIndex, FbxVector4 const &pItem)
  public static native void SetAt(long lpjFbxLayerElementArrayTemplateVector4, int pIndex, Long pItem);
  /// void  SetLast (FbxVector4 const &pItem)
  public static native void SetLast(long lpjFbxLayerElementArrayTemplateVector4, Long pItem);
  /// FbxVector4  RemoveAt (int pIndex)
  public static native long RemoveAt(long lpjFbxLayerElementArrayTemplateVector4, int pIndex);
  /// FbxVector4  RemoveLast ()
  public static native long RemoveLast(long lpjFbxLayerElementArrayTemplateVector4);
  /// bool  RemoveIt (FbxVector4 const &pItem)
  public static native boolean RemoveIt(long lpjFbxLayerElementArrayTemplateVector4, Long pItem);
  /// FbxVector4  GetAt (int pIndex) const
  public static native long GetAt(long lpjFbxLayerElementArrayTemplateVector4, int pIndex);
  /// FbxVector4  GetFirst () const
  public static native long GetFirst(long lpjFbxLayerElementArrayTemplateVector4);
  /// FbxVector4  GetLast () const
  public static native long GetLast(long lpjFbxLayerElementArrayTemplateVector4);
  /// int  Find (FbxVector4 const &pItem)
  public static native int Find(long lpjFbxLayerElementArrayTemplateVector4, Long pItem);
  /// int  FindAfter (int pAfterIndex, FbxVector4 const &pItem)
  public static native int FindAfter(long lpjFbxLayerElementArrayTemplateVector4, int pAfterIndex, Long pItem);
  /// int  FindBefore (int pBeforeIndex, FbxVector4 const &pItem)
  public static native int FindBefore(long lpjFbxLayerElementArrayTemplateVector4, int pBeforeIndex, Long pItem);
  /// void meDestroy(FbxLayerElementArrayTemplateVector4 * lpFbxLayerElementArrayTemplateVector4)
  public static native void meDestroy(long lpjFbxLayerElementArrayTemplateVector4);
}
