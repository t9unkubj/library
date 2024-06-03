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
  bundledCode: "#line 1 \"sparse_table/sparse_table2d.hpp\"\n\ntemplate<class T>\n\
    struct sparse_table2d{\n    T****val;//(a,b)\u306B\u304A\u3044\u3066[a+2^i],[a+2^j]\u306E\
    \u6F14\u7B97\u7D50\u679C\u3092\u8868\u3059\n    vector<int>log;\n    using F=function<T(T,T)>;\n\
    \    F op;\n    int l1,l2;\n    int n_;\n    sparse_table2d(vector<vector<T>>node,F\
    \ op):op(op){\n        int n=node.size(),m=node[0].size();\n        int log1{};\n\
    \        int log2{};\n        while((1<<log1)<=n)log1++;\n        while((1<<log2)<=m)log2++;\n\
    \        l1=log1,l2=log2;\n        \n        n_=n;\n        val = new T***[log1\
    \ + 1];\n        for(int k = 0; k <=log1 ; ++k){\n            val[k] = new T**[log2\
    \ + 1];\n            for(int l = 0; l <= log2; ++l){\n                val[k][l]\
    \ = new T*[n];\n                for(int i = 0; i < n; ++i){\n                \
    \    val[k][l][i] = new T[m];\n                }\n            }\n        }\n \
    \       for(int i=0;i<n;i++)for(int j=0;j<m;j++)val[0][0][i][j]=node[i][j];\n\
    \        //\u6A2A\u65B9\u5411\u306B\u30C0\u30D6\u30EA\u30F3\u3050\n        for(int\
    \ k=1;k<log2;k++){\n            for(int i=0;i<n;i++){\n                for(int\
    \ j=0;j<m;j++){\n                    if(j+(1<<(k-1))>=m)break;\n             \
    \       //val[i][j][0][k]=max(val[i][j][0][k-1],val[i][j+(1<<(k-1))][0][k-1]);\n\
    \                    val[0][k][i][j]=max(val[0][k-1][i][j],val[0][k-1][i][j+(1<<(k-1))]);\n\
    \                }\n            }\n        }\n        //\u7E26\u65B9\u5411\u3078\
    \u30C0\u30D6\u30EA\u30F3\u3050\n        \n        for(int k=0;k<log2;k++){\n \
    \           for(int l=1;l<log1;l++){\n                for(int i=0;i<n;i++){\n\
    \                    if(i+(1<<(l-1))>=n)break;\n                    for(int j=0;j<m;j++){\n\
    \                        //val[i][j][l][k]=max(val[i][j][l-1][k],val[i+(1<<(l-1))][j][l-1][k]);\n\
    \                        val[l][k][i][j]=max(val[l-1][k][i][j],val[l-1][k][i+(1<<(l-1))][j]);\n\
    \                    }\n                }\n            }\n        }\n        log.resize(max(n,m)+1);\n\
    \        for(int i=0;i<=max(n,m);i++){\n            for(int j=0;j<10000;j++){\n\
    \                if((1<<j)>i){\n                    log[i]=j-1;\n            \
    \        break;\n                }\n            }\n         }\n    }\n    ~sparse_table2d(){\n\
    \        for(int i = 0; i <= l1; ++i){\n            for(int j = 0; j <= l2; ++j){\n\
    \                for(int k = 0; k < n_; ++k){\n                    delete[] val[i][j][k];\n\
    \                }\n                delete[] val[i][j];\n            }\n     \
    \       delete[] val[i];\n        }\n        delete[] val;\n    }\n    T query(int\
    \ lx,int ly,int rx,int ry){//[lx,rx)*[ly,ry)\u306E\u9818\u57DF\u306Eop\u7D50\u679C\
    \u3092\u8FD4\u3059O(1)\n        int xl=log[rx-lx];\n        int yl=log[ry-ly];\n\
    \        return max(max(val[xl][yl][lx][ly],val[xl][yl][rx-(1<<xl)][ly]),max(val[xl][yl][lx][ry-(1<<yl)],val[xl][yl][rx-(1<<xl)][ry-(1<<yl)]));\n\
    \    }\n};\n"
  code: "\ntemplate<class T>\nstruct sparse_table2d{\n    T****val;//(a,b)\u306B\u304A\
    \u3044\u3066[a+2^i],[a+2^j]\u306E\u6F14\u7B97\u7D50\u679C\u3092\u8868\u3059\n\
    \    vector<int>log;\n    using F=function<T(T,T)>;\n    F op;\n    int l1,l2;\n\
    \    int n_;\n    sparse_table2d(vector<vector<T>>node,F op):op(op){\n       \
    \ int n=node.size(),m=node[0].size();\n        int log1{};\n        int log2{};\n\
    \        while((1<<log1)<=n)log1++;\n        while((1<<log2)<=m)log2++;\n    \
    \    l1=log1,l2=log2;\n        \n        n_=n;\n        val = new T***[log1 +\
    \ 1];\n        for(int k = 0; k <=log1 ; ++k){\n            val[k] = new T**[log2\
    \ + 1];\n            for(int l = 0; l <= log2; ++l){\n                val[k][l]\
    \ = new T*[n];\n                for(int i = 0; i < n; ++i){\n                \
    \    val[k][l][i] = new T[m];\n                }\n            }\n        }\n \
    \       for(int i=0;i<n;i++)for(int j=0;j<m;j++)val[0][0][i][j]=node[i][j];\n\
    \        //\u6A2A\u65B9\u5411\u306B\u30C0\u30D6\u30EA\u30F3\u3050\n        for(int\
    \ k=1;k<log2;k++){\n            for(int i=0;i<n;i++){\n                for(int\
    \ j=0;j<m;j++){\n                    if(j+(1<<(k-1))>=m)break;\n             \
    \       //val[i][j][0][k]=max(val[i][j][0][k-1],val[i][j+(1<<(k-1))][0][k-1]);\n\
    \                    val[0][k][i][j]=max(val[0][k-1][i][j],val[0][k-1][i][j+(1<<(k-1))]);\n\
    \                }\n            }\n        }\n        //\u7E26\u65B9\u5411\u3078\
    \u30C0\u30D6\u30EA\u30F3\u3050\n        \n        for(int k=0;k<log2;k++){\n \
    \           for(int l=1;l<log1;l++){\n                for(int i=0;i<n;i++){\n\
    \                    if(i+(1<<(l-1))>=n)break;\n                    for(int j=0;j<m;j++){\n\
    \                        //val[i][j][l][k]=max(val[i][j][l-1][k],val[i+(1<<(l-1))][j][l-1][k]);\n\
    \                        val[l][k][i][j]=max(val[l-1][k][i][j],val[l-1][k][i+(1<<(l-1))][j]);\n\
    \                    }\n                }\n            }\n        }\n        log.resize(max(n,m)+1);\n\
    \        for(int i=0;i<=max(n,m);i++){\n            for(int j=0;j<10000;j++){\n\
    \                if((1<<j)>i){\n                    log[i]=j-1;\n            \
    \        break;\n                }\n            }\n         }\n    }\n    ~sparse_table2d(){\n\
    \        for(int i = 0; i <= l1; ++i){\n            for(int j = 0; j <= l2; ++j){\n\
    \                for(int k = 0; k < n_; ++k){\n                    delete[] val[i][j][k];\n\
    \                }\n                delete[] val[i][j];\n            }\n     \
    \       delete[] val[i];\n        }\n        delete[] val;\n    }\n    T query(int\
    \ lx,int ly,int rx,int ry){//[lx,rx)*[ly,ry)\u306E\u9818\u57DF\u306Eop\u7D50\u679C\
    \u3092\u8FD4\u3059O(1)\n        int xl=log[rx-lx];\n        int yl=log[ry-ly];\n\
    \        return max(max(val[xl][yl][lx][ly],val[xl][yl][rx-(1<<xl)][ly]),max(val[xl][yl][lx][ry-(1<<yl)],val[xl][yl][rx-(1<<xl)][ry-(1<<yl)]));\n\
    \    }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: sparse_table/sparse_table2d.hpp
  requiredBy: []
  timestamp: '2024-06-03 23:45:15+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: sparse_table/sparse_table2d.hpp
layout: document
redirect_from:
- /library/sparse_table/sparse_table2d.hpp
- /library/sparse_table/sparse_table2d.hpp.html
title: sparse_table/sparse_table2d.hpp
---
