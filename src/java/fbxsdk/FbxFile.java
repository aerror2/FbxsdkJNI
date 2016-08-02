package fbxsdk;
//26 108 FbxFile  --------------------
public class FbxFile  {
  public    class   EMode  {
   public static final int eNone = 0;
   public static final int eReadOnly = 1;
   public static final int eReadWrite = 2;
   public static final int eCreateWriteOnly = 3;
   public static final int eCreateReadWrite = 4;
   public static final int eCreateAppend = 5;
}
  public    class   ESeekPos  {
   public static final int eBegin = 0;
   public static final int eCurrent = 1;
   public static final int eEnd = 2;
}
  /// FbxFile ()
  public static native long meCreate(  );
  /// virtual  ~FbxFile ()
  public static native void meDestroy(long lpjFbxFile);
  /// virtual bool  Open (const char *pFileName_UTF8, const EMode pMode=eCreateReadWrite, const bool pBinary=true)
  public static native boolean Open(long lpjFbxFile, String pFileName_UTF8, int pMode, boolean pBinary);
  /// virtual bool  Open (FbxStream *pStream, void *pStreamData, const char *pMode)
  public static native boolean Open1(long lpjFbxFile, long pStream, long pStreamData, String pMode);
  /// virtual bool  Close ()
  public static native boolean Close(long lpjFbxFile);
  /// virtual void  Seek (const FbxInt64 pOffset, const ESeekPos pSeekPos=eBegin)
  public static native void Seek(long lpjFbxFile, long pOffset, int pSeekPos);
  /// virtual FbxInt64  Tell () const
  public static native long Tell(long lpjFbxFile);
  /// virtual size_t  Read (void *pDstBuf, const size_t pSize)
  public static native long Read(long lpjFbxFile, long pDstBuf, long pSize);
  /// virtual char *  ReadString (char *pDstBuf, const size_t pDstSize, bool pStopAtFirstWhiteSpace=false)
  public static native String ReadString(long lpjFbxFile, String pDstBuf, long pDstSize, boolean pStopAtFirstWhiteSpace);
  /// virtual size_t  Write (const void *pSrcBuf, const size_t pSize)
  public static native long Write(long lpjFbxFile, long pSrcBuf, long pSize);
  /// virtual bool  Truncate (const FbxInt64 pSize)
  public static native boolean Truncate(long lpjFbxFile, long pSize);
  /// virtual bool  EndOfFile () const
  public static native boolean EndOfFile(long lpjFbxFile);
  /// virtual FbxInt64  GetSize ()
  public static native long GetSize(long lpjFbxFile);
  /// virtual void  GetMemoryFileInfo (void **pMemPtr, size_t pSize)
  public static native void GetMemoryFileInfo(long lpjFbxFile, long [] pMemPtr, long pSize);
  /// bool  IsOpen () const
  public static native boolean IsOpen(long lpjFbxFile);
  /// bool  IsStream () const
  public static native boolean IsStream(long lpjFbxFile);
  /// const char *  GetFilePathName () const
  public static native String GetFilePathName(long lpjFbxFile);
  /// EMode  GetFileMode () const
  public static native int GetFileMode(long lpjFbxFile);
  /// int  GetLastError ()
  public static native int GetLastError(long lpjFbxFile);
  /// void  ClearError ()
  public static native void ClearError(long lpjFbxFile);
}
