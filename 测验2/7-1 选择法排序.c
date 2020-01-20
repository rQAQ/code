#include<stdio.h>

int a[11];

void swap(int *a,int *b){
	int t=*a;*a=*b;*b=t;
}

int main(){
	for(int i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<3;i++){
		int k=i;
		for(int j=i+1;j<10;j++)
			if(a[j]<a[k]) k=j;
			swap(&a[k],&a[i]);
	}
	for(int i=0;i<10;i++){
		printf("%5d",a[i]);
	}
	
	return 0;
}
