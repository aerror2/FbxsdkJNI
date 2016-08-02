//copyright by aerror 2016 
package fbxsdk;
//26 112 FbxAnimCurveBase  --------------------
public class FbxAnimCurveBase  {
  public                 class   EExtrapolationType  {
   public static final int eConstant  =  1;
   public static final int eRepetition  =  2;
   public static final int eMirrorRepetition  =  3;
   public static final int eKeepSlope  =  4;
}
  /// virtual void  KeyClear ()=0
  public static native void KeyClear(long lpjFbxAnimCurveBase);
  /// virtual int  KeyGetCount () const =0
  public static native int KeyGetCount(long lpjFbxAnimCurveBase);
  /// virtual int  KeyAdd (FbxTime pTime, FbxAnimCurveKeyBase &pKey, int *pLast=NULL)=0
  public static native int KeyAdd(long lpjFbxAnimCurveBase, long pTime, Long pKey, int [] pLast);
  /// virtual bool  KeySet (int pIndex, FbxAnimCurveKeyBase &pKey)=0
  public static native boolean KeySet(long lpjFbxAnimCurveBase, int pIndex, Long pKey);
  /// virtual bool  KeyRemove (int pIndex)=0
  public static native boolean KeyRemove(long lpjFbxAnimCurveBase, int pIndex);
  /// virtual bool  KeyRemove (int pStartIndex, int pEndIndex)=0
  public static native boolean KeyRemove1(long lpjFbxAnimCurveBase, int pStartIndex, int pEndIndex);
  /// virtual FbxTime  KeyGetTime (int pKeyIndex) const
  public static native long KeyGetTime(long lpjFbxAnimCurveBase, int pKeyIndex);
  /// virtual void  KeySetTime (int pKeyIndex, FbxTime pTime)=0
  public static native void KeySetTime(long lpjFbxAnimCurveBase, int pKeyIndex, long pTime);
  /// void  SetPreExtrapolation (EExtrapolationType pExtrapolation)
  public static native void SetPreExtrapolation(long lpjFbxAnimCurveBase, int pExtrapolation);
  /// EExtrapolationType  GetPreExtrapolation () const
  public static native int GetPreExtrapolation(long lpjFbxAnimCurveBase);
  /// void  SetPreExtrapolationCount (unsigned long pCount)
  public static native void SetPreExtrapolationCount(long lpjFbxAnimCurveBase, long pCount);
  /// unsigned long  GetPreExtrapolationCount () const
  public static native long GetPreExtrapolationCount(long lpjFbxAnimCurveBase);
  /// void  SetPostExtrapolation (EExtrapolationType pExtrapolation)
  public static native void SetPostExtrapolation(long lpjFbxAnimCurveBase, int pExtrapolation);
  /// EExtrapolationType  GetPostExtrapolation () const
  public static native int GetPostExtrapolation(long lpjFbxAnimCurveBase);
  /// void  SetPostExtrapolationCount (unsigned long pCount)
  public static native void SetPostExtrapolationCount(long lpjFbxAnimCurveBase, long pCount);
  /// unsigned long  GetPostExtrapolationCount () const
  public static native long GetPostExtrapolationCount(long lpjFbxAnimCurveBase);
  /// virtual float  Evaluate (FbxTime pTime, int *pLast=NULL)=0
  public static native float Evaluate(long lpjFbxAnimCurveBase, long pTime, int [] pLast);
  /// virtual float  EvaluateIndex (double pIndex)=0
  public static native float EvaluateIndex(long lpjFbxAnimCurveBase, double pIndex);
  /// virtual bool  GetTimeInterval (FbxTimeSpan &pTimeInterval)
  public static native boolean GetTimeInterval(long lpjFbxAnimCurveBase, Long pTimeInterval);
  /// FbxAnimCurveBase * Create( FbxManager* pContainer, const char* pName )
  public static native long Create(   long pContainer, String pName);
}
