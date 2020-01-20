#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

int  n,m,a,sum;

int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>m;
		for(int j=0;j<m;j++){
			cin>>a;
			sum+=a;
		}
		cout<<sum<<endl;
		sum=0;
	}

	return 0;
}