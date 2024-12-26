template<class T,class G,class F>
F modpow(T x,G p,F m){
    T ret=1%m;
    x%=m;
    while(p){
        if(p&1)ret=(1ll*ret*x)%m;
        x=(1ll*x*x)%m;
        p>>=1;
    }
    return ret;
}
template<class T>
T extgcd(T a,T b,T&x,T&y){//ax+by=gcd(a,b)となるようなもの
    if(b==0){
        x=1;
        y=0;
        return a;
    }else{
        T res=extgcd(b,a%b,y,x);
        y-=(a/b)*x;
        return res;
    }
}
template<class T>
pair<T,T> inv(T x,T m){
    T a1,a2;
    T res=extgcd(x,m,a1,a2);
    return {a1,m/res};
}
constexpr int mod=998244353;
struct mint{
    long long val;
    inline long long fast(long long x){
        if(x<mod&&x>=0)return x;
        x%=mod;
        if(x<0)x+=mod;
        return x;
    }
    mint():val(0){}
    mint(long long val):val(fast(val)){}
    mint power(long long m)const {
        mint res(1);
        mint ret(*this);
        while(m){
           if(m&1)res*=ret;
           ret*=ret;
           m>>=1;
        }
        return res;
    }
    mint& operator++() {
        val++;
        if (val == mod) val = 0;
        return *this;
    }
    mint& operator--() {
        if (val == 0)val=mod;
        val--;
        return *this;
    }
    mint operator++(int) {
        mint result = *this;
        ++*this;
        return result;
    }
    mint operator--(int) {
        mint result = *this;
        --*this;
        return result;
    }
    mint operator-() const { 
      return mint(-val);
    }
    friend mint operator +(const mint&a,const mint&b) noexcept{
        return mint(a)+=b;
    }
    friend mint operator -(const mint&a,const mint&b) noexcept{
        return mint(a)-=b;
    }
    friend mint operator *(const mint&a,const mint&b) noexcept{
        return mint(a)*=b;
    }
    friend mint operator /(const mint&a,const mint&b) noexcept{
        return mint(a)/=b;
    }
    mint& operator+=(const mint&a)noexcept{
        val+=a.val;
        if(val>=mod)val-=mod;
        return *this;
    }
    mint& operator-=(const mint&a)noexcept{
        val-=a.val;
        if(val<0)val+=mod;
        return *this;
    }
    mint& operator*=(const mint&a){
        val*=a.val;
        val=fast(val);
        return *this;
    }
    mint& operator/=(const mint&a){
        val*=inv<long long>(a.val,mod).first;
        val=fast(val);
        return *this;
    }
    bool operator == (const mint&x)const noexcept{
        return this->val==x.val;
    }
    bool operator != (const mint&x)const noexcept{
        return this->val!=x.val;
    }
    friend ostream& operator << (ostream &os, const mint &x) noexcept {
        return os << x.val;
    }
    friend istream& operator >> (istream &is,  mint &x) noexcept {
        long long v;
        is >> v;
        x=mint(v);
        return is;
    }
};
vector<mint>fact(1,1),invfact(1,1);
void build(int n){
    if(n<(int)fact.size())return;
    fact=invfact=vector<mint>(n+1);
    fact[0]=1;
    for(int i=1;i<=n;i++)fact[i]=fact[i-1]*i;
    invfact[n]=(1/fact[n]);
    for(int i=n-1;i>=0;i--)invfact[i]=invfact[i+1]*(i+1);
}
mint C(int a,int b){//aCb
    if(a<0||b<0||a-b<0)return mint(0);
    while((int)fact.size()<=a){
        fact.push_back(fact.back()*(fact.size()));
    }
    while((int)invfact.size()<=a){
        invfact.push_back(invfact.back()/invfact.size());
    }
    return fact[a]*invfact[b]*invfact[a-b];
}
mint P(int a,int b){
    if(a<b||b<0)return 0;
    return fact[a]*invfact[a-b];
}
//a個のものからb個を重複を許して選ぶ
mint H(int a,int b){
    return C(a+b-1,b);
}
void print(mint a) { cout << a; }
template<class T>
pair<T,T> mod_solve(T a,T b,T m){//ax=b mod mとなるxを返す
    a%=m,b%=m;if(a<0)a+=m;if(b<0)b+=m;
    T g=gcd(gcd(a,b),m);
    a/=g,b/=g,m/=g;
    if(gcd(a,m)>1)return {-1,-1};
    return {(inv(a,m).first*b)%m,inv(a,m).second};
}
