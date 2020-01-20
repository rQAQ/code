#include<stdio.h>

inline int read(){
	int s=0,w=1;
	char ch;
	while(ch<'0'||ch>'9'){if(ch=='-')w=-1;ch=getchar();}
	while(ch>='0'&&ch<='9') s=s*10+ch-'0',ch=getchar();
	return s*w;
}

int max,min=1e7,a[1005],n,maxc,minc;

int main(){
	n=read();
	for(int i=0;i<n;i++){
		a[i]=read();
		if(a[i]>max){
			max=a[i];
			maxc=i;
		}
		if(a[i]<min){
			min=a[i];
			minc=i;
		}
	}
	printf("max:%d\nmin:%d",maxc,minc);

	return 0;
}