#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

int n,cnt,cnt1,cnt2,d,k,flag;
double num,m,ans1,ans2,e;

int main(){
	cin>>n>>e>>d;
	for(int i=0;i<n;i++){
		cin>>m;
		flag=m>d?1:0;
		for(int j=0;j<m;j++){
			cin>>num;
			if(num<e) cnt++;
		}
		if(cnt>m/2&&flag) cnt2++;
		else if(cnt>m/2) cnt1++;
		cnt=flag=0;
	}
	ans1=(double)cnt1*100/n;
	ans2=(double)cnt2*100/n;
	printf("%.1lf%% %.1lf%%",ans1,ans2);

	return 0;
}