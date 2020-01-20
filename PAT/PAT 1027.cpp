#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

int n,cnt,lef;
char ch;

void print(int a,int b){
	for(int i=0;i<a;i++){
		cout<<" ";
	}
	for(int i=0;i<b;i++){
		cout<<ch;
	}
	cout<<endl;
}

int main(){
	cin>>n>>ch;

	for(int i=1;;i++){
		if((2*i*i-1)>n){
			cnt=i-1;
			lef=n-2*cnt*cnt+1;
			break;
		}
	}
	for(int i=cnt;i>0;i--){
		print(cnt-i,2*i-1);
	}
	for(int i=2;i<=cnt;i++){
		print(cnt-i,2*i-1);
	}
	cout<<lef;

	return 0;
}