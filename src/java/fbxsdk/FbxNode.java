package fbxsdk;
//26 589 FbxNode  --------------------
public class FbxNode  {
  public    class   EShadingMode  {
   public static final int eHardShading = 0;
   public static final int eWireFrame = 1;
   public static final int eFlatShading = 2;
   public static final int eLightShading = 3;
   public static final int eTextureShading = 4;
   public static final int eFullShading = 5;
}
  public    class   EPivotSet  {
   public static final int eSourcePivot = 0;
   public static final int eDestinationPivot = 1;
}
  public    class   EPivotState  {
   public static final int ePivotActive = 0;
   public static final int ePivotReference = 1;
}
  /// bool  GetAnimationInterval (FbxTimeSpan &pInterval, FbxAnimStack *pAnimStack=NULL, int pAnimLayerId=0)
  public static native boolean GetAnimationInterval(long lpjFbxNode, Long pInterval, long pAnimStack, int pAnimLayerId);
  /// FbxNode *  GetParent ()
  public static native long GetParent(long lpjFbxNode);
  /// const FbxNode *  GetParent () const
  public static native long GetParent1(long lpjFbxNode);
  /// bool  AddChild (FbxNode *pNode)
  public static native boolean AddChild(long lpjFbxNode, long pNode);
  /// FbxNode *  RemoveChild (FbxNode *pNode)
  public static native long RemoveChild(long lpjFbxNode, long pNode);
  /// int  GetChildCount (bool pRecursive=false) const
  public static native int GetChildCount(long lpjFbxNode, boolean pRecursive);
  /// FbxNode *  GetChild (int pIndex)
  public static native long GetChild(long lpjFbxNode, int pIndex);
  /// const FbxNode *  GetChild (int pIndex) const
  public static native long GetChild1(long lpjFbxNode, int pIndex);
  /// FbxNode *  FindChild (const char *pName, bool pRecursive=true, bool pInitial=false)
  public static native long FindChild(long lpjFbxNode, String pName, boolean pRecursive, boolean pInitial);
  /// void  SetTarget (FbxNode *pNode)
  public static native void SetTarget(long lpjFbxNode, long pNode);
  /// FbxNode *  GetTarget () const
  public static native long GetTarget(long lpjFbxNode);
  /// void  SetPostTargetRotation (FbxVector4 pVector)
  public static native void SetPostTargetRotation(long lpjFbxNode, long pVector);
  /// FbxVector4  GetPostTargetRotation () const
  public static native long GetPostTargetRotation(long lpjFbxNode);
  /// void  SetTargetUp (FbxNode *pNode)
  public static native void SetTargetUp(long lpjFbxNode, long pNode);
  /// FbxNode *  GetTargetUp () const
  public static native long GetTargetUp(long lpjFbxNode);
  /// void  SetTargetUpVector (FbxVector4 pVector)
  public static native void SetTargetUpVector(long lpjFbxNode, long pVector);
  /// FbxVector4  GetTargetUpVector () const
  public static native long GetTargetUpVector(long lpjFbxNode);
  /// FbxNodeAttribute *  SetNodeAttribute (FbxNodeAttribute *pNodeAttribute)
  public static native long SetNodeAttribute(long lpjFbxNode, long pNodeAttribute);
  /// FbxNodeAttribute *  GetNodeAttribute ()
  public static native long GetNodeAttribute(long lpjFbxNode);
  /// const FbxNodeAttribute *  GetNodeAttribute () const
  public static native long GetNodeAttribute1(long lpjFbxNode);
  /// int  GetNodeAttributeCount () const
  public static native int GetNodeAttributeCount(long lpjFbxNode);
  /// int  GetDefaultNodeAttributeIndex () const
  public static native int GetDefaultNodeAttributeIndex(long lpjFbxNode);
  /// bool  SetDefaultNodeAttributeIndex (int pIndex, FbxStatus *pStatus=NULL)
  public static native boolean SetDefaultNodeAttributeIndex(long lpjFbxNode, int pIndex, long pStatus);
  /// FbxNodeAttribute *  GetNodeAttributeByIndex (int pIndex)
  public static native long GetNodeAttributeByIndex(long lpjFbxNode, int pIndex);
  /// const FbxNodeAttribute *  GetNodeAttributeByIndex (int pIndex) const
  public static native long GetNodeAttributeByIndex1(long lpjFbxNode, int pIndex);
  /// int  GetNodeAttributeIndex (FbxNodeAttribute *pNodeAttribute, FbxStatus *pStatus=NULL) const
  public static native int GetNodeAttributeIndex(long lpjFbxNode, long pNodeAttribute, long pStatus);
  /// bool  AddNodeAttribute (FbxNodeAttribute *pNodeAttribute, FbxStatus *pStatus=NULL)
  public static native boolean AddNodeAttribute(long lpjFbxNode, long pNodeAttribute, long pStatus);
  /// FbxNodeAttribute *  RemoveNodeAttribute (FbxNodeAttribute *pNodeAttribute)
  public static native long RemoveNodeAttribute(long lpjFbxNode, long pNodeAttribute);
  /// FbxNodeAttribute *  RemoveNodeAttributeByIndex (int pIndex)
  public static native long RemoveNodeAttributeByIndex(long lpjFbxNode, int pIndex);
  /// FbxCachedEffect *  GetCachedEffect ()
  public static native long GetCachedEffect(long lpjFbxNode);
  /// FbxLODGroup *  GetLodGroup ()
  public static native long GetLodGroup(long lpjFbxNode);
  /// FbxNull *  GetNull ()
  public static native long GetNull(long lpjFbxNode);
  /// FbxMarker *  GetMarker ()
  public static native long GetMarker(long lpjFbxNode);
  /// FbxSkeleton *  GetSkeleton ()
  public static native long GetSkeleton(long lpjFbxNode);
  /// FbxGeometry *  GetGeometry ()
  public static native long GetGeometry(long lpjFbxNode);
  /// FbxMesh *  GetMesh ()
  public static native long GetMesh(long lpjFbxNode);
  /// FbxNurbs *  GetNurbs ()
  public static native long GetNurbs(long lpjFbxNode);
  /// FbxNurbsSurface *  GetNurbsSurface ()
  public static native long GetNurbsSurface(long lpjFbxNode);
  /// FbxNurbsCurve *  GetNurbsCurve ()
  public static native long GetNurbsCurve(long lpjFbxNode);
  /// FbxLine *  GetLine ()
  public static native long GetLine(long lpjFbxNode);
  /// FbxTrimNurbsSurface *  GetTrimNurbsSurface ()
  public static native long GetTrimNurbsSurface(long lpjFbxNode);
  /// FbxSubDiv *  GetSubdiv ()
  public static native long GetSubdiv(long lpjFbxNode);
  /// FbxPatch *  GetPatch ()
  public static native long GetPatch(long lpjFbxNode);
  /// FbxCamera *  GetCamera ()
  public static native long GetCamera(long lpjFbxNode);
  /// const FbxCamera *  GetCamera () const
  public static native long GetCamera1(long lpjFbxNode);
  /// FbxCameraStereo *  GetCameraStereo ()
  public static native long GetCameraStereo(long lpjFbxNode);
  /// FbxCameraSwitcher *  GetCameraSwitcher ()
  public static native long GetCameraSwitcher(long lpjFbxNode);
  /// FbxLight *  GetLight ()
  public static native long GetLight(long lpjFbxNode);
  /// const FbxLight *  GetLight () const
  public static native long GetLight1(long lpjFbxNode);
  /// FbxOpticalReference *  GetOpticalReference ()
  public static native long GetOpticalReference(long lpjFbxNode);
  /// void  SetTransformationInheritType (FbxTransform::EInheritType pInheritType)
  public static native void SetTransformationInheritType(long lpjFbxNode, int pInheritType);
  /// void  GetTransformationInheritType (FbxTransform::EInheritType &pInheritType) const
  public static native void GetTransformationInheritType(long lpjFbxNode, Integer pInheritType);
  /// FbxAMatrix &  EvaluateGlobalTransform (FbxTime pTime=FBXSDK_TIME_INFINITE, FbxNode::EPivotSet pPivotSet=FbxNode::eSourcePivot, bool pApplyTarget=false, bool pForceEval=false)
  public static native long EvaluateGlobalTransform(long lpjFbxNode, long pTime, int pPivotSet, boolean pApplyTarget, boolean pForceEval);
  /// FbxAMatrix &  EvaluateLocalTransform (FbxTime pTime=FBXSDK_TIME_INFINITE, FbxNode::EPivotSet pPivotSet=FbxNode::eSourcePivot, bool pApplyTarget=false, bool pForceEval=false)
  public static native long EvaluateLocalTransform(long lpjFbxNode, long pTime, int pPivotSet, boolean pApplyTarget, boolean pForceEval);
  /// FbxVector4 &  EvaluateLocalTranslation (FbxTime pTime=FBXSDK_TIME_INFINITE, FbxNode::EPivotSet pPivotSet=FbxNode::eSourcePivot, bool pApplyTarget=false, bool pForceEval=false)
  public static native long EvaluateLocalTranslation(long lpjFbxNode, long pTime, int pPivotSet, boolean pApplyTarget, boolean pForceEval);
  /// FbxVector4 &  EvaluateLocalRotation (FbxTime pTime=FBXSDK_TIME_INFINITE, FbxNode::EPivotSet pPivotSet=FbxNode::eSourcePivot, bool pApplyTarget=false, bool pForceEval=false)
  public static native long EvaluateLocalRotation(long lpjFbxNode, long pTime, int pPivotSet, boolean pApplyTarget, boolean pForceEval);
  /// FbxVector4 &  EvaluateLocalScaling (FbxTime pTime=FBXSDK_TIME_INFINITE, FbxNode::EPivotSet pPivotSet=FbxNode::eSourcePivot, bool pApplyTarget=false, bool pForceEval=false)
  public static native long EvaluateLocalScaling(long lpjFbxNode, long pTime, int pPivotSet, boolean pApplyTarget, boolean pForceEval);
  /// bool  EvaluateGlobalBoundingBoxMinMaxCenter (FbxVector4 &pBBoxMin, FbxVector4 &pBBoxMax, FbxVector4 &pBBoxCenter, const FbxTime &pTime=FBXSDK_TIME_INFINITE)
  public static native boolean EvaluateGlobalBoundingBoxMinMaxCenter(long lpjFbxNode, Long pBBoxMin, Long pBBoxMax, Long pBBoxCenter, Long pTime);
  /// int  GetCharacterLinkCount () const
  public static native int GetCharacterLinkCount(long lpjFbxNode);
  /// bool  GetCharacterLink (int pIndex, FbxCharacter **pCharacter, int *pCharacterLinkType, int *pNodeId, int *pNodeSubId)
  public static native boolean GetCharacterLink(long lpjFbxNode, int pIndex, long [] pCharacter, int [] pCharacterLinkType, int [] pNodeId, int [] pNodeSubId);
  /// int  FindCharacterLink (FbxCharacter *pCharacter, int pCharacterLinkType, int pNodeId, int pNodeSubId) const
  public static native int FindCharacterLink(long lpjFbxNode, long pCharacter, int pCharacterLinkType, int pNodeId, int pNodeSubId);
  /// int  AddMaterial (FbxSurfaceMaterial *pMaterial)
  public static native int AddMaterial(long lpjFbxNode, long pMaterial);
  /// bool  RemoveMaterial (FbxSurfaceMaterial *pMaterial)
  public static native boolean RemoveMaterial(long lpjFbxNode, long pMaterial);
  /// int  GetMaterialCount () const
  public static native int GetMaterialCount(long lpjFbxNode);
  /// FbxSurfaceMaterial *  GetMaterial (int pIndex) const
  public static native long GetMaterial(long lpjFbxNode, int pIndex);
  /// void  RemoveAllMaterials ()
  public static native void RemoveAllMaterials(long lpjFbxNode);
  /// int  GetMaterialIndex (const char *pName) const
  public static native int GetMaterialIndex(long lpjFbxNode, String pName);
  /// void  SetVisibility (bool pIsVisible)
  public static native void SetVisibility(long lpjFbxNode, boolean pIsVisible);
  /// bool  GetVisibility () const
  public static native boolean GetVisibility(long lpjFbxNode);
  /// void  SetShadingMode (EShadingMode pShadingMode)
  public static native void SetShadingMode(long lpjFbxNode, int pShadingMode);
  /// EShadingMode  GetShadingMode () const
  public static native int GetShadingMode(long lpjFbxNode);
  /// void  SetPivotState (EPivotSet pPivotSet, EPivotState pPivotState)
  public static native void SetPivotState(long lpjFbxNode, int pPivotSet, int pPivotState);
  /// void  GetPivotState (EPivotSet pPivotSet, EPivotState &pPivotState) const
  public static native void GetPivotState(long lpjFbxNode, int pPivotSet, Integer pPivotState);
  /// void  SetRotationOrder (EPivotSet pPivotSet, EFbxRotationOrder pRotationOrder)
  public static native void SetRotationOrder(long lpjFbxNode, int pPivotSet, int pRotationOrder);
  /// void  GetRotationOrder (EPivotSet pPivotSet, EFbxRotationOrder &pRotationOrder) const
  public static native void GetRotationOrder(long lpjFbxNode, int pPivotSet, Integer pRotationOrder);
  /// void  SetUseRotationSpaceForLimitOnly (EPivotSet pPivotSet, bool pUseForLimitOnly)
  public static native void SetUseRotationSpaceForLimitOnly(long lpjFbxNode, int pPivotSet, boolean pUseForLimitOnly);
  /// bool  GetUseRotationSpaceForLimitOnly (EPivotSet pPivotSet) const
  public static native boolean GetUseRotationSpaceForLimitOnly(long lpjFbxNode, int pPivotSet);
  /// void  SetRotationActive (bool pVal)
  public static native void SetRotationActive(long lpjFbxNode, boolean pVal);
  /// bool  GetRotationActive () const
  public static native boolean GetRotationActive(long lpjFbxNode);
  /// void  SetQuaternionInterpolation (EPivotSet pPivotSet, EFbxQuatInterpMode pQuatIterp)
  public static native void SetQuaternionInterpolation(long lpjFbxNode, int pPivotSet, int pQuatIterp);
  /// EFbxQuatInterpMode  GetQuaternionInterpolation (EPivotSet pPivotSet) const
  public static native int GetQuaternionInterpolation(long lpjFbxNode, int pPivotSet);
  /// void  SetRotationStiffness (FbxVector4 pRotationStiffness)
  public static native void SetRotationStiffness(long lpjFbxNode, long pRotationStiffness);
  /// FbxVector4  GetRotationStiffness () const
  public static native long GetRotationStiffness(long lpjFbxNode);
  /// void  SetMinDampRange (FbxVector4 pMinDampRange)
  public static native void SetMinDampRange(long lpjFbxNode, long pMinDampRange);
  /// FbxVector4  GetMinDampRange () const
  public static native long GetMinDampRange(long lpjFbxNode);
  /// void  SetMaxDampRange (FbxVector4 pMaxDampRange)
  public static native void SetMaxDampRange(long lpjFbxNode, long pMaxDampRange);
  /// FbxVector4  GetMaxDampRange () const
  public static native long GetMaxDampRange(long lpjFbxNode);
  /// void  SetMinDampStrength (FbxVector4 pMinDampStrength)
  public static native void SetMinDampStrength(long lpjFbxNode, long pMinDampStrength);
  /// FbxVector4  GetMinDampStrength () const
  public static native long GetMinDampStrength(long lpjFbxNode);
  /// void  SetMaxDampStrength (FbxVector4 pMaxDampStrength)
  public static native void SetMaxDampStrength(long lpjFbxNode, long pMaxDampStrength);
  /// FbxVector4  GetMaxDampStrength () const
  public static native long GetMaxDampStrength(long lpjFbxNode);
  /// void  SetPreferedAngle (FbxVector4 pPreferedAngle)
  public static native void SetPreferedAngle(long lpjFbxNode, long pPreferedAngle);
  /// FbxVector4  GetPreferedAngle () const
  public static native long GetPreferedAngle(long lpjFbxNode);
  /// void  SetRotationOffset (EPivotSet pPivotSet, FbxVector4 pVector)
  public static native void SetRotationOffset(long lpjFbxNode, int pPivotSet, long pVector);
  /// const FbxVector4 &  GetRotationOffset (EPivotSet pPivotSet) const
  public static native long GetRotationOffset(long lpjFbxNode, int pPivotSet);
  /// void  SetRotationPivot (EPivotSet pPivotSet, FbxVector4 pVector)
  public static native void SetRotationPivot(long lpjFbxNode, int pPivotSet, long pVector);
  /// const FbxVector4 &  GetRotationPivot (EPivotSet pPivotSet) const
  public static native long GetRotationPivot(long lpjFbxNode, int pPivotSet);
  /// void  SetPreRotation (EPivotSet pPivotSet, FbxVector4 pVector)
  public static native void SetPreRotation(long lpjFbxNode, int pPivotSet, long pVector);
  /// const FbxVector4 &  GetPreRotation (EPivotSet pPivotSet) const
  public static native long GetPreRotation(long lpjFbxNode, int pPivotSet);
  /// void  SetPostRotation (EPivotSet pPivotSet, FbxVector4 pVector)
  public static native void SetPostRotation(long lpjFbxNode, int pPivotSet, long pVector);
  /// const FbxVector4 &  GetPostRotation (EPivotSet pPivotSet) const
  public static native long GetPostRotation(long lpjFbxNode, int pPivotSet);
  /// void  SetScalingOffset (EPivotSet pPivotSet, FbxVector4 pVector)
  public static native void SetScalingOffset(long lpjFbxNode, int pPivotSet, long pVector);
  /// const FbxVector4 &  GetScalingOffset (EPivotSet pPivotSet) const
  public static native long GetScalingOffset(long lpjFbxNode, int pPivotSet);
  /// void  SetScalingPivot (EPivotSet pPivotSet, FbxVector4 pVector)
  public static native void SetScalingPivot(long lpjFbxNode, int pPivotSet, long pVector);
  /// const FbxVector4 &  GetScalingPivot (EPivotSet pPivotSet) const
  public static native long GetScalingPivot(long lpjFbxNode, int pPivotSet);
  /// void  SetGeometricTranslation (EPivotSet pPivotSet, FbxVector4 pVector)
  public static native void SetGeometricTranslation(long lpjFbxNode, int pPivotSet, long pVector);
  /// FbxVector4  GetGeometricTranslation (EPivotSet pPivotSet) const
  public static native long GetGeometricTranslation(long lpjFbxNode, int pPivotSet);
  /// void  SetGeometricRotation (EPivotSet pPivotSet, FbxVector4 pVector)
  public static native void SetGeometricRotation(long lpjFbxNode, int pPivotSet, long pVector);
  /// FbxVector4  GetGeometricRotation (EPivotSet pPivotSet) const
  public static native long GetGeometricRotation(long lpjFbxNode, int pPivotSet);
  /// void  SetGeometricScaling (EPivotSet pPivotSet, FbxVector4 pVector)
  public static native void SetGeometricScaling(long lpjFbxNode, int pPivotSet, long pVector);
  /// FbxVector4  GetGeometricScaling (EPivotSet pPivotSet) const
  public static native long GetGeometricScaling(long lpjFbxNode, int pPivotSet);
  /// void  ResetPivotSet (FbxNode::EPivotSet pPivotSet)
  public static native void ResetPivotSet(long lpjFbxNode, int pPivotSet);
  /// void  ConvertPivotAnimationRecursive (FbxAnimStack *pAnimStack, EPivotSet pConversionTarget, double pFrameRate, bool pKeyReduce=true)
  public static native void ConvertPivotAnimationRecursive(long lpjFbxNode, long pAnimStack, int pConversionTarget, double pFrameRate, boolean pKeyReduce);
  /// void  ResetPivotSetAndConvertAnimation (double pFrameRate=30.0, bool pKeyReduce=false, bool pToNodeCenter=true, bool pForceResetLimits=false)
  public static native void ResetPivotSetAndConvertAnimation(long lpjFbxNode, double pFrameRate, boolean pKeyReduce, boolean pToNodeCenter, boolean pForceResetLimits);
  /// void  SetRotationPivotAsCenterRecursive (FbxVector4 pParentGeometricOffset=FbxVector4())
  public static native void SetRotationPivotAsCenterRecursive(long lpjFbxNode, long pParentGeometricOffset);
  /// FbxPropertyT< FbxDouble3 >  LclTranslation
  public static native void mepSetLclTranslation(long lpjFbxNode, long lpFbxDouble3);
  /// FbxPropertyT< FbxDouble3 >  LclTranslation
  public static native long mepGetLclTranslation(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble3 >  LclTranslation
  public static native long mptGetLclTranslation(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble3 >  LclRotation
  public static native void mepSetLclRotation(long lpjFbxNode, long lpFbxDouble3);
  /// FbxPropertyT< FbxDouble3 >  LclRotation
  public static native long mepGetLclRotation(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble3 >  LclRotation
  public static native long mptGetLclRotation(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble3 >  LclScaling
  public static native void mepSetLclScaling(long lpjFbxNode, long lpFbxDouble3);
  /// FbxPropertyT< FbxDouble3 >  LclScaling
  public static native long mepGetLclScaling(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble3 >  LclScaling
  public static native long mptGetLclScaling(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble >  Visibility
  public static native void mepSetVisibility(long lpjFbxNode, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  Visibility
  public static native double mepGetVisibility(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble >  Visibility
  public static native long mptGetVisibility(long lpjFbxNode);
  /// FbxPropertyT< FbxBool >  VisibilityInheritance
  public static native void mepSetVisibilityInheritance(long lpjFbxNode, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  VisibilityInheritance
  public static native boolean mepGetVisibilityInheritance(long lpjFbxNode);
  /// FbxPropertyT< FbxBool >  VisibilityInheritance
  public static native long mptGetVisibilityInheritance(long lpjFbxNode);
  /// FbxPropertyT< EFbxQuatInterpMode >  QuaternionInterpolate
  public static native void mepSetQuaternionInterpolate(long lpjFbxNode, int lpEFbxQuatInterpMode);
  /// FbxPropertyT< EFbxQuatInterpMode >  QuaternionInterpolate
  public static native int mepGetQuaternionInterpolate(long lpjFbxNode);
  /// FbxPropertyT< EFbxQuatInterpMode >  QuaternionInterpolate
  public static native long mptGetQuaternionInterpolate(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble3 >  RotationOffset
  public static native void mepSetRotationOffset(long lpjFbxNode, long lpFbxDouble3);
  /// FbxPropertyT< FbxDouble3 >  RotationOffset
  public static native long mepGetRotationOffset(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble3 >  RotationOffset
  public static native long mptGetRotationOffset(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble3 >  RotationPivot
  public static native void mepSetRotationPivot(long lpjFbxNode, long lpFbxDouble3);
  /// FbxPropertyT< FbxDouble3 >  RotationPivot
  public static native long mepGetRotationPivot(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble3 >  RotationPivot
  public static native long mptGetRotationPivot(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble3 >  ScalingOffset
  public static native void mepSetScalingOffset(long lpjFbxNode, long lpFbxDouble3);
  /// FbxPropertyT< FbxDouble3 >  ScalingOffset
  public static native long mepGetScalingOffset(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble3 >  ScalingOffset
  public static native long mptGetScalingOffset(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble3 >  ScalingPivot
  public static native void mepSetScalingPivot(long lpjFbxNode, long lpFbxDouble3);
  /// FbxPropertyT< FbxDouble3 >  ScalingPivot
  public static native long mepGetScalingPivot(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble3 >  ScalingPivot
  public static native long mptGetScalingPivot(long lpjFbxNode);
  /// FbxPropertyT< FbxBool >  TranslationActive
  public static native void mepSetTranslationActive(long lpjFbxNode, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  TranslationActive
  public static native boolean mepGetTranslationActive(long lpjFbxNode);
  /// FbxPropertyT< FbxBool >  TranslationActive
  public static native long mptGetTranslationActive(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble3 >  TranslationMin
  public static native void mepSetTranslationMin(long lpjFbxNode, long lpFbxDouble3);
  /// FbxPropertyT< FbxDouble3 >  TranslationMin
  public static native long mepGetTranslationMin(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble3 >  TranslationMin
  public static native long mptGetTranslationMin(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble3 >  TranslationMax
  public static native void mepSetTranslationMax(long lpjFbxNode, long lpFbxDouble3);
  /// FbxPropertyT< FbxDouble3 >  TranslationMax
  public static native long mepGetTranslationMax(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble3 >  TranslationMax
  public static native long mptGetTranslationMax(long lpjFbxNode);
  /// FbxPropertyT< FbxBool >  TranslationMinX
  public static native void mepSetTranslationMinX(long lpjFbxNode, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  TranslationMinX
  public static native boolean mepGetTranslationMinX(long lpjFbxNode);
  /// FbxPropertyT< FbxBool >  TranslationMinX
  public static native long mptGetTranslationMinX(long lpjFbxNode);
  /// FbxPropertyT< FbxBool >  TranslationMinY
  public static native void mepSetTranslationMinY(long lpjFbxNode, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  TranslationMinY
  public static native boolean mepGetTranslationMinY(long lpjFbxNode);
  /// FbxPropertyT< FbxBool >  TranslationMinY
  public static native long mptGetTranslationMinY(long lpjFbxNode);
  /// FbxPropertyT< FbxBool >  TranslationMinZ
  public static native void mepSetTranslationMinZ(long lpjFbxNode, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  TranslationMinZ
  public static native boolean mepGetTranslationMinZ(long lpjFbxNode);
  /// FbxPropertyT< FbxBool >  TranslationMinZ
  public static native long mptGetTranslationMinZ(long lpjFbxNode);
  /// FbxPropertyT< FbxBool >  TranslationMaxX
  public static native void mepSetTranslationMaxX(long lpjFbxNode, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  TranslationMaxX
  public static native boolean mepGetTranslationMaxX(long lpjFbxNode);
  /// FbxPropertyT< FbxBool >  TranslationMaxX
  public static native long mptGetTranslationMaxX(long lpjFbxNode);
  /// FbxPropertyT< FbxBool >  TranslationMaxY
  public static native void mepSetTranslationMaxY(long lpjFbxNode, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  TranslationMaxY
  public static native boolean mepGetTranslationMaxY(long lpjFbxNode);
  /// FbxPropertyT< FbxBool >  TranslationMaxY
  public static native long mptGetTranslationMaxY(long lpjFbxNode);
  /// FbxPropertyT< FbxBool >  TranslationMaxZ
  public static native void mepSetTranslationMaxZ(long lpjFbxNode, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  TranslationMaxZ
  public static native boolean mepGetTranslationMaxZ(long lpjFbxNode);
  /// FbxPropertyT< FbxBool >  TranslationMaxZ
  public static native long mptGetTranslationMaxZ(long lpjFbxNode);
  /// FbxPropertyT< EFbxRotationOrder >  RotationOrder
  public static native void mepSetRotationOrder(long lpjFbxNode, int lpEFbxRotationOrder);
  /// FbxPropertyT< EFbxRotationOrder >  RotationOrder
  public static native int mepGetRotationOrder(long lpjFbxNode);
  /// FbxPropertyT< EFbxRotationOrder >  RotationOrder
  public static native long mptGetRotationOrder(long lpjFbxNode);
  /// FbxPropertyT< FbxBool >  RotationSpaceForLimitOnly
  public static native void mepSetRotationSpaceForLimitOnly(long lpjFbxNode, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  RotationSpaceForLimitOnly
  public static native boolean mepGetRotationSpaceForLimitOnly(long lpjFbxNode);
  /// FbxPropertyT< FbxBool >  RotationSpaceForLimitOnly
  public static native long mptGetRotationSpaceForLimitOnly(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble >  RotationStiffnessX
  public static native void mepSetRotationStiffnessX(long lpjFbxNode, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  RotationStiffnessX
  public static native double mepGetRotationStiffnessX(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble >  RotationStiffnessX
  public static native long mptGetRotationStiffnessX(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble >  RotationStiffnessY
  public static native void mepSetRotationStiffnessY(long lpjFbxNode, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  RotationStiffnessY
  public static native double mepGetRotationStiffnessY(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble >  RotationStiffnessY
  public static native long mptGetRotationStiffnessY(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble >  RotationStiffnessZ
  public static native void mepSetRotationStiffnessZ(long lpjFbxNode, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  RotationStiffnessZ
  public static native double mepGetRotationStiffnessZ(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble >  RotationStiffnessZ
  public static native long mptGetRotationStiffnessZ(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble >  AxisLen
  public static native void mepSetAxisLen(long lpjFbxNode, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  AxisLen
  public static native double mepGetAxisLen(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble >  AxisLen
  public static native long mptGetAxisLen(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble3 >  PreRotation
  public static native void mepSetPreRotation(long lpjFbxNode, long lpFbxDouble3);
  /// FbxPropertyT< FbxDouble3 >  PreRotation
  public static native long mepGetPreRotation(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble3 >  PreRotation
  public static native long mptGetPreRotation(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble3 >  PostRotation
  public static native void mepSetPostRotation(long lpjFbxNode, long lpFbxDouble3);
  /// FbxPropertyT< FbxDouble3 >  PostRotation
  public static native long mepGetPostRotation(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble3 >  PostRotation
  public static native long mptGetPostRotation(long lpjFbxNode);
  /// FbxPropertyT< FbxBool >  RotationActive
  public static native void mepSetRotationActive(long lpjFbxNode, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  RotationActive
  public static native boolean mepGetRotationActive(long lpjFbxNode);
  /// FbxPropertyT< FbxBool >  RotationActive
  public static native long mptGetRotationActive(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble3 >  RotationMin
  public static native void mepSetRotationMin(long lpjFbxNode, long lpFbxDouble3);
  /// FbxPropertyT< FbxDouble3 >  RotationMin
  public static native long mepGetRotationMin(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble3 >  RotationMin
  public static native long mptGetRotationMin(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble3 >  RotationMax
  public static native void mepSetRotationMax(long lpjFbxNode, long lpFbxDouble3);
  /// FbxPropertyT< FbxDouble3 >  RotationMax
  public static native long mepGetRotationMax(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble3 >  RotationMax
  public static native long mptGetRotationMax(long lpjFbxNode);
  /// FbxPropertyT< FbxBool >  RotationMinX
  public static native void mepSetRotationMinX(long lpjFbxNode, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  RotationMinX
  public static native boolean mepGetRotationMinX(long lpjFbxNode);
  /// FbxPropertyT< FbxBool >  RotationMinX
  public static native long mptGetRotationMinX(long lpjFbxNode);
  /// FbxPropertyT< FbxBool >  RotationMinY
  public static native void mepSetRotationMinY(long lpjFbxNode, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  RotationMinY
  public static native boolean mepGetRotationMinY(long lpjFbxNode);
  /// FbxPropertyT< FbxBool >  RotationMinY
  public static native long mptGetRotationMinY(long lpjFbxNode);
  /// FbxPropertyT< FbxBool >  RotationMinZ
  public static native void mepSetRotationMinZ(long lpjFbxNode, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  RotationMinZ
  public static native boolean mepGetRotationMinZ(long lpjFbxNode);
  /// FbxPropertyT< FbxBool >  RotationMinZ
  public static native long mptGetRotationMinZ(long lpjFbxNode);
  /// FbxPropertyT< FbxBool >  RotationMaxX
  public static native void mepSetRotationMaxX(long lpjFbxNode, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  RotationMaxX
  public static native boolean mepGetRotationMaxX(long lpjFbxNode);
  /// FbxPropertyT< FbxBool >  RotationMaxX
  public static native long mptGetRotationMaxX(long lpjFbxNode);
  /// FbxPropertyT< FbxBool >  RotationMaxY
  public static native void mepSetRotationMaxY(long lpjFbxNode, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  RotationMaxY
  public static native boolean mepGetRotationMaxY(long lpjFbxNode);
  /// FbxPropertyT< FbxBool >  RotationMaxY
  public static native long mptGetRotationMaxY(long lpjFbxNode);
  /// FbxPropertyT< FbxBool >  RotationMaxZ
  public static native void mepSetRotationMaxZ(long lpjFbxNode, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  RotationMaxZ
  public static native boolean mepGetRotationMaxZ(long lpjFbxNode);
  /// FbxPropertyT< FbxBool >  RotationMaxZ
  public static native long mptGetRotationMaxZ(long lpjFbxNode);
  /// FbxPropertyT< FbxBool >  ScalingActive
  public static native void mepSetScalingActive(long lpjFbxNode, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  ScalingActive
  public static native boolean mepGetScalingActive(long lpjFbxNode);
  /// FbxPropertyT< FbxBool >  ScalingActive
  public static native long mptGetScalingActive(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble3 >  ScalingMin
  public static native void mepSetScalingMin(long lpjFbxNode, long lpFbxDouble3);
  /// FbxPropertyT< FbxDouble3 >  ScalingMin
  public static native long mepGetScalingMin(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble3 >  ScalingMin
  public static native long mptGetScalingMin(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble3 >  ScalingMax
  public static native void mepSetScalingMax(long lpjFbxNode, long lpFbxDouble3);
  /// FbxPropertyT< FbxDouble3 >  ScalingMax
  public static native long mepGetScalingMax(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble3 >  ScalingMax
  public static native long mptGetScalingMax(long lpjFbxNode);
  /// FbxPropertyT< FbxBool >  ScalingMinX
  public static native void mepSetScalingMinX(long lpjFbxNode, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  ScalingMinX
  public static native boolean mepGetScalingMinX(long lpjFbxNode);
  /// FbxPropertyT< FbxBool >  ScalingMinX
  public static native long mptGetScalingMinX(long lpjFbxNode);
  /// FbxPropertyT< FbxBool >  ScalingMinY
  public static native void mepSetScalingMinY(long lpjFbxNode, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  ScalingMinY
  public static native boolean mepGetScalingMinY(long lpjFbxNode);
  /// FbxPropertyT< FbxBool >  ScalingMinY
  public static native long mptGetScalingMinY(long lpjFbxNode);
  /// FbxPropertyT< FbxBool >  ScalingMinZ
  public static native void mepSetScalingMinZ(long lpjFbxNode, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  ScalingMinZ
  public static native boolean mepGetScalingMinZ(long lpjFbxNode);
  /// FbxPropertyT< FbxBool >  ScalingMinZ
  public static native long mptGetScalingMinZ(long lpjFbxNode);
  /// FbxPropertyT< FbxBool >  ScalingMaxX
  public static native void mepSetScalingMaxX(long lpjFbxNode, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  ScalingMaxX
  public static native boolean mepGetScalingMaxX(long lpjFbxNode);
  /// FbxPropertyT< FbxBool >  ScalingMaxX
  public static native long mptGetScalingMaxX(long lpjFbxNode);
  /// FbxPropertyT< FbxBool >  ScalingMaxY
  public static native void mepSetScalingMaxY(long lpjFbxNode, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  ScalingMaxY
  public static native boolean mepGetScalingMaxY(long lpjFbxNode);
  /// FbxPropertyT< FbxBool >  ScalingMaxY
  public static native long mptGetScalingMaxY(long lpjFbxNode);
  /// FbxPropertyT< FbxBool >  ScalingMaxZ
  public static native void mepSetScalingMaxZ(long lpjFbxNode, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  ScalingMaxZ
  public static native boolean mepGetScalingMaxZ(long lpjFbxNode);
  /// FbxPropertyT< FbxBool >  ScalingMaxZ
  public static native long mptGetScalingMaxZ(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble3 >  GeometricTranslation
  public static native void mepSetGeometricTranslation(long lpjFbxNode, long lpFbxDouble3);
  /// FbxPropertyT< FbxDouble3 >  GeometricTranslation
  public static native long mepGetGeometricTranslation(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble3 >  GeometricTranslation
  public static native long mptGetGeometricTranslation(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble3 >  GeometricRotation
  public static native void mepSetGeometricRotation(long lpjFbxNode, long lpFbxDouble3);
  /// FbxPropertyT< FbxDouble3 >  GeometricRotation
  public static native long mepGetGeometricRotation(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble3 >  GeometricRotation
  public static native long mptGetGeometricRotation(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble3 >  GeometricScaling
  public static native void mepSetGeometricScaling(long lpjFbxNode, long lpFbxDouble3);
  /// FbxPropertyT< FbxDouble3 >  GeometricScaling
  public static native long mepGetGeometricScaling(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble3 >  GeometricScaling
  public static native long mptGetGeometricScaling(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble >  MinDampRangeX
  public static native void mepSetMinDampRangeX(long lpjFbxNode, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  MinDampRangeX
  public static native double mepGetMinDampRangeX(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble >  MinDampRangeX
  public static native long mptGetMinDampRangeX(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble >  MinDampRangeY
  public static native void mepSetMinDampRangeY(long lpjFbxNode, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  MinDampRangeY
  public static native double mepGetMinDampRangeY(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble >  MinDampRangeY
  public static native long mptGetMinDampRangeY(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble >  MinDampRangeZ
  public static native void mepSetMinDampRangeZ(long lpjFbxNode, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  MinDampRangeZ
  public static native double mepGetMinDampRangeZ(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble >  MinDampRangeZ
  public static native long mptGetMinDampRangeZ(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble >  MaxDampRangeX
  public static native void mepSetMaxDampRangeX(long lpjFbxNode, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  MaxDampRangeX
  public static native double mepGetMaxDampRangeX(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble >  MaxDampRangeX
  public static native long mptGetMaxDampRangeX(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble >  MaxDampRangeY
  public static native void mepSetMaxDampRangeY(long lpjFbxNode, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  MaxDampRangeY
  public static native double mepGetMaxDampRangeY(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble >  MaxDampRangeY
  public static native long mptGetMaxDampRangeY(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble >  MaxDampRangeZ
  public static native void mepSetMaxDampRangeZ(long lpjFbxNode, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  MaxDampRangeZ
  public static native double mepGetMaxDampRangeZ(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble >  MaxDampRangeZ
  public static native long mptGetMaxDampRangeZ(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble >  MinDampStrengthX
  public static native void mepSetMinDampStrengthX(long lpjFbxNode, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  MinDampStrengthX
  public static native double mepGetMinDampStrengthX(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble >  MinDampStrengthX
  public static native long mptGetMinDampStrengthX(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble >  MinDampStrengthY
  public static native void mepSetMinDampStrengthY(long lpjFbxNode, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  MinDampStrengthY
  public static native double mepGetMinDampStrengthY(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble >  MinDampStrengthY
  public static native long mptGetMinDampStrengthY(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble >  MinDampStrengthZ
  public static native void mepSetMinDampStrengthZ(long lpjFbxNode, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  MinDampStrengthZ
  public static native double mepGetMinDampStrengthZ(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble >  MinDampStrengthZ
  public static native long mptGetMinDampStrengthZ(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble >  MaxDampStrengthX
  public static native void mepSetMaxDampStrengthX(long lpjFbxNode, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  MaxDampStrengthX
  public static native double mepGetMaxDampStrengthX(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble >  MaxDampStrengthX
  public static native long mptGetMaxDampStrengthX(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble >  MaxDampStrengthY
  public static native void mepSetMaxDampStrengthY(long lpjFbxNode, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  MaxDampStrengthY
  public static native double mepGetMaxDampStrengthY(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble >  MaxDampStrengthY
  public static native long mptGetMaxDampStrengthY(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble >  MaxDampStrengthZ
  public static native void mepSetMaxDampStrengthZ(long lpjFbxNode, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  MaxDampStrengthZ
  public static native double mepGetMaxDampStrengthZ(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble >  MaxDampStrengthZ
  public static native long mptGetMaxDampStrengthZ(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble >  PreferedAngleX
  public static native void mepSetPreferedAngleX(long lpjFbxNode, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  PreferedAngleX
  public static native double mepGetPreferedAngleX(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble >  PreferedAngleX
  public static native long mptGetPreferedAngleX(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble >  PreferedAngleY
  public static native void mepSetPreferedAngleY(long lpjFbxNode, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  PreferedAngleY
  public static native double mepGetPreferedAngleY(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble >  PreferedAngleY
  public static native long mptGetPreferedAngleY(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble >  PreferedAngleZ
  public static native void mepSetPreferedAngleZ(long lpjFbxNode, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  PreferedAngleZ
  public static native double mepGetPreferedAngleZ(long lpjFbxNode);
  /// FbxPropertyT< FbxDouble >  PreferedAngleZ
  public static native long mptGetPreferedAngleZ(long lpjFbxNode);
  /// FbxPropertyT< FbxReference >  LookAtProperty
  public static native void mepSetLookAtProperty(long lpjFbxNode, long lpFbxReference);
  /// FbxPropertyT< FbxReference >  LookAtProperty
  public static native long mepGetLookAtProperty(long lpjFbxNode);
  /// FbxPropertyT< FbxReference >  LookAtProperty
  public static native long mptGetLookAtProperty(long lpjFbxNode);
  /// FbxPropertyT< FbxReference >  UpVectorProperty
  public static native void mepSetUpVectorProperty(long lpjFbxNode, long lpFbxReference);
  /// FbxPropertyT< FbxReference >  UpVectorProperty
  public static native long mepGetUpVectorProperty(long lpjFbxNode);
  /// FbxPropertyT< FbxReference >  UpVectorProperty
  public static native long mptGetUpVectorProperty(long lpjFbxNode);
  /// FbxPropertyT< FbxBool >  Show
  public static native void mepSetShow(long lpjFbxNode, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  Show
  public static native boolean mepGetShow(long lpjFbxNode);
  /// FbxPropertyT< FbxBool >  Show
  public static native long mptGetShow(long lpjFbxNode);
  /// FbxPropertyT< FbxBool >  NegativePercentShapeSupport
  public static native void mepSetNegativePercentShapeSupport(long lpjFbxNode, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  NegativePercentShapeSupport
  public static native boolean mepGetNegativePercentShapeSupport(long lpjFbxNode);
  /// FbxPropertyT< FbxBool >  NegativePercentShapeSupport
  public static native long mptGetNegativePercentShapeSupport(long lpjFbxNode);
  /// FbxPropertyT< FbxInt >  DefaultAttributeIndex
  public static native void mepSetDefaultAttributeIndex(long lpjFbxNode, int lpFbxInt);
  /// FbxPropertyT< FbxInt >  DefaultAttributeIndex
  public static native int mepGetDefaultAttributeIndex(long lpjFbxNode);
  /// FbxPropertyT< FbxInt >  DefaultAttributeIndex
  public static native long mptGetDefaultAttributeIndex(long lpjFbxNode);
  /// FbxPropertyT< FbxBool >  Freeze
  public static native void mepSetFreeze(long lpjFbxNode, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  Freeze
  public static native boolean mepGetFreeze(long lpjFbxNode);
  /// FbxPropertyT< FbxBool >  Freeze
  public static native long mptGetFreeze(long lpjFbxNode);
  /// FbxPropertyT< FbxBool >  LODBox
  public static native void mepSetLODBox(long lpjFbxNode, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  LODBox
  public static native boolean mepGetLODBox(long lpjFbxNode);
  /// FbxPropertyT< FbxBool >  LODBox
  public static native long mptGetLODBox(long lpjFbxNode);
  /// FbxNode * Create( FbxObject* lpFbxObject,  const char* pName )
  public static native long Create(   long lpFbxObject, String pName);
}
