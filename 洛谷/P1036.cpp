//回答我吧,那闪耀着的未来 
#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
inline int read(){
	int s=0,w=1;
	char ch=getchar();
	while(ch<'0'||ch>'9'){if(ch=='-')w=-1;ch=getchar();}
	while(ch>='0'&&ch<='9') s=s*10+ch-'0',ch=getchar();
	return s*w;
}
int ans,n;
int f[1005];
int main(){
	n=read();
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i/2;j++){
			f[i]+=f[j];
		}
		f[i]++;
	}
	cout<<f[n];
	return 0;
}
