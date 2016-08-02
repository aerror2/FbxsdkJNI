package fbxsdk;
//26 89 FbxStream  --------------------
public class FbxStream  {
  public             class   EState  {
   public static final int eClosed = 0;
   public static final int eOpen = 1;
   public static final int eEmpty = 2;
}
  /// virtual EState  GetState ()=0
  public static native int GetState(long lpjFbxStream);
  /// virtual bool  Open (void *pStreamData)=0
  public static native boolean Open(long lpjFbxStream, long pStreamData);
  /// virtual bool  Close ()=0
  public static native boolean Close(long lpjFbxStream);
  /// virtual bool  Flush ()=0
  public static native boolean Flush(long lpjFbxStream);
  /// virtual int  Write (const void *pData, int pSize)=0
  public static native int Write(long lpjFbxStream, long pData, int pSize);
  /// virtual int  Read (void *pData, int pSize) const =0
  public static native int Read(long lpjFbxStream, long pData, int pSize);
  /// virtual char *  ReadString (char *pBuffer, int pMaxSize, bool pStopAtFirstWhiteSpace=false)
  public static native String ReadString(long lpjFbxStream, String pBuffer, int pMaxSize, boolean pStopAtFirstWhiteSpace);
  /// virtual int  GetReaderID () const =0
  public static native int GetReaderID(long lpjFbxStream);
  /// virtual int  GetWriterID () const =0
  public static native int GetWriterID(long lpjFbxStream);
  /// virtual void  Seek (const FbxInt64 &pOffset, const FbxFile::ESeekPos &pSeekPos)=0
  public static native void Seek(long lpjFbxStream, Long pOffset, Integer pSeekPos);
  /// virtual long  GetPosition () const =0
  public static native long GetPosition(long lpjFbxStream);
  /// virtual void  SetPosition (long pPosition)=0
  public static native void SetPosition(long lpjFbxStream, long pPosition);
  /// virtual int  GetError () const =0
  public static native int GetError(long lpjFbxStream);
  /// virtual void  ClearError ()=0
  public static native void ClearError(long lpjFbxStream);
//No Static CreateFunc
}
