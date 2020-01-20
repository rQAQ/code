#include<stdio.h>

int Array[10],min;

int main(){
	for(int i=0;i<6;i++){
		scanf("%d",&Array[i]);
		min=Array[min]<Array[i]?min:i;
	}
	printf("%d,%d\n",Array[min],min);

	return 0;
}