//我们是穿过时光壁垒的飞鸟
#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
inline int read(){
	int s=0,w=1;
	char ch=getchar();
	while(ch<'0'||ch>'9'){if(ch=='-')w=-1;ch=getchar();}
	while(ch>='0'&&ch<='9')s=s*10+ch-'0',ch=getchar();
	return s*w;
} 
int n,ans;
int s[105];
int main(){
	n=read();
	s[0]=1e9+7; 
	for(int i=1;i<=n;i++){
		s[i]=read();
		for(int j=0;j<=i;j++){
			if(s[j]<s[i]) ans++; 
		}
		cout<<ans<<" ";
		ans=0;
	}
	return 0;
}
