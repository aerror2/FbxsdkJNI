//copyright by aerror 2016 
#include <jni.h>
#include <string>
#include <List>
#include <vector>
#include <fbxsdk.h>
#include "Common.h"


class FbxJnimgr
{
public:
    FbxManager* lSdkManager;
    FbxScene* lScene;
    
    FbxJnimgr()
    {
        lSdkManager = NULL;
        lScene = NULL;
        InitializeSdkObjects(lSdkManager, lScene);
    }
    
    ~FbxJnimgr()
    {
        bool lResult;
        // Destroy all objects created by the FBX SDK.
        DestroySdkObjects(lSdkManager, lResult);
    }
    
    FbxScene * GetScene()
    {
        return lScene;
    }
    
    FbxManager* GetFbxManager()
    {
        return lSdkManager;
    }
    
    int SaveScene(FbxScene *lps, const char *lpFileName)
    {
        return ::SaveScene(lSdkManager, lps, lpFileName);
    }
    
    
    
    static FbxAMatrix *  msmMultiplyFbxAMatrix(FbxAMatrix *lpA, FbxAMatrix *lpB)
    {
        FbxAMatrix *ret = new FbxAMatrix();
        *ret =  (*lpA) * (*lpB);
        return ret;
    }
    
    static void    msmFillFbxAMatrix(FbxAMatrix *lpA ,  double * lpDoubleArray)
    {
        double* lpdst=  (double*)(*lpA);
        memcpy(lpdst, lpDoubleArray, 16*sizeof(double));
    }
    
    static  FbxAMatrix* msmCreateFbxAMatrix(double * lpDoubleArray)
    {
        FbxAMatrix* ret = new FbxAMatrix();
        msmFillFbxAMatrix(ret, lpDoubleArray);
        return ret;
    }
    
    
};




