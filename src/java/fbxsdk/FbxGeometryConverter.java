//copyright by aerror 2016 
package fbxsdk;
//26 121 FbxGeometryConverter  --------------------
public class FbxGeometryConverter  {
  /// FbxNode *  MergeMeshes (FbxArray< FbxNode * > &pMeshNodes, const char *pNodeName, FbxScene *pScene)
  public static native long MergeMeshes(long lpjFbxGeometryConverter, Long pMeshNodes, String pNodeName, long pScene);
  /// bool  Triangulate (FbxScene *pScene, bool pReplace, bool pLegacy=false)
  public static native boolean Triangulate(long lpjFbxGeometryConverter, long pScene, boolean pReplace, boolean pLegacy);
  /// FbxNodeAttribute *  Triangulate (FbxNodeAttribute *pNodeAttribute, bool pReplace, bool pLegacy=false)
  public static native long Triangulate1(long lpjFbxGeometryConverter, long pNodeAttribute, boolean pReplace, boolean pLegacy);
  /// bool  ComputeGeometryControlPointsWeightedMapping (FbxGeometry *pSrcGeom, FbxGeometry *pDstGeom, FbxWeightedMapping *pSrcToDstWeightedMapping, bool pSwapUV=false)
  public static native boolean ComputeGeometryControlPointsWeightedMapping(long lpjFbxGeometryConverter, long pSrcGeom, long pDstGeom, long pSrcToDstWeightedMapping, boolean pSwapUV);
  /// FbxNurbs *  ConvertPatchToNurbs (FbxPatch *pPatch)
  public static native long ConvertPatchToNurbs(long lpjFbxGeometryConverter, long pPatch);
  /// bool  ConvertPatchToNurbsInPlace (FbxNode *pNode)
  public static native boolean ConvertPatchToNurbsInPlace(long lpjFbxGeometryConverter, long pNode);
  /// FbxNurbsSurface *  ConvertPatchToNurbsSurface (FbxPatch *pPatch)
  public static native long ConvertPatchToNurbsSurface(long lpjFbxGeometryConverter, long pPatch);
  /// bool  ConvertPatchToNurbsSurfaceInPlace (FbxNode *pNode)
  public static native boolean ConvertPatchToNurbsSurfaceInPlace(long lpjFbxGeometryConverter, long pNode);
  /// FbxNurbsSurface *  ConvertNurbsToNurbsSurface (FbxNurbs *pNurbs)
  public static native long ConvertNurbsToNurbsSurface(long lpjFbxGeometryConverter, long pNurbs);
  /// FbxNurbs *  ConvertNurbsSurfaceToNurbs (FbxNurbsSurface *pNurbs)
  public static native long ConvertNurbsSurfaceToNurbs(long lpjFbxGeometryConverter, long pNurbs);
  /// bool  ConvertNurbsToNurbsSurfaceInPlace (FbxNode *pNode)
  public static native boolean ConvertNurbsToNurbsSurfaceInPlace(long lpjFbxGeometryConverter, long pNode);
  /// bool  ConvertNurbsSurfaceToNurbsInPlace (FbxNode *pNode)
  public static native boolean ConvertNurbsSurfaceToNurbsInPlace(long lpjFbxGeometryConverter, long pNode);
  /// FbxNurbs *  FlipNurbs (FbxNurbs *pNurbs, bool pSwapUV, bool pSwapClusters)
  public static native long FlipNurbs(long lpjFbxGeometryConverter, long pNurbs, boolean pSwapUV, boolean pSwapClusters);
  /// FbxNurbsSurface *  FlipNurbsSurface (FbxNurbsSurface *pNurbs, bool pSwapUV, bool pSwapClusters)
  public static native long FlipNurbsSurface(long lpjFbxGeometryConverter, long pNurbs, boolean pSwapUV, boolean pSwapClusters);
  /// bool  EmulateNormalsByPolygonVertex (FbxMesh *pMesh)
  public static native boolean EmulateNormalsByPolygonVertex(long lpjFbxGeometryConverter, long pMesh);
  /// bool  ComputeEdgeSmoothingFromNormals (FbxMesh *pMesh) const
  public static native boolean ComputeEdgeSmoothingFromNormals(long lpjFbxGeometryConverter, long pMesh);
  /// bool  ComputePolygonSmoothingFromEdgeSmoothing (FbxMesh *pMesh, int pIndex=0) const
  public static native boolean ComputePolygonSmoothingFromEdgeSmoothing(long lpjFbxGeometryConverter, long pMesh, int pIndex);
  /// bool  ComputeEdgeSmoothingFromPolygonSmoothing (FbxMesh *pMesh, int pIndex=0) const
  public static native boolean ComputeEdgeSmoothingFromPolygonSmoothing(long lpjFbxGeometryConverter, long pMesh, int pIndex);
  /// bool  SplitMeshesPerMaterial (FbxScene *pScene, bool pReplace)
  public static native boolean SplitMeshesPerMaterial(long lpjFbxGeometryConverter, long pScene, boolean pReplace);
  /// bool  SplitMeshPerMaterial (FbxMesh *pMesh, bool pReplace)
  public static native boolean SplitMeshPerMaterial(long lpjFbxGeometryConverter, long pMesh, boolean pReplace);
//No Static CreateFunc
}
