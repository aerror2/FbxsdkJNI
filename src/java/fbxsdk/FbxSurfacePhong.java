package fbxsdk;
//26 73 FbxSurfacePhong  --------------------
public class FbxSurfacePhong  {
  /// FbxPropertyT< FbxDouble3 >  Specular
  public static native void mepSetSpecular(long lpjFbxSurfacePhong, long lpFbxDouble3);
  /// FbxPropertyT< FbxDouble3 >  Specular
  public static native long mepGetSpecular(long lpjFbxSurfacePhong);
  /// FbxPropertyT< FbxDouble3 >  Specular
  public static native long mptGetSpecular(long lpjFbxSurfacePhong);
  /// FbxPropertyT< FbxDouble >  SpecularFactor
  public static native void mepSetSpecularFactor(long lpjFbxSurfacePhong, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  SpecularFactor
  public static native double mepGetSpecularFactor(long lpjFbxSurfacePhong);
  /// FbxPropertyT< FbxDouble >  SpecularFactor
  public static native long mptGetSpecularFactor(long lpjFbxSurfacePhong);
  /// FbxPropertyT< FbxDouble >  Shininess
  public static native void mepSetShininess(long lpjFbxSurfacePhong, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  Shininess
  public static native double mepGetShininess(long lpjFbxSurfacePhong);
  /// FbxPropertyT< FbxDouble >  Shininess
  public static native long mptGetShininess(long lpjFbxSurfacePhong);
  /// FbxPropertyT< FbxDouble3 >  Reflection
  public static native void mepSetReflection(long lpjFbxSurfacePhong, long lpFbxDouble3);
  /// FbxPropertyT< FbxDouble3 >  Reflection
  public static native long mepGetReflection(long lpjFbxSurfacePhong);
  /// FbxPropertyT< FbxDouble3 >  Reflection
  public static native long mptGetReflection(long lpjFbxSurfacePhong);
  /// FbxPropertyT< FbxDouble >  ReflectionFactor
  public static native void mepSetReflectionFactor(long lpjFbxSurfacePhong, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  ReflectionFactor
  public static native double mepGetReflectionFactor(long lpjFbxSurfacePhong);
  /// FbxPropertyT< FbxDouble >  ReflectionFactor
  public static native long mptGetReflectionFactor(long lpjFbxSurfacePhong);
  /// FbxSurfacePhong * Create( FbxSurfaceLambert* lpFbxSurfaceLambert,  const char* pName )
  public static native long Create(   long lpFbxSurfaceLambert, String pName);
}
