#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int n,a,b;
double sum,ans;

inline int read(){
	int s=0,w=1;
	char ch=getchar();
	while(ch<'0'||ch>'9'){if(ch=='-')w=-1;ch=getchar();}
	while(ch>='0'&&ch<='9') s=s*10+ch-'0',ch=getchar();
	return s*w;
}

int main(){
	n=read();
	for(int i=0;i<n;i++){
		a=read(),b=read();
		sum=sqrt(a*a+b*b);
		ans=max(ans,sum);
	}
	printf("%.2lf",ans);

	return 0;	
}