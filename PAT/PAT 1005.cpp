#include<cstdio>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

int n,k,flag;
int s[10000];

bool cmp(int a,int b){
	return a>b;
}

void fun(int n){
	if(n%2==0) n=n/2;
	else n=(3*n+1)/2;
	s[n]=1;
	if(n!=1) fun(n);
}

int main(){
	cin>>k;
	vector<int> v(k);
	for(int i=0;i<k;i++){
		cin>>n;
		v[i]=n;
		fun(n);
	}
	
	sort(v.begin(), v.end(),cmp);
	for(int i=0;i<v.size();i++){
		if(s[v[i]]==0){
			if(flag==1) cout<<" ";
			cout<<v[i];
			flag=1;
		}
	}

	return 0;
}