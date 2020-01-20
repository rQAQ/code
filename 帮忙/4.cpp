#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

int h,t,d;

int  main(){
    for(int i=100;i<1000;i++){
        h=i/100;
        t=(i-h*100)/10;
        d=i%10;
        if(i==h*h*h+t*t*t+d*d*d){
        	if(i!=159) printf(" ");
        	printf("%d",i);
        }
	}
	
	return 0;
}