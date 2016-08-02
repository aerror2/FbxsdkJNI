package fbxsdk;
//26 163 FbxAMatrix  --------------------
public class FbxAMatrix  {
  /// bool  IsIdentity (const double pThreshold=FBXSDK_TOLERANCE)
  public static native boolean IsIdentity(long lpjFbxAMatrix, double pThreshold);
  /// FbxAMatrix ()
  public static native long meCreate(  );
  /// FbxAMatrix (const FbxAMatrix &pOther)
  public static native long meCreate1(   Long pOther);
  /// FbxAMatrix (const FbxVector4 &pT, const FbxVector4 &pR, const FbxVector4 &pS)
  public static native long meCreate2(   Long pT, Long pR, Long pS);
  /// ~FbxAMatrix ()
  public static native void meDestroy(long lpjFbxAMatrix);
  /// double  Get (int pY, int pX) const
  public static native double Get(long lpjFbxAMatrix, int pY, int pX);
  /// FbxVector4  GetT () const
  public static native long GetT(long lpjFbxAMatrix);
  /// FbxVector4  GetR () const
  public static native long GetR(long lpjFbxAMatrix);
  /// FbxQuaternion  GetQ () const
  public static native long GetQ(long lpjFbxAMatrix);
  /// FbxVector4  GetS () const
  public static native long GetS(long lpjFbxAMatrix);
  /// FbxVector4  GetRow (int pY) const
  public static native long GetRow(long lpjFbxAMatrix, int pY);
  /// FbxVector4  GetColumn (int pX) const
  public static native long GetColumn(long lpjFbxAMatrix, int pX);
  /// void  SetIdentity ()
  public static native void SetIdentity(long lpjFbxAMatrix);
  /// void  SetT (const FbxVector4 &pT)
  public static native void SetT(long lpjFbxAMatrix, Long pT);
  /// void  SetR (const FbxVector4 &pR)
  public static native void SetR(long lpjFbxAMatrix, Long pR);
  /// void  SetQ (const FbxQuaternion &pQ)
  public static native void SetQ(long lpjFbxAMatrix, Long pQ);
  /// void  SetS (const FbxVector4 &pS)
  public static native void SetS(long lpjFbxAMatrix, Long pS);
  /// void  SetTRS (const FbxVector4 &pT, const FbxVector4 &pR, const FbxVector4 &pS)
  public static native void SetTRS(long lpjFbxAMatrix, Long pT, Long pR, Long pS);
  /// void  SetTQS (const FbxVector4 &pT, const FbxQuaternion &pQ, const FbxVector4 &pS)
  public static native void SetTQS(long lpjFbxAMatrix, Long pT, Long pQ, Long pS);
  /// FbxVector4  MultT (const FbxVector4 &pVector4) const
  public static native long MultT(long lpjFbxAMatrix, Long pVector4);
  /// FbxVector4  MultR (const FbxVector4 &pVector4) const
  public static native long MultR(long lpjFbxAMatrix, Long pVector4);
  /// FbxQuaternion  MultQ (const FbxQuaternion &pQuaternion) const
  public static native long MultQ(long lpjFbxAMatrix, Long pQuaternion);
  /// FbxVector4  MultS (const FbxVector4 &pVector4) const
  public static native long MultS(long lpjFbxAMatrix, Long pVector4);
  /// FbxAMatrix  Inverse () const
  public static native long Inverse(long lpjFbxAMatrix);
  /// FbxAMatrix  Transpose () const
  public static native long Transpose(long lpjFbxAMatrix);
  /// kDouble44 &  Double44 () const
  public static native long Double44(long lpjFbxAMatrix);
}
