//copyright by aerror 2016 
package fbxsdk;
//26 102 FbxLayerElementUserData  --------------------
public class FbxLayerElementUserData  {
  /// FbxDataType  GetDataType (int pIndex) const
  public static native long GetDataType(long lpjFbxLayerElementUserData, int pIndex);
  /// FbxDataType  GetDataType (const char *pName) const
  public static native long GetDataType1(long lpjFbxLayerElementUserData, String pName);
  /// const char *  GetDataName (int pIndex) const
  public static native String GetDataName(long lpjFbxLayerElementUserData, int pIndex);
  /// void  ResizeAllDirectArrays (int pSize)
  public static native void ResizeAllDirectArrays(long lpjFbxLayerElementUserData, int pSize);
  /// void  RemoveFromAllDirectArrays (int pIndex)
  public static native void RemoveFromAllDirectArrays(long lpjFbxLayerElementUserData, int pIndex);
  /// int  GetArrayCount (int pIndex) const
  public static native int GetArrayCount(long lpjFbxLayerElementUserData, int pIndex);
  /// int  GetId () const
  public static native int GetId(long lpjFbxLayerElementUserData);
  /// int  GetDirectArrayCount () const
  public static native int GetDirectArrayCount(long lpjFbxLayerElementUserData);
  /// bool  Clear ()
  public static native boolean Clear(long lpjFbxLayerElementUserData);
  /// virtual int  MemorySize () const
  public static native int MemorySize(long lpjFbxLayerElementUserData);
//No Static CreateFunc
}
