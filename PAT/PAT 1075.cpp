#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

struct node{
	int data,next;
}a[100005];

int n,k,start,p,f;
vector<int>v[3];

int main(){
	cin>>start>>n>>k;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		cin>>a[x].data>>a[x].next;
	}
	p=start;
	while(p!=-1){
		if(a[p].data<0) v[0].push_back(p);
		else if(a[p].data>=0&&a[p].data<=k) v[1].push_back(p);
		else v[2].push_back(p);
		p=a[p].next;
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<v[i].size();j++){
			if(!f){
                printf("%05d %d ",v[i][j],a[v[i][j]].data);
                f=1;
            }else{
            	printf("%05d\n%05d %d ",v[i][j],v[i][j],a[v[i][j]].data);
            }
		}
	}
	cout<<"-1";

	return 0;
}	