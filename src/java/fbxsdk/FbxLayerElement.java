package fbxsdk;
//26 126 FbxLayerElement  --------------------
public class FbxLayerElement  {
  public    class   EType  {
   public static final int eUnknown = 0;
   public static final int eNormal = 1;
   public static final int eBiNormal = 2;
   public static final int eTangent = 3;
   public static final int eMaterial = 4;
   public static final int ePolygonGroup = 5;
   public static final int eUV = 6;
   public static final int eVertexColor = 7;
   public static final int eSmoothing = 8;
   public static final int eVertexCrease = 9;
   public static final int eEdgeCrease = 10;
   public static final int eHole = 11;
   public static final int eUserData = 12;
   public static final int eVisibility = 13;
   public static final int eTextureDiffuse = 14;
   public static final int eTextureDiffuseFactor = 15;
   public static final int eTextureEmissive = 16;
   public static final int eTextureEmissiveFactor = 17;
   public static final int eTextureAmbient = 18;
   public static final int eTextureAmbientFactor = 19;
   public static final int eTextureSpecular = 20;
   public static final int eTextureSpecularFactor = 21;
   public static final int eTextureShininess = 22;
   public static final int eTextureNormalMap = 23;
   public static final int eTextureBump = 24;
   public static final int eTextureTransparency = 25;
   public static final int eTextureTransparencyFactor = 26;
   public static final int eTextureReflection = 27;
   public static final int eTextureReflectionFactor = 28;
   public static final int eTextureDisplacement = 29;
   public static final int eTextureDisplacementVector = 30;
   public static final int eTypeCount = 31;
}
  public    class   EMappingMode  {
   public static final int eNone = 0;
   public static final int eByControlPoint = 1;
   public static final int eByPolygonVertex = 2;
   public static final int eByPolygon = 3;
   public static final int eByEdge = 4;
   public static final int eAllSame = 5;
}
  public    class   EReferenceMode  {
   public static final int eDirect = 0;
   public static final int eIndex = 1;
   public static final int eIndexToDirect = 2;
}
  /// void  SetMappingMode (EMappingMode pMappingMode)
  public static native void SetMappingMode(long lpjFbxLayerElement, int pMappingMode);
  /// void  SetReferenceMode (EReferenceMode pReferenceMode)
  public static native void SetReferenceMode(long lpjFbxLayerElement, int pReferenceMode);
  /// EMappingMode  GetMappingMode () const
  public static native int GetMappingMode(long lpjFbxLayerElement);
  /// EReferenceMode  GetReferenceMode () const
  public static native int GetReferenceMode(long lpjFbxLayerElement);
  /// void  SetName (const char *pName)
  public static native void SetName(long lpjFbxLayerElement, String pName);
  /// const char *  GetName () const
  public static native String GetName(long lpjFbxLayerElement);
  /// void  Destroy ()
  public static native void Destroy(long lpjFbxLayerElement);
  /// virtual bool  Clear ()
  public static native boolean Clear(long lpjFbxLayerElement);
//No Static CreateFunc
}
