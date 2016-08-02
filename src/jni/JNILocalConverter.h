//copyright by aerror 2016 
#pragma once
#include <jni.h>
#include <string>
#include <List>
#include <vector>
#include <fbxsdk.h>
#include "Common.h"


typedef jobject JFbxVector4;
typedef jobject JFbxVector2;
typedef jobject JFbxDouble3;
typedef jobject JFbxQuaternion;

typedef FbxLayerElementArrayTemplate<bool> FbxLayerElementArrayTemplateBool;
typedef FbxLayerElementArrayTemplate<int> FbxLayerElementArrayTemplateInt;
typedef FbxLayerElementArrayTemplate<double> FbxLayerElementArrayTemplateDouble;
typedef FbxLayerElementArrayTemplate<FbxVector2> FbxLayerElementArrayTemplateVector2;
typedef FbxLayerElementArrayTemplate<FbxVector4> FbxLayerElementArrayTemplateVector4;

typedef FbxArray<bool>  FbxArrayBool;
typedef FbxArray<int>  FbxArrayInt;
typedef FbxArray<double>  FbxArrayDouble;
typedef FbxArray<FbxVector2>  FbxArrayVector2;
typedef FbxArray<FbxVector4>  FbxArrayVector4;
typedef FbxArray<long>  FbxArrayLong;

typedef FbxPropertyT<FbxDouble3> FbxPropertyTFbxDouble3;
typedef FbxPropertyT<bool>       FbxPropertyTBool;
typedef FbxPropertyT<double>       FbxPropertyTDouble;
typedef FbxPropertyT<FbxReference >       FbxPropertyTFbxReference;
typedef FbxPropertyT<int>           FbxPropertyTInt;

class JniReleaseCtx
{
public:
    void* jniVal;
    void *outVale;
    jfieldID fieldId;
    void *ext1;
    void *ext2;
    JniReleaseCtx(void* j, void *o, jfieldID d=NULL, void *e1=NULL, void *e2=NULL)
    {
        jniVal = j;
        outVale= o;
        fieldId = d;
        ext1=e1;
        ext2=e2;
    }
};

enum LocalDataType
{
    ldt_jstring,
    ldt_jstring_pt,
    ldt_boolArray,
    ldt_byteArray,
    ldt_intArray,
    ldt_shortArray,
    ldt_floatArray,
    ldt_doubleArray,
    ldt_longArray,
    ldt_objectArray,
    
    
    ldt_boolObject_ref,
    ldt_shortObject_ref,
    ldt_intObject_ref,
    ldt_floatObject_ref,
    ldt_doubleObject_ref,
    ldt_longObject_ref,
    
    ldt_object_ref,
    
    
};

#define j2c_FbxInt_pt j2c_int_pt
#define j2c_FbxShort_pt j2c_short_pt
#define j2c_FbxUShort_pt j2c_short_pt
#define j2c_FbxUChar_pt j2c_byte_pt
#define j2c_FbxUShort_ref j2c_short_ref
#define j2c_FbxInt64_ref   j2c_long_ref
#define j2c_FbxUInt64_ref j2c_long_ref
class LocalHodler
{
public:
    int  type;
    JniReleaseCtx * pdata;
    
    LocalHodler(int t, JniReleaseCtx *p)
    {
        type=t;
        pdata=p;
    }
};

