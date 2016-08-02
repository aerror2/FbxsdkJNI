package fbxsdk;
//26 83 FbxWeightedMapping  --------------------
public class FbxWeightedMapping  {
  public                   class   ESet  {
   public static final int eSource = 0;
   public static final int eDestination = 1;
}
  /// void  Reset (int pSourceSize, int pDestinationSize)
  public static native void Reset(long lpjFbxWeightedMapping, int pSourceSize, int pDestinationSize);
  /// void  Add (int pSourceIndex, int pDestinationIndex, double pWeight)
  public static native void Add(long lpjFbxWeightedMapping, int pSourceIndex, int pDestinationIndex, double pWeight);
  /// int  GetElementCount (ESet pSet) const
  public static native int GetElementCount(long lpjFbxWeightedMapping, int pSet);
  /// int  GetRelationCount (ESet pSet, int pElement) const
  public static native int GetRelationCount(long lpjFbxWeightedMapping, int pSet, int pElement);
  /// Element &  GetRelation (ESet pSet, int pElement, int pIndex)
  public static native long GetRelation(long lpjFbxWeightedMapping, int pSet, int pElement, int pIndex);
  /// int  GetRelationIndex (ESet pSet, int pElementInSet, int pElementInOtherSet) const
  public static native int GetRelationIndex(long lpjFbxWeightedMapping, int pSet, int pElementInSet, int pElementInOtherSet);
  /// double  GetRelationSum (ESet pSet, int pElement, bool pAbsoluteValue) const
  public static native double GetRelationSum(long lpjFbxWeightedMapping, int pSet, int pElement, boolean pAbsoluteValue);
  /// void  Normalize (ESet pSet, bool pAbsoluteValue)
  public static native void Normalize(long lpjFbxWeightedMapping, int pSet, boolean pAbsoluteValue);
  /// FbxWeightedMapping (int pSourceSize, int pDestinationSize)
  public static native long meCreate(   int pSourceSize, int pDestinationSize);
  /// ~FbxWeightedMapping ()
  public static native void meDestroy(long lpjFbxWeightedMapping);
}
