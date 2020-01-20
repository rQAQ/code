#include<cstdio>
#include<iostream>
using namespace std;

struct node{
    int data;
    int next;
}a[100005];

int n,t,x,p,q,add1[100005],add2[100005],len,k;

int main(){ 
    scanf("%d %d",&t,&n);
    for(int i=0;i<n;i++){
        scanf("%d %d %d",&p,&x,&q);
        a[p].data=x;
        a[p].next=q;
    }
    while(t!=-1){
        add1[k++]=t;
        t=a[t].next;
    }
    len=k;
    k=0;    
    for(int i=0,j=len-1;i<=j;){
        if(i==j) add2[k]=add1[i++];
        else{
            add2[k++]=add1[j--];
            add2[k++]=add1[i++];
        }
    }

    for(int i=0;i<len-1;i++) printf("%05d %d %05d\n",add2[i],a[add2[i]].data,add2[i+1]);
    printf("%05d %d -1\n",add2[len-1],a[add2[len-1]].data);
    
    return 0;
}