class JNILocalConverter
{
private:
    std::list<LocalHodler> tmpLocals;
    JNIEnv *m_env;
    jclass m_jc;
public:
    
    
    JNILocalConverter(JNIEnv *env, jclass jc)
    {
        m_env  = env;
        m_jc   = jc;
    }
    ~JNILocalConverter()
    {
        for(std::list<LocalHodler>::iterator i = tmpLocals.begin(); i!=tmpLocals.end();i++)
        {
            //m_env->ReleaseStringUTFChars(i->jstr, i->chars);
            
            switch(i->type)
            {
                case ldt_jstring:
                {
                    
                    JniReleaseCtx *kv=(JniReleaseCtx *)i->pdata;
                    m_env->ReleaseStringUTFChars((jstring)kv->jniVal, (const char*)kv->outVale);
                    delete kv;
                }
                    break;
                case ldt_jstring_pt:
                {
                    JniReleaseCtx *kv=(JniReleaseCtx *)i->pdata;
                    const char* pstr = (const char*)kv->ext1;
                    jstring jstr= (jstring)kv->ext2;
                    m_env->ReleaseStringUTFChars(jstr, pstr);
                    
                    const char **lppstr = (const char **)kv->outVale;
                    jobjectArray jstrArr = (jobjectArray)kv->jniVal;
                    
                    if(*lppstr!=pstr)
                    {
                        jstring newjstr =  m_env->NewStringUTF((const char*)(*lppstr));
                        m_env->SetObjectArrayElement(jstrArr, 0, newjstr);
                    }
                    
                    delete lppstr;
                    delete kv;
                    
                }
                    break;
                    
                case ldt_boolArray:
                {
                    JniReleaseCtx *kv=(JniReleaseCtx *)i->pdata;
                    m_env->ReleaseBooleanArrayElements((jbooleanArray)kv->jniVal, (jboolean*)kv->outVale, 0);
                    delete kv;
                }
                    break;
                case ldt_shortArray:
                {
                    JniReleaseCtx *kv=(JniReleaseCtx *)i->pdata;
                    m_env->ReleaseShortArrayElements((jshortArray)kv->jniVal, (jshort*)kv->outVale, 0);
                    delete kv;
                }
                    break;
                case ldt_intArray:
                {
                    JniReleaseCtx *kv=(JniReleaseCtx *)i->pdata;
                    m_env->ReleaseIntArrayElements((jintArray)kv->jniVal, (jint*)kv->outVale, 0);
                    delete kv;
                }
                    break;
                case ldt_longArray:
                {
                    JniReleaseCtx *kv=(JniReleaseCtx *)i->pdata;
                    m_env->ReleaseLongArrayElements((jlongArray)kv->jniVal, (jlong*)kv->outVale, 0);
                    delete kv;
                }
                    break;
                    
                case ldt_floatArray:
                {
                    JniReleaseCtx *kv=(JniReleaseCtx *)i->pdata;
                    m_env->ReleaseFloatArrayElements((jfloatArray)kv->jniVal, (jfloat*)kv->outVale, 0);
                    delete kv;
                }
                    break;
                case ldt_doubleArray:
                {
                    JniReleaseCtx *kv=(JniReleaseCtx *)i->pdata;
                    m_env->ReleaseDoubleArrayElements((jdoubleArray)kv->jniVal, (jdouble*)kv->outVale, 0);
                    delete kv;
                }
                    break;
                    
                    
                    
                    
                case ldt_boolObject_ref:
                {
                    JniReleaseCtx *kv=(JniReleaseCtx *)i->pdata;
                    jboolean *outVale =(jboolean *)kv->outVale;
                    
                    m_env->SetBooleanField((jobject)kv->jniVal, kv->fieldId, *outVale);
                    delete outVale;
                    delete kv;
                }
                    break;
                    
                case ldt_shortObject_ref:
                {
                    JniReleaseCtx *kv=(JniReleaseCtx *)i->pdata;
                    jshort *outVale =(jshort *)kv->outVale;
                    
                    m_env->SetShortField((jobject)kv->jniVal, kv->fieldId, *outVale);
                    delete outVale;
                    delete kv;
                }
                    break;
                    
                case ldt_intObject_ref:
                {
                    JniReleaseCtx *kv=(JniReleaseCtx *)i->pdata;
                    jint *outVale =(jint *)kv->outVale;
                    
                    m_env->SetIntField((jobject)kv->jniVal, kv->fieldId, *outVale);
                    delete outVale;
                    delete kv;
                }
                    break;
                case ldt_longObject_ref:
                {
                    JniReleaseCtx *kv=(JniReleaseCtx *)i->pdata;
                    jlong *outVale =(jlong *)kv->outVale;
                    
                    m_env->SetLongField((jobject)kv->jniVal, kv->fieldId, *outVale);
                    delete outVale;
                    delete kv;
                }
                    break;
                case ldt_floatObject_ref:
                {
                    JniReleaseCtx *kv=(JniReleaseCtx *)i->pdata;
                    jfloat *outVale =(jfloat *)kv->outVale;
                    
                    m_env->SetFloatField((jobject)kv->jniVal, kv->fieldId, *outVale);
                    delete outVale;
                    delete kv;
                }
                    break;
                case ldt_doubleObject_ref:
                {
                    JniReleaseCtx *kv=(JniReleaseCtx *)i->pdata;
                    jdouble *outVale =(jdouble *)kv->outVale;
                    
                    m_env->SetDoubleField((jobject)kv->jniVal, kv->fieldId, *outVale);
                    delete outVale;
                    delete kv;
                }
                    break;
                    
                default:
                {
                    JniReleaseCtx *kv=(JniReleaseCtx *)i->pdata;
                    delete kv;
                }
                    break;
            }
        }
        
    }
    
