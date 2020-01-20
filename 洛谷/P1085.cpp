//每个人的生命里，都有最艰难的那一年，将人生变得美好而辽阔
#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int a,b;
int s[8];
int main(){
	for(int i=1;i<=7;i++){
		cin>>a>>b;
		s[i]=a+b;
	}
	int ans=1;
	for(int i=2;i<=7;i++){
		//cout<<s[i]<<endl;
		if(s[i]>s[ans]){
			ans=i;
		//	cout<<"wa"<<endl;
		}
	}
	if(s[ans]>=8){
		cout<<ans;
	}else{
		cout<<0;
	}
	return 0;
} 
