package fbxsdk;
//26 111 FbxDocumentInfo  --------------------
public class FbxDocumentInfo  {
  /// void  Clear ()
  public static native void Clear(long lpjFbxDocumentInfo);
  /// FbxThumbnail *  GetSceneThumbnail ()
  public static native long GetSceneThumbnail(long lpjFbxDocumentInfo);
  /// void  SetSceneThumbnail (FbxThumbnail *pSceneThumbnail)
  public static native void SetSceneThumbnail(long lpjFbxDocumentInfo, long pSceneThumbnail);
  /// FbxPropertyT< FbxString >  LastSavedUrl
  public static native void mepSetLastSavedUrl(long lpjFbxDocumentInfo, long lpFbxString);
  /// FbxPropertyT< FbxString >  LastSavedUrl
  public static native long mepGetLastSavedUrl(long lpjFbxDocumentInfo);
  /// FbxPropertyT< FbxString >  LastSavedUrl
  public static native long mptGetLastSavedUrl(long lpjFbxDocumentInfo);
  /// FbxPropertyT< FbxString >  Url
  public static native void mepSetUrl(long lpjFbxDocumentInfo, long lpFbxString);
  /// FbxPropertyT< FbxString >  Url
  public static native long mepGetUrl(long lpjFbxDocumentInfo);
  /// FbxPropertyT< FbxString >  Url
  public static native long mptGetUrl(long lpjFbxDocumentInfo);
  /// FbxPropertyT< FbxString >  Original_ApplicationVendor
  public static native void mepSetOriginal_ApplicationVendor(long lpjFbxDocumentInfo, long lpFbxString);
  /// FbxPropertyT< FbxString >  Original_ApplicationVendor
  public static native long mepGetOriginal_ApplicationVendor(long lpjFbxDocumentInfo);
  /// FbxPropertyT< FbxString >  Original_ApplicationVendor
  public static native long mptGetOriginal_ApplicationVendor(long lpjFbxDocumentInfo);
  /// FbxPropertyT< FbxString >  Original_ApplicationName
  public static native void mepSetOriginal_ApplicationName(long lpjFbxDocumentInfo, long lpFbxString);
  /// FbxPropertyT< FbxString >  Original_ApplicationName
  public static native long mepGetOriginal_ApplicationName(long lpjFbxDocumentInfo);
  /// FbxPropertyT< FbxString >  Original_ApplicationName
  public static native long mptGetOriginal_ApplicationName(long lpjFbxDocumentInfo);
  /// FbxPropertyT< FbxString >  Original_ApplicationVersion
  public static native void mepSetOriginal_ApplicationVersion(long lpjFbxDocumentInfo, long lpFbxString);
  /// FbxPropertyT< FbxString >  Original_ApplicationVersion
  public static native long mepGetOriginal_ApplicationVersion(long lpjFbxDocumentInfo);
  /// FbxPropertyT< FbxString >  Original_ApplicationVersion
  public static native long mptGetOriginal_ApplicationVersion(long lpjFbxDocumentInfo);
  /// FbxPropertyT< FbxString >  Original_FileName
  public static native void mepSetOriginal_FileName(long lpjFbxDocumentInfo, long lpFbxString);
  /// FbxPropertyT< FbxString >  Original_FileName
  public static native long mepGetOriginal_FileName(long lpjFbxDocumentInfo);
  /// FbxPropertyT< FbxString >  Original_FileName
  public static native long mptGetOriginal_FileName(long lpjFbxDocumentInfo);
  /// FbxPropertyT< FbxDateTime >  Original_DateTime_GMT
  public static native void mepSetOriginal_DateTime_GMT(long lpjFbxDocumentInfo, long lpFbxDateTime);
  /// FbxPropertyT< FbxDateTime >  Original_DateTime_GMT
  public static native long mepGetOriginal_DateTime_GMT(long lpjFbxDocumentInfo);
  /// FbxPropertyT< FbxDateTime >  Original_DateTime_GMT
  public static native long mptGetOriginal_DateTime_GMT(long lpjFbxDocumentInfo);
  /// FbxPropertyT< FbxString >  LastSaved_ApplicationVendor
  public static native void mepSetLastSaved_ApplicationVendor(long lpjFbxDocumentInfo, long lpFbxString);
  /// FbxPropertyT< FbxString >  LastSaved_ApplicationVendor
  public static native long mepGetLastSaved_ApplicationVendor(long lpjFbxDocumentInfo);
  /// FbxPropertyT< FbxString >  LastSaved_ApplicationVendor
  public static native long mptGetLastSaved_ApplicationVendor(long lpjFbxDocumentInfo);
  /// FbxPropertyT< FbxString >  LastSaved_ApplicationName
  public static native void mepSetLastSaved_ApplicationName(long lpjFbxDocumentInfo, long lpFbxString);
  /// FbxPropertyT< FbxString >  LastSaved_ApplicationName
  public static native long mepGetLastSaved_ApplicationName(long lpjFbxDocumentInfo);
  /// FbxPropertyT< FbxString >  LastSaved_ApplicationName
  public static native long mptGetLastSaved_ApplicationName(long lpjFbxDocumentInfo);
  /// FbxPropertyT< FbxString >  LastSaved_ApplicationVersion
  public static native void mepSetLastSaved_ApplicationVersion(long lpjFbxDocumentInfo, long lpFbxString);
  /// FbxPropertyT< FbxString >  LastSaved_ApplicationVersion
  public static native long mepGetLastSaved_ApplicationVersion(long lpjFbxDocumentInfo);
  /// FbxPropertyT< FbxString >  LastSaved_ApplicationVersion
  public static native long mptGetLastSaved_ApplicationVersion(long lpjFbxDocumentInfo);
  /// FbxPropertyT< FbxDateTime >  LastSaved_DateTime_GMT
  public static native void mepSetLastSaved_DateTime_GMT(long lpjFbxDocumentInfo, long lpFbxDateTime);
  /// FbxPropertyT< FbxDateTime >  LastSaved_DateTime_GMT
  public static native long mepGetLastSaved_DateTime_GMT(long lpjFbxDocumentInfo);
  /// FbxPropertyT< FbxDateTime >  LastSaved_DateTime_GMT
  public static native long mptGetLastSaved_DateTime_GMT(long lpjFbxDocumentInfo);
  /// FbxPropertyT< FbxString >  EmbeddedUrl
  public static native void mepSetEmbeddedUrl(long lpjFbxDocumentInfo, long lpFbxString);
  /// FbxPropertyT< FbxString >  EmbeddedUrl
  public static native long mepGetEmbeddedUrl(long lpjFbxDocumentInfo);
  /// FbxPropertyT< FbxString >  EmbeddedUrl
  public static native long mptGetEmbeddedUrl(long lpjFbxDocumentInfo);
  /// FbxDocumentInfo * Create( FbxObject* lpFbxObject,  const char* pName )
  public static native long Create(   long lpFbxObject, String pName);
}