    // cpp type to java type
    template<typename T>
    jstring c2j_string(T v)
    {
        return m_env->NewStringUTF((const char*)v);
    }
    
    template<typename JT, typename CT>
    JT c2j(CT v)
    {
        return (JT)v;
    }
    
    template<typename JT, typename CT>
    JT c2j_pt(CT v)
    {
        return (JT)v;
    }
    
    template<typename JT, typename CT>
    JT c2j_ppt(CT v)
    {
        return (JT)v;
    }
    
    
    template<typename JT, typename CT>
    JT c2j_ref(CT  v)
    {
        return (JT)v;
    }
    
    
    template<typename JT, typename CT>
    JT c2j_obj(CT v)
    {
        CT *ret = new CT();
        *ret = v;
        return (JT)ret;
    }
    
    template<typename JT, typename CT>
    JT c2j_obj_pt(CT * v)
    {
        return (JT)v;
    }
    
    template<typename JT, typename CT>
    JT c2j_obj_ref(CT & v)
    {
        CT *ret = &v;
        return (JT)ret;
    }
    
    template<typename JT, typename CT>
    JT c2j_obj_ref( CT  const & v)
    {
        
        CT const *ret = &v;
        //*ret = v;
        return (JT)ret;
    }
    
    template<typename JT, typename CT>
    JT c2j_tmpl_FbxArray(CT v)
    {
        CT * ret = new CT();
        *ret = v;
        return (JT)ret;
    }
    
    
    template<typename JT, typename CT>
    JT c2j_tmpl_FbxArray_pt(CT v)
    {
        return (JT)v;
    }
    
    //template..
    template<typename JT, typename CT>
    JT  c2j_tmpl_FbxArray(FbxArray<CT> v)
    {
        FbxArray<CT> *ret = new FbxArray<CT>();
        *ret = v;
        return (JT)ret;
    }
    template<typename JT, typename CT>
    JT  c2j_tmpl_FbxArray_pt(FbxArray<CT> *v)
    {
        FbxArray<CT> *ret = (FbxArray<CT> *)v;
        return (JT)ret;
    }
    
    template<typename JT, typename CT>
    JT  c2j_tmpl_FbxArray_ref( FbxArray<CT> & v)
    {
        FbxArray<CT> *ret = &v;
        return (JT)ret;
    }
    
    template<typename JT, typename CT>
    JT c2j_tmpl_FbxPropertyT_pt( FbxPropertyT<CT> * v)
    {
        FbxPropertyT<CT> *ret = (FbxPropertyT<CT> *)v;
        return (JT)ret;
    }
    
    
    jlong  c2j_void_pt(void * v)
    {
        return (jlong)v;
    }
    jlong  c2j_void_pt(const void * v)
			 {
                 return (jlong)v;
             }
    
    jlong  c2j_void_ppt(void ** v)
    {
        return (jlong)v;
    }
    
    
    //jave to cpp type
    
    template<typename JT, typename CT>
    CT j2c(JT v)
    {
        return (CT)v;
    }
    
    template<typename JT, typename CT>
    CT j2c_object(JT v)
    {
        CT *pt = ( CT *)v;
        
        return *pt;
    }
    
    template<typename JT, typename CT>
    CT *j2c_bool_pt(JT v)
    {
        jboolean isCopy=false;
        jboolean *psrc =m_env->GetBooleanArrayElements(v,&isCopy);
        tmpLocals.push_back(LocalHodler(ldt_boolArray, new JniReleaseCtx(v,psrc)));
        return (CT*)psrc;
    }
    
    template<typename JT, typename CT>
    CT *j2c_byte_pt(JT v)
    {
        jboolean isCopy=false;
        jbyte *psrc =m_env->GetByteArrayElements(v,&isCopy);
        tmpLocals.push_back(LocalHodler(ldt_byteArray, new JniReleaseCtx(v,psrc)));
        
        return (CT*)psrc;
    }
    
    
    
    template<typename JT, typename CT>
    CT* j2c_short_pt(JT v)
    {
        jboolean isCopy=false;
        jshort *psrc =m_env->GetShortArrayElements(v,&isCopy);
        tmpLocals.push_back(LocalHodler(ldt_shortArray, new JniReleaseCtx(v,psrc)));
        return (CT*)psrc;
    }
    
    
    template<typename JT, typename CT>
    CT* j2c_int_pt(JT v)
    {
        jboolean isCopy=false;
        jint *psrc =m_env->GetIntArrayElements(v,&isCopy);
        tmpLocals.push_back(LocalHodler(ldt_intArray, new JniReleaseCtx(v,psrc)));
        return (CT*)psrc;
    }
    
