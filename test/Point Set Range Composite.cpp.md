---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links:
    - https://judge.yosupo.jp/problem/point_set_range_composite
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.12.8/x64/lib/python3.12/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n          \
    \         ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\
    \  File \"/opt/hostedtoolcache/Python/3.12.8/x64/lib/python3.12/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.12.8/x64/lib/python3.12/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/opt/hostedtoolcache/Python/3.12.8/x64/lib/python3.12/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 400, in update\n    raise BundleErrorAt(path, i + 1, \"unable to process\
    \ #include in #if / #ifdef / #ifndef other than include guards\")\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt:\
    \ my_template.hpp: line 2: unable to process #include in #if / #ifdef / #ifndef\
    \ other than include guards\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/point_set_range_composite\"\
    \n\n#include \"my_template.hpp\"\n#include \"modint/mint.hpp\"\n#include \"data_struture/segment_trees\"\
    \n#include \"data_struture/monoid/affine.hpp\"\nvoid solve(){\n    int n,q;\n\
    \    cin>>n>>q;\n    segtree<monoid>seg(n);\n    rep(i,n){\n        mint a,b;\n\
    \        cin>>a>>b;\n        seg.set(i,monoid(a,b));\n    }\n    while(q--){\n\
    \        int t;\n        cin>>t;\n        if(t==0){\n            int p,c,d;\n\
    \            cin>>p>>c>>d;\n            seg.set(p,{c,d});\n        }else{\n  \
    \          int l,r,x;\n            cin>>l>>r>>x;\n            cout<<seg.prod(l,r).a*x+seg.prod(l,r).b<<\"\
    \\n\";\n        }\n    }\n}\nint main(){\n    solve();\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: test/Point Set Range Composite.cpp
  requiredBy: []
  timestamp: '1970-01-01 00:00:00+00:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: test/Point Set Range Composite.cpp
layout: document
redirect_from:
- /library/test/Point Set Range Composite.cpp
- /library/test/Point Set Range Composite.cpp.html
title: test/Point Set Range Composite.cpp
---
