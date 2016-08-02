//copyright by aerror 2016 
package fbxsdk;
//26 70 FbxFolder  --------------------
public class FbxFolder  {
  public         class   EEntryType  {
   public static final int eRegularEntry = 0;
   public static final int eFolderEntry = 1;
}
  /// bool  Open (const char *pFolderPath_UTF8)
  public static native boolean Open(long lpjFbxFolder, String pFolderPath_UTF8);
  /// bool  Next ()
  public static native boolean Next(long lpjFbxFolder);
  /// EEntryType  GetEntryType () const
  public static native int GetEntryType(long lpjFbxFolder);
  /// FbxString  GetEntryName () const
  public static native long GetEntryName(long lpjFbxFolder);
  /// char *  GetEntryExtension () const
  public static native String GetEntryExtension(long lpjFbxFolder);
  /// void  Close ()
  public static native void Close(long lpjFbxFolder);
  /// bool  IsOpen () const
  public static native boolean IsOpen(long lpjFbxFolder);
//No Static CreateFunc
}
