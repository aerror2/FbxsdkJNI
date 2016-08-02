//copyright by aerror 2016 
package fbxsdk;
//26 123 FbxArrayVector4  --------------------
public class FbxArrayVector4  {
  /// FbxArrayVector4 ()
  public static native long meCreate(  );
  /// FbxArrayVector4 (const FbxArrayVector4 &pArray)
  public static native long meCreate1(   Long pArray);
  /// FbxArrayVector4 (int pCapacity)
  public static native long meCreate2(   int pCapacity);
  /// ~FbxArrayVector4 ()
  public static native void meDestroy(long lpjFbxArrayVector4);
  /// int  InsertAt (const int pIndex, const FbxVector4 pElement)
  public static native int InsertAt(long lpjFbxArrayVector4, int pIndex, long pElement);
  /// int  Add (const FbxVector4 pElement)
  public static native int Add(long lpjFbxArrayVector4, long pElement);
  /// int  AddUnique (const FbxVector4 pElement)
  public static native int AddUnique(long lpjFbxArrayVector4, long pElement);
  /// int  Size () const
  public static native int Size(long lpjFbxArrayVector4);
  /// int  Capacity () const
  public static native int Capacity(long lpjFbxArrayVector4);
  /// FbxVector4  GetAt (const int pIndex) const
  public static native long GetAt(long lpjFbxArrayVector4, int pIndex);
  /// FbxVector4  GetFirst () const
  public static native long GetFirst(long lpjFbxArrayVector4);
  /// FbxVector4  GetLast () const
  public static native long GetLast(long lpjFbxArrayVector4);
  /// int  Find (const FbxVector4 pElement, const int pStartIndex=0) const
  public static native int Find(long lpjFbxArrayVector4, long pElement, int pStartIndex);
  /// int  FindReverse (const FbxVector4 pElement, const int pStartIndex=FBXSDK_INT_MAX) const
  public static native int FindReverse(long lpjFbxArrayVector4, long pElement, int pStartIndex);
  /// bool  Reserve (const int pCapacity)
  public static native boolean Reserve(long lpjFbxArrayVector4, int pCapacity);
  /// void  SetAt (const int pIndex, const FbxVector4 pElement)
  public static native void SetAt(long lpjFbxArrayVector4, int pIndex, long pElement);
  /// void  SetFirst (const FbxVector4 pElement)
  public static native void SetFirst(long lpjFbxArrayVector4, long pElement);
  /// void  SetLast (const FbxVector4 pElement)
  public static native void SetLast(long lpjFbxArrayVector4, long pElement);
  /// FbxVector4  RemoveAt (const int pIndex)
  public static native long RemoveAt(long lpjFbxArrayVector4, int pIndex);
  /// FbxVector4  RemoveFirst ()
  public static native long RemoveFirst(long lpjFbxArrayVector4);
  /// FbxVector4  RemoveLast ()
  public static native long RemoveLast(long lpjFbxArrayVector4);
  /// bool  RemoveIt (const FbxVector4 pElement)
  public static native boolean RemoveIt(long lpjFbxArrayVector4, long pElement);
  /// bool  Resize (const int pSize)
  public static native boolean Resize(long lpjFbxArrayVector4, int pSize);
  /// bool  Grow (const int pSize)
  public static native boolean Grow(long lpjFbxArrayVector4, int pSize);
  /// void  Clear ()
  public static native void Clear(long lpjFbxArrayVector4);
  /// FbxVector4 *  GetArray () const
  public static native long GetArray(long lpjFbxArrayVector4);
  /// void  AddArray (const FbxArray< FbxVector4 > &pOther)
  public static native void AddArray(long lpjFbxArrayVector4, Long pOther);
  /// void  AddArrayNoDuplicate (const FbxArray< FbxVector4 > &pOther)
  public static native void AddArrayNoDuplicate(long lpjFbxArrayVector4, Long pOther);
  /// void  RemoveArray (const FbxArray< FbxVector4 > &pOther)
  public static native void RemoveArray(long lpjFbxArrayVector4, Long pOther);
}
