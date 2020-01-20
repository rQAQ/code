//没有人是废物,只是你做得还不够好
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
int n,a,b,ans,maxn;
int main(){
	n=read();
	b=1e9;
	for(int i=1;i<=n;i++){
		a=read();
		if(a>b){
			ans++;
			if(maxn<ans) maxn=ans;
		}else{
			ans=0;
		}
		b=a;
	}
	cout<<maxn+1;
	return 0;
} 
