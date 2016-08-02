
function classInWhiteList()
{
	for e in FbxAMatrix \
FbxAnimCurve \
FbxAnimCurveBase \
FbxAnimCurveDef \
FbxAnimCurveFilter \
FbxAnimCurveFilterConstantKeyReducer \
FbxAnimCurveFilterGimbleKiller \
FbxAnimCurveFilterKeyReducer \
FbxAnimCurveFilterKeySync \
FbxAnimCurveFilterMatrixConverter \
FbxAnimCurveFilterResample \
FbxAnimCurveFilterScale \
FbxAnimCurveFilterScaleByCurve \
FbxAnimCurveFilterScaleCompensate \
FbxAnimCurveFilterTSS \
FbxAnimCurveFilterUnroll \
FbxAnimCurveKey \
FbxAnimCurveKeyBase \
FbxAnimCurveKey_Impl \
FbxAnimCurveNode \
FbxAnimEvalState \
FbxAnimEvaluator \
FbxAnimLayer \
FbxAnimStack \
FbxAnimUtilities \
FbxAxisSystem \
FbxBaseAllocator \
FbxBitSet \
FbxBlendShape \
FbxBlendShapeChannel \
FbxBoundary \
FbxCache \
FbxCachedEffect \
FbxCamera \
FbxCameraManipulator \
FbxCameraStereo \
FbxCameraSwitcher \
FbxCharPtrSet \
FbxCharacter \
FbxCharacterLink \
FbxCharacterPose \
FbxClassId \
FbxCluster \
FbxCollection \
FbxCollectionExclusive \
FbxColor \
FbxConstraint \
FbxConstraintAim \
FbxConstraintParent \
FbxConstraintPosition \
FbxConstraintRotation \
FbxConstraintScale \
FbxConstraintSingleChainIK \
FbxContainer \
FbxContainerTemplate \
FbxControlSet \
FbxControlSetLink \
FbxControlSetPlug \
FbxDataType \
FbxDateTime \
FbxDeformationsEvaluator \
FbxDeformer \
FbxDegreeToRadianBOF \
FbxDisplayLayer \
FbxDistance \
FbxDocument \
FbxPropertyFlags \
FbxDocumentInfo \
FbxDouble3 \
FbxDouble4 \
FbxDualQuaternion \
FbxEffector \
FbxEmitter \
FbxEntryView \
FbxExporter \
FbxFile \
FbxFileTexture \
FbxFileUtils \
FbxFolder \
FbxGate \
FbxGeometry \
FbxGeometryBase \
FbxGeometryConverter \
FbxGeometryWeightedMap \
FbxGlobalCameraSettings \
FbxGlobalLightSettings \
FbxGlobalSettings \
FbxGobo \
FbxHalfFloat \
FbxHungryAllocator \
FbxImporter \
FbxJnimgr \
FbxLODGroup \
FbxLayer \
FbxLayerContainer \
FbxLayerElement \
FbxLayerElementArray \
FbxLayerElementCrease \
FbxLayerElementHole \
FbxLayerElementMaterial \
FbxLayerElementSmoothing \
FbxLayerElementTexture \
FbxLayerElementUserData \
FbxLayeredTexture \
FbxLight \
FbxLimits \
FbxLimitsUtilities \
FbxLine \
FbxLocalTime \
FbxManager \
FbxMarker \
FbxMaterialConverter \
FbxMatrix \
FbxMesh \
FbxNameFilter \
FbxNameHandler \
FbxNode \
FbxNodeAttribute \
FbxNodeEvalState \
FbxNull \
FbxNurbs \
FbxNurbsCurve \
FbxNurbsSurface \
FbxObject \
FbxObjectFilter \
FbxOpticalReference \
FbxPatch \
FbxPathUtils \
FbxPeripheral \
FbxPose \
FbxProceduralTexture \
FbxQuaternion \
FbxReader \
FbxRotationOrder \
FbxScene \
FbxSceneRenamer \
FbxSemanticEntryView \
FbxShape \
FbxSkeleton \
FbxSkin \
FbxStatistics \
FbxStatus \
FbxStream \
FbxString \
FbxStringList \
FbxStringListItem \
FbxStringSymbol \
FbxSubDeformer \
FbxSurfaceLambert \
FbxSurfaceMaterial \
FbxSurfacePhong \
FbxSystemUnit \
FbxTakeInfo \
FbxTexture \
FbxThumbnail \
FbxTime \
FbxTimeSpan \
FbxTransform \
FbxTrimNurbsSurface \
FbxVector2 \
FbxVector4 \
FbxVertexCacheDeformer \
FbxVideo \
FbxWeightedMapping \
FbxWriter \
FbxArrayLong \
FbxArrayBool \
FbxArrayInt \
FbxArrayDouble \
FbxArrayVector2 \
FbxArrayVector4 \
FbxPropertyTBool \
FbxPropertyTInt \
FbxPropertyTDouble \
FbxPropertyTFbxDouble3 \
FbxPropertyTFbxReference \
FbxLayerElementArrayTemplateBool \
FbxLayerElementArrayTemplateInt \
FbxLayerElementArrayTemplateDouble \
FbxLayerElementArrayTemplateVector2 \
FbxLayerElementArrayTemplateVector4
do
		if [[ "$e" = "$1" ]];then
			return 0
		fi
	done

	return 1
}


function trimbes()
{
#echo "$1" |  awk '{gsub(/^ +| +$/,"")} {print $0 }'
output="${1/
/ }"
shopt -s extglob
 
### Trim leading whitespaces ###
output="${output##*( )}"
 
### trim trailing whitespaces  ##
output="${output%%*( )}"
echo "${output}"
# turn it off
shopt -u extglob
}

containsElement () {
  for e in "${@:2}"; do [[ "$e" = "$1" ]] && return 1; done
  return 0
}

countElement()
{
  declare -i ret
  ret=0
  for e in "${@:2}"; do 
	if [[ "$e" = "$1" ]];then
		ret=$ret+1
	fi
  done

  return $ret
}



function prereplace()
{
	sed -E 's/virtual //g' | sed -E 's/=([^,\)]+)([,\)])/\2/g'  | tr '	' ' '
}

function grepIdentifier()
{
	echo "$1" | grep -E '^[ ]*[a-zA-Z_][a-z0-9A-Z_]+[ ]*$'
}

function isValidMehtodName()
{
	echo "$1" | grep -E '^[~]{0,1}[a-zA-Z_][a-z0-9A-Z_]+$'
}

function isValidTypeString()
{
	pt=`trimbes "$pt"`
	ptt=`echo "$1" | grep -E '^[ ]*T[ ]*(const)?[ \*\&]*$'`

	if [ "$ptt" != "" ]; then
		echo ""
		return 0
	fi

	pt=`echo "$1" | grep -E  '^(const|singed|unsigned)?[ ]*([a-zA-Z_][a-z0-9A-Z_:]*)[ ]*(<[ ]*[a-zA-Z_][a-z0-9A-Z_:]*[ \*&]*>)?[ ]*( const)?([ \*&]*)$'`
	
	echo "$pt"
}


function isValidParamName()
{
	trimbes "$1" | grep -E '^[a-zA-Z_][a-z0-9A-Z_]*([ ]*\[[ ]*[0-9]*[ ]*\])?$'
}


function grepPopertyDefine()
{
	 grep -E '^[ ]*FbxPropertyT[ ]*<[^<>]+>[ ]*[a-zA-Z_][a-z0-9A-Z_]*[ ]*$'
}



