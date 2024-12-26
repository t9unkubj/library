---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/Point Set Range Composite.test.cpp
    title: test/Point Set Range Composite.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"modint/mint.hpp\"\ntemplate<class T,class G,class F>\nF\
    \ modpow(T x,G p,F m){\n    T ret=1%m;\n    x%=m;\n    while(p){\n        if(p&1)ret=(1ll*ret*x)%m;\n\
    \        x=(1ll*x*x)%m;\n        p>>=1;\n    }\n    return ret;\n}\ntemplate<class\
    \ T>\nT extgcd(T a,T b,T&x,T&y){//ax+by=gcd(a,b)\u3068\u306A\u308B\u3088\u3046\
    \u306A\u3082\u306E\n    if(b==0){\n        x=1;\n        y=0;\n        return\
    \ a;\n    }else{\n        T res=extgcd(b,a%b,y,x);\n        y-=(a/b)*x;\n    \
    \    return res;\n    }\n}\ntemplate<class T>\npair<T,T> inv(T x,T m){\n    T\
    \ a1,a2;\n    T res=extgcd(x,m,a1,a2);\n    return {a1,m/res};\n}\nconstexpr int\
    \ mod=998244353;\nstruct mint{\n    long long val;\n    inline long long fast(long\
    \ long x){\n        if(x<mod&&x>=0)return x;\n        x%=mod;\n        if(x<0)x+=mod;\n\
    \        return x;\n    }\n    mint():val(0){}\n    mint(long long val):val(fast(val)){}\n\
    \    mint power(long long m)const {\n        mint res(1);\n        mint ret(*this);\n\
    \        while(m){\n           if(m&1)res*=ret;\n           ret*=ret;\n      \
    \     m>>=1;\n        }\n        return res;\n    }\n    mint& operator++() {\n\
    \        val++;\n        if (val == mod) val = 0;\n        return *this;\n   \
    \ }\n    mint& operator--() {\n        if (val == 0)val=mod;\n        val--;\n\
    \        return *this;\n    }\n    mint operator++(int) {\n        mint result\
    \ = *this;\n        ++*this;\n        return result;\n    }\n    mint operator--(int)\
    \ {\n        mint result = *this;\n        --*this;\n        return result;\n\
    \    }\n    mint operator-() const { \n      return mint(-val);\n    }\n    friend\
    \ mint operator +(const mint&a,const mint&b) noexcept{\n        return mint(a)+=b;\n\
    \    }\n    friend mint operator -(const mint&a,const mint&b) noexcept{\n    \
    \    return mint(a)-=b;\n    }\n    friend mint operator *(const mint&a,const\
    \ mint&b) noexcept{\n        return mint(a)*=b;\n    }\n    friend mint operator\
    \ /(const mint&a,const mint&b) noexcept{\n        return mint(a)/=b;\n    }\n\
    \    mint& operator+=(const mint&a)noexcept{\n        val+=a.val;\n        if(val>=mod)val-=mod;\n\
    \        return *this;\n    }\n    mint& operator-=(const mint&a)noexcept{\n \
    \       val-=a.val;\n        if(val<0)val+=mod;\n        return *this;\n    }\n\
    \    mint& operator*=(const mint&a){\n        val*=a.val;\n        val=fast(val);\n\
    \        return *this;\n    }\n    mint& operator/=(const mint&a){\n        val*=inv<long\
    \ long>(a.val,mod).first;\n        val=fast(val);\n        return *this;\n   \
    \ }\n    bool operator == (const mint&x)const noexcept{\n        return this->val==x.val;\n\
    \    }\n    bool operator != (const mint&x)const noexcept{\n        return this->val!=x.val;\n\
    \    }\n    friend ostream& operator << (ostream &os, const mint &x) noexcept\
    \ {\n        return os << x.val;\n    }\n    friend istream& operator >> (istream\
    \ &is,  mint &x) noexcept {\n        long long v;\n        is >> v;\n        x=mint(v);\n\
    \        return is;\n    }\n};\nvector<mint>fact(1,1),invfact(1,1);\nvoid build(int\
    \ n){\n    if(n<(int)fact.size())return;\n    fact=invfact=vector<mint>(n+1);\n\
    \    fact[0]=1;\n    for(int i=1;i<=n;i++)fact[i]=fact[i-1]*i;\n    invfact[n]=(1/fact[n]);\n\
    \    for(int i=n-1;i>=0;i--)invfact[i]=invfact[i+1]*(i+1);\n}\nmint C(int a,int\
    \ b){//aCb\n    if(a<0||b<0||a-b<0)return mint(0);\n    while((int)fact.size()<=a){\n\
    \        fact.push_back(fact.back()*(fact.size()));\n    }\n    while((int)invfact.size()<=a){\n\
    \        invfact.push_back(invfact.back()/invfact.size());\n    }\n    return\
    \ fact[a]*invfact[b]*invfact[a-b];\n}\nmint P(int a,int b){\n    if(a<b||b<0)return\
    \ 0;\n    return fact[a]*invfact[a-b];\n}\n//a\u500B\u306E\u3082\u306E\u304B\u3089\
    b\u500B\u3092\u91CD\u8907\u3092\u8A31\u3057\u3066\u9078\u3076\nmint H(int a,int\
    \ b){\n    return C(a+b-1,b);\n}\nvoid print(mint a) { cout << a; }\ntemplate<class\
    \ T>\npair<T,T> mod_solve(T a,T b,T m){//ax=b mod m\u3068\u306A\u308Bx\u3092\u8FD4\
    \u3059\n    a%=m,b%=m;if(a<0)a+=m;if(b<0)b+=m;\n    T g=gcd(gcd(a,b),m);\n   \
    \ a/=g,b/=g,m/=g;\n    if(gcd(a,m)>1)return {-1,-1};\n    return {(inv(a,m).first*b)%m,inv(a,m).second};\n\
    }\n"
  code: "template<class T,class G,class F>\nF modpow(T x,G p,F m){\n    T ret=1%m;\n\
    \    x%=m;\n    while(p){\n        if(p&1)ret=(1ll*ret*x)%m;\n        x=(1ll*x*x)%m;\n\
    \        p>>=1;\n    }\n    return ret;\n}\ntemplate<class T>\nT extgcd(T a,T\
    \ b,T&x,T&y){//ax+by=gcd(a,b)\u3068\u306A\u308B\u3088\u3046\u306A\u3082\u306E\n\
    \    if(b==0){\n        x=1;\n        y=0;\n        return a;\n    }else{\n  \
    \      T res=extgcd(b,a%b,y,x);\n        y-=(a/b)*x;\n        return res;\n  \
    \  }\n}\ntemplate<class T>\npair<T,T> inv(T x,T m){\n    T a1,a2;\n    T res=extgcd(x,m,a1,a2);\n\
    \    return {a1,m/res};\n}\nconstexpr int mod=998244353;\nstruct mint{\n    long\
    \ long val;\n    inline long long fast(long long x){\n        if(x<mod&&x>=0)return\
    \ x;\n        x%=mod;\n        if(x<0)x+=mod;\n        return x;\n    }\n    mint():val(0){}\n\
    \    mint(long long val):val(fast(val)){}\n    mint power(long long m)const {\n\
    \        mint res(1);\n        mint ret(*this);\n        while(m){\n         \
    \  if(m&1)res*=ret;\n           ret*=ret;\n           m>>=1;\n        }\n    \
    \    return res;\n    }\n    mint& operator++() {\n        val++;\n        if\
    \ (val == mod) val = 0;\n        return *this;\n    }\n    mint& operator--()\
    \ {\n        if (val == 0)val=mod;\n        val--;\n        return *this;\n  \
    \  }\n    mint operator++(int) {\n        mint result = *this;\n        ++*this;\n\
    \        return result;\n    }\n    mint operator--(int) {\n        mint result\
    \ = *this;\n        --*this;\n        return result;\n    }\n    mint operator-()\
    \ const { \n      return mint(-val);\n    }\n    friend mint operator +(const\
    \ mint&a,const mint&b) noexcept{\n        return mint(a)+=b;\n    }\n    friend\
    \ mint operator -(const mint&a,const mint&b) noexcept{\n        return mint(a)-=b;\n\
    \    }\n    friend mint operator *(const mint&a,const mint&b) noexcept{\n    \
    \    return mint(a)*=b;\n    }\n    friend mint operator /(const mint&a,const\
    \ mint&b) noexcept{\n        return mint(a)/=b;\n    }\n    mint& operator+=(const\
    \ mint&a)noexcept{\n        val+=a.val;\n        if(val>=mod)val-=mod;\n     \
    \   return *this;\n    }\n    mint& operator-=(const mint&a)noexcept{\n      \
    \  val-=a.val;\n        if(val<0)val+=mod;\n        return *this;\n    }\n   \
    \ mint& operator*=(const mint&a){\n        val*=a.val;\n        val=fast(val);\n\
    \        return *this;\n    }\n    mint& operator/=(const mint&a){\n        val*=inv<long\
    \ long>(a.val,mod).first;\n        val=fast(val);\n        return *this;\n   \
    \ }\n    bool operator == (const mint&x)const noexcept{\n        return this->val==x.val;\n\
    \    }\n    bool operator != (const mint&x)const noexcept{\n        return this->val!=x.val;\n\
    \    }\n    friend ostream& operator << (ostream &os, const mint &x) noexcept\
    \ {\n        return os << x.val;\n    }\n    friend istream& operator >> (istream\
    \ &is,  mint &x) noexcept {\n        long long v;\n        is >> v;\n        x=mint(v);\n\
    \        return is;\n    }\n};\nvector<mint>fact(1,1),invfact(1,1);\nvoid build(int\
    \ n){\n    if(n<(int)fact.size())return;\n    fact=invfact=vector<mint>(n+1);\n\
    \    fact[0]=1;\n    for(int i=1;i<=n;i++)fact[i]=fact[i-1]*i;\n    invfact[n]=(1/fact[n]);\n\
    \    for(int i=n-1;i>=0;i--)invfact[i]=invfact[i+1]*(i+1);\n}\nmint C(int a,int\
    \ b){//aCb\n    if(a<0||b<0||a-b<0)return mint(0);\n    while((int)fact.size()<=a){\n\
    \        fact.push_back(fact.back()*(fact.size()));\n    }\n    while((int)invfact.size()<=a){\n\
    \        invfact.push_back(invfact.back()/invfact.size());\n    }\n    return\
    \ fact[a]*invfact[b]*invfact[a-b];\n}\nmint P(int a,int b){\n    if(a<b||b<0)return\
    \ 0;\n    return fact[a]*invfact[a-b];\n}\n//a\u500B\u306E\u3082\u306E\u304B\u3089\
    b\u500B\u3092\u91CD\u8907\u3092\u8A31\u3057\u3066\u9078\u3076\nmint H(int a,int\
    \ b){\n    return C(a+b-1,b);\n}\nvoid print(mint a) { cout << a; }\ntemplate<class\
    \ T>\npair<T,T> mod_solve(T a,T b,T m){//ax=b mod m\u3068\u306A\u308Bx\u3092\u8FD4\
    \u3059\n    a%=m,b%=m;if(a<0)a+=m;if(b<0)b+=m;\n    T g=gcd(gcd(a,b),m);\n   \
    \ a/=g,b/=g,m/=g;\n    if(gcd(a,m)>1)return {-1,-1};\n    return {(inv(a,m).first*b)%m,inv(a,m).second};\n\
    }\n"
  dependsOn: []
  isVerificationFile: false
  path: modint/mint.hpp
  requiredBy: []
  timestamp: '2024-12-26 14:43:29+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/Point Set Range Composite.test.cpp
documentation_of: modint/mint.hpp
layout: document
redirect_from:
- /library/modint/mint.hpp
- /library/modint/mint.hpp.html
title: modint/mint.hpp
---
