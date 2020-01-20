#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int solve1(char *a){
    int len=strlen(a);
    int x=0,r=1,y=0;
    for(int i=len-1;i>=0;i--){
        if(a[i]!='.'){
            x=x+(a[i]-'0')*r;
            r*=10;
            if(x>=0&&x<=255) continue;
            else {y++;break;}
        }else{
            x=0;
            r=1;
        } 
    }
    if(y==0) return 1;
    else return 0;
}
  
int solve2(char *a){
	int len=strlen(a);
	int cnt=0;
	for(int i=0;i<len;i++){
		if((a[i]<'0'||a[i]>'9')&&a[i]!='.') return 0;
		if(a[i]=='.') cnt++;
	}
	if(cnt>3) return 0;
	if(a[0]=='0'&&a[1]!='.') return 0;
	for(int i=1;i<len-1;i++){
		if(a[i-1]=='.'&&a[i]=='0'&&a[i+1]!='.') return 0;
	}
	return 1;
}

int main(){
    char s[32];
    while(scanf("%s",s)!=EOF){
        if(solve1(s)&&solve2(s)) printf("Y\n");
        else printf("N\n");
    }

    return 0;
}
