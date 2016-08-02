//copyright by aerror 2016 
package fbxsdk;
//26 87 FbxEffector  --------------------
public class FbxEffector  {
  public    class   ESetId  {
   public static final int eDefaultSet = 0;
   public static final int eAux1Set = 1;
   public static final int eAux2Set = 2;
   public static final int eAux3Set = 3;
   public static final int eAux4Set = 4;
   public static final int eAux5Set = 5;
   public static final int eAux6Set = 6;
   public static final int eAux7Set = 7;
   public static final int eAux8Set = 8;
   public static final int eAux9Set = 9;
   public static final int eAux10Set = 10;
   public static final int eAux11Set = 11;
   public static final int eAux12Set = 12;
   public static final int eAux13Set = 13;
   public static final int eAux14Set = 14;
   public static final int eSetIdCount = 15;
}
  public    class   ENodeId  {
   public static final int eHips = 0;
   public static final int eLeftAnkle = 1;
   public static final int eRightAnkle = 2;
   public static final int eLeftWrist = 3;
   public static final int eRightWrist = 4;
   public static final int eLeftKnee = 5;
   public static final int eRightKnee = 6;
   public static final int eLeftElbow = 7;
   public static final int eRightElbow = 8;
   public static final int eChestOrigin = 9;
   public static final int eChestEnd = 10;
   public static final int eLeftFoot = 11;
   public static final int eRightFoot = 12;
   public static final int eLeftShoulder = 13;
   public static final int eRightShoulder = 14;
   public static final int eHead = 15;
   public static final int eLeftHip = 16;
   public static final int eRightHip = 17;
   public static final int eLeftHand = 18;
   public static final int eRightHand = 19;
   public static final int eLeftHandThumb = 20;
   public static final int eLeftHandIndex = 21;
   public static final int eLeftHandMiddle = 22;
   public static final int eLeftHandRing = 23;
   public static final int eLeftHandPinky = 24;
   public static final int eLeftHandExtraFinger = 25;
   public static final int eRightHandThumb = 26;
   public static final int eRightHandIndex = 27;
   public static final int eRightHandMiddle = 28;
   public static final int eRightHandRing = 29;
   public static final int eRightHandPinky = 30;
   public static final int eRightHandExtraFinger = 31;
   public static final int eLeftFootThumb = 32;
   public static final int eLeftFootIndex = 33;
   public static final int eLeftFootMiddle = 34;
   public static final int eLeftFootRing = 35;
   public static final int eLeftFootPinky = 36;
   public static final int eLeftFootExtraFinger = 37;
   public static final int eRightFootThumb = 38;
   public static final int eRightFootIndex = 39;
   public static final int eRightFootMiddle = 40;
   public static final int eRightFootRing = 41;
   public static final int eRightFootPinky = 42;
   public static final int eRightFootExtraFinger = 43;
   public static final int eNodeIdCount = 44;
}
  /// FbxEffector ()
  public static native long meCreate(  );
  /// void  Reset ()
  public static native void Reset(long lpjFbxEffector);
  /// void meDestroy(FbxEffector * lpFbxEffector)
  public static native void meDestroy(long lpjFbxEffector);
}
