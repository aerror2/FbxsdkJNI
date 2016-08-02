//copyright by aerror 2016 
package fbxsdk;
//26 67 FbxPropertyAttr  --------------------
public class FbxPropertyAttr  {
  public    class   EInheritType  {
   public static final int eOverride = 0;
   public static final int eInherit = 1;
   public static final int eDeleted = 2;
}
  public    class   EFlags  {
   public static final int eNone  =  0;
   public static final int eStatic  =  1 << 0;
   public static final int eAnimatable  =  1 << 1;
   public static final int eAnimated  =  1 << 2;
   public static final int eImported  =  1 << 3;
   public static final int eUserDefined  =  1 << 4;
   public static final int eHidden  =  1 << 5;
   public static final int eNotSavable  =  1 << 6;
   public static final int eLockedMember0  =  1 << 7;
   public static final int eLockedMember1  =  1 << 8;
   public static final int eLockedMember2  =  1 << 9;
   public static final int eLockedMember3  =  1 << 10;
   public static final int eLockedAll  =  eLockedMember0 | eLockedMember1 | eLockedMember2 | eLockedMember3;
   public static final int eMutedMember0  =  1 << 11;
   public static final int eMutedMember1  =  1 << 12;
   public static final int eMutedMember2  =  1 << 13;
   public static final int eMutedMember3  =  1 << 14;
   public static final int eMutedAll  =  eMutedMember0 | eMutedMember1 | eMutedMember2 | eMutedMember3;
   public static final int eUIDisabled  =  1 << 15;
   public static final int eUIGroup  =  1 << 16;
   public static final int eUIBoolGroup  =  1 << 17;
   public static final int eUIExpanded  =  1 << 18;
   public static final int eUINoCaption  =  1 << 19;
   public static final int eUIPanel  =  1 << 20;
   public static final int eUILeftLabel  =  1 << 21;
   public static final int eUIHidden  =  1 << 22;
   public static final int eCtrlFlags  =  eStatic | eAnimatable | eAnimated | eImported | eUserDefined | eHidden | eNotSavable | eLockedAll | eMutedAll;
   public static final int eUIFlags  =  eUIDisabled | eUIGroup | eUIBoolGroup | eUIExpanded | eUINoCaption | eUIPanel | eUILeftLabel | eUIHidden;
   public static final int eAllFlags  =  eCtrlFlags | eUIFlags;
   public static final int eFlagCount  =  23;
}
}