    template<typename JT, typename CT>
    CT* j2c_long_pt(JT v)
    {
        jboolean isCopy=false;
        jlong *psrc =m_env->GetLongArrayElements(v,&isCopy);
        tmpLocals.push_back(LocalHodler(ldt_longArray, new JniReleaseCtx(v,psrc)));
        return (CT*)psrc;
    }
    
    
    template<typename JT, typename CT>
    CT *j2c_float_pt(JT v)
    {
        jboolean isCopy=false;
        jfloat *psrc =m_env->GetFloatArrayElements(v,&isCopy);
        tmpLocals.push_back(LocalHodler(ldt_floatArray, new JniReleaseCtx(v,psrc)));
        return (CT*)psrc;
    }
    
    
    
    template<typename JT, typename CT>
    CT *j2c_double_pt(JT v)
    {
        jboolean isCopy=false;
        jdouble *psrc =m_env->GetDoubleArrayElements(v,&isCopy);
        tmpLocals.push_back(LocalHodler(ldt_doubleArray, new JniReleaseCtx(v,psrc)));
        
        return (CT*)psrc;
    }
    
    template<typename JT, class CT>
    CT* j2c_object_pt(JT v)
    {
        CT *pt = ( CT *)v;
        return pt;
    }
    
    
    
    
    template<typename JT, typename CT>
    const CT*  j2c_string(JT jstr)
    {
        if (jstr == NULL || m_env==NULL)
        {
            return "";
        }
        
        const char* chars = m_env->GetStringUTFChars(jstr, NULL);
        if (chars == NULL )
        {
            return "";
        }
        
        tmpLocals.push_back(LocalHodler(ldt_jstring, new JniReleaseCtx((void*)jstr,(void*)chars)));
        
        return (const CT*)chars;
    }
    
    
    template<typename JT, typename CT>
    CT**  j2c_string_pt(JT v)
    {
        jboolean isCopy=false;
        jstring jstr = (jstring)m_env->GetObjectArrayElement(v,0);
        
        const char** retvale= new const char*[1];
        if(jstr!=NULL)
        {
            *retvale= (const char*)m_env->GetStringUTFChars(jstr, &isCopy);
        }
        
        tmpLocals.push_back(LocalHodler(ldt_jstring_pt, new JniReleaseCtx(v,retvale,0, (void*)*retvale, (void*)jstr)));
        
        return (CT**)retvale;
    }
    
    
    template<typename JT, typename CT>
    CT** j2c_object_ppt(JT v)
    {
        
        jboolean isCopy=false;
        
        CT** ppObject = (CT**)m_env->GetLongArrayElements(v,&isCopy);
        
        tmpLocals.push_back(LocalHodler(ldt_longArray, new JniReleaseCtx(v,ppObject)));
        
        return (CT**)ppObject;
    }
    
    template<typename JT, typename CT>
    CT** j2c_long_ppt(JT v)
    {
        
        jobject firstObj = m_env->GetObjectArrayElement(v, 0);
        jclass jvc = m_env->GetObjectClass(firstObj);
        jfieldID id = m_env->GetFieldID(jvc, "value", "J");
        long *ret = new long();
        *ret = m_env->GetLongField(firstObj,id);
        
        JniReleaseCtx *ctx = new JniReleaseCtx(firstObj,ret,id);
        tmpLocals.push_back(LocalHodler(ldt_longObject_ref, ctx ));
        
        return (CT**)ret;
    }
    
    
    template<typename JT, typename CT>
    CT * j2c_bool_ref(JT v)
    {
        jclass jvc = m_env->GetObjectClass(v);
        
        jfieldID id = m_env->GetFieldID(jvc, "value", "B");
        
        jboolean *ret = new jboolean;
        *ret = m_env->GetBooleanField(v,id);
        
        JniReleaseCtx *ctx = new JniReleaseCtx(v,ret,id);
        tmpLocals.push_back(LocalHodler(ldt_boolObject_ref, ctx));
        return (CT *)ret;
    }
    
    
    template<typename JT, typename CT>
    CT * j2c_short_ref(JT v)
    {
        jclass jvc = m_env->GetObjectClass(v);
        
        jfieldID id = m_env->GetFieldID(jvc, "value", "S");
        
        short *ret = new short;
        *ret = m_env->GetShortField(v,id);
        
        JniReleaseCtx *ctx = new JniReleaseCtx(v,ret,id);
        tmpLocals.push_back(LocalHodler(ldt_shortObject_ref, ctx));
        
        return (CT *)ret;
    }
    
