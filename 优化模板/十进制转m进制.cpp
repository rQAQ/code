#include<cstdlib>
#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

int n,a[100005],cnt,m;

int main(){
	cin>>n>>m;
	
	while(n){
		a[cnt++]=n%m;
		n/=m;
	}
	
	for(int i=cnt-1;i>=0;i--) cout<<a[i];

	return 0;
}