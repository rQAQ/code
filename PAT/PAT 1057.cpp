#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

char s[100005];
int sum,cnt[2];

int main(){
	for(int i=0;;i++){
		char ch=getchar();
		if(ch=='\n') break;
		if(ch>='A'&&ch<='Z') sum+=ch-'A'+1;
		if(ch>='a'&&ch<='z') sum+=ch-'a'+1;
	}
	while(sum){
		cnt[sum%2]++;
		sum>>=1;
	}
	cout<<cnt[0]<<" "<<cnt[1];

	return 0;
}