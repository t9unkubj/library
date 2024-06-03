---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"segtree.cpp\"\n#include<bits/stdc++.h>\nusing namespace\
    \ std;\ntemplate<class T,T (*op)(T, T),T e>\nstruct segtree{\n    int n;\n   \
    \ vector<T>node;\n    segtree(){}\n    segtree(int n):n(n)node(n*2,e){}\n    void\
    \ set(int i,T x){\n        node[i+=n]=x;\n        while(i>>=1)node[i]=op(node[i<<1],node[i<<1|1]);\n\
    \    }\n    T prod(int l,int r){\n        l+=n,r+=n;\n        T sml=e,smr=e;\n\
    \        while(l<r){\n            if(l&1)sml=op(sml,node[l++]);\n            if(r&1)smr=op(node[--r],smr);\n\
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
    \            R -= w;\n        }\n    }\n    return R;\n}\n};\n"
  code: "#include<bits/stdc++.h>\nusing namespace std;\ntemplate<class T,T (*op)(T,\
    \ T),T e>\nstruct segtree{\n    int n;\n    vector<T>node;\n    segtree(){}\n\
    \    segtree(int n):n(n)node(n*2,e){}\n    void set(int i,T x){\n        node[i+=n]=x;\n\
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
    \            R -= w;\n        }\n    }\n    return R;\n}\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: segtree.cpp
  requiredBy: []
  timestamp: '2024-06-03 23:00:36+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: segtree.cpp
layout: document
redirect_from:
- /library/segtree.cpp
- /library/segtree.cpp.html
title: segtree.cpp
---
