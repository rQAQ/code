//你已经自由了,今生来世,我们今后永远不会结缘了,这样可以了吧
#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
struct pen{
	int num,pr;
};
pen a;
int sum,ans;
int main(){
	cin>>sum;
	ans=1e9;
	for(int i=1;i<=3;i++){
		cin>>a.num>>a.pr;
		int t=sum/a.num;
		if(sum%a.num!=0){
			t++;
		}
		if(a.pr*t<ans){
			ans=a.pr*t;
		}
	}
	cout<<ans;
	return 0;
}
