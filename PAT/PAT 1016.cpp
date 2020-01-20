#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

long long  fun(long long a,long long d){
	int cnt=0;
	long long sum=0;
	while(a){
		long long c=a%10;
		if(c==d) cnt++;
		a/=10;
	}
	int t=1;
	for(int i=0;i<cnt;i++){
		sum+=t*d;
		t*=10;
	}
	return sum;
}

long long a,da,b,db,suma,sumb;

int main(){
	cin>>a>>da>>b>>db;

	cout<<fun(a,da)+fun(b,db);

	return 0;
}