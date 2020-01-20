#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

int s,t,n,total;

int main(){	
	scanf("%d",&n);
	for(int i=0;i<n;++i){
		scanf("%d",&t);
		if(t==s){
			total+=5;
			continue;
		}
		if(t>s) total+=(t-s)*6+5;
		else total+=(s-t)*4+5;
		s=t;
	}
	printf("%d",total);
	
	return 0;
} 
