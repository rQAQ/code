#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

int n,m,k,a[11],cnt,t;

int main(){
	cin>>n>>m>>k;
	for(int i=0;i<k;i++){
		cin>>a[i];
	}
	while(cnt<n){
		cnt+=m;
		t++;
		for(int i=0;i<k;i++){
			if(cnt==a[i]) m++;
		}
	}
	cout<<t;

	return 0;
}