package fbxsdk;
//26 102 FbxConstraintAim  --------------------
public class FbxConstraintAim  {
  public    class   EWorldUp  {
   public static final int eAimAtSceneUp = 0;
   public static final int eAimAtObjectUp = 1;
   public static final int eAimAtObjectRotationUp = 2;
   public static final int eAimAtVector = 3;
   public static final int eAimAtNone = 4;
   public static final int eAimAtCount = 5;
}
  /// void  AddConstraintSource (FbxObject *pObject, double pWeight=100)
  public static native void AddConstraintSource(long lpjFbxConstraintAim, long pObject, double pWeight);
  /// int  GetConstraintSourceCount () const
  public static native int GetConstraintSourceCount(long lpjFbxConstraintAim);
  /// FbxObject *  GetConstraintSource (int pIndex) const
  public static native long GetConstraintSource(long lpjFbxConstraintAim, int pIndex);
  /// void  SetConstrainedObject (FbxObject *pObject)
  public static native void SetConstrainedObject(long lpjFbxConstraintAim, long pObject);
  /// FbxObject *  GetConstrainedObject () const
  public static native long GetConstrainedObject(long lpjFbxConstraintAim);
  /// void  SetWorldUpObject (FbxObject *pObject)
  public static native void SetWorldUpObject(long lpjFbxConstraintAim, long pObject);
  /// FbxObject *  GetWorldUpObject () const
  public static native long GetWorldUpObject(long lpjFbxConstraintAim);
  /// FbxPropertyT< FbxDouble3 >  RotationOffset
  public static native void mepSetRotationOffset(long lpjFbxConstraintAim, long lpFbxDouble3);
  /// FbxPropertyT< FbxDouble3 >  RotationOffset
  public static native long mepGetRotationOffset(long lpjFbxConstraintAim);
  /// FbxPropertyT< FbxDouble3 >  RotationOffset
  public static native long mptGetRotationOffset(long lpjFbxConstraintAim);
  /// FbxPropertyT< FbxReference >  AimAtObjects
  public static native void mepSetAimAtObjects(long lpjFbxConstraintAim, long lpFbxReference);
  /// FbxPropertyT< FbxReference >  AimAtObjects
  public static native long mepGetAimAtObjects(long lpjFbxConstraintAim);
  /// FbxPropertyT< FbxReference >  AimAtObjects
  public static native long mptGetAimAtObjects(long lpjFbxConstraintAim);
  /// FbxPropertyT< FbxReference >  ConstrainedObject
  public static native void mepSetConstrainedObject(long lpjFbxConstraintAim, long lpFbxReference);
  /// FbxPropertyT< FbxReference >  ConstrainedObject
  public static native long mepGetConstrainedObject(long lpjFbxConstraintAim);
  /// FbxPropertyT< FbxReference >  ConstrainedObject
  public static native long mptGetConstrainedObject(long lpjFbxConstraintAim);
  /// FbxPropertyT< FbxEnum >  WorldUpType
  public static native void mepSetWorldUpType(long lpjFbxConstraintAim, int lpFbxEnum);
  /// FbxPropertyT< FbxEnum >  WorldUpType
  public static native int mepGetWorldUpType(long lpjFbxConstraintAim);
  /// FbxPropertyT< FbxEnum >  WorldUpType
  public static native long mptGetWorldUpType(long lpjFbxConstraintAim);
  /// FbxPropertyT< FbxReference >  WorldUpObject
  public static native void mepSetWorldUpObject(long lpjFbxConstraintAim, long lpFbxReference);
  /// FbxPropertyT< FbxReference >  WorldUpObject
  public static native long mepGetWorldUpObject(long lpjFbxConstraintAim);
  /// FbxPropertyT< FbxReference >  WorldUpObject
  public static native long mptGetWorldUpObject(long lpjFbxConstraintAim);
  /// FbxPropertyT< FbxDouble3 >  WorldUpVector
  public static native void mepSetWorldUpVector(long lpjFbxConstraintAim, long lpFbxDouble3);
  /// FbxPropertyT< FbxDouble3 >  WorldUpVector
  public static native long mepGetWorldUpVector(long lpjFbxConstraintAim);
  /// FbxPropertyT< FbxDouble3 >  WorldUpVector
  public static native long mptGetWorldUpVector(long lpjFbxConstraintAim);
  /// FbxPropertyT< FbxDouble3 >  UpVector
  public static native void mepSetUpVector(long lpjFbxConstraintAim, long lpFbxDouble3);
  /// FbxPropertyT< FbxDouble3 >  UpVector
  public static native long mepGetUpVector(long lpjFbxConstraintAim);
  /// FbxPropertyT< FbxDouble3 >  UpVector
  public static native long mptGetUpVector(long lpjFbxConstraintAim);
  /// FbxPropertyT< FbxDouble3 >  AimVector
  public static native void mepSetAimVector(long lpjFbxConstraintAim, long lpFbxDouble3);
  /// FbxPropertyT< FbxDouble3 >  AimVector
  public static native long mepGetAimVector(long lpjFbxConstraintAim);
  /// FbxPropertyT< FbxDouble3 >  AimVector
  public static native long mptGetAimVector(long lpjFbxConstraintAim);
  /// FbxPropertyT< FbxBool >  AffectX
  public static native void mepSetAffectX(long lpjFbxConstraintAim, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  AffectX
  public static native boolean mepGetAffectX(long lpjFbxConstraintAim);
  /// FbxPropertyT< FbxBool >  AffectX
  public static native long mptGetAffectX(long lpjFbxConstraintAim);
  /// FbxPropertyT< FbxBool >  AffectY
  public static native void mepSetAffectY(long lpjFbxConstraintAim, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  AffectY
  public static native boolean mepGetAffectY(long lpjFbxConstraintAim);
  /// FbxPropertyT< FbxBool >  AffectY
  public static native long mptGetAffectY(long lpjFbxConstraintAim);
  /// FbxPropertyT< FbxBool >  AffectZ
  public static native void mepSetAffectZ(long lpjFbxConstraintAim, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  AffectZ
  public static native boolean mepGetAffectZ(long lpjFbxConstraintAim);
  /// FbxPropertyT< FbxBool >  AffectZ
  public static native long mptGetAffectZ(long lpjFbxConstraintAim);
  /// FbxConstraintAim * Create( FbxConstraint* lpFbxConstraint,  const char* pName )
  public static native long Create(   long lpFbxConstraint, String pName);
}
