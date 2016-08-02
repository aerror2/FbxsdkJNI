package fbxsdk;
//26 59 FbxStatistics  --------------------
public class FbxStatistics  {
  /// void  Reset ()
  public static native void Reset(long lpjFbxStatistics);
  /// int  GetNbItems () const
  public static native int GetNbItems(long lpjFbxStatistics);
  /// bool  GetItemPair (int pNum, FbxString &pItemName, int &pItemCount) const
  public static native boolean GetItemPair(long lpjFbxStatistics, int pNum, Long pItemName, Integer pItemCount);
  /// FbxStatistics ()
  public static native long meCreate(  );
  /// virtual  ~FbxStatistics ()
  public static native void meDestroy(long lpjFbxStatistics);
}
