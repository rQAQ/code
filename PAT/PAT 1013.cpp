#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
#define maxn 10000005

int prime[maxn],n,m,cnt,flag,t,pm=1e9+7,pn;
bool pr[maxn]={0}; 

inline int read(){
	int x=0,w=0;char ch=0;
	while(!isdigit(ch)) w|=ch=='-',ch=getchar();
	while(isdigit(ch)) x=(x<<3)+(x<<1)+(ch^48),ch=getchar();
	return w?-x:x;
}

void oula(){
	int tot=0;
	pr[1]=1;
    for(int i=2;i<=maxn;i++){
        if(!pr[i]) prime[++tot]=i;
        for(int j=1;j<=tot&&i*prime[j]<=maxn;j++){
        	pr[i*prime[j]]=1;
            if(i%prime[j]==0) break;
        }
    }
}

int main(){
	m=read(),n=read();
	
	oula();
	for(int i=1;i<maxn;i++){
		if(!pr[i]) t++;
		if(t==m) pm=min(pm,i);
		if(t==n){
			pn=i;
			break;
		}
	}

	for(int i=pm;i<=pn;i++){
		if(!pr[i]){
			if(cnt&&cnt%10==0) cout<<endl;
			if(cnt%10&&flag) cout<<" ";
			cout<<i;
			cnt++;
			flag=1;
		}
	}

	return 0;
}