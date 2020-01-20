#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#define ll long long
using namespace std;

vector<int> v;
ll sum;
char ch;

void print(int x){
	if(x==0) printf("zero");
	if(x==1) printf("one");
	if(x==2) printf("two");
	if(x==3) printf("three");
	if(x==4) printf("four");
	if(x==5) printf("five");
	if(x==6) printf("six");
	if(x==7) printf("seven");
	if(x==8) printf("eight");
	if(x==9) printf("nine");
}

int main(){
	for(int i=0;;i++){
		ch=getchar();
		if(ch=='\n') break;
		sum+=ch-'0';
	}
	if(!sum) return printf("zero"),0;
	while(sum){
		v.push_back(sum%10);
		sum/=10;
	}
	for(int i=v.size()-1;i>=0;i--){
		if(i!=v.size()-1) printf(" ");
		print(v[i]);
	}

	return 0;
}