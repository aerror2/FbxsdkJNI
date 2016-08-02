package fbxsdk;
//26 85 FbxConstraintPosition  --------------------
public class FbxConstraintPosition  {
  /// void  AddConstraintSource (FbxObject *pObject, double pWeight=100)
  public static native void AddConstraintSource(long lpjFbxConstraintPosition, long pObject, double pWeight);
  /// bool  RemoveConstraintSource (FbxObject *pObject)
  public static native boolean RemoveConstraintSource(long lpjFbxConstraintPosition, long pObject);
  /// int  GetConstraintSourceCount () const
  public static native int GetConstraintSourceCount(long lpjFbxConstraintPosition);
  /// FbxObject *  GetConstraintSource (int pIndex) const
  public static native long GetConstraintSource(long lpjFbxConstraintPosition, int pIndex);
  /// void  SetConstrainedObject (FbxObject *pObject)
  public static native void SetConstrainedObject(long lpjFbxConstraintPosition, long pObject);
  /// FbxObject *  GetConstrainedObject () const
  public static native long GetConstrainedObject(long lpjFbxConstraintPosition);
  /// FbxPropertyT< FbxBool >  AffectX
  public static native void mepSetAffectX(long lpjFbxConstraintPosition, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  AffectX
  public static native boolean mepGetAffectX(long lpjFbxConstraintPosition);
  /// FbxPropertyT< FbxBool >  AffectX
  public static native long mptGetAffectX(long lpjFbxConstraintPosition);
  /// FbxPropertyT< FbxBool >  AffectY
  public static native void mepSetAffectY(long lpjFbxConstraintPosition, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  AffectY
  public static native boolean mepGetAffectY(long lpjFbxConstraintPosition);
  /// FbxPropertyT< FbxBool >  AffectY
  public static native long mptGetAffectY(long lpjFbxConstraintPosition);
  /// FbxPropertyT< FbxBool >  AffectZ
  public static native void mepSetAffectZ(long lpjFbxConstraintPosition, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  AffectZ
  public static native boolean mepGetAffectZ(long lpjFbxConstraintPosition);
  /// FbxPropertyT< FbxBool >  AffectZ
  public static native long mptGetAffectZ(long lpjFbxConstraintPosition);
  /// FbxPropertyT< FbxDouble3 >  Translation
  public static native void mepSetTranslation(long lpjFbxConstraintPosition, long lpFbxDouble3);
  /// FbxPropertyT< FbxDouble3 >  Translation
  public static native long mepGetTranslation(long lpjFbxConstraintPosition);
  /// FbxPropertyT< FbxDouble3 >  Translation
  public static native long mptGetTranslation(long lpjFbxConstraintPosition);
  /// FbxPropertyT< FbxReference >  ConstraintSources
  public static native void mepSetConstraintSources(long lpjFbxConstraintPosition, long lpFbxReference);
  /// FbxPropertyT< FbxReference >  ConstraintSources
  public static native long mepGetConstraintSources(long lpjFbxConstraintPosition);
  /// FbxPropertyT< FbxReference >  ConstraintSources
  public static native long mptGetConstraintSources(long lpjFbxConstraintPosition);
  /// FbxPropertyT< FbxReference >  ConstrainedObject
  public static native void mepSetConstrainedObject(long lpjFbxConstraintPosition, long lpFbxReference);
  /// FbxPropertyT< FbxReference >  ConstrainedObject
  public static native long mepGetConstrainedObject(long lpjFbxConstraintPosition);
  /// FbxPropertyT< FbxReference >  ConstrainedObject
  public static native long mptGetConstrainedObject(long lpjFbxConstraintPosition);
  /// FbxConstraintPosition * Create( FbxConstraint* lpFbxConstraint,  const char* pName )
  public static native long Create(   long lpFbxConstraint, String pName);
}
