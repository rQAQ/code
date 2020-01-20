#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> v[105];
int f[105],maxdep=-1,n,m,node,k,t;

inline int read(){
	int s=0,w=1;
	char ch=getchar();
	while(ch<'0'||ch>'9'){if(ch=='-')w=-1;getchar();}
	while(ch>='0'&&ch<='9') s=s*10+ch-'0',ch=getchar();
	return s*w;
}

void dfs(int n,int depth){
	if(!v[n].size()){
		f[depth]++;
		maxdep=max(maxdep,depth);
		return;
	}
	for(int i=0;i<v[n].size();i++) dfs(v[n][i],depth+1);
}

int main(){
	n=read(),m=read();
	for(int i=0;i<m;i++){
		node=read(),k=read();
		for(int j=0;j<k;j++) v[node].push_back(read());
	}
	dfs(1,0);
	for(int i=0;i<=maxdep;i++){
		if(i) printf(" ");
		printf("%d",f[i]);
	}

	return 0;
}