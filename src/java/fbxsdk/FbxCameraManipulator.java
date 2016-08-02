//copyright by aerror 2016 
package fbxsdk;
//26 88 FbxCameraManipulator  --------------------
public class FbxCameraManipulator  {
  public    class   EAction  {
   public static final int eNone = 0;
   public static final int eOrbit = 1;
   public static final int eDolly = 2;
   public static final int ePan = 3;
   public static final int eFreePan = 4;
}
  /// void  Begin (EAction pAction, float pX, float pY)
  public static native void Begin(long lpjFbxCameraManipulator, int pAction, float pX, float pY);
  /// void  Notify (float pX, float pY, float pZ=0)
  public static native void Notify(long lpjFbxCameraManipulator, float pX, float pY, float pZ);
  /// void  End ()
  public static native void End(long lpjFbxCameraManipulator);
  /// void  FrameAll (const FbxTime &pTime=FBXSDK_TIME_INFINITE)
  public static native void FrameAll(long lpjFbxCameraManipulator, Long pTime);
  /// void  FrameSelected (const FbxTime &pTime=FBXSDK_TIME_INFINITE)
  public static native void FrameSelected(long lpjFbxCameraManipulator, Long pTime);
  /// EAction  GetCurrentAction () const
  public static native int GetCurrentAction(long lpjFbxCameraManipulator);
  /// FbxPropertyT< FbxReference >  Camera
  public static native void mepSetCamera(long lpjFbxCameraManipulator, long lpFbxReference);
  /// FbxPropertyT< FbxReference >  Camera
  public static native long mepGetCamera(long lpjFbxCameraManipulator);
  /// FbxPropertyT< FbxReference >  Camera
  public static native long mptGetCamera(long lpjFbxCameraManipulator);
  /// FbxPropertyT< FbxFloat >  ViewportWidth
  public static native void mepSetViewportWidth(long lpjFbxCameraManipulator, float lpFbxFloat);
  /// FbxPropertyT< FbxFloat >  ViewportWidth
  public static native float mepGetViewportWidth(long lpjFbxCameraManipulator);
  /// FbxPropertyT< FbxFloat >  ViewportWidth
  public static native long mptGetViewportWidth(long lpjFbxCameraManipulator);
  /// FbxPropertyT< FbxFloat >  ViewportHeight
  public static native void mepSetViewportHeight(long lpjFbxCameraManipulator, float lpFbxFloat);
  /// FbxPropertyT< FbxFloat >  ViewportHeight
  public static native float mepGetViewportHeight(long lpjFbxCameraManipulator);
  /// FbxPropertyT< FbxFloat >  ViewportHeight
  public static native long mptGetViewportHeight(long lpjFbxCameraManipulator);
  /// FbxPropertyT< FbxBool >  InvertX
  public static native void mepSetInvertX(long lpjFbxCameraManipulator, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  InvertX
  public static native boolean mepGetInvertX(long lpjFbxCameraManipulator);
  /// FbxPropertyT< FbxBool >  InvertX
  public static native long mptGetInvertX(long lpjFbxCameraManipulator);
  /// FbxPropertyT< FbxBool >  InvertY
  public static native void mepSetInvertY(long lpjFbxCameraManipulator, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  InvertY
  public static native boolean mepGetInvertY(long lpjFbxCameraManipulator);
  /// FbxPropertyT< FbxBool >  InvertY
  public static native long mptGetInvertY(long lpjFbxCameraManipulator);
  /// FbxPropertyT< FbxBool >  Restore
  public static native void mepSetRestore(long lpjFbxCameraManipulator, boolean lpFbxBool);
  /// FbxPropertyT< FbxBool >  Restore
  public static native boolean mepGetRestore(long lpjFbxCameraManipulator);
  /// FbxPropertyT< FbxBool >  Restore
  public static native long mptGetRestore(long lpjFbxCameraManipulator);
  /// FbxCameraManipulator * Create( FbxObject* lpFbxObject,  const char* pName )
  public static native long Create(   long lpFbxObject, String pName);
}
