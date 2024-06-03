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
  bundledCode: "#line 1 \"sparse_table/sparse_table.hpp\"\ntemplate<class T>\nstruct\
    \ sparse_table{\n\tstd::vector<std::vector<T>>data;\n\tstd::vector<int>table;\n\
    \tusing F=std::function<T(T,T)>;\n\tF op;\n\tsparse_table(int n,std::vector<T>a,F\
    \ op):op(op){\n\t\tint log{1};\n\t\twhile((1<<log)<=n)log++;\n\t\tdata=std::vector(log,std::vector<T>(n));\n\
    \t\tdata[0]=a;\n\t\tfor(int i=1;i<log;i++){\n\t\t\tfor(int j=0;j<n;j++){\n\t\t\
    \t\tif(j+(1<<(i-1))<n)data[i][j]=op(data[i-1][j],data[i-1][j+(1<<(i-1))]);\n\t\
    \t\t}\n\t\t}\n\t\ttable.resize(n+1);\n\t\tfor(int i=1;i<=n;i++){\n\t\t\tfor(int\
    \ j=0;j<=log+1;j++){\n\t\t\t\tif((1<<j)<=i){\n\t\t\t\t\ttable[i]=j;\n\t\t\t\t\
    }\n\t\t\t}\n\t\t}\n\t}\n\t//[l,r)\n\tT prod(int l,int r){\n\t\tint len=r-l;\n\t\
    \tint lg=table[len];\n\t\treturn op(data[lg][l],data[lg][r-(1<<lg)]);\n\t}\n};\n"
  code: "template<class T>\nstruct sparse_table{\n\tstd::vector<std::vector<T>>data;\n\
    \tstd::vector<int>table;\n\tusing F=std::function<T(T,T)>;\n\tF op;\n\tsparse_table(int\
    \ n,std::vector<T>a,F op):op(op){\n\t\tint log{1};\n\t\twhile((1<<log)<=n)log++;\n\
    \t\tdata=std::vector(log,std::vector<T>(n));\n\t\tdata[0]=a;\n\t\tfor(int i=1;i<log;i++){\n\
    \t\t\tfor(int j=0;j<n;j++){\n\t\t\t\tif(j+(1<<(i-1))<n)data[i][j]=op(data[i-1][j],data[i-1][j+(1<<(i-1))]);\n\
    \t\t\t}\n\t\t}\n\t\ttable.resize(n+1);\n\t\tfor(int i=1;i<=n;i++){\n\t\t\tfor(int\
    \ j=0;j<=log+1;j++){\n\t\t\t\tif((1<<j)<=i){\n\t\t\t\t\ttable[i]=j;\n\t\t\t\t\
    }\n\t\t\t}\n\t\t}\n\t}\n\t//[l,r)\n\tT prod(int l,int r){\n\t\tint len=r-l;\n\t\
    \tint lg=table[len];\n\t\treturn op(data[lg][l],data[lg][r-(1<<lg)]);\n\t}\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: sparse_table/sparse_table.hpp
  requiredBy: []
  timestamp: '2024-06-03 23:45:02+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: sparse_table/sparse_table.hpp
layout: document
redirect_from:
- /library/sparse_table/sparse_table.hpp
- /library/sparse_table/sparse_table.hpp.html
title: sparse_table/sparse_table.hpp
---
