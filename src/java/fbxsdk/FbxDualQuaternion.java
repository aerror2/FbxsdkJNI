//copyright by aerror 2016 
package fbxsdk;
//26 149 FbxDualQuaternion  --------------------
public class FbxDualQuaternion  {
  /// FbxDualQuaternion ()
  public static native long meCreate(  );
  /// FbxDualQuaternion (const FbxQuaternion &pV1, const FbxQuaternion &pV2)
  public static native long meCreate1(   Long pV1, Long pV2);
  /// FbxDualQuaternion (const FbxDualQuaternion &pV)
  public static native long meCreate2(   Long pV);
  /// FbxDualQuaternion (const FbxQuaternion &pRotation, const FbxVector4 &pTranslation)
  public static native long meCreate3(   Long pRotation, Long pTranslation);
  /// FbxDualQuaternion (double pX1, double pY1, double pZ1, double pW1, double pX2, double pY2, double pZ2, double pW2)
  public static native long meCreate4(   double pX1, double pY1, double pZ1, double pW1, double pX2, double pY2, double pZ2, double pW2);
  /// ~FbxDualQuaternion ()
  public static native void meDestroy(long lpjFbxDualQuaternion);
  /// void  Set (double pX1, double pY1, double pZ1, double pW1, double pX2, double pY2, double pZ2, double pW2)
  public static native void Set(long lpjFbxDualQuaternion, double pX1, double pY1, double pZ1, double pW1, double pX2, double pY2, double pZ2, double pW2);
  /// FbxQuaternion &  GetFirstQuaternion ()
  public static native long GetFirstQuaternion(long lpjFbxDualQuaternion);
  /// FbxQuaternion &  GetSecondQuaternion ()
  public static native long GetSecondQuaternion(long lpjFbxDualQuaternion);
  /// const FbxQuaternion &  GetFirstQuaternion () const
  public static native long GetFirstQuaternion1(long lpjFbxDualQuaternion);
  /// const FbxQuaternion &  GetSecondQuaternion () const
  public static native long GetSecondQuaternion1(long lpjFbxDualQuaternion);
  /// FbxQuaternion  GetRotation () const
  public static native long GetRotation(long lpjFbxDualQuaternion);
  /// FbxVector4  GetTranslation () const
  public static native long GetTranslation(long lpjFbxDualQuaternion);
  /// FbxDualQuaternion  Product (const FbxDualQuaternion &pDualQuaternion) const
  public static native long Product(long lpjFbxDualQuaternion, Long pDualQuaternion);
  /// void  Normalize ()
  public static native void Normalize(long lpjFbxDualQuaternion);
  /// void  Inverse ()
  public static native void Inverse(long lpjFbxDualQuaternion);
  /// FbxVector4  Deform (FbxVector4 &pPoint)
  public static native long Deform(long lpjFbxDualQuaternion, Long pPoint);
  /// void  Conjugate ()
  public static native void Conjugate(long lpjFbxDualQuaternion);
  /// void  Dual ()
  public static native void Dual(long lpjFbxDualQuaternion);
  /// void  DualConjugate ()
  public static native void DualConjugate(long lpjFbxDualQuaternion);
}
