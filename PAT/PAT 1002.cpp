#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

char ch;
int sum,a[102],cnt;

void fun(int a){
	if(a==0) cout<<"ling";
	if(a==1) cout<<"yi";
	if(a==2) cout<<"er";
	if(a==3) cout<<"san";
	if(a==4) cout<<"si";
	if(a==5) cout<<"wu";
	if(a==6) cout<<"liu";
	if(a==7) cout<<"qi";
	if(a==8) cout<<"ba";
	if(a==9) cout<<"jiu";
}

int main(){
	for(int i=0;i<102;i++){
		ch=getchar();
		if(ch=='\n') break;
		else sum+=ch-'0';
	}

	while(sum){
		a[cnt]=sum%10;
		cnt++;
		sum=sum/10;
	}
	for(int i=cnt-1;i>0;i--){
		fun(a[i]);
		cout<<' ';
	}

	fun(a[0]);

	return 0;
}