# 00033 
# 00034 typedef bool                    FbxBool;
# 00035 typedef signed char             FbxChar;
# 00036 typedef unsigned char   FbxUChar;
# 00037 typedef signed short    FbxShort;
# 00038 typedef unsigned short  FbxUShort;
# 00039 typedef signed int              FbxInt;
# 00040 typedef unsigned int    FbxUInt;
# 00041 typedef float                   FbxFloat;
# 00042 typedef double                  FbxDouble;
# 00043 
# 00044 typedef FbxBool*                FbxBoolPtr;
# 00045 typedef FbxChar*                FbxCharPtr;
# 00046 typedef FbxUChar*               FbxUCharPtr;
# 00047 typedef FbxShort*               FbxShortPtr;
# 00048 typedef FbxUShort*              FbxUShortPtr;
# 00049 typedef FbxInt*                 FbxIntPtr;
# 00050 typedef FbxUInt*                FbxUIntPtr;
# 00051 typedef FbxFloat*               FbxFloatPtr;
# 00052 typedef FbxDouble*              FbxDoublePtr;
# 00053 
# 00054 typedef FbxInt                  FbxEnum;
# 00055 typedef FbxObject*              FbxReference;


function isPrimativeTypes()
{
	for ppt in bool byte char short int long float double; do
		if [[ "$1" = "$ppt" ]]; then
			return 0
		fi
	done
	return 1
}


function isJavaPrimativeTypes()
{
	for ppt in boolean byte char short int long float double; do
		if [[ "$1" = "$ppt" ]]; then
			return 0
		fi
	done
	return 1
}

function isJniPrimativeTypes()
{
	for ppt in jboolean jbyte jchar jshort jint jlong jfloat double; do
		if [[ "$1" = "$ppt" ]]; then
			return 0
		fi
	done
	return 1
}


function isNoStaticCreateFunc()
{
	for ppt in FbxAnimCurveDef \
	  FbxAnimEvalState \
	  FbxAnimUtilities \
	  FbxCharCompare \
	  FbxCharacterPropertyInfo \
	  FbxClassId \
	  FbxControlSet \
	  FbxEuler \
	  FbxEmitter \
	  FbxStream \
	  FbxEventHandler \
	  FbxFileUtils \
	  FbxFolder \
	  FbxLayer \
	  FbxGeometryConverter \
	  FbxGlobalCameraSettings \
	  FbxLayerElementTexture \
	  FbxGlobalLightSettings \
	  FbxCriteria \
	  FbxLayerElement \
	  FbxLayerElementMaterial \
	  FbxConditionalBOF \
	  FbxConnection \
	  FbxConstraintUtils \
	  FbxDeformationsEvaluator \
	  FbxDegreeToRadianBOF \
	  FbxLayerElementUserData \
	  FbxLayerElementVertexColor \
	  FbxLayerElementUV \
	  FbxLayerElementTangent \
	  FbxLayerElementVisibility \
	  FbxMultiplyBOF \
	  FbxMultiplyDistBOF \
	  FbxNodeDirectionBOF \
	  FbxNodePositionBOF \
	  FbxNameMapCompare \
	  FbxObjectFilter \
	  FbxPathUtils \
	  FbxPeripheral \
	  FbxPropertyFlags \
	  FbxPropertyTBool \
	FbxPropertyTInt \
	FbxPropertyTDouble \
	FbxPropertyTFbxDouble3 \
	FbxPropertyTFbxReference \
	  FbxAtomOp; do
		if [[ "$1" = "$ppt" ]]; then
			return 0
		fi
	done

	return 1
}

function isAbstractClass()
{
	for ppt in FbxAnimCurveFilter \
		FbxAnimCurveKey_Impl \
		FbxLayerElementUV \
		FbxObjectFilter \
		FbxReader \
		FbxWriter \
		FbxLayerElementNormal \
		FbxBaseAllocator \
		FbxPeripheral \
		FbxEventBase ; do
		if [[ "$1" = "$ppt" ]]; then
			return 0
		fi
	done

	return 1
}

