package fbxsdk;
//26 88 FbxNodeAttribute  --------------------
public class FbxNodeAttribute  {
  public    class   EType  {
   public static final int eUnknown = 0;
   public static final int eNull = 1;
   public static final int eMarker = 2;
   public static final int eSkeleton = 3;
   public static final int eMesh = 4;
   public static final int eNurbs = 5;
   public static final int ePatch = 6;
   public static final int eCamera = 7;
   public static final int eCameraStereo = 8;
   public static final int eCameraSwitcher = 9;
   public static final int eLight = 10;
   public static final int eOpticalReference = 11;
   public static final int eOpticalMarker = 12;
   public static final int eNurbsCurve = 13;
   public static final int eTrimNurbsSurface = 14;
   public static final int eBoundary = 15;
   public static final int eNurbsSurface = 16;
   public static final int eShape = 17;
   public static final int eLODGroup = 18;
   public static final int eSubDiv = 19;
   public static final int eCachedEffect = 20;
   public static final int eLine = 21;
}
  /// virtual FbxNodeAttribute::EType  GetAttributeType () const
  public static native int GetAttributeType(long lpjFbxNodeAttribute);
  /// int  GetNodeCount () const
  public static native int GetNodeCount(long lpjFbxNodeAttribute);
  /// FbxNode *  GetNode (int pIndex=0) const
  public static native long GetNode(long lpjFbxNodeAttribute, int pIndex);
  /// FbxPropertyT< FbxDouble3 >  Color
  public static native void mepSetColor(long lpjFbxNodeAttribute, long lpFbxDouble3);
  /// FbxPropertyT< FbxDouble3 >  Color
  public static native long mepGetColor(long lpjFbxNodeAttribute);
  /// FbxPropertyT< FbxDouble3 >  Color
  public static native long mptGetColor(long lpjFbxNodeAttribute);
  /// FbxNodeAttribute * Create( FbxObject* lpFbxObject,  const char* pName )
  public static native long Create(   long lpFbxObject, String pName);
}
