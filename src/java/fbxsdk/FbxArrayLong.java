//copyright by aerror 2016 
package fbxsdk;
//26 122 FbxArrayLong  --------------------
public class FbxArrayLong  {
  /// FbxArrayLong ()
  public static native long meCreate(  );
  /// FbxArrayLong (const FbxArrayLong &pArray)
  public static native long meCreate1(   Long pArray);
  /// FbxArrayLong (int pCapacity)
  public static native long meCreate2(   int pCapacity);
  /// ~FbxArrayLong ()
  public static native void meDestroy(long lpjFbxArrayLong);
  /// int  InsertAt (const int pIndex, const long pElement)
  public static native int InsertAt(long lpjFbxArrayLong, int pIndex, long pElement);
  /// int  Add (const long pElement)
  public static native int Add(long lpjFbxArrayLong, long pElement);
  /// int  AddUnique (const long pElement)
  public static native int AddUnique(long lpjFbxArrayLong, long pElement);
  /// int  Size () const
  public static native int Size(long lpjFbxArrayLong);
  /// int  Capacity () const
  public static native int Capacity(long lpjFbxArrayLong);
  /// long  GetAt (const int pIndex) const
  public static native long GetAt(long lpjFbxArrayLong, int pIndex);
  /// long  GetFirst () const
  public static native long GetFirst(long lpjFbxArrayLong);
  /// long  GetLast () const
  public static native long GetLast(long lpjFbxArrayLong);
  /// int  Find (const long pElement, const int pStartIndex=0) const
  public static native int Find(long lpjFbxArrayLong, long pElement, int pStartIndex);
  /// int  FindReverse (const long pElement, const int pStartIndex=FBXSDK_INT_MAX) const
  public static native int FindReverse(long lpjFbxArrayLong, long pElement, int pStartIndex);
  /// bool  Reserve (const int pCapacity)
  public static native boolean Reserve(long lpjFbxArrayLong, int pCapacity);
  /// void  SetAt (const int pIndex, const long pElement)
  public static native void SetAt(long lpjFbxArrayLong, int pIndex, long pElement);
  /// void  SetFirst (const long pElement)
  public static native void SetFirst(long lpjFbxArrayLong, long pElement);
  /// void  SetLast (const long pElement)
  public static native void SetLast(long lpjFbxArrayLong, long pElement);
  /// long  RemoveAt (const int pIndex)
  public static native long RemoveAt(long lpjFbxArrayLong, int pIndex);
  /// long  RemoveFirst ()
  public static native long RemoveFirst(long lpjFbxArrayLong);
  /// long  RemoveLast ()
  public static native long RemoveLast(long lpjFbxArrayLong);
  /// bool  RemoveIt (const long pElement)
  public static native boolean RemoveIt(long lpjFbxArrayLong, long pElement);
  /// bool  Resize (const int pSize)
  public static native boolean Resize(long lpjFbxArrayLong, int pSize);
  /// bool  Grow (const int pSize)
  public static native boolean Grow(long lpjFbxArrayLong, int pSize);
  /// void  Clear ()
  public static native void Clear(long lpjFbxArrayLong);
  /// long *  GetArray () const
  public static native long GetArray(long lpjFbxArrayLong);
  /// void  AddArray (const FbxArrayLong< long > &pOther)
  public static native void AddArray(long lpjFbxArrayLong, Long pOther);
  /// void  AddArrayNoDuplicate (const FbxArrayLong< long > &pOther)
  public static native void AddArrayNoDuplicate(long lpjFbxArrayLong, Long pOther);
  /// void  RemoveArray (const FbxArrayLong< long > &pOther)
  public static native void RemoveArray(long lpjFbxArrayLong, Long pOther);
}