function getCreateParentType()
{
	if [ "$1" = "FbxAnimCurve" ]; then echo "FbxScene* pContainer, const char* pName"
	elif [[ "$1" =~ ^FbxLayer ]]; then echo "FbxLayerContainer* pOwner, const char* pName"
	elif [ "$1" = "FbxAnimCurveBase" ]; then echo "FbxManager* pContainer, const char* pName"
	elif [ "$1" = "FbxUserNotification" ]; then echo "FbxUserNotification* pContainer, const FbxString& pLogFileName, const FbxString& pSessionDescription"
	elif [ "$1" = "FbxManager" ]; then echo ""
	elif [ "$1" = "FbxAnimEvaluator" ]; then echo "FbxManager* lpFbxManager, const char* pName "
	elif [ "$1" = "FbxExporter" ]; then echo "FbxIOBase* lpFbxIOBase,  const char* pName" 
	elif [ "$1" = "FbxGlobalSettings" ]; then echo "FbxObject* lpFbxObject,  const char* pName"
	elif [ "$1" = "FbxImporter" ]; then echo "FbxIOBase* lpFbxIOBase,  const char* pName"
	elif [ "$1" = "FbxIOBase" ]; then echo "FbxObject* lpFbxObject,  const char* pName"
	elif [ "$1" = "FbxIOSettings" ]; then echo "FbxObject* lpFbxObject,  const char* pName"
	elif [ "$1" = "FbxAnimCurveNode" ]; then echo "FbxObject* lpFbxObject,  const char* pName"
	elif [ "$1" = "FbxAnimEvalClassic" ]; then echo "FbxAnimEvaluator* lpFbxAnimEvaluator,  const char* pName"
	elif [ "$1" = "FbxAnimLayer" ]; then echo "FbxCollection* lpFbxCollection,  const char* pName"
	elif [ "$1" = "FbxAnimStack" ]; then echo "FbxCollection* lpFbxCollection,  const char* pName"
	elif [ "$1" = "FbxCharacter" ]; then echo "FbxConstraint* lpFbxConstraint,  const char* pName"
	elif [ "$1" = "FbxCharacterPose" ]; then echo "FbxObject* lpFbxObject,  const char* pName"
	elif [ "$1" = "FbxConstraint" ]; then echo "FbxObject* lpFbxObject,  const char* pName"
	elif [ "$1" = "FbxConstraintAim" ]; then echo "FbxConstraint* lpFbxConstraint,  const char* pName"
	elif [ "$1" = "FbxConstraintCustom" ]; then echo "FbxConstraint* lpFbxConstraint,  const char* pName"
	elif [ "$1" = "FbxConstraintParent" ]; then echo "FbxConstraint* lpFbxConstraint,  const char* pName"
	elif [ "$1" = "FbxConstraintPosition" ]; then echo "FbxConstraint* lpFbxConstraint,  const char* pName"
	elif [ "$1" = "FbxConstraintRotation" ]; then echo "FbxConstraint* lpFbxConstraint,  const char* pName"
	elif [ "$1" = "FbxConstraintScale" ]; then echo "FbxConstraint* lpFbxConstraint,  const char* pName"
	elif [ "$1" = "FbxConstraintSingleChainIK" ]; then echo "FbxConstraint* lpFbxConstraint,  const char* pName"
	elif [ "$1" = "FbxControlSetPlug" ]; then echo "FbxObject* lpFbxObject,  const char* pName"
	elif [ "$1" = "FbxCollection" ]; then echo "FbxObject* lpFbxObject,  const char* pName"
	elif [ "$1" = "FbxCollectionExclusive" ]; then echo "FbxCollection* lpFbxCollection,  const char* pName"
	elif [ "$1" = "FbxContainer" ]; then echo "FbxObject* lpFbxObject,  const char* pName"
	elif [ "$1" = "FbxContainerTemplate" ]; then echo "FbxObject* lpFbxObject,  const char* pName"
	elif [ "$1" = "FbxDisplayLayer" ]; then echo "FbxCollectionExclusive* lpFbxCollectionExclusive,  const char* pName"
	elif [ "$1" = "FbxDocument" ]; then echo "FbxCollection* lpFbxCollection,  const char* pName"
	elif [ "$1" = "FbxDocumentInfo" ]; then echo "FbxObject* lpFbxObject,  const char* pName"
	elif [ "$1" = "FbxEnvironment" ]; then echo "FbxObject* lpFbxObject,  const char* pName"
	elif [ "$1" = "FbxLibrary" ]; then echo "FbxDocument* lpFbxDocument,  const char* pName"
	elif [ "$1" = "FbxObjectMetaData" ]; then echo "FbxObject* lpFbxObject,  const char* pName"
	elif [ "$1" = "FbxPose" ]; then echo "FbxObject* lpFbxObject,  const char* pName"
	elif [ "$1" = "FbxSceneReference" ]; then echo "FbxObject* lpFbxObject,  const char* pName"
	elif [ "$1" = "FbxScene" ]; then echo "FbxDocument* lpFbxDocument,  const char* pName"
	elif [ "$1" = "FbxSelectionNode" ]; then echo "FbxObject* lpFbxObject,  const char* pName"
	elif [ "$1" = "FbxSelectionSet" ]; then echo "FbxCollection* lpFbxCollection,  const char* pName"
	elif [ "$1" = "FbxThumbnail" ]; then echo "FbxObject* lpFbxObject,  const char* pName"
	elif [ "$1" = "FbxVideo" ]; then echo "FbxObject* lpFbxObject,  const char* pName"
	elif [ "$1" = "FbxBlendShape" ]; then echo "FbxDeformer* lpFbxDeformer,  const char* pName"
	elif [ "$1" = "FbxBlendShapeChannel" ]; then echo "FbxSubDeformer* lpFbxSubDeformer,  const char* pName"
	elif [ "$1" = "FbxCache" ]; then echo "FbxObject* lpFbxObject,  const char* pName"
	elif [ "$1" = "FbxCachedEffect" ]; then echo "FbxNodeAttribute* lpFbxNodeAttribute,  const char* pName"
	elif [ "$1" = "FbxCamera" ]; then echo "FbxNodeAttribute* lpFbxNodeAttribute,  const char* pName"
	elif [ "$1" = "FbxCameraStereo" ]; then echo "FbxCamera* lpFbxCamera,  const char* pName"
	elif [ "$1" = "FbxCameraSwitcher" ]; then echo "FbxNodeAttribute* lpFbxNodeAttribute,  const char* pName"
	elif [ "$1" = "FbxCluster" ]; then echo "FbxSubDeformer* lpFbxSubDeformer,  const char* pName"
	elif [ "$1" = "FbxDeformer" ]; then echo "FbxObject* lpFbxObject,  const char* pName"
	elif [ "$1" = "FbxGenericNode" ]; then echo "FbxObject* lpFbxObject,  const char* pName"
	elif [ "$1" = "FbxGeometry" ]; then echo "FbxGeometryBase* lpFbxGeometryBase,  const char* pName"
	elif [ "$1" = "FbxGeometryBase" ]; then echo "FbxLayerContainer* lpFbxLayerContainer,  const char* pName"
	elif [ "$1" = "FbxGeometryWeightedMap" ]; then echo "FbxObject* lpFbxObject,  const char* pName"
	elif [ "$1" = "FbxLayerContainer" ]; then echo "FbxNodeAttribute* lpFbxNodeAttribute,  const char* pName"
	elif [ "$1" = "FbxLight" ]; then echo "FbxNodeAttribute* lpFbxNodeAttribute,  const char* pName"
	elif [ "$1" = "FbxLine" ]; then echo "FbxGeometry* lpFbxGeometry,  const char* pName"
	elif [ "$1" = "FbxLODGroup" ]; then echo "FbxNodeAttribute* lpFbxNodeAttribute,  const char* pName"
	elif [ "$1" = "FbxMarker" ]; then echo "FbxNodeAttribute* lpFbxNodeAttribute,  const char* pName"
	elif [ "$1" = "FbxMesh" ]; then echo "FbxGeometry* lpFbxGeometry,  const char* pName"
	elif [ "$1" = "FbxNode" ]; then echo "FbxObject* lpFbxObject,  const char* pName"
	elif [ "$1" = "FbxNodeAttribute" ]; then echo "FbxObject* lpFbxObject,  const char* pName"
	elif [ "$1" = "FbxNull" ]; then echo "FbxNodeAttribute* lpFbxNodeAttribute,  const char* pName"
	elif [ "$1" = "FbxNurbs" ]; then echo "FbxGeometry* lpFbxGeometry,  const char* pName"
	elif [ "$1" = "FbxNurbsCurve" ]; then echo "FbxGeometry* lpFbxGeometry,  const char* pName"
	elif [ "$1" = "FbxNurbsSurface" ]; then echo "FbxGeometry* lpFbxGeometry,  const char* pName"
	elif [ "$1" = "FbxOpticalReference" ]; then echo "FbxNodeAttribute* lpFbxNodeAttribute,  const char* pName"
	elif [ "$1" = "FbxPatch" ]; then echo "FbxGeometry* lpFbxGeometry,  const char* pName"
	elif [ "$1" = "FbxProceduralGeometry" ]; then echo "FbxGeometry* lpFbxGeometry,  const char* pName"
	elif [ "$1" = "FbxShape" ]; then echo "FbxGeometryBase* lpFbxGeometryBase,  const char* pName"
	elif [ "$1" = "FbxSkeleton" ]; then echo "FbxNodeAttribute* lpFbxNodeAttribute,  const char* pName"
	elif [ "$1" = "FbxSkin" ]; then echo "FbxDeformer* lpFbxDeformer,  const char* pName"
	elif [ "$1" = "FbxSubDeformer" ]; then echo "FbxObject* lpFbxObject,  const char* pName"
	elif [ "$1" = "FbxSubDiv" ]; then echo "FbxGeometry* lpFbxGeometry,  const char* pName"
	elif [ "$1" = "FbxBoundary" ]; then echo "FbxGeometry* lpFbxGeometry,  const char* pName"
	elif [ "$1" = "FbxTrimNurbsSurface" ]; then echo "FbxGeometry* lpFbxGeometry,  const char* pName"
	elif [ "$1" = "FbxVertexCacheDeformer" ]; then echo "FbxDeformer* lpFbxDeformer,  const char* pName"
	elif [ "$1" = "FbxBindingOperator" ]; then echo "FbxBindingTableBase* lpFbxBindingTableBase,  const char* pName"
	elif [ "$1" = "FbxBindingTable" ]; then echo "FbxBindingTableBase* lpFbxBindingTableBase,  const char* pName"
	elif [ "$1" = "FbxFileTexture" ]; then echo "FbxTexture* lpFbxTexture,  const char* pName"
	elif [ "$1" = "FbxImplementation" ]; then echo "FbxObject* lpFbxObject,  const char* pName"
	elif [ "$1" = "FbxLayeredTexture" ]; then echo "FbxTexture* lpFbxTexture,  const char* pName"
	elif [ "$1" = "FbxProceduralTexture" ]; then echo "FbxTexture* lpFbxTexture,  const char* pName"
	elif [ "$1" = "FbxSurfaceLambert" ]; then echo "FbxSurfaceMaterial* lpFbxSurfaceMaterial,  const char* pName"
	elif [ "$1" = "FbxSurfaceMaterial" ]; then echo "FbxObject* lpFbxObject,  const char* pName"
	elif [ "$1" = "FbxSurfacePhong" ]; then echo "FbxSurfaceLambert* lpFbxSurfaceLambert,  const char* pName"
	elif [ "$1" = "FbxTexture" ]; then echo "FbxObject* lpFbxObject,  const char* pName"
	elif [ "$1" = "FbxCameraManipulator" ]; then echo "FbxObject* lpFbxObject,  const char* pName"
	elif [ "$1" = "FbxProcessor" ]; then echo "FbxObject* lpFbxObject,  const char* pName"
	elif [ "$1" = "FbxProcessorShaderDependency" ]; then echo "FbxProcessor* lpFbxProcessor,  const char* pName"
	elif [ "$1" = "FbxProcessorXRefCopy" ]; then echo "FbxProcessor* lpFbxProcessor,  const char* pName"
	elif [ "$1" = "FbxProcessorXRefCopyUserLibrary" ]; then echo "FbxProcessorXRefCopy* lpFbxProcessorXRefCopy,  const char* pName"
	elif [ "$1" = "MyKFbxMesh" ]; then echo "FbxMesh* lpFbxMesh,  const char* pName"
	elif [ "$1" = "MyFbxObject" ]; then echo "FbxObject* lpFbxObject,  const char* pName"
	else
		echo "FbxScene* pContainer, const char* pName"
	fi
}


