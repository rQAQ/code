#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

int a,b;

int main(){
	while(cin>>a>>b){
		if(!a&&!b) continue;
		cout<<a+b<<endl;
	}

	return 0;
}