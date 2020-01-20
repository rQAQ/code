#include<stdio.h>

int main(){
	/*int a[10];
	for(int i=0;i<10;i++) a[i]=i;
	int *p;
	p=a;
	for(int i=0;i<10;i++) printf("%d ",*p),p++;*/
	
	int a[]={1,2,3,5,6},x,*p;
	p=&a[2];
	printf("%d\n",*p);
	p=a+2;
	printf("%d\n",(*p)++);
	printf("%d\n",*p);
	/*3 4 3*/
	return 0;
}