//copyright by aerror 2016 
package fbxsdk;
//26 88 FbxNameHandler  --------------------
public class FbxNameHandler  {
  /// FbxNameHandler (const char *pInitialName="")
  public static native long meCreate(   String pInitialName);
  /// FbxNameHandler (FbxNameHandler const &pName)
  public static native long meCreate1(   Long pName);
  /// ~FbxNameHandler ()
  public static native void meDestroy(long lpjFbxNameHandler);
  /// void  SetInitialName (const char *pInitialName)
  public static native void SetInitialName(long lpjFbxNameHandler, String pInitialName);
  /// const char *  GetInitialName () const
  public static native String GetInitialName(long lpjFbxNameHandler);
  /// void  SetCurrentName (const char *pNewName)
  public static native void SetCurrentName(long lpjFbxNameHandler, String pNewName);
  /// const char *  GetCurrentName () const
  public static native String GetCurrentName(long lpjFbxNameHandler);
  /// void  SetNameSpace (const char *pNameSpace)
  public static native void SetNameSpace(long lpjFbxNameHandler, String pNameSpace);
  /// const char *  GetNameSpace () const
  public static native String GetNameSpace(long lpjFbxNameHandler);
  /// bool  IsRenamed () const
  public static native boolean IsRenamed(long lpjFbxNameHandler);
  /// FbxArray< FbxString * >  GetNameSpaceArray (char identifier)
  public static native long GetNameSpaceArray(long lpjFbxNameHandler, byte identifier);
  /// void  SetParentName (const char *pParentName)
  public static native void SetParentName(long lpjFbxNameHandler, String pParentName);
  /// const char *  GetParentName () const
  public static native String GetParentName(long lpjFbxNameHandler);
}
