//copyright by aerror 2016 
package fbxsdk;
//26 292 FbxMesh  --------------------
public class FbxMesh  {
  public                                 class   ESmoothness  {
   public static final int eHull = 0;
   public static final int eRough = 1;
   public static final int eMedium = 2;
   public static final int eFine = 3;
}
  public                                 class   EBoundaryRule  {
   public static final int eLegacy = 0;
   public static final int eCreaseAll = 1;
   public static final int eCreaseEdge = 2;
}
  /// virtual FbxNodeAttribute::EType  GetAttributeType () const
  public static native int GetAttributeType(long lpjFbxMesh);
  /// void  ReservePolygonCount (int pCount)
  public static native void ReservePolygonCount(long lpjFbxMesh, int pCount);
  /// void  ReservePolygonVertexCount (int pCount)
  public static native void ReservePolygonVertexCount(long lpjFbxMesh, int pCount);
  /// bool  GetTextureUV (FbxLayerElementArrayTemplate< FbxVector2 > **pLockableArray, FbxLayerElement::EType pTypeIdentifier=FbxLayerElement::eTextureDiffuse) const
  public static native boolean GetTextureUV(long lpjFbxMesh, long [] pLockableArray, int pTypeIdentifier);
  /// bool  GetMaterialIndices (FbxLayerElementArrayTemplate< int > **pLockableArray) const
  public static native boolean GetMaterialIndices(long lpjFbxMesh, long [] pLockableArray);
  /// bool  GetTextureIndices (FbxLayerElementArrayTemplate< int > **pLockableArray, FbxLayerElement::EType pTextureType) const
  public static native boolean GetTextureIndices(long lpjFbxMesh, long [] pLockableArray, int pTextureType);
  /// void  BeginPolygon (int pMaterial=-1, int pTexture=-1, int pGroup=-1, bool pLegacy=true)
  public static native void BeginPolygon(long lpjFbxMesh, int pMaterial, int pTexture, int pGroup, boolean pLegacy);
  /// void  BeginPolygonExt (int pMaterial, int *pTextures)
  public static native void BeginPolygonExt(long lpjFbxMesh, int pMaterial, int [] pTextures);
  /// void  AddPolygon (int pIndex, int pTextureUVIndex=-1)
  public static native void AddPolygon(long lpjFbxMesh, int pIndex, int pTextureUVIndex);
  /// void  EndPolygon ()
  public static native void EndPolygon(long lpjFbxMesh);
  /// int  GetPolygonCount () const
  public static native int GetPolygonCount(long lpjFbxMesh);
  /// int  GetPolygonSize (int pPolygonIndex) const
  public static native int GetPolygonSize(long lpjFbxMesh, int pPolygonIndex);
  /// int  GetPolygonGroup (int pPolygonIndex) const
  public static native int GetPolygonGroup(long lpjFbxMesh, int pPolygonIndex);
  /// void  SetPolygonGroup (int pPolygonIndex, int pGroup) const
  public static native void SetPolygonGroup(long lpjFbxMesh, int pPolygonIndex, int pGroup);
  /// int  GetPolygonVertex (int pPolygonIndex, int pPositionInPolygon) const
  public static native int GetPolygonVertex(long lpjFbxMesh, int pPolygonIndex, int pPositionInPolygon);
  /// bool  GetPolygonVertexNormal (int pPolyIndex, int pVertexIndex, FbxVector4 &pNormal) const
  public static native boolean GetPolygonVertexNormal(long lpjFbxMesh, int pPolyIndex, int pVertexIndex, Long pNormal);
  /// bool  GetPolygonVertexNormals (FbxArray< FbxVector4 > &pNormals) const
  public static native boolean GetPolygonVertexNormals(long lpjFbxMesh, Long pNormals);
  /// bool  GetPolygonVertexUV (int pPolyIndex, int pVertexIndex, const char *pUVSetName, FbxVector2 &pUV, bool &pUnmapped) const
  public static native boolean GetPolygonVertexUV(long lpjFbxMesh, int pPolyIndex, int pVertexIndex, String pUVSetName, Long pUV, Boolean pUnmapped);
  /// bool  GetPolygonVertexUVs (const char *pUVSetName, FbxArray< FbxVector2 > &pUVs, FbxArray< int > *pUnmappedUVId=NULL) const
  public static native boolean GetPolygonVertexUVs(long lpjFbxMesh, String pUVSetName, Long pUVs, long pUnmappedUVId);
  /// int *  GetPolygonVertices () const
  public static native long GetPolygonVertices(long lpjFbxMesh);
  /// int  GetPolygonVertexCount () const
  public static native int GetPolygonVertexCount(long lpjFbxMesh);
  /// int  GetPolygonVertexIndex (int pPolygonIndex) const
  public static native int GetPolygonVertexIndex(long lpjFbxMesh, int pPolygonIndex);
  /// int  RemovePolygon (int pPolygonIndex)
  public static native int RemovePolygon(long lpjFbxMesh, int pPolygonIndex);
  /// int  RemoveDuplicatedEdges (FbxArray< int > &pEdgeIndexList)
  public static native int RemoveDuplicatedEdges(long lpjFbxMesh, Long pEdgeIndexList);
  /// void  InitTextureUV (int pCount, FbxLayerElement::EType pTypeIdentifier=FbxLayerElement::eTextureDiffuse)
  public static native void InitTextureUV(long lpjFbxMesh, int pCount, int pTypeIdentifier);
  /// void  AddTextureUV (FbxVector2 pUV, FbxLayerElement::EType pTypeIdentifier=FbxLayerElement::eTextureDiffuse)
  public static native void AddTextureUV(long lpjFbxMesh, long pUV, int pTypeIdentifier);
  /// int  GetTextureUVCount (FbxLayerElement::EType pTypeIdentifier=FbxLayerElement::eTextureDiffuse)
  public static native int GetTextureUVCount(long lpjFbxMesh, int pTypeIdentifier);
  /// int  GetUVLayerCount () const
  public static native int GetUVLayerCount(long lpjFbxMesh);
  /// FbxArray< FbxLayerElement::EType >  GetAllChannelUV (int pLayer)
  public static native long GetAllChannelUV(long lpjFbxMesh, int pLayer);
  /// void  InitMaterialIndices (FbxLayerElement::EMappingMode pMappingMode)
  public static native void InitMaterialIndices(long lpjFbxMesh, int pMappingMode);
  /// void  InitTextureIndices (FbxLayerElement::EMappingMode pMappingMode, FbxLayerElement::EType pTextureType)
  public static native void InitTextureIndices(long lpjFbxMesh, int pMappingMode, int pTextureType);
  /// void  InitTextureUVIndices (FbxLayerElement::EMappingMode pMappingMode, FbxLayerElement::EType pTypeIdentifier=FbxLayerElement::eTextureDiffuse)
  public static native void InitTextureUVIndices(long lpjFbxMesh, int pMappingMode, int pTypeIdentifier);
  /// int  GetTextureUVIndex (int pPolygonIndex, int pPositionInPolygon, FbxLayerElement::EType pTypeIdentifier=FbxLayerElement::eTextureDiffuse)
  public static native int GetTextureUVIndex(long lpjFbxMesh, int pPolygonIndex, int pPositionInPolygon, int pTypeIdentifier);
  /// void  SetTextureUVIndex (int pPolygonIndex, int pPositionInPolygon, int pIndex, FbxLayerElement::EType pTypeIdentifier)
  public static native void SetTextureUVIndex(long lpjFbxMesh, int pPolygonIndex, int pPositionInPolygon, int pIndex, int pTypeIdentifier);
  /// void  Reset ()
  public static native void Reset(long lpjFbxMesh);
  /// bool  GenerateNormals (bool pOverwrite=false, bool pByCtrlPoint=false, bool pCW=false)
  public static native boolean GenerateNormals(long lpjFbxMesh, boolean pOverwrite, boolean pByCtrlPoint, boolean pCW);
  /// bool  CheckIfVertexNormalsCCW ()
  public static native boolean CheckIfVertexNormalsCCW(long lpjFbxMesh);
  /// bool  CheckSamePointTwice () const
  public static native boolean CheckSamePointTwice(long lpjFbxMesh);
  /// int  RemoveBadPolygons ()
  public static native int RemoveBadPolygons(long lpjFbxMesh);
  /// bool  SplitPoints (FbxLayerElement::EType pTypeIdentifier=FbxLayerElement::eTextureDiffuse)
  public static native boolean SplitPoints(long lpjFbxMesh, int pTypeIdentifier);
  /// bool  BuildMergeList (FbxArray< int > &pMergeList, bool pExport=false)
  public static native boolean BuildMergeList(long lpjFbxMesh, Long pMergeList, boolean pExport);
  /// void  MergePointsForPolygonVerteNormals (FbxArray< int > &pMergeList)
  public static native void MergePointsForPolygonVerteNormals(long lpjFbxMesh, Long pMergeList);
  /// void  BuildMeshEdgeArray ()
  public static native void BuildMeshEdgeArray(long lpjFbxMesh);
  /// int  GetMeshEdgeCount () const
  public static native int GetMeshEdgeCount(long lpjFbxMesh);
  /// int  GetMeshEdgeIndex (int pStartVertexIndex, int pEndVertexIndex, bool &pReversed, int pExistedEdgeCount=-1)
  public static native int GetMeshEdgeIndex(long lpjFbxMesh, int pStartVertexIndex, int pEndVertexIndex, Boolean pReversed, int pExistedEdgeCount);
  /// void  BeginGetMeshEdgeIndexForPolygon ()
  public static native void BeginGetMeshEdgeIndexForPolygon(long lpjFbxMesh);
  /// void  EndGetMeshEdgeIndexForPolygon ()
  public static native void EndGetMeshEdgeIndexForPolygon(long lpjFbxMesh);
  /// int  GetMeshEdgeIndexForPolygon (int pPolygon, int pPositionInPolygon)
  public static native int GetMeshEdgeIndexForPolygon(long lpjFbxMesh, int pPolygon, int pPositionInPolygon);
  /// void  GetMeshEdgeVertices (int pEdgeIndex, int &pStartVertexIndex, int &pEndVertexIndex) const
  public static native void GetMeshEdgeVertices(long lpjFbxMesh, int pEdgeIndex, Integer pStartVertexIndex, Integer pEndVertexIndex);
  /// void  BeginGetMeshEdgeVertices ()
  public static native void BeginGetMeshEdgeVertices(long lpjFbxMesh);
  /// void  EndGetMeshEdgeVertices ()
  public static native void EndGetMeshEdgeVertices(long lpjFbxMesh);
  /// void  SetMeshEdgeCount (int pEdgeCount)
  public static native void SetMeshEdgeCount(long lpjFbxMesh, int pEdgeCount);
  /// void  SetMeshEdge (int pEdgeIndex, int pValue)
  public static native void SetMeshEdge(long lpjFbxMesh, int pEdgeIndex, int pValue);
  /// int  AddMeshEdgeIndex (int pStartVertexIndex, int pEndVertexIndex, bool pCheckForDuplicates)
  public static native int AddMeshEdgeIndex(long lpjFbxMesh, int pStartVertexIndex, int pEndVertexIndex, boolean pCheckForDuplicates);
  /// int  SetMeshEdgeIndex (int pEdgeIndex, int pStartVertexIndex, int pEndVertexIndex, bool pCheckForDuplicates, int pExistedEdgeCount=-1)
  public static native int SetMeshEdgeIndex(long lpjFbxMesh, int pEdgeIndex, int pStartVertexIndex, int pEndVertexIndex, boolean pCheckForDuplicates, int pExistedEdgeCount);
  /// void  BeginAddMeshEdgeIndex ()
  public static native void BeginAddMeshEdgeIndex(long lpjFbxMesh);
  /// void  EndAddMeshEdgeIndex ()
  public static native void EndAddMeshEdgeIndex(long lpjFbxMesh);
  /// int  AddMeshEdgeIndexForPolygon (int pPolygonIndex, int pPositionInPolygon)
  public static native int AddMeshEdgeIndexForPolygon(long lpjFbxMesh, int pPolygonIndex, int pPositionInPolygon);
  /// bool  SetMeshEdgeIndex (int pEdgeIndex, int pPolygonIndex, int pPositionInPolygon)
  public static native boolean SetMeshEdgeIndex1(long lpjFbxMesh, int pEdgeIndex, int pPolygonIndex, int pPositionInPolygon);
  /// bool  IsTriangleMesh () const
  public static native boolean IsTriangleMesh(long lpjFbxMesh);
  /// double  GetEdgeCreaseInfo (int pEdgeIndex)
  public static native double GetEdgeCreaseInfo(long lpjFbxMesh, int pEdgeIndex);
  /// bool  GetEdgeCreaseInfoArray (FbxLayerElementArrayTemplate< double > **pCreaseArray)
  public static native boolean GetEdgeCreaseInfoArray(long lpjFbxMesh, long [] pCreaseArray);
  /// double  GetVertexCreaseInfo (int pVertexIndex)
  public static native double GetVertexCreaseInfo(long lpjFbxMesh, int pVertexIndex);
  /// bool  GetVertexCreaseInfoArray (FbxLayerElementArrayTemplate< double > **pCreaseArray)
  public static native boolean GetVertexCreaseInfoArray(long lpjFbxMesh, long [] pCreaseArray);
  /// bool  SetEdgeCreaseInfo (int pEdgeIndex, double pWeight)
  public static native boolean SetEdgeCreaseInfo(long lpjFbxMesh, int pEdgeIndex, double pWeight);
  /// bool  SetEdgeCreaseInfoArray (FbxArray< double > *pWeightArray)
  public static native boolean SetEdgeCreaseInfoArray(long lpjFbxMesh, long pWeightArray);
  /// bool  SetVertexCreaseInfo (int pVertexIndex, double pWeight)
  public static native boolean SetVertexCreaseInfo(long lpjFbxMesh, int pVertexIndex, double pWeight);
  /// bool  SetVertexCreaseInfoArray (FbxArray< double > *pWeightArray)
  public static native boolean SetVertexCreaseInfoArray(long lpjFbxMesh, long pWeightArray);
  /// FbxMesh::ESmoothness  GetMeshSmoothness () const
  public static native int GetMeshSmoothness(long lpjFbxMesh);
  /// void  SetMeshSmoothness (FbxMesh::ESmoothness pSmoothness)
  public static native void SetMeshSmoothness(long lpjFbxMesh, int pSmoothness);
  /// int  GetMeshPreviewDivisionLevels () const
  public static native int GetMeshPreviewDivisionLevels(long lpjFbxMesh);
  /// void  SetMeshPreviewDivisionLevels (int pPreviewDivisionLevels)
  public static native void SetMeshPreviewDivisionLevels(long lpjFbxMesh, int pPreviewDivisionLevels);
  /// int  GetMeshRenderDivisionLevels () const
  public static native int GetMeshRenderDivisionLevels(long lpjFbxMesh);
  /// void  SetMeshRenderDivisionLevels (int pRenderDivisionLevels)
  public static native void SetMeshRenderDivisionLevels(long lpjFbxMesh, int pRenderDivisionLevels);
  /// bool  GetDisplaySubdivisions () const
  public static native boolean GetDisplaySubdivisions(long lpjFbxMesh);
  /// void  SetDisplaySubdivisions (bool pDisplySubdivisions)
  public static native void SetDisplaySubdivisions(long lpjFbxMesh, boolean pDisplySubdivisions);
  /// EBoundaryRule  GetBoundaryRule () const
  public static native int GetBoundaryRule(long lpjFbxMesh);
  /// void  SetBoundaryRule (EBoundaryRule pBoundaryRule)
  public static native void SetBoundaryRule(long lpjFbxMesh, int pBoundaryRule);
  /// bool  GetPreserveBorders () const
  public static native boolean GetPreserveBorders(long lpjFbxMesh);
  /// void  SetPreserveBorders (bool pPreserveBorders)
  public static native void SetPreserveBorders(long lpjFbxMesh, boolean pPreserveBorders);
  /// bool  GetPreserveHardEdges () const
  public static native boolean GetPreserveHardEdges(long lpjFbxMesh);
  /// void  SetPreserveHardEdges (bool pPreserveHardEdges)
  public static native void SetPreserveHardEdges(long lpjFbxMesh, boolean pPreserveHardEdges);
  /// bool  GetPropagateEdgeHardness () const
  public static native boolean GetPropagateEdgeHardness(long lpjFbxMesh);
  /// void  SetPropagateEdgeHardness (bool pPropagateEdgeHardness)
  public static native void SetPropagateEdgeHardness(long lpjFbxMesh, boolean pPropagateEdgeHardness);
  /// bool  GetPolyHoleInfo (int pFaceIndex)
  public static native boolean GetPolyHoleInfo(long lpjFbxMesh, int pFaceIndex);
  /// bool  GetPolyHoleInfoArray (FbxLayerElementArrayTemplate< bool > **pHoleArray)
  public static native boolean GetPolyHoleInfoArray(long lpjFbxMesh, long [] pHoleArray);
  /// bool  SetPolyHoleInfo (int pFaceIndex, bool pIsHole)
  public static native boolean SetPolyHoleInfo(long lpjFbxMesh, int pFaceIndex, boolean pIsHole);
  /// bool  SetPolyHoleInfoArray (FbxArray< bool > *pHoleArray)
  public static native boolean SetPolyHoleInfoArray(long lpjFbxMesh, long pHoleArray);
  /// bool  GenerateTangentsData (const char *pUVSetName=NULL, bool pOverwrite=false)
  public static native boolean GenerateTangentsData(long lpjFbxMesh, String pUVSetName, boolean pOverwrite);
  /// bool  GenerateTangentsData (int pUVSetLayerIndex, bool pOverwrite=false)
  public static native boolean GenerateTangentsData1(long lpjFbxMesh, int pUVSetLayerIndex, boolean pOverwrite);
  /// bool  GenerateTangentsDataForAllUVSets (bool pOverwrite=false)
  public static native boolean GenerateTangentsDataForAllUVSets(long lpjFbxMesh, boolean pOverwrite);
  /// FbxMesh * Create( FbxGeometry* lpFbxGeometry,  const char* pName )
  public static native long Create(   long lpFbxGeometry, String pName);
}
