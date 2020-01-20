#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

char ch;
int t[1005];

int main(){
	for(int i=0;;i++){
		ch=getchar();
		if(ch=='\n') break;
		if(!t[ch]) putchar(ch);
		t[ch]++;
	}
	for(int i=0;;i++){
		ch=getchar();
		if(ch=='\n') break;
		if(!t[ch]) putchar(ch);
		t[ch]++;
	}

	return 0;
}