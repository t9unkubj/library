template<class T>
struct sparse_table2d{
    T****val;//(a,b)において[a+2^i],[a+2^j]の演算結果を表す
    vector<int>log;
    using F=function<T(T,T)>;
    F op;
    int l1,l2;
    int n_;
    sparse_table2d(vector<vector<T>>node,F op):op(op){
        int n=node.size(),m=node[0].size();
        int log1{};
        int log2{};
        while((1<<log1)<=n)log1++;
        while((1<<log2)<=m)log2++;
        l1=log1,l2=log2;
        
        n_=n;
        val = new T***[log1 + 1];
        for(int k = 0; k <=log1 ; ++k){
            val[k] = new T**[log2 + 1];
            for(int l = 0; l <= log2; ++l){
                val[k][l] = new T*[n];
                for(int i = 0; i < n; ++i){
                    val[k][l][i] = new T[m];
                }
            }
        }
        for(int i=0;i<n;i++)for(int j=0;j<m;j++)val[0][0][i][j]=node[i][j];
        //横方向にダブリンぐ
        for(int k=1;k<log2;k++){
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(j+(1<<(k-1))>=m)break;
                    //val[i][j][0][k]=max(val[i][j][0][k-1],val[i][j+(1<<(k-1))][0][k-1]);
                    val[0][k][i][j]=max(val[0][k-1][i][j],val[0][k-1][i][j+(1<<(k-1))]);
                }
            }
        }
        //縦方向へダブリンぐ
        
        for(int k=0;k<log2;k++){
            for(int l=1;l<log1;l++){
                for(int i=0;i<n;i++){
                    if(i+(1<<(l-1))>=n)break;
                    for(int j=0;j<m;j++){
                        //val[i][j][l][k]=max(val[i][j][l-1][k],val[i+(1<<(l-1))][j][l-1][k]);
                        val[l][k][i][j]=max(val[l-1][k][i][j],val[l-1][k][i+(1<<(l-1))][j]);
                    }
                }
            }
        }
        log.resize(max(n,m)+1);
        for(int i=0;i<=max(n,m);i++){
            for(int j=0;j<10000;j++){
                if((1<<j)>i){
                    log[i]=j-1;
                    break;
                }
            }
         }
    }
    ~sparse_table2d(){
        for(int i = 0; i <= l1; ++i){
            for(int j = 0; j <= l2; ++j){
                for(int k = 0; k < n_; ++k){
                    delete[] val[i][j][k];
                }
                delete[] val[i][j];
            }
            delete[] val[i];
        }
        delete[] val;
    }
    T query(int lx,int ly,int rx,int ry){//[lx,rx)*[ly,ry)の領域のop結果を返すO(1)
        int xl=log[rx-lx];
        int yl=log[ry-ly];
        return max(max(val[xl][yl][lx][ly],val[xl][yl][rx-(1<<xl)][ly]),max(val[xl][yl][lx][ry-(1<<yl)],val[xl][yl][rx-(1<<xl)][ry-(1<<yl)]));
    }
};
