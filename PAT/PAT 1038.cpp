#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

int a[101],n,p,m,k;

int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>p;
		a[p]++;
	}
	cin>>k;
	for(int i=0;i<k;i++){
		if(i) cout<<" ";
		cin>>m;
		cout<<a[m];
	}

	return 0;
}