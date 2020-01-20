#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

struct node
{
	int x,d;
}a[100005];

int flag;

void fun(node a){
	if(a.d*a.x==0) return;
	else{
		if(flag==1) cout<<" ";
		cout<<a.d*a.x<<" "<<a.d-1;
		flag=1;
	}
}

int main(){
	for(int i=0;;i++){
		cin>>a[i].x>>a[i].d;
		if(a[i].d==0&&i==0){
			cout<<0<<" "<<0;
			return 0;
		}
		fun(a[i]);
		char ch=getchar();
		if(ch=='\n') break;
	}

	return 0;
}