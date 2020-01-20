#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

double sum=1,m,maxm,f;

void putans(int j){
	sum*=maxm;
	if(j==0) putchar('W');
	if(j==1) putchar('T');
	if(j==2) putchar('L');
	putchar(' ');
	f=maxm=0;
}

int main(){
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>m;
			if(m>maxm){
				maxm=m;
				f=j;
			}
		}
		putans(f);
	}
	printf("%.2lf",(sum*0.65-1)*2);

	return 0;
}