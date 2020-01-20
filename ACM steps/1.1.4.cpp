#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

int  n,sum;

int main(){
	cin>>n;
	for(int i=0;;i++){
		cin>>n;
		sum+=n;
		char ch=getchar();
		if(ch=='\n'){
			cout<<sum<<endl;
			sum=0;
			cin>>n;
			if(!n) break;
		}
	}

	return 0;
}