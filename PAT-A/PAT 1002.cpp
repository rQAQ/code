#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

int k,n,cnt;
double a[1005],m;

int main(){
	for(int i=0;i<2;i++){
		scanf("%d",&k);
		for(int j=0;j<k;j++){
			scanf("%d%lf",&n,&m);
			a[n]+=m;
		}
	}
	for(int i=0;i<1005;i++){
		if(a[i]) cnt++;
	}
	cout<<cnt;
	for(int i=1004;i>=0;i--){
		if(a[i]) printf(" %d %.1lf",i,a[i]);
	}

	return 0;
}