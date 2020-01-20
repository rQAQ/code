#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

inline int read(){
	int s=0,w=1;
	char ch=getchar();
	while(ch<'0'||ch>'9'){if(ch=='-')w=-1;ch=getchar();}
	while(ch>='0'&&ch<='9') s=s*10+ch-'0',ch=getchar();
	return s*w;
}

int fun(int a,int b){
	while(a){
		if(a%10!=b%10) return 0;
		a/=10,b/=10;
	}
	return 1;
}
int n,m,f;

int main(){
	m=read();
	for(int i=0;i<m;i++){
		n=read();
		int j;
		for(j=1;j<10;j++){
			f=fun(n,n*n*j);
			if(f){
				cout<<j<<" "<<n*n*j<<endl;
				break;
			}
		}
		if(j==10) cout<<"No"<<endl;
	}

	return 0;
}