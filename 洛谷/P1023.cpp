#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

inline int read(){
	int s=0,w=1;
	char ch;
	while(ch<'0'||ch>'9'){if(ch=='-')w=-1;ch=getchar();}
	while(ch>='0'&&ch<='9') s=s*10+ch-'0',ch=getchar();
	return s*w;
}

int adv,n,m,cnt,sum,cha;

struct node{
	int n,p;
	int sum;	
}o,a[100005];	

bool cmp(node a,node b){
	return a.sum<b.sum;
}
int main(){
	adv=read();
	o.p=read(),o.n=read();
	for(int i=0;;i++){
		a[i].p=read(),a[i].n=read();
		if(a[i].p==-1) break;
		a[i].sum=(a[i].p-o.p)*n;
		cnt++;
	}
	cha=read();
	sort(a,a+cnt,cmp);
	sum=(adv-o.p)*(a[0].n+(adv-a[0].n)*(a[1].n-a[0].n)/(a[1].p-a[0].p));
	
	cout<<(a[cnt].sum-sum)/(a[cnt].sum-(adv-a[0].n)*(a[1].n-a[0].n)/(a[1].p-a[0].p));

	return 0;
}