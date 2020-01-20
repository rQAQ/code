#include<stdio.h>

char c[6],ch;
int cnt;

int main(){
	for(;;){
		ch=getchar();
		if(ch<'0'||ch>'9') break;
		else c[cnt++]=ch;
	}
	printf("%d\n",cnt);
	for(int i=0;i<cnt;i++){
		if(i) printf(" ");
		printf("%c",c[i]);
	}
	printf("\n");
	for(int i=cnt-1;i>=0;i--){
		printf("%c",c[i]); 
	}

	return 0;
}