---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: segtree/segtree.hpp
    title: segment tree
  - icon: ':heavy_check_mark:'
    path: template.hpp
    title: template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/problems/DSL_2_B
    links:
    - https://onlinejudge.u-aizu.ac.jp/problems/DSL_2_B
  bundledCode: "#line 1 \"test/AOJ/DSL_2_B.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/DSL_2_B\"\
    \n#line 1 \"template.hpp\"\n#pragma GCC optimize(\"O3\")\n#define dbg(...) 199958\n\
    using namespace std;\n#include<bits/stdc++.h>\nusing uint=unsigned;\nusing ll=long\
    \ long;\nusing ull=unsigned long long;\nusing ld=long double;\nusing pii=pair<int,int>;\n\
    using pll=pair<ll,ll>;\ntemplate<class T>using vc=vector<T>;\ntemplate<class T>using\
    \ vvc=vc<vc<T>>;\ntemplate<class T>using vvvc=vvc<vc<T>>;\nusing vi=vc<int>;\n\
    using vvi=vc<vi>;\nusing vvvi=vc<vvi>;\nusing vl=vc<ll>;\nusing vvl=vc<vl>;\n\
    using vvvl=vc<vvl>;\ntemplate<class T>using smpq=priority_queue<T,vector<T>,greater<T>>;\n\
    template<class T>using bipq=priority_queue<T>;\n#define rep(i,n) for(ll (i)=0;i<(ll)(n);i++)\n\
    #define REP(i,j,n) for(ll (i)=(j);i<(ll)(n);i++)\n#define DREP(i,n,m) for(ll (i)=(n);i>=(m);i--)\n\
    #define drep(i,n) for(ll i=((n)-1);i>=0;i--)\n#define all(x) x.begin(),x.end()\n\
    #define rall(x) x.rbegin(),x.rend()\n#define mp make_pair\n#define mt make_tuple\n\
    #define pb push_back\n#define eb emplace_back\n#define fi first\n#define se second\n\
    #define is insert\n#define bg begin()\n#define ed end()\nvoid scan(int&a) { cin\
    \ >> a; }\nvoid scan(ll&a) { cin >> a; }\nvoid scan(string&a) { cin >> a; }\n\
    void scan(char&a) { cin >> a; }\nvoid scan(uint&a) { cin >> a; }\nvoid scan(ull&a)\
    \ { cin >> a; }\nvoid scan(bool&a) { cin >> a; }\nvoid scan(ld&a){ cin>> a;}\n\
    template<class T> void scan(vector<T>&a) { for(auto&x:a) scan(x); }\nvoid read()\
    \ {}\ntemplate<class Head, class... Tail> void read(Head&head, Tail&... tail)\
    \ { scan(head); read(tail...); }\n#define INT(...) int __VA_ARGS__; read(__VA_ARGS__);\n\
    #define LL(...) ll __VA_ARGS__; read(__VA_ARGS__);\n#define ULL(...) ull __VA_ARGS__;\
    \ read(__VA_ARGS__);\n#define STR(...) string __VA_ARGS__; read(__VA_ARGS__);\n\
    #define CHR(...) char __VA_ARGS__; read(__VA_ARGS__);\n#define DBL(...) double\
    \ __VA_ARGS__; read(__VA_ARGS__);\n#define LD(...) ld __VA_ARGS__; read(__VA_ARGS__);\n\
    #define VC(type, name, ...) vector<type> name(__VA_ARGS__); read(name);\n#define\
    \ VVC(type, name, size, ...) vector<vector<type>> name(size, vector<type>(__VA_ARGS__));\
    \ read(name);\nvoid print(int a) { cout << a; }\nvoid print(ll a) { cout << a;\
    \ }\nvoid print(string a) { cout << a; }\nvoid print(char a) { cout << a; }\n\
    void print(uint a) { cout << a; }\nvoid print(bool a) { cout << a; }\nvoid print(ull\
    \ a) { cout << a; }\nvoid print(ld a){ cout<< a; }\ntemplate<class T> void print(vector<T>a)\
    \ { for(int i=0;i<(int)a.size();i++){if(i)cout<<\" \";print(a[i]);}cout<<endl;}\n\
    void PRT() { cout <<endl; return ; }\ntemplate<class T> void PRT(T a) { print(a);\
    \ cout <<endl; return; }\ntemplate<class Head, class... Tail> void PRT(Head head,\
    \ Tail ... tail) { print(head); cout << \" \"; PRT(tail...); return; }\ntemplate<class\
    \ T,class F>\nbool chmin(T &x, F y){\n    if(x>y){\n        x=y;\n        return\
    \ true;\n    }\n    return false;\n}\ntemplate<class T, class F>\nbool chmax(T\
    \ &x, F y){\n    if(x<y){\n        x=y;\n        return true;\n    }\n    return\
    \ false;\n}\nvoid YesNo(bool b){\n    cout<<(b?\"Yes\":\"No\")<<endl;\n}\nvoid\
    \ Yes(){\n    cout<<\"Yes\"<<endl;\n}\nvoid No(){\n    cout<<\"No\"<<endl;\n}\n\
    template<class T>\nint popcount(T n){\n    return __builtin_popcount(n);\n}\n\
    template<class T>\nT sum(vc<T>&a){\n    return accumulate(all(a),T(0));\n}\ntemplate<class\
    \ T>\nT max(vc<T>&a){\n    return *max_element(all(a));\n}\ntemplate<class T>\n\
    T min(vc<T>&a){\n    return *min_element(all(a));\n}\ntemplate<class T>\nvoid\
    \ unique(vc<T>&a){\n    a.erase(unique(all(a)),a.end());\n}\nvvi readgraph(int\
    \ n,int m,int off = -1){\n    vvi g(n);\n    rep(i, m){\n        int u,v;\n  \
    \      cin>>u>>v;\n        u+=off,v+=off;\n        g[u].push_back(v);\n      \
    \  g[v].push_back(u);\n    }\n    return g;\n}\nvvi readtree(int n,int off=-1){\n\
    \    return readgraph(n,n-1,off);\n}\ntemplate<class T>\nvc<T> presum(vc<T> &a){\n\
    \    vc<T> ret(a.size()+1);\n    rep(i,a.size())ret[i+1]=ret[i]+a[i];\n    return\
    \ ret;\n}\ntemplate<class T, class F>\nvc<T> &operator+=(vc<T> &a,F b){\n    for\
    \ (auto&v:a)v += b;\n    return a;\n}\ntemplate<class T, class F>\nvc<T> &operator-=(vc<T>&a,F\
    \ b){\n    for (auto&v:a)v-=b;\n    return a;\n}\ntemplate<class T, class F>\n\
    vc<T> &operator*=(vc<T>&a,F b){\n    for (auto&v:a)v*=b;\n    return a;\n}\n#line\
    \ 2 \"segtree/segtree.hpp\"\nusing namespace std;\ntemplate<class T,T (*op)(T,\
    \ T),T e>\nstruct segtree{\n    int n;\n    vector<T>node;\n    segtree(){}\n\
    \    segtree(int n):n(n),node(n*2,e){}\n    void set(int i,T x){\n        node[i+=n]=x;\n\
    \        while(i>>=1)node[i]=op(node[i<<1],node[i<<1|1]);\n    }\n    T prod(int\
    \ l,int r){\n        l+=n,r+=n;\n        T sml=e,smr=e;\n        while(l<r){\n\
    \            if(l&1)sml=op(sml,node[l++]);\n            if(r&1)smr=op(node[--r],smr);\n\
    \            l>>=1,r>>=1;\n        }\n        return op(sml,smr);\n    }\n   \
    \ T get(int i){\n\t\treturn node[i+n];\n\t}\n    template<class F> int max_right(int\
    \ L, F f) const {\n    long long l = n + L, w = 1, ansL = e;\n    for(; L + w\
    \ <= n; l >>= 1, w <<= 1) if(l & 1) {\n        if(not f(op(ansL, node[l]))) break;\n\
    \        ansL = op(ansL, node[l++]);\n        L += w;\n    }\n    while(l <<=\
    \ 1, w >>= 1){\n        if(L + w <= n && f(op(ansL, node[l]))){\n            ansL\
    \ = op(ansL, node[l++]);\n            L += w;\n        }\n    }\n    return L;\n\
    \    }\n    template<class F> int min_left(int R, F f) const {\n    long long\
    \ r = n + R, w = 1, ansR = e;\n    for(; R - w >= 0; r >>= 1, w <<= 1) if(r &\
    \ 1) {\n        if(not f(op(node[r - 1], ansR))) break;\n        ansR = op(node[--r],\
    \ ansR);\n        R -= w;\n    }\n    while(r <<= 1, w >>= 1){\n        if(R -\
    \ w >= 0 && f(op(node[r - 1], ansR))){\n            ansR = op(node[--r], ansR);\n\
    \            R -= w;\n        }\n    }\n    return R;\n}\n};\n#line 4 \"test/AOJ/DSL_2_B.test.cpp\"\
    \nll op(ll a,ll b){return  a+b;}\nint main(){\n    INT(n,q);\n    segtree<ll,op,0ll>seg(n);\n\
    \    while(q--){\n        INT(t,x,y);\n        --x;\n        if(t==0)seg.set(x,seg.get(x)+y);\n\
    \        else PRT(seg.prod(x,y));\n    }\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/DSL_2_B\"\n#include\"\
    template.hpp\"\n#include\"segtree/segtree.hpp\"\nll op(ll a,ll b){return  a+b;}\n\
    int main(){\n    INT(n,q);\n    segtree<ll,op,0ll>seg(n);\n    while(q--){\n \
    \       INT(t,x,y);\n        --x;\n        if(t==0)seg.set(x,seg.get(x)+y);\n\
    \        else PRT(seg.prod(x,y));\n    }\n}\n"
  dependsOn:
  - template.hpp
  - segtree/segtree.hpp
  isVerificationFile: true
  path: test/AOJ/DSL_2_B.test.cpp
  requiredBy: []
  timestamp: '2024-06-04 00:02:43+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/AOJ/DSL_2_B.test.cpp
layout: document
redirect_from:
- /verify/test/AOJ/DSL_2_B.test.cpp
- /verify/test/AOJ/DSL_2_B.test.cpp.html
title: test/AOJ/DSL_2_B.test.cpp
---
