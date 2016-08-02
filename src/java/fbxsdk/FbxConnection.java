package fbxsdk;
//26 50 FbxConnection  --------------------
public class FbxConnection  {
  public    class   EType  {
   public static final int eNone  =  0;
   public static final int eSystem  =  1 << 0;
   public static final int eUser  =  1 << 1;
   public static final int eSystemOrUser  =  eUser | eSystem;
   public static final int eReference  =  1 << 2;
   public static final int eContains  =  1 << 3;
   public static final int eData  =  1 << 4;
   public static final int eLinkType  =  eReference | eContains | eData;
   public static final int eDefault  =  eUser | eReference;
   public static final int eUnidirectional  =  1 << 7;
}
}
