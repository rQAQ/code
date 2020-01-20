#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
#define maxn 500010

int n,a[maxn],c[maxn];
long long ans;

inline int read(){
    int s=0,w=1;
    char ch=getchar();
    while(ch<'0'||ch>'9'){if(ch=='-')w=-1;ch=getchar();}
    while(ch>='0'&&ch<='9') s=s*10+ch-'0',ch=getchar();
    return s*w;
}

void msort(int x,int y){
    if(x==y) return;
    int mid=(x+y)/2,i=x,j=mid+1,k=x;
    msort(x,mid),msort(mid+1,y);
    while(i<=mid&&j<=y){
        if(a[i]<=a[j]) c[k++]=a[i++];
        else c[k++]=a[j++],ans+=mid-i+1;//统计答案
    }
    while(i<=mid) c[k++]=a[i++];
    while(j<=y) c[k++]=a[j++];
    for(int l=x;l<=y;l++) a[l]=c[l];
} 

int main(){
    n=read(); 
    for(int i=0;i<n;i++) a[i]=read();
    msort(0,n-1);
    for(int i=0;i<n;i++){
        if(i) printf(" ");
        printf("%d",a[i]);
    }
    printf("%lld",ans);
    
    return 0;
}