package fbxsdk;
//26 103 FbxConstraintSingleChainIK  --------------------
public class FbxConstraintSingleChainIK  {
  public                           class   ESolverMode  {
   public static final int eRotatePlane = 0;
   public static final int eSingleChain = 1;
}
  public                           class   EPoleVectorMode  {
   public static final int eVector = 0;
   public static final int eObject = 1;
}
  public                           class   EEvaluationMode  {
   public static final int eNeverTS = 0;
   public static final int eAutoDetect = 1;
   public static final int eAlwaysTS = 2;
}
  /// double  GetPoleVectorObjectWeight (const FbxObject *pObject) const
  public static native double GetPoleVectorObjectWeight(long lpjFbxConstraintSingleChainIK, long pObject);
  /// void  AddPoleVectorObject (FbxObject *pObject, double pWeight=100)
  public static native void AddPoleVectorObject(long lpjFbxConstraintSingleChainIK, long pObject, double pWeight);
  /// int  GetConstraintPoleVectorCount () const
  public static native int GetConstraintPoleVectorCount(long lpjFbxConstraintSingleChainIK);
  /// FbxObject *  GetPoleVectorObject (int pIndex) const
  public static native long GetPoleVectorObject(long lpjFbxConstraintSingleChainIK, int pIndex);
  /// void  SetFirstJointObject (FbxObject *pObject)
  public static native void SetFirstJointObject(long lpjFbxConstraintSingleChainIK, long pObject);
  /// FbxObject *  GetFirstJointObject () const
  public static native long GetFirstJointObject(long lpjFbxConstraintSingleChainIK);
  /// void  SetEndJointObject (FbxObject *pObject)
  public static native void SetEndJointObject(long lpjFbxConstraintSingleChainIK, long pObject);
  /// FbxObject *  GetEndJointObject () const
  public static native long GetEndJointObject(long lpjFbxConstraintSingleChainIK);
  /// void  SetEffectorObject (FbxObject *pObject)
  public static native void SetEffectorObject(long lpjFbxConstraintSingleChainIK, long pObject);
  /// FbxObject *  GetEffectorObject () const
  public static native long GetEffectorObject(long lpjFbxConstraintSingleChainIK);
  /// FbxPropertyT< FbxEnum >  PoleVectorType
  public static native void mepSetPoleVectorType(long lpjFbxConstraintSingleChainIK, int lpFbxEnum);
  /// FbxPropertyT< FbxEnum >  PoleVectorType
  public static native int mepGetPoleVectorType(long lpjFbxConstraintSingleChainIK);
  /// FbxPropertyT< FbxEnum >  PoleVectorType
  public static native long mptGetPoleVectorType(long lpjFbxConstraintSingleChainIK);
  /// FbxPropertyT< FbxEnum >  SolverType
  public static native void mepSetSolverType(long lpjFbxConstraintSingleChainIK, int lpFbxEnum);
  /// FbxPropertyT< FbxEnum >  SolverType
  public static native int mepGetSolverType(long lpjFbxConstraintSingleChainIK);
  /// FbxPropertyT< FbxEnum >  SolverType
  public static native long mptGetSolverType(long lpjFbxConstraintSingleChainIK);
  /// FbxPropertyT< FbxEnum >  EvaluateTSAnim
  public static native void mepSetEvaluateTSAnim(long lpjFbxConstraintSingleChainIK, int lpFbxEnum);
  /// FbxPropertyT< FbxEnum >  EvaluateTSAnim
  public static native int mepGetEvaluateTSAnim(long lpjFbxConstraintSingleChainIK);
  /// FbxPropertyT< FbxEnum >  EvaluateTSAnim
  public static native long mptGetEvaluateTSAnim(long lpjFbxConstraintSingleChainIK);
  /// FbxPropertyT< FbxReference >  PoleVectorObjects
  public static native void mepSetPoleVectorObjects(long lpjFbxConstraintSingleChainIK, long lpFbxReference);
  /// FbxPropertyT< FbxReference >  PoleVectorObjects
  public static native long mepGetPoleVectorObjects(long lpjFbxConstraintSingleChainIK);
  /// FbxPropertyT< FbxReference >  PoleVectorObjects
  public static native long mptGetPoleVectorObjects(long lpjFbxConstraintSingleChainIK);
  /// FbxPropertyT< FbxDouble3 >  PoleVector
  public static native void mepSetPoleVector(long lpjFbxConstraintSingleChainIK, long lpFbxDouble3);
  /// FbxPropertyT< FbxDouble3 >  PoleVector
  public static native long mepGetPoleVector(long lpjFbxConstraintSingleChainIK);
  /// FbxPropertyT< FbxDouble3 >  PoleVector
  public static native long mptGetPoleVector(long lpjFbxConstraintSingleChainIK);
  /// FbxPropertyT< FbxDouble >  Twist
  public static native void mepSetTwist(long lpjFbxConstraintSingleChainIK, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  Twist
  public static native double mepGetTwist(long lpjFbxConstraintSingleChainIK);
  /// FbxPropertyT< FbxDouble >  Twist
  public static native long mptGetTwist(long lpjFbxConstraintSingleChainIK);
  /// FbxPropertyT< FbxReference >  FirstJointObject
  public static native void mepSetFirstJointObject(long lpjFbxConstraintSingleChainIK, long lpFbxReference);
  /// FbxPropertyT< FbxReference >  FirstJointObject
  public static native long mepGetFirstJointObject(long lpjFbxConstraintSingleChainIK);
  /// FbxPropertyT< FbxReference >  FirstJointObject
  public static native long mptGetFirstJointObject(long lpjFbxConstraintSingleChainIK);
  /// FbxPropertyT< FbxReference >  EndJointObject
  public static native void mepSetEndJointObject(long lpjFbxConstraintSingleChainIK, long lpFbxReference);
  /// FbxPropertyT< FbxReference >  EndJointObject
  public static native long mepGetEndJointObject(long lpjFbxConstraintSingleChainIK);
  /// FbxPropertyT< FbxReference >  EndJointObject
  public static native long mptGetEndJointObject(long lpjFbxConstraintSingleChainIK);
  /// FbxPropertyT< FbxReference >  EffectorObject
  public static native void mepSetEffectorObject(long lpjFbxConstraintSingleChainIK, long lpFbxReference);
  /// FbxPropertyT< FbxReference >  EffectorObject
  public static native long mepGetEffectorObject(long lpjFbxConstraintSingleChainIK);
  /// FbxPropertyT< FbxReference >  EffectorObject
  public static native long mptGetEffectorObject(long lpjFbxConstraintSingleChainIK);
  /// FbxConstraintSingleChainIK * Create( FbxConstraint* lpFbxConstraint,  const char* pName )
  public static native long Create(   long lpFbxConstraint, String pName);
}
