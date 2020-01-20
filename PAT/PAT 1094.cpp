#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

char N[1005];
int l,k,f=-1,p;

int isprime(int x){
	if(x<=1) return 0;
	for(int i=2;i<=sqrt(x);i++){
		if(x%i==0) return 0;
	}
	return 1;
}

int fun(int x){
	if(x+1<k) return 0;
	int sum=0,cnt=1;
	for(int i=0;i<k;i++){
		sum+=(N[x]-'0')*cnt;
		x--,cnt*=10;
	}
	if(isprime(sum)) return 1;
	return 0;
}

int main(){
	cin>>l>>k;
	getchar();
	for(int i=0;i<l;i++){
		N[i]=getchar();
	}
	for(int i=l-1;i>=0;i--){
		if(fun(i)) f=i;
	}
	if(f==-1) cout<<"404";
	else{
		for(int i=f-k+1;i<=f;i++){
			putchar(N[i]);
		}
	}

	return 0;
}