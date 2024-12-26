#ifdef t9unkubj
#include"debug.cpp"
//#include"template_no_debug.h"
#else 
#define dbg(...) 199958
#endif

#undef _GLIBCXX_DEBUG
#pragma GCC optimize("O3")
using namespace std;
#include<bits/stdc++.h>
using ll=long long;
using ull=unsigned long long;
template<class T>using vc=vector<T>;
template<class T>using vvc=vc<vc<T>>;
#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define REP(i,j,n) for(ll i=(j);i<(ll)(n);i++)
#define DREP(i,n,m) for(ll i=(n);i>=(m);i--)
#define drep(i,n) for(ll i=((n)-1);i>=0;i--)
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()


template<class T,class F>
bool chmin(T &x, F y){
    if(x>y){
        x=y;
        return true;
    }
    return false;
}
template<class T, class F>
bool chmax(T &x, F y){
    if(x<y){
        x=y;
        return true;
    }
    return false;
}