function isPrimativeAliasTypes()
{
	for ppt in FbxBool \
				FbxChar \
				FbxUChar \
				FbxShort \
				FbxUShort \
				FbxInt \
				FbxUInt \
				FbxFloat \
				FbxLong \
				FbxULong \
				FbxLongLong \
				FbxULongLong \
				FbxInt64 \
				FbxUInt64 \
				FbxHandle \
				FbxAtomic \
				size_t \
				FbxDouble \
				FbxReference ; do 

	  if [[ "$1" = "$ppt" ]]; then
			return 0
	  fi
	done

	return 1
}


function isPrimativePointerAliasTypes()
{
	for ppt in FbxBoolPtr \
		FbxCharPtr \
		FbxUCharPtr \
		FbxShortPtr \
		FbxUShortPtr \
		FbxIntPtr \
		FbxUIntPtr \
		FbxFloatPtr \
		FbxLongPtr \
		FbxULongPtr \
		FbxULongPtr \
		FbxLongLongPtr \
		FbxULongLongPtr \
		FbxDoublePtr; do 

	  if [[ "$1" = "$ppt" ]]; then
			return 0
	  fi
	done
	
	return 1
}



function getJavaPrimative()
{
	if [ "$1" = "bool" ]; then
		echo  "boolean"
	elif [[  "$1" = "char" ]]; then
		echo "byte"
	else
		echo  "$1"
	fi
}

function getJavaPrimativeWrapper()
{
	if [ "$1" = "bool" ]; then
		echo  "Boolean"
	elif [[  "$1" = "char" ]]; then
		echo "Byte"
	elif [ "$1" = "int" ]; then
		echo  "Integer"
	else
		fc=`echo "${1:0:1}" | tr [:lower:] [:upper:]`
		echo "$fc${1:1}"
	fi
}



function getJavaPrimativeAlias()
{
	if [ "$1" = "FbxBool" ]; then
		echo  "boolean"
	elif [ "$1" = "FbxUChar" -o "$1" = "FbxChar"  ]; then
		echo  "byte"
	elif [ "$1" = "FbxShort" -o  "$1" = "FbxUShort"  ]; then
		echo "short"
	elif [ "$1" = "FbxInt"  -o  "$1" = "FbxUInt"  ]; then
		echo "int"
	elif [ "$1" = "FbxFloat" ]; then
		echo "float"
	elif [ "$1" = "FbxDouble" ]; then
		echo "double"
	elif [ "$1" = "FbxReference" ]; then 
		echo "long"
	else
		echo "long"
	fi
}


