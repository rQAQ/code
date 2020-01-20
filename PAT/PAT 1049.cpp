#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

double sum,a[100005],t1,t2;
int n;

int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		scanf("%lf",&a[i]);
	}
	t1=t2=n;
	for(int i=1;i<=n;i++){
		sum+=t1*a[i];
		t2--;
		t1=t2*(i+1);
	}
	printf("%.2lf",sum);	

	return 0;
}
