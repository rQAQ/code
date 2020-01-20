#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

int t[10];

int main(){
	for(int i=0;;i++){
		char ch=getchar();
		if(ch=='\n') break;
		t[ch-'0']++;
	}

	for(int i=0;i<=9;i++){
		if(t[i]) cout<<i<<":"<<t[i]<<endl;
	}

	return 0;
}