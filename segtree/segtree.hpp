#include<bits/stdc++.h>
using namespace std;
template<class T,T (*op)(T, T),T e>
struct segtree{
    int n;
    vector<T>node;
    segtree(){}
    segtree(int n):n(n),node(n*2,e){}
    void set(int i,T x){
        node[i+=n]=x;
        while(i>>=1)node[i]=op(node[i<<1],node[i<<1|1]);
    }
    T prod(int l,int r){
        l+=n,r+=n;
        T sml=e,smr=e;
        while(l<r){
            if(l&1)sml=op(sml,node[l++]);
            if(r&1)smr=op(node[--r],smr);
            l>>=1,r>>=1;
        }
        return op(sml,smr);
    }
    T get(int i){
		return node[i+n];
	}
    template<class F> int max_right(int L, F f) const {
    long long l = n + L, w = 1, ansL = e;
    for(; L + w <= n; l >>= 1, w <<= 1) if(l & 1) {
        if(not f(op(ansL, node[l]))) break;
        ansL = op(ansL, node[l++]);
        L += w;
    }
    while(l <<= 1, w >>= 1){
        if(L + w <= n && f(op(ansL, node[l]))){
            ansL = op(ansL, node[l++]);
            L += w;
        }
    }
    return L;
    }
    template<class F> int min_left(int R, F f) const {
    long long r = n + R, w = 1, ansR = e;
    for(; R - w >= 0; r >>= 1, w <<= 1) if(r & 1) {
        if(not f(op(node[r - 1], ansR))) break;
        ansR = op(node[--r], ansR);
        R -= w;
    }
    while(r <<= 1, w >>= 1){
        if(R - w >= 0 && f(op(node[r - 1], ansR))){
            ansR = op(node[--r], ansR);
            R -= w;
        }
    }
    return R;
}
};
