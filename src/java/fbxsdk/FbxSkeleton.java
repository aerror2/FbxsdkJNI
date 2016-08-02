package fbxsdk;
//26 104 FbxSkeleton  --------------------
public class FbxSkeleton  {
  public                              class   EType  {
   public static final int eRoot = 0;
   public static final int eLimb = 1;
   public static final int eLimbNode = 2;
   public static final int eEffector = 3;
}
  /// virtual FbxNodeAttribute::EType  GetAttributeType () const
  public static native int GetAttributeType(long lpjFbxSkeleton);
  /// void  Reset ()
  public static native void Reset(long lpjFbxSkeleton);
  /// void  SetSkeletonType (EType pSkeletonType)
  public static native void SetSkeletonType(long lpjFbxSkeleton, int pSkeletonType);
  /// EType  GetSkeletonType () const
  public static native int GetSkeletonType(long lpjFbxSkeleton);
  /// bool  GetSkeletonTypeIsSet () const
  public static native boolean GetSkeletonTypeIsSet(long lpjFbxSkeleton);
  /// EType  GetSkeletonTypeDefaultValue () const
  public static native int GetSkeletonTypeDefaultValue(long lpjFbxSkeleton);
  /// double  GetLimbLengthDefaultValue () const
  public static native double GetLimbLengthDefaultValue(long lpjFbxSkeleton);
  /// double  GetLimbNodeSizeDefaultValue () const
  public static native double GetLimbNodeSizeDefaultValue(long lpjFbxSkeleton);
  /// bool  SetLimbNodeColor (const FbxColor &pColor)
  public static native boolean SetLimbNodeColor(long lpjFbxSkeleton, Long pColor);
  /// FbxColor  GetLimbNodeColor () const
  public static native long GetLimbNodeColor(long lpjFbxSkeleton);
  /// bool  GetLimbNodeColorIsSet () const
  public static native boolean GetLimbNodeColorIsSet(long lpjFbxSkeleton);
  /// FbxColor  GetLimbNodeColorDefaultValue () const
  public static native long GetLimbNodeColorDefaultValue(long lpjFbxSkeleton);
  /// bool  IsSkeletonRoot () const
  public static native boolean IsSkeletonRoot(long lpjFbxSkeleton);
  /// FbxPropertyT< FbxDouble >  Size
  public static native void mepSetSize(long lpjFbxSkeleton, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  Size
  public static native double mepGetSize(long lpjFbxSkeleton);
  /// FbxPropertyT< FbxDouble >  Size
  public static native long mptGetSize(long lpjFbxSkeleton);
  /// FbxPropertyT< FbxDouble >  LimbLength
  public static native void mepSetLimbLength(long lpjFbxSkeleton, double lpFbxDouble);
  /// FbxPropertyT< FbxDouble >  LimbLength
  public static native double mepGetLimbLength(long lpjFbxSkeleton);
  /// FbxPropertyT< FbxDouble >  LimbLength
  public static native long mptGetLimbLength(long lpjFbxSkeleton);
  /// FbxSkeleton * Create( FbxNodeAttribute* lpFbxNodeAttribute,  const char* pName )
  public static native long Create(   long lpFbxNodeAttribute, String pName);
}
