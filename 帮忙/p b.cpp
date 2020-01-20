#include <cstdio>
#include <algorithm>
using namespace std;
#define maxn 10000005

int prime[maxn],n,m,cnt,flag;
bool pr[maxn]={0}; 

inline int read(){
	int x=0,w=0;char ch=0;
	while(!isdigit(ch)) w|=ch=='-',ch=getchar();
	while(isdigit(ch)) x=(x<<3)+(x<<1)+(ch^48),ch=getchar();
	return w?-x:x;
}

void prm(){
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
	n=100,m=200;
	prm();
	printf("21\n");
	for(int i=n;i<=m;i++){
		if(flag&&!pr[i]) printf(" ");
		if(!pr[i]) printf("%d",i),flag=1;
	}

	return 0;
}
