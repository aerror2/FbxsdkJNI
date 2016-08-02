package fbxsdk;
//26 128 FbxReader  --------------------
public class FbxReader  {
  public                                  class   EInfoRequest  {
   public static final int eInfoExtension = 0;
   public static final int eInfoDescriptions = 1;
   public static final int eReserved1  =  0xFBFB;
}
  public                                  class   EFileOpenSpecialFlags  {
   public static final int eParseForGlobalSettings  =  1;
   public static final int eParseForStatistics  =  2;
}
  /// FbxReader (FbxManager &pManager, int pID, FbxStatus &pStatus)
  public static native long meCreate(   Long pManager, int pID, Long pStatus);
  /// virtual  ~FbxReader ()
  public static native void meDestroy(long lpjFbxReader);
  /// virtual void  GetVersion (int &pMajor, int &pMinor, int &pRevision)
  public static native void GetVersion(long lpjFbxReader, Integer pMajor, Integer pMinor, Integer pRevision);
  /// virtual bool  FileOpen (char *pFileName)=0
  public static native boolean FileOpen(long lpjFbxReader, String pFileName);
  /// virtual bool  FileOpen (FbxStream *pStream, void *pStreamData)
  public static native boolean FileOpen1(long lpjFbxReader, long pStream, long pStreamData);
  /// virtual bool  FileClose ()=0
  public static native boolean FileClose(long lpjFbxReader);
  /// virtual bool  IsFileOpen ()=0
  public static native boolean IsFileOpen(long lpjFbxReader);
  /// virtual bool  GetReadOptions (bool pParseFileAsNeeded=true)=0
  public static native boolean GetReadOptions(long lpjFbxReader, boolean pParseFileAsNeeded);
  /// virtual bool  Read (FbxDocument *pDocument)=0
  public static native boolean Read(long lpjFbxReader, long pDocument);
  /// virtual void  PluginReadParameters (FbxObject &pParams)
  public static native void PluginReadParameters(long lpjFbxReader, Long pParams);
  /// virtual bool  FileOpen (char *pFileName, EFileOpenSpecialFlags pFlags)
  public static native boolean FileOpen2(long lpjFbxReader, String pFileName, int pFlags);
  /// virtual bool  GetAxisInfo (FbxAxisSystem *pAxisSystem, FbxSystemUnit *pSystemUnits)
  public static native boolean GetAxisInfo(long lpjFbxReader, long pAxisSystem, long pSystemUnits);
  /// virtual bool  GetStatistics (FbxStatistics *pStats)
  public static native boolean GetStatistics(long lpjFbxReader, long pStats);
  /// virtual bool  GetFrameRate (FbxTime::EMode &pTimeMode)
  public static native boolean GetFrameRate(long lpjFbxReader, Integer pTimeMode);
  /// virtual FbxDocumentInfo *  GetSceneInfo ()
  public static native long GetSceneInfo(long lpjFbxReader);
  /// virtual FbxArray< FbxTakeInfo * > *  GetTakeInfo ()
  public static native long GetTakeInfo(long lpjFbxReader);
  /// virtual bool  GetDefaultRenderResolution (FbxString &pCamName, FbxString &pResolutionMode, double &pW, double &pH)
  public static native boolean GetDefaultRenderResolution(long lpjFbxReader, Long pCamName, Long pResolutionMode, Double pW, Double pH);
  /// bool  IsGenuine ()
  public static native boolean IsGenuine(long lpjFbxReader);
  /// virtual FbxIOSettings *  GetIOSettings ()
  public static native long GetIOSettings(long lpjFbxReader);
  /// virtual void  SetIOSettings (FbxIOSettings *pIOSettings)
  public static native void SetIOSettings(long lpjFbxReader, long pIOSettings);
  /// virtual void  SetProgressHandler (FbxProgress *pProgress)
  public static native void SetProgressHandler(long lpjFbxReader, long pProgress);
  /// virtual void  SetEmbeddingExtractionFolder (const char *pExtractFolder)
  public static native void SetEmbeddingExtractionFolder(long lpjFbxReader, String pExtractFolder);
  /// virtual bool  SupportsStreams () const
  public static native boolean SupportsStreams(long lpjFbxReader);
}
