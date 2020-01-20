#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

int a,b,c,d,t[31],cnt;

inline int read(){
	int s=0,w=1;
	char ch=getchar();
	while(ch<'0'||ch>'9'){if(ch=='-')w=-1;ch=getchar();}
	while(ch>='0'&&ch<='9') s=s*10+ch-'0',ch=getchar();
	return s*w;
}

int main(){
	a=read(),b=read(),d=read();
	c=a+b;
	while(c/d){
		t[cnt++]=c%d;
		c/=d;
	}
	t[cnt]=c;
	for(int i=cnt;i>=0;i--){
		printf("%d",t[i]);
	}

	return 0;
}