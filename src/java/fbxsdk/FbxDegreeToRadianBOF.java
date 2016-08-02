//copyright by aerror 2016 
package fbxsdk;
//26 56 FbxDegreeToRadianBOF  --------------------
public class FbxDegreeToRadianBOF  {
  /// virtual bool  Evaluate (const FbxBindingOperator *pOperator, const FbxObject *pObject, EFbxType *pResultType, void **pResult) const
  public static native boolean Evaluate(long lpjFbxDegreeToRadianBOF, long pOperator, long pObject, int [] pResultType, long [] pResult);
  /// virtual bool  ReverseEvaluate (const FbxBindingOperator *pOperator, const FbxObject *pTarget, const void *pIn, void **pOut, EFbxType *pOutType, bool setObj, int index) const
  public static native boolean ReverseEvaluate(long lpjFbxDegreeToRadianBOF, long pOperator, long pTarget, long pIn, long [] pOut, int [] pOutType, boolean setObj, int index);
//No Static CreateFunc
}
