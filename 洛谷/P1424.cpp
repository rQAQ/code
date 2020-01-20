//ÎÒÏ²»¶±Õ×ÅÑÛÊıĞÇĞÇ
#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int x,n,sum;
int main(){
	cin>>x>>n;
	n+=x-1;
	int t=n/7;
	sum+=t*250*5;
	int s=n%7;
	if(s<6){
		sum+=250*s;
	}else{
		sum+=5*250;
	}
	if(x>5){
		sum-=5*250;
	}else{
		sum-=(x-1)*250;
	}
	cout<<sum;
	return 0;
} 
