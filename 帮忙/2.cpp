#include<stdio.h>
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

int n,maxn;

int  main(){
	for(int i=0;i<4;i++){
		n=read();
		maxn=max(n,maxn);
	}

	cout<<maxn;
	
	return 0;
}