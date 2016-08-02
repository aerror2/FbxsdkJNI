package fbxsdk;
//26 70 FbxContainerTemplate  --------------------
public class FbxContainerTemplate  {
  /// void  ParseTemplateFile (const char *pTemplateFilePath, FbxArray< FbxString * > &pExtendTemplateNames)
  public static native void ParseTemplateFile(long lpjFbxContainerTemplate, String pTemplateFilePath, Long pExtendTemplateNames);
  /// void  AddExtendTemplatePath (const char *pExtendTemplatePath)
  public static native void AddExtendTemplatePath(long lpjFbxContainerTemplate, String pExtendTemplatePath);
  /// char *  GetExtendTemplatePathAt (FbxUInt pIndex) const
  public static native String GetExtendTemplatePathAt(long lpjFbxContainerTemplate, int pIndex);
  /// FbxUInt  GetExtendTemplateCount () const
  public static native int GetExtendTemplateCount(long lpjFbxContainerTemplate);
  /// void  ClearExtendTemplatePath ()
  public static native void ClearExtendTemplatePath(long lpjFbxContainerTemplate);
  /// FbxPropertyT< FbxString >  ContainerTemplateName
  public static native void mepSetContainerTemplateName(long lpjFbxContainerTemplate, long lpFbxString);
  /// FbxPropertyT< FbxString >  ContainerTemplateName
  public static native long mepGetContainerTemplateName(long lpjFbxContainerTemplate);
  /// FbxPropertyT< FbxString >  ContainerTemplateName
  public static native long mptGetContainerTemplateName(long lpjFbxContainerTemplate);
  /// FbxPropertyT< FbxString >  ContainerTemplatePath
  public static native void mepSetContainerTemplatePath(long lpjFbxContainerTemplate, long lpFbxString);
  /// FbxPropertyT< FbxString >  ContainerTemplatePath
  public static native long mepGetContainerTemplatePath(long lpjFbxContainerTemplate);
  /// FbxPropertyT< FbxString >  ContainerTemplatePath
  public static native long mptGetContainerTemplatePath(long lpjFbxContainerTemplate);
  /// FbxPropertyT< FbxString >  ContainerTemplatePackageName
  public static native void mepSetContainerTemplatePackageName(long lpjFbxContainerTemplate, long lpFbxString);
  /// FbxPropertyT< FbxString >  ContainerTemplatePackageName
  public static native long mepGetContainerTemplatePackageName(long lpjFbxContainerTemplate);
  /// FbxPropertyT< FbxString >  ContainerTemplatePackageName
  public static native long mptGetContainerTemplatePackageName(long lpjFbxContainerTemplate);
  /// FbxPropertyT< FbxString >  ContainerTemplateVersion
  public static native void mepSetContainerTemplateVersion(long lpjFbxContainerTemplate, long lpFbxString);
  /// FbxPropertyT< FbxString >  ContainerTemplateVersion
  public static native long mepGetContainerTemplateVersion(long lpjFbxContainerTemplate);
  /// FbxPropertyT< FbxString >  ContainerTemplateVersion
  public static native long mptGetContainerTemplateVersion(long lpjFbxContainerTemplate);
  /// FbxContainerTemplate * Create( FbxObject* lpFbxObject,  const char* pName )
  public static native long Create(   long lpFbxObject, String pName);
}
