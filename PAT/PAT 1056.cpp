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

int n,a[11],sum;

int main(){
	n=read();
	for(int i=0;i<n;i++){
		a[i]=read();
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j) continue;
			sum+=a[i]*10+a[j];
		}
	}
	cout<<sum;

	return 0;
}