    template<typename JT, typename CT>
    CT * j2c_int_ref(JT v)
    {
        jclass jvc = m_env->GetObjectClass(v);
        
        jfieldID id = m_env->GetFieldID(jvc, "value", "I");
        
        int *ret = new int;
        *ret = m_env->GetIntField(v,id);
        
        JniReleaseCtx *ctx = new JniReleaseCtx(v,ret,id);
        tmpLocals.push_back(LocalHodler(ldt_intObject_ref, ctx));
        
        return (CT*)ret;
    }
    
    template<typename JT, typename CT>
    CT * j2c_long_ref(JT v)
    {
        jclass jvc = m_env->GetObjectClass(v);
        
        jfieldID id = m_env->GetFieldID(jvc, "value", "J");
        
        long *ret = new long;
        *ret = m_env->GetLongField(v,id);
        
        JniReleaseCtx *ctx = new JniReleaseCtx(v,ret,id);
        tmpLocals.push_back(LocalHodler(ldt_longObject_ref, ctx));
        
        return (CT*)ret;
    }
    
    
    
    template<typename JT, typename CT>
    CT * j2c_double_ref(JT v)
    {
        jclass jvc = m_env->GetObjectClass(v);
        
        jfieldID id = m_env->GetFieldID(jvc, "value", "D");
        
        double *ret = new double;
        *ret = m_env->GetDoubleField(v,id);
        
        JniReleaseCtx *ctx = new JniReleaseCtx(v,ret,id);
        tmpLocals.push_back(LocalHodler(ldt_doubleObject_ref, ctx));
        return (CT * )ret;
    }
    
    template<typename JT, typename CT>
    CT* j2c_object_ref(JT v)
    {
        jclass jvc = m_env->GetObjectClass(v);
        jfieldID id = m_env->GetFieldID(jvc, "value", "J");
        CT *ret = ( CT *)m_env->GetLongField(v,id);
        return  (CT*)ret;
    }
    
    
    template<typename JT, typename CT>
    CT* j2c_FbxReference_ref(JT v)
    {
        jclass jvc = m_env->GetObjectClass(v);
        
        jfieldID id = m_env->GetFieldID(jvc, "value", "J");
        
        long *ret = new long;
        *ret = m_env->GetLongField(v,id);
        
        JniReleaseCtx *ctx = new JniReleaseCtx(v,ret,id);
        tmpLocals.push_back(LocalHodler(ldt_longObject_ref, ctx));
        
        return (CT*)ret;
        
    }
    
    
    
    void*  j2c_void_pt(jlong v)
    {
        return (void*)v;
    }
    
    void**  j2c_void_ppt(jlongArray v)
    {
        jboolean isCopy=false;
        jlong *ppObject =m_env->GetLongArrayElements(v,&isCopy);
        tmpLocals.push_back(LocalHodler(ldt_longArray, new JniReleaseCtx(v,ppObject)));
        return (void**)ppObject;
    }
    
    
    
    
    
    
    //template..
    
    template<typename JT, typename CT>
    FbxArray<CT>* j2c_tmpl_FbxArray_obj_pt(JT v)
    {
        FbxArray<CT> *ret = (FbxArray<CT> *)v;
        return ret;
    }
    
    
    
    template<typename JT, typename CT>
    FbxArray<CT> * j2c_tmpl_FbxArray_obj_ref(JT v)
    {
        //TODO
        jclass jvc = m_env->GetObjectClass(v);
        jfieldID id = m_env->GetFieldID(jvc, "value", "J");
        FbxArray<CT> * ret= (FbxArray<CT> * )m_env->GetLongField(v,id);
        return (FbxArray<CT> *)ret;
    }
    
    template<typename JT, typename CT>
    FbxLayerElementArrayTemplate<CT> ** j2c_tmpl_FbxLayerElementArrayTemplate_obj_ppt(JT v)
    {
        
        jboolean isCopy=false;
        jlong *lpv =m_env->GetLongArrayElements(v,&isCopy);
        
        
        JniReleaseCtx *ctx = new JniReleaseCtx(v,lpv);
        tmpLocals.push_back(LocalHodler(ldt_longArray, ctx));
        
        return (FbxLayerElementArrayTemplate<CT> **)lpv;
    }
    
};
