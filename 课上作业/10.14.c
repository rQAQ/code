#include<stdio.h>
#include<stdlib.h>

int main(){
	int m=3,n=9;
	int a[3][9]={{0,1,2},{3,4,5,6,7,8,9,10,11},{5,6}};
   	int **p;
    p=(int**)malloc(sizeof(int*)*m);//动态分配空间，P是指针的指针 ，p的值是一个地址，在这个地址里寸的是指针p[i]的值 
	for(int i=0;i<m;i++)
	{
	  p[i]=(int*)malloc(sizeof(int)*n);//p[i]是指针，p[i]的值也是地址，里面存放的是p[i][j]的值 
	  //p[i]为指针 
	  for(int j=0;j<n;j++)
	  p[i][j]=a[i][j];
	} 
	
	printf("%d\r\n",p[2][1]);
}