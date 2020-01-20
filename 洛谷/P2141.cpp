//痛得笑不出来一定很开心呢
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
int n,ans,a,b,k;
int s[20005];
int in[105];
int main(){
	n=read();
	for(int i=1;i<=n;i++){
		in[i]=read();
	}
	for(int i=1;i<n;i++){
		a=in[i];
		for(int j=i+1;j<=n;j++){
			
			b=in[j];
			s[a+b]++;
		}
	}
	for(int i=1;i<=n;i++){
		k=in[i];
		if(s[k]!=0) ans++;
	}
	cout<<ans;
	return 0;
} 
