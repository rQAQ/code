#include<stdio.h>
#define ll long long

ll f(ll x){
	ll res=1;
	for(ll i=1;i<=x;i++) res*=i;
	return res;
}

inline ll read(){
	ll s=0,w=1;
	char ch;
	while(ch<'0'||ch>'9'){if(ch=='-')w=-1;ch=getchar();}
	while(ch>='0'&&ch<='9') s=s*10+ch-'0',ch=getchar();
	return s*w;
}

void print(ll x){
	if(x<0) putchar('-'),x=-x;
	if(x>9) print(x/10);
	putchar(x%10+'0');
}	

int main(){
	ll n=read();
	print(f(n));

	return 0;
}