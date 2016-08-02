//copyright by aerror 2016 
package fbxsdk;
//26 80 FbxAnimCurveFilterKeySync  --------------------
public class FbxAnimCurveFilterKeySync  {
  /// FbxAnimCurveFilterKeySync ()
  public static native long meCreate(  );
  /// virtual  ~FbxAnimCurveFilterKeySync ()
  public static native void meDestroy(long lpjFbxAnimCurveFilterKeySync);
  /// virtual bool  NeedApply (FbxAnimCurve **pCurve, int pCount, FbxStatus *pStatus=NULL)
  public static native boolean NeedApply(long lpjFbxAnimCurveFilterKeySync, long [] pCurve, int pCount, long pStatus);
  /// virtual bool  NeedApply (FbxAnimCurve &pCurve, FbxStatus *pStatus=NULL)
  public static native boolean NeedApply1(long lpjFbxAnimCurveFilterKeySync, Long pCurve, long pStatus);
  /// virtual bool  Apply (FbxAnimCurve **pCurve, int pCount, FbxStatus *pStatus=NULL)
  public static native boolean Apply(long lpjFbxAnimCurveFilterKeySync, long [] pCurve, int pCount, long pStatus);
  /// virtual bool  Apply (FbxAnimCurve &pCurve, FbxStatus *pStatus=NULL)
  public static native boolean Apply1(long lpjFbxAnimCurveFilterKeySync, Long pCurve, long pStatus);
  /// virtual bool  NeedApply (FbxAnimStack *pAnimStack, FbxStatus *pStatus=NULL)
  public static native boolean NeedApply2(long lpjFbxAnimCurveFilterKeySync, long pAnimStack, long pStatus);
  /// virtual bool  NeedApply (FbxObject *pObj, FbxAnimStack *pAnimStack, FbxStatus *pStatus=NULL)
  public static native boolean NeedApply3(long lpjFbxAnimCurveFilterKeySync, long pObj, long pAnimStack, long pStatus);
  /// virtual bool  NeedApply (FbxAnimCurveNode &pCurveNode, FbxStatus *pStatus=NULL)
  public static native boolean NeedApply4(long lpjFbxAnimCurveFilterKeySync, Long pCurveNode, long pStatus);
  /// virtual bool  Apply (FbxAnimStack *pAnimStack, FbxStatus *pStatus=NULL)
  public static native boolean Apply2(long lpjFbxAnimCurveFilterKeySync, long pAnimStack, long pStatus);
  /// virtual bool  Apply (FbxObject *pObj, FbxAnimStack *pAnimStack, FbxStatus *pStatus=NULL)
  public static native boolean Apply3(long lpjFbxAnimCurveFilterKeySync, long pObj, long pAnimStack, long pStatus);
  /// virtual bool  Apply (FbxAnimCurveNode &pCurveNode, FbxStatus *pStatus=NULL)
  public static native boolean Apply4(long lpjFbxAnimCurveFilterKeySync, Long pCurveNode, long pStatus);
}
