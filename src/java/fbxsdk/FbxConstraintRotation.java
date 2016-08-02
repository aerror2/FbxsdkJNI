//copyright by aerror 2016 
package fbxsdk;
//26 80 FbxConstraintRotation  --------------------
public class FbxConstraintRotation  {
  /// void  AddConstraintSource (FbxObject *pObject, double pWeight=100)
  public static native void AddConstraintSource(long lpjFbxConstraintRotation, long pObject, double pWeight);
  /// int  GetConstraintSourceCount () const
  public static native int GetConstraintSourceCount(long lpjFbxConstraintRotation);
  /// FbxObject *  GetConstraintSource (int pIndex) const
  public static native long GetConstraintSource(long lpjFbxConstraintRotation, int pIndex);
  /// void  SetConstrainedObject (FbxObject *pObject)
  public static native void SetConstrainedObject(long lpjFbxConstraintRotation, long pObject);
  /// FbxObject *  GetConstrainedObject () const
  public static native long GetConstrainedObject(long lpjFbxConstraintRotation);
  /// FbxPropertyT< FbxBool >  AffectX
  public static native void mepSetAffectX(long lpjFbxConstraintRotation, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  AffectX
  public static native boolean mepGetAffectX(long lpjFbxConstraintRotation);
  /// FbxPropertyT< FbxBool >  AffectX
  public static native long mptGetAffectX(long lpjFbxConstraintRotation);
  /// FbxPropertyT< FbxBool >  AffectY
  public static native void mepSetAffectY(long lpjFbxConstraintRotation, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  AffectY
  public static native boolean mepGetAffectY(long lpjFbxConstraintRotation);
  /// FbxPropertyT< FbxBool >  AffectY
  public static native long mptGetAffectY(long lpjFbxConstraintRotation);
  /// FbxPropertyT< FbxBool >  AffectZ
  public static native void mepSetAffectZ(long lpjFbxConstraintRotation, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  AffectZ
  public static native boolean mepGetAffectZ(long lpjFbxConstraintRotation);
  /// FbxPropertyT< FbxBool >  AffectZ
  public static native long mptGetAffectZ(long lpjFbxConstraintRotation);
  /// FbxPropertyT< FbxDouble3 >  Rotation
  public static native void mepSetRotation(long lpjFbxConstraintRotation, long lpFbxDouble3);
  /// FbxPropertyT< FbxDouble3 >  Rotation
  public static native long mepGetRotation(long lpjFbxConstraintRotation);
  /// FbxPropertyT< FbxDouble3 >  Rotation
  public static native long mptGetRotation(long lpjFbxConstraintRotation);
  /// FbxPropertyT< FbxReference >  ConstraintSources
  public static native void mepSetConstraintSources(long lpjFbxConstraintRotation, long lpFbxReference);
  /// FbxPropertyT< FbxReference >  ConstraintSources
  public static native long mepGetConstraintSources(long lpjFbxConstraintRotation);
  /// FbxPropertyT< FbxReference >  ConstraintSources
  public static native long mptGetConstraintSources(long lpjFbxConstraintRotation);
  /// FbxPropertyT< FbxReference >  ConstrainedObject
  public static native void mepSetConstrainedObject(long lpjFbxConstraintRotation, long lpFbxReference);
  /// FbxPropertyT< FbxReference >  ConstrainedObject
  public static native long mepGetConstrainedObject(long lpjFbxConstraintRotation);
  /// FbxPropertyT< FbxReference >  ConstrainedObject
  public static native long mptGetConstrainedObject(long lpjFbxConstraintRotation);
  /// FbxConstraintRotation * Create( FbxConstraint* lpFbxConstraint,  const char* pName )
  public static native long Create(   long lpFbxConstraint, String pName);
}
