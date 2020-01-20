#include<cstdio>
#include<iostream>
#include<algorithm>
#define maxn 10000050
#define ll long long
#define tl (p<<1)
#define tr (p<<1|1)
#define mid ((l+r)>>1)
using namespace std;

int n,m;
ll tsum[maxn],A,M,mod;

inline ll read(){
	ll w=0,x=0;char ch=0;
	while(!isdigit(ch)) w|=ch=='-',ch=getchar();
	while(isdigit(ch)) x=(x<<3)+(x<<1)+(ch^48),ch=getchar();
	return w?-x:x;
}

struct node{
	ll mul,add;
}tag[maxn];

void pushdown(int l,int r,int p){
	if(tag[p].add ==0&&tag[p].mul ==1) return;
	tsum[tl]=(tsum[tl]*tag[p].mul %mod+tag[p].add *(mid-l+1)%mod)%mod;
	tag[tl].mul =tag[tl].mul *tag[p].mul %mod;
	tag[tl].add =(tag[tl].add *tag[p].mul +tag[p].add)%mod; 
	tsum[tr]=(tsum[tr]*tag[p].mul %mod+tag[p].add *(r-mid)%mod)%mod;
	tag[tr].mul =tag[tr].mul *tag[p].mul %mod;
	tag[tr].add =(tag[tr].add *tag[p].mul +tag[p].add)%mod;
	tag[p].add =0,tag[p].mul =1; 
}

void change(int l,int r,int x,int y,int p){
	if(x==l&&y==r){
		tsum[p]=(tsum[p]*M%mod+A*(r-l+1)%mod)%mod;
		tag[p].mul =tag[p].mul *M%mod;
		tag[p].add =(tag[p].add *M+A)%mod;
		return;
	} 
	pushdown(l,r,p);
	if(mid>=y) change(l,mid,x,y,tl);
	else if(mid+1<=x) change(mid+1,r,x,y,tr);
	else{
		change(l,mid,x,mid,tl);
		change(mid+1,r,mid+1,y,tr);
	}
	tsum[p]=(tsum[tl]+tsum[tr])%mod;
}

ll ask(int l,int r,int x,int y,int p){
	if(x==l&&y==r) return tsum[p];
	pushdown(l,r,p);
	ll res;
	if(mid>=y) res=ask(l,mid,x,y,tl);
	else if(mid+1<=x) res=ask(mid+1,r,x,y,tr);
	else res=(ask(l,mid,x,mid,tl)+ask(mid+1,r,mid+1,y,tr))%mod;
	return res;
}

int main(){
	n=read(),m=read(),mod=read();
	for(int i=1;i<=n;i++){
		A=read(),M=1;
		change(1,n,i,i,1);
	} 
	while(m--){
		int op=read(),x,y;
		if(op==1){
			x=read(),y=read(),M=read();
			A=0;
			change(1,n,x,y,1); 
		}else if(op==2){
			x=read(),y=read(),A=read();
			M=1;
			change(1,n,x,y,1);
		}else{
			x=read(),y=read();
			printf("%lld\n",ask(1,n,x,y,1));
		} 
	}
	return 0;
}