#include<stdio.h>

int flag=1,mark=1,sum;
char a;

int main(){
	while(scanf("%c",&a),a!='#'){
		if(a>='0'&&a<='9'){
			flag=0;
			sum=sum*16+a-'0';
		}
		else if(a>='a'&&a<='f'){
			flag=0;
			sum=sum*16+a-'a'+10;
		}
		else if(a>='A'&&a<='F'){
			flag=0;
			sum=sum*16+a-'A'+10;
		}
		else if(a=='-'&&flag==1) mark=0;
	}
	if(sum==0) printf("0");
	else{
		if(mark==0) printf("-");
		printf("%d\n",sum);
	}
	
	return 0;
}