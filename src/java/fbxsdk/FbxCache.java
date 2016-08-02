package fbxsdk;
//26 170 FbxCache  --------------------
public class FbxCache  {
  public    class   EFileFormat  {
   public static final int eUnknownFileFormat = 0;
   public static final int eMaxPointCacheV2 = 1;
   public static final int eMayaCache = 2;
}
  public    class   EMCFileCount  {
   public static final int eMCOneFile = 0;
   public static final int eMCOneFilePerFrame = 1;
}
  public    class   EMCDataType  {
   public static final int eUnknownData = 0;
   public static final int eDouble = 1;
   public static final int eDoubleArray = 2;
   public static final int eDoubleVectorArray = 3;
   public static final int eInt32Array = 4;
   public static final int eFloatArray = 5;
   public static final int eFloatVectorArray = 6;
}
  public    class   EMCBinaryFormat  {
   public static final int eMCC = 0;
   public static final int eMCX = 1;
}
  public    class   EMCSamplingType  {
   public static final int eSamplingRegular = 0;
   public static final int eSamplingIrregular = 1;
}
  /// bool  OpenFileForWrite (double pFrameStartOffset, double pSamplingFrameRate, unsigned int pSampleCount, unsigned int pPointCount, FbxStatus *pStatus=NULL)
  public static native boolean OpenFileForWrite(long lpjFbxCache, double pFrameStartOffset, double pSamplingFrameRate, int pSampleCount, int pPointCount, long pStatus);
  /// unsigned int  GetSampleCount (FbxStatus *pStatus=NULL)
  public static native int GetSampleCount(long lpjFbxCache, long pStatus);
  /// unsigned int  GetPointCount (FbxStatus *pStatus=NULL)
  public static native int GetPointCount(long lpjFbxCache, long pStatus);
  /// double  GetFrameStartOffset (FbxStatus *pStatus=NULL)
  public static native double GetFrameStartOffset(long lpjFbxCache, long pStatus);
  /// bool  Read (unsigned int pFrameIndex, double *pBuffer, unsigned int pPointCount, FbxStatus *pStatus=NULL)
  public static native boolean Read(long lpjFbxCache, int pFrameIndex, double [] pBuffer, int pPointCount, long pStatus);
  /// bool  Write (unsigned int pFrameIndex, double *pBuffer, FbxStatus *pStatus=NULL)
  public static native boolean Write(long lpjFbxCache, int pFrameIndex, double [] pBuffer, long pStatus);
  /// bool  ConvertFromPC2ToMC (EMCFileCount pFileCount, double pSamplingFrameRate, EMCBinaryFormat pBinaryFormat, FbxStatus *pStatus=NULL)
  public static native boolean ConvertFromPC2ToMC(long lpjFbxCache, int pFileCount, double pSamplingFrameRate, int pBinaryFormat, long pStatus);
  /// bool  ConvertFromMCToPC2 (double pSamplingFrameRate, unsigned int pChannelIndex, FbxStatus *pStatus=NULL)
  public static native boolean ConvertFromMCToPC2(long lpjFbxCache, double pSamplingFrameRate, int pChannelIndex, long pStatus);
  /// void  SetCacheFileFormat (EFileFormat pFileFormat, FbxStatus *pStatus=NULL)
  public static native void SetCacheFileFormat(long lpjFbxCache, int pFileFormat, long pStatus);
  /// EFileFormat  GetCacheFileFormat () const
  public static native int GetCacheFileFormat(long lpjFbxCache);
  /// void  SetCacheFileName (const char *pRelativeFileName_UTF8, const char *pAbsoluteFileName_UTF8, FbxStatus *pStatus=NULL)
  public static native void SetCacheFileName(long lpjFbxCache, String pRelativeFileName_UTF8, String pAbsoluteFileName_UTF8, long pStatus);
  /// void  GetCacheFileName (FbxString &pRelativeFileName_UTF8, FbxString &pAbsoluteFileName_UTF8) const
  public static native void GetCacheFileName(long lpjFbxCache, Long pRelativeFileName_UTF8, Long pAbsoluteFileName_UTF8);
  /// bool  OpenFileForRead (FbxStatus *pStatus=NULL)
  public static native boolean OpenFileForRead(long lpjFbxCache, long pStatus);
  /// bool  IsOpen (FbxStatus *pStatus=NULL) const
  public static native boolean IsOpen(long lpjFbxCache, long pStatus);
  /// bool  CloseFile (FbxStatus *pStatus=NULL)
  public static native boolean CloseFile(long lpjFbxCache, long pStatus);
  /// double  GetSamplingFrameRate (FbxStatus *pStatus=NULL)
  public static native double GetSamplingFrameRate(long lpjFbxCache, long pStatus);
  /// FbxTime  GetCacheTimePerFrame (FbxStatus *pStatus=NULL)
  public static native long GetCacheTimePerFrame(long lpjFbxCache, long pStatus);
  /// bool  OpenFileForWrite (EMCFileCount pFileCount, double pSamplingFrameRate, const char *pChannelName, EMCBinaryFormat pBinaryFormat, EMCDataType pMCDataType=eDoubleVectorArray, const char *pInterpretation="Points", FbxStatus *pStatus=NULL)
  public static native boolean OpenFileForWrite1(long lpjFbxCache, int pFileCount, double pSamplingFrameRate, String pChannelName, int pBinaryFormat, int pMCDataType, String pInterpretation, long pStatus);
  /// bool  AddChannel (const char *pChannelName, EMCDataType pMCDataType, const char *pInterpretation, unsigned int &pChannelIndex, FbxStatus *pStatus=NULL)
  public static native boolean AddChannel(long lpjFbxCache, String pChannelName, int pMCDataType, String pInterpretation, Integer pChannelIndex, long pStatus);
  /// int  GetChannelCount (FbxStatus *pStatus=NULL)
  public static native int GetChannelCount(long lpjFbxCache, long pStatus);
  /// bool  GetChannelName (int pChannelIndex, FbxString &pChannelName, FbxStatus *pStatus=NULL)
  public static native boolean GetChannelName(long lpjFbxCache, int pChannelIndex, Long pChannelName, long pStatus);
  /// bool  GetChannelDataType (int pChannelIndex, EMCDataType &pChannelType, FbxStatus *pStatus=NULL)
  public static native boolean GetChannelDataType(long lpjFbxCache, int pChannelIndex, Integer pChannelType, long pStatus);
  /// int  GetChannelIndex (const char *pChannelName, FbxStatus *pStatus=NULL)
  public static native int GetChannelIndex(long lpjFbxCache, String pChannelName, long pStatus);
  /// bool  Read (int pChannelIndex, FbxTime &pTime, double *pBuffer, unsigned int pPointCount, FbxStatus *pStatus=NULL)
  public static native boolean Read1(long lpjFbxCache, int pChannelIndex, Long pTime, double [] pBuffer, int pPointCount, long pStatus);
  /// bool  Read (int pChannelIndex, FbxTime &pTime, float *pBuffer, unsigned int pPointCount, FbxStatus *pStatus=NULL)
  public static native boolean Read2(long lpjFbxCache, int pChannelIndex, Long pTime, float [] pBuffer, int pPointCount, long pStatus);
  /// bool  Read (int pChannelIndex, FbxTime &pTime, int *pBuffer, unsigned int pPointCount, FbxStatus *pStatus=NULL)
  public static native boolean Read3(long lpjFbxCache, int pChannelIndex, Long pTime, int [] pBuffer, int pPointCount, long pStatus);
  /// bool  BeginWriteAt (FbxTime &pTime, FbxStatus *pStatus=NULL)
  public static native boolean BeginWriteAt(long lpjFbxCache, Long pTime, long pStatus);
  /// bool  Write (int pChannelIndex, FbxTime &pTime, double *pBuffer, unsigned int pPointCount, FbxStatus *pStatus=NULL)
  public static native boolean Write1(long lpjFbxCache, int pChannelIndex, Long pTime, double [] pBuffer, int pPointCount, long pStatus);
  /// bool  Write (int pChannelIndex, FbxTime &pTime, float *pBuffer, unsigned int pPointCount, FbxStatus *pStatus=NULL)
  public static native boolean Write2(long lpjFbxCache, int pChannelIndex, Long pTime, float [] pBuffer, int pPointCount, long pStatus);
  /// bool  Write (int pChannelIndex, FbxTime &pTime, int *pBuffer, unsigned int pPointCount, FbxStatus *pStatus=NULL)
  public static native boolean Write3(long lpjFbxCache, int pChannelIndex, Long pTime, int [] pBuffer, int pPointCount, long pStatus);
  /// bool  EndWriteAt (FbxStatus *pStatus=NULL)
  public static native boolean EndWriteAt(long lpjFbxCache, long pStatus);
  /// bool  GetAnimationRange (int pChannelIndex, FbxTime &pTimeStart, FbxTime &pTimeEnd, FbxStatus *pStatus=NULL)
  public static native boolean GetAnimationRange(long lpjFbxCache, int pChannelIndex, Long pTimeStart, Long pTimeEnd, long pStatus);
  /// bool  GetCacheType (EMCFileCount &pFileCount, FbxStatus *pStatus=NULL)
  public static native boolean GetCacheType(long lpjFbxCache, Integer pFileCount, long pStatus);
  /// bool  GetChannelInterpretation (int pChannelIndex, FbxString &pInterpretation, FbxStatus *pStatus=NULL)
  public static native boolean GetChannelInterpretation(long lpjFbxCache, int pChannelIndex, Long pInterpretation, long pStatus);
  /// bool  GetChannelSamplingType (int pChannelIndex, EMCSamplingType &pSamplingType, FbxStatus *pStatus=NULL)
  public static native boolean GetChannelSamplingType(long lpjFbxCache, int pChannelIndex, Integer pSamplingType, long pStatus);
  /// bool  GetChannelSamplingRate (int pChannelIndex, FbxTime &pSamplingRate, FbxStatus *pStatus=NULL)
  public static native boolean GetChannelSamplingRate(long lpjFbxCache, int pChannelIndex, Long pSamplingRate, long pStatus);
  /// bool  GetChannelSampleCount (int pChannelIndex, unsigned int &pSampleCount, FbxStatus *pStatus=NULL)
  public static native boolean GetChannelSampleCount(long lpjFbxCache, int pChannelIndex, Integer pSampleCount, long pStatus);
  /// bool  GetChannelPointCount (int pChannelIndex, FbxTime pTime, unsigned int &pPointCount, FbxStatus *pStatus=NULL)
  public static native boolean GetChannelPointCount(long lpjFbxCache, int pChannelIndex, long pTime, Integer pPointCount, long pStatus);
  /// int  GetCacheDataFileCount (FbxStatus *pStatus=NULL) const
  public static native int GetCacheDataFileCount(long lpjFbxCache, long pStatus);
  /// bool  GetCacheDataFileName (int pIndex, FbxString &pRelativeFileName, FbxString &pAbsoluteFileName, FbxStatus *pStatus=NULL)
  public static native boolean GetCacheDataFileName(long lpjFbxCache, int pIndex, Long pRelativeFileName, Long pAbsoluteFileName, long pStatus);
  /// bool  EnableMultiChannelFetching (bool pMultiChannelFetching, FbxStatus *pStatus=NULL)
  public static native boolean EnableMultiChannelFetching(long lpjFbxCache, boolean pMultiChannelFetching, long pStatus);
  /// bool  GetNextTimeWithData (FbxTime pCurTime, FbxTime &pNextTime, int pChannelIndex=-1, FbxStatus *pStatus=NULL)
  public static native boolean GetNextTimeWithData(long lpjFbxCache, long pCurTime, Long pNextTime, int pChannelIndex, long pStatus);
  /// int  GetDataCount (int pChannelIndex, FbxStatus *pStatus=NULL)
  public static native int GetDataCount(long lpjFbxCache, int pChannelIndex, long pStatus);
  /// bool  GetDataTime (int pChannelIndex, unsigned int pDataIndex, FbxTime &pTime, FbxStatus *pStatus=NULL)
  public static native boolean GetDataTime(long lpjFbxCache, int pChannelIndex, int pDataIndex, Long pTime, long pStatus);
  /// FbxCache * Create( FbxObject* lpFbxObject,  const char* pName )
  public static native long Create(   long lpFbxObject, String pName);
}
