//copyright by aerror 2016 
package fbxsdk;
//26 124 FbxArrayInt  --------------------
public class FbxArrayInt  {
  /// FbxArrayInt ()
  public static native long meCreate(  );
  /// FbxArrayInt (const FbxArrayInt &pArray)
  public static native long meCreate1(   Long pArray);
  /// FbxArrayInt (int pCapacity)
  public static native long meCreate2(   int pCapacity);
  /// ~FbxArrayInt ()
  public static native void meDestroy(long lpjFbxArrayInt);
  /// int  InsertAt (const int pIndex, const int pElement)
  public static native int InsertAt(long lpjFbxArrayInt, int pIndex, int pElement);
  /// int  Add (const int pElement)
  public static native int Add(long lpjFbxArrayInt, int pElement);
  /// int  AddUnique (const int pElement)
  public static native int AddUnique(long lpjFbxArrayInt, int pElement);
  /// int  Size () const
  public static native int Size(long lpjFbxArrayInt);
  /// int  Capacity () const
  public static native int Capacity(long lpjFbxArrayInt);
  /// int  GetAt (const int pIndex) const
  public static native int GetAt(long lpjFbxArrayInt, int pIndex);
  /// int  GetFirst () const
  public static native int GetFirst(long lpjFbxArrayInt);
  /// int  GetLast () const
  public static native int GetLast(long lpjFbxArrayInt);
  /// int  Find (const int pElement, const int pStartIndex=0) const
  public static native int Find(long lpjFbxArrayInt, int pElement, int pStartIndex);
  /// int  FindReverse (const int pElement, const int pStartIndex=FBXSDK_INT_MAX) const
  public static native int FindReverse(long lpjFbxArrayInt, int pElement, int pStartIndex);
  /// bool  Reserve (const int pCapacity)
  public static native boolean Reserve(long lpjFbxArrayInt, int pCapacity);
  /// void  SetAt (const int pIndex, const int pElement)
  public static native void SetAt(long lpjFbxArrayInt, int pIndex, int pElement);
  /// void  SetFirst (const int pElement)
  public static native void SetFirst(long lpjFbxArrayInt, int pElement);
  /// void  SetLast (const int pElement)
  public static native void SetLast(long lpjFbxArrayInt, int pElement);
  /// int  RemoveAt (const int pIndex)
  public static native int RemoveAt(long lpjFbxArrayInt, int pIndex);
  /// int  RemoveFirst ()
  public static native int RemoveFirst(long lpjFbxArrayInt);
  /// int  RemoveLast ()
  public static native int RemoveLast(long lpjFbxArrayInt);
  /// bool  RemoveIt (const int pElement)
  public static native boolean RemoveIt(long lpjFbxArrayInt, int pElement);
  /// bool  Resize (const int pSize)
  public static native boolean Resize(long lpjFbxArrayInt, int pSize);
  /// bool  Grow (const int pSize)
  public static native boolean Grow(long lpjFbxArrayInt, int pSize);
  /// void  Clear ()
  public static native void Clear(long lpjFbxArrayInt);
  /// int *  GetArray () const
  public static native long GetArray(long lpjFbxArrayInt);
  /// void  AddArray (const FbxArray< int > &pOther)
  public static native void AddArray(long lpjFbxArrayInt, Long pOther);
  /// void  AddArrayNoDuplicate (const FbxArray< int > &pOther)
  public static native void AddArrayNoDuplicate(long lpjFbxArrayInt, Long pOther);
  /// void  RemoveArray (const FbxArray< int > &pOther)
  public static native void RemoveArray(long lpjFbxArrayInt, Long pOther);
}
