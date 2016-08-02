package fbxsdk;
//26 99 FbxLayerElementArrayTemplateDouble  --------------------
public class FbxLayerElementArrayTemplateDouble  {
  /// FbxLayerElementArrayTemplateDouble (EFbxType pDataType)
  public static native long meCreate(   int pDataType);
  /// int  Add (double const &pItem)
  public static native int Add(long lpjFbxLayerElementArrayTemplateDouble, Double pItem);
  /// int  InsertAt (int pIndex, double const &pItem)
  public static native int InsertAt(long lpjFbxLayerElementArrayTemplateDouble, int pIndex, Double pItem);
  /// void  SetAt (int pIndex, double const &pItem)
  public static native void SetAt(long lpjFbxLayerElementArrayTemplateDouble, int pIndex, Double pItem);
  /// void  SetLast (double const &pItem)
  public static native void SetLast(long lpjFbxLayerElementArrayTemplateDouble, Double pItem);
  /// double  RemoveAt (int pIndex)
  public static native double RemoveAt(long lpjFbxLayerElementArrayTemplateDouble, int pIndex);
  /// double  RemoveLast ()
  public static native double RemoveLast(long lpjFbxLayerElementArrayTemplateDouble);
  /// bool  RemoveIt (double const &pItem)
  public static native boolean RemoveIt(long lpjFbxLayerElementArrayTemplateDouble, Double pItem);
  /// double  GetAt (int pIndex) const
  public static native double GetAt(long lpjFbxLayerElementArrayTemplateDouble, int pIndex);
  /// double  GetFirst () const
  public static native double GetFirst(long lpjFbxLayerElementArrayTemplateDouble);
  /// double  GetLast () const
  public static native double GetLast(long lpjFbxLayerElementArrayTemplateDouble);
  /// int  Find (double const &pItem)
  public static native int Find(long lpjFbxLayerElementArrayTemplateDouble, Double pItem);
  /// int  FindAfter (int pAfterIndex, double const &pItem)
  public static native int FindAfter(long lpjFbxLayerElementArrayTemplateDouble, int pAfterIndex, Double pItem);
  /// int  FindBefore (int pBeforeIndex, double const &pItem)
  public static native int FindBefore(long lpjFbxLayerElementArrayTemplateDouble, int pBeforeIndex, Double pItem);
  /// void meDestroy(FbxLayerElementArrayTemplateDouble * lpFbxLayerElementArrayTemplateDouble)
  public static native void meDestroy(long lpjFbxLayerElementArrayTemplateDouble);
}
