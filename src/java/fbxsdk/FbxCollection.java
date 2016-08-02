//copyright by aerror 2016 
package fbxsdk;
//26 99 FbxCollection  --------------------
public class FbxCollection  {
  /// virtual void  Clear ()
  public static native void Clear(long lpjFbxCollection);
  /// virtual bool  AddMember (FbxObject *pMember)
  public static native boolean AddMember(long lpjFbxCollection, long pMember);
  /// virtual bool  RemoveMember (FbxObject *pMember)
  public static native boolean RemoveMember(long lpjFbxCollection, long pMember);
  /// int  GetMemberCount () const
  public static native int GetMemberCount(long lpjFbxCollection);
  /// FbxObject *  GetMember (int pIndex=0) const
  public static native long GetMember(long lpjFbxCollection, int pIndex);
  /// virtual bool  IsMember (const FbxObject *pMember) const
  public static native boolean IsMember(long lpjFbxCollection, long pMember);
  /// int  GetMemberCount () const
  public static native int GetMemberCount1(long lpjFbxCollection);
  /// int  GetMemberCount (const FbxCriteria &pCriteria) const
  public static native int GetMemberCount2(long lpjFbxCollection, Long pCriteria);
  /// FbxObject *  GetMember (const FbxCriteria &pCriteria, int pIndex=0) const
  public static native long GetMember1(long lpjFbxCollection, Long pCriteria, int pIndex);
  /// FbxObject *  FindMember (const FbxCriteria &pCriteria, const char *pName) const
  public static native long FindMember(long lpjFbxCollection, Long pCriteria, String pName);
  /// virtual void  SetSelectedAll (bool pSelection)
  public static native void SetSelectedAll(long lpjFbxCollection, boolean pSelection);
  /// FbxCollection * Create( FbxObject* lpFbxObject,  const char* pName )
  public static native long Create(   long lpFbxObject, String pName);
}
