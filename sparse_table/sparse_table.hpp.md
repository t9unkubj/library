---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: template.hpp
    title: template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"template.hpp\"\n#pragma GCC optimize(\"O3\")\n#define dbg(...)\
    \ 199958\nusing namespace std;\n#include<bits/stdc++.h>\nusing uint=unsigned;\n\
    using ll=long long;\nusing ull=unsigned long long;\nusing ld=long double;\nusing\
    \ pii=pair<int,int>;\nusing pll=pair<ll,ll>;\ntemplate<class T>using vc=vector<T>;\n\
    template<class T>using vvc=vc<vc<T>>;\ntemplate<class T>using vvvc=vvc<vc<T>>;\n\
    using vi=vc<int>;\nusing vvi=vc<vi>;\nusing vvvi=vc<vvi>;\nusing vl=vc<ll>;\n\
    using vvl=vc<vl>;\nusing vvvl=vc<vvl>;\ntemplate<class T>using smpq=priority_queue<T,vector<T>,greater<T>>;\n\
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
    \ 2 \"sparse_table/sparse_table.hpp\"\ntemplate<class T>\nstruct sparse_table{\n\
    \tstd::vector<std::vector<T>>data;\n\tstd::vector<int>table;\n\tusing F=std::function<T(T,T)>;\n\
    \tF op;\n\tsparse_table(int n,std::vector<T>a,F op):op(op){\n\t\tint log{1};\n\
    \t\twhile((1<<log)<=n)log++;\n\t\tdata=std::vector(log,std::vector<T>(n));\n\t\
    \tdata[0]=a;\n\t\tfor(int i=1;i<log;i++){\n\t\t\tfor(int j=0;j<n;j++){\n\t\t\t\
    \tif(j+(1<<(i-1))<n)data[i][j]=op(data[i-1][j],data[i-1][j+(1<<(i-1))]);\n\t\t\
    \t}\n\t\t}\n\t\ttable.resize(n+1);\n\t\tfor(int i=1;i<=n;i++){\n\t\t\tfor(int\
    \ j=0;j<=log+1;j++){\n\t\t\t\tif((1<<j)<=i){\n\t\t\t\t\ttable[i]=j;\n\t\t\t\t\
    }\n\t\t\t}\n\t\t}\n\t}\n\t//[l,r)\n\tT prod(int l,int r){\n\t\tint len=r-l;\n\t\
    \tint lg=table[len];\n\t\treturn op(data[lg][l],data[lg][r-(1<<lg)]);\n\t}\n};\n"
  code: "#include\"template.hpp\"\ntemplate<class T>\nstruct sparse_table{\n\tstd::vector<std::vector<T>>data;\n\
    \tstd::vector<int>table;\n\tusing F=std::function<T(T,T)>;\n\tF op;\n\tsparse_table(int\
    \ n,std::vector<T>a,F op):op(op){\n\t\tint log{1};\n\t\twhile((1<<log)<=n)log++;\n\
    \t\tdata=std::vector(log,std::vector<T>(n));\n\t\tdata[0]=a;\n\t\tfor(int i=1;i<log;i++){\n\
    \t\t\tfor(int j=0;j<n;j++){\n\t\t\t\tif(j+(1<<(i-1))<n)data[i][j]=op(data[i-1][j],data[i-1][j+(1<<(i-1))]);\n\
    \t\t\t}\n\t\t}\n\t\ttable.resize(n+1);\n\t\tfor(int i=1;i<=n;i++){\n\t\t\tfor(int\
    \ j=0;j<=log+1;j++){\n\t\t\t\tif((1<<j)<=i){\n\t\t\t\t\ttable[i]=j;\n\t\t\t\t\
    }\n\t\t\t}\n\t\t}\n\t}\n\t//[l,r)\n\tT prod(int l,int r){\n\t\tint len=r-l;\n\t\
    \tint lg=table[len];\n\t\treturn op(data[lg][l],data[lg][r-(1<<lg)]);\n\t}\n};\n"
  dependsOn:
  - template.hpp
  isVerificationFile: false
  path: sparse_table/sparse_table.hpp
  requiredBy: []
  timestamp: '2024-06-03 23:43:39+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: sparse_table/sparse_table.hpp
layout: document
redirect_from:
- /library/sparse_table/sparse_table.hpp
- /library/sparse_table/sparse_table.hpp.html
title: sparse_table/sparse_table.hpp
---
