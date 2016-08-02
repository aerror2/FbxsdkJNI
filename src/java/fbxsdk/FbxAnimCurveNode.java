//copyright by aerror 2016 
package fbxsdk;
//26 110 FbxAnimCurveNode  --------------------
public class FbxAnimCurveNode  {
  /// bool  IsAnimated (bool pRecurse=false) const
  public static native boolean IsAnimated(long lpjFbxAnimCurveNode, boolean pRecurse);
  /// bool  GetAnimationInterval (FbxTimeSpan &pTimeInterval) const
  public static native boolean GetAnimationInterval(long lpjFbxAnimCurveNode, Long pTimeInterval);
  /// bool  IsComposite () const
  public static native boolean IsComposite(long lpjFbxAnimCurveNode);
  /// FbxAnimCurveNode *  Find (const char *pName)
  public static native long Find(long lpjFbxAnimCurveNode, String pName);
  /// unsigned int  GetChannelsCount () const
  public static native int GetChannelsCount(long lpjFbxAnimCurveNode);
  /// int  GetChannelIndex (const char *pChannelName) const
  public static native int GetChannelIndex(long lpjFbxAnimCurveNode, String pChannelName);
  /// FbxString  GetChannelName (int pChannelId) const
  public static native long GetChannelName(long lpjFbxAnimCurveNode, int pChannelId);
  /// void  ResetChannels ()
  public static native void ResetChannels(long lpjFbxAnimCurveNode);
  /// bool  DisconnectFromChannel (FbxAnimCurve *pCurve, unsigned int pChnlId)
  public static native boolean DisconnectFromChannel(long lpjFbxAnimCurveNode, long pCurve, int pChnlId);
  /// bool  ConnectToChannel (FbxAnimCurve *pCurve, const char *pChnl, bool pInFront=false)
  public static native boolean ConnectToChannel(long lpjFbxAnimCurveNode, long pCurve, String pChnl, boolean pInFront);
  /// bool  ConnectToChannel (FbxAnimCurve *pCurve, unsigned int pChnlId, bool pInFront=false)
  public static native boolean ConnectToChannel1(long lpjFbxAnimCurveNode, long pCurve, int pChnlId, boolean pInFront);
  /// FbxAnimCurve *  CreateCurve (const char *pCurveNodeName, const char *pChannel)
  public static native long CreateCurve(long lpjFbxAnimCurveNode, String pCurveNodeName, String pChannel);
  /// FbxAnimCurve *  CreateCurve (const char *pCurveNodeName, unsigned int pChannelId=0)
  public static native long CreateCurve1(long lpjFbxAnimCurveNode, String pCurveNodeName, int pChannelId);
  /// int  GetCurveCount (unsigned int pChannelId, const char *pCurveNodeName=NULL)
  public static native int GetCurveCount(long lpjFbxAnimCurveNode, int pChannelId, String pCurveNodeName);
  /// FbxAnimCurve *  GetCurve (unsigned int pChannelId, unsigned int pId=0, const char *pCurveNodeName=NULL)
  public static native long GetCurve(long lpjFbxAnimCurveNode, int pChannelId, int pId, String pCurveNodeName);
  /// FbxAnimCurveNode * Create( FbxObject* lpFbxObject,  const char* pName )
  public static native long Create(   long lpFbxObject, String pName);
}
