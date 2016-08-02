//copyright by aerror 2016 
package fbxsdk;
//26 90 FbxAnimStack  --------------------
public class FbxAnimStack  {
  /// void  Reset (const FbxTakeInfo *pTakeInfo=NULL)
  public static native void Reset(long lpjFbxAnimStack, long pTakeInfo);
  /// FbxTimeSpan  GetLocalTimeSpan () const
  public static native long GetLocalTimeSpan(long lpjFbxAnimStack);
  /// void  SetLocalTimeSpan (FbxTimeSpan &pTimeSpan)
  public static native void SetLocalTimeSpan(long lpjFbxAnimStack, Long pTimeSpan);
  /// FbxTimeSpan  GetReferenceTimeSpan () const
  public static native long GetReferenceTimeSpan(long lpjFbxAnimStack);
  /// void  SetReferenceTimeSpan (FbxTimeSpan &pTimeSpan)
  public static native void SetReferenceTimeSpan(long lpjFbxAnimStack, Long pTimeSpan);
  /// bool  BakeLayers (FbxAnimEvaluator *pEvaluator, FbxTime pStart, FbxTime pStop, FbxTime pPeriod)
  public static native boolean BakeLayers(long lpjFbxAnimStack, long pEvaluator, long pStart, long pStop, long pPeriod);
  /// FbxPropertyT< FbxString >  Description
  public static native void mepSetDescription(long lpjFbxAnimStack, long lpFbxString);
  /// FbxPropertyT< FbxString >  Description
  public static native long mepGetDescription(long lpjFbxAnimStack);
  /// FbxPropertyT< FbxString >  Description
  public static native long mptGetDescription(long lpjFbxAnimStack);
  /// FbxPropertyT< FbxTime >  LocalStart
  public static native void mepSetLocalStart(long lpjFbxAnimStack, long lpFbxTime);
  /// FbxPropertyT< FbxTime >  LocalStart
  public static native long mepGetLocalStart(long lpjFbxAnimStack);
  /// FbxPropertyT< FbxTime >  LocalStart
  public static native long mptGetLocalStart(long lpjFbxAnimStack);
  /// FbxPropertyT< FbxTime >  LocalStop
  public static native void mepSetLocalStop(long lpjFbxAnimStack, long lpFbxTime);
  /// FbxPropertyT< FbxTime >  LocalStop
  public static native long mepGetLocalStop(long lpjFbxAnimStack);
  /// FbxPropertyT< FbxTime >  LocalStop
  public static native long mptGetLocalStop(long lpjFbxAnimStack);
  /// FbxPropertyT< FbxTime >  ReferenceStart
  public static native void mepSetReferenceStart(long lpjFbxAnimStack, long lpFbxTime);
  /// FbxPropertyT< FbxTime >  ReferenceStart
  public static native long mepGetReferenceStart(long lpjFbxAnimStack);
  /// FbxPropertyT< FbxTime >  ReferenceStart
  public static native long mptGetReferenceStart(long lpjFbxAnimStack);
  /// FbxPropertyT< FbxTime >  ReferenceStop
  public static native void mepSetReferenceStop(long lpjFbxAnimStack, long lpFbxTime);
  /// FbxPropertyT< FbxTime >  ReferenceStop
  public static native long mepGetReferenceStop(long lpjFbxAnimStack);
  /// FbxPropertyT< FbxTime >  ReferenceStop
  public static native long mptGetReferenceStop(long lpjFbxAnimStack);
  /// FbxAnimStack * Create( FbxCollection* lpFbxCollection,  const char* pName )
  public static native long Create(   long lpFbxCollection, String pName);
}
