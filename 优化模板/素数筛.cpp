#include <cstdio>
#include <algorithm>
using namespace std;
#define maxn 10000005

int prime[maxn],n,m;
bool pr[maxn]={0}; 

inline int read(){
	int s=0,w=1;
	char ch=getchar();
	while(ch<'0'||ch>'9'){if(ch=='-')w=-1;ch=getchar();}
    while(ch>='0'&&ch<='9') s=s*10+ch-'0',ch=getchar();
    return s*w;
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
	n=read(),m=read();
	prm();
	while(m--){
		int a=read();
		if(!pr[a]) printf("Yes\n");
		else printf("No\n");
	}
	return 0;
}
