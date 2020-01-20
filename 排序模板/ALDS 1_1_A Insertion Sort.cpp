#include<stdio.h>

/*按顺序输出数组元素*/
void trace(int A[],int n){
	for(int i=0;i<n;i++){
		if(i>0) printf(" ");	//在相邻元素之间输出一个空格(好看)
		printf("%d",A[i]);
	}
	printf("\n");
}

/*插入排序(0起点数组)*/
void insertionSort(int A[],int n){
	for(int i=1;i<n;i++){
		int v=A[i];
		int j=i-1;
		while(j>=0&&A[j]>v){
			A[j+1]=A[j];
			j--;
		}
		A[j+1]=v;
		trace(A,n);
	}
}

int main(){
	int n;
	int A[100];

	scanf("%d",&n);
	for(int i=0;i<n;i++) scanf("%d",&A[i]);

	trace(A,n);
	insertionSort(A,n);
	
	return 0;
}
