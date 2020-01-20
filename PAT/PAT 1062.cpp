#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int gcd(int x,int y){
	return y?gcd(y,x%y):x;
}

int gcm(int x,int y){
	return x*y/gcd(x,y);
}

int q[1005],j,a,b,c,d,e;

int main(){
    scanf("%d/%d %d/%d %d",&a,&b,&c,&d,&e);
    int t=gcm(b,d);
    int t1=gcm(t,e);
    int first=a*t1/b,end1=c*t1/d;
    if(first>end1) swap(first,end1);
    int g=t1/e;
    for(int i=first+1;i<end1;i++){
        if(i%g==0 && gcd(i/g,e)==1)
            q[j++]=i/g;
    }
    for(int i=0;i<j;i++){
    	if(i) printf(" ");
        printf("%d/%d",q[i],e);
    }

 	return 0;
}