//copyright by aerror 2016 
package fbxsdk;
//26 83 FbxConstraint  --------------------
public class FbxConstraint  {
  public    class   EType  {
   public static final int eUnknown = 0;
   public static final int ePosition = 1;
   public static final int eRotation = 2;
   public static final int eScale = 3;
   public static final int eParent = 4;
   public static final int eSingleChainIK = 5;
   public static final int eAim = 6;
   public static final int eCharacter = 7;
   public static final int eCustom = 8;
}
  /// virtual EType  GetConstraintType () const
  public static native int GetConstraintType(long lpjFbxConstraint);
  /// virtual FbxObject *  GetConstrainedObject () const
  public static native long GetConstrainedObject(long lpjFbxConstraint);
  /// virtual int  GetConstraintSourceCount () const
  public static native int GetConstraintSourceCount(long lpjFbxConstraint);
  /// virtual FbxObject *  GetConstraintSource (int pIndex) const
  public static native long GetConstraintSource(long lpjFbxConstraint, int pIndex);
  /// double  GetSourceWeight (const FbxObject *pObject) const
  public static native double GetSourceWeight(long lpjFbxConstraint, long pObject);
  /// FbxPropertyT< FbxDouble >  Weight
  public static native void mepSetWeight(long lpjFbxConstraint, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  Weight
  public static native double mepGetWeight(long lpjFbxConstraint);
  /// FbxPropertyT< FbxDouble >  Weight
  public static native long mptGetWeight(long lpjFbxConstraint);
  /// FbxPropertyT< FbxBool >  Active
  public static native void mepSetActive(long lpjFbxConstraint, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  Active
  public static native boolean mepGetActive(long lpjFbxConstraint);
  /// FbxPropertyT< FbxBool >  Active
  public static native long mptGetActive(long lpjFbxConstraint);
  /// FbxPropertyT< FbxBool >  Lock
  public static native void mepSetLock(long lpjFbxConstraint, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  Lock
  public static native boolean mepGetLock(long lpjFbxConstraint);
  /// FbxPropertyT< FbxBool >  Lock
  public static native long mptGetLock(long lpjFbxConstraint);
  /// FbxConstraint * Create( FbxObject* lpFbxObject,  const char* pName )
  public static native long Create(   long lpFbxObject, String pName);
}
