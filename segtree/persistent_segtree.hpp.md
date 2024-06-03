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
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.12.3/x64/lib/python3.12/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n          \
    \         ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\
    \  File \"/opt/hostedtoolcache/Python/3.12.3/x64/lib/python3.12/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.12.3/x64/lib/python3.12/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \                ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n \
    \ File \"/opt/hostedtoolcache/Python/3.12.3/x64/lib/python3.12/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 260, in _resolve\n    raise BundleErrorAt(path, -1, \"no such header\"\
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: template.cpp:\
    \ line -1: no such header\n"
  code: "#include\"template.cpp\"\ntemplate<class T>\nstruct persistent_seg{\n   \
    \ struct Node;\n    using np=Node*;\n    int n;\n    struct Node{\n        np\
    \  l,r;\n        T data;\n        Node(T x):data(x),l(nullptr),r(nullptr){}\n\
    \    };\n    using F=function<T(T,T)>;\n    F op;\n    T e;\n    persistent_seg(int\
    \ n,F op,T e):n(n),op(op),e(e){}\n    np merge(np l,np r){//\u5DE6\u306E\u5B50\
    \u3068\u53F3\u306E\u5B50\u3092merge\u3057\u305F\u89AA\u306E\u30DD\u30A4\u30F3\u30BF\
    \u3092\u8FD4\u3059\n        auto p= new Node(op(l->data,r->data));\n        p->l=l;\n\
    \        p->r=r;\n        return p;\n    }\n    np init(int l,int r,vector<T>&v){\n\
    \        if(l+1>=r)return new Node(v[l]);\n        int mid=(l+r)>>1;\n       \
    \ return merge(init(l,mid,v),init(mid,r,v));\n    }\n    np init(vector<T>&v){\n\
    \        return init(0,n,v);\n    }\n    np set(int l,int r,int k,np&p,T x){//[l,r)\u3067\
    k\u3092\u66F4\u65B0  \u4ECA\u898B\u3066\u3044\u308B\u306E\u304Cp\n        if(r<=k||k<l)return\
    \ p;\n        if(l+1>=r)return new Node(x);\n        int mid=(l+r)>>1;\n     \
    \   return merge(set(l,mid,k,p->l,x),set(mid,r,k,p->r,x));\n    }\n    np set(int\
    \ k,np&p,T x){\n        return set(0,n,k,p,x);\n    }\n    T prod(np&p,int l0,int\
    \ r0,int l1,int r1){//[l0,r0)\u7A7A\u9593\u306E\u3082\u306E\u3092\u898B\u308B\u3000\
    \u73FE\u5728[l1,r1)\n        if(r1<=l0||r0<=l1)return e;\n        if(l0<=l1&&r1<=r0){\n\
    \            return p->data;\n        }\n        int mid=(l1+r1)>>1;\n       \
    \ return op(prod(p->l,l0,r0,l1,mid),prod(p->r,l0,r0,mid,r1));\n    }\n    T prod(np&p,int\
    \ l,int r){\n        return prod(p,l,r,0,n);    \n    }\n    T get(np&p,int i){//p[i]\u3092\
    \u8FD4\u3059\n        return prod(p,i,i+1,0,n);\n    }\n    np new_t(){//\u7A7A\
    \u306E\u30BB\u30B0\u6728\u3092\u8FD4\u3059k\n        vector<T> v(n,e);\n     \
    \   return init(v);\n    }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: segtree/persistent_segtree.hpp
  requiredBy: []
  timestamp: '1970-01-01 00:00:00+00:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: segtree/persistent_segtree.hpp
layout: document
redirect_from:
- /library/segtree/persistent_segtree.hpp
- /library/segtree/persistent_segtree.hpp.html
title: segtree/persistent_segtree.hpp
---
