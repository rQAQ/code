#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

int n,a,sum1,sum2,cnt,maxn,flag,cnt1;
double sum3,cnt2,avg;

void fun(int n){
	if(n%5==0&&n%2==0) sum1+=n;
	
	if(n%5==1&&flag==0){
		sum2+=n;
		flag=1;
		cnt1++;
	}else if(n%5==1&&flag==1){
		sum2-=n;
		flag=0;
	}

	if(n%5==2) cnt++;

	if(n%5==3){
		sum3+=n;
		cnt2++;
	} 

	if(n%5==4) maxn=max(maxn,n);
}

int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		fun(a);
	}

	if(sum1) cout<<sum1<<" ";
	else cout<<"N"<<" ";

	if(cnt1) cout<<sum2<<" ";
	else cout<<"N"<<" ";

	if(cnt) cout<<cnt<<" ";
	else cout<<"N"<<" ";

	avg=sum3/cnt2;
	if(sum3) printf("%.1f ",avg);
	else cout<<"N"<<" ";

	if(maxn) cout<<maxn;
	else cout<<"N";

	return 0;
}