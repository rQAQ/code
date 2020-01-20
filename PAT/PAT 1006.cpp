#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

int n,s[3],cnt;

int main(){
	cin>>n;
	
	while(n){
		s[cnt]=n%10;
		cnt++;
		n/=10;
	}

	for(int i=0;i<s[2];i++) cout<<"B";
	for(int i=0;i<s[1];i++) cout<<"S";
	for(int i=1;i<=s[0];i++) cout<<i;

	return 0;
}