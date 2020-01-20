#include<stdio.h>
#include<string.h>

char s[55];
int cnt,m;
double ans=1.0,sum;

int main(){
	for(int i=0;;i++){
		char ch=getchar();
		if(ch=='\n') break;
		s[cnt++]=ch;
	}
	if(s[0]=='-') ans*=1.5;
	if((s[cnt-1]-48)%2==0) ans*=2;
	for(int i=0;i<cnt;i++){
	  	if(s[i]=='2') m++;
	  }
	if(s[0]=='-') cnt--;
	sum=(double)((double)m/cnt)*ans*100;
	printf("%.2lf%%\n",sum);
	
	return 0;
} 