//copyright by aerror 2016 
package fbxsdk;
//26 61 FbxContainer  --------------------
public class FbxContainer  {
  /// FbxProperty  CreateProperty (FbxString pName, FbxDataType &pType, FbxString pLabel)
  public static native long CreateProperty(long lpjFbxContainer, long pName, Long pType, long pLabel);
  /// FbxPropertyT< FbxString >  TemplateName
  public static native void mepSetTemplateName(long lpjFbxContainer, long lpFbxString);
  /// FbxPropertyT< FbxString >  TemplateName
  public static native long mepGetTemplateName(long lpjFbxContainer);
  /// FbxPropertyT< FbxString >  TemplateName
  public static native long mptGetTemplateName(long lpjFbxContainer);
  /// FbxPropertyT< FbxString >  TemplatePath
  public static native void mepSetTemplatePath(long lpjFbxContainer, long lpFbxString);
  /// FbxPropertyT< FbxString >  TemplatePath
  public static native long mepGetTemplatePath(long lpjFbxContainer);
  /// FbxPropertyT< FbxString >  TemplatePath
  public static native long mptGetTemplatePath(long lpjFbxContainer);
  /// FbxPropertyT< FbxString >  TemplateVersion
  public static native void mepSetTemplateVersion(long lpjFbxContainer, long lpFbxString);
  /// FbxPropertyT< FbxString >  TemplateVersion
  public static native long mepGetTemplateVersion(long lpjFbxContainer);
  /// FbxPropertyT< FbxString >  TemplateVersion
  public static native long mptGetTemplateVersion(long lpjFbxContainer);
  /// FbxPropertyT< FbxString >  ViewName
  public static native void mepSetViewName(long lpjFbxContainer, long lpFbxString);
  /// FbxPropertyT< FbxString >  ViewName
  public static native long mepGetViewName(long lpjFbxContainer);
  /// FbxPropertyT< FbxString >  ViewName
  public static native long mptGetViewName(long lpjFbxContainer);
  /// FbxContainer * Create( FbxObject* lpFbxObject,  const char* pName )
  public static native long Create(   long lpFbxObject, String pName);
}
