#include<cstdio>
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int cnt,flag;
string s[81];

int main(){
	for(int i=0;;i++){
		cin>>s[i];
		char ch=getchar();
		if(ch=='\n') break;
		cnt++;
	}
	for(int i=cnt;i>=0;i--){
		if(flag==1) cout<<" ";
		cout<<s[i];
		flag=1;
	}

	return 0;
}