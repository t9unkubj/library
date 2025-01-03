#define PROBLEM "https://judge.yosupo.jp/problem/point_set_range_composite"

#include "my_template.hpp"
#include "modint/mint.hpp"
#include "data_structure/segment_trees/segtree.hpp"
#include "data_structure/monoid/affine.hpp"
void solve(){
    int n,q;
    cin>>n>>q;
    segtree<monoid<mint>>seg(n);
    rep(i,n){
        mint a,b;
        cin>>a>>b;
        seg.set(i,monoid<mint>(a,b));
    }
    while(q--){
        int t;
        cin>>t;
        if(t==0){
            int p,c,d;
            cin>>p>>c>>d;
            seg.set(p,monoid<mint>{c,d});
        }else{
            int l,r,x;
            cin>>l>>r>>x;
            cout<<seg.prod(l,r).a*x+seg.prod(l,r).b<<"\n";
        }
    }
}
int main(){
    solve();
}
