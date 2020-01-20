#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

struct node
{
	long long G,S,K;
}a,b;

long long sum1,sum2;

void print(long long a,long long b){
	if(a<b){
		cout<<"-";
		swap(a,b);
	}
	long long c=a-b;
	cout<<c/(17*29)<<".";
	c%=17*29;
	cout<<c/29<<".";
	c%=29;
	cout<<c;
}

int main(){
	scanf("%lld.%lld.%lld",&a.G,&a.S,&a.K);
	scanf("%lld.%lld.%lld",&b.G,&b.S,&b.K);
	sum1=a.G*17*29+a.S*29+a.K;
	sum2=b.G*17*29+b.S*29+b.K;
	print(sum2,sum1);

	return 0;
}	