package fbxsdk;
//26 123 FbxArrayDouble  --------------------
public class FbxArrayDouble  {
  /// FbxArrayDouble ()
  public static native long meCreate(  );
  /// FbxArrayDouble (const FbxArrayDouble &pArray)
  public static native long meCreate1(   Long pArray);
  /// FbxArrayDouble (int pCapacity)
  public static native long meCreate2(   int pCapacity);
  /// ~FbxArrayDouble ()
  public static native void meDestroy(long lpjFbxArrayDouble);
  /// int  InsertAt (const int pIndex, const double pElement)
  public static native int InsertAt(long lpjFbxArrayDouble, int pIndex, double pElement);
  /// int  Add (const double pElement)
  public static native int Add(long lpjFbxArrayDouble, double pElement);
  /// int  AddUnique (const double pElement)
  public static native int AddUnique(long lpjFbxArrayDouble, double pElement);
  /// int  Size () const
  public static native int Size(long lpjFbxArrayDouble);
  /// int  Capacity () const
  public static native int Capacity(long lpjFbxArrayDouble);
  /// double  GetAt (const int pIndex) const
  public static native double GetAt(long lpjFbxArrayDouble, int pIndex);
  /// double  GetFirst () const
  public static native double GetFirst(long lpjFbxArrayDouble);
  /// double  GetLast () const
  public static native double GetLast(long lpjFbxArrayDouble);
  /// int  Find (const double pElement, const int pStartIndex=0) const
  public static native int Find(long lpjFbxArrayDouble, double pElement, int pStartIndex);
  /// int  FindReverse (const double pElement, const int pStartIndex=FBXSDK_INT_MAX) const
  public static native int FindReverse(long lpjFbxArrayDouble, double pElement, int pStartIndex);
  /// bool  Reserve (const int pCapacity)
  public static native boolean Reserve(long lpjFbxArrayDouble, int pCapacity);
  /// void  SetAt (const int pIndex, const double pElement)
  public static native void SetAt(long lpjFbxArrayDouble, int pIndex, double pElement);
  /// void  SetFirst (const double pElement)
  public static native void SetFirst(long lpjFbxArrayDouble, double pElement);
  /// void  SetLast (const double pElement)
  public static native void SetLast(long lpjFbxArrayDouble, double pElement);
  /// double  RemoveAt (const int pIndex)
  public static native double RemoveAt(long lpjFbxArrayDouble, int pIndex);
  /// double  RemoveFirst ()
  public static native double RemoveFirst(long lpjFbxArrayDouble);
  /// double  RemoveLast ()
  public static native double RemoveLast(long lpjFbxArrayDouble);
  /// bool  RemoveIt (const double pElement)
  public static native boolean RemoveIt(long lpjFbxArrayDouble, double pElement);
  /// bool  Resize (const int pSize)
  public static native boolean Resize(long lpjFbxArrayDouble, int pSize);
  /// bool  Grow (const int pSize)
  public static native boolean Grow(long lpjFbxArrayDouble, int pSize);
  /// void  Clear ()
  public static native void Clear(long lpjFbxArrayDouble);
  /// double *  GetArray () const
  public static native long GetArray(long lpjFbxArrayDouble);
  /// void  AddArray (const FbxArray< double > &pOther)
  public static native void AddArray(long lpjFbxArrayDouble, Long pOther);
  /// void  AddArrayNoDuplicate (const FbxArray< double > &pOther)
  public static native void AddArrayNoDuplicate(long lpjFbxArrayDouble, Long pOther);
  /// void  RemoveArray (const FbxArray< double > &pOther)
  public static native void RemoveArray(long lpjFbxArrayDouble, Long pOther);
}
