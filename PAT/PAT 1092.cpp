#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

struct node{
	int data,num;
}a[1005];

bool cmp(node a,node b){
	if(a.data==b.data) return a.num<b.num;
	return a.data>b.data;
}

int n,m,t;

int main(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>t;
			a[j].data+=t;
			a[j].num=j+1;
		}
	}
	sort(a,a+n,cmp);
	cout<<a[0].data<<endl;
	for(int i=0;i<n;i++){
		if(i) cout<<" ";
		if(a[i+1].data!=a[i].data){
			cout<<a[i].num;
			break;
		}
		cout<<a[i].num;
	}

	return 0;
}