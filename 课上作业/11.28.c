#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int n;

char swap(char *p,char *q){
	char ch=*p;*p=*q;*q=ch;
}

void re(char *head,char *tail){
	while(1){
		if(head==tail||head==tail+1) break;
		swap(head,tail);
		head++,tail--;
	}
}

void DtoB(char *p,int n){
	char *head=p;
	while(n){
		*p=n%2+'0';
		p++;
		n/=2;
	}
	re(head,p-1);
}

int main(){
	scanf("%d",&n);
	char *head=NULL;
	head=(char *)malloc(sizeof(char));
	DtoB(head,n);
	printf("%s",head);

	return 0;
}