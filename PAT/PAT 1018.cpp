#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;


int n,p,cnta[3],cntb[3];

int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		char ga,gb;
		cin>>ga>>gb;
		if(ga==gb) p++;
		else if(ga=='C'&&gb=='J') cnta[1]++;
		else if(ga=='J'&&gb=='B') cnta[2]++;
		else if(ga=='B'&&gb=='C') cnta[0]++;
		else if(ga=='C'&&gb=='B') cntb[0]++;
		else if(ga=='B'&&gb=='J') cntb[2]++;
		else if(ga=='J'&&gb=='C') cntb[1]++;
	}
	
	cout<<cnta[0]+cnta[1]+cnta[2]<<" "<<p<<" "<<(n-cnta[0]-cnta[1]-cnta[2]-p)<<endl;
	cout<<(n-cnta[0]-cnta[1]-cnta[2]-p)<<" "<<p<<" "<<cnta[0]+cnta[1]+cnta[2]<<endl;
	int minn=0;
	for(int i=0;i<3;i++){
		if(cnta[minn]<cnta[i]) minn=i;
	}
	if(minn==0) cout<<"B"<<" ";
	if(minn==1) cout<<"C"<<" ";
	if(minn==2) cout<<"J"<<" ";
	minn=0;
	for(int i=0;i<3;i++){
		if(cntb[minn]<cntb[i]) minn=i;
	}
	if(minn==0) cout<<"B";
	if(minn==1) cout<<"C";
	if(minn==2) cout<<"J";

	return 0;
}
