#include<cstdio>
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

char ch,a[10001];
int cnt;

int main(){
	scanf("%c%c.%[0-9]E%d",&ch,&a[0],a+1,&cnt);
	if(ch=='-') printf("-");
	if(cnt<0){
		printf("0.");
		cnt=-cnt-1;
		while(cnt){
			printf("0");
			cnt--;
		}
		printf("%s",a);
	}else{
		for(int i=0;i<=cnt||a[i];i++){
			if(i==cnt+1) printf(".");
			printf("%c",a[i]==0?'0':a[i]);
		}
	}

	return 0;
}