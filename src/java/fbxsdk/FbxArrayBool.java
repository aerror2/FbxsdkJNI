package fbxsdk;
//26 123 FbxArrayBool  --------------------
public class FbxArrayBool  {
  /// FbxArrayBool ()
  public static native long meCreate(  );
  /// FbxArrayBool (const FbxArrayBool &pArray)
  public static native long meCreate1(   Long pArray);
  /// FbxArrayBool (int pCapacity)
  public static native long meCreate2(   int pCapacity);
  /// ~FbxArrayBool ()
  public static native void meDestroy(long lpjFbxArrayBool);
  /// int  InsertAt (const int pIndex, const bool pElement)
  public static native int InsertAt(long lpjFbxArrayBool, int pIndex, boolean pElement);
  /// int  Add (const bool pElement)
  public static native int Add(long lpjFbxArrayBool, boolean pElement);
  /// int  AddUnique (const bool pElement)
  public static native int AddUnique(long lpjFbxArrayBool, boolean pElement);
  /// int  Size () const
  public static native int Size(long lpjFbxArrayBool);
  /// int  Capacity () const
  public static native int Capacity(long lpjFbxArrayBool);
  /// bool  GetAt (const int pIndex) const
  public static native boolean GetAt(long lpjFbxArrayBool, int pIndex);
  /// bool  GetFirst () const
  public static native boolean GetFirst(long lpjFbxArrayBool);
  /// bool  GetLast () const
  public static native boolean GetLast(long lpjFbxArrayBool);
  /// int  Find (const bool pElement, const int pStartIndex=0) const
  public static native int Find(long lpjFbxArrayBool, boolean pElement, int pStartIndex);
  /// int  FindReverse (const bool pElement, const int pStartIndex=FBXSDK_INT_MAX) const
  public static native int FindReverse(long lpjFbxArrayBool, boolean pElement, int pStartIndex);
  /// bool  Reserve (const int pCapacity)
  public static native boolean Reserve(long lpjFbxArrayBool, int pCapacity);
  /// void  SetAt (const int pIndex, const bool pElement)
  public static native void SetAt(long lpjFbxArrayBool, int pIndex, boolean pElement);
  /// void  SetFirst (const bool pElement)
  public static native void SetFirst(long lpjFbxArrayBool, boolean pElement);
  /// void  SetLast (const bool pElement)
  public static native void SetLast(long lpjFbxArrayBool, boolean pElement);
  /// bool  RemoveAt (const int pIndex)
  public static native boolean RemoveAt(long lpjFbxArrayBool, int pIndex);
  /// bool  RemoveFirst ()
  public static native boolean RemoveFirst(long lpjFbxArrayBool);
  /// bool  RemoveLast ()
  public static native boolean RemoveLast(long lpjFbxArrayBool);
  /// bool  RemoveIt (const bool pElement)
  public static native boolean RemoveIt(long lpjFbxArrayBool, boolean pElement);
  /// bool  Resize (const int pSize)
  public static native boolean Resize(long lpjFbxArrayBool, int pSize);
  /// bool  Grow (const int pSize)
  public static native boolean Grow(long lpjFbxArrayBool, int pSize);
  /// void  Clear ()
  public static native void Clear(long lpjFbxArrayBool);
  /// bool *  GetArray () const
  public static native long GetArray(long lpjFbxArrayBool);
  /// void  AddArray (const FbxArray< bool > &pOther)
  public static native void AddArray(long lpjFbxArrayBool, Long pOther);
  /// void  AddArrayNoDuplicate (const FbxArray< bool > &pOther)
  public static native void AddArrayNoDuplicate(long lpjFbxArrayBool, Long pOther);
  /// void  RemoveArray (const FbxArray< bool > &pOther)
  public static native void RemoveArray(long lpjFbxArrayBool, Long pOther);
}
