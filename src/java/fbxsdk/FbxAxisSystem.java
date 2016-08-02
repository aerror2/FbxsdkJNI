//copyright by aerror 2016 
package fbxsdk;
//26 172 FbxAxisSystem  --------------------
public class FbxAxisSystem  {
  public    class   EUpVector  {
   public static final int eXAxis  =  1;
   public static final int eYAxis  =  2;
   public static final int eZAxis  =  3;
}
  public    class   EFrontVector  {
   public static final int eParityEven  =  1;
   public static final int eParityOdd  =  2;
}
  public    class   ECoordSystem  {
   public static final int eRightHanded = 0;
   public static final int eLeftHanded = 1;
}
  public    class   EPreDefinedAxisSystem  {
   public static final int eMayaZUp = 0;
   public static final int eMayaYUp = 1;
   public static final int eMax = 2;
   public static final int eMotionBuilder = 3;
   public static final int eOpenGL = 4;
   public static final int eDirectX = 5;
   public static final int eLightwave = 6;
}
  /// void  ConvertScene (FbxScene *pScene) const
  public static native void ConvertScene(long lpjFbxAxisSystem, long pScene);
  /// void  ConvertScene (FbxScene *pScene, FbxNode *pFbxRoot) const
  public static native void ConvertScene1(long lpjFbxAxisSystem, long pScene, long pFbxRoot);
  /// EFrontVector  GetFrontVector (int &pSign) const
  public static native int GetFrontVector(long lpjFbxAxisSystem, Integer pSign);
  /// EUpVector  GetUpVector (int &pSign) const
  public static native int GetUpVector(long lpjFbxAxisSystem, Integer pSign);
  /// ECoordSystem  GetCoorSystem () const
  public static native int GetCoorSystem(long lpjFbxAxisSystem);
  /// void  ConvertChildren (FbxNode *pRoot, const FbxAxisSystem &pSrcSystem) const
  public static native void ConvertChildren(long lpjFbxAxisSystem, long pRoot, Long pSrcSystem);
  /// FbxAxisSystem ()
  public static native long meCreate(  );
  /// FbxAxisSystem (EUpVector pUpVector, EFrontVector pFrontVector, ECoordSystem pCoorSystem)
  public static native long meCreate1(   int pUpVector, int pFrontVector, int pCoorSystem);
  /// FbxAxisSystem (const FbxAxisSystem &pAxisSystem)
  public static native long meCreate2(   Long pAxisSystem);
  /// FbxAxisSystem (const EPreDefinedAxisSystem pAxisSystem)
  public static native long meCreate3(   int pAxisSystem);
  /// virtual  ~FbxAxisSystem ()
  public static native void meDestroy(long lpjFbxAxisSystem);
}
