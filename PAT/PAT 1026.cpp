#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

struct clockyep
{
	int h,m,s;
}cl;

double c1,c2,c;



int main(){
	 cin>>c1>>c2;

	 c=(c2-c1)/100;
	 cl.h=c/3600;
	 c-=cl.h*3600;
	 cl.m=c/60;
	 c-=cl.m*60;
	 cl.s=round(c);

	 printf("%02d:%02d:%02d",cl.h,cl.m,cl.s);

	 return 0;
}