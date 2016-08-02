package fbxsdk;
//26 77 FbxSceneRenamer  --------------------
public class FbxSceneRenamer  {
  public    class   ERenamingMode  {
   public static final int eNone = 0;
   public static final int eMAYA_TO_FBX5 = 1;
   public static final int eMAYA_TO_FBX_MB75 = 2;
   public static final int eMAYA_TO_FBX_MB70 = 3;
   public static final int eFBXMB75_TO_FBXMB70 = 4;
   public static final int eFBX_TO_FBX = 5;
   public static final int eMAYA_TO_FBX = 6;
   public static final int eFBX_TO_MAYA = 7;
   public static final int eLW_TO_FBX = 8;
   public static final int eFBX_TO_LW = 9;
   public static final int eXSI_TO_FBX = 10;
   public static final int eFBX_TO_XSI = 11;
   public static final int eMAX_TO_FBX = 12;
   public static final int eFBX_TO_MAX = 13;
   public static final int eMB_TO_FBX = 14;
   public static final int eFBX_TO_MB = 15;
   public static final int eDAE_TO_FBX = 16;
   public static final int eFBX_TO_DAE = 17;
}
  /// FbxSceneRenamer (FbxScene *pScene)
  public static native long meCreate(   long pScene);
  /// virtual  ~FbxSceneRenamer ()
  public static native void meDestroy(long lpjFbxSceneRenamer);
  /// void  RenameFor (ERenamingMode pMode)
  public static native void RenameFor(long lpjFbxSceneRenamer, int pMode);
}
