//copyright by aerror 2016 
package fbxsdk;
//26 138 FbxExporter  --------------------
public class FbxExporter  {
  /// virtual bool  Initialize (const char *pFileName, int pFileFormat=-1, FbxIOSettings *pIOSettings=NULL)
  public static native boolean Initialize(long lpjFbxExporter, String pFileName, int pFileFormat, long pIOSettings);
  /// virtual bool  Initialize (FbxStream *pStream, void *pStreamData=NULL, int pFileFormat=-1, FbxIOSettings *pIOSettings=NULL)
  public static native boolean Initialize1(long lpjFbxExporter, long pStream, long pStreamData, int pFileFormat, long pIOSettings);
  /// bool  GetExportOptions ()
  public static native boolean GetExportOptions(long lpjFbxExporter);
  /// FbxIOSettings *  GetIOSettings ()
  public static native long GetIOSettings(long lpjFbxExporter);
  /// void  SetIOSettings (FbxIOSettings *pIOSettings)
  public static native void SetIOSettings(long lpjFbxExporter, long pIOSettings);
  /// bool  Export (FbxDocument *pDocument, bool pNonBlocking=false)
  public static native boolean Export(long lpjFbxExporter, long pDocument, boolean pNonBlocking);
  /// bool  IsExporting (bool &pExportResult)
  public static native boolean IsExporting(long lpjFbxExporter, Boolean pExportResult);
  /// float  GetProgress (FbxString *pStatus=NULL)
  public static native float GetProgress(long lpjFbxExporter, long pStatus);
  /// void  SetProgressCallback (FbxProgressCallback pCallback, void *pArgs=NULL)
  public static native void SetProgressCallback(long lpjFbxExporter, long pCallback, long pArgs);
  /// int  GetFileFormat ()
  public static native int GetFileFormat(long lpjFbxExporter);
  /// bool  IsFBX ()
  public static native boolean IsFBX(long lpjFbxExporter);
  /// bool  SetFileExportVersion (FbxString pVersion, FbxSceneRenamer::ERenamingMode pRenamingMode)
  public static native boolean SetFileExportVersion(long lpjFbxExporter, long pVersion, int pRenamingMode);
  /// void  SetResamplingRate (double pResamplingRate)
  public static native void SetResamplingRate(long lpjFbxExporter, double pResamplingRate);
  /// void  SetDefaultRenderResolution (FbxString pCamName, FbxString pResolutionMode, double pW, double pH)
  public static native void SetDefaultRenderResolution(long lpjFbxExporter, long pCamName, long pResolutionMode, double pW, double pH);
  /// FbxIOFileHeaderInfo *  GetFileHeaderInfo ()
  public static native long GetFileHeaderInfo(long lpjFbxExporter);
  /// FbxExporter * Create( FbxIOBase* lpFbxIOBase,  const char* pName )
  public static native long Create(   long lpFbxIOBase, String pName);
}
