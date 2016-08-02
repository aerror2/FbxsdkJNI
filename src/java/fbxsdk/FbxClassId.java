package fbxsdk;
//26 97 FbxClassId  --------------------
public class FbxClassId  {
  /// FbxClassId ()
  public static native long meCreate(  );
  /// FbxClassId (const char *pClassName, const FbxClassId &pParentClassId, FbxObjectCreateProc pConstructor=0, const char *pFBXType=NULL, const char *pFBXSubType=NULL)
  public static native long meCreate1(   String pClassName, Long pParentClassId, long pConstructor, String pFBXType, String pFBXSubType);
  /// void  Destroy ()
  public static native void Destroy(long lpjFbxClassId);
  /// const char *  GetName () const
  public static native String GetName(long lpjFbxClassId);
  /// FbxClassId  GetParent () const
  public static native long GetParent(long lpjFbxClassId);
  /// FbxObject *  Create (FbxManager &pManager, const char *pName, const FbxObject *pFrom)
  public static native long Create(long lpjFbxClassId, Long pManager, String pName, long pFrom);
  /// bool  Override (FbxObjectCreateProc pConstructor)
  public static native boolean Override(long lpjFbxClassId, long pConstructor);
  /// bool  Is (const FbxClassId &pId) const
  public static native boolean Is(long lpjFbxClassId, Long pId);
  /// const char *  GetFbxFileTypeName (bool pAskParent=false) const
  public static native String GetFbxFileTypeName(long lpjFbxClassId, boolean pAskParent);
  /// const char *  GetFbxFileSubTypeName () const
  public static native String GetFbxFileSubTypeName(long lpjFbxClassId);
  /// bool  IsValid () const
  public static native boolean IsValid(long lpjFbxClassId);
  /// void  SetObjectTypePrefix (const char *pObjectTypePrefix)
  public static native void SetObjectTypePrefix(long lpjFbxClassId, String pObjectTypePrefix);
  /// const char *  GetObjectTypePrefix ()
  public static native String GetObjectTypePrefix(long lpjFbxClassId);
  /// FbxPropertyHandle *  GetRootClassDefaultPropertyHandle ()
  public static native long GetRootClassDefaultPropertyHandle(long lpjFbxClassId);
  /// int  ClassInstanceIncRef ()
  public static native int ClassInstanceIncRef(long lpjFbxClassId);
  /// int  ClassInstanceDecRef ()
  public static native int ClassInstanceDecRef(long lpjFbxClassId);
  /// int  GetInstanceRef ()
  public static native int GetInstanceRef(long lpjFbxClassId);
  /// void meDestroy(FbxClassId * lpFbxClassId)
  public static native void meDestroy(long lpjFbxClassId);
}
