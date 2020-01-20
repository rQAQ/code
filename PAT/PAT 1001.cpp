#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

int n,cnt;

inline int read(){
	int s=0,w=1;
	char ch=getchar();
	while(ch<'0'||ch>'9'){if(ch=='-')w=-1;ch=getchar();}
	while(ch>='0'&&ch<='9') s=s*10+ch-'0',ch=getchar();
	return s*w;
}

void fun(int n){
	if(n%2==0) n=n/2;
	else n=(3*n+1)/2;
	cnt++;
	if(n!=1) fun(n);
}

int main(){
	n=read();

	if(n==1) cout<<0;
	else{
		fun(n);
		cout<<cnt;
	}

	return 0;
}