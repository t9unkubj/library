---
data:
  _extendedDependsOn:
  - icon: ':warning:'
    path: template.hpp
    title: template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/1/ITP1_1_A
  bundledCode: "#line 1 \"verify/AOJ/verify_template.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/1/ITP1_1_A\"\
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
    \ 3 \"verify/AOJ/verify_template.cpp\"\nint main(){\n    cout<<\"Hello,world\"\
    <<endl;\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/1/ITP1_1_A\"\
    \n#include\"template.hpp\"\nint main(){\n    cout<<\"Hello,world\"<<endl;\n}\n"
  dependsOn:
  - template.hpp
  isVerificationFile: false
  path: verify/AOJ/verify_template.cpp
  requiredBy: []
  timestamp: '2024-06-03 23:23:24+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: verify/AOJ/verify_template.cpp
layout: document
redirect_from:
- /library/verify/AOJ/verify_template.cpp
- /library/verify/AOJ/verify_template.cpp.html
title: verify/AOJ/verify_template.cpp
---