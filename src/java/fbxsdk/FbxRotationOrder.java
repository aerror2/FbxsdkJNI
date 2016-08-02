package fbxsdk;
//26 51 FbxRotationOrder  --------------------
public class FbxRotationOrder  {
  /// FbxRotationOrder (int pOrder=FbxEuler::eOrderXYZ)
  public static native long meCreate(   int pOrder);
  /// int  GetOrder ()
  public static native int GetOrder(long lpjFbxRotationOrder);
  /// void  SetOrder (int pOrder)
  public static native void SetOrder(long lpjFbxRotationOrder, int pOrder);
  /// void  V2M (FbxAMatrix &pRM, const FbxVector4 &pV)
  public static native void V2M(long lpjFbxRotationOrder, Long pRM, Long pV);
  /// void  M2V (FbxVector4 &pV, FbxAMatrix &pRM)
  public static native void M2V(long lpjFbxRotationOrder, Long pV, Long pRM);
  /// bool  V2VRef (FbxVector4 &pVOut, FbxVector4 &pVIn, FbxVector4 &pVRef)
  public static native boolean V2VRef(long lpjFbxRotationOrder, Long pVOut, Long pVIn, Long pVRef);
  /// void meDestroy(FbxRotationOrder * lpFbxRotationOrder)
  public static native void meDestroy(long lpjFbxRotationOrder);
}
