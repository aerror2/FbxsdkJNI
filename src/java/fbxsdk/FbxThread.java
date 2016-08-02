//copyright by aerror 2016 
package fbxsdk;
//26 75 FbxThread  --------------------
public class FbxThread  {
  public    class   EState  {
   public static final int eUnknown = 0;
   public static final int eRunning = 1;
   public static final int eDead = 2;
}
  public    class   EPriority  {
   public static final int eNone = 0;
   public static final int eIdle = 1;
   public static final int eLowest = 2;
   public static final int eLow = 3;
   public static final int eNormal = 4;
   public static final int eHigh = 5;
   public static final int eHighest = 6;
   public static final int eRealTime = 7;
}
}
