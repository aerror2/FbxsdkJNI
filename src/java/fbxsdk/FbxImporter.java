//copyright by aerror 2016 
package fbxsdk;
//26 156 FbxImporter  --------------------
public class FbxImporter  {
  public                    class   EStreamOptionsGeneration  {
   public static final int eParseFile = 0;
   public static final int eDoNotParseFile = 1;
}
  /// virtual bool  Initialize (const char *pFileName, int pFileFormat=-1, FbxIOSettings *pIOSettings=NULL)
  public static native boolean Initialize(long lpjFbxImporter, String pFileName, int pFileFormat, long pIOSettings);
  /// virtual bool  Initialize (FbxStream *pStream, void *pStreamData=NULL, const int pFileFormat=-1, FbxIOSettings *pIOSettings=NULL)
  public static native boolean Initialize1(long lpjFbxImporter, long pStream, long pStreamData, int pFileFormat, long pIOSettings);
  /// void  GetFileVersion (int &pMajor, int &pMinor, int &pRevision)
  public static native void GetFileVersion(long lpjFbxImporter, Integer pMajor, Integer pMinor, Integer pRevision);
  /// bool  GetDefaultRenderResolution (FbxString &pCamName, FbxString &pResolutionMode, double &pW, double &pH)
  public static native boolean GetDefaultRenderResolution(long lpjFbxImporter, Long pCamName, Long pResolutionMode, Double pW, Double pH);
  /// FbxIOFileHeaderInfo *  GetFileHeaderInfo ()
  public static native long GetFileHeaderInfo(long lpjFbxImporter);
  /// bool  GetImportOptions (EStreamOptionsGeneration pStreamOptionsGeneration=eParseFile)
  public static native boolean GetImportOptions(long lpjFbxImporter, int pStreamOptionsGeneration);
  /// bool  GetImportOptions (FbxIO *pFbxObject)
  public static native boolean GetImportOptions1(long lpjFbxImporter, long pFbxObject);
  /// bool  Import (FbxDocument *pDocument, bool pNonBlocking=false)
  public static native boolean Import(long lpjFbxImporter, long pDocument, boolean pNonBlocking);
  /// bool  IsImporting (bool &pImportResult)
  public static native boolean IsImporting(long lpjFbxImporter, Boolean pImportResult);
  /// float  GetProgress (FbxString *pStatus=NULL)
  public static native float GetProgress(long lpjFbxImporter, long pStatus);
  /// void  SetProgressCallback (FbxProgressCallback pCallback, void *pArgs=NULL)
  public static native void SetProgressCallback(long lpjFbxImporter, long pCallback, long pArgs);
  /// void  SetEmbeddingExtractionFolder (const char *pExtractFolder)
  public static native void SetEmbeddingExtractionFolder(long lpjFbxImporter, String pExtractFolder);
  /// const char *  GetEmbeddingExtractionFolder ()
  public static native String GetEmbeddingExtractionFolder(long lpjFbxImporter);
  /// FbxIOSettings *  GetIOSettings ()
  public static native long GetIOSettings(long lpjFbxImporter);
  /// void  SetIOSettings (FbxIOSettings *pIOSettings)
  public static native void SetIOSettings(long lpjFbxImporter, long pIOSettings);
  /// int  GetAnimStackCount ()
  public static native int GetAnimStackCount(long lpjFbxImporter);
  /// FbxTakeInfo *  GetTakeInfo (int pIndex)
  public static native long GetTakeInfo(long lpjFbxImporter, int pIndex);
  /// FbxString  GetActiveAnimStackName ()
  public static native long GetActiveAnimStackName(long lpjFbxImporter);
  /// FbxDocumentInfo *  GetSceneInfo ()
  public static native long GetSceneInfo(long lpjFbxImporter);
  /// int  GetFileFormat ()
  public static native int GetFileFormat(long lpjFbxImporter);
  /// bool  IsFBX ()
  public static native boolean IsFBX(long lpjFbxImporter);
  /// FbxImporter * Create( FbxIOBase* lpFbxIOBase,  const char* pName )
  public static native long Create(   long lpFbxIOBase, String pName);
}
