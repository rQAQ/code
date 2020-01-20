//便纵有千种风情,更与何人说
#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
double a,sum;
int main(){
	cin>>a;
	double s=2;
	for(int i=1;;i++){
		sum+=s;
		s=0.98*s;
		if(sum>=a){
			cout<<i;
			return 0;
		}
	}
	return 0;
} 
