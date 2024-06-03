template<class T>
struct sparse_table{
	std::vector<std::vector<T>>data;
	std::vector<int>table;
	using F=std::function<T(T,T)>;
	F op;
	sparse_table(int n,std::vector<T>a,F op):op(op){
		int log{1};
		while((1<<log)<=n)log++;
		data=std::vector(log,std::vector<T>(n));
		data[0]=a;
		for(int i=1;i<log;i++){
			for(int j=0;j<n;j++){
				if(j+(1<<(i-1))<n)data[i][j]=op(data[i-1][j],data[i-1][j+(1<<(i-1))]);
			}
		}
		table.resize(n+1);
		for(int i=1;i<=n;i++){
			for(int j=0;j<=log+1;j++){
				if((1<<j)<=i){
					table[i]=j;
				}
			}
		}
	}
	//[l,r)
	T prod(int l,int r){
		int len=r-l;
		int lg=table[len];
		return op(data[lg][l],data[lg][r-(1<<lg)]);
	}
};
