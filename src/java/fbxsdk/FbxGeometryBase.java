//copyright by aerror 2016 
package fbxsdk;
//26 250 FbxGeometryBase  --------------------
public class FbxGeometryBase  {
  /// virtual int  MemoryUsage () const
  public static native int MemoryUsage(long lpjFbxGeometryBase);
  /// virtual void  InitControlPoints (int pCount)
  public static native void InitControlPoints(long lpjFbxGeometryBase, int pCount);
  /// void  InitNormals (int pCount=0)
  public static native void InitNormals(long lpjFbxGeometryBase, int pCount);
  /// void  InitNormals (FbxGeometryBase *pSrc)
  public static native void InitNormals1(long lpjFbxGeometryBase, long pSrc);
  /// void  InitTangents (int pCount=0, const int pLayerIndex=0, const char *pName="")
  public static native void InitTangents(long lpjFbxGeometryBase, int pCount, int pLayerIndex, String pName);
  /// void  InitTangents (FbxGeometryBase *pSrc, const int pLayerIndex=0)
  public static native void InitTangents1(long lpjFbxGeometryBase, long pSrc, int pLayerIndex);
  /// void  InitBinormals (int pCount=0, const int pLayerIndex=0, const char *pName="")
  public static native void InitBinormals(long lpjFbxGeometryBase, int pCount, int pLayerIndex, String pName);
  /// void  InitBinormals (FbxGeometryBase *pSrc, const int pLayerIndex=0)
  public static native void InitBinormals1(long lpjFbxGeometryBase, long pSrc, int pLayerIndex);
  /// virtual void  SetControlPointAt (const FbxVector4 &pCtrlPoint, const FbxVector4 &pNormal, int pIndex, bool pI2DSearch=false)
  public static native void SetControlPointAt(long lpjFbxGeometryBase, Long pCtrlPoint, Long pNormal, int pIndex, boolean pI2DSearch);
  /// virtual void  SetControlPointAt (const FbxVector4 &pCtrlPoint, int pIndex)
  public static native void SetControlPointAt1(long lpjFbxGeometryBase, Long pCtrlPoint, int pIndex);
  /// virtual FbxVector4  GetControlPointAt (int pIndex) const
  public static native long GetControlPointAt(long lpjFbxGeometryBase, int pIndex);
  /// virtual void  SetControlPointNormalAt (const FbxVector4 &pNormal, int pIndex, bool pI2DSearch=false)
  public static native void SetControlPointNormalAt(long lpjFbxGeometryBase, Long pNormal, int pIndex, boolean pI2DSearch);
  /// virtual int  GetControlPointsCount () const
  public static native int GetControlPointsCount(long lpjFbxGeometryBase);
  /// virtual FbxVector4 *  GetControlPoints (FbxStatus *pStatus=NULL) const
  public static native long GetControlPoints(long lpjFbxGeometryBase, long pStatus);
  /// virtual void  SetControlPointCount (int pCount)
  public static native void SetControlPointCount(long lpjFbxGeometryBase, int pCount);
  /// FbxGeometryElementNormal *  CreateElementNormal ()
  public static native long CreateElementNormal(long lpjFbxGeometryBase);
  /// bool  RemoveElementNormal (FbxGeometryElementNormal *pElementNormal)
  public static native boolean RemoveElementNormal(long lpjFbxGeometryBase, long pElementNormal);
  /// FbxGeometryElementNormal *  GetElementNormal (int pIndex=0)
  public static native long GetElementNormal(long lpjFbxGeometryBase, int pIndex);
  /// const FbxGeometryElementNormal *  GetElementNormal (int pIndex=0) const
  public static native long GetElementNormal1(long lpjFbxGeometryBase, int pIndex);
  /// int  GetElementNormalCount () const
  public static native int GetElementNormalCount(long lpjFbxGeometryBase);
  /// FbxGeometryElementBinormal *  CreateElementBinormal ()
  public static native long CreateElementBinormal(long lpjFbxGeometryBase);
  /// bool  RemoveElementBinormal (FbxGeometryElementBinormal *pElementBinormal)
  public static native boolean RemoveElementBinormal(long lpjFbxGeometryBase, long pElementBinormal);
  /// FbxGeometryElementBinormal *  GetElementBinormal (int pIndex=0)
  public static native long GetElementBinormal(long lpjFbxGeometryBase, int pIndex);
  /// const FbxGeometryElementBinormal *  GetElementBinormal (int pIndex=0) const
  public static native long GetElementBinormal1(long lpjFbxGeometryBase, int pIndex);
  /// int  GetElementBinormalCount () const
  public static native int GetElementBinormalCount(long lpjFbxGeometryBase);
  /// FbxGeometryElementTangent *  CreateElementTangent ()
  public static native long CreateElementTangent(long lpjFbxGeometryBase);
  /// bool  RemoveElementTangent (FbxGeometryElementTangent *pElementTangent)
  public static native boolean RemoveElementTangent(long lpjFbxGeometryBase, long pElementTangent);
  /// FbxGeometryElementTangent *  GetElementTangent (int pIndex=0)
  public static native long GetElementTangent(long lpjFbxGeometryBase, int pIndex);
  /// const FbxGeometryElementTangent *  GetElementTangent (int pIndex=0) const
  public static native long GetElementTangent1(long lpjFbxGeometryBase, int pIndex);
  /// int  GetElementTangentCount () const
  public static native int GetElementTangentCount(long lpjFbxGeometryBase);
  /// FbxGeometryElementMaterial *  CreateElementMaterial ()
  public static native long CreateElementMaterial(long lpjFbxGeometryBase);
  /// bool  RemoveElementMaterial (FbxGeometryElementMaterial *pElementMaterial)
  public static native boolean RemoveElementMaterial(long lpjFbxGeometryBase, long pElementMaterial);
  /// FbxGeometryElementMaterial *  GetElementMaterial (int pIndex=0)
  public static native long GetElementMaterial(long lpjFbxGeometryBase, int pIndex);
  /// const FbxGeometryElementMaterial *  GetElementMaterial (int pIndex=0) const
  public static native long GetElementMaterial1(long lpjFbxGeometryBase, int pIndex);
  /// int  GetElementMaterialCount () const
  public static native int GetElementMaterialCount(long lpjFbxGeometryBase);
  /// FbxGeometryElementPolygonGroup *  CreateElementPolygonGroup ()
  public static native long CreateElementPolygonGroup(long lpjFbxGeometryBase);
  /// bool  RemoveElementPolygonGroup (FbxGeometryElementPolygonGroup *pElementPolygonGroup)
  public static native boolean RemoveElementPolygonGroup(long lpjFbxGeometryBase, long pElementPolygonGroup);
  /// FbxGeometryElementPolygonGroup *  GetElementPolygonGroup (int pIndex=0)
  public static native long GetElementPolygonGroup(long lpjFbxGeometryBase, int pIndex);
  /// FbxGeometryElementPolygonGroup *  GetElementPolygonGroup (int pIndex=0) const
  public static native long GetElementPolygonGroup1(long lpjFbxGeometryBase, int pIndex);
  /// int  GetElementPolygonGroupCount () const
  public static native int GetElementPolygonGroupCount(long lpjFbxGeometryBase);
  /// FbxGeometryElementVertexColor *  CreateElementVertexColor ()
  public static native long CreateElementVertexColor(long lpjFbxGeometryBase);
  /// bool  RemoveElementVertexColor (FbxGeometryElementVertexColor *pElementVertexColor)
  public static native boolean RemoveElementVertexColor(long lpjFbxGeometryBase, long pElementVertexColor);
  /// FbxGeometryElementVertexColor *  GetElementVertexColor (int pIndex=0)
  public static native long GetElementVertexColor(long lpjFbxGeometryBase, int pIndex);
  /// FbxGeometryElementVertexColor *   GetElementVertexColor (int pIndex=0) const
  public static native long GetElementVertexColor1(long lpjFbxGeometryBase, int pIndex);
  /// int  GetElementVertexColorCount () const
  public static native int GetElementVertexColorCount(long lpjFbxGeometryBase);
  /// FbxGeometryElementSmoothing *  CreateElementSmoothing ()
  public static native long CreateElementSmoothing(long lpjFbxGeometryBase);
  /// bool  RemoveElementSmoothing (FbxGeometryElementSmoothing *pElementSmoothing)
  public static native boolean RemoveElementSmoothing(long lpjFbxGeometryBase, long pElementSmoothing);
  /// FbxGeometryElementSmoothing *  GetElementSmoothing (int pIndex=0)
  public static native long GetElementSmoothing(long lpjFbxGeometryBase, int pIndex);
  /// const FbxGeometryElementSmoothing *  GetElementSmoothing (int pIndex=0) const
  public static native long GetElementSmoothing1(long lpjFbxGeometryBase, int pIndex);
  /// int  GetElementSmoothingCount () const
  public static native int GetElementSmoothingCount(long lpjFbxGeometryBase);
  /// FbxGeometryElementCrease *  CreateElementVertexCrease ()
  public static native long CreateElementVertexCrease(long lpjFbxGeometryBase);
  /// bool  RemoveElementVertexCrease (FbxGeometryElementCrease *pElementCrease)
  public static native boolean RemoveElementVertexCrease(long lpjFbxGeometryBase, long pElementCrease);
  /// FbxGeometryElementCrease *  GetElementVertexCrease (int pIndex=0)
  public static native long GetElementVertexCrease(long lpjFbxGeometryBase, int pIndex);
  /// const FbxGeometryElementCrease *  GetElementVertexCrease (int pIndex=0) const
  public static native long GetElementVertexCrease1(long lpjFbxGeometryBase, int pIndex);
  /// int  GetElementVertexCreaseCount () const
  public static native int GetElementVertexCreaseCount(long lpjFbxGeometryBase);
  /// FbxGeometryElementCrease *  CreateElementEdgeCrease ()
  public static native long CreateElementEdgeCrease(long lpjFbxGeometryBase);
  /// bool  RemoveElementEdgeCrease (FbxGeometryElementCrease *pElementCrease)
  public static native boolean RemoveElementEdgeCrease(long lpjFbxGeometryBase, long pElementCrease);
  /// FbxGeometryElementCrease *  GetElementEdgeCrease (int pIndex=0)
  public static native long GetElementEdgeCrease(long lpjFbxGeometryBase, int pIndex);
  /// const FbxGeometryElementCrease *  GetElementEdgeCrease (int pIndex=0) const
  public static native long GetElementEdgeCrease1(long lpjFbxGeometryBase, int pIndex);
  /// int  GetElementEdgeCreaseCount () const
  public static native int GetElementEdgeCreaseCount(long lpjFbxGeometryBase);
  /// FbxGeometryElementHole *  CreateElementHole ()
  public static native long CreateElementHole(long lpjFbxGeometryBase);
  /// bool  RemoveElementHole (FbxGeometryElementHole *pElementHole)
  public static native boolean RemoveElementHole(long lpjFbxGeometryBase, long pElementHole);
  /// FbxGeometryElementHole *  GetElementHole (int pIndex=0)
  public static native long GetElementHole(long lpjFbxGeometryBase, int pIndex);
  /// const FbxGeometryElementHole *  GetElementHole (int pIndex=0) const
  public static native long GetElementHole1(long lpjFbxGeometryBase, int pIndex);
  /// int  GetElementHoleCount () const
  public static native int GetElementHoleCount(long lpjFbxGeometryBase);
  /// FbxGeometryElementUserData *  CreateElementUserData ()
  public static native long CreateElementUserData(long lpjFbxGeometryBase);
  /// bool  RemoveElementUserData (FbxGeometryElementUserData *pElementUserData)
  public static native boolean RemoveElementUserData(long lpjFbxGeometryBase, long pElementUserData);
  /// FbxGeometryElementUserData *  GetElementUserData (int pIndex=0)
  public static native long GetElementUserData(long lpjFbxGeometryBase, int pIndex);
  /// const FbxGeometryElementUserData *  GetElementUserData (int pIndex=0) const
  public static native long GetElementUserData1(long lpjFbxGeometryBase, int pIndex);
  /// int  GetElementUserDataCount () const
  public static native int GetElementUserDataCount(long lpjFbxGeometryBase);
  /// FbxGeometryElementVisibility *  CreateElementVisibility ()
  public static native long CreateElementVisibility(long lpjFbxGeometryBase);
  /// bool  RemoveElementVisibility (FbxGeometryElementVisibility *pElementVisibility)
  public static native boolean RemoveElementVisibility(long lpjFbxGeometryBase, long pElementVisibility);
  /// FbxGeometryElementVisibility *  GetElementVisibility (int pIndex=0)
  public static native long GetElementVisibility(long lpjFbxGeometryBase, int pIndex);
  /// FbxGeometryElementVisibility *    GetElementVisibility (int pIndex=0) const
  public static native long GetElementVisibility1(long lpjFbxGeometryBase, int pIndex);
  /// int  GetElementVisibilityCount () const
  public static native int GetElementVisibilityCount(long lpjFbxGeometryBase);
  /// FbxGeometryElementUV *  CreateElementUV (const char *pUVSetName)
  public static native long CreateElementUV(long lpjFbxGeometryBase, String pUVSetName);
  /// bool  RemoveElementUV (FbxGeometryElementUV *pElementUV)
  public static native boolean RemoveElementUV(long lpjFbxGeometryBase, long pElementUV);
  /// FbxGeometryElementUV *  GetElementUV (int pIndex=0)
  public static native long GetElementUV(long lpjFbxGeometryBase, int pIndex);
  /// const FbxGeometryElementUV *  GetElementUV (int pIndex=0) const
  public static native long GetElementUV1(long lpjFbxGeometryBase, int pIndex);
  /// int  GetElementUVCount () const
  public static native int GetElementUVCount(long lpjFbxGeometryBase);
  /// FbxGeometryElementUV *  GetElementUV (const char *pUVSetName)
  public static native long GetElementUV2(long lpjFbxGeometryBase, String pUVSetName);
  /// const FbxGeometryElementUV *  GetElementUV (const char *pUVSetName) const
  public static native long GetElementUV3(long lpjFbxGeometryBase, String pUVSetName);
  /// void  GetUVSetNames (FbxStringList &pUVSetNameList) const
  public static native void GetUVSetNames(long lpjFbxGeometryBase, Long pUVSetNameList);
  /// virtual bool  ContentWriteTo (FbxStream &pStream) const
  public static native boolean ContentWriteTo(long lpjFbxGeometryBase, Long pStream);
  /// virtual bool  ContentReadFrom (const FbxStream &pStream)
  public static native boolean ContentReadFrom(long lpjFbxGeometryBase, Long pStream);
  /// void  ComputeBBox ()
  public static native void ComputeBBox(long lpjFbxGeometryBase);
  /// FbxPropertyT< FbxBool >  PrimaryVisibility
  public static native void mepSetPrimaryVisibility(long lpjFbxGeometryBase, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  PrimaryVisibility
  public static native boolean mepGetPrimaryVisibility(long lpjFbxGeometryBase);
  /// FbxPropertyT< FbxBool >  PrimaryVisibility
  public static native long mptGetPrimaryVisibility(long lpjFbxGeometryBase);
  /// FbxPropertyT< FbxBool >  CastShadow
  public static native void mepSetCastShadow(long lpjFbxGeometryBase, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  CastShadow
  public static native boolean mepGetCastShadow(long lpjFbxGeometryBase);
  /// FbxPropertyT< FbxBool >  CastShadow
  public static native long mptGetCastShadow(long lpjFbxGeometryBase);
  /// FbxPropertyT< FbxBool >  ReceiveShadow
  public static native void mepSetReceiveShadow(long lpjFbxGeometryBase, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  ReceiveShadow
  public static native boolean mepGetReceiveShadow(long lpjFbxGeometryBase);
  /// FbxPropertyT< FbxBool >  ReceiveShadow
  public static native long mptGetReceiveShadow(long lpjFbxGeometryBase);
  /// FbxPropertyT< FbxDouble3 >  BBoxMin
  public static native void mepSetBBoxMin(long lpjFbxGeometryBase, long lpFbxDouble3);
  /// FbxPropertyT< FbxDouble3 >  BBoxMin
  public static native long mepGetBBoxMin(long lpjFbxGeometryBase);
  /// FbxPropertyT< FbxDouble3 >  BBoxMin
  public static native long mptGetBBoxMin(long lpjFbxGeometryBase);
  /// FbxPropertyT< FbxDouble3 >  BBoxMax
  public static native void mepSetBBoxMax(long lpjFbxGeometryBase, long lpFbxDouble3);
  /// FbxPropertyT< FbxDouble3 >  BBoxMax
  public static native long mepGetBBoxMax(long lpjFbxGeometryBase);
  /// FbxPropertyT< FbxDouble3 >  BBoxMax
  public static native long mptGetBBoxMax(long lpjFbxGeometryBase);
  /// FbxGeometryBase * Create( FbxLayerContainer* lpFbxLayerContainer,  const char* pName )
  public static native long Create(   long lpFbxLayerContainer, String pName);
}
