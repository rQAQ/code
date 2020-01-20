#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int n,m,flag;

int main(){
	cin>>n>>m;

	vector<int> v(n);

	for(int i=0;i<n;i++){
		cin>>v[i];
	}

	for(int i=0;i<m;i++){
		int b=v.back();
		v.pop_back();
		v.insert(v.begin(),b);
	}

	for(int i=0;i<n;i++){
		if(flag==1)	cout<<" ";
		cout<<v[i];
		flag=1;
	}

	return 0;
}