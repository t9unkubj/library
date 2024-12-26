template<class monoid>
struct segtree{
    int n;
    vector<monoid>node;
    static monoid e(){
        return monoid::e();
    }
    static monoid op(monoid a,monoid b){
        return monoid::op(a,b);
    }

    segtree(){}
    segtree(int n):n(n),node(n*2,e()){
        assert(0<=n);
    }
    void set(int i,monoid x){
        assert(0<=i&&i<n);
        node[i+=n]=x;
        while(i>>=1)node[i]=op(node[i<<1],node[i<<1|1]);
    }
    monoid prod(int l,int r) const {
        assert(0<=l&&l<=r&&r<=n);
        l+=n,r+=n;
        monoid sml=e(),smr=e();
        while(l<r){
            if(l&1)sml=op(sml,node[l++]);
            if(r&1)smr=op(node[--r],smr);
            l>>=1,r>>=1;
        }
        return op(sml,smr);
    }
    monoid get(int i){
        assert(0<=i&&i<=n);
		return node[i+n];
	}
    //return max val s.t. f([L,val))) = true
    template<class F>
    int max_right(int L,F&f) const {
        assert(f(e()));
        int l=n+L;   
        int w=1;
        monoid ansL=e();
        for(;L+w<=n;l>>=1,w<<=1){
            if(l&1){
                if(!(f(op(ansL,node[l]))))break;
                ansL=op(ansL,node[l++]);
                L+=w;
            }
        }
        while(l<<=1,w>>=1){
            if(L+w<=n&&f(op(ansL,node[l]))){
                ansL=op(ansL,node[l++]);
                L+=w;
            }
        }
        return L;
    }
    //return min val s.t. f([val,R)) = true
    template<class F>
    int min_left(int R,F&f) const {
        assert(f(e()));
        int r=n+R;   
        int w=1;
        monoid ansR=e();
        for(;R-w>=n;r>>=1,w<<=1){
            if(r&1){
                if(!(f(op(ansR,node[r-1]))))break;
                ansR=op(ansR,node[--r]);
                R-=w;
            }
        }
        while(r<<=1,w>>=1){
            if(R-w>=n&&f(op(ansR,node[r-1]))){
                ansR=op(ansR,node[--r]);
                R-=w;
            }
        }
        return R;
    }
};
