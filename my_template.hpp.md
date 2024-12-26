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
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.12.8/x64/lib/python3.12/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n          \
    \         ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\
    \  File \"/opt/hostedtoolcache/Python/3.12.8/x64/lib/python3.12/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.12.8/x64/lib/python3.12/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 400, in update\n    raise BundleErrorAt(path, i + 1, \"unable to process\
    \ #include in #if / #ifdef / #ifndef other than include guards\")\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt:\
    \ my_template.hpp: line 2: unable to process #include in #if / #ifdef / #ifndef\
    \ other than include guards\n"
  code: "#ifdef t9unkubj\n#include\"debug.cpp\"\n//#include\"template_no_debug.h\"\
    \n#else \n#define dbg(...) 199958\n#endif\n\n#undef _GLIBCXX_DEBUG\n#pragma GCC\
    \ optimize(\"O3\")\nusing namespace std;\n#include<bits/stdc++.h>\nusing ll=long\
    \ long;\nusing ull=unsigned long long;\ntemplate<class T>using vc=vector<T>;\n\
    template<class T>using vvc=vc<vc<T>>;\n#define rep(i,n) for(ll i=0;i<(ll)(n);i++)\n\
    #define REP(i,j,n) for(ll i=(j);i<(ll)(n);i++)\n#define DREP(i,n,m) for(ll i=(n);i>=(m);i--)\n\
    #define drep(i,n) for(ll i=((n)-1);i>=0;i--)\n#define all(x) x.begin(),x.end()\n\
    #define rall(x) x.rbegin(),x.rend()\n\n\ntemplate<class T,class F>\nbool chmin(T\
    \ &x, F y){\n    if(x>y){\n        x=y;\n        return true;\n    }\n    return\
    \ false;\n}\ntemplate<class T, class F>\nbool chmax(T &x, F y){\n    if(x<y){\n\
    \        x=y;\n        return true;\n    }\n    return false;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: my_template.hpp
  requiredBy: []
  timestamp: '2024-12-26 14:42:33+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/Point Set Range Composite.test.cpp
documentation_of: my_template.hpp
layout: document
redirect_from:
- /library/my_template.hpp
- /library/my_template.hpp.html
title: my_template.hpp
---
