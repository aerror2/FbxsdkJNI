package fbxsdk;
//26 58 FbxEuler  --------------------
public class FbxEuler  {
  public    class   ERepeat  {
   public static final int eRepeatNo  =  0;
   public static final int eRepeatYes  =  1;
}
  public    class   EParity  {
   public static final int eParityEven  =  0;
   public static final int eParityOdd  =  2;
}
  public    class   EAxis  {
   public static final int eAxisX  =  0;
   public static final int eAxisY  =  1;
   public static final int eAxisZ  =  2;
}
  public static    class   EOrder  {
   public static final int eOrderXYZ  =  EulerOrder(EAxis.eAxisX, EParity.eParityEven, ERepeat.eRepeatNo);
   public static final int eOrderXYX  =  EulerOrder(EAxis.eAxisX, EParity.eParityEven, ERepeat.eRepeatYes);
   public static final int eOrderXZY  =  EulerOrder(EAxis.eAxisX, EParity.eParityOdd, ERepeat.eRepeatNo);
   public static final int eOrderXZX  =  EulerOrder(EAxis.eAxisX, EParity.eParityOdd, ERepeat.eRepeatYes);
   public static final int eOrderYZX  =  EulerOrder(EAxis.eAxisY, EParity.eParityEven, ERepeat.eRepeatNo);
   public static final int eOrderYZY  =  EulerOrder(EAxis.eAxisY, EParity.eParityEven, ERepeat.eRepeatYes);
   public static final int eOrderYXZ  =  EulerOrder(EAxis.eAxisY, EParity.eParityOdd, ERepeat.eRepeatNo);
   public static final int eOrderYXY  =  EulerOrder(EAxis.eAxisY, EParity.eParityOdd, ERepeat.eRepeatYes);
   public static final int eOrderZXY  =  EulerOrder(EAxis.eAxisZ, EParity.eParityEven, ERepeat.eRepeatNo);
   public static final int eOrderZXZ  =  EulerOrder(EAxis.eAxisZ, EParity.eParityEven, ERepeat.eRepeatYes);
   public static final int eOrderZYX  =  EulerOrder(EAxis.eAxisZ, EParity.eParityOdd, ERepeat.eRepeatNo);
   public static final int eOrderZYZ  =  EulerOrder(EAxis.eAxisZ, EParity.eParityOdd, ERepeat.eRepeatYes);
   private static int EulerOrder(int e, int p, int  r)   { 
	   return ((e << 2) | p| r);
	 }
}
  /// FbxEuler * Create(FbxNode * lpParent, const char *lpszName)
  public static native long Create(   long lpParent, String lpszName);
}
