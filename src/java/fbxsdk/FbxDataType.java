//copyright by aerror 2016 
package fbxsdk;
//26 95 FbxDataType  --------------------
public class FbxDataType  {
  /// bool  Valid () const
  public static native boolean Valid(long lpjFbxDataType);
  /// bool  Is (const FbxDataType &pDataType) const
  public static native boolean Is(long lpjFbxDataType, Long pDataType);
  /// EFbxType  GetType () const
  public static native int GetType(long lpjFbxDataType);
  /// const char *  GetName () const
  public static native String GetName(long lpjFbxDataType);
  /// const FbxPropertyHandle &  GetTypeInfoHandle () const
  public static native long GetTypeInfoHandle(long lpjFbxDataType);
  /// FbxDataType ()
  public static native long meCreate(  );
  /// FbxDataType (const FbxDataType &pDataType)
  public static native long meCreate1(   Long pDataType);
  /// void  Destroy ()
  public static native void Destroy(long lpjFbxDataType);
  /// FbxDataType (const FbxPropertyHandle &pTypeInfoHandle)
  public static native long meCreate2(   Long pTypeInfoHandle);
  /// ~FbxDataType ()
  public static native void meDestroy(long lpjFbxDataType);
}
