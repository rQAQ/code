#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long

inline int read(){
	int s=0,w=1;
	char ch=getchar();
	while(ch<'0'||ch>'9'){if(ch=='-')w=-1;ch=getchar();}
    while(ch>='0'&&ch<='9') s=s*10+ch-'0',ch=getchar();
    return s*w;
}

void print(int x){
	if(x<0) putchar('-'),x=-x;
	if(x>9) print(x/10);
	putchar(x%10+'0');
}

struct node{
	int h,w,s;
}a;


int n;

int main(){
	n=read();
	for(int i=0;i<n;i++){
		a.s=read(),a.h=read(),a.w=read();
		if(a.s){
			if(a.h==130){
				printf("wan mei!");
			}
			if(a.h>130){
				printf("ni li hai!");
			}
			if(a.h<130){
				printf("duo chi yu!");
			}
			printf(" ");
			if(a.w==27){
				printf("wan mei!");
			}
			if(a.w>27){
				printf("shao chi rou!");
			}
			if(a.w<27){
				printf("duo chi rou!");
			}
		}else{
			if(a.h==129){
				printf("wan mei!");
			}
			if(a.h>129){
				printf("ni li hai!");
			}
			if(a.h<129){
				printf("duo chi yu!");
			}
			printf(" ");
			if(a.w==25){
				printf("wan mei!");
			}
			if(a.w>25){
				printf("shao chi rou!");
			}
			if(a.w<25){
				printf("duo chi rou!");
			}
		}
		printf("\n");
	}

	return 0;
}	