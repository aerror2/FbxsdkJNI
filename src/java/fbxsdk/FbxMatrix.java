//copyright by aerror 2016 
package fbxsdk;
//26 144 FbxMatrix  --------------------
public class FbxMatrix  {
  /// FbxMatrix ()
  public static native long meCreate(  );
  /// FbxMatrix (const FbxMatrix &pM)
  public static native long meCreate1(   Long pM);
  /// FbxMatrix (const FbxVector4 &pT, const FbxVector4 &pR, const FbxVector4 &pS)
  public static native long meCreate2(   Long pT, Long pR, Long pS);
  /// FbxMatrix (const FbxVector4 &pT, const FbxQuaternion &pQ, const FbxVector4 &pS)
  public static native long meCreate3(   Long pT, Long pQ, Long pS);
  /// FbxMatrix (const double p00, const double p10, const double p20, const double p30, const double p01, const double p11, const double p21, const double p31, const double p02, const double p12, const double p22, const double p32, const double p03, const double p13, const double p23, const double p33)
  public static native long meCreate4(   double p00, double p10, double p20, double p30, double p01, double p11, double p21, double p31, double p02, double p12, double p22, double p32, double p03, double p13, double p23, double p33);
  /// FbxMatrix (const FbxAMatrix &pM)
  public static native long meCreate5(   Long pM);
  /// ~FbxMatrix ()
  public static native void meDestroy(long lpjFbxMatrix);
  /// double  Get (int pY, int pX) const
  public static native double Get(long lpjFbxMatrix, int pY, int pX);
  /// FbxVector4  GetRow (int pY) const
  public static native long GetRow(long lpjFbxMatrix, int pY);
  /// FbxVector4  GetColumn (int pX) const
  public static native long GetColumn(long lpjFbxMatrix, int pX);
  /// void  Set (int pY, int pX, double pValue)
  public static native void Set(long lpjFbxMatrix, int pY, int pX, double pValue);
  /// void  SetIdentity ()
  public static native void SetIdentity(long lpjFbxMatrix);
  /// void  SetTRS (const FbxVector4 &pT, const FbxVector4 &pR, const FbxVector4 &pS)
  public static native void SetTRS(long lpjFbxMatrix, Long pT, Long pR, Long pS);
  /// void  SetTQS (const FbxVector4 &pT, const FbxQuaternion &pQ, const FbxVector4 &pS)
  public static native void SetTQS(long lpjFbxMatrix, Long pT, Long pQ, Long pS);
  /// void  SetRow (int pY, const FbxVector4 &pRow)
  public static native void SetRow(long lpjFbxMatrix, int pY, Long pRow);
  /// void  SetColumn (int pX, const FbxVector4 &pColumn)
  public static native void SetColumn(long lpjFbxMatrix, int pX, Long pColumn);
  /// void  GetElements (FbxVector4 &pTranslation, FbxQuaternion &pRotation, FbxVector4 &pShearing, FbxVector4 &pScaling, double &pSign) const
  public static native void GetElements(long lpjFbxMatrix, Long pTranslation, Long pRotation, Long pShearing, Long pScaling, Double pSign);
  /// FbxMatrix  Inverse () const
  public static native long Inverse(long lpjFbxMatrix);
  /// FbxMatrix  Transpose () const
  public static native long Transpose(long lpjFbxMatrix);
  /// FbxVector4  MultNormalize (const FbxVector4 &pVector) const
  public static native long MultNormalize(long lpjFbxMatrix, Long pVector);
  /// kDouble44 &  Double44 () const
  public static native long Double44(long lpjFbxMatrix);
}
