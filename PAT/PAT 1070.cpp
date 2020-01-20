#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

int n,ans,a[10005];

int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++) scanf("%d", &a[i]);
	sort(a,a+n);
	ans=a[0];
	for(int i=1;i<n;i++){
		ans=(ans+a[i])/2;
	}
	printf("%d\n",ans);	

	return 0;
} 

