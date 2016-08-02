//copyright by aerror 2016 
package fbxsdk;
//26 142 FbxVector2  --------------------
public class FbxVector2  {
  /// bool  IsZero (int pSize=2) const
  public static native boolean IsZero(long lpjFbxVector2, int pSize);
  /// void  FixIncorrectValue ()
  public static native void FixIncorrectValue(long lpjFbxVector2);
  /// FbxVector2 ()
  public static native long meCreate(  );
  /// FbxVector2 (const FbxVector2 &pVector2)
  public static native long meCreate1(   Long pVector2);
  /// FbxVector2 (double pX, double pY)
  public static native long meCreate2(   double pX, double pY);
  /// void  Set (double pX, double pY)
  public static native void Set(long lpjFbxVector2, double pX, double pY);
  /// double  DotProduct (const FbxVector2 &pVector) const
  public static native double DotProduct(long lpjFbxVector2, Long pVector);
  /// double  Length () const
  public static native double Length(long lpjFbxVector2);
  /// double  SquareLength () const
  public static native double SquareLength(long lpjFbxVector2);
  /// double  Distance (const FbxVector2 &pVector) const
  public static native double Distance(long lpjFbxVector2, Long pVector);
  /// void  Normalize ()
  public static native void Normalize(long lpjFbxVector2);
  /// void meDestroy(FbxVector2 * lpFbxVector2)
  public static native void meDestroy(long lpjFbxVector2);
}
