package fbxsdk;
//26 98 FbxConstraintParent  --------------------
public class FbxConstraintParent  {
  /// void  SetTranslationOffset (FbxObject *pObject, FbxVector4 pTranslation)
  public static native void SetTranslationOffset(long lpjFbxConstraintParent, long pObject, long pTranslation);
  /// FbxVector4  GetTranslationOffset (const FbxObject *pObject) const
  public static native long GetTranslationOffset(long lpjFbxConstraintParent, long pObject);
  /// virtual void  SetRotationOffset (const FbxObject *pObject, FbxVector4 pRotation)
  public static native void SetRotationOffset(long lpjFbxConstraintParent, long pObject, long pRotation);
  /// FbxVector4  GetRotationOffset (const FbxObject *pObject) const
  public static native long GetRotationOffset(long lpjFbxConstraintParent, long pObject);
  /// void  AddConstraintSource (FbxObject *pObject, double pWeight=100)
  public static native void AddConstraintSource(long lpjFbxConstraintParent, long pObject, double pWeight);
  /// int  GetConstraintSourceCount () const
  public static native int GetConstraintSourceCount(long lpjFbxConstraintParent);
  /// FbxObject *  GetConstraintSource (int pIndex) const
  public static native long GetConstraintSource(long lpjFbxConstraintParent, int pIndex);
  /// void  SetConstrainedObject (FbxObject *pObject)
  public static native void SetConstrainedObject(long lpjFbxConstraintParent, long pObject);
  /// FbxObject *  GetConstrainedObject () const
  public static native long GetConstrainedObject(long lpjFbxConstraintParent);
  /// FbxPropertyT< FbxBool >  AffectTranslationX
  public static native void mepSetAffectTranslationX(long lpjFbxConstraintParent, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  AffectTranslationX
  public static native boolean mepGetAffectTranslationX(long lpjFbxConstraintParent);
  /// FbxPropertyT< FbxBool >  AffectTranslationX
  public static native long mptGetAffectTranslationX(long lpjFbxConstraintParent);
  /// FbxPropertyT< FbxBool >  AffectTranslationY
  public static native void mepSetAffectTranslationY(long lpjFbxConstraintParent, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  AffectTranslationY
  public static native boolean mepGetAffectTranslationY(long lpjFbxConstraintParent);
  /// FbxPropertyT< FbxBool >  AffectTranslationY
  public static native long mptGetAffectTranslationY(long lpjFbxConstraintParent);
  /// FbxPropertyT< FbxBool >  AffectTranslationZ
  public static native void mepSetAffectTranslationZ(long lpjFbxConstraintParent, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  AffectTranslationZ
  public static native boolean mepGetAffectTranslationZ(long lpjFbxConstraintParent);
  /// FbxPropertyT< FbxBool >  AffectTranslationZ
  public static native long mptGetAffectTranslationZ(long lpjFbxConstraintParent);
  /// FbxPropertyT< FbxBool >  AffectRotationX
  public static native void mepSetAffectRotationX(long lpjFbxConstraintParent, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  AffectRotationX
  public static native boolean mepGetAffectRotationX(long lpjFbxConstraintParent);
  /// FbxPropertyT< FbxBool >  AffectRotationX
  public static native long mptGetAffectRotationX(long lpjFbxConstraintParent);
  /// FbxPropertyT< FbxBool >  AffectRotationY
  public static native void mepSetAffectRotationY(long lpjFbxConstraintParent, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  AffectRotationY
  public static native boolean mepGetAffectRotationY(long lpjFbxConstraintParent);
  /// FbxPropertyT< FbxBool >  AffectRotationY
  public static native long mptGetAffectRotationY(long lpjFbxConstraintParent);
  /// FbxPropertyT< FbxBool >  AffectRotationZ
  public static native void mepSetAffectRotationZ(long lpjFbxConstraintParent, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  AffectRotationZ
  public static native boolean mepGetAffectRotationZ(long lpjFbxConstraintParent);
  /// FbxPropertyT< FbxBool >  AffectRotationZ
  public static native long mptGetAffectRotationZ(long lpjFbxConstraintParent);
  /// FbxPropertyT< FbxBool >  AffectScalingX
  public static native void mepSetAffectScalingX(long lpjFbxConstraintParent, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  AffectScalingX
  public static native boolean mepGetAffectScalingX(long lpjFbxConstraintParent);
  /// FbxPropertyT< FbxBool >  AffectScalingX
  public static native long mptGetAffectScalingX(long lpjFbxConstraintParent);
  /// FbxPropertyT< FbxBool >  AffectScalingY
  public static native void mepSetAffectScalingY(long lpjFbxConstraintParent, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  AffectScalingY
  public static native boolean mepGetAffectScalingY(long lpjFbxConstraintParent);
  /// FbxPropertyT< FbxBool >  AffectScalingY
  public static native long mptGetAffectScalingY(long lpjFbxConstraintParent);
  /// FbxPropertyT< FbxBool >  AffectScalingZ
  public static native void mepSetAffectScalingZ(long lpjFbxConstraintParent, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  AffectScalingZ
  public static native boolean mepGetAffectScalingZ(long lpjFbxConstraintParent);
  /// FbxPropertyT< FbxBool >  AffectScalingZ
  public static native long mptGetAffectScalingZ(long lpjFbxConstraintParent);
  /// FbxPropertyT< FbxReference >  ConstraintSources
  public static native void mepSetConstraintSources(long lpjFbxConstraintParent, long lpFbxReference);
  /// FbxPropertyT< FbxReference >  ConstraintSources
  public static native long mepGetConstraintSources(long lpjFbxConstraintParent);
  /// FbxPropertyT< FbxReference >  ConstraintSources
  public static native long mptGetConstraintSources(long lpjFbxConstraintParent);
  /// FbxPropertyT< FbxReference >  ConstrainedObject
  public static native void mepSetConstrainedObject(long lpjFbxConstraintParent, long lpFbxReference);
  /// FbxPropertyT< FbxReference >  ConstrainedObject
  public static native long mepGetConstrainedObject(long lpjFbxConstraintParent);
  /// FbxPropertyT< FbxReference >  ConstrainedObject
  public static native long mptGetConstrainedObject(long lpjFbxConstraintParent);
  /// FbxConstraintParent * Create( FbxConstraint* lpFbxConstraint,  const char* pName )
  public static native long Create(   long lpFbxConstraint, String pName);
}
