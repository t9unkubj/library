---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':x:'
    path: test/Point Set Range Composite.test.cpp
    title: test/Point Set Range Composite.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':x:'
  attributes:
    links: []
  bundledCode: "#line 1 \"data_structure/segment_trees/segtree.hpp\"\ntemplate<class\
    \ monoid>\nstruct segtree{\n    int n;\n    vector<monoid>node;\n    static monoid\
    \ e(){\n        return monoid::e();\n    }\n    static monoid op(monoid a,monoid\
    \ b){\n        return monoid::op(a,b);\n    }\n\n    segtree(){}\n    segtree(int\
    \ n):n(n),node(n*2,e()){\n        assert(0<=n);\n    }\n    void set(int i,monoid\
    \ x){\n        assert(0<=i&&i<n);\n        node[i+=n]=x;\n        while(i>>=1)node[i]=op(node[i<<1],node[i<<1|1]);\n\
    \    }\n    monoid prod(int l,int r) const {\n        assert(0<=l&&l<=r&&r<=n);\n\
    \        l+=n,r+=n;\n        monoid sml=e(),smr=e();\n        while(l<r){\n  \
    \          if(l&1)sml=op(sml,node[l++]);\n            if(r&1)smr=op(node[--r],smr);\n\
    \            l>>=1,r>>=1;\n        }\n        return op(sml,smr);\n    }\n   \
    \ monoid get(int i){\n        assert(0<=i&&i<=n);\n\t\treturn node[i+n];\n\t}\n\
    \    //return max val s.t. f([L,val))) = true\n    template<class F>\n    int\
    \ max_right(int L,F&f) const {\n        assert(f(e()));\n        int l=n+L;  \
    \ \n        int w=1;\n        monoid ansL=e();\n        for(;L+w<=n;l>>=1,w<<=1){\n\
    \            if(l&1){\n                if(!(f(op(ansL,node[l]))))break;\n    \
    \            ansL=op(ansL,node[l++]);\n                L+=w;\n            }\n\
    \        }\n        while(l<<=1,w>>=1){\n            if(L+w<=n&&f(op(ansL,node[l]))){\n\
    \                ansL=op(ansL,node[l++]);\n                L+=w;\n           \
    \ }\n        }\n        return L;\n    }\n    //return min val s.t. f([val,R))\
    \ = true\n    template<class F>\n    int min_left(int R,F&f) const {\n       \
    \ assert(f(e()));\n        int r=n+R;   \n        int w=1;\n        monoid ansR=e();\n\
    \        for(;R-w>=n;r>>=1,w<<=1){\n            if(r&1){\n                if(!(f(op(ansR,node[r-1]))))break;\n\
    \                ansR=op(ansR,node[--r]);\n                R-=w;\n           \
    \ }\n        }\n        while(r<<=1,w>>=1){\n            if(R-w>=n&&f(op(ansR,node[r-1]))){\n\
    \                ansR=op(ansR,node[--r]);\n                R-=w;\n           \
    \ }\n        }\n        return R;\n    }\n};\n"
  code: "template<class monoid>\nstruct segtree{\n    int n;\n    vector<monoid>node;\n\
    \    static monoid e(){\n        return monoid::e();\n    }\n    static monoid\
    \ op(monoid a,monoid b){\n        return monoid::op(a,b);\n    }\n\n    segtree(){}\n\
    \    segtree(int n):n(n),node(n*2,e()){\n        assert(0<=n);\n    }\n    void\
    \ set(int i,monoid x){\n        assert(0<=i&&i<n);\n        node[i+=n]=x;\n  \
    \      while(i>>=1)node[i]=op(node[i<<1],node[i<<1|1]);\n    }\n    monoid prod(int\
    \ l,int r) const {\n        assert(0<=l&&l<=r&&r<=n);\n        l+=n,r+=n;\n  \
    \      monoid sml=e(),smr=e();\n        while(l<r){\n            if(l&1)sml=op(sml,node[l++]);\n\
    \            if(r&1)smr=op(node[--r],smr);\n            l>>=1,r>>=1;\n       \
    \ }\n        return op(sml,smr);\n    }\n    monoid get(int i){\n        assert(0<=i&&i<=n);\n\
    \t\treturn node[i+n];\n\t}\n    //return max val s.t. f([L,val))) = true\n   \
    \ template<class F>\n    int max_right(int L,F&f) const {\n        assert(f(e()));\n\
    \        int l=n+L;   \n        int w=1;\n        monoid ansL=e();\n        for(;L+w<=n;l>>=1,w<<=1){\n\
    \            if(l&1){\n                if(!(f(op(ansL,node[l]))))break;\n    \
    \            ansL=op(ansL,node[l++]);\n                L+=w;\n            }\n\
    \        }\n        while(l<<=1,w>>=1){\n            if(L+w<=n&&f(op(ansL,node[l]))){\n\
    \                ansL=op(ansL,node[l++]);\n                L+=w;\n           \
    \ }\n        }\n        return L;\n    }\n    //return min val s.t. f([val,R))\
    \ = true\n    template<class F>\n    int min_left(int R,F&f) const {\n       \
    \ assert(f(e()));\n        int r=n+R;   \n        int w=1;\n        monoid ansR=e();\n\
    \        for(;R-w>=n;r>>=1,w<<=1){\n            if(r&1){\n                if(!(f(op(ansR,node[r-1]))))break;\n\
    \                ansR=op(ansR,node[--r]);\n                R-=w;\n           \
    \ }\n        }\n        while(r<<=1,w>>=1){\n            if(R-w>=n&&f(op(ansR,node[r-1]))){\n\
    \                ansR=op(ansR,node[--r]);\n                R-=w;\n           \
    \ }\n        }\n        return R;\n    }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: data_structure/segment_trees/segtree.hpp
  requiredBy: []
  timestamp: '2024-12-26 14:42:55+09:00'
  verificationStatus: LIBRARY_ALL_WA
  verifiedWith:
  - test/Point Set Range Composite.test.cpp
documentation_of: data_structure/segment_trees/segtree.hpp
layout: document
redirect_from:
- /library/data_structure/segment_trees/segtree.hpp
- /library/data_structure/segment_trees/segtree.hpp.html
title: data_structure/segment_trees/segtree.hpp
---
