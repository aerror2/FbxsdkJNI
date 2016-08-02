package fbxsdk;
//26 80 FbxConstraintScale  --------------------
public class FbxConstraintScale  {
  /// void  AddConstraintSource (FbxObject *pObject, double pWeight=100)
  public static native void AddConstraintSource(long lpjFbxConstraintScale, long pObject, double pWeight);
  /// int  GetConstraintSourceCount () const
  public static native int GetConstraintSourceCount(long lpjFbxConstraintScale);
  /// FbxObject *  GetConstraintSource (int pIndex) const
  public static native long GetConstraintSource(long lpjFbxConstraintScale, int pIndex);
  /// void  SetConstrainedObject (FbxObject *pObject)
  public static native void SetConstrainedObject(long lpjFbxConstraintScale, long pObject);
  /// FbxObject *  GetConstrainedObject () const
  public static native long GetConstrainedObject(long lpjFbxConstraintScale);
  /// FbxPropertyT< FbxBool >  AffectX
  public static native void mepSetAffectX(long lpjFbxConstraintScale, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  AffectX
  public static native boolean mepGetAffectX(long lpjFbxConstraintScale);
  /// FbxPropertyT< FbxBool >  AffectX
  public static native long mptGetAffectX(long lpjFbxConstraintScale);
  /// FbxPropertyT< FbxBool >  AffectY
  public static native void mepSetAffectY(long lpjFbxConstraintScale, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  AffectY
  public static native boolean mepGetAffectY(long lpjFbxConstraintScale);
  /// FbxPropertyT< FbxBool >  AffectY
  public static native long mptGetAffectY(long lpjFbxConstraintScale);
  /// FbxPropertyT< FbxBool >  AffectZ
  public static native void mepSetAffectZ(long lpjFbxConstraintScale, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  AffectZ
  public static native boolean mepGetAffectZ(long lpjFbxConstraintScale);
  /// FbxPropertyT< FbxBool >  AffectZ
  public static native long mptGetAffectZ(long lpjFbxConstraintScale);
  /// FbxPropertyT< FbxDouble3 >  Scaling
  public static native void mepSetScaling(long lpjFbxConstraintScale, long lpFbxDouble3);
  /// FbxPropertyT< FbxDouble3 >  Scaling
  public static native long mepGetScaling(long lpjFbxConstraintScale);
  /// FbxPropertyT< FbxDouble3 >  Scaling
  public static native long mptGetScaling(long lpjFbxConstraintScale);
  /// FbxPropertyT< FbxReference >  ConstraintSources
  public static native void mepSetConstraintSources(long lpjFbxConstraintScale, long lpFbxReference);
  /// FbxPropertyT< FbxReference >  ConstraintSources
  public static native long mepGetConstraintSources(long lpjFbxConstraintScale);
  /// FbxPropertyT< FbxReference >  ConstraintSources
  public static native long mptGetConstraintSources(long lpjFbxConstraintScale);
  /// FbxPropertyT< FbxReference >  ConstrainedObject
  public static native void mepSetConstrainedObject(long lpjFbxConstraintScale, long lpFbxReference);
  /// FbxPropertyT< FbxReference >  ConstrainedObject
  public static native long mepGetConstrainedObject(long lpjFbxConstraintScale);
  /// FbxPropertyT< FbxReference >  ConstrainedObject
  public static native long mptGetConstrainedObject(long lpjFbxConstraintScale);
  /// FbxConstraintScale * Create( FbxConstraint* lpFbxConstraint,  const char* pName )
  public static native long Create(   long lpFbxConstraint, String pName);
}
