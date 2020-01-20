#include<stdio.h>
#include<stdlib.h>

int main(){
    int len;
    char *s;//=new char;
    s=(char*)malloc(sizeof(char*)*4);
    scanf("%s",s);
    for(len=0;*s!='\0';len++,s++){
        putchar(*s);
    }
    printf("\n%d",len);
    free(s);

    return 0;
}