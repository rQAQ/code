#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

char ch;
double n;

int main(){
	cin>>n>>ch;

	for(int i=0;i<n;i++) cout<<ch;
	cout<<endl;
	double a=round(n/2);
	for(int i=0;i<a-2;i++){
		cout<<ch;
		for(int j=0;j<n-2;j++) cout<<" ";
		cout<<ch<<endl;
	}
	for(int i=0;i<n;i++) cout<<ch;

	return 0;
}	