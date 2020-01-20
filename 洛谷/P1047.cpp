//热爱无可取代
#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
struct node{
	int s,e;
}m;
int l,n,ans;
int s[10005]; 
inline int read(){
	int s=0,w=1;
	char ch=getchar();
	while(ch<'0'||ch>'9'){if(ch=='-') w=-1;ch=getchar();}
	while(ch>='0'&&ch<='9') s=s*10+ch-'0',ch=getchar();
	return s*w;
}
int main(){
	l=read();
	ans=l+1;
	n=read();
	for(int i=1;i<=n;i++){
		m.s=read();
		m.e=read();
		for(int j=m.s;j<=m.e;j++){
			s[j]--;
		}
	}
	for(int i=0;i<=l;i++){
		if(s[i]!=0) ans--;
	}
	cout<<ans;
	return 0;
} 
