package fbxsdk;
//26 80 FbxAnimCurveDef  --------------------
public class FbxAnimCurveDef  {
  public    class   ETangentMode  {
   public static final int eTangentAuto  =  0x00000100;
   public static final int eTangentTCB  =  0x00000200;
   public static final int eTangentUser  =  0x00000400;
   public static final int eTangentGenericBreak  =  0x00000800;
   public static final int eTangentBreak  =  eTangentGenericBreak|eTangentUser;
   public static final int eTangentAutoBreak  =  eTangentGenericBreak|eTangentAuto;
   public static final int eTangentGenericClamp  =  0x00001000;
   public static final int eTangentGenericTimeIndependent  =  0x00002000;
   public static final int eTangentGenericClampProgressive  =  0x00004000|eTangentGenericTimeIndependent;
}
  public    class   EInterpolationType  {
   public static final int eInterpolationConstant  =  0x00000002;
   public static final int eInterpolationLinear  =  0x00000004;
   public static final int eInterpolationCubic  =  0x00000008;
}
  public    class   EWeightedMode  {
   public static final int eWeightedNone  =  0x00000000;
   public static final int eWeightedRight  =  0x01000000;
   public static final int eWeightedNextLeft  =  0x02000000;
   public static final int eWeightedAll  =  eWeightedRight|eWeightedNextLeft;
}
  public    class   EConstantMode  {
   public static final int eConstantStandard  =  0x00000000;
   public static final int eConstantNext  =  0x00000100;
}
  public    class   EVelocityMode  {
   public static final int eVelocityNone  =  0x00000000;
   public static final int eVelocityRight  =  0x10000000;
   public static final int eVelocityNextLeft  =  0x20000000;
   public static final int eVelocityAll  =  eVelocityRight|eVelocityNextLeft;
}
  public    class   ETangentVisibility  {
   public static final int eTangentShowNone  =  0x00000000;
   public static final int eTangentShowLeft  =  0x00100000;
   public static final int eTangentShowRight  =  0x00200000;
   public static final int eTangentShowBoth  =  eTangentShowLeft|eTangentShowRight;
}
  public    class   EDataIndex  {
   public static final int eRightSlope  =  0;
   public static final int eNextLeftSlope  =  1;
   public static final int eWeights  =  2;
   public static final int eRightWeight  =  2;
   public static final int eNextLeftWeight  =  3;
   public static final int eVelocity  =  4;
   public static final int eRightVelocity  =  4;
   public static final int eNextLeftVelocity  =  5;
   public static final int eTCBTension  =  0;
   public static final int eTCBContinuity  =  1;
   public static final int eTCBBias  =  2;
}
//No Static CreateFunc
}
