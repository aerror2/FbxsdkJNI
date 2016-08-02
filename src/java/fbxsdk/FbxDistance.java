package fbxsdk;
//26 86 FbxDistance  --------------------
public class FbxDistance  {
  /// const FbxString  unitName () const
  public static native long unitName(long lpjFbxDistance);
  /// const float  internalValue () const
  public static native float internalValue(long lpjFbxDistance);
  /// const float  valueAs (const FbxSystemUnit &pUnit) const
  public static native float valueAs(long lpjFbxDistance, Long pUnit);
  /// FbxDistance ()
  public static native long meCreate(  );
  /// FbxDistance (float pValue, FbxSystemUnit pUnit)
  public static native long meCreate1(   float pValue, long pUnit);
  /// FbxDistance (float pValue, const char *pUnit)
  public static native long meCreate2(   float pValue, String pUnit);
  /// ~FbxDistance ()
  public static native void meDestroy(long lpjFbxDistance);
  /// const FbxSystemUnit  unit () const
  public static native long unit(long lpjFbxDistance);
  /// const float  value () const
  public static native float value(long lpjFbxDistance);
}
