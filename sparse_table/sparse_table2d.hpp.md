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
    \ 2 \"sparse_table/sparse_table2d.hpp\"\ntemplate<class T>\nstruct sparse_table2d{\n\
    \    T****val;//(a,b)\u306B\u304A\u3044\u3066[a+2^i],[a+2^j]\u306E\u6F14\u7B97\
    \u7D50\u679C\u3092\u8868\u3059\n    vector<int>log;\n    using F=function<T(T,T)>;\n\
    \    F op;\n    int l1,l2;\n    int n_;\n    sparse_table2d(vector<vector<T>>node,F\
    \ op):op(op){\n        int n=node.size(),m=node[0].size();\n        int log1{};\n\
    \        int log2{};\n        while((1<<log1)<=n)log1++;\n        while((1<<log2)<=m)log2++;\n\
    \        l1=log1,l2=log2;\n        \n        n_=n;\n        val = new T***[log1\
    \ + 1];\n        for(int k = 0; k <=log1 ; ++k){\n            val[k] = new T**[log2\
    \ + 1];\n            for(int l = 0; l <= log2; ++l){\n                val[k][l]\
    \ = new T*[n];\n                for(int i = 0; i < n; ++i){\n                \
    \    val[k][l][i] = new T[m];\n                }\n            }\n        }\n \
    \       for(int i=0;i<n;i++)for(int j=0;j<m;j++)val[0][0][i][j]=node[i][j];\n\
    \        //\u6A2A\u65B9\u5411\u306B\u30C0\u30D6\u30EA\u30F3\u3050\n        for(int\
    \ k=1;k<log2;k++){\n            for(int i=0;i<n;i++){\n                for(int\
    \ j=0;j<m;j++){\n                    if(j+(1<<(k-1))>=m)break;\n             \
    \       //val[i][j][0][k]=max(val[i][j][0][k-1],val[i][j+(1<<(k-1))][0][k-1]);\n\
    \                    val[0][k][i][j]=max(val[0][k-1][i][j],val[0][k-1][i][j+(1<<(k-1))]);\n\
    \                }\n            }\n        }\n        //\u7E26\u65B9\u5411\u3078\
    \u30C0\u30D6\u30EA\u30F3\u3050\n        \n        for(int k=0;k<log2;k++){\n \
    \           for(int l=1;l<log1;l++){\n                for(int i=0;i<n;i++){\n\
    \                    if(i+(1<<(l-1))>=n)break;\n                    for(int j=0;j<m;j++){\n\
    \                        //val[i][j][l][k]=max(val[i][j][l-1][k],val[i+(1<<(l-1))][j][l-1][k]);\n\
    \                        val[l][k][i][j]=max(val[l-1][k][i][j],val[l-1][k][i+(1<<(l-1))][j]);\n\
    \                    }\n                }\n            }\n        }\n        log.resize(max(n,m)+1);\n\
    \        for(int i=0;i<=max(n,m);i++){\n            for(int j=0;j<10000;j++){\n\
    \                if((1<<j)>i){\n                    log[i]=j-1;\n            \
    \        break;\n                }\n            }\n         }\n    }\n    ~sparse_table2d(){\n\
    \        for(int i = 0; i <= l1; ++i){\n            for(int j = 0; j <= l2; ++j){\n\
    \                for(int k = 0; k < n_; ++k){\n                    delete[] val[i][j][k];\n\
    \                }\n                delete[] val[i][j];\n            }\n     \
    \       delete[] val[i];\n        }\n        delete[] val;\n    }\n    T query(int\
    \ lx,int ly,int rx,int ry){//[lx,rx)*[ly,ry)\u306E\u9818\u57DF\u306Eop\u7D50\u679C\
    \u3092\u8FD4\u3059O(1)\n        int xl=log[rx-lx];\n        int yl=log[ry-ly];\n\
    \        return max(max(val[xl][yl][lx][ly],val[xl][yl][rx-(1<<xl)][ly]),max(val[xl][yl][lx][ry-(1<<yl)],val[xl][yl][rx-(1<<xl)][ry-(1<<yl)]));\n\
    \    }\n};\n"
  code: "#include\"template.hpp\"\ntemplate<class T>\nstruct sparse_table2d{\n   \
    \ T****val;//(a,b)\u306B\u304A\u3044\u3066[a+2^i],[a+2^j]\u306E\u6F14\u7B97\u7D50\
    \u679C\u3092\u8868\u3059\n    vector<int>log;\n    using F=function<T(T,T)>;\n\
    \    F op;\n    int l1,l2;\n    int n_;\n    sparse_table2d(vector<vector<T>>node,F\
    \ op):op(op){\n        int n=node.size(),m=node[0].size();\n        int log1{};\n\
    \        int log2{};\n        while((1<<log1)<=n)log1++;\n        while((1<<log2)<=m)log2++;\n\
    \        l1=log1,l2=log2;\n        \n        n_=n;\n        val = new T***[log1\
    \ + 1];\n        for(int k = 0; k <=log1 ; ++k){\n            val[k] = new T**[log2\
    \ + 1];\n            for(int l = 0; l <= log2; ++l){\n                val[k][l]\
    \ = new T*[n];\n                for(int i = 0; i < n; ++i){\n                \
    \    val[k][l][i] = new T[m];\n                }\n            }\n        }\n \
    \       for(int i=0;i<n;i++)for(int j=0;j<m;j++)val[0][0][i][j]=node[i][j];\n\
    \        //\u6A2A\u65B9\u5411\u306B\u30C0\u30D6\u30EA\u30F3\u3050\n        for(int\
    \ k=1;k<log2;k++){\n            for(int i=0;i<n;i++){\n                for(int\
    \ j=0;j<m;j++){\n                    if(j+(1<<(k-1))>=m)break;\n             \
    \       //val[i][j][0][k]=max(val[i][j][0][k-1],val[i][j+(1<<(k-1))][0][k-1]);\n\
    \                    val[0][k][i][j]=max(val[0][k-1][i][j],val[0][k-1][i][j+(1<<(k-1))]);\n\
    \                }\n            }\n        }\n        //\u7E26\u65B9\u5411\u3078\
    \u30C0\u30D6\u30EA\u30F3\u3050\n        \n        for(int k=0;k<log2;k++){\n \
    \           for(int l=1;l<log1;l++){\n                for(int i=0;i<n;i++){\n\
    \                    if(i+(1<<(l-1))>=n)break;\n                    for(int j=0;j<m;j++){\n\
    \                        //val[i][j][l][k]=max(val[i][j][l-1][k],val[i+(1<<(l-1))][j][l-1][k]);\n\
    \                        val[l][k][i][j]=max(val[l-1][k][i][j],val[l-1][k][i+(1<<(l-1))][j]);\n\
    \                    }\n                }\n            }\n        }\n        log.resize(max(n,m)+1);\n\
    \        for(int i=0;i<=max(n,m);i++){\n            for(int j=0;j<10000;j++){\n\
    \                if((1<<j)>i){\n                    log[i]=j-1;\n            \
    \        break;\n                }\n            }\n         }\n    }\n    ~sparse_table2d(){\n\
    \        for(int i = 0; i <= l1; ++i){\n            for(int j = 0; j <= l2; ++j){\n\
    \                for(int k = 0; k < n_; ++k){\n                    delete[] val[i][j][k];\n\
    \                }\n                delete[] val[i][j];\n            }\n     \
    \       delete[] val[i];\n        }\n        delete[] val;\n    }\n    T query(int\
    \ lx,int ly,int rx,int ry){//[lx,rx)*[ly,ry)\u306E\u9818\u57DF\u306Eop\u7D50\u679C\
    \u3092\u8FD4\u3059O(1)\n        int xl=log[rx-lx];\n        int yl=log[ry-ly];\n\
    \        return max(max(val[xl][yl][lx][ly],val[xl][yl][rx-(1<<xl)][ly]),max(val[xl][yl][lx][ry-(1<<yl)],val[xl][yl][rx-(1<<xl)][ry-(1<<yl)]));\n\
    \    }\n};\n"
  dependsOn:
  - template.hpp
  isVerificationFile: false
  path: sparse_table/sparse_table2d.hpp
  requiredBy: []
  timestamp: '2024-06-03 23:44:43+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: sparse_table/sparse_table2d.hpp
layout: document
redirect_from:
- /library/sparse_table/sparse_table2d.hpp
- /library/sparse_table/sparse_table2d.hpp.html
title: sparse_table/sparse_table2d.hpp
---
