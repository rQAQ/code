//既然拿得起,有什么理由放得下 
#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int mon,sum,ans;
int main(){
	for(int i=1;i<=12;i++){
		sum+=300;
		cin>>mon;
		if(mon>sum){
			cout<<"-"<<i;
			return 0;
		}else if(sum-mon>=100){
			ans+=(sum-mon)/100*100;
			sum-=(sum-mon)/100*100;
			sum-=mon;
		}else{
			sum-=mon;
		}
	}
	cout<<sum+ans/5+ans;
	return 0;
}
