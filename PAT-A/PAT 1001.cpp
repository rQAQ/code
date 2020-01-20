#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

int a,b,cnt,t;
char s[15];

inline int read(){
	int s=0,w=1;
	char ch=getchar();
	while(ch<'0'||ch>'9'){if(ch=='-')w=-1;ch=getchar();}
	while(ch>='0'&&ch<='9') s=s*10+ch-'0',ch=getchar();
	return s*w;
}

void fun(int x){
	int f=0;
	if(!x){
		putchar('0');
		return;
	}
	if(x<0) putchar('-'),x=-x;
	while(x){
		if(t%3==0&&f) s[cnt++]=',';
		s[cnt++]=x%10+48;
		t++;
		x/=10;
		f=1;
	}
	for(int i=cnt-1;i>=0;i--){
		putchar(s[i]);
	}
}

int main(){
	a=read(),b=read();
	fun(a+b);

	return 0;
}