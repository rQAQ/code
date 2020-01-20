#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

string id,maxs,mins;
int maxt,mint=1e9,m;

int main(){
	cin>>m;
	for(int i=0;i<m;i++){
		int a,b,c,sum;
		cin>>id;
		scanf("%d:%d:%d",&a,&b,&c);
		sum=a*10000+b*100+c;
		if(mint>sum) mins=id,mint=sum;
		scanf("%d:%d:%d",&a,&b,&c);
		sum=a*10000+b*100+c;
		if(maxt<sum) maxs=id,maxt=sum;
	}
	cout<<mins<<" "<<maxs;

	return 0;
}