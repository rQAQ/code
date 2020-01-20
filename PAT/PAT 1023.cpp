#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

int s[10];

inline int read(){
	int s=0,w=1;
	char ch=getchar();
	while(ch<'0'||ch>'9'){if(ch=='-')w=-1;ch=getchar();}
	while(ch>='0'&&ch<='9') s=s*10+ch-'0',ch=getchar();
	return s*w;
}

int main(){
	for(int i=0;i<=9;i++) s[i]=read();
	for(int i=1;i<=9;i++){
		if(s[i]){
			cout<<i;
			s[i]--;
			break;
		}
	}
	for(int i=0;i<=9;i++){
		if(s[i]){
			for(int j=0;j<s[i];j++){
				cout<<i;
			}
		}
	}

	return 0;
}