#include"template.hpp"
#include"segtree/segtree.hpp"
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
