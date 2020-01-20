#include<cstdio>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct node{
    int add;
    int data;
    int next;
}L[100005];

int fa,n,k,t;
vector<int> v;

inline int read(){
    int s=0,w=1;
    char ch=getchar();
    while(ch<'0'||ch>'9'){if(ch=='-')w=-1;ch=getchar();}
    while(ch>='0'&&ch<='9') s=s*10+ch-'0',ch=getchar();
    return s*w;
}

int main(){
    fa=read();
    n=read();
    k=read();  
    for(int i=0;i<n;i++){
        t=read();
        L[t].data=read();
        L[t].next=read();
        L[t].add=t;
    }

    while(fa!=-1){
        v.push_back(fa);
        fa=L[fa].next;
    }
    if(k){
        for(int i=0;i<v.size();i+=k){
            int end=i+k;
            if(end>v.size()) break;
            for(int j=i;j<i+k/2;j++) swap(v[j],v[end-j+i-1]);
        }
    }

    for(int i=0;i<v.size();i++){
        if(!i) printf("%05d %d ",v[i],L[v[i]].data);
        else printf("%05d\n%05d %d ",v[i],v[i],L[v[i]].data);
    }
    cout<<-1;

    return 0;
}