#include<cstdio>
#include<iostream>
#include<algorithm>
#define ll long long
using namespace std;

ll n,p,cnt,a[100005];

int main(){
	cin>>n>>p;
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	for(int i=0;i<n;i++){
		for(int j=i+cnt;j<n;j++){
			if(a[j]>p*a[i]) break;
			if(j-i+1>cnt) cnt=j-i+1;
		}
	}
	cout<<cnt;

	return 0;

}