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
  bundledCode: "#line 1 \"data_structure/monoid/affine.hpp\"\ntemplate<class T>\n\
    struct monoid{\n    T a,b;\n    monoid()=default;\n    monoid(T a,T b):a(a),b(b){}\n\
    \    static monoid<T> op(monoid<T> a,monoid<T> b){\n        return monoid<T>(a.a*b.a,a.b*b.a+b.b);\n\
    \    }\n    static monoid<T> e(){\n        return monoid(1,0);\n    }\n};\n"
  code: "template<class T>\nstruct monoid{\n    T a,b;\n    monoid()=default;\n  \
    \  monoid(T a,T b):a(a),b(b){}\n    static monoid<T> op(monoid<T> a,monoid<T>\
    \ b){\n        return monoid<T>(a.a*b.a,a.b*b.a+b.b);\n    }\n    static monoid<T>\
    \ e(){\n        return monoid(1,0);\n    }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: data_structure/monoid/affine.hpp
  requiredBy: []
  timestamp: '2024-12-26 15:01:42+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: data_structure/monoid/affine.hpp
layout: document
redirect_from:
- /library/data_structure/monoid/affine.hpp
- /library/data_structure/monoid/affine.hpp.html
title: data_structure/monoid/affine.hpp
---
