#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/problems/DSL_2_B"
#include"template.hpp"
#include"segtree/segtree.hpp"
ll op(ll a,ll b){return  a+b;}
int main(){
    INT(n,q);
    segtree<ll,op,0ll>seg(n);
    while(q--){
        INT(t,x,y);
        --x;
        if(t==0)seg.set(x,seg.get(x)+y);
        else PRT(seg.prod(x,y));
    }
}
