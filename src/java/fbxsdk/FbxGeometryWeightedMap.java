package fbxsdk;
//26 65 FbxGeometryWeightedMap  --------------------
public class FbxGeometryWeightedMap  {
  /// void  SetValues (const FbxWeightedMapping *pWeightedMappingTable)
  public static native void SetValues(long lpjFbxGeometryWeightedMap, long pWeightedMappingTable);
  /// FbxWeightedMapping *  GetValues () const
  public static native long GetValues(long lpjFbxGeometryWeightedMap);
  /// FbxGeometry *  GetSourceGeometry ()
  public static native long GetSourceGeometry(long lpjFbxGeometryWeightedMap);
  /// FbxGeometry *  GetDestinationGeometry ()
  public static native long GetDestinationGeometry(long lpjFbxGeometryWeightedMap);
  /// FbxGeometryWeightedMap * Create( FbxObject* lpFbxObject,  const char* pName )
  public static native long Create(   long lpFbxObject, String pName);
}
