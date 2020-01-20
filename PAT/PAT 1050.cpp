#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int N,n,m,cnt,x,y,flag,a[10005],ans[10005][10005];

inline int read(){
    int s=0,w=1;
    char ch=getchar();
    while(ch<'0'||ch>'9'){if(ch=='-')w=-1;ch=getchar();}
    while(ch>='0'&&ch<='9') s=s*10+ch-'0',ch=getchar();
    return s*w;
}

bool cmp(int a,int b){
	return a>b;
}

int main(){
	N=read();
	for(int i=0;i<N;i++){
		a[i]=read();
	}
	for(int i=1;i<=sqrt(N);i++){
		if(N%i==0) n=i,m=N/i;
	}
	sort(a,a+N,cmp);
	ans[0][0]=a[0];
	for(int i=0;cnt!=N-1;i++){
	    while(y<n-1&&ans[x][y+1]==0){
	    	ans[x][y+1]=a[cnt+1];
	    	y++,cnt++;
	    }
	    flag=1;
		while(x<m-1&&ans[x+1][y]==0){
			ans[x+1][y]=a[cnt+1];
			x++,cnt++;
		}
		while(y-1>=0&&ans[x][y-1]==0){
			ans[x][y-1]=a[cnt+1];
			y--,cnt++;
		}
		while(x-1>=0&&ans[x-1][y]==0){
			ans[x-1][y]=a[cnt+1];
			x--,cnt++;
		}
    }
	for(int i=0;i<m;i++){ 
	   for(int j=0;j<n;j++){
	   		if(j) printf(" ");
	   		printf("%d",ans[i][j]);
		}
	   	printf("\n");
 	}

    return 0;
}