#include<stdio.h>

int sum,a[40],cnt;

void print(int n){
	printf("%d its factors are ",n);
	for(int i=0;i<cnt;i++){
		if(i) printf(",");
		printf("%d",a[i]);
	}
	printf("\n");
}

void cl(){
	for(int i=0;i<cnt;i++){
		a[i]=0;
	}
	cnt=0,sum=0;
}

int main(){
	for(int i=6;i<1000;i++){
		for(int j=1;j<i;j++){
			if(i%j==0){
				sum+=j;
				a[cnt++]=j;
			}
		}
		if(sum==i) print(sum);
		cl();
	}

	return 0;
}