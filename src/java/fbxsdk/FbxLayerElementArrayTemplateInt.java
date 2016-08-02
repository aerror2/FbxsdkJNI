package fbxsdk;
//26 99 FbxLayerElementArrayTemplateInt  --------------------
public class FbxLayerElementArrayTemplateInt  {
  /// FbxLayerElementArrayTemplateInt (EFbxType pDataType)
  public static native long meCreate(   int pDataType);
  /// int  Add (int const &pItem)
  public static native int Add(long lpjFbxLayerElementArrayTemplateInt, Integer pItem);
  /// int  InsertAt (int pIndex, int const &pItem)
  public static native int InsertAt(long lpjFbxLayerElementArrayTemplateInt, int pIndex, Integer pItem);
  /// void  SetAt (int pIndex, int const &pItem)
  public static native void SetAt(long lpjFbxLayerElementArrayTemplateInt, int pIndex, Integer pItem);
  /// void  SetLast (int const &pItem)
  public static native void SetLast(long lpjFbxLayerElementArrayTemplateInt, Integer pItem);
  /// int  RemoveAt (int pIndex)
  public static native int RemoveAt(long lpjFbxLayerElementArrayTemplateInt, int pIndex);
  /// int  RemoveLast ()
  public static native int RemoveLast(long lpjFbxLayerElementArrayTemplateInt);
  /// bool  RemoveIt (int const &pItem)
  public static native boolean RemoveIt(long lpjFbxLayerElementArrayTemplateInt, Integer pItem);
  /// int  GetAt (int pIndex) const
  public static native int GetAt(long lpjFbxLayerElementArrayTemplateInt, int pIndex);
  /// int  GetFirst () const
  public static native int GetFirst(long lpjFbxLayerElementArrayTemplateInt);
  /// int  GetLast () const
  public static native int GetLast(long lpjFbxLayerElementArrayTemplateInt);
  /// int  Find (int const &pItem)
  public static native int Find(long lpjFbxLayerElementArrayTemplateInt, Integer pItem);
  /// int  FindAfter (int pAfterIndex, int const &pItem)
  public static native int FindAfter(long lpjFbxLayerElementArrayTemplateInt, int pAfterIndex, Integer pItem);
  /// int  FindBefore (int pBeforeIndex, int const &pItem)
  public static native int FindBefore(long lpjFbxLayerElementArrayTemplateInt, int pBeforeIndex, Integer pItem);
  /// void meDestroy(FbxLayerElementArrayTemplateInt * lpFbxLayerElementArrayTemplateInt)
  public static native void meDestroy(long lpjFbxLayerElementArrayTemplateInt);
}
