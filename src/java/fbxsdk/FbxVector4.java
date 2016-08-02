package fbxsdk;
//26 158 FbxVector4  --------------------
public class FbxVector4  {
  /// bool  IsZero (int pSize=4) const
  public static native boolean IsZero(long lpjFbxVector4, int pSize);
  /// void  FixIncorrectValue ()
  public static native void FixIncorrectValue(long lpjFbxVector4);
  /// FbxVector4 ()
  public static native long meCreate(  );
  /// FbxVector4 (const FbxVector4 &pVector4)
  public static native long meCreate1(   Long pVector4);
  /// FbxVector4 (double pX, double pY, double pZ, double pW=1.0)
  public static native long meCreate2(   double pX, double pY, double pZ, double pW);
  /// FbxVector4 (const double pValue[4])
  public static native long meCreate3(   double [] pValue);
  /// FbxVector4 (const FbxDouble3 &pValue)
  public static native long meCreate4(   Long pValue);
  /// void  Set (double pX, double pY, double pZ, double pW=1.0)
  public static native void Set(long lpjFbxVector4, double pX, double pY, double pZ, double pW);
  /// double  DotProduct (const FbxVector4 &pVector) const
  public static native double DotProduct(long lpjFbxVector4, Long pVector);
  /// FbxVector4  CrossProduct (const FbxVector4 &pVector) const
  public static native long CrossProduct(long lpjFbxVector4, Long pVector);
  /// double  Length () const
  public static native double Length(long lpjFbxVector4);
  /// double  SquareLength () const
  public static native double SquareLength(long lpjFbxVector4);
  /// double  Distance (const FbxVector4 &pVector) const
  public static native double Distance(long lpjFbxVector4, Long pVector);
  /// void  Normalize ()
  public static native void Normalize(long lpjFbxVector4);
  /// void  SetXYZ (const FbxQuaternion pQuat)
  public static native void SetXYZ(long lpjFbxVector4, long pQuat);
  /// void meDestroy(FbxVector4 * lpFbxVector4)
  public static native void meDestroy(long lpjFbxVector4);
}