function getJavaPrimativeAliasWrapper()
{
	if [ "$1" = "FbxBool" ]; then
		echo  "Boolean"
	elif [ "$1" = "FbxUChar" -o "$1" = "FbxChar"  ]; then
		echo  "Byte"
	elif [ "$1" = "FbxShort" -o  "$1" = "FbxUShort"  ]; then
		echo "Short"
	elif [ "$1" = "FbxInt"  -o  "$1" = "FbxUInt"  ]; then
		echo "Integer"
	elif [ "$1" = "FbxFloat" ]; then
		echo "Float"
	elif [ "$1" = "FbxDouble" ]; then
		echo "Double"
	elif [ "$1" = "FbxReference" ]; then 
		echo "Long"
	else
		echo "Long"
	fi
}

  
function parseRawTypes
{

	tmplName=""
	tmplpointerType=""

	enumName=""
	enumSpace=""
	
	typeDecro1=""
	pointerType=""
	typeDecro2=""
	inBaseName=""

	ret=`trimbes "$ret"`	
	#echo "input[$ret]"

	ret=${1/virtual/}
	ret=${ret%=*}

	if [ "$ret" = "void" ]; then
		inBaseName="void"
		return 0
	fi

	testType="$ret"

	if [[ "$ret" =~ '<' ]]; then
		tmplName="${ret%%<*}"
		tmplName="${tmplName/const /}"
		tmplName="${tmplName/ /}"
		
		testType="${ret#*<}"
		testType="${testType%>*}"
		testType=`trimbes "$testType"`

		tmplpointerType="${ret#*>}"
		tmplpointerType=${tmplpointerType/ /}

		#echo -n "[tmpl:$tmplName=$testType=$tmplpointerType]"
	fi

	ptn=`echo "$testType" | sed -E 's/^(const|singed|unsigned)?[ ]*([a-zA-Z_][a-z0-9A-Z_:]*)[ ]*( const)?([ \*&]*)$/\1@\2@\3@\4/g'`


	typeDecro1=${ptn%%@*}
	typeDecro1=`trimbes "$typeDecro1"`
	typeDecro1=${typeDecro1/ /}
	ptn=${ptn#*@}

	inBaseName=${ptn%%@*}
	inBaseName=`trimbes "$inBaseName"`
	inBaseName=${inBaseName/ /}
	ptn=${ptn#*@}

	typeDecro2=${pnt%%@*}
	typeDecro2=`trimbes "$typeDecro2"`
	typeDecro2=${typeDecro2/ /}

	ptn=${ptn#*@}
	pointerType=$ptn
	pointerType=`trimbes "$pointerType"`
	pointerType=${pointerType/ /}

	


	if [[ "$inBaseName" =~ ':' ]]; then
		enumName=${inBaseName##*:}
		enumSpace=${inBaseName%%:*}
	elif [ "$inBaseName" = "EFbxType" \
		-o "$inBaseName" = "EFbxQuatInterpMode" \
		-o "$inBaseName" = "EFbxRotationOrder"  ]; then
		enumName=$inBaseName
		enumSpace=""
	elif [[ "${inBaseName:0:1}" = "E"  ]] && [[ "$inBaseName" != "Element" ]]; then
		enumName=$inBaseName
		if [ "$enumName" = "EFileOpenSpecialFlags" ]; then
			enumSpace="FbxReader"
		elif [ "$enumName" = "EDeformerType" ]; then
			enumSpace="FbxDeformer"
		elif [ "$enumName" = "ESurfaceMode" ]; then
			enumSpace="FbxGeometry"
		else
			enumSpace=""
		fi
	fi


	#echo  "base:[$inBaseName=$typeDecro1=$pointerType=$typeDecro2=enum($enumSpace.$enumName)]"

}

function convertJavaType2JniType()
{
	outBaseName="$1"

	if [ "$outBaseName" = "void" ]; then 
		outBaseName="void"
	elif isJavaPrimativeTypes "$outBaseName"; then
		outBaseName="j$outBaseName"
	elif [[ "$outBaseName" = "String" ]]; then
		outBaseName="jstring"
	elif [[ "$outBaseName" =~ \[ ]]; then
		javabasePt=${outBaseName%\[*}
		javabasePt=`trimbes "$javabasePt"`
	#	echo "=$javabasePt="
		if isJavaPrimativeTypes "$javabasePt" ; then
			outBaseName="j"$javabasePt"Array"
		else
			outBaseName="jobjectArray"
		fi
	else
		outBaseName="jobject"
	fi
	echo "$outBaseName"
}

function changeType2OutPut()
{

opt="$1"
outBaseName="$inBaseName"



if [ "$inBaseName" = "void" ]; then 

	if [[ "$pointerType" = "**" ]]; then
		 outBaseName="long []"
	elif [[ "$pointerType" = "*" ]]; then
		outBaseName="long"
	else
		echo "void"
		return 1
	fi
elif [ "$enumName" != ""  ]; then

	if [[ "$enumName" =~ [a-z0-9A-Z_]+FuncType ]]; then
		echo ""
		outBaseName="long"
	else
		if [ "$pointerType" = "**" ];then
			if [[ "$opt" =~ ret ]]; then
				outBaseName="long"
			else
				outBaseName="Integer []"
			fi
		elif [ "$pointerType" = "*" ];then
			if [[ "$opt" =~ ret ]]; then
				outBaseName="long"
			else
				outBaseName="int []"
			fi
		elif [ "$pointerType" = "&" ]; then
			if [[ "$opt" =~ ret ]]; then 
				outBaseName="int"
			else
				outBaseName="Integer"
			fi
		else
			outBaseName="int"
		fi
	fi
elif [ "$inBaseName" = "char"   -a "$pointerType" = "**" ] || [ "$inBaseName" = "FbxChar"  -a "$pointerType" = "**" ]; then
	if [[ "$opt" =~ ret ]]; then
		outBaseName="long"
	else
		outBaseName="String []"
	fi
elif [ "$inBaseName" = "char"  -a "$pointerType" = "*" ] || [ "$inBaseName" = "FbxChar"  -a "$pointerType" = "*" ]; then
	outBaseName="String"
elif isPrimativeTypes "$inBaseName"; then
	if [ "$pointerType" = "**" ];then
		#if is primative , use Wrapper Name []
		if [[ "$opt" =~ ret ]]; then
			outBaseName="long"
		else
			outBaseName=`getJavaPrimativeWrapper $inBaseName`" []"
		fi
	elif [ "$tmplName" != "" ]; then
		outBaseName=`getJavaPrimativeWrapper $inBaseName`
	elif  [ "$pointerType" = "&" ]; then
		if [[ "$opt" =~ ret ]]; then
			outBaseName=`getJavaPrimative $inBaseName`
		else
			outBaseName=`getJavaPrimativeWrapper $inBaseName`
		fi
	elif [ "$pointerType" = "*" ] ; then
		#if is primative , use Wrapper Name
		if [[ "$opt" =~ ret ]]; then
			outBaseName="long"
		else
			outBaseName=`getJavaPrimative $inBaseName`" []"
		fi
	else
		outBaseName=`getJavaPrimative $inBaseName`
	fi
elif isPrimativeAliasTypes "$inBaseName"; then
	if [ "$pointerType" = "**" ];then
		#if is primative , use Wrapper Name []
		if [[ "$opt" =~ ret ]]; then
			outBaseName="long"
		else
			outBaseName=`getJavaPrimativeAliasWrapper $inBaseName`" []"
		fi
	elif  [ "$pointerType" = "&" ]; then
		if [[ "$opt" =~ ret ]]; then
			outBaseName=`getJavaPrimativeAlias $inBaseName`
		else
			outBaseName=`getJavaPrimativeAliasWrapper $inBaseName`
		fi
	elif [ "$pointerType" = "*" ] ; then
		#if is primative , use Wrapper Name
		if [[ "$opt" =~ ret ]]; then
			outBaseName="long"
		else
			outBaseName=`getJavaPrimativeAlias $inBaseName`" []"
		fi
	else
		outBaseName=`getJavaPrimativeAlias $inBaseName`
	fi
elif isPrimativePointerAliasTypes "$inBaseName" ; then


	if [ "$pointerType" = "*" ]; then
		#if is primative , use Wrapper Name
		if [[ "$opt" =~ ret ]]; then
			outBaseName="long"
		else
			outBaseName=`getJavaPrimativeAliasWrapper $inBaseName`" []"
		fi
	elif [ "$pointerType" = "&" ] ; then
		# const int *&
		if [[ "$opt" =~ ret ]]; then
			outBaseName="long"
		else
			outBaseName=`getJavaPrimativeAliasWrapper $inBaseName`" []"
		fi
	else
		if [[ "$opt" =~ ret ]]; then
			outBaseName="long"
		else
			outBaseName=`getJavaPrimativeAlias $inBaseName`" []"
		fi
	fi
elif [ "$inBaseName" = 'FbxEnum' ]; then
	outBaseName="int"
else
#	echo "$outBaseName $pointerType"
	if [[ "$pointerType" = "**" ]]; then
		 if [[ "$opt" =~ ret ]]; then
		 	outBaseName="long"
		 else
		 	outBaseName="long []"
		 fi
	elif [ "$pointerType" = "&" ]; then
		 if [[ "$opt" =~ ret ]]; then
		 	outBaseName="long"
		 else
		 	outBaseName="Long"
		 fi
	else
		outBaseName="long"
	fi
fi

if [ "$tmplName" != "" ]; then
	if [ "$tmplpointerType" = "**" ]; then
		if [[ "$opt" =~ ret ]]; then
			outBaseName="long"
		else
			outBaseName="long []"
		fi
	elif [ "$tmplpointerType" = "&" ];then
		if [[ "$opt" =~ ret ]]; then
				outBaseName="long"
		else
				outBaseName="Long"
		fi
	else
		outBaseName="long"
	fi
fi

echo "$outBaseName"

}


function formatEnumDef()
{

	prefix="${1%\{*}"
	prefix="${prefix/enum/class}"
	postfix="${1#*\{}"
	postfix="${postfix/\}/}"
	echo "  public $prefix {"
	postfix=`echo "$postfix" | tr [:space:] ' '`
	

	declare -i ev
	ev=0

	postfix=`trimbes "$postfix"`
	initval=""
	epn=""
	while [[ "$postfix" =~ [a-zA-Z_]+ ]]; do 

		if [[ "$postfix" =~ "," ]]; then
			ep="${postfix%%,*}"
			postfix="${postfix#*,}"
		else
			ep="$postfix"
			postfix=""
		fi


		if [[ "$ep" =~ "(" ]]; then
			ep="$ep,"${postfix%%)*}")"
			postfix="${postfix#*)}"
			postfix="${postfix#*,}"
		fi

		if [[ "$ep" =~ "=" ]]; then
			initval=${ep#*=}
			epn=${ep%=*}
			echo "   public static final int $epn = $initval;"
			ev=0
		else
			if [ "$epn" != "" ]; then
				echo "   public static final int $ep = $epn + $ev;"
			else
				echo "   public static final int $ep = $ev;"
			fi
		fi
		ev=$ev+1
		postfix=`trimbes "$postfix"`

	
	done
	
	# if [ "$HASINITVAL" != "" ]; then
	# 	echo ";"
	# 	echo "  private int index;"
	# 	echo "  private $2(int i) { this.index=i;}"
	# 	echo "  public int getIndex() { return this.index;}"
	# fi
	echo "}"

}

function calcCppType()
{

if [[ "$enumName" != "" ]]; then
	if [ "$enumSpace" != "" ]; then
		fullenumName="$enumSpace::$enumName"
	else
		if [ "$enumName" != "EFbxType" -a "$enumName" != "EFbxQuatInterpMode" -a "$enumName" != "EFbxRotationOrder" ] ; then
			fullenumName="$className::$enumName"
		else
			fullenumName="$enumName"
		fi
	fi

	cppPt="$typeDecro1 $fullenumName $typeDecro2 $pointerType"

else
	cppPt="$typeDecro1 $inBaseName $typeDecro2 $pointerType"
fi


if [ "$tmplName" != "" ]; then
	cppTmplatePt="$tmplName< $cppPt > $tmplpointerType"
else
	cppTmplatePt=""
fi

}

function getC2JTypeConvertFuncName()
{
jniPt="$1"

calcCppType

#所有的对象都以指针方式，转成jlong返回
#只有template <x> * 和 template<x> 以jobject返回
if [ "$tmplName" != "" ]; then
	#应该者是jobject
	if [ "$tmplpointerType" = "**"  ] ; then
		echo "c2j_tmpl_"$tmplName"_ppt<$jniPt, $cppPt >"
	elif [ "$tmplpointerType" = "*"  ] ; then
		echo "c2j_tmpl_"$tmplName"_pt<$jniPt, $cppPt >"
	elif  [ "$tmplpointerType" = "&"  ] ; then
		echo "c2j_tmpl_"$tmplName"_ref<$jniPt, $cppPt >"
	else
		echo "c2j_tmpl_"$tmplName"<$jniPt, $cppPt >"
	fi

elif [[ "$enumName" != "" ]]; then

	if [ "$pointerType" = "**"  ] ; then
		echo "c2j_ppt<$jniPt, $cppPt>"
	elif [ "$pointerType" = "*"  ] ; then
		echo "c2j_pt<$jniPt, $cppPt>"
	elif [ "$pointerType" = "*"  ] ; then
		echo "c2j_ref<$jniPt,$cppPt>"
	else
		echo "c2j<$jniPt, $cppPt>"
	fi
elif [ "$jniPt" = "jstring" ]; then
	echo "c2j_string"
elif isPrimativeTypes "$inBaseName" || isPrimativeAliasTypes "$inBaseName" ; then
	if [ "$pointerType" = "**"  ] ; then
		echo "c2j_ppt<$jniPt, $cppPt>"
	elif [ "$pointerType" = "*"  ] ; then
		echo "c2j_pt<$jniPt, $cppPt>"
	elif [ "$pointerType" = "&"  ] ; then
		echo "c2j_ref<$jniPt, $cppPt>"
	else
		echo "c2j<$jniPt, $cppPt>"
	fi
elif isPrimativePointerAliasTypes "$inBaseName" ; then
	if [ "$pointerType" = "*"  ] ; then
		echo "c2j_pt<$jniPt, $cppPt>"
	elif [ "$pointerType" = "&"  ] ; then
		echo "c2j_ref<$jniPt, $cppPt>"
	else
		echo "c2j<$jniPt, $cppPt>"
	fi
elif [ "FbxEnum" == "$inBaseName" ]; then
	echo "c2j<$jniPt, $cppPt>"

elif [ "$inBaseName" = "void" ]; then

	if [[ "$pointerType" = "**" ]]; then
		echo "c2j_void_ppt"
	elif [[ "$pointerType" = "*" ]]; then
		echo "c2j_void_pt"
	fi
else
	#应该jlong
	if [ "$pointerType" = "**"  ] ; then
		echo "c2j_obj_ppt<$jniPt, $inBaseName>"
	elif [ "$pointerType" = "*"  ] ; then
		echo "c2j_obj_pt<$jniPt, $inBaseName>"
	elif [ "$pointerType" = "&"  ] ; then
		echo "c2j_obj_ref<$jniPt, $inBaseName>"
	else
		echo "c2j_obj<$jniPt, $inBaseName>"
	fi
fi
}



function getJ2CTypeConvertFuncName()
{
jniPt="$1"

calcCppType

if [ "$tmplName" != "" ]; then
	#应该者是jobject
	if [ "$tmplpointerType" = "**"  ] ; then
		echo "j2c_tmpl_"$tmplName"_obj_ppt<$jniPt, $cppPt >"
	elif [ "$tmplpointerType" = "*"  ] ; then
		echo "j2c_tmpl_"$tmplName"_obj_pt<$jniPt, $cppPt >"
	elif [ "$tmplpointerType" = "&"  ] ; then
		echo "j2c_tmpl_"$tmplName"_obj_ref<$jniPt, $cppPt >"
	else
		echo "j2c_tmpl_"$tmplName"_obj<$jniPt, $cppPt >"
	fi
elif [ "$enumName" != ""  ]; then

	if [[ "$enumName" =~ [a-z0-9A-Z_]+FuncType ]]; then
		outBaseName="j2c< $jniPt,$fullenumName >"
	else
		if [ "$pointerType" = "**" ];then
			outBaseName="j2c_int_ppt<$jniPt,$fullenumName >"
		elif [ "$pointerType" = "*" ];then
			outBaseName="j2c_int_pt<$jniPt,$fullenumName >"
		elif [ "$pointerType" = "&" ]; then 
			outBaseName="j2c_int_ref<$jniPt,$fullenumName>"
		else
			outBaseName="j2c<$jniPt,$fullenumName >"
		fi
	fi
elif [ "$inBaseName" = "char"   -a "$pointerType" = "**" ] || [ "$inBaseName" = "FbxChar"  -a "$pointerType" = "**" ]; then
	outBaseName="j2c_string_pt<$jniPt,$inBaseName>"
elif [ "$inBaseName" = "char"  -a "$pointerType" = "*" ] || [ "$inBaseName" = "FbxChar"  -a "$pointerType" = "*" ]; then
	outBaseName="j2c_string<$jniPt,$inBaseName>"
elif isPrimativeTypes "$inBaseName" ||  isPrimativeAliasTypes "$inBaseName" ; then
	if [ "$pointerType" = "**" ];then
		outBaseName="j2c_"$inBaseName"_ppt<$jniPt,$inBaseName>"
	elif  [ "$pointerType" = "&" ]; then
		outBaseName="j2c_"$inBaseName"_ref<$jniPt,$inBaseName>"
	elif [ "$pointerType" = "*" ] ; then
		outBaseName="j2c_"$inBaseName"_pt<$jniPt,$inBaseName>"
	else
		outBaseName="j2c<$jniPt,$cppPt>"
	fi
elif isPrimativePointerAliasTypes "$inBaseName" ; then
	if [ "$pointerType" = "*" ]; then
		outBaseName="j2c_"$inBaseName"_ppt<$jniPt,$inBaseName>"
	elif [ "$pointerType" = "&" ] ; then
		# const int *&
		outBaseName="j2c_"$inBaseName"_pt_ref<$jniPt,$inBaseName>"
	else
		outBaseName="j2c_"$inBaseName"_pt<$jniPt,$inBaseName>"
	fi
elif [ "$inBaseName" = 'FbxEnum' ]; then
	outBaseName="j2c<$jniPt,int >"

elif [ "$inBaseName" = 'void' ]; then
	if [[ "$pointerType" = "**" ]]; then
		outBaseName="j2c_void_ppt"
	elif [[ "$pointerType" = "*" ]]; then
		outBaseName="j2c_void_pt"
	fi
else
	if [[ "$pointerType" = "**" ]]; then
		outBaseName="j2c_object_ppt<$jniPt,$inBaseName>"
	elif [[ "$pointerType" = "*" ]]; then
		outBaseName="j2c_object_pt<$jniPt, $inBaseName>"
	elif [ "$pointerType" = "&" ]; then
		outBaseName="j2c_object_ref<$jniPt,$inBaseName >"
	else
		outBaseName="j2c_object<$jniPt,$inBaseName >"
	fi
fi

echo "$outBaseName"

}




function ouputjnicppHeader()
{
	echo "#include <jni.h>"
	echo "#include <fbxsdk.h>"
	echo "#include \"JNILocalConverter.h\""
}

function isStaticMethod()
{
	if [[ "$1" =~  ^meCreate ]] || \
		[ "Create" = "$1" -a "$className" != "FbxClassId" -a "$className" != "FbxEntryView" ] || \
		[[ "$1" =~  ^msm ]] ;then 
		return 0
	fi

	return 1
}

function outputMethodDefinition()
{
	
	paramLine="$1"
	rettype="$2"
	methodName="$3"
	className="$4"
	javaFileName="$5"
	cppFileName="$6"
	rawline="$7"

	paramList=()
	paramIsOk="1"
	
	params=`echo "$paramLine" | awk -F'(' '{print $2}' | awk -F')' '{print $1}'`

	#echo "$params"
	#paramsLines=`echo "$params" | tr ',' '\n'`
	#while read p; do
	SAVEIFS="$IFS"
	IFS=","
	for p in $params; do
		p=`trimbes "$p"`
		if [ "$p" != "" ]; then
			p=${p%=*}
			pnr=`echo "$p" | sed -E 's/([\&\*])/\1 /g' | awk '{print $NF}'`
			if [ "$pnr" != "" -a  "$pnr" != "void" ]; then 
				pn=`isValidParamName "$pnr"`

				if [ "$pn" = "" ]; then
					 paramIsOk="0"
					 echo "$methodName $p [$pnr] has wrong param name"
					 break
				fi
				
				declare -i pnlen
				declare -i plen

				pnlen=${#pn}
				plen=${#p}
				plen=$plen-$pnlen

				ptr=${p:0:$plen}


				pt=`isValidTypeString "$ptr"`

				if [ "$pt" = "" ]; then
					 paramIsOk="0"
					 echo "$methodName $p [$ptr] has wrong param type "
					 break
				fi

				paramList[${#paramList[@]}]="$pt@$pn"
				#echo "@@@@@@@$pt@$pn@"
			fi
		fi
	done
	IFS="$SAVEIFS"


    if [ "$paramIsOk" = "1" ]; then
	
    	parseRawTypes "$rettype"
		javaRetType=`changeType2OutPut "javaret"`
		jniRetType=`convertJavaType2JniType "$javaRetType"`


		objHandle="lpj$className"
		#tx=`grep -E "^$methodName\$" tempsortinfilx | wc -l`
		#tx=`trimbes "$tx"`
		#echo "$methodName" >> tempsortinfilx

		countElement "$methodName" "${tempsortinfilx[@]}"
		tx=$?
		#echo "count $methodName $tx ${tempsortinfilx[@]}"
		tempsortinfilx[${#tempsortinfilx[@]}]="$methodName"


		if [ "$tx" != "0" ]; then 	
			outmethodName="$methodName$tx"
		else
			outmethodName="$methodName"
		fi

		echo "  /// $rawline" >> "$javaFileName" 
		echo  -n "  public static native $javaRetType $outmethodName(" >> "$javaFileName" 

		echo "  /// $rawline" >> "$cppFileName" 
		echo  -n "extern \"C\" JNIEXPORT $jniRetType JNICALL Java_fbxsdk_"$className"_"$outmethodName"(JNIEnv * __env, jclass __jc" >> "$cppFileName"
		hasPrefixParam="0"
		if isStaticMethod "$methodName" ; then
			echo -n "  " >> "$javaFileName" 
		else
			echo  -n "long $objHandle" >> "$javaFileName" 
			echo  -n ",jlong $objHandle" >> "$cppFileName"
			hasPrefixParam="1"
		fi

		#gen cppImplCodes codes
		cppImplCodes=("JNILocalConverter _lcvt(__env,__jc);")

		if [ "$jniRetType" != "void" ]; then
			c2jFunc=`getC2JTypeConvertFuncName "$jniRetType"`
			cppImplCodes[${#cppImplCodes[@]}]="$jniRetType ret=($jniRetType)_lcvt.$c2jFunc("
		fi

		if [[ "$outmethodName" =~  ^meCreate ]]; then
			cppImplCodes[${#cppImplCodes[@]}]="new $className("
		elif isStaticMethod "$outmethodName" ; then
			cppImplCodes[${#cppImplCodes[@]}]="$className::$methodName("
		elif [[ "$outmethodName" =~ meDestroy ]]; then
			cppImplCodes[${#cppImplCodes[@]}]="delete (($className *) $objHandle"
		elif [[ "$outmethodName" =~ ^mepSet ]]; then
			propName=${outmethodName#mepSet}
			cppImplCodes[${#cppImplCodes[@]}]="(($className *) $objHandle)->$propName.Set("	
		elif [[ "$outmethodName" =~  ^mepGet ]]; then
			propName=${outmethodName#mepGet}
			cppImplCodes[${#cppImplCodes[@]}]="(($className *) $objHandle)->$propName.Get("	
		elif [[ "$outmethodName" =~ ^mptGet ]]; then
			propName=${outmethodName#mptGet}
			cppImplCodes[${#cppImplCodes[@]}]=" (&(($className *) $objHandle)->$propName"	
		else
			cppImplCodes[${#cppImplCodes[@]}]="(($className *) $objHandle)->$methodName("
		fi


		#end of gen cppImplCodes codes

		#process every param
		for ((idx=0;idx<${#paramList[@]};idx++)); do

		    p="${paramList[$idx]}"
		  #  echo "P IS $p"
		    pt=${p%@*}
		    pn=${p#*@}

		    if [[ "$pn" =~ \[ ]]; then 
		    	pn=${pn%\[*}
		    	pt="$pt *"
		    fi

		    parseRawTypes "$pt"
		    calcCppType

			#echo "cvCppPt =$cvCppPt=$cppTmplatePt="

			if [ "$cppTmplatePt" != "" ]; then
				cvCppPt="$cppTmplatePt"
			else
				cvCppPt="$cppPt"
			fi

		    javaPt=`changeType2OutPut "java"`
			jniPt=`convertJavaType2JniType "$javaPt"`
			j2cFunc=`getJ2CTypeConvertFuncName "$jniPt"`
			
			if [ "$pointerType" = "&" -o "$tmplpointerType" = "&" ]; then
				paramPointer="*"
			else
				paramPointer=""
			fi

			if [ "$hasPrefixParam" = "1" ]; then
				echo -n "," >> "$javaFileName" 
			fi
			echo -n " $javaPt $pn" >> "$javaFileName" 
			hasPrefixParam="1"
		
			echo -n ",$jniPt $pn" >> "$cppFileName"


			if [ "$idx" != "0" ]; then
				cppImplCodes[${#cppImplCodes[@]}]=","
			fi
			cppImplCodes[${#cppImplCodes[@]}]="($cvCppPt) $paramPointer _lcvt.$j2cFunc($pn)"

		done

		echo ");" >> "$javaFileName" 
		echo ")"  >> "$cppFileName"
		
		#output cpp call codes
		
		if [ "$jniRetType" != "void" ]; then
			cppImplCodes[${#cppImplCodes[@]}]="));"
			cppImplCodes[${#cppImplCodes[@]}]="return ret;"
		else
			cppImplCodes[${#cppImplCodes[@]}]=");"
		fi

		echo "{"  >> "$cppFileName"
	
		if [[ "$outmethodName" =~  ^meCreate ]] && isAbstractClass "$className" ; then
			echo "  return 0;" >> "$cppFileName"
		else

			for ((idx=0;idx<${#cppImplCodes[@]};idx++)) ; do
			  	 echo  "  ${cppImplCodes[$idx]}" >> "$cppFileName"
			done

		fi
		echo "}"  >> "$cppFileName"
	fi
}

function doGenSingle()
{

className=`grep -E "[ ]*Class Reference" $1 | tail -n1 | awk '{print $1}'`
if [ -z "$className" ]; then
	echo "$1 is no found className"
	return 1
fi

mmn=`grepIdentifier "$className"`

if [ -z "$mmn"  ]; then
	echo "$className is not supported yet"
	return 1
fi 


docbeginNum=`grep -n -E "^[a-zA-Z]+.*Documentation" $1| head -n1 | awk -F":" '{print $1}' `
if [ -z $docbeginNum ]; then
	echo "$1 is no found docbeginNum"
	return 0;
fi 

mainpangeNum=`grep -n "* Main Page" $1 | head -n1 |  awk -F":" '{print $1}'`
if [ -z $mainpangeNum ]; then
	echo "$1 is no found mainpangeNum"
	return 0;
fi 


LC_ALL=C
fileContents=`sed $docbeginNum',$d' $1 | sed "1,"$mainpangeNum"d" | tr '\t' ' '`





javaFileName="fbxsdkgen/java/fbxsdk/$className.java"
cppFileName="fbxsdkgen/cpp/$className.cpp"





echo "package fbxsdk;" > "$javaFileName" 
echo "//$mainpangeNum $docbeginNum $className  --------------------" >> "$javaFileName"
echo "public class $className  {" >> "$javaFileName" 

echo "$fileContents" | grep -n -E  "[ ]*enum[ ]*[a-z0-9A-Z_]+[ ]*{" | while read enumBegin; do
	if [ "$enumBegin" != "" ]; then
		enumName=${enumBegin#*enum}
		enumName=${enumName%\{*}
		isident=`grepIdentifier "$enumName" `
		if [ "$isident" != "" ]; then
			
			if [[ "$enumBegin" =~ \} ]]; then 
				enumDef=${enumBegin#*:}
			else
				beginLineNum=${enumBegin%%:*}
				enumDef=`echo "$fileContents" | sed -n "$beginLineNum,/}/p" `
			fi

			formatEnumDef "$enumDef" "$enumName"  >> "$javaFileName"
		fi
	fi
done
echo "" > "$cppFileName"
if classInWhiteList "$className" ; then
	ouputjnicppHeader >> "$cppFileName"
	declare -a tempsortinfilx

	tempsortinfilx=()

	hasDestructor="0"
	hasContructor="0"

	#echo "SAVEIFS $SAVEIFS"
	#echo "$IFS" | od -b  
	alllines=`echo  "$fileContents"  | grep "(.*)" | grep -v 'FBX_DEPRECATED' `

	while read line; do
		

		#rettype=`echo "$line" | awk -F"$methodName" '{print $1}' `
		#line=`trimbes "$rawline"`
		#methodName= `echo "$line" | awk -F'(' '{print $1}' | awk '{print $NF}'`
		rettype_n_method=${line%%(*}
		rettype_n_method=`trimbes "$rettype_n_method"`
		#shopt -s extglob
		methodName=${rettype_n_method##* }
		#shopt -u extglob

		rettype=""

		#echo "methodName:===$methodName==="
		
		mmn=`isValidMehtodName "$methodName"`
		if [  "$mmn" != "" -a "$methodName" != "operator"  ] && ! isPrimativeTypes "$methodName"  && ! isPrimativeAliasTypes "$methodName" ; then
			
			declare -i pnlen
			declare -i plen


			pnlen=${#methodName}
			plen=${#rettype_n_method}
			plen=$plen-$pnlen
			rettype=${rettype_n_method:0:$plen}
			#echo "rettype:===$rettype==="

			#rettype=${line%%$methodName*}

			rettype=`trimbes "$rettype" | sed 's/virtual//g'`
			#echo "methodName $methodName $rettype" 
			if [ "$methodName" = "~$className"  -a "$rettype" = "" ]; then
				#echo "destructor $methodName"
				rettype="void"
				methodName="meDestroy"
				hasDestructor="1"
			elif [ "$methodName" = "$className" -a "$rettype" = "" ]; then
				#echo "constructor"
				rettype="$className *"
				methodName="meCreate"
				hasContructor="1"
			else
				rettype=`isValidTypeString "$rettype"` 

			fi
			
		fi

		#methodName=`trimbes "$methodName"`
		#echo "methodName $methodName"
		
		# line="$1"
		# rettype="$2"
		# methodName="$3"
		# className="$4"
		# javaFileName="$5"
		# cppFileName="$6"
		#echo "rettype $rettype"
		if [ "$rettype" != "" ]; then
			outputMethodDefinition "$line" "$rettype" "$methodName" "$className" "$javaFileName" "$cppFileName" "$line"
		fi
	done <<< "${alllines}"

	alllines=`echo  "$fileContents"  | grepPopertyDefine | grep -v 'FBX_DEPRECATED' `

	while read line; do
		propType="${line#*<}"
		propType="${propType%>*}"
		propType=`trimbes "$propType"`
		propType=`isValidTypeString "$propType"`
		#echo "propType $propType "
		if [ "$propType" != "" ]; then
			propName="${line##*>}"
			propName=`trimbes "$propName"`
		#	echo "propName $propName "
		  	outputMethodDefinition "($propType lp$propType)" "void" "mepSet$propName" "$className" "$javaFileName" "$cppFileName"  "$line"
		  	outputMethodDefinition "()" "$propType" "mepGet$propName" "$className" "$javaFileName" "$cppFileName"  "$line"
		  	outputMethodDefinition "()" "FbxPropertyT < $propType > *" "mptGet$propName" "$className" "$javaFileName" "$cppFileName"  "$line"

		fi

	done <<< "${alllines}"


	if [ "$hasDestructor" = "0" -a "$hasContructor" = "0" ]; then

		if isNoStaticCreateFunc "$className" ; then
			echo "//No Static CreateFunc" >> "$javaFileName"
		else
			createParentType=`getCreateParentType "$className"`
			line="$className * Create( $createParentType )"
			outputMethodDefinition "( $createParentType )" "$className *" "Create" "$className" "$javaFileName" "$cppFileName"  "$line"
		fi

	elif [ "$hasDestructor" = "0" -a "$hasContructor" = "1" ]; then 
		line="void meDestroy($className * lp$className)"
		outputMethodDefinition "()" "void" "meDestroy" "$className" "$javaFileName" "$cppFileName"  "$line" 
	elif [ "$hasDestructor" = "1" -a "$hasContructor" = "0" ]; then
		line="$className * meCreate()"
		outputMethodDefinition "()" "$className *" "meCreate" "$className" "$javaFileName" "$cppFileName"  "$line" 
	fi
fi

echo "}" >> "$javaFileName" 

echo "generated $javaFileName"
echo "generated $cppFileName"
}

function getEnumName()
{
	className=`grep -E "[ ]*(Struct|Class) Reference" $1 | tail -n1 | awk '{print $1}'`
	if [ -z "$className" ]; then
		return 1
	fi
	
	grep -n -E  "[ ]*enum " $1 | while read enumBegin; do
	
		if [ "$enumBegin" != "" ]; then
			enumName=${enumBegin#*enum}
			enumName=${enumName%\{*}
			enumName=`trimbes "$enumName"`
			isident=`grepIdentifier "$enumName"`
			if [ "$isident" != "" ]; then
				echo "$className::$enumName"
			fi
		fi		
	done	
}


if [ ! -d "fbxsdkgen/cpp" ]; then 
	mkdir -p "fbxsdkgen/cpp"
fi

if [ ! -d "fbxsdkgen/java/fbxsdk" ]; then 
	mkdir -p "fbxsdkgen/java/fbxsdk"
fi

#find  $1 -name "*.txt" | while read line; do
#	getEnumName "$line"
#done | sort | uniq > allenumnametmpf

find  $1 -name "*.txt" | while read line; do
	doGenSingle "$line"
done
#doGenSingle "$1"


