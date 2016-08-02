//copyright by aerror 2016 
package fbxsdk;
//2 20 FbxJnimgr  --------------------
public class FbxJnimgr  {
  /// FbxJnimgr()
  public static native long meCreate(  );
  /// ~FbxJnimgr()
  public static native void meDestroy(long lpjFbxJnimgr);
  /// FbxScene*   GetScene () const
  public static native long GetScene(long lpjFbxJnimgr);
  /// FbxManager* GetFbxManager()
  public static native long GetFbxManager(long lpjFbxJnimgr);
  /// int           SaveScene (FbxScene* lpScene, const char * lpSzFileName )
  public static native int SaveScene(long lpjFbxJnimgr, long lpScene, String lpSzFileName);
  /// FbxAMatrix*  msmMultiplyFbxAMatrix(FbxAMatrix *lpA, FbxAMatrix *lpB)
  public static native long msmMultiplyFbxAMatrix(   long lpA, long lpB);
  /// FbxAMatrix* msmCreateFbxAMatrix(double * lpDoubleArray)
  public static native long msmCreateFbxAMatrix(   double [] lpDoubleArray);
  /// void    msmFillFbxAMatrix(FbxAMatrix *lpA ,  double * lpDoubleArray)
  public static native void msmFillFbxAMatrix(   long lpA, double [] lpDoubleArray);
}
