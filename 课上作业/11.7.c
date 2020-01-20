#include<stdio.h>

int sum(int x){
	int res=x;
	if(x==1) return 1;
	else return res+=sum(x-1);
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%d",sum(n));

	return 0;
}