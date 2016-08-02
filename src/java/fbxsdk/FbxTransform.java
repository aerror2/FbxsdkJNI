//copyright by aerror 2016 
package fbxsdk;
//26 82 FbxTransform  --------------------
public class FbxTransform  {
  public                 class   EInheritType  {
   public static final int eInheritRrSs = 0;
   public static final int eInheritRSrs = 1;
   public static final int eInheritRrs = 2;
}
  /// FbxTransform ()
  public static native long meCreate(  );
  /// EInheritType  GetInheritType ()
  public static native int GetInheritType(long lpjFbxTransform);
  /// void  SetInheritType (EInheritType pType)
  public static native void SetInheritType(long lpjFbxTransform, int pType);
  /// FbxLimits &  GetTranslationLimits ()
  public static native long GetTranslationLimits(long lpjFbxTransform);
  /// FbxLimits &  GetRotationLimits ()
  public static native long GetRotationLimits(long lpjFbxTransform);
  /// FbxLimits &  GetScalingLimits ()
  public static native long GetScalingLimits(long lpjFbxTransform);
  /// FbxRotationOrder &  GetRotationOrder ()
  public static native long GetRotationOrder(long lpjFbxTransform);
  /// bool  HasROffset ()
  public static native boolean HasROffset(long lpjFbxTransform);
  /// bool  HasRPivot ()
  public static native boolean HasRPivot(long lpjFbxTransform);
  /// bool  HasSOffset ()
  public static native boolean HasSOffset(long lpjFbxTransform);
  /// bool  HasSPivot ()
  public static native boolean HasSPivot(long lpjFbxTransform);
  /// bool  HasPreRM ()
  public static native boolean HasPreRM(long lpjFbxTransform);
  /// bool  HasPostRM ()
  public static native boolean HasPostRM(long lpjFbxTransform);
  /// void  SetROffset (FbxVector4 &pROffset)
  public static native void SetROffset(long lpjFbxTransform, Long pROffset);
  /// void  SetRPivot (FbxVector4 &pRPivot)
  public static native void SetRPivot(long lpjFbxTransform, Long pRPivot);
  /// void  SetSOffset (FbxVector4 &pSOffset)
  public static native void SetSOffset(long lpjFbxTransform, Long pSOffset);
  /// void  SetSPivot (FbxVector4 &pSPivot)
  public static native void SetSPivot(long lpjFbxTransform, Long pSPivot);
  /// void  SetPreRM (FbxVector4 &pPreR)
  public static native void SetPreRM(long lpjFbxTransform, Long pPreR);
  /// void  SetPostRM (FbxVector4 &pPostR)
  public static native void SetPostRM(long lpjFbxTransform, Long pPostR);
  /// bool  GetRotationSpaceForLimitOnly ()
  public static native boolean GetRotationSpaceForLimitOnly(long lpjFbxTransform);
  /// void  SetRotationSpaceForLimitOnly (bool pRotationSpaceForLimitOnly)
  public static native void SetRotationSpaceForLimitOnly(long lpjFbxTransform, boolean pRotationSpaceForLimitOnly);
  /// void  DoF2LT (FbxVector4 &pLT, FbxVector4 &pDoF, FbxAMatrix &pLRM, FbxAMatrix &pLSM)
  public static native void DoF2LT(long lpjFbxTransform, Long pLT, Long pDoF, Long pLRM, Long pLSM);
  /// void  LT2DoF (FbxVector4 &pDoF, FbxVector4 pLT, FbxAMatrix &pLRM, FbxAMatrix &pLSM)
  public static native void LT2DoF(long lpjFbxTransform, Long pDoF, long pLT, Long pLRM, Long pLSM);
  /// void  DoF2LRM (FbxAMatrix &pLRM, FbxVector4 &pRDoF, bool pForLimit=false)
  public static native void DoF2LRM(long lpjFbxTransform, Long pLRM, Long pRDoF, boolean pForLimit);
  /// void  LRM2DoF (FbxVector4 &pRDoF, FbxAMatrix &pLRM, bool pForLimit=false)
  public static native void LRM2DoF(long lpjFbxTransform, Long pRDoF, Long pLRM, boolean pForLimit);
  /// void  LSM2GSM (FbxAMatrix &pGSM, FbxAMatrix &pPGSM, FbxAMatrix &pLSM, FbxAMatrix &pLRM, FbxVector4 &pPLS)
  public static native void LSM2GSM(long lpjFbxTransform, Long pGSM, Long pPGSM, Long pLSM, Long pLRM, Long pPLS);
  /// void  GTRSM2GX (FbxAMatrix &pGX, FbxVector4 &pGT, FbxAMatrix &pGRM, FbxAMatrix &pGSM)
  public static native void GTRSM2GX(long lpjFbxTransform, Long pGX, Long pGT, Long pGRM, Long pGSM);
  /// void meDestroy(FbxTransform * lpFbxTransform)
  public static native void meDestroy(long lpjFbxTransform);
}
