#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

struct node{
	int ans,data;
}a[105];

int n,m;

int main(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>a[i].data;
	}
	for(int i=0;i<m;i++){
		cin>>a[i].ans;
	}
	for(int i=0;i<n;i++){
		int sum=0;
		for(int j=0;j<m;j++){
			int num;
			cin>>num;
			if(num==a[j].ans) sum+=a[j].data;
		}
		cout<<sum<<endl;
	}

	return 0;
}