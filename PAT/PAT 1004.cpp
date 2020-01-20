#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

struct node
{
	int s;
	string name,h;
};

int n;

bool cmp(node a,node b){
	return a.s>b.s;
}

int main(){
	cin>>n;
	node p[n];
	for(int i=0;i<n;i++){
		cin>>p[i].name>>p[i].h>>p[i].s;
	}
	sort(p,p+n,cmp);
	cout<<p[0].name<<" "<<p[0].h<<endl<<p[n-1].name<<" "<<p[n-1].h;

	return 0;
}