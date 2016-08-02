package fbxsdk;
//26 223 FbxString  --------------------
public class FbxString  {
  public                   class   EPaddingType  {
   public static final int eRight = 0;
   public static final int eLeft = 1;
   public static final int eBoth = 2;
}
  /// FbxString ()
  public static native long meCreate(  );
  /// FbxString (const FbxString &pString)
  public static native long meCreate1(   Long pString);
  /// FbxString (const char *pString)
  public static native long meCreate2(   String pString);
  /// FbxString (char pChar, size_t pNbRepeat=1)
  public static native long meCreate3(   byte pChar, long pNbRepeat);
  /// FbxString (const char *pCharPtr, size_t pLength)
  public static native long meCreate4(   String pCharPtr, long pLength);
  /// FbxString (const int pValue)
  public static native long meCreate5(   int pValue);
  /// FbxString (const float pValue)
  public static native long meCreate6(   float pValue);
  /// FbxString (const double pValue)
  public static native long meCreate7(   double pValue);
  /// ~FbxString ()
  public static native void meDestroy(long lpjFbxString);
  /// size_t  GetLen () const
  public static native long GetLen(long lpjFbxString);
  /// size_t  Size () const
  public static native long Size(long lpjFbxString);
  /// bool  IsEmpty () const
  public static native boolean IsEmpty(long lpjFbxString);
  /// FbxString &  Clear ()
  public static native long Clear(long lpjFbxString);
  /// char *  Buffer ()
  public static native String Buffer(long lpjFbxString);
  /// const char *  Buffer () const
  public static native String Buffer1(long lpjFbxString);
  /// const FbxString &  Copy (const char *pString, size_t pLength)
  public static native long Copy(long lpjFbxString, String pString, long pLength);
  /// const FbxString &  Append (const char *pString, size_t pLength)
  public static native long Append(long lpjFbxString, String pString, long pLength);
  /// int  Compare (const char *pString) const
  public static native int Compare(long lpjFbxString, String pString);
  /// int  CompareNoCase (const char *pString) const
  public static native int CompareNoCase(long lpjFbxString, String pString);
  /// void  Swap (FbxString &pString)
  public static native void Swap(long lpjFbxString, Long pString);
  /// FbxString  Upper () const
  public static native long Upper(long lpjFbxString);
  /// FbxString  Lower () const
  public static native long Lower(long lpjFbxString);
  /// FbxString  Mid (size_t pFirst, size_t pCount) const
  public static native long Mid(long lpjFbxString, long pFirst, long pCount);
  /// FbxString  Mid (size_t pFirst) const
  public static native long Mid1(long lpjFbxString, long pFirst);
  /// FbxString  Left (size_t pCount) const
  public static native long Left(long lpjFbxString, long pCount);
  /// FbxString  Right (size_t pCount) const
  public static native long Right(long lpjFbxString, long pCount);
  /// FbxString  Pad (EPaddingType pPadding, size_t pLen, char pCar=' ') const
  public static native long Pad(long lpjFbxString, int pPadding, long pLen, byte pCar);
  /// FbxString  UnPad (EPaddingType pPadding) const
  public static native long UnPad(long lpjFbxString, int pPadding);
  /// int  Find (char pChar, size_t pStartPosition=0) const
  public static native int Find(long lpjFbxString, byte pChar, long pStartPosition);
  /// int  Find (const char *pStrSub, size_t pStartPosition=0) const
  public static native int Find1(long lpjFbxString, String pStrSub, long pStartPosition);
  /// int  ReverseFind (char pChar) const
  public static native int ReverseFind(long lpjFbxString, byte pChar);
  /// int  FindOneOf (const char *pStrCharSet, size_t pStartPosition=0) const
  public static native int FindOneOf(long lpjFbxString, String pStrCharSet, long pStartPosition);
  /// bool  FindAndReplace (const char *pFind, const char *pReplaceBy, size_t pStartPosition=0)
  public static native boolean FindAndReplace(long lpjFbxString, String pFind, String pReplaceBy, long pStartPosition);
  /// bool  ReplaceAll (const char *pFind, const char *pReplaceBy)
  public static native boolean ReplaceAll(long lpjFbxString, String pFind, String pReplaceBy);
  /// bool  ReplaceAll (char pFind, char pReplaceBy)
  public static native boolean ReplaceAll1(long lpjFbxString, byte pFind, byte pReplaceBy);
  /// int  GetTokenCount (const char *pSpans) const
  public static native int GetTokenCount(long lpjFbxString, String pSpans);
  /// FbxString  GetToken (int pTokenIndex, const char *pSpans) const
  public static native long GetToken(long lpjFbxString, int pTokenIndex, String pSpans);
}
