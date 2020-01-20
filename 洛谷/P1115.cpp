#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

int n,a[200200],minn=-1e9+7;

inline int read(){
	int s=0,w=1;
	char ch;
	while(ch<'0'||ch>'9'){if(ch=='-')w=-1;ch=getchar();}
	while(ch>='0'&&ch<='9') s=s*10+ch-'0',ch=getchar();
	return s*w;
}

void print(int x){
	if(x<0) putchar('-'),x=-x;
	if(x>9) print(x/10);
	putchar(x%10+'0');
}

int rec(int l,int r){
	if(l==r) return a[l];
	int mid=(l+r)>>1;
	int sum=0,ret1=minn,ret2=minn;
	for(int i=mid;i>=l;i--){
		sum+=a[i];
		ret1=max(ret1,sum);
	}
	sum=0;
	for(int i=mid+1;i<=r;i++){
		sum+=a[i];
		ret2=max(ret2,sum);
	}
	return max(max(rec(l,mid),rec(mid+1,r)),ret1+ret2);
}

int main(){
	n=read();
	for(int i=0;i<n;i++){
		a[i]=read();
	}
	print(rec(0,n-1));

	return 0;
}