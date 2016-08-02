//copyright by aerror 2016 
package fbxsdk;
//26 123 FbxArrayVector2  --------------------
public class FbxArrayVector2  {
  /// FbxArrayVector2 ()
  public static native long meCreate(  );
  /// FbxArrayVector2 (const FbxArrayVector2 &pArray)
  public static native long meCreate1(   Long pArray);
  /// FbxArrayVector2 (int pCapacity)
  public static native long meCreate2(   int pCapacity);
  /// ~FbxArrayVector2 ()
  public static native void meDestroy(long lpjFbxArrayVector2);
  /// int  InsertAt (const int pIndex, const FbxVector2 pElement)
  public static native int InsertAt(long lpjFbxArrayVector2, int pIndex, long pElement);
  /// int  Add (const FbxVector2 pElement)
  public static native int Add(long lpjFbxArrayVector2, long pElement);
  /// int  AddUnique (const FbxVector2 pElement)
  public static native int AddUnique(long lpjFbxArrayVector2, long pElement);
  /// int  Size () const
  public static native int Size(long lpjFbxArrayVector2);
  /// int  Capacity () const
  public static native int Capacity(long lpjFbxArrayVector2);
  /// FbxVector2  GetAt (const int pIndex) const
  public static native long GetAt(long lpjFbxArrayVector2, int pIndex);
  /// FbxVector2  GetFirst () const
  public static native long GetFirst(long lpjFbxArrayVector2);
  /// FbxVector2  GetLast () const
  public static native long GetLast(long lpjFbxArrayVector2);
  /// int  Find (const FbxVector2 pElement, const int pStartIndex=0) const
  public static native int Find(long lpjFbxArrayVector2, long pElement, int pStartIndex);
  /// int  FindReverse (const FbxVector2 pElement, const int pStartIndex=FBXSDK_INT_MAX) const
  public static native int FindReverse(long lpjFbxArrayVector2, long pElement, int pStartIndex);
  /// bool  Reserve (const int pCapacity)
  public static native boolean Reserve(long lpjFbxArrayVector2, int pCapacity);
  /// void  SetAt (const int pIndex, const FbxVector2 pElement)
  public static native void SetAt(long lpjFbxArrayVector2, int pIndex, long pElement);
  /// void  SetFirst (const FbxVector2 pElement)
  public static native void SetFirst(long lpjFbxArrayVector2, long pElement);
  /// void  SetLast (const FbxVector2 pElement)
  public static native void SetLast(long lpjFbxArrayVector2, long pElement);
  /// FbxVector2  RemoveAt (const int pIndex)
  public static native long RemoveAt(long lpjFbxArrayVector2, int pIndex);
  /// FbxVector2  RemoveFirst ()
  public static native long RemoveFirst(long lpjFbxArrayVector2);
  /// FbxVector2  RemoveLast ()
  public static native long RemoveLast(long lpjFbxArrayVector2);
  /// bool  RemoveIt (const FbxVector2 pElement)
  public static native boolean RemoveIt(long lpjFbxArrayVector2, long pElement);
  /// bool  Resize (const int pSize)
  public static native boolean Resize(long lpjFbxArrayVector2, int pSize);
  /// bool  Grow (const int pSize)
  public static native boolean Grow(long lpjFbxArrayVector2, int pSize);
  /// void  Clear ()
  public static native void Clear(long lpjFbxArrayVector2);
  /// FbxVector2 *  GetArray () const
  public static native long GetArray(long lpjFbxArrayVector2);
  /// void  AddArray (const FbxArray< FbxVector2 > &pOther)
  public static native void AddArray(long lpjFbxArrayVector2, Long pOther);
  /// void  AddArrayNoDuplicate (const FbxArray< FbxVector2 > &pOther)
  public static native void AddArrayNoDuplicate(long lpjFbxArrayVector2, Long pOther);
  /// void  RemoveArray (const FbxArray< FbxVector2 > &pOther)
  public static native void RemoveArray(long lpjFbxArrayVector2, Long pOther);
}
