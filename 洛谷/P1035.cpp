//坚持做自己喜欢的事情
#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
double sum;
int k,ans;
int main(){
	cin>>k;
	sum=0.0;
	for(int i=1;;i++){
		sum+=1.0/i;
		if(sum>k){
			ans=i;
			cout<<ans;
			return 0;
		}
	}
}
