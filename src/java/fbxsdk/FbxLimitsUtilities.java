package fbxsdk;
//26 85 FbxLimitsUtilities  --------------------
public class FbxLimitsUtilities  {
  public                 class   EType  {
   public static final int eTranslation = 0;
   public static final int eRotation = 1;
   public static final int eScaling = 2;
}
  public                 class   ERotationType  {
   public static final int eQuaternion = 0;
   public static final int eEuler = 1;
}
  public                 class   ERotationClampType  {
   public static final int eRectangular = 0;
   public static final int eEllipsoid = 1;
}
  /// FbxLimitsUtilities (FbxNode *pNode)
  public static native long meCreate(   long pNode);
  /// void  SetAuto (EType pType, bool pAuto)
  public static native void SetAuto(long lpjFbxLimitsUtilities, int pType, boolean pAuto);
  /// bool  GetAuto (EType pType) const
  public static native boolean GetAuto(long lpjFbxLimitsUtilities, int pType);
  /// void  SetEnable (EType pType, bool pEnable)
  public static native void SetEnable(long lpjFbxLimitsUtilities, int pType, boolean pEnable);
  /// bool  GetEnable (EType pType) const
  public static native boolean GetEnable(long lpjFbxLimitsUtilities, int pType);
  /// void  SetDefault (EType pType, FbxVector4 pDefault)
  public static native void SetDefault(long lpjFbxLimitsUtilities, int pType, long pDefault);
  /// FbxVector4  GetDefault (EType pType) const
  public static native long GetDefault(long lpjFbxLimitsUtilities, int pType);
  /// void  SetMin (EType pType, FbxVector4 pMin)
  public static native void SetMin(long lpjFbxLimitsUtilities, int pType, long pMin);
  /// FbxVector4  GetMin (EType pType) const
  public static native long GetMin(long lpjFbxLimitsUtilities, int pType);
  /// void  SetMax (EType pType, FbxVector4 pMax)
  public static native void SetMax(long lpjFbxLimitsUtilities, int pType, long pMax);
  /// FbxVector4  GetMax (EType pType) const
  public static native long GetMax(long lpjFbxLimitsUtilities, int pType);
  /// void  SetRotationType (ERotationType pType)
  public static native void SetRotationType(long lpjFbxLimitsUtilities, int pType);
  /// ERotationType  GetRotationType () const
  public static native int GetRotationType(long lpjFbxLimitsUtilities);
  /// ERotationClampType  GetRotationClampType () const
  public static native int GetRotationClampType(long lpjFbxLimitsUtilities);
  /// void  SetRotationAxis (FbxVector4 pRotationAxis)
  public static native void SetRotationAxis(long lpjFbxLimitsUtilities, long pRotationAxis);
  /// FbxVector4  GetRotationAxis () const
  public static native long GetRotationAxis(long lpjFbxLimitsUtilities);
  /// void  SetAxisLength (double pLength)
  public static native void SetAxisLength(long lpjFbxLimitsUtilities, double pLength);
  /// double  GetAxisLength () const
  public static native double GetAxisLength(long lpjFbxLimitsUtilities);
  /// void  UpdateAutomatic (FbxNode *pNode)
  public static native void UpdateAutomatic(long lpjFbxLimitsUtilities, long pNode);
  /// FbxVector4  GetEndPointTranslation (FbxNode *pNode) const
  public static native long GetEndPointTranslation(long lpjFbxLimitsUtilities, long pNode);
  /// FbxVector4  GetEndSite (FbxNode *pNode) const
  public static native long GetEndSite(long lpjFbxLimitsUtilities, long pNode);
  /// void meDestroy(FbxLimitsUtilities * lpFbxLimitsUtilities)
  public static native void meDestroy(long lpjFbxLimitsUtilities);
}
