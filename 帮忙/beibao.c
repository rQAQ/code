#include<stdio.h>

int s,d[100011],v[100001],p[100001];

int min(int a,int b){
    return a<b?a:b;
}

void dp(int c,int p){
    for(int i=c;i<=s;i++)
        d[i]=min(d[i],d[i-c]+p);
}

int main(){
    d[0]=0;
    for(int i=0;i<10;i++){
        scanf("%d",&p[i]);
        v[i]=i+1;
    }
    scanf("%d",&s);
    for(int i=1;i<=s;i++) d[i]=1000000;
    for(int i=0;i<10;i++) dp(v[i],p[i]);
    printf("%d",d[s]);
   
   return 0; 
}