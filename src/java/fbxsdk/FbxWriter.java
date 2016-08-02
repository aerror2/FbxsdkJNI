//copyright by aerror 2016 
package fbxsdk;
//26 137 FbxWriter  --------------------
public class FbxWriter  {
  public    class   EInfoRequest  {
   public static final int eInfoExtension = 0;
   public static final int eInfoDescriptions = 1;
   public static final int eInfoVersions = 2;
   public static final int eInfoCompatibleDesc = 3;
   public static final int eInfoUILabel = 4;
   public static final int eReserved1  =  0xFBFB;
}
  /// FbxWriter (FbxManager &pManager, int pID, FbxStatus &pStatus)
  public static native long meCreate(   Long pManager, int pID, Long pStatus);
  /// virtual  ~FbxWriter ()
  public static native void meDestroy(long lpjFbxWriter);
  /// virtual bool  FileCreate (char *pFileName)=0
  public static native boolean FileCreate(long lpjFbxWriter, String pFileName);
  /// virtual bool  FileCreate (FbxStream *pStream, void *pStreamData)
  public static native boolean FileCreate1(long lpjFbxWriter, long pStream, long pStreamData);
  /// virtual bool  FileClose ()=0
  public static native boolean FileClose(long lpjFbxWriter);
  /// virtual bool  IsFileOpen ()=0
  public static native boolean IsFileOpen(long lpjFbxWriter);
  /// virtual void  GetWriteOptions ()=0
  public static native void GetWriteOptions(long lpjFbxWriter);
  /// virtual bool  Write (FbxDocument *pDocument)=0
  public static native boolean Write(long lpjFbxWriter, long pDocument);
  /// virtual bool  PreprocessScene (FbxScene &pScene)=0
  public static native boolean PreprocessScene(long lpjFbxWriter, Long pScene);
  /// virtual bool  PostprocessScene (FbxScene &pScene)=0
  public static native boolean PostprocessScene(long lpjFbxWriter, Long pScene);
  /// virtual void  PluginWriteParameters (FbxObject &pParams)
  public static native void PluginWriteParameters(long lpjFbxWriter, Long pParams);
  /// virtual FbxNode *  FindRootNode (FbxScene &pScene)
  public static native long FindRootNode(long lpjFbxWriter, Long pScene);
  /// virtual bool  CheckSpaceInNodeNameRecursive (FbxNode *pNode, FbxString &pNodeNameList)
  public static native boolean CheckSpaceInNodeNameRecursive(long lpjFbxWriter, long pNode, Long pNodeNameList);
  /// bool  SetFileExportVersion (FbxString pVersion)
  public static native boolean SetFileExportVersion(long lpjFbxWriter, long pVersion);
  /// void  SetRenamingMode (FbxSceneRenamer::ERenamingMode pRenamingMode)
  public static native void SetRenamingMode(long lpjFbxWriter, int pRenamingMode);
  /// void  SetResamplingRate (double pResamplingRate)
  public static native void SetResamplingRate(long lpjFbxWriter, double pResamplingRate);
  /// bool  IsGenuine ()
  public static native boolean IsGenuine(long lpjFbxWriter);
  /// virtual FbxIOSettings *  GetIOSettings ()
  public static native long GetIOSettings(long lpjFbxWriter);
  /// virtual void  SetIOSettings (FbxIOSettings *pIOSettings)
  public static native void SetIOSettings(long lpjFbxWriter, long pIOSettings);
  /// virtual void  SetProgressHandler (FbxProgress *pProgress)
  public static native void SetProgressHandler(long lpjFbxWriter, long pProgress);
  /// virtual bool  SupportsStreams () const
  public static native boolean SupportsStreams(long lpjFbxWriter);
}
