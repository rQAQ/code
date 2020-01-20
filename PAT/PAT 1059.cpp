#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

struct node{
	int data,f;
}a[10005];

inline int read(){
	int s=0,w=1;
	char ch=getchar();
	while(ch<'0'&&ch>'9'){if(ch=='-')w=-1;ch=getchar();}
	while(ch>='0'&&ch<='9') s=s*10+ch-'0',ch=getchar();
	return s*w;
}

int isprime(int x){
	if(x<2) return 0;
	else{
		for(int i=2;i<=sqrt(x);i++){
			if(x%i==0) return 0;
		}
	}
	return 1;
}

int n,k,num;

int main(){
	n=read();
	for(int i=0;i<n;i++){
		num=read();
		a[num].data=i+1;
	}
	k=read();
	for(int i=0;i<k;i++){
		num=read();
		if(!a[num].data){
			printf("%04d: Are you kidding?\n",num);
			continue;
		}else if(a[num].f){
			printf("%04d: Checked\n",num);
			continue;
		}else if(a[num].data==1){
			printf("%04d: Mystery Award\n",num);
			a[num].f=1;
			continue;
		}else if(isprime(a[num].data)){
			printf("%04d: Minion\n",num);
			a[num].f=1;
			continue;
		}else{
			printf("%04d: Chocolate\n",num);
			a[num].f=1;
			continue;
		}
	}

	return 0;
}