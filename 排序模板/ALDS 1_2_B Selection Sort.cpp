#include<stdio.h>

/*选择排序法(0起点)*/
int selectionSort(int A[],int n){
	int t,minj,sw=0;
	for(int i=0;i<n-1;i++){
		minj=i;
		for(int j=i;j<n;j++){
			if(A[j]<A[minj]) minj=j;
		}
		t=A[i];
		A[i]=A[minj];
		A[minj]=t;
		if(i!=minj) sw++;
	}
	return sw;
}

int main(){
	int A[100],n,sw;

	scanf("%d",&n);
	for(int i=0;i<n;i++) scanf("%d",&A[i]);

	sw=selectionSort(A,n);
	
	for(int i=0;i<n;i++){
		if(i>0) printf(" ");
		printf("%d",A[i]);
	}
	printf("\n");
	printf("%d\n",sw);
	
	return 0;
}