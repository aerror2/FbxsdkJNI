//copyright by aerror 2016 
package fbxsdk;
//26 74 FbxPeripheral  --------------------
public class FbxPeripheral  {
  /// virtual void  Reset ()=0
  public static native void Reset(long lpjFbxPeripheral);
  /// virtual bool  UnloadContentOf (FbxObject *pObject)=0
  public static native boolean UnloadContentOf(long lpjFbxPeripheral, long pObject);
  /// virtual bool  LoadContentOf (FbxObject *pObject)=0
  public static native boolean LoadContentOf(long lpjFbxPeripheral, long pObject);
  /// virtual bool  CanUnloadContentOf (FbxObject *pObject)=0
  public static native boolean CanUnloadContentOf(long lpjFbxPeripheral, long pObject);
  /// virtual bool  CanLoadContentOf (FbxObject *pObject)=0
  public static native boolean CanLoadContentOf(long lpjFbxPeripheral, long pObject);
  /// virtual void  InitializeConnectionsOf (FbxObject *pObject)=0
  public static native void InitializeConnectionsOf(long lpjFbxPeripheral, long pObject);
  /// virtual void  UninitializeConnectionsOf (FbxObject *pObject)=0
  public static native void UninitializeConnectionsOf(long lpjFbxPeripheral, long pObject);
  /// FbxPeripheral ()
  public static native long meCreate(  );
  /// virtual  ~FbxPeripheral ()
  public static native void meDestroy(long lpjFbxPeripheral);
}
