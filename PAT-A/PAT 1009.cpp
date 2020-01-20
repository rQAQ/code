#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

int K,n,cnt;
double a[1005],ans[2005],m;

int main(){
	for(int i=0;i<2;i++){
		scanf("%d",&K);
		for(int j=0;j<K;j++){
			scanf("%d%lf",&n,&m);
			if(!i) a[n]=m;
			else{
				for(int k=0;k<1005;k++){
					ans[k+n]+=a[k]*m;
				}
			}
		}
	}
	for(int i=0;i<2005;i++){
		if(ans[i]) cnt++;
	}
	cout<<cnt;
	for(int i=2004;i>=0;i--){
		if(ans[i]) printf(" %d %.1lf",i,ans[i]);
	}

	return 0;
}