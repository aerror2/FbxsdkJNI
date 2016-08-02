//copyright by aerror 2016 
package fbxsdk;
//26 61 FbxHungryAllocator  --------------------
public class FbxHungryAllocator  {
  /// FbxHungryAllocator (size_t pRecordSize)
  public static native long meCreate(   long pRecordSize);
  /// FbxHungryAllocator (const FbxHungryAllocator &pOther)
  public static native long meCreate1(   Long pOther);
  /// ~FbxHungryAllocator ()
  public static native void meDestroy(long lpjFbxHungryAllocator);
  /// void  Reserve (const size_t pRecordCount)
  public static native void Reserve(long lpjFbxHungryAllocator, long pRecordCount);
  /// void *  AllocateRecords (const size_t pRecordCount=1)
  public static native long AllocateRecords(long lpjFbxHungryAllocator, long pRecordCount);
  /// void  FreeMemory (void *pRecord)
  public static native void FreeMemory(long lpjFbxHungryAllocator, long pRecord);
  /// size_t  GetRecordSize () const
  public static native long GetRecordSize(long lpjFbxHungryAllocator);
}
