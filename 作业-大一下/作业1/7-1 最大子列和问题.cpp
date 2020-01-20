#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;

inline int read(){
    int s=0,w=1;
    char ch=getchar();
    while(ch<'0'||ch>'9'){if(ch=='-')w=-1;ch=getchar();}
    while(ch>='0'&&ch<='9') s=s*10+ch-'0',ch=getchar();
    return s*w;
}

int k,n,a[100005],f[100005],maxn;

int main(){
    k=read();
    for(int i=0;i<k;i++){
        a[i]=read();   
    }
    maxn=f[0]=a[0];
    for(int i=1;i<k;i++){
        f[i-1]<0?f[i]=a[i]:f[i]=a[i]+f[i-1];
        maxn=max(f[i],maxn);
    }
    cout<<maxn<<endl;

    return 0;
}