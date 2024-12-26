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
  bundledCode: "#line 1 \"data_structure/monoid/affine.cpp\"\ntemplate<class T>\n\
    struct monoid{\n    T a,b;\n    monoid()=default;\n    monoid(T a,T b):a(a),b(b){}\n\
    \    static monoid op(T a,T b){\n        return monoid(a.a*b.a,a.b*b.a+b.b);\n\
    \    }\n    static monoid e(){\n        return monoid(1,0);\n    }\n};\n"
  code: "template<class T>\nstruct monoid{\n    T a,b;\n    monoid()=default;\n  \
    \  monoid(T a,T b):a(a),b(b){}\n    static monoid op(T a,T b){\n        return\
    \ monoid(a.a*b.a,a.b*b.a+b.b);\n    }\n    static monoid e(){\n        return\
    \ monoid(1,0);\n    }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: data_structure/monoid/affine.cpp
  requiredBy: []
  timestamp: '2024-12-26 14:36:12+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: data_structure/monoid/affine.cpp
layout: document
redirect_from:
- /library/data_structure/monoid/affine.cpp
- /library/data_structure/monoid/affine.cpp.html
title: data_structure/monoid/affine.cpp
---
