#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

long long mp(long long x,long long n,long long mod){
	long long res=1;
	while(n>0){
		if(n&1){
			res=res*x%mod;
		}
		x=x*x%mod;
		n>>=1;
	}
	return res;
}

int main(){
	long long b,p,k;
	cin>>b>>p>>k;
	cout<<b<<"^"<<p<<" mod "<<k<<"="<<mp(b,p,k)%k;
	//printf("%lld^%lldmod%lld=%lld",b,p,k,mp(b,p,k));
    
    return 0;
}