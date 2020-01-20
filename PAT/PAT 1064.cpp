#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

int fun(int x){
	int sum=0;
	while(x){
		sum+=x%10;
		x/=10;
	}
	return sum;
}

int cnt,n,m,a[105],s[105];

int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>m;
		a[fun(m)]++;
	}
	for(int i=0;i<105;i++){
		if(a[i]) s[cnt++]=i;
	}
	cout<<cnt<<endl;
	for(int i=0;i<cnt;i++){
		if(i) cout<<' ';
		cout<<s[i];
	}

	return 0;
}