//copyright by aerror 2016 
package fbxsdk;
//26 99 FbxLayerElementArrayTemplateBool  --------------------
public class FbxLayerElementArrayTemplateBool  {
  /// FbxLayerElementArrayTemplateBool (EFbxType pDataType)
  public static native long meCreate(   int pDataType);
  /// int  Add (bool const &pItem)
  public static native int Add(long lpjFbxLayerElementArrayTemplateBool, Boolean pItem);
  /// int  InsertAt (int pIndex, bool const &pItem)
  public static native int InsertAt(long lpjFbxLayerElementArrayTemplateBool, int pIndex, Boolean pItem);
  /// void  SetAt (int pIndex, bool const &pItem)
  public static native void SetAt(long lpjFbxLayerElementArrayTemplateBool, int pIndex, Boolean pItem);
  /// void  SetLast (bool const &pItem)
  public static native void SetLast(long lpjFbxLayerElementArrayTemplateBool, Boolean pItem);
  /// bool  RemoveAt (int pIndex)
  public static native boolean RemoveAt(long lpjFbxLayerElementArrayTemplateBool, int pIndex);
  /// bool  RemoveLast ()
  public static native boolean RemoveLast(long lpjFbxLayerElementArrayTemplateBool);
  /// bool  RemoveIt (bool const &pItem)
  public static native boolean RemoveIt(long lpjFbxLayerElementArrayTemplateBool, Boolean pItem);
  /// bool  GetAt (int pIndex) const
  public static native boolean GetAt(long lpjFbxLayerElementArrayTemplateBool, int pIndex);
  /// bool  GetFirst () const
  public static native boolean GetFirst(long lpjFbxLayerElementArrayTemplateBool);
  /// bool  GetLast () const
  public static native boolean GetLast(long lpjFbxLayerElementArrayTemplateBool);
  /// int  Find (bool const &pItem)
  public static native int Find(long lpjFbxLayerElementArrayTemplateBool, Boolean pItem);
  /// int  FindAfter (int pAfterIndex, bool const &pItem)
  public static native int FindAfter(long lpjFbxLayerElementArrayTemplateBool, int pAfterIndex, Boolean pItem);
  /// int  FindBefore (int pBeforeIndex, bool const &pItem)
  public static native int FindBefore(long lpjFbxLayerElementArrayTemplateBool, int pBeforeIndex, Boolean pItem);
  /// void meDestroy(FbxLayerElementArrayTemplateBool * lpFbxLayerElementArrayTemplateBool)
  public static native void meDestroy(long lpjFbxLayerElementArrayTemplateBool);
}
