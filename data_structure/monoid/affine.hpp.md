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
  bundledCode: "#line 1 \"data_structure/monoid/affine.hpp\"\ntemplate<class T>\n\
    struct monoid{\n    T a,b;\n    monoid()=default;\n    monoid(T a,T b):a(a),b(b){}\n\
    \    static monoid op(T a,T b){\n        return monoid(a.a*b.a,a.b*b.a+b.b);\n\
    \    }\n    static monoid e(){\n        return monoid(1,0);\n    }\n};\n"
  code: "template<class T>\nstruct monoid{\n    T a,b;\n    monoid()=default;\n  \
    \  monoid(T a,T b):a(a),b(b){}\n    static monoid op(T a,T b){\n        return\
    \ monoid(a.a*b.a,a.b*b.a+b.b);\n    }\n    static monoid e(){\n        return\
    \ monoid(1,0);\n    }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: data_structure/monoid/affine.hpp
  requiredBy: []
  timestamp: '2024-12-26 14:43:12+09:00'
  verificationStatus: LIBRARY_ALL_WA
  verifiedWith:
  - test/Point Set Range Composite.test.cpp
documentation_of: data_structure/monoid/affine.hpp
layout: document
redirect_from:
- /library/data_structure/monoid/affine.hpp
- /library/data_structure/monoid/affine.hpp.html
title: data_structure/monoid/affine.hpp
---
