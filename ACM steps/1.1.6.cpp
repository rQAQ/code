#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

int  n,m,a,sum;

int main(){
	while(cin>>n){
		for(int i=0;i<n;i++){
			cin>>m;
			sum+=m;
		}
		cout<<sum<<endl;
		sum=0;
	}

	return 0;
}