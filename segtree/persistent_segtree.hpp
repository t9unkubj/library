template<class T>
struct persistent_seg{
    struct Node;
    using np=Node*;
    int n;
    struct Node{
        np  l,r;
        T data;
        Node(T x):data(x),l(nullptr),r(nullptr){}
    };
    using F=function<T(T,T)>;
    F op;
    T e;
    persistent_seg(int n,F op,T e):n(n),op(op),e(e){}
    np merge(np l,np r){//左の子と右の子をmergeした親のポインタを返す
        auto p= new Node(op(l->data,r->data));
        p->l=l;
        p->r=r;
        return p;
    }
    np init(int l,int r,vector<T>&v){
        if(l+1>=r)return new Node(v[l]);
        int mid=(l+r)>>1;
        return merge(init(l,mid,v),init(mid,r,v));
    }
    np init(vector<T>&v){
        return init(0,n,v);
    }
    np set(int l,int r,int k,np&p,T x){//[l,r)でkを更新  今見ているのがp
        if(r<=k||k<l)return p;
        if(l+1>=r)return new Node(x);
        int mid=(l+r)>>1;
        return merge(set(l,mid,k,p->l,x),set(mid,r,k,p->r,x));
    }
    np set(int k,np&p,T x){
        return set(0,n,k,p,x);
    }
    T prod(np&p,int l0,int r0,int l1,int r1){//[l0,r0)空間のものを見る　現在[l1,r1)
        if(r1<=l0||r0<=l1)return e;
        if(l0<=l1&&r1<=r0){
            return p->data;
        }
        int mid=(l1+r1)>>1;
        return op(prod(p->l,l0,r0,l1,mid),prod(p->r,l0,r0,mid,r1));
    }
    T prod(np&p,int l,int r){
        return prod(p,l,r,0,n);    
    }
    T get(np&p,int i){//p[i]を返す
        return prod(p,i,i+1,0,n);
    }
    np new_t(){//空のセグ木を返すk
        vector<T> v(n,e);
        return init(v);
    }
};
