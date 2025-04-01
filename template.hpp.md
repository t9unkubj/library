---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.13.2/x64/lib/python3.13/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n          \
    \         ~~~~~~~~~~~~~~~^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\
    \  File \"/opt/hostedtoolcache/Python/3.13.2/x64/lib/python3.13/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n    ~~~~~~~~~~~~~~^^^^^^\n  File\
    \ \"/opt/hostedtoolcache/Python/3.13.2/x64/lib/python3.13/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 400, in update\n    raise BundleErrorAt(path, i + 1, \"unable to process\
    \ #include in #if / #ifdef / #ifndef other than include guards\")\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt:\
    \ template.hpp: line 2: unable to process #include in #if / #ifdef / #ifndef other\
    \ than include guards\n"
  code: "#ifdef t9unkubj\n#include\"my_template.h\"\n//#include\"my_template_no_debug.h\"\
    \n#else \n#define dbg(...) 199958\n#pragma GCC optimize(\"O3\")\n#include\"bits/stdc++.h\"\
    \nusing namespace std;\nusing uint=unsigned;\nusing ll=long long;\nusing ull=unsigned\
    \ long long;\nusing ld=long double;\ntemplate<class T>using vc=vector<T>;\ntemplate<class\
    \ T>using vvc=vc<vc<T>>;\ntemplate<class T>using vvvc=vc<vvc<T>>;\ntemplate<class\
    \ T>using vvvvc=vc<vvvc<T>>;\ntemplate<class T>using smpq=priority_queue<T>;\n\
    template<class T>using bipq=priority_queue<T>;\nusing vi=vc<int>;\nusing vvi=vvc<int>;\n\
    using vl=vc<ll>;\nusing vvl=vvc<ll>;\n#define rep(i,n) for(ll i=0;i<(ll)(n);i++)\n\
    #define REP(i,j,n) for(ll i=(j);i<(ll)(n);i++)\n#define DREP(i,n,m) for(ll i=(n);i>=(m);i--)\n\
    #define drep(i,n) for(ll i=(ll(n)-1);i>=0;i--)\n#define all(x) x.begin(),x.end()\n\
    #define rall(x) x.rbegin(),x.rend()\n#define pb push_back\ntemplate<class T,class\
    \ F>\nbool chmin(T &x, F y){\n    if(x>y){\n        x=y;\n        return true;\n\
    \    }\n    return false;\n}\ntemplate<class T, class F>\nbool chmax(T &x, F y){\n\
    \    if(x<y){\n        x=y;\n        return true;\n    }\n    return false;\n\
    }\ntemplate<class T>\nT sum(const vector<T>&v){\n    return accumulate(all(v),T(0));\n\
    }\ntemplate<class T>\nT min(const vector<T>&v){\n    return *min_element(all(v));\n\
    }\ntemplate<class T>\nT max(const vector<T>&v){\n    return *max_element(all(v));\n\
    }\nvoid YesNo(bool y){\n    cout<<(y?\"Yes\":\"No\")<<endl;\n}\nvoid Yes(){\n\
    \    cout<<\"Yes\"<<endl;\n}\nvoid No(){\n    cout<<\"No\"<<endl;\n}\ntemplate<class\
    \ T>\nvoid unique(vc<T>&a){\n    a.erase(unique(all(a)),a.end());\n}\nvvi readgraph(int\
    \ n,int m,int off = -1){\n    vvi g(n);\n    rep(i, m){\n        int u,v;\n  \
    \      cin>>u>>v;\n        u+=off,v+=off;\n        g[u].push_back(v);\n      \
    \  g[v].push_back(u);\n    }\n    return g;\n}\nvvi readtree(int n,int off=-1){\n\
    \    return readgraph(n,n-1,off);\n}\ntemplate<class T>\nvc<T> presum(vc<T> &a){\n\
    \    vc<T> ret(a.size()+1);\n    rep(i,a.size())ret[i+1]=ret[i]+a[i];\n    return\
    \ ret;\n}\ntemplate<class T, class F>\nvc<T> &operator+=(vc<T> &a,F b){\n    for\
    \ (auto&v:a)v += b;\n    return a;\n}\ntemplate<class T, class F>\nvc<T> &operator-=(vc<T>&a,F\
    \ b){\n    for (auto&v:a)v-=b;\n    return a;\n}\nvoid scan(int&a) { cin >> a;\
    \ }\nvoid scan(ll&a) { cin >> a; }\nvoid scan(string&a) { cin >> a; }\nvoid scan(char&a)\
    \ { cin >> a; }\nvoid scan(uint&a) { cin >> a; }\nvoid scan(ull&a) { cin >> a;\
    \ }\nvoid scan(bool&a) { cin >> a; }\nvoid scan(ld&a){ cin>> a;}\ntemplate<class\
    \ T> void scan(vector<T>&a) { for(auto&x:a) scan(x); }\nvoid read() {}\ntemplate<class\
    \ Head, class... Tail> void read(Head&head, Tail&... tail) { scan(head); read(tail...);\
    \ }\n#define INT(...) int __VA_ARGS__; read(__VA_ARGS__);\n#define LL(...) ll\
    \ __VA_ARGS__; read(__VA_ARGS__);\n#define ULL(...) ull __VA_ARGS__; read(__VA_ARGS__);\n\
    #define STR(...) string __VA_ARGS__; read(__VA_ARGS__);\n#define CHR(...) char\
    \ __VA_ARGS__; read(__VA_ARGS__);\n#define DBL(...) double __VA_ARGS__; read(__VA_ARGS__);\n\
    #define LD(...) ld __VA_ARGS__; read(__VA_ARGS__);\n#define VC(type, name, ...)\
    \ vector<type> name(__VA_ARGS__); read(name);\n#define VVC(type, name, size, ...)\
    \ vector<vector<type>> name(size, vector<type>(__VA_ARGS__)); read(name);\nvoid\
    \ print(int a) { cout << a; }\nvoid print(ll a) { cout << a; }\nvoid print(string\
    \ a) { cout << a; }\nvoid print(char a) { cout << a; }\nvoid print(uint a) { cout\
    \ << a; }\nvoid print(bool a) { cout << a; }\nvoid print(ull a) { cout << a; }\n\
    void print(double a) { cout << a; }\nvoid print(ld a){ cout<< a; }\ntemplate<class\
    \ T> void print(vector<T>a) { for(int i=0;i<(int)a.size();i++){if(i)cout<<\" \"\
    ;print(a[i]);}cout<<endl;}\nvoid PRT() { cout <<endl; return ; }\ntemplate<class\
    \ T> void PRT(T a) { print(a); cout <<endl; return; }\ntemplate<class Head, class...\
    \ Tail> void PRT(Head head, Tail ... tail) { print(head); cout << \" \"; PRT(tail...);\
    \ return; }\nstruct ioset{\n    ioset(){\n        cin.tie(0)->sync_with_stdio(0);\n\
    \        #ifdef t9unkubj\n        cout<<fixed<<setprecision(6);\n        #else\n\
    \        cout<<fixed<<setprecision(20);\n        #endif\n    }\n}ioset_______;\n\
    struct MY_TIMER{\n    double start_time;\n    MY_TIMER(){\n        start_time=clock();\n\
    \    }\n    double out(){\n        return (clock()-start_time)/double(CLOCKS_PER_SEC);\n\
    \    }\n}TIMER;\n#endif\n"
  dependsOn: []
  isVerificationFile: false
  path: template.hpp
  requiredBy: []
  timestamp: '2025-04-02 04:54:33+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: template.hpp
layout: document
redirect_from:
- /library/template.hpp
- /library/template.hpp.html
title: template.hpp
---
