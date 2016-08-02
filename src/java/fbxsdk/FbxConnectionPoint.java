package fbxsdk;
//26 132 FbxConnectionPoint  --------------------
public class FbxConnectionPoint  {
  public    class   EDirection  {
   public static final int eDirSrc  =  1 << 0;
   public static final int eDirDst  =  1 << 1;
   public static final int eDirUni  =  1 << 2;
   public static final int eDirBoth  =  eDirSrc | eDirDst;
   public static final int eDirMask  =  eDirSrc | eDirDst | eDirUni;
}
  public    class   EType  {
   public static final int eStandard  =  0;
   public static final int eSubConnection  =  1 << 3;
   public static final int eTypeMask  =  eSubConnection;
}
  public    class   EAttribute  {
   public static final int eDefault  =  0;
   public static final int eCache  =  1 << 4;
   public static final int eAttributeMask  =  eCache;
}
  public    class   EAllocFlag  {
   public static final int eNotAllocated  =  0;
   public static final int eAllocated  =  1 << 5;
   public static final int eAllocFlagMask  =  eAllocated;
}
  public    class   ECleanedFlag  {
   public static final int eNotCleaned  =  0;
   public static final int eCleaned  =  1 << 6;
   public static final int eCleanedFlagMask  =  eCleaned;
}
  public    class   EEvent  {
   public static final int eSrcConnectRequest = 0;
   public static final int eDstConnectRequest = 1;
   public static final int eSrcConnect = 2;
   public static final int eDstConnect = 3;
   public static final int eSrcConnected = 4;
   public static final int eDstConnected = 5;
   public static final int eSrcDisconnect = 6;
   public static final int eDstDisconnect = 7;
   public static final int eSrcDisconnected = 8;
   public static final int eDstDisconnected = 9;
   public static final int eSrcReplaceBegin = 10;
   public static final int eSrcReplaceEnd = 11;
   public static final int eDstReplaceBegin = 12;
   public static final int eDstReplaceEnd = 13;
   public static final int eSrcReorder = 14;
   public static final int eSrcReordered = 15;
}
}
