package fbxsdk;
//26 69 FbxBitSet  --------------------
public class FbxBitSet  {
  /// FbxBitSet (const FbxUInt pInitialSize=0)
  public static native long meCreate(   int pInitialSize);
  /// virtual  ~FbxBitSet ()
  public static native void meDestroy(long lpjFbxBitSet);
  /// void  SetBit (const FbxUInt pBitIndex)
  public static native void SetBit(long lpjFbxBitSet, int pBitIndex);
  /// void  SetAllBits (const bool pValue)
  public static native void SetAllBits(long lpjFbxBitSet, boolean pValue);
  /// void  UnsetBit (const FbxUInt pBitIndex)
  public static native void UnsetBit(long lpjFbxBitSet, int pBitIndex);
  /// bool  GetBit (const FbxUInt pBitIndex) const
  public static native boolean GetBit(long lpjFbxBitSet, int pBitIndex);
  /// FbxUInt  GetFirstSetBitIndex () const
  public static native int GetFirstSetBitIndex(long lpjFbxBitSet);
  /// FbxUInt  GetLastSetBitIndex () const
  public static native int GetLastSetBitIndex(long lpjFbxBitSet);
  /// FbxUInt  GetNextSetBitIndex (const FbxUInt pBitIndex) const
  public static native int GetNextSetBitIndex(long lpjFbxBitSet, int pBitIndex);
  /// FbxUInt  GetPreviousSetBitIndex (const FbxUInt pBitIndex) const
  public static native int GetPreviousSetBitIndex(long lpjFbxBitSet, int pBitIndex);
}
