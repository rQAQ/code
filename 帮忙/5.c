#include <stdio.h>

int fact(int x){
	int z=1;
	for(int i=1;i<=x;i++) z*=10;
	return z;
}

int a,n;

int main(){
	scanf("%d%d",&a,&n);
	int i,s=a,p=a;
	if(n!=1){
		for(i=1;i<=n-1;i++){
			s+=fact(i)*a;
			p+=s;
		}
	}
	printf("s = %d",p);

	return 0;
}