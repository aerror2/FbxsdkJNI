//copyright by aerror 2016 
package fbxsdk;
//26 56 FbxBaseAllocator  --------------------
public class FbxBaseAllocator  {
  /// FbxBaseAllocator (const size_t pRecordSize)
  public static native long meCreate(   long pRecordSize);
  /// void  Reserve (const size_t pRecordCount)
  public static native void Reserve(long lpjFbxBaseAllocator, long pRecordCount);
  /// void *  AllocateRecords (const size_t pRecordCount=1)
  public static native long AllocateRecords(long lpjFbxBaseAllocator, long pRecordCount);
  /// void  FreeMemory (void *pRecord)
  public static native void FreeMemory(long lpjFbxBaseAllocator, long pRecord);
  /// size_t  GetRecordSize () const
  public static native long GetRecordSize(long lpjFbxBaseAllocator);
  /// void meDestroy(FbxBaseAllocator * lpFbxBaseAllocator)
  public static native void meDestroy(long lpjFbxBaseAllocator);
}
