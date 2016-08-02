package fbxsdk;
//26 206 FbxLayerElementArray  --------------------
public class FbxLayerElementArray  {
  public                                  class   ELockMode  {
   public static final int eReadLock  =  1;
   public static final int eWriteLock  =  2;
   public static final int eReadWriteLock  =  3;
}
  /// bool  IsInUse () const
  public static native boolean IsInUse(long lpjFbxLayerElementArray);
  /// int  ReadLock () const
  public static native int ReadLock(long lpjFbxLayerElementArray);
  /// int  ReadUnlock () const
  public static native int ReadUnlock(long lpjFbxLayerElementArray);
  /// bool  WriteLock () const
  public static native boolean WriteLock(long lpjFbxLayerElementArray);
  /// void  WriteUnlock () const
  public static native void WriteUnlock(long lpjFbxLayerElementArray);
  /// bool  ReadWriteLock () const
  public static native boolean ReadWriteLock(long lpjFbxLayerElementArray);
  /// void  ReadWriteUnlock () const
  public static native void ReadWriteUnlock(long lpjFbxLayerElementArray);
  /// virtual void *  GetLocked (ELockMode pLockMode, EFbxType pDataType)
  public static native long GetLocked(long lpjFbxLayerElementArray, int pLockMode, int pDataType);
  /// void *  GetLocked (ELockMode pLockMode=eReadWriteLock)
  public static native long GetLocked1(long lpjFbxLayerElementArray, int pLockMode);
  /// virtual void  Release (void **pDataPtr, EFbxType pDataType)
  public static native void Release(long lpjFbxLayerElementArray, long [] pDataPtr, int pDataType);
  /// void  Release (void **pDataPtr)
  public static native void Release1(long lpjFbxLayerElementArray, long [] pDataPtr);
  /// void  Release (long **pDataPtr, long *dummy)
  public static native void Release2(long lpjFbxLayerElementArray, Long [] pDataPtr, long [] dummy);
  /// virtual size_t  GetStride () const
  public static native long GetStride(long lpjFbxLayerElementArray);
  /// FbxLayerElementArray (EFbxType pDataType)
  public static native long meCreate(   int pDataType);
  /// virtual  ~FbxLayerElementArray ()
  public static native void meDestroy(long lpjFbxLayerElementArray);
  /// void  ClearStatus ()
  public static native void ClearStatus(long lpjFbxLayerElementArray);
  /// LockAccessStatus::ELockAccessStatus  GetStatus () const
  public static native int GetStatus(long lpjFbxLayerElementArray);
  /// bool  IsWriteLocked () const
  public static native boolean IsWriteLocked(long lpjFbxLayerElementArray);
  /// int  GetReadLockCount () const
  public static native int GetReadLockCount(long lpjFbxLayerElementArray);
  /// int  GetCount () const
  public static native int GetCount(long lpjFbxLayerElementArray);
  /// void  SetCount (int pCount)
  public static native void SetCount(long lpjFbxLayerElementArray, int pCount);
  /// void  Clear ()
  public static native void Clear(long lpjFbxLayerElementArray);
  /// void  Resize (int pItemCount)
  public static native void Resize(long lpjFbxLayerElementArray, int pItemCount);
  /// void  AddMultiple (int pItemCount)
  public static native void AddMultiple(long lpjFbxLayerElementArray, int pItemCount);
  /// int  Add (const void *pItem, EFbxType pValueType)
  public static native int Add(long lpjFbxLayerElementArray, long pItem, int pValueType);
  /// int  InsertAt (int pIndex, const void *pItem, EFbxType pValueType)
  public static native int InsertAt(long lpjFbxLayerElementArray, int pIndex, long pItem, int pValueType);
  /// void  SetAt (int pIndex, const void *pItem, EFbxType pValueType)
  public static native void SetAt(long lpjFbxLayerElementArray, int pIndex, long pItem, int pValueType);
  /// void  SetLast (const void *pItem, EFbxType pValueType)
  public static native void SetLast(long lpjFbxLayerElementArray, long pItem, int pValueType);
  /// void  RemoveAt (int pIndex, void **pItem, EFbxType pValueType)
  public static native void RemoveAt(long lpjFbxLayerElementArray, int pIndex, long [] pItem, int pValueType);
  /// void  RemoveLast (void **pItem, EFbxType pValueType)
  public static native void RemoveLast(long lpjFbxLayerElementArray, long [] pItem, int pValueType);
  /// bool  RemoveIt (void **pItem, EFbxType pValueType)
  public static native boolean RemoveIt(long lpjFbxLayerElementArray, long [] pItem, int pValueType);
  /// bool  GetAt (int pIndex, void **pItem, EFbxType pValueType) const
  public static native boolean GetAt(long lpjFbxLayerElementArray, int pIndex, long [] pItem, int pValueType);
  /// bool  GetFirst (void **pItem, EFbxType pValueType) const
  public static native boolean GetFirst(long lpjFbxLayerElementArray, long [] pItem, int pValueType);
  /// bool  GetLast (void **pItem, EFbxType pValueType) const
  public static native boolean GetLast(long lpjFbxLayerElementArray, long [] pItem, int pValueType);
  /// int  Find (const void *pItem, EFbxType pValueType) const
  public static native int Find(long lpjFbxLayerElementArray, long pItem, int pValueType);
  /// int  FindAfter (int pAfterIndex, const void *pItem, EFbxType pValueType) const
  public static native int FindAfter(long lpjFbxLayerElementArray, int pAfterIndex, long pItem, int pValueType);
  /// int  FindBefore (int pBeforeIndex, const void *pItem, EFbxType pValueType) const
  public static native int FindBefore(long lpjFbxLayerElementArray, int pBeforeIndex, long pItem, int pValueType);
  /// bool  IsEqual (const FbxLayerElementArray &pArray) const
  public static native boolean IsEqual(long lpjFbxLayerElementArray, Long pArray);
  /// int  Add (long const &pItem)
  public static native int Add1(long lpjFbxLayerElementArray, Long pItem);
  /// int  InsertAt (int pIndex, long const &pItem)
  public static native int InsertAt1(long lpjFbxLayerElementArray, int pIndex, Long pItem);
  /// void  SetAt (int pIndex, long const &pItem)
  public static native void SetAt1(long lpjFbxLayerElementArray, int pIndex, Long pItem);
  /// void  SetLast (long const &pItem)
  public static native void SetLast1(long lpjFbxLayerElementArray, Long pItem);
  /// void  RemoveAt (int pIndex, long *pItem)
  public static native void RemoveAt1(long lpjFbxLayerElementArray, int pIndex, long [] pItem);
  /// void  RemoveLast (long *pItem)
  public static native void RemoveLast1(long lpjFbxLayerElementArray, long [] pItem);
  /// bool  RemoveIt (long *pItem)
  public static native boolean RemoveIt1(long lpjFbxLayerElementArray, long [] pItem);
  /// bool  GetAt (int pIndex, long *pItem) const
  public static native boolean GetAt1(long lpjFbxLayerElementArray, int pIndex, long [] pItem);
  /// bool  GetFirst (long *pItem) const
  public static native boolean GetFirst1(long lpjFbxLayerElementArray, long [] pItem);
  /// bool  GetLast (long *pItem) const
  public static native boolean GetLast1(long lpjFbxLayerElementArray, long [] pItem);
  /// int  Find (long const &pItem) const
  public static native int Find1(long lpjFbxLayerElementArray, Long pItem);
  /// int  FindAfter (int pAfterIndex, long const &pItem) const
  public static native int FindAfter1(long lpjFbxLayerElementArray, int pAfterIndex, Long pItem);
  /// int  FindBefore (int pBeforeIndex, long const &pItem) const
  public static native int FindBefore1(long lpjFbxLayerElementArray, int pBeforeIndex, Long pItem);
  /// void  CopyTo (FbxArray< long > &pDst)
  public static native void CopyTo(long lpjFbxLayerElementArray, Long pDst);
}
