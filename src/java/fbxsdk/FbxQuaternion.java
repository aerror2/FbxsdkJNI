//copyright by aerror 2016 
package fbxsdk;
//26 155 FbxQuaternion  --------------------
public class FbxQuaternion  {
  /// FbxQuaternion ()
  public static native long meCreate(  );
  /// FbxQuaternion (const FbxQuaternion &pV)
  public static native long meCreate1(   Long pV);
  /// FbxQuaternion (double pX, double pY, double pZ, double pW=1.0)
  public static native long meCreate2(   double pX, double pY, double pZ, double pW);
  /// ~FbxQuaternion ()
  public static native void meDestroy(long lpjFbxQuaternion);
  /// double  GetAt (int pIndex) const
  public static native double GetAt(long lpjFbxQuaternion, int pIndex);
  /// void  SetAt (int pIndex, double pValue)
  public static native void SetAt(long lpjFbxQuaternion, int pIndex, double pValue);
  /// void  Set (double pX, double pY, double pZ, double pW=1.0)
  public static native void Set(long lpjFbxQuaternion, double pX, double pY, double pZ, double pW);
  /// FbxQuaternion  Product (const FbxQuaternion &pOther) const
  public static native long Product(long lpjFbxQuaternion, Long pOther);
  /// double  DotProduct (const FbxQuaternion &pQuaternion) const
  public static native double DotProduct(long lpjFbxQuaternion, Long pQuaternion);
  /// void  Normalize ()
  public static native void Normalize(long lpjFbxQuaternion);
  /// void  Conjugate ()
  public static native void Conjugate(long lpjFbxQuaternion);
  /// double  Length ()
  public static native double Length(long lpjFbxQuaternion);
  /// void  Inverse ()
  public static native void Inverse(long lpjFbxQuaternion);
  /// void  ComposeSphericalXYZ (const FbxVector4 pEuler)
  public static native void ComposeSphericalXYZ(long lpjFbxQuaternion, long pEuler);
  /// FbxVector4  DecomposeSphericalXYZ () const
  public static native long DecomposeSphericalXYZ(long lpjFbxQuaternion);
  /// int  Compare (const FbxQuaternion &pQ2, const double pThreshold=FBXSDK_TOLERANCE) const
  public static native int Compare(long lpjFbxQuaternion, Long pQ2, double pThreshold);
}
