package fbxsdk;
//26 80 FbxThumbnail  --------------------
public class FbxThumbnail  {
  public                     class   EDataFormat  {
   public static final int eRGB_24 = 0;
   public static final int eRGBA_32 = 1;
}
  public                     class   EImageSize  {
   public static final int eNotSet  =  0;
   public static final int e64x64  =  64;
   public static final int e128x128  =  128;
   public static final int eCustomSize  =  -1;
}
  /// void  SetDataFormat (EDataFormat pDataFormat)
  public static native void SetDataFormat(long lpjFbxThumbnail, int pDataFormat);
  /// EDataFormat  GetDataFormat () const
  public static native int GetDataFormat(long lpjFbxThumbnail);
  /// void  SetSize (EImageSize pImageSize)
  public static native void SetSize(long lpjFbxThumbnail, int pImageSize);
  /// EImageSize  GetSize () const
  public static native int GetSize(long lpjFbxThumbnail);
  /// unsigned long  GetSizeInBytes () const
  public static native long GetSizeInBytes(long lpjFbxThumbnail);
  /// bool  SetThumbnailImage (const FbxUChar *pImage)
  public static native boolean SetThumbnailImage(long lpjFbxThumbnail, byte [] pImage);
  /// FbxUChar *  GetThumbnailImage () const
  public static native long GetThumbnailImage(long lpjFbxThumbnail);
  /// FbxPropertyT< FbxInt >  CustomHeight
  public static native void mepSetCustomHeight(long lpjFbxThumbnail, int lpFbxInt);
  /// FbxPropertyT< FbxInt >  CustomHeight
  public static native int mepGetCustomHeight(long lpjFbxThumbnail);
  /// FbxPropertyT< FbxInt >  CustomHeight
  public static native long mptGetCustomHeight(long lpjFbxThumbnail);
  /// FbxPropertyT< FbxInt >  CustomWidth
  public static native void mepSetCustomWidth(long lpjFbxThumbnail, int lpFbxInt);
  /// FbxPropertyT< FbxInt >  CustomWidth
  public static native int mepGetCustomWidth(long lpjFbxThumbnail);
  /// FbxPropertyT< FbxInt >  CustomWidth
  public static native long mptGetCustomWidth(long lpjFbxThumbnail);
  /// FbxThumbnail * Create( FbxObject* lpFbxObject,  const char* pName )
  public static native long Create(   long lpFbxObject, String pName);
}
