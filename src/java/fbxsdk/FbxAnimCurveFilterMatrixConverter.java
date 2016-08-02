//copyright by aerror 2016 
package fbxsdk;
//26 139 FbxAnimCurveFilterMatrixConverter  --------------------
public class FbxAnimCurveFilterMatrixConverter  {
  public    class   EMatrixIndex  {
   public static final int ePreGlobal = 0;
   public static final int ePreTranslate = 1;
   public static final int ePostTranslate = 2;
   public static final int ePreRotate = 3;
   public static final int ePostRotate = 4;
   public static final int ePreScale = 5;
   public static final int ePostScale = 6;
   public static final int ePostGlobal = 7;
   public static final int eScaleOffset = 8;
   public static final int eInactivePre = 9;
   public static final int eInactivePost = 10;
   public static final int eRotationPivot = 11;
   public static final int eScalingPivot = 12;
   public static final int eMatrixIndexCount = 13;
}
  /// FbxAnimCurveFilterMatrixConverter ()
  public static native long meCreate(  );
  /// virtual  ~FbxAnimCurveFilterMatrixConverter ()
  public static native void meDestroy(long lpjFbxAnimCurveFilterMatrixConverter);
  /// virtual bool  NeedApply (FbxAnimStack *pAnimStack, FbxStatus *pStatus=NULL)
  public static native boolean NeedApply(long lpjFbxAnimCurveFilterMatrixConverter, long pAnimStack, long pStatus);
  /// virtual bool  NeedApply (FbxObject *pObj, FbxAnimStack *pAnimStack, FbxStatus *pStatus=NULL)
  public static native boolean NeedApply1(long lpjFbxAnimCurveFilterMatrixConverter, long pObj, long pAnimStack, long pStatus);
  /// virtual bool  NeedApply (FbxAnimCurveNode *pCurveNode[3], FbxStatus *pStatus=NULL)
  public static native boolean NeedApply2(long lpjFbxAnimCurveFilterMatrixConverter, long [] pCurveNode, long pStatus);
  /// virtual bool  NeedApply (FbxAnimCurve &pCurve, FbxStatus *pStatus=NULL)
  public static native boolean NeedApply3(long lpjFbxAnimCurveFilterMatrixConverter, Long pCurve, long pStatus);
  /// virtual bool  Apply (FbxAnimStack *pAnimStack, FbxStatus *pStatus=NULL)
  public static native boolean Apply(long lpjFbxAnimCurveFilterMatrixConverter, long pAnimStack, long pStatus);
  /// virtual bool  Apply (FbxObject *pObj, FbxAnimStack *pAnimStack, FbxStatus *pStatus=NULL)
  public static native boolean Apply1(long lpjFbxAnimCurveFilterMatrixConverter, long pObj, long pAnimStack, long pStatus);
  /// virtual bool  Apply (FbxAnimCurveNode *pCurveNode[3], FbxStatus *pStatus=NULL)
  public static native boolean Apply2(long lpjFbxAnimCurveFilterMatrixConverter, long [] pCurveNode, long pStatus);
  /// virtual bool  Apply (FbxAnimCurve **pCurve, int pCount, FbxStatus *pStatus=NULL)
  public static native boolean Apply3(long lpjFbxAnimCurveFilterMatrixConverter, long [] pCurve, int pCount, long pStatus);
  /// bool  Apply (FbxAnimCurve **pCurve, double *pVals, FbxStatus *pStatus=NULL)
  public static native boolean Apply4(long lpjFbxAnimCurveFilterMatrixConverter, long [] pCurve, double [] pVals, long pStatus);
  /// virtual bool  Apply (FbxAnimCurve &pCurve, FbxStatus *pStatus=NULL)
  public static native boolean Apply5(long lpjFbxAnimCurveFilterMatrixConverter, Long pCurve, long pStatus);
  /// virtual void  Reset ()
  public static native void Reset(long lpjFbxAnimCurveFilterMatrixConverter);
  /// void  GetSourceMatrix (EMatrixIndex pIndex, FbxAMatrix &pMatrix) const
  public static native void GetSourceMatrix(long lpjFbxAnimCurveFilterMatrixConverter, int pIndex, Long pMatrix);
  /// void  SetSourceMatrix (EMatrixIndex pIndex, FbxAMatrix &pMatrix)
  public static native void SetSourceMatrix(long lpjFbxAnimCurveFilterMatrixConverter, int pIndex, Long pMatrix);
  /// void  GetDestMatrix (EMatrixIndex pIndex, FbxAMatrix &pMatrix) const
  public static native void GetDestMatrix(long lpjFbxAnimCurveFilterMatrixConverter, int pIndex, Long pMatrix);
  /// void  SetDestMatrix (EMatrixIndex pIndex, FbxAMatrix &pMatrix)
  public static native void SetDestMatrix(long lpjFbxAnimCurveFilterMatrixConverter, int pIndex, Long pMatrix);
  /// FbxTime  GetResamplingPeriod () const
  public static native long GetResamplingPeriod(long lpjFbxAnimCurveFilterMatrixConverter);
  /// void  SetResamplingPeriod (FbxTime &pResamplingPeriod)
  public static native void SetResamplingPeriod(long lpjFbxAnimCurveFilterMatrixConverter, Long pResamplingPeriod);
  /// bool  GetGenerateLastKeyExactlyAtEndTime () const
  public static native boolean GetGenerateLastKeyExactlyAtEndTime(long lpjFbxAnimCurveFilterMatrixConverter);
  /// void  SetGenerateLastKeyExactlyAtEndTime (bool pFlag)
  public static native void SetGenerateLastKeyExactlyAtEndTime(long lpjFbxAnimCurveFilterMatrixConverter, boolean pFlag);
  /// bool  GetResamplingOnFrameRateMultiple () const
  public static native boolean GetResamplingOnFrameRateMultiple(long lpjFbxAnimCurveFilterMatrixConverter);
  /// void  SetResamplingOnFrameRateMultiple (bool pFlag)
  public static native void SetResamplingOnFrameRateMultiple(long lpjFbxAnimCurveFilterMatrixConverter, boolean pFlag);
  /// bool  GetApplyUnroll () const
  public static native boolean GetApplyUnroll(long lpjFbxAnimCurveFilterMatrixConverter);
  /// void  SetApplyUnroll (bool pFlag)
  public static native void SetApplyUnroll(long lpjFbxAnimCurveFilterMatrixConverter, boolean pFlag);
  /// bool  GetApplyConstantKeyReducer () const
  public static native boolean GetApplyConstantKeyReducer(long lpjFbxAnimCurveFilterMatrixConverter);
  /// void  SetApplyConstantKeyReducer (bool pFlag)
  public static native void SetApplyConstantKeyReducer(long lpjFbxAnimCurveFilterMatrixConverter, boolean pFlag);
  /// bool  GetResampleTranslation () const
  public static native boolean GetResampleTranslation(long lpjFbxAnimCurveFilterMatrixConverter);
  /// void  SetResampleTranslation (bool pFlag)
  public static native void SetResampleTranslation(long lpjFbxAnimCurveFilterMatrixConverter, boolean pFlag);
  /// void  SetSrcRotateOrder (int pOrder)
  public static native void SetSrcRotateOrder(long lpjFbxAnimCurveFilterMatrixConverter, int pOrder);
  /// void  SetDestRotateOrder (int pOrder)
  public static native void SetDestRotateOrder(long lpjFbxAnimCurveFilterMatrixConverter, int pOrder);
  /// void  SetForceApply (bool pVal)
  public static native void SetForceApply(long lpjFbxAnimCurveFilterMatrixConverter, boolean pVal);
  /// bool  GetForceApply () const
  public static native boolean GetForceApply(long lpjFbxAnimCurveFilterMatrixConverter);
  /// virtual bool  NeedApply (FbxAnimCurve **pCurve, int pCount, FbxStatus *pStatus=NULL)
  public static native boolean NeedApply4(long lpjFbxAnimCurveFilterMatrixConverter, long [] pCurve, int pCount, long pStatus);
  /// virtual bool  NeedApply (FbxAnimCurveNode &pCurveNode, FbxStatus *pStatus=NULL)
  public static native boolean NeedApply5(long lpjFbxAnimCurveFilterMatrixConverter, Long pCurveNode, long pStatus);
  /// virtual bool  Apply (FbxAnimCurveNode &pCurveNode, FbxStatus *pStatus=NULL)
  public static native boolean Apply6(long lpjFbxAnimCurveFilterMatrixConverter, Long pCurveNode, long pStatus);
}
