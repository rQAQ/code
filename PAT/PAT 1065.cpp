#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

struct node{
	int f,o;
}ans[100005];

int n,m,t,cnt,a[100005];

int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>m>>t;
		ans[m].o=t;
		ans[t].o=m;
	}
	cin>>m;
	for(int i=0;i<m;i++){
		cin>>t;
		ans[t].f=1;
	}
	for(int i=0;i<100005;i++){
		if(ans[i].f&&!ans[ans[i].o].f) a[cnt++]=i;
	}
	cout<<cnt<<endl;
	for(int i=0;i<cnt;i++){
		if(i) cout<<" ";
		printf("%05d",a[i]);
	}

	return 0;
}