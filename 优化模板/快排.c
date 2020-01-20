#include <stdio.h>

int  a[100005],n;

inline int read(){
	int s=0,w=1;
	char ch=getchar();
	while(ch<'0'||ch>'9'){if(ch=='-')w=-1;ch=getchar();}
    while(ch>='0'&&ch<='9') s=s*10+ch-'0',ch=getchar();
    return s*w;
}

void swap(int *a,int *b){
    int t=*a;*a=*b;*b=t;
}

void quicksort1(int x,int y){
	int i=x,j=y,k=a[x];
	if(i>=j) return;
	while (i<j){
		while(i<j&&a[j]>=k) j--;
		swap(&a[i],&a[j]);
		while(i<j&&a[i]<k) i++;
		swap(&a[i],&a[j]);
	}	
	quicksort1(x,i-1);
	quicksort1(i+1,y);
	return;
}

void quicksort2(int l,int r){
	int mid=a[(l+r)/2];
    int i=l,j=r;
    while(i<=j){
        while(a[i]>mid) i++;
        while(a[j]<mid) j--;
        if(i<=j){
            swap(&a[i],&a[j]);
            i++,j--;
        }
    }
    if(l<j) quicksort2(l,j);
    if(i<r) quicksort2(i,r);
    return;
}

int main(){
	n=read();
	for(int i=0;i<n;i++) a[i]=read();
	quicksort1(0,n-1);
	for(int i=0;i<n;i++){
		if(i) printf(" ");
		printf("%d",a[i]);
	}
	printf("\n");
	quicksort2(0,n-1);
	for(int i=0;i<n;i++){
		if(i) printf(" ");
		printf("%d",a[i]);
	}

	return 0;
}

