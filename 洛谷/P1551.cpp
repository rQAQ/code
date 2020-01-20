#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

inline int read(){
	int s=0,w=1;
	char ch;
	while(ch<'0'||ch>'9'){if(ch=='-')w=-1;ch=getchar();}
	while(ch>='0'&&ch<='9') s=s*10+ch-'0',ch=getchar();
	return s*w;
}

int n,p,m,f[5005],mi,mj,pi,pj;
 
int find(int k){
	if(f[k]==k) return k;
	return f[k]=find(f[k]);
} 

int main(){
	n=read(),m=read(),p=read();
	for(int i=0;i<=5000;i++){
		f[i]=i;
	}
	for(int i=0;i<m;i++){
		mi=read(),mj=read();
		f[find(mi)]=find(mj);
	}
	for(int i=0;i<p;i++){
		pi=read(),pj=read();
		if(find(pi)==find(pj)) printf("Yes\n");
		else printf("No\n");
	}

	return 0;
}