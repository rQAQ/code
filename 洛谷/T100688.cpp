#include<cstdio>
#include<iostream>
#include<algorithm>
#define ll long long
using namespace std;

inline ll read(){
	ll s=0,w=1;
	char ch;
	while(ch<'0'||ch>'9'){if(ch=='-')w=-1;ch=getchar();}
	while(ch>='0'&&ch<='9') s=s*10+ch-'0',ch=getchar();
	return s*w;
}

ll n,t,tp,last,sum,s;

int main(){
	n=read();
	last=n;
	for(ll i=0;i<n;i++){
		t=read();
		tp=t^last;
		last=t;
		for(ll j=1;j<=1e16;j*=10){
			if(tp/j%10+sum/j%10>9) s+=j*10;
		}
		sum+=tp-s;
		s=0;
	}
	cout<<sum%999983;

	return 0;
}