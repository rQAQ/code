#include<stdio.h>

char s[85];
int cnt;

int main(){
	for(int i=0;;i++){
		char ch=getchar();
		if(ch=='\n') break;
		s[cnt++]=ch;
	}
	char ch=getchar();
	for(int i=0;i<cnt;i++){
		if(s[i]>='A'&&s[i]<='Z') putchar(ch);
		else putchar(s[i]);
	}

	return 0;
}