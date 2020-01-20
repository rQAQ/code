#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

struct node{
    int data,s,e;
}dp[10005];

int k,a[10005],maxn,f;

inline int read(){
    int s=0,w=1;
    char ch=getchar();
    while(ch<'0'||ch>'9'){if(ch=='-')w=-1;ch=getchar();}
    while(ch>='0'&&ch<='9') s=s*10+ch-'0',ch=getchar();
    return s*w;
}

int main(){
    k=read();
    for(int i=0;i<k;i++){
        a[i]=read();
        if(a[i]>=0) f=1;
    }
    if(!f) return cout<<"0 "<<a[0]<<" "<<a[k-1],0;
    dp[0].data=a[0],dp[0].s=dp[0].e=a[0];
    for(int i=1;i<k;i++){
        if(dp[i-1].data+a[i]>=a[i]){
            dp[i].data=dp[i-1].data+a[i];
            dp[i].s=dp[i-1].s;
            dp[i].e=a[i];
        }else{
            dp[i].data=a[i];
            dp[i].s=dp[i].e=a[i];
        }
    }
    for(int i=k-1;i>=1;i--){
        if(dp[maxn].data<=dp[i].data) maxn=i; 
    }
    cout<<dp[maxn].data<<' '<<dp[maxn].s<<' '<<dp[maxn].e;

    return 0;